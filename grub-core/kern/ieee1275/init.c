/*  init.c -- Initialize GRUB on the newworld mac (PPC).  */
/*
 *  GRUB  --  GRand Unified Bootloader
 *  Copyright (C) 2003,2004,2005,2007,2008,2009 Free Software Foundation, Inc.
 *
 *  GRUB is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  GRUB is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GRUB.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <grub/kernel.h>
#include <grub/dl.h>
#include <grub/disk.h>
#include <grub/mm.h>
#include <grub/partition.h>
#include <grub/normal.h>
#include <grub/fs.h>
#include <grub/setjmp.h>
#include <grub/env.h>
#include <grub/misc.h>
#include <grub/time.h>
#include <grub/ieee1275/console.h>
#include <grub/ieee1275/ofdisk.h>
#ifdef __sparc__
#include <grub/ieee1275/obdisk.h>
#endif
#include <grub/ieee1275/ieee1275.h>
#include <grub/net.h>
#include <grub/offsets.h>
#include <grub/memory.h>
#include <grub/loader.h>
#ifdef __i386__
#include <grub/cpu/tsc.h>
#endif
#ifdef __sparc__
#include <grub/machine/kernel.h>
#endif

/* The minimal heap size we can live with. */
#define HEAP_MIN_SIZE		(unsigned long) (2 * 1024 * 1024)

/* The maximum heap size we're going to claim */
#ifdef __i386__
#define HEAP_MAX_SIZE		(unsigned long) (64 * 1024 * 1024)
#else
#define HEAP_MAX_SIZE		0x80000000UL
#endif

extern char _start[];
extern char _end[];

#ifdef __sparc__
grub_addr_t grub_ieee1275_original_stack;
#endif

void
grub_exit (void)
{
  grub_ieee1275_exit ();
}

/* Translate an OF filesystem path (separated by backslashes), into a GRUB
   path (separated by forward slashes).  */
static void
grub_translate_ieee1275_path (char *filepath)
{
  char *backslash;

  backslash = grub_strchr (filepath, '\\');
  while (backslash != 0)
    {
      *backslash = '/';
      backslash = grub_strchr (filepath, '\\');
    }
}

void (*grub_ieee1275_net_config) (const char *dev, char **device, char **path,
                                  char *bootpath);
void
grub_machine_get_bootlocation (char **device, char **path)
{
  char *bootpath;
  char *filename;
  char *type;

  bootpath = grub_ieee1275_get_boot_dev ();
  if (! bootpath)
    return;

  /* Transform an OF device path to a GRUB path.  */

  type = grub_ieee1275_get_device_type (bootpath);
  if (type && grub_strcmp (type, "network") == 0)
    {
      char *dev, *canon;
      char *ptr;
      dev = grub_ieee1275_get_aliasdevname (bootpath);
      canon = grub_ieee1275_canonicalise_devname (dev);
      if (! canon)
        return;
      ptr = canon + grub_strlen (canon) - 1;
      while (ptr > canon && (*ptr == ',' || *ptr == ':'))
	ptr--;
      ptr++;
      *ptr = 0;

      if (grub_ieee1275_net_config)
	grub_ieee1275_net_config (canon, device, path, bootpath);
      grub_free (dev);
      grub_free (canon);
    }
  else
    *device = grub_ieee1275_encode_devname (bootpath);
  grub_free (type);

  filename = grub_ieee1275_get_filename (bootpath);
  if (filename)
    {
      char *lastslash = grub_strrchr (filename, '\\');

      /* Truncate at last directory.  */
      if (lastslash)
        {
	  *lastslash = '\0';
	  grub_translate_ieee1275_path (filename);

	  *path = filename;
	}
    }
  grub_free (bootpath);
}

/* Claim some available memory in the first /memory node. */
#ifdef __sparc__
static void 
grub_claim_heap (void)
{
  grub_mm_init_region ((void *) (grub_modules_get_end ()
				 + GRUB_KERNEL_MACHINE_STACK_SIZE), 0x200000);
}
#else
// per the PAPR OF binding (and our build process) we are a 32 bit binary, so we deliberately do not
// consider memory beyond the 4GB boundary.
// as such we use 32 bit ints for size.
struct heap_init_ctx {
  unsigned int block_num;
  grub_uint32_t size;
  grub_uint32_t largest_block_size;
  unsigned int largest_block_idx;
  grub_uint32_t desired_size;
};

#define LINUX_RMO_TOP 0x30000000

/* Helper for grub_claim_heap on powerpc. */
static int
heap_size (grub_uint64_t addr, grub_uint64_t len, grub_memory_type_t type,
	   void *data)
{
  struct heap_init_ctx *ctx = data;

  if (type != GRUB_MEMORY_AVAILABLE)
    return 0;

  // We build on ppc as a 32bit binary, so we are limited to memory below 4G
  if (addr > 0xffffffffUL)
    return 0;

  if (addr + len > 0xffffffffUL)
    len = 0xffffffffUL - addr;

  // we have to be a bit careful around 0x3000_0000 - Linux puts the top of the
  // RMO there (768MB), and then tries to allocate from there down. So make sure
  // we don't accidentally put a bunch of stuff in the region leading up to there

  if (addr < LINUX_RMO_TOP && (addr + len) > LINUX_RMO_TOP)
    {
      len = addr + len - LINUX_RMO_TOP;
      addr = LINUX_RMO_TOP;
    }

  ctx->size += len;
  if (len > ctx->largest_block_size)
    {
      ctx->largest_block_size = len;
      ctx->largest_block_idx = ctx->block_num;
    }

  ctx->block_num ++;

  return 0;
}

static int
heap_init (grub_uint64_t addr, grub_uint64_t len, grub_memory_type_t type,
	   void *data)
{
  struct heap_init_ctx *ctx = data;

  if (type != GRUB_MEMORY_AVAILABLE)
    return 0;

  // We build on ppc as a 32bit binary, so we are limited to memory below 4G
  if (addr > 0xffffffffUL)
    return 0;

  if (addr + len > 0xffffffffUL)
    len = 0xffffffffUL - addr;

  if (grub_ieee1275_test_flag (GRUB_IEEE1275_FLAG_NO_PRE1_5M_CLAIM))
    {
      if (addr + len <= 0x180000)
	return 0;

      if (addr < 0x180000)
	{
	  len = addr + len - 0x180000;
	  addr = 0x180000;
	}
    }

  // we have to be a bit careful around 0x3000_0000 - Linux puts the top of the
  // RMO there (768MB) even if you have more memory., and then tries to allocate from there down. So make sure
  // we don't accidentally put a bunch of stuff in the region leading up to there
  // now on ppc64 the memory size has to be a multiple of 256MB, so if we have 1GB
  // and we go up from 768MB that should be a decent block.
  // on ppc32, we can have smaller increments so we'll have to sor that out a bit better

  if (addr < LINUX_RMO_TOP && (addr + len) > LINUX_RMO_TOP)
    {
      len = addr + len - LINUX_RMO_TOP;
      addr = LINUX_RMO_TOP;
    }

#if 0
  len -= 1; /* Required for some firmware.  */
#endif

  /* In theory, firmware should already prevent this from happening by not
     listing our own image in /memory/available.  The check below is intended
     as a safeguard in case that doesn't happen.  However, it doesn't protect
     us from corrupting our module area, which extends up to a
     yet-undetermined region above _end.  */
  if ((addr < (grub_addr_t) _end) && ((addr + len) > (grub_addr_t) _start))
    {
      grub_printf ("Warning: attempt to claim over our own code!\n");
      len = 0;
    }


  // prefer to allocate out of largest_block; only fail to do so if
  // the largest high block is too small
  if (ctx->block_num == ctx->largest_block_idx)
    {
      if (len > ctx->desired_size)
        len = ctx->desired_size;
    }
  else
    {
      if (ctx->desired_size > ctx->largest_block_size)
        {
	  if (len > ctx->desired_size - ctx->largest_block_size)
	    len = ctx->desired_size - ctx->largest_block_size;
        }
      else
        {
	  // we don't need to allocate from this block
	  len = 0;
	}
    }

  if (len > ctx->desired_size)
    len = ctx->desired_size;

  if (len)
    {
      grub_err_t err;
      grub_printf("claiming %llx %llx\n", addr, len);
      /* Claim and use it.  */
      err = grub_claimmap (addr, len);
      if (err)
	return err;
      grub_mm_init_region ((void *) (grub_addr_t) addr, len);
      ctx->desired_size -= len;
    }


  ctx->block_num ++;

  if (ctx->desired_size == 0)
    return 1;

  return 0;
}

static void 
grub_claim_heap (void)
{
  struct heap_init_ctx ctx = {};

  // i accept that I've broken this for now
#if 0
  if (grub_ieee1275_test_flag (GRUB_IEEE1275_FLAG_FORCE_CLAIM))
    heap_init (GRUB_IEEE1275_STATIC_HEAP_START, GRUB_IEEE1275_STATIC_HEAP_LEN,
	       1, &total);
  else
#endif
    {
      grub_machine_mmap_iterate (heap_size, &ctx);

      grub_printf("Found %u blocks, total of %x addressible mem, largest block %u - %x\n", ctx.block_num, ctx.size, ctx.largest_block_idx, ctx.largest_block_size);
      ctx.block_num = 0;
      ctx.desired_size = ctx.size / 2;
      if (ctx.desired_size < HEAP_MIN_SIZE)
	      ctx.desired_size = HEAP_MIN_SIZE;
      if (ctx.desired_size > HEAP_MAX_SIZE)
        ctx.desired_size = HEAP_MAX_SIZE;

      grub_machine_mmap_iterate (heap_init, &ctx);
      
    }
}
#endif

static void
grub_parse_cmdline (void)
{
  grub_ssize_t actual;
  char args[256];

  if (grub_ieee1275_get_property (grub_ieee1275_chosen, "bootargs", &args,
				  sizeof args, &actual) == 0
      && actual > 1)
    {
      int i = 0;

      while (i < actual)
	{
	  char *command = &args[i];
	  char *end;
	  char *val;

	  end = grub_strchr (command, ';');
	  if (end == 0)
	    i = actual; /* No more commands after this one.  */
	  else
	    {
	      *end = '\0';
	      i += end - command + 1;
	      while (grub_isspace(args[i]))
		i++;
	    }

	  /* Process command.  */
	  val = grub_strchr (command, '=');
	  if (val)
	    {
	      *val = '\0';
	      grub_env_set (command, val + 1);
	    }
	}
    }
}

static void
grub_get_ieee1275_secure_boot (void)
{
  grub_ieee1275_phandle_t root;
  int rc;
  grub_uint32_t is_sb;

  grub_ieee1275_finddevice ("/", &root);

  rc = grub_ieee1275_get_integer_property (root, "ibm,secure-boot", &is_sb,
                                           sizeof (is_sb), 0);

  /* ibm,secure-boot:
   * 0 - disabled
   * 1 - audit
   * 2 - enforce
   * 3 - enforce + OS-specific behaviour
   *
   * We only support enforce.
   */
  if (rc >= 0 && is_sb >= 2)
    grub_env_set("check_appended_signatures", "forced");
}

grub_addr_t grub_modbase;

void
grub_machine_init (void)
{
  grub_modbase = ALIGN_UP((grub_addr_t) _end 
			  + GRUB_KERNEL_MACHINE_MOD_GAP,
			  GRUB_KERNEL_MACHINE_MOD_ALIGN);
  grub_ieee1275_init ();

  grub_console_init_early ();
  grub_claim_heap ();
  grub_console_init_lately ();
#ifdef __sparc__
  grub_obdisk_init ();
#else
  grub_ofdisk_init ();
#endif
  grub_parse_cmdline ();

#ifdef __i386__
  grub_tsc_init ();
#else
  grub_install_get_time_ms (grub_rtc_get_time_ms);
#endif

  grub_get_ieee1275_secure_boot ();
}

void
grub_machine_fini (int flags)
{
  if (flags & GRUB_LOADER_FLAG_NORETURN)
    {
#ifdef __sparc__
      grub_obdisk_fini ();
#else
      grub_ofdisk_fini ();
#endif
      grub_console_fini ();
    }
}

grub_uint64_t
grub_rtc_get_time_ms (void)
{
  grub_uint32_t msecs = 0;

  grub_ieee1275_milliseconds (&msecs);

  return msecs;
}

/* cmdline.c - linux command line handling */
/*
 *  GRUB  --  GRand Unified Bootloader
 *  Copyright (C) 2010  Free Software Foundation, Inc.
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

#include <grub/lib/cmdline.h>
#include <grub/misc.h>

unsigned int grub_loader_cmdline_size (int argc, char *argv[])
{
  int i;
  unsigned int size = 0;

  for (i = 0; i < argc; i++)
    {
      size += grub_strlen(argv[i]);
      size++; /* Separator space or NULL.  */
    }

  if (size == 0)
    size = 1;

  return size;
}

grub_err_t
grub_create_loader_cmdline (int argc, char *argv[], char *buf,
			    grub_size_t size, enum grub_verify_string_type type)
{
  int i;
  unsigned int arg_size;
  char *orig_buf = buf;

  for (i = 0; i < argc; i++)
    {
      arg_size = grub_strlen(argv[i]);

      /* Separator space or NULL.  */
      if (size < arg_size + 1)
	break;

      grub_memcpy(buf, argv[i], arg_size);
      size -= arg_size + 1;
      buf += arg_size;
      *buf++ = ' ';
    }

  /* Replace last space with null.  */
  if (i)
    buf--;

  *buf = 0;

  return grub_verify_string (orig_buf, type);
}

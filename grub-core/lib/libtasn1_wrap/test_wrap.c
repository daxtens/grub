#include <grub/dl.h>
#include <grub/extcmd.h>
#include <grub/i18n.h>

GRUB_MOD_LICENSE ("GPLv3+");

#define stderr NULL
#define fprintf(a, ...) grub_fatal(__VA_ARGS__)

#define main test_simple
int test_simple(int argc, char *argv[]);
#include "../libtasn1/tests/Test_simple.c"
#undef main

#define main test_strings
int test_strings(int argc, char *argv[]);
#include "../libtasn1/tests/Test_strings.c"
#undef main

static grub_err_t
grub_cmd_asn1test (grub_extcmd_context_t ctxt, int argc, char **args)
{
  test_simple(0, NULL);
  test_strings(0, NULL);

  grub_printf("Tests succeeded.");
  return GRUB_ERR_NONE;
}

static grub_extcmd_t cmd;

GRUB_MOD_INIT(asn1test)
{
  cmd = grub_register_extcmd ("asn1test", grub_cmd_asn1test, 0, NULL,
			      N_("Test asn1 module."),
			      NULL);
}

GRUB_MOD_FINI(asn1test)
{
  grub_unregister_extcmd (cmd);
}

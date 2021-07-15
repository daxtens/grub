#define RUST_WRAPPER
#include <grub/dl.h>

GRUB_MOD_LICENSE("GPLv3+");
/* rust code defines grub_rust_hello_{init,fini}, this is just for the
   scripts that determine modules */
GRUB_MOD_INIT(rust_hello);
GRUB_MOD_FINI(rust_hello);

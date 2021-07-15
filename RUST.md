Creates a `hello_rust` module that calls `grub_printf()` when loaded.

Should "just work" on x86_64-emu, x86_64-efi and powerpc-ieee1275, assuming
you have the right rust toolchains installed. Parallel make tends to break,
as the entire build process is a massive hack.

You can run a test with `./test_rust`, it is silent on success, so check the
error code.

If you build `grub-emu`, you might need to pipe it through `less` as the
message gets printed before the screen gets blanked.

If you're running with real module support, `insmod rust_hello` should
print the happy message.

More details
------------

`bindgen` creates `lib/rust/src/bindings.rs`.

Bindings are compiled into a `grub` rust library.

In `commands/rust-hello` there is rust code built into a static library that
is linked by grub with a C wrapper file which provides module license and
load/unload points. It goes through the usual grub process to become a regular
module that can be built into `grub-emu` or loaded dynamically. Everything
seems to just work.

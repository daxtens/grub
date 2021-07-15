#![no_std]

use grub;


#[no_mangle]
pub extern "C" fn grub_rust_hello_init() {
	unsafe { grub::bindings::grub_printf("Hello from Rust\0".as_ptr() as *const _) };
}

#[no_mangle]
pub extern "C" fn grub_rust_hello_fini() {}

#![no_std]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(non_snake_case)]
#![allow(unused)]

use core::panic::PanicInfo;
mod bindings;


#[no_mangle]
pub extern "C" fn grub_rust_hello_init() {
	unsafe { bindings::grub_printf("Hello from Rust\0".as_ptr() as *const _) };
}

#[no_mangle]
pub extern "C" fn grub_rust_hello_fini() {}

#[panic_handler]
fn panicker(reason: &PanicInfo) -> !
{
	// todo, more info
	unsafe { bindings::grub_fatal("Panic in Rust".as_ptr() as *const _) };

	// grub_fatal should not return but keep compiler happy
	loop {};
}

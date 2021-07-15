#![no_std]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(non_snake_case)]
#![allow(unused)]

pub mod bindings;
use core::panic::PanicInfo;

#[panic_handler]
fn panicker(reason: &PanicInfo) -> !
{
	// todo, more info
	unsafe { bindings::grub_fatal("Panic in Rust\0".as_ptr() as *const _) };

	// grub_fatal should not return but keep compiler happy
	loop {};
}

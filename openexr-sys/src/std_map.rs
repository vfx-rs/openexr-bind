#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct std__map_std__string_std__string__t {
    _unused: [u8; 0],
}


extern "C" {

pub fn std__map_std__string_std__string__ctor(this_: *mut *mut std_map_string_string_t) -> Exception;

pub fn std__map_std__string_std__string__dtor(this_: *mut std_map_string_string_t) -> Exception;


} // extern "C"

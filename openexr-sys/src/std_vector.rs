#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct std__vector_std__string__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct std__vector_float__t {
    _unused: [u8; 0],
}


extern "C" {

pub fn std__vector_std__string__ctor(this_: *mut *mut std_vector_string_t) -> Exception;

pub fn std__vector_std__string__dtor(this_: *mut std_vector_string_t) -> Exception;

pub fn std__vector_std__string__data(this_: *mut std_vector_string_t, return_: *mut *mut std_string_t) -> Exception;

pub fn std__vector_std__string__data_const(this_: *const std_vector_string_t, return_: *mut *const std_string_t) -> Exception;

pub fn std__vector_std__string__push_back(this_: *mut std_vector_string_t, value: *const std_string_t) -> Exception;

pub fn std__vector_float__ctor(this_: *mut *mut std_vector_float_t) -> Exception;

pub fn std__vector_float__dtor(this_: *mut std_vector_float_t) -> Exception;

pub fn std__vector_float__data(this_: *mut std_vector_float_t, return_: *mut *mut c_float) -> Exception;

pub fn std__vector_float__data_const(this_: *const std_vector_float_t, return_: *mut *const c_float) -> Exception;

pub fn std__vector_float__push_back(this_: *mut std_vector_float_t, value: *const c_float) -> Exception;


} // extern "C"

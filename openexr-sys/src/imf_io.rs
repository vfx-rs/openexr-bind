#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__OStream_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__IStream_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__OStream_dtor(this_: *mut Imf_OStream_t) -> Exception;

pub fn Imf_3_0__OStream_write(this_: *mut Imf_OStream_t, c: *const c_char, n: c_int) -> Exception;

pub fn Imf_3_0__OStream_tellp(this_: *mut Imf_OStream_t, return_: *mut u64) -> Exception;

pub fn Imf_3_0__OStream_seekp(this_: *mut Imf_OStream_t, pos: u64) -> Exception;

pub fn Imf_3_0__OStream_fileName(this_: *const Imf_OStream_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__IStream_dtor(this_: *mut Imf_IStream_t) -> Exception;

pub fn Imf_3_0__IStream_isMemoryMapped(this_: *const Imf_IStream_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__IStream_read(this_: *mut Imf_IStream_t, return_: *mut bool, c: *mut c_char, n: c_int) -> Exception;

pub fn Imf_3_0__IStream_readMemoryMapped(this_: *mut Imf_IStream_t, return_: *mut *mut c_char, n: c_int) -> Exception;

pub fn Imf_3_0__IStream_tellg(this_: *mut Imf_IStream_t, return_: *mut u64) -> Exception;

pub fn Imf_3_0__IStream_seekg(this_: *mut Imf_IStream_t, pos: u64) -> Exception;

pub fn Imf_3_0__IStream_clear(this_: *mut Imf_IStream_t) -> Exception;

pub fn Imf_3_0__IStream_fileName(this_: *const Imf_IStream_t, return_: *mut *const c_char) -> Exception;


} // extern "C"

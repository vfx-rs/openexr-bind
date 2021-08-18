#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__MultiPartOutputFile_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__MultiPartOutputFile_ctor(this_: *mut *mut Imf_MultiPartOutputFile_t, file_name: *const c_char, headers: *const Imf_Header_t, parts: c_int, override_shared_attributes: bool, num_threads: c_int) -> Exception;

pub fn Imf_3_0__MultiPartOutputFile_from_stream(this_: *mut *mut Imf_MultiPartOutputFile_t, os: *mut Imf_OStream_t, headers: *const Imf_Header_t, parts: c_int, override_shared_attributes: bool, num_threads: c_int) -> Exception;

pub fn Imf_3_0__MultiPartOutputFile_parts(this_: *const Imf_MultiPartOutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__MultiPartOutputFile_header(this_: *const Imf_MultiPartOutputFile_t, return_: *mut *const Imf_Header_t, n: c_int) -> Exception;

pub fn Imf_3_0__MultiPartOutputFile_dtor(this_: *mut Imf_MultiPartOutputFile_t) -> Exception;


} // extern "C"

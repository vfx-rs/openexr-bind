#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__MultiPartInputFile_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__MultiPartInputFile_ctor(this_: *mut *mut Imf_MultiPartInputFile_t, file_name: *const c_char, num_threads: c_int, reconstruct_chunk_offset_table: bool) -> Exception;

pub fn Imf_3_0__MultiPartInputFile_from_stream(this_: *mut *mut Imf_MultiPartInputFile_t, is: *mut Imf_IStream_t, num_threads: c_int, reconstruct_chunk_offset_table: bool) -> Exception;

pub fn Imf_3_0__MultiPartInputFile_dtor(this_: *mut Imf_MultiPartInputFile_t) -> Exception;

pub fn Imf_3_0__MultiPartInputFile_parts(this_: *const Imf_MultiPartInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__MultiPartInputFile_header(this_: *const Imf_MultiPartInputFile_t, return_: *mut *const Imf_Header_t, n: c_int) -> Exception;

pub fn Imf_3_0__MultiPartInputFile_version(this_: *const Imf_MultiPartInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__MultiPartInputFile_partComplete(this_: *const Imf_MultiPartInputFile_t, return_: *mut bool, part: c_int) -> Exception;

pub fn Imf_3_0__MultiPartInputFile_flushPartCache(this_: *mut Imf_MultiPartInputFile_t) -> Exception;


} // extern "C"

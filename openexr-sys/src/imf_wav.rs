#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;



extern "C" {

pub fn Imf_3_0_wav2Encode(in_: *mut c_ushort, nx: c_int, ox: c_int, ny: c_int, oy: c_int, mx: c_ushort) -> Exception;

pub fn Imf_3_0_wav2Decode(in_: *mut c_ushort, nx: c_int, ox: c_int, ny: c_int, oy: c_int, mx: c_ushort) -> Exception;


} // extern "C"

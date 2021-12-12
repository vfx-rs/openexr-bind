#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;



extern "C" {

pub fn Imf_3_0_isTiled(return_: *mut bool, version: c_int) -> Exception;

pub fn Imf_3_0_isMultiPart(return_: *mut bool, version: c_int) -> Exception;

pub fn Imf_3_0_isNonImage(return_: *mut bool, version: c_int) -> Exception;

pub fn Imf_3_0_makeTiled(return_: *mut c_int, version: c_int) -> Exception;

pub fn Imf_3_0_makeNotTiled(return_: *mut c_int, version: c_int) -> Exception;

pub fn Imf_3_0_getVersion(return_: *mut c_int, version: c_int) -> Exception;

pub fn Imf_3_0_getFlags(return_: *mut c_int, version: c_int) -> Exception;

pub fn Imf_3_0_supportsFlags(return_: *mut bool, flags: c_int) -> Exception;

pub fn Imf_3_0_isImfMagic(return_: *mut bool, bytes: *const c_char) -> Exception;


} // extern "C"

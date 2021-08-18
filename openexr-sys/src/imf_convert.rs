#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;



extern "C" {

pub fn Imf_3_0_halfToUint(return_: *mut c_uint, h: Imath_half_t) -> Exception;

pub fn Imf_3_0_floatToUint(return_: *mut c_uint, f: c_float) -> Exception;

pub fn Imf_3_0_uintToHalf(return_: *mut Imath_half_t, ui: c_uint) -> Exception;

pub fn Imf_3_0_floatToHalf(return_: *mut Imath_half_t, f: c_float) -> Exception;


} // extern "C"

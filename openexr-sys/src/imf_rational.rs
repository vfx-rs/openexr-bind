#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imf_3_0__Rational_t {
    pub n: c_int,
    pub d: c_uint,
}



extern "C" {

pub fn Imf_3_0__Rational_default(this_: *mut Imf_Rational_t) -> Exception;

pub fn Imf_3_0__Rational_ctor(this_: *mut Imf_Rational_t, n: c_int, d: c_int) -> Exception;

pub fn Imf_3_0__Rational_from_f64(this_: *mut Imf_Rational_t, x: c_double) -> Exception;

pub fn Imf_3_0__Rational_as_f64(this_: *const Imf_Rational_t, return_: *mut c_double) -> Exception;


} // extern "C"

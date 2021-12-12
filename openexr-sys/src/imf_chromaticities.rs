#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imf_3_0__Chromaticities_t {
    pub red: Imath_V2f_t,
    pub green: Imath_V2f_t,
    pub blue: Imath_V2f_t,
    pub white: Imath_V2f_t,
}



extern "C" {

pub fn Imf_3_0__Chromaticities_ctor(this_: *mut Imf_Chromaticities_t, red: *const Imath_V2f_t, green: *const Imath_V2f_t, blue: *const Imath_V2f_t, white: *const Imath_V2f_t) -> Exception;

pub fn Imf_3_0__Chromaticities__eq(this_: *const Imf_Chromaticities_t, return_: *mut bool, v: *const Imf_Chromaticities_t) -> Exception;

pub fn Imf_3_0__Chromaticities__ne(this_: *const Imf_Chromaticities_t, return_: *mut bool, v: *const Imf_Chromaticities_t) -> Exception;

pub fn Imf_3_0__Chromaticities_copy(this_: *mut Imf_Chromaticities_t, rhs: *const Imf_Chromaticities_t) -> Exception;

pub fn Imf_3_0__Chromaticities_move(this_: *mut Imf_Chromaticities_t, rhs: *mut Imf_Chromaticities_t) -> Exception;

pub fn Imf_3_0__Chromaticities_dtor(this_: *mut Imf_Chromaticities_t) -> Exception;


} // extern "C"

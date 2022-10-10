#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__ImageLevel_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__ImageLevel_image(this_: *mut Imf_ImageLevel_t, return_: *mut *mut Imf_Image_t) -> Exception;

pub fn Imf_3_0__ImageLevel_image_const(this_: *const Imf_ImageLevel_t, return_: *mut *const Imf_Image_t) -> Exception;

pub fn Imf_3_0__ImageLevel_xLevelNumber(this_: *const Imf_ImageLevel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__ImageLevel_yLevelNumber(this_: *const Imf_ImageLevel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__ImageLevel_dataWindow(this_: *const Imf_ImageLevel_t, return_: *mut *const Imath_Box2i_t) -> Exception;


} // extern "C"

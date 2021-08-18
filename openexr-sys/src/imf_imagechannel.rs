#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__ImageChannel_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__ImageChannel_pixelType(this_: *const Imf_ImageChannel_t, return_: *mut Imf_PixelType) -> Exception;

pub fn Imf_3_0__ImageChannel_channel(this_: *const Imf_ImageChannel_t, return_: *mut Imf_Channel_t) -> Exception;

pub fn Imf_3_0__ImageChannel_xSampling(this_: *const Imf_ImageChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__ImageChannel_ySampling(this_: *const Imf_ImageChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__ImageChannel_pLinear(this_: *const Imf_ImageChannel_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__ImageChannel_pixelsPerRow(this_: *const Imf_ImageChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__ImageChannel_pixelsPerColumn(this_: *const Imf_ImageChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__ImageChannel_numPixels(this_: *const Imf_ImageChannel_t, return_: *mut usize) -> Exception;

pub fn Imf_3_0__ImageChannel_level(this_: *mut Imf_ImageChannel_t, return_: *mut *mut Imf_ImageLevel_t) -> Exception;

pub fn Imf_3_0__ImageChannel_level_const(this_: *const Imf_ImageChannel_t, return_: *mut *const Imf_ImageLevel_t) -> Exception;


} // extern "C"

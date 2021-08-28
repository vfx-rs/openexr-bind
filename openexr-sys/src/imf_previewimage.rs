#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(1))]
#[derive(Clone)]
pub struct Imf_3_0__PreviewRgba_t {
    pub r: c_uchar,
    pub g: c_uchar,
    pub b: c_uchar,
    pub a: c_uchar,
}

#[repr(C)]
pub struct Imf_3_0__PreviewImage_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__PreviewRgba_ctor(this_: *mut Imf_PreviewRgba_t, r: c_uchar, g: c_uchar, b: c_uchar, a: c_uchar) -> Exception;

pub fn Imf_3_0__PreviewImage_ctor(this_: *mut *mut Imf_PreviewImage_t, width: c_uint, height: c_uint, pixels: *const Imf_PreviewRgba_t) -> Exception;

pub fn Imf_3_0__PreviewImage_copy(this_: *mut *mut Imf_PreviewImage_t, other: *const Imf_PreviewImage_t) -> Exception;

pub fn Imf_3_0__PreviewImage_dtor(this_: *mut Imf_PreviewImage_t) -> Exception;

pub fn Imf_3_0__PreviewImage__assign(this_: *mut Imf_PreviewImage_t, return_: *mut *mut Imf_PreviewImage_t, other: *const Imf_PreviewImage_t) -> Exception;

pub fn Imf_3_0__PreviewImage_width(this_: *const Imf_PreviewImage_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__PreviewImage_height(this_: *const Imf_PreviewImage_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__PreviewImage_pixels(this_: *mut Imf_PreviewImage_t, return_: *mut *mut Imf_PreviewRgba_t) -> Exception;

pub fn Imf_3_0__PreviewImage_pixels_const(this_: *const Imf_PreviewImage_t, return_: *mut *const Imf_PreviewRgba_t) -> Exception;

pub fn Imf_3_0__PreviewImage_pixel(this_: *mut Imf_PreviewImage_t, return_: *mut *mut Imf_PreviewRgba_t, x: c_uint, y: c_uint) -> Exception;

pub fn Imf_3_0__PreviewImage_pixel_const(this_: *const Imf_PreviewImage_t, return_: *mut *const Imf_PreviewRgba_t, x: c_uint, y: c_uint) -> Exception;


} // extern "C"

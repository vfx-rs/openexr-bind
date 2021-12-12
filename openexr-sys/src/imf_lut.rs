#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__HalfLut_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__RgbaLut_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__HalfLut_apply(this_: *const Imf_HalfLut_t, data: *mut Imath_half_t, n_data: c_int, stride: c_int) -> Exception;

pub fn Imf_3_0__HalfLut_apply_1(this_: *const Imf_HalfLut_t, data: *const Imf_Slice_t, data_window: *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__HalfLut_dtor(this_: *mut Imf_HalfLut_t) -> Exception;

pub fn Imf_3_0__RgbaLut_apply(this_: *const Imf_RgbaLut_t, data: *mut Imf_Rgba_t, n_data: c_int, stride: c_int) -> Exception;

pub fn Imf_3_0__RgbaLut_apply_1(this_: *const Imf_RgbaLut_t, base: *mut Imf_Rgba_t, x_stride: c_int, y_stride: c_int, data_window: *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__RgbaLut_dtor(this_: *mut Imf_RgbaLut_t) -> Exception;


} // extern "C"

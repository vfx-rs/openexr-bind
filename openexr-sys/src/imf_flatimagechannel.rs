#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__FlatImageChannel_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedFlatImageChannel_half__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedFlatImageChannel_float__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedFlatImageChannel_unsignedint__t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__FlatImageChannel_pixelType(this_: *const Imf_FlatImageChannel_t, return_: *mut Imf_PixelType) -> Exception;

pub fn Imf_3_0__FlatImageChannel_channel(this_: *const Imf_FlatImageChannel_t, return_: *mut Imf_Channel_t) -> Exception;

pub fn Imf_3_0__FlatImageChannel_xSampling(this_: *const Imf_FlatImageChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__FlatImageChannel_ySampling(this_: *const Imf_FlatImageChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__FlatImageChannel_pLinear(this_: *const Imf_FlatImageChannel_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__FlatImageChannel_pixelsPerRow(this_: *const Imf_FlatImageChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__FlatImageChannel_pixelsPerColumn(this_: *const Imf_FlatImageChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__FlatImageChannel_numPixels(this_: *const Imf_FlatImageChannel_t, return_: *mut c_ulong) -> Exception;

pub fn Imf_3_0__FlatImageChannel_level(this_: *mut Imf_FlatImageChannel_t, return_: *mut *mut Imf_ImageLevel_t) -> Exception;

pub fn Imf_3_0__FlatImageChannel_level_1(this_: *const Imf_FlatImageChannel_t, return_: *mut *const Imf_ImageLevel_t) -> Exception;

pub fn Imf_3_0__FlatImageChannel_slice(this_: *const Imf_FlatImageChannel_t, return_: *mut Imf_Slice_t) -> Exception;

pub fn Imf_3_0__FlatImageChannel_flatLevel(this_: *mut Imf_FlatImageChannel_t, return_: *mut *mut Imf_FlatImageLevel_t) -> Exception;

pub fn Imf_3_0__FlatImageChannel_flatLevel_1(this_: *const Imf_FlatImageChannel_t, return_: *mut *const Imf_FlatImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__pixelType(this_: *const Imf_FlatHalfChannel_t, return_: *mut Imf_PixelType) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__channel(this_: *const Imf_FlatHalfChannel_t, return_: *mut Imf_Channel_t) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__xSampling(this_: *const Imf_FlatHalfChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__ySampling(this_: *const Imf_FlatHalfChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__pLinear(this_: *const Imf_FlatHalfChannel_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__pixelsPerRow(this_: *const Imf_FlatHalfChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__pixelsPerColumn(this_: *const Imf_FlatHalfChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__numPixels(this_: *const Imf_FlatHalfChannel_t, return_: *mut c_ulong) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__slice(this_: *const Imf_FlatHalfChannel_t, return_: *mut Imf_Slice_t) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__flatLevel(this_: *mut Imf_FlatHalfChannel_t, return_: *mut *mut Imf_FlatImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__flatLevel_const(this_: *const Imf_FlatHalfChannel_t, return_: *mut *const Imf_FlatImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__index(this_: *mut Imf_FlatHalfChannel_t, return_: *mut *mut Imath_half_t, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__index_const(this_: *const Imf_FlatHalfChannel_t, return_: *mut *const Imath_half_t, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__at(this_: *mut Imf_FlatHalfChannel_t, return_: *mut *mut Imath_half_t, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__at_const(this_: *const Imf_FlatHalfChannel_t, return_: *mut *const Imath_half_t, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__row(this_: *mut Imf_FlatHalfChannel_t, return_: *mut *mut Imath_half_t, r: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_half__row_const(this_: *const Imf_FlatHalfChannel_t, return_: *mut *const Imath_half_t, r: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__pixelType(this_: *const Imf_FlatFloatChannel_t, return_: *mut Imf_PixelType) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__channel(this_: *const Imf_FlatFloatChannel_t, return_: *mut Imf_Channel_t) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__xSampling(this_: *const Imf_FlatFloatChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__ySampling(this_: *const Imf_FlatFloatChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__pLinear(this_: *const Imf_FlatFloatChannel_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__pixelsPerRow(this_: *const Imf_FlatFloatChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__pixelsPerColumn(this_: *const Imf_FlatFloatChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__numPixels(this_: *const Imf_FlatFloatChannel_t, return_: *mut c_ulong) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__slice(this_: *const Imf_FlatFloatChannel_t, return_: *mut Imf_Slice_t) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__flatLevel(this_: *mut Imf_FlatFloatChannel_t, return_: *mut *mut Imf_FlatImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__flatLevel_const(this_: *const Imf_FlatFloatChannel_t, return_: *mut *const Imf_FlatImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__index(this_: *mut Imf_FlatFloatChannel_t, return_: *mut *mut c_float, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__index_const(this_: *const Imf_FlatFloatChannel_t, return_: *mut *const c_float, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__at(this_: *mut Imf_FlatFloatChannel_t, return_: *mut *mut c_float, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__at_const(this_: *const Imf_FlatFloatChannel_t, return_: *mut *const c_float, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__row(this_: *mut Imf_FlatFloatChannel_t, return_: *mut *mut c_float, r: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_float__row_const(this_: *const Imf_FlatFloatChannel_t, return_: *mut *const c_float, r: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__pixelType(this_: *const Imf_FlatUIntChannel_t, return_: *mut Imf_PixelType) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__channel(this_: *const Imf_FlatUIntChannel_t, return_: *mut Imf_Channel_t) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__xSampling(this_: *const Imf_FlatUIntChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__ySampling(this_: *const Imf_FlatUIntChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__pLinear(this_: *const Imf_FlatUIntChannel_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__pixelsPerRow(this_: *const Imf_FlatUIntChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__pixelsPerColumn(this_: *const Imf_FlatUIntChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__numPixels(this_: *const Imf_FlatUIntChannel_t, return_: *mut c_ulong) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__slice(this_: *const Imf_FlatUIntChannel_t, return_: *mut Imf_Slice_t) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__flatLevel(this_: *mut Imf_FlatUIntChannel_t, return_: *mut *mut Imf_FlatImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__flatLevel_const(this_: *const Imf_FlatUIntChannel_t, return_: *mut *const Imf_FlatImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__index(this_: *mut Imf_FlatUIntChannel_t, return_: *mut *mut c_uint, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__index_const(this_: *const Imf_FlatUIntChannel_t, return_: *mut *const c_uint, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__at(this_: *mut Imf_FlatUIntChannel_t, return_: *mut *mut c_uint, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__at_const(this_: *const Imf_FlatUIntChannel_t, return_: *mut *const c_uint, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__row(this_: *mut Imf_FlatUIntChannel_t, return_: *mut *mut c_uint, r: c_int) -> Exception;

pub fn Imf_3_0__TypedFlatImageChannel_unsignedint__row_const(this_: *const Imf_FlatUIntChannel_t, return_: *mut *const c_uint, r: c_int) -> Exception;


} // extern "C"

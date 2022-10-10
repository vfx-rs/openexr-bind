#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__DeepImageChannel_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedDeepImageChannel_half__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedDeepImageChannel_float__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedDeepImageChannel_unsignedint__t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__DeepImageChannel_pixelType(this_: *const Imf_DeepImageChannel_t, return_: *mut Imf_PixelType) -> Exception;

pub fn Imf_3_0__DeepImageChannel_channel(this_: *const Imf_DeepImageChannel_t, return_: *mut Imf_Channel_t) -> Exception;

pub fn Imf_3_0__DeepImageChannel_xSampling(this_: *const Imf_DeepImageChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepImageChannel_ySampling(this_: *const Imf_DeepImageChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepImageChannel_pLinear(this_: *const Imf_DeepImageChannel_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__DeepImageChannel_pixelsPerRow(this_: *const Imf_DeepImageChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepImageChannel_pixelsPerColumn(this_: *const Imf_DeepImageChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepImageChannel_numPixels(this_: *const Imf_DeepImageChannel_t, return_: *mut usize) -> Exception;

pub fn Imf_3_0__DeepImageChannel_level(this_: *mut Imf_DeepImageChannel_t, return_: *mut *mut Imf_ImageLevel_t) -> Exception;

pub fn Imf_3_0__DeepImageChannel_level_const(this_: *const Imf_DeepImageChannel_t, return_: *mut *const Imf_ImageLevel_t) -> Exception;

pub fn Imf_3_0__DeepImageChannel_slice(this_: *const Imf_DeepImageChannel_t, return_: *mut Imf_DeepSlice_t) -> Exception;

pub fn Imf_3_0__DeepImageChannel_deepLevel(this_: *mut Imf_DeepImageChannel_t, return_: *mut *mut Imf_DeepImageLevel_t) -> Exception;

pub fn Imf_3_0__DeepImageChannel_deepLevel_const(this_: *const Imf_DeepImageChannel_t, return_: *mut *const Imf_DeepImageLevel_t) -> Exception;

pub fn Imf_3_0__DeepImageChannel_sampleCounts(this_: *mut Imf_DeepImageChannel_t, return_: *mut *mut Imf_SampleCountChannel_t) -> Exception;

pub fn Imf_3_0__DeepImageChannel_sampleCounts_1(this_: *const Imf_DeepImageChannel_t, return_: *mut *const Imf_SampleCountChannel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__pixelType(this_: *const Imf_DeepHalfChannel_t, return_: *mut Imf_PixelType) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__channel(this_: *const Imf_DeepHalfChannel_t, return_: *mut Imf_Channel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__xSampling(this_: *const Imf_DeepHalfChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__ySampling(this_: *const Imf_DeepHalfChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__pLinear(this_: *const Imf_DeepHalfChannel_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__pixelsPerRow(this_: *const Imf_DeepHalfChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__pixelsPerColumn(this_: *const Imf_DeepHalfChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__numPixels(this_: *const Imf_DeepHalfChannel_t, return_: *mut usize) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__level(this_: *mut Imf_DeepHalfChannel_t, return_: *mut *mut Imf_ImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__level_const(this_: *const Imf_DeepHalfChannel_t, return_: *mut *const Imf_ImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__slice(this_: *const Imf_DeepHalfChannel_t, return_: *mut Imf_DeepSlice_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__deepLevel(this_: *mut Imf_DeepHalfChannel_t, return_: *mut *mut Imf_DeepImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__deepLevel_const(this_: *const Imf_DeepHalfChannel_t, return_: *mut *const Imf_DeepImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__sampleCounts(this_: *mut Imf_DeepHalfChannel_t, return_: *mut *mut Imf_SampleCountChannel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__sampleCounts_1(this_: *const Imf_DeepHalfChannel_t, return_: *mut *const Imf_SampleCountChannel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__index(this_: *mut Imf_DeepHalfChannel_t, return_: *mut *mut Imath_half_t, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__index_const(this_: *const Imf_DeepHalfChannel_t, return_: *mut *const Imath_half_t, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__at(this_: *mut Imf_DeepHalfChannel_t, return_: *mut *mut Imath_half_t, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_half__at_const(this_: *const Imf_DeepHalfChannel_t, return_: *mut *const Imath_half_t, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__pixelType(this_: *const Imf_DeepFloatChannel_t, return_: *mut Imf_PixelType) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__channel(this_: *const Imf_DeepFloatChannel_t, return_: *mut Imf_Channel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__xSampling(this_: *const Imf_DeepFloatChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__ySampling(this_: *const Imf_DeepFloatChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__pLinear(this_: *const Imf_DeepFloatChannel_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__pixelsPerRow(this_: *const Imf_DeepFloatChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__pixelsPerColumn(this_: *const Imf_DeepFloatChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__numPixels(this_: *const Imf_DeepFloatChannel_t, return_: *mut usize) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__level(this_: *mut Imf_DeepFloatChannel_t, return_: *mut *mut Imf_ImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__level_const(this_: *const Imf_DeepFloatChannel_t, return_: *mut *const Imf_ImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__slice(this_: *const Imf_DeepFloatChannel_t, return_: *mut Imf_DeepSlice_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__deepLevel(this_: *mut Imf_DeepFloatChannel_t, return_: *mut *mut Imf_DeepImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__deepLevel_const(this_: *const Imf_DeepFloatChannel_t, return_: *mut *const Imf_DeepImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__sampleCounts(this_: *mut Imf_DeepFloatChannel_t, return_: *mut *mut Imf_SampleCountChannel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__sampleCounts_1(this_: *const Imf_DeepFloatChannel_t, return_: *mut *const Imf_SampleCountChannel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__index(this_: *mut Imf_DeepFloatChannel_t, return_: *mut *mut c_float, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__index_const(this_: *const Imf_DeepFloatChannel_t, return_: *mut *const c_float, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__at(this_: *mut Imf_DeepFloatChannel_t, return_: *mut *mut c_float, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_float__at_const(this_: *const Imf_DeepFloatChannel_t, return_: *mut *const c_float, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__pixelType(this_: *const Imf_DeepUIntChannel_t, return_: *mut Imf_PixelType) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__channel(this_: *const Imf_DeepUIntChannel_t, return_: *mut Imf_Channel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__xSampling(this_: *const Imf_DeepUIntChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__ySampling(this_: *const Imf_DeepUIntChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__pLinear(this_: *const Imf_DeepUIntChannel_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__pixelsPerRow(this_: *const Imf_DeepUIntChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__pixelsPerColumn(this_: *const Imf_DeepUIntChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__numPixels(this_: *const Imf_DeepUIntChannel_t, return_: *mut usize) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__level(this_: *mut Imf_DeepUIntChannel_t, return_: *mut *mut Imf_ImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__level_const(this_: *const Imf_DeepUIntChannel_t, return_: *mut *const Imf_ImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__slice(this_: *const Imf_DeepUIntChannel_t, return_: *mut Imf_DeepSlice_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__deepLevel(this_: *mut Imf_DeepUIntChannel_t, return_: *mut *mut Imf_DeepImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__deepLevel_const(this_: *const Imf_DeepUIntChannel_t, return_: *mut *const Imf_DeepImageLevel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__sampleCounts(this_: *mut Imf_DeepUIntChannel_t, return_: *mut *mut Imf_SampleCountChannel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__sampleCounts_1(this_: *const Imf_DeepUIntChannel_t, return_: *mut *const Imf_SampleCountChannel_t) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__index(this_: *mut Imf_DeepUIntChannel_t, return_: *mut *mut c_uint, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__index_const(this_: *const Imf_DeepUIntChannel_t, return_: *mut *const c_uint, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__at(this_: *mut Imf_DeepUIntChannel_t, return_: *mut *mut c_uint, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__TypedDeepImageChannel_unsignedint__at_const(this_: *const Imf_DeepUIntChannel_t, return_: *mut *const c_uint, x: c_int, y: c_int) -> Exception;


} // extern "C"

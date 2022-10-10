#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__SampleCountChannel_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__SampleCountChannel__Edit_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__SampleCountChannel_pixelType(this_: *const Imf_SampleCountChannel_t, return_: *mut Imf_PixelType) -> Exception;

pub fn Imf_3_0__SampleCountChannel_channel(this_: *const Imf_SampleCountChannel_t, return_: *mut Imf_Channel_t) -> Exception;

pub fn Imf_3_0__SampleCountChannel_xSampling(this_: *const Imf_SampleCountChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__SampleCountChannel_ySampling(this_: *const Imf_SampleCountChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__SampleCountChannel_pLinear(this_: *const Imf_SampleCountChannel_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__SampleCountChannel_pixelsPerRow(this_: *const Imf_SampleCountChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__SampleCountChannel_pixelsPerColumn(this_: *const Imf_SampleCountChannel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__SampleCountChannel_numPixels(this_: *const Imf_SampleCountChannel_t, return_: *mut usize) -> Exception;

pub fn Imf_3_0__SampleCountChannel_level(this_: *mut Imf_SampleCountChannel_t, return_: *mut *mut Imf_ImageLevel_t) -> Exception;

pub fn Imf_3_0__SampleCountChannel_level_1(this_: *const Imf_SampleCountChannel_t, return_: *mut *const Imf_ImageLevel_t) -> Exception;

pub fn Imf_3_0__SampleCountChannel_slice(this_: *const Imf_SampleCountChannel_t, return_: *mut Imf_Slice_t) -> Exception;

pub fn Imf_3_0__SampleCountChannel_deepLevel(this_: *mut Imf_SampleCountChannel_t, return_: *mut *mut Imf_DeepImageLevel_t) -> Exception;

pub fn Imf_3_0__SampleCountChannel_deepLevel_const(this_: *const Imf_SampleCountChannel_t, return_: *mut *const Imf_DeepImageLevel_t) -> Exception;

pub fn Imf_3_0__SampleCountChannel_index(this_: *const Imf_SampleCountChannel_t, return_: *mut *const c_uint, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__SampleCountChannel_at(this_: *const Imf_SampleCountChannel_t, return_: *mut *const c_uint, x: c_int, y: c_int) -> Exception;

pub fn Imf_3_0__SampleCountChannel_row(this_: *const Imf_SampleCountChannel_t, return_: *mut *const c_uint, r: c_int) -> Exception;

pub fn Imf_3_0__SampleCountChannel_set(this_: *mut Imf_SampleCountChannel_t, x: c_int, y: c_int, new_num_samples: c_uint) -> Exception;

pub fn Imf_3_0__SampleCountChannel_set_row(this_: *mut Imf_SampleCountChannel_t, r: c_int, new_num_samples: *mut c_uint) -> Exception;

pub fn Imf_3_0__SampleCountChannel_clear(this_: *mut Imf_SampleCountChannel_t) -> Exception;

pub fn Imf_3_0__SampleCountChannel_beginEdit(this_: *mut Imf_SampleCountChannel_t, return_: *mut *mut c_uint) -> Exception;

pub fn Imf_3_0__SampleCountChannel_endEdit(this_: *mut Imf_SampleCountChannel_t) -> Exception;

pub fn Imf_3_0__SampleCountChannel_numSamples(this_: *const Imf_SampleCountChannel_t, return_: *mut *const c_uint) -> Exception;

pub fn Imf_3_0__SampleCountChannel_sampleListSizes(this_: *const Imf_SampleCountChannel_t, return_: *mut *const c_uint) -> Exception;

pub fn Imf_3_0__SampleCountChannel_sampleListPositions(this_: *const Imf_SampleCountChannel_t, return_: *mut *const usize) -> Exception;

pub fn Imf_3_0__SampleCountChannel_sampleBufferSize(this_: *const Imf_SampleCountChannel_t, return_: *mut usize) -> Exception;

pub fn Imf_3_0__SampleCountChannel__Edit_ctor(this_: *mut *mut Imf_SampleCountChannel_Edit_t, level: *mut Imf_SampleCountChannel_t) -> Exception;

pub fn Imf_3_0__SampleCountChannel__Edit_dtor(this_: *mut Imf_SampleCountChannel_Edit_t) -> Exception;

pub fn Imf_3_0__SampleCountChannel__Edit_sampleCounts(this_: *const Imf_SampleCountChannel_Edit_t, return_: *mut *mut c_uint) -> Exception;


} // extern "C"

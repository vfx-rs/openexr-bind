#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__DeepCompositing_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__DeepCompositing_ctor(this_: *mut *mut Imf_DeepCompositing_t) -> Exception;

pub fn Imf_3_0__DeepCompositing_dtor(this_: *mut Imf_DeepCompositing_t) -> Exception;

pub fn Imf_3_0__DeepCompositing_composite_pixel(this_: *mut Imf_DeepCompositing_t, outputs: *mut c_float, inputs: *mut *const c_float, channel_names: *mut *const c_char, num_channels: c_int, num_samples: c_int, sources: c_int) -> Exception;

pub fn Imf_3_0__DeepCompositing_sort(this_: *mut Imf_DeepCompositing_t, order: *mut c_int, inputs: *mut *const c_float, channel_names: *mut *const c_char, num_channels: c_int, num_samples: c_int, sources: c_int) -> Exception;

pub fn Imf_3_0__DeepCompositing__assign(this_: *mut Imf_DeepCompositing_t, return_: *mut *mut Imf_DeepCompositing_t, rhs: *const Imf_DeepCompositing_t) -> Exception;


} // extern "C"

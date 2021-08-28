#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__CompositeDeepScanLine_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__CompositeDeepScanLine_ctor(this_: *mut *mut Imf_CompositeDeepScanLine_t) -> Exception;

pub fn Imf_3_0__CompositeDeepScanLine_dtor(this_: *mut Imf_CompositeDeepScanLine_t) -> Exception;

pub fn Imf_3_0__CompositeDeepScanLine_addSource_part(this_: *mut Imf_CompositeDeepScanLine_t, part: *mut Imf_DeepScanLineInputPart_t) -> Exception;

pub fn Imf_3_0__CompositeDeepScanLine_addSource_file(this_: *mut Imf_CompositeDeepScanLine_t, file: *mut Imf_DeepScanLineInputFile_t) -> Exception;

pub fn Imf_3_0__CompositeDeepScanLine_setFrameBuffer(this_: *mut Imf_CompositeDeepScanLine_t, fr: *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__CompositeDeepScanLine_frameBuffer(this_: *const Imf_CompositeDeepScanLine_t, return_: *mut *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__CompositeDeepScanLine_readPixels(this_: *mut Imf_CompositeDeepScanLine_t, start: c_int, end: c_int) -> Exception;

pub fn Imf_3_0__CompositeDeepScanLine_sources(this_: *const Imf_CompositeDeepScanLine_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__CompositeDeepScanLine_dataWindow(this_: *const Imf_CompositeDeepScanLine_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__CompositeDeepScanLine_setCompositing(this_: *mut Imf_CompositeDeepScanLine_t, compositing: *mut Imf_DeepCompositing_t) -> Exception;


} // extern "C"

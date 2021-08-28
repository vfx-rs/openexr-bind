#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__DeepScanLineOutputFile_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__DeepScanLineOutputFile_ctor(this_: *mut *mut Imf_DeepScanLineOutputFile_t, file_name: *const c_char, header: *const Imf_Header_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputFile_dtor(this_: *mut Imf_DeepScanLineOutputFile_t) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputFile_fileName(this_: *const Imf_DeepScanLineOutputFile_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputFile_header(this_: *const Imf_DeepScanLineOutputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputFile_setFrameBuffer(this_: *mut Imf_DeepScanLineOutputFile_t, frame_buffer: *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputFile_frameBuffer(this_: *const Imf_DeepScanLineOutputFile_t, return_: *mut *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputFile_writePixels(this_: *mut Imf_DeepScanLineOutputFile_t, num_scan_lines: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputFile_currentScanLine(this_: *const Imf_DeepScanLineOutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputFile_copyPixels_from_file(this_: *mut Imf_DeepScanLineOutputFile_t, in_: *mut Imf_DeepScanLineInputFile_t) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputFile_copyPixels_from_part(this_: *mut Imf_DeepScanLineOutputFile_t, in_: *mut Imf_DeepScanLineInputPart_t) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputFile_updatePreviewImage(this_: *mut Imf_DeepScanLineOutputFile_t, new_pixels: *const Imf_PreviewRgba_t) -> Exception;


} // extern "C"

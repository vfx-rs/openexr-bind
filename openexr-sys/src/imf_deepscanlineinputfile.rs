#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__DeepScanLineInputFile_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__DeepScanLineInputFile_ctor(this_: *mut *mut Imf_DeepScanLineInputFile_t, file_name: *const c_char, num_threads: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_ctor_1(this_: *mut *mut Imf_DeepScanLineInputFile_t, is: *mut Imf_IStream_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_ctor_2(this_: *mut *mut Imf_DeepScanLineInputFile_t, header: *const Imf_Header_t, is: *mut Imf_IStream_t, version: c_int, num_threads: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_dtor(this_: *mut Imf_DeepScanLineInputFile_t) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_fileName(this_: *const Imf_DeepScanLineInputFile_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_header(this_: *const Imf_DeepScanLineInputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_version(this_: *const Imf_DeepScanLineInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_setFrameBuffer(this_: *mut Imf_DeepScanLineInputFile_t, frame_buffer: *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_frameBuffer(this_: *const Imf_DeepScanLineInputFile_t, return_: *mut *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_isComplete(this_: *const Imf_DeepScanLineInputFile_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_readPixels(this_: *mut Imf_DeepScanLineInputFile_t, scan_line1: c_int, scan_line2: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_readPixels_from_frame_buffer(this_: *const Imf_DeepScanLineInputFile_t, raw_pixel_data: *const c_char, frame_buffer: *const Imf_DeepFrameBuffer_t, scan_line1: c_int, scan_line2: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_rawPixelData(this_: *mut Imf_DeepScanLineInputFile_t, first_scan_line: c_int, pixel_data: *mut c_char, pixel_data_size: *mut u64) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_firstScanLineInChunk(this_: *const Imf_DeepScanLineInputFile_t, return_: *mut c_int, y: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_lastScanLineInChunk(this_: *const Imf_DeepScanLineInputFile_t, return_: *mut c_int, y: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_readPixelSampleCounts(this_: *mut Imf_DeepScanLineInputFile_t, scanline1: c_int, scanline2: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputFile_readPixelSampleCounts_into_frame_buffer(this_: *const Imf_DeepScanLineInputFile_t, rawdata: *const c_char, frame_buffer: *const Imf_DeepFrameBuffer_t, scan_line1: c_int, scan_line2: c_int) -> Exception;


} // extern "C"

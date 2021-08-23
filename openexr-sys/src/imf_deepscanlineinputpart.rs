#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(%ALIGNImf_3_0::DeepScanLineInputPart%))]
#[derive(Clone)]
pub struct Imf_3_0__DeepScanLineInputPart_t {
    _inner: [u8; %SIZEImf_3_0::DeepScanLineInputPart%]
}

impl Default for Imf_3_0__DeepScanLineInputPart_t {
    fn default() -> Self {
        Self { _inner: [0u8; %SIZEImf_3_0::DeepScanLineInputPart%] }
    }
}

impl Imf_3_0__DeepScanLineInputPart_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__DeepScanLineInputPart_sizeof(),
                Imf_3_0__DeepScanLineInputPart_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__DeepScanLineInputPart_sizeof() -> usize;

pub fn Imf_3_0__DeepScanLineInputPart_alignof() -> usize;

pub fn Imf_3_0__DeepScanLineInputPart_ctor(this_: *mut Imf_DeepScanLineInputPart_t, file: *mut Imf_MultiPartInputFile_t, part_number: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputPart_fileName(this_: *const Imf_DeepScanLineInputPart_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__DeepScanLineInputPart_header(this_: *const Imf_DeepScanLineInputPart_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__DeepScanLineInputPart_version(this_: *const Imf_DeepScanLineInputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputPart_setFrameBuffer(this_: *mut Imf_DeepScanLineInputPart_t, frame_buffer: *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepScanLineInputPart_frameBuffer(this_: *const Imf_DeepScanLineInputPart_t, return_: *mut *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepScanLineInputPart_isComplete(this_: *const Imf_DeepScanLineInputPart_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__DeepScanLineInputPart_readPixels(this_: *mut Imf_DeepScanLineInputPart_t, scan_line1: c_int, scan_line2: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputPart_readPixels_from_frame_buffer(this_: *const Imf_DeepScanLineInputPart_t, raw_pixel_data: *const c_char, frame_buffer: *const Imf_DeepFrameBuffer_t, scan_line1: c_int, scan_line2: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputPart_rawPixelData(this_: *mut Imf_DeepScanLineInputPart_t, first_scan_line: c_int, pixel_data: *mut c_char, pixel_data_size: *mut u64) -> Exception;

pub fn Imf_3_0__DeepScanLineInputPart_readPixelSampleCounts(this_: *mut Imf_DeepScanLineInputPart_t, scanline1: c_int, scanline2: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputPart_readPixelSampleCounts_into_frame_buffer(this_: *const Imf_DeepScanLineInputPart_t, rawdata: *const c_char, frame_buffer: *const Imf_DeepFrameBuffer_t, scan_line1: c_int, scan_line2: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputPart_firstScanLineInChunk(this_: *const Imf_DeepScanLineInputPart_t, return_: *mut c_int, y: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineInputPart_lastScanLineInChunk(this_: *const Imf_DeepScanLineInputPart_t, return_: *mut c_int, y: c_int) -> Exception;


} // extern "C"

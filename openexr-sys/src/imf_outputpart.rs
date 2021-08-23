#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imf_3_0__OutputPart_t {
    _inner: [u8; 8]
}

impl Default for Imf_3_0__OutputPart_t {
    fn default() -> Self {
        Self { _inner: [0u8; 8] }
    }
}

impl Imf_3_0__OutputPart_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__OutputPart_sizeof(),
                Imf_3_0__OutputPart_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__OutputPart_sizeof() -> usize;

pub fn Imf_3_0__OutputPart_alignof() -> usize;

pub fn Imf_3_0__OutputPart_ctor(this_: *mut Imf_OutputPart_t, multi_part_file: *mut Imf_MultiPartOutputFile_t, part_number: c_int) -> Exception;

pub fn Imf_3_0__OutputPart_fileName(this_: *const Imf_OutputPart_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__OutputPart_header(this_: *const Imf_OutputPart_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__OutputPart_setFrameBuffer(this_: *mut Imf_OutputPart_t, frame_buffer: *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__OutputPart_frameBuffer(this_: *const Imf_OutputPart_t, return_: *mut *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__OutputPart_writePixels(this_: *mut Imf_OutputPart_t, num_scan_lines: c_int) -> Exception;

pub fn Imf_3_0__OutputPart_currentScanLine(this_: *const Imf_OutputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__OutputPart_copyPixels_from_file(this_: *mut Imf_OutputPart_t, in_: *mut Imf_InputFile_t) -> Exception;

pub fn Imf_3_0__OutputPart_copyPixels_from_part(this_: *mut Imf_OutputPart_t, in_: *mut Imf_InputPart_t) -> Exception;

pub fn Imf_3_0__OutputPart_updatePreviewImage(this_: *mut Imf_OutputPart_t, new_pixels: *const Imf_PreviewRgba_t) -> Exception;

pub fn Imf_3_0__OutputPart_breakScanLine(this_: *mut Imf_OutputPart_t, y: c_int, offset: c_int, length: c_int, c: c_char) -> Exception;


} // extern "C"

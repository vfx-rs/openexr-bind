#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__OutputFile_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__OutputFile_ctor(this_: *mut *mut Imf_OutputFile_t, file_name: *const c_char, header: *const Imf_Header_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__OutputFile_from_stream(this_: *mut *mut Imf_OutputFile_t, os: *mut Imf_OStream_t, header: *const Imf_Header_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__OutputFile_dtor(this_: *mut Imf_OutputFile_t) -> Exception;

pub fn Imf_3_0__OutputFile_fileName(this_: *const Imf_OutputFile_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__OutputFile_header(this_: *const Imf_OutputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__OutputFile_setFrameBuffer(this_: *mut Imf_OutputFile_t, frame_buffer: *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__OutputFile_frameBuffer(this_: *const Imf_OutputFile_t, return_: *mut *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__OutputFile_writePixels(this_: *mut Imf_OutputFile_t, num_scan_lines: c_int) -> Exception;

pub fn Imf_3_0__OutputFile_currentScanLine(this_: *const Imf_OutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__OutputFile_copyPixels_from_file(this_: *mut Imf_OutputFile_t, in_: *mut Imf_InputFile_t) -> Exception;

pub fn Imf_3_0__OutputFile_copyPixels_from_part(this_: *mut Imf_OutputFile_t, in_: *mut Imf_InputPart_t) -> Exception;

pub fn Imf_3_0__OutputFile_updatePreviewImage(this_: *mut Imf_OutputFile_t, new_pixels: *const Imf_PreviewRgba_t) -> Exception;

pub fn Imf_3_0__OutputFile_breakScanLine(this_: *mut Imf_OutputFile_t, y: c_int, offset: c_int, length: c_int, c: c_char) -> Exception;


} // extern "C"

#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__InputFile_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__GenericInputFile_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__InputFile_ctor(this_: *mut *mut Imf_InputFile_t, file_name: *const c_char, num_threads: c_int) -> Exception;

pub fn Imf_3_0__InputFile_from_stream(this_: *mut *mut Imf_InputFile_t, is: *mut Imf_IStream_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__InputFile_dtor(this_: *mut Imf_InputFile_t) -> Exception;

pub fn Imf_3_0__InputFile_fileName(this_: *const Imf_InputFile_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__InputFile_header(this_: *const Imf_InputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__InputFile_version(this_: *const Imf_InputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__InputFile_setFrameBuffer(this_: *mut Imf_InputFile_t, frame_buffer: *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__InputFile_frameBuffer(this_: *const Imf_InputFile_t, return_: *mut *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__InputFile_isComplete(this_: *const Imf_InputFile_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__InputFile_isOptimizationEnabled(this_: *const Imf_InputFile_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__InputFile_readPixels(this_: *mut Imf_InputFile_t, scan_line1: c_int, scan_line2: c_int) -> Exception;

pub fn Imf_3_0__InputFile_rawPixelData(this_: *mut Imf_InputFile_t, first_scan_line: c_int, pixel_data: *mut *const c_char, pixel_data_size: *mut c_int) -> Exception;

pub fn Imf_3_0__InputFile_rawPixelDataToBuffer(this_: *const Imf_InputFile_t, scan_line: c_int, pixel_data: *mut c_char, pixel_data_size: *mut c_int) -> Exception;

pub fn Imf_3_0__InputFile_rawTileData(this_: *mut Imf_InputFile_t, dx: *mut c_int, dy: *mut c_int, lx: *mut c_int, ly: *mut c_int, pixel_data: *mut *const c_char, pixel_data_size: *mut c_int) -> Exception;

pub fn Imf_3_0__GenericInputFile_dtor(this_: *mut Imf_GenericInputFile_t) -> Exception;

pub fn Imf_3_0__GenericInputFile__assign(this_: *mut Imf_GenericInputFile_t, return_: *mut *mut Imf_GenericInputFile_t, rhs: *const Imf_GenericInputFile_t) -> Exception;

pub fn Imf_3_0__GenericInputFile_copy(this_: *mut *mut Imf_GenericInputFile_t, rhs: *const Imf_GenericInputFile_t) -> Exception;


} // extern "C"

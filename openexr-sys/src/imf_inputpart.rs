#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(%ALIGNImf_3_0::InputPart%))]
#[derive(Clone)]
pub struct Imf_3_0__InputPart_t {
    _inner: [u8; %SIZEImf_3_0::InputPart%]
}

impl Default for Imf_3_0__InputPart_t {
    fn default() -> Self {
        Self { _inner: [0u8; %SIZEImf_3_0::InputPart%] }
    }
}

impl Imf_3_0__InputPart_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__InputPart_sizeof(),
                Imf_3_0__InputPart_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__InputPart_sizeof() -> usize;

pub fn Imf_3_0__InputPart_alignof() -> usize;

pub fn Imf_3_0__InputPart_ctor(this_: *mut Imf_InputPart_t, multi_part_file: *mut Imf_MultiPartInputFile_t, part_number: c_int) -> Exception;

pub fn Imf_3_0__InputPart_fileName(this_: *const Imf_InputPart_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__InputPart_header(this_: *const Imf_InputPart_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__InputPart_version(this_: *const Imf_InputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__InputPart_setFrameBuffer(this_: *mut Imf_InputPart_t, frame_buffer: *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__InputPart_frameBuffer(this_: *const Imf_InputPart_t, return_: *mut *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__InputPart_isComplete(this_: *const Imf_InputPart_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__InputPart_isOptimizationEnabled(this_: *const Imf_InputPart_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__InputPart_readPixels(this_: *mut Imf_InputPart_t, scan_line1: c_int, scan_line2: c_int) -> Exception;

pub fn Imf_3_0__InputPart_readPixels_1(this_: *mut Imf_InputPart_t, scan_line: c_int) -> Exception;

pub fn Imf_3_0__InputPart_rawPixelData(this_: *mut Imf_InputPart_t, first_scan_line: c_int, pixel_data: *mut *const c_char, pixel_data_size: *mut c_int) -> Exception;

pub fn Imf_3_0__InputPart_rawPixelDataToBuffer(this_: *const Imf_InputPart_t, scan_line: c_int, pixel_data: *mut c_char, pixel_data_size: *mut c_int) -> Exception;

pub fn Imf_3_0__InputPart_rawTileData(this_: *mut Imf_InputPart_t, dx: *mut c_int, dy: *mut c_int, lx: *mut c_int, ly: *mut c_int, pixel_data: *mut *const c_char, pixel_data_size: *mut c_int) -> Exception;


} // extern "C"

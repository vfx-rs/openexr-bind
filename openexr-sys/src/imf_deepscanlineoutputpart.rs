#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


impl Imf_3_0__DeepScanLineOutputPart_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__DeepScanLineOutputPart_sizeof(),
                Imf_3_0__DeepScanLineOutputPart_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__DeepScanLineOutputPart_sizeof() -> usize;

pub fn Imf_3_0__DeepScanLineOutputPart_alignof() -> usize;

pub fn Imf_3_0__DeepScanLineOutputPart_ctor(this_: *mut Imf_DeepScanLineOutputPart_t, multi_part_file: *mut Imf_MultiPartOutputFile_t, part_number: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputPart_fileName(this_: *const Imf_DeepScanLineOutputPart_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputPart_header(this_: *const Imf_DeepScanLineOutputPart_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputPart_setFrameBuffer(this_: *mut Imf_DeepScanLineOutputPart_t, frame_buffer: *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputPart_frameBuffer(this_: *const Imf_DeepScanLineOutputPart_t, return_: *mut *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputPart_writePixels(this_: *mut Imf_DeepScanLineOutputPart_t, num_scan_lines: c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputPart_currentScanLine(this_: *const Imf_DeepScanLineOutputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputPart_copyPixels_from_file(this_: *mut Imf_DeepScanLineOutputPart_t, in_: *mut Imf_DeepScanLineInputFile_t) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputPart_copyPixels_from_part(this_: *mut Imf_DeepScanLineOutputPart_t, in_: *mut Imf_DeepScanLineInputPart_t) -> Exception;

pub fn Imf_3_0__DeepScanLineOutputPart_updatePreviewImage(this_: *mut Imf_DeepScanLineOutputPart_t, new_pixels: *const Imf_PreviewRgba_t) -> Exception;


} // extern "C"

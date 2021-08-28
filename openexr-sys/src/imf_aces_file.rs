#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__AcesOutputFile_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__AcesInputFile_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__AcesOutputFile_new(this_: *mut *mut Imf_AcesOutputFile_t, name: *const std_string_t, header: *const Imf_Header_t, rgba_channels: Imf_RgbaChannels, num_threads: c_int) -> Exception;

pub fn Imf_3_0__AcesOutputFile_new_with_stream(this_: *mut *mut Imf_AcesOutputFile_t, os: *mut Imf_OStream_t, header: *const Imf_Header_t, rgba_channels: Imf_RgbaChannels, num_threads: c_int) -> Exception;

pub fn Imf_3_0__AcesOutputFile_new_with_header(this_: *mut *mut Imf_AcesOutputFile_t, name: *const std_string_t, display_window: *const Imath_Box2i_t, data_window: *const Imath_Box2i_t, rgba_channels: Imf_RgbaChannels, pixel_aspect_ratio: c_float, screen_window_center: Imath_V2f_t, screen_window_width: c_float, line_order: Imf_LineOrder, compression: Imf_Compression, num_threads: c_int) -> Exception;

pub fn Imf_3_0__AcesOutputFile_dtor(this_: *mut Imf_AcesOutputFile_t) -> Exception;

pub fn Imf_3_0__AcesOutputFile_setFrameBuffer(this_: *mut Imf_AcesOutputFile_t, base: *const Imf_Rgba_t, x_stride: usize, y_stride: usize) -> Exception;

pub fn Imf_3_0__AcesOutputFile_writePixels(this_: *mut Imf_AcesOutputFile_t, num_scan_lines: c_int) -> Exception;

pub fn Imf_3_0__AcesOutputFile_currentScanLine(this_: *const Imf_AcesOutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__AcesOutputFile_header(this_: *const Imf_AcesOutputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__AcesOutputFile_displayWindow(this_: *const Imf_AcesOutputFile_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__AcesOutputFile_dataWindow(this_: *const Imf_AcesOutputFile_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__AcesOutputFile_pixelAspectRatio(this_: *const Imf_AcesOutputFile_t, return_: *mut c_float) -> Exception;

pub fn Imf_3_0__AcesOutputFile_screenWindowCenter(this_: *const Imf_AcesOutputFile_t, return_: *mut Imath_V2f_t) -> Exception;

pub fn Imf_3_0__AcesOutputFile_screenWindowWidth(this_: *const Imf_AcesOutputFile_t, return_: *mut c_float) -> Exception;

pub fn Imf_3_0__AcesOutputFile_lineOrder(this_: *const Imf_AcesOutputFile_t, return_: *mut Imf_LineOrder) -> Exception;

pub fn Imf_3_0__AcesOutputFile_compression(this_: *const Imf_AcesOutputFile_t, return_: *mut Imf_Compression) -> Exception;

pub fn Imf_3_0__AcesOutputFile_channels(this_: *const Imf_AcesOutputFile_t, return_: *mut Imf_RgbaChannels) -> Exception;

pub fn Imf_3_0__AcesOutputFile_updatePreviewImage(this_: *mut Imf_AcesOutputFile_t, new_pixels: *const Imf_PreviewRgba_t) -> Exception;

pub fn Imf_3_0__AcesInputFile_new(this_: *mut *mut Imf_AcesInputFile_t, name: *const std_string_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__AcesInputFile_new_with_stream(this_: *mut *mut Imf_AcesInputFile_t, is: *mut Imf_IStream_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__AcesInputFile_dtor(this_: *mut Imf_AcesInputFile_t) -> Exception;

pub fn Imf_3_0__AcesInputFile_setFrameBuffer(this_: *mut Imf_AcesInputFile_t, base: *mut Imf_Rgba_t, x_stride: usize, y_stride: usize) -> Exception;

pub fn Imf_3_0__AcesInputFile_readPixels(this_: *mut Imf_AcesInputFile_t, scan_line1: c_int, scan_line2: c_int) -> Exception;

pub fn Imf_3_0__AcesInputFile_header(this_: *const Imf_AcesInputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__AcesInputFile_displayWindow(this_: *const Imf_AcesInputFile_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__AcesInputFile_dataWindow(this_: *const Imf_AcesInputFile_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__AcesInputFile_pixelAspectRatio(this_: *const Imf_AcesInputFile_t, return_: *mut c_float) -> Exception;

pub fn Imf_3_0__AcesInputFile_screenWindowCenter(this_: *const Imf_AcesInputFile_t, return_: *mut Imath_V2f_t) -> Exception;

pub fn Imf_3_0__AcesInputFile_screenWindowWidth(this_: *const Imf_AcesInputFile_t, return_: *mut c_float) -> Exception;

pub fn Imf_3_0__AcesInputFile_lineOrder(this_: *const Imf_AcesInputFile_t, return_: *mut Imf_LineOrder) -> Exception;

pub fn Imf_3_0__AcesInputFile_compression(this_: *const Imf_AcesInputFile_t, return_: *mut Imf_Compression) -> Exception;

pub fn Imf_3_0__AcesInputFile_channels(this_: *const Imf_AcesInputFile_t, return_: *mut Imf_RgbaChannels) -> Exception;

pub fn Imf_3_0__AcesInputFile_fileName(this_: *const Imf_AcesInputFile_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__AcesInputFile_isComplete(this_: *const Imf_AcesInputFile_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__AcesInputFile_version(this_: *const Imf_AcesInputFile_t, return_: *mut c_int) -> Exception;


} // extern "C"

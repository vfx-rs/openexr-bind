#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__RgbaOutputFile_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__RgbaInputFile_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__RgbaOutputFile_ctor(this_: *mut *mut Imf_RgbaOutputFile_t, name: *const c_char, header: *const Imf_Header_t, rgba_channels: Imf_RgbaChannels, num_threads: c_int) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_from_stream(this_: *mut *mut Imf_RgbaOutputFile_t, os: *mut Imf_OStream_t, header: *const Imf_Header_t, rgba_channels: Imf_RgbaChannels, num_threads: c_int) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_with_windows(this_: *mut *mut Imf_RgbaOutputFile_t, name: *const c_char, display_window: *const Imath_Box2i_t, data_window: *const Imath_Box2i_t, rgba_channels: Imf_RgbaChannels, pixel_aspect_ratio: c_float, screen_window_center: Imath_V2f_t, screen_window_width: c_float, line_order: Imf_LineOrder, compression: Imf_Compression, num_threads: c_int) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_with_dimensions(this_: *mut *mut Imf_RgbaOutputFile_t, name: *const c_char, width: c_int, height: c_int, rgba_channels: Imf_RgbaChannels, pixel_aspect_ratio: c_float, screen_window_center: Imath_V2f_t, screen_window_width: c_float, line_order: Imf_LineOrder, compression: Imf_Compression, num_threads: c_int) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_dtor(this_: *mut Imf_RgbaOutputFile_t) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_setFrameBuffer(this_: *mut Imf_RgbaOutputFile_t, base: *const Imf_Rgba_t, x_stride: c_ulong, y_stride: c_ulong) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_writePixels(this_: *mut Imf_RgbaOutputFile_t, num_scan_lines: c_int) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_currentScanLine(this_: *const Imf_RgbaOutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_header(this_: *const Imf_RgbaOutputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_frameBuffer(this_: *const Imf_RgbaOutputFile_t, return_: *mut *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_displayWindow(this_: *const Imf_RgbaOutputFile_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_dataWindow(this_: *const Imf_RgbaOutputFile_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_pixelAspectRatio(this_: *const Imf_RgbaOutputFile_t, return_: *mut c_float) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_screenWindowCenter(this_: *const Imf_RgbaOutputFile_t, return_: *mut Imath_V2f_t) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_screenWindowWidth(this_: *const Imf_RgbaOutputFile_t, return_: *mut c_float) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_lineOrder(this_: *const Imf_RgbaOutputFile_t, return_: *mut Imf_LineOrder) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_compression(this_: *const Imf_RgbaOutputFile_t, return_: *mut Imf_Compression) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_channels(this_: *const Imf_RgbaOutputFile_t, return_: *mut Imf_RgbaChannels) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_updatePreviewImage(this_: *mut Imf_RgbaOutputFile_t, preview: *const Imf_PreviewRgba_t) -> Exception;

pub fn Imf_3_0__RgbaOutputFile_setYCRounding(this_: *mut Imf_RgbaOutputFile_t, round_y: c_uint, round_c: c_uint) -> Exception;

pub fn Imf_3_0__RgbaInputFile_ctor(this_: *mut *mut Imf_RgbaInputFile_t, name: *const c_char, num_threads: c_int) -> Exception;

pub fn Imf_3_0__RgbaInputFile_from_stream(this_: *mut *mut Imf_RgbaInputFile_t, is: *mut Imf_IStream_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__RgbaInputFile_with_layer(this_: *mut *mut Imf_RgbaInputFile_t, name: *const c_char, layer_name: *const std_string_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__RgbaInputFile_from_stream_with_layer(this_: *mut *mut Imf_RgbaInputFile_t, is: *mut Imf_IStream_t, layer_name: *const std_string_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__RgbaInputFile_dtor(this_: *mut Imf_RgbaInputFile_t) -> Exception;

pub fn Imf_3_0__RgbaInputFile_setFrameBuffer(this_: *mut Imf_RgbaInputFile_t, base: *mut Imf_Rgba_t, x_stride: c_ulong, y_stride: c_ulong) -> Exception;

pub fn Imf_3_0__RgbaInputFile_setLayerName(this_: *mut Imf_RgbaInputFile_t, layer_name: *const std_string_t) -> Exception;

pub fn Imf_3_0__RgbaInputFile_readPixels(this_: *mut Imf_RgbaInputFile_t, scan_line1: c_int, scan_line2: c_int) -> Exception;

pub fn Imf_3_0__RgbaInputFile_header(this_: *const Imf_RgbaInputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__RgbaInputFile_frameBuffer(this_: *const Imf_RgbaInputFile_t, return_: *mut *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__RgbaInputFile_displayWindow(this_: *const Imf_RgbaInputFile_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__RgbaInputFile_dataWindow(this_: *const Imf_RgbaInputFile_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__RgbaInputFile_pixelAspectRatio(this_: *const Imf_RgbaInputFile_t, return_: *mut c_float) -> Exception;

pub fn Imf_3_0__RgbaInputFile_screenWindowCenter(this_: *const Imf_RgbaInputFile_t, return_: *mut Imath_V2f_t) -> Exception;

pub fn Imf_3_0__RgbaInputFile_screenWindowWidth(this_: *const Imf_RgbaInputFile_t, return_: *mut c_float) -> Exception;

pub fn Imf_3_0__RgbaInputFile_lineOrder(this_: *const Imf_RgbaInputFile_t, return_: *mut Imf_LineOrder) -> Exception;

pub fn Imf_3_0__RgbaInputFile_compression(this_: *const Imf_RgbaInputFile_t, return_: *mut Imf_Compression) -> Exception;

pub fn Imf_3_0__RgbaInputFile_channels(this_: *const Imf_RgbaInputFile_t, return_: *mut Imf_RgbaChannels) -> Exception;

pub fn Imf_3_0__RgbaInputFile_fileName(this_: *const Imf_RgbaInputFile_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__RgbaInputFile_isComplete(this_: *const Imf_RgbaInputFile_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__RgbaInputFile_version(this_: *const Imf_RgbaInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0_ComputeBasePointer(return_: *mut *mut Imf_Rgba_t, ptr: *mut Imf_Rgba_t, data_window: *const Imath_Box2i_t) -> Exception;


} // extern "C"

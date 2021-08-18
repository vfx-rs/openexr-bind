#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__TiledRgbaOutputFile_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TiledRgbaInputFile_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__TiledRgbaOutputFile_ctor(this_: *mut *mut Imf_TiledRgbaOutputFile_t, name: *const c_char, header: *const Imf_Header_t, rgba_channels: Imf_RgbaChannels, tile_x_size: c_int, tile_y_size: c_int, mode: Imf_LevelMode, rmode: Imf_LevelRoundingMode, num_threads: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_from_stream(this_: *mut *mut Imf_TiledRgbaOutputFile_t, os: *mut Imf_OStream_t, header: *const Imf_Header_t, rgba_channels: Imf_RgbaChannels, tile_x_size: c_int, tile_y_size: c_int, mode: Imf_LevelMode, rmode: Imf_LevelRoundingMode, num_threads: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_with_windows(this_: *mut *mut Imf_TiledRgbaOutputFile_t, name: *const c_char, tile_x_size: c_int, tile_y_size: c_int, mode: Imf_LevelMode, rmode: Imf_LevelRoundingMode, display_window: *const Imath_Box2i_t, data_window: *const Imath_Box2i_t, rgba_channels: Imf_RgbaChannels, pixel_aspect_ratio: c_float, screen_window_center: Imath_V2f_t, screen_window_width: c_float, line_order: Imf_LineOrder, compression: Imf_Compression, num_threads: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_with_dimensions(this_: *mut *mut Imf_TiledRgbaOutputFile_t, name: *const c_char, width: c_int, height: c_int, tile_x_size: c_int, tile_y_size: c_int, mode: Imf_LevelMode, rmode: Imf_LevelRoundingMode, rgba_channel: Imf_RgbaChannels, pixel_aspect_ratio: c_float, screen_window_center: Imath_V2f_t, screen_window_width: c_float, line_order: Imf_LineOrder, compression: Imf_Compression, num_threads: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_dtor(this_: *mut Imf_TiledRgbaOutputFile_t) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_setFrameBuffer(this_: *mut Imf_TiledRgbaOutputFile_t, base: *const Imf_Rgba_t, x_stride: c_ulong, y_stride: c_ulong) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_header(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_frameBuffer(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_displayWindow(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_dataWindow(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_pixelAspectRatio(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut c_float) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_screenWindowCenter(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut Imath_V2f_t) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_screenWindowWidth(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut c_float) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_lineOrder(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut Imf_LineOrder) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_compression(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut Imf_Compression) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_channels(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut Imf_RgbaChannels) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_tileXSize(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_tileYSize(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_levelMode(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut Imf_LevelMode) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_levelRoundingMode(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_numLevels(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_numXLevels(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_numYLevels(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_isValidLevel(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut bool, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_levelWidth(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_levelHeight(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_numXTiles(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_numYTiles(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_dataWindowForLevel(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut Imath_Box2i_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_dataWindowForTile(this_: *const Imf_TiledRgbaOutputFile_t, return_: *mut Imath_Box2i_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_writeTile(this_: *mut Imf_TiledRgbaOutputFile_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_writeTiles(this_: *mut Imf_TiledRgbaOutputFile_t, dx_min: c_int, dx_max: c_int, dy_min: c_int, dy_max: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaOutputFile_updatePreviewImage(this_: *mut Imf_TiledRgbaOutputFile_t, new_pixels: *const Imf_PreviewRgba_t) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_ctor(this_: *mut *mut Imf_TiledRgbaInputFile_t, name: *const c_char, num_threads: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_from_stream(this_: *mut *mut Imf_TiledRgbaInputFile_t, is: *mut Imf_IStream_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_with_layer(this_: *mut *mut Imf_TiledRgbaInputFile_t, name: *const c_char, layer_name: *const std_string_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_from_stream_with_layer(this_: *mut *mut Imf_TiledRgbaInputFile_t, is: *mut Imf_IStream_t, layer_name: *const std_string_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_dtor(this_: *mut Imf_TiledRgbaInputFile_t) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_setFrameBuffer(this_: *mut Imf_TiledRgbaInputFile_t, base: *mut Imf_Rgba_t, x_stride: c_ulong, y_stride: c_ulong) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_setLayerName(this_: *mut Imf_TiledRgbaInputFile_t, layer_name: *const std_string_t) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_header(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_frameBuffer(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_displayWindow(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_dataWindow(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_pixelAspectRatio(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut c_float) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_screenWindowCenter(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut Imath_V2f_t) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_screenWindowWidth(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut c_float) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_lineOrder(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut Imf_LineOrder) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_compression(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut Imf_Compression) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_channels(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut Imf_RgbaChannels) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_fileName(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_isComplete(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_version(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_tileXSize(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_tileYSize(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_levelMode(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut Imf_LevelMode) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_levelRoundingMode(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_numLevels(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_numXLevels(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_numYLevels(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_isValidLevel(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut bool, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_levelWidth(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_levelHeight(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_numXTiles(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_numYTiles(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_dataWindowForLevel(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut Imath_Box2i_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_dataWindowForTile(this_: *const Imf_TiledRgbaInputFile_t, return_: *mut Imath_Box2i_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_readTile(this_: *mut Imf_TiledRgbaInputFile_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledRgbaInputFile_readTiles(this_: *mut Imf_TiledRgbaInputFile_t, dx_min: c_int, dx_max: c_int, dy_min: c_int, dy_max: c_int, lx: c_int, ly: c_int) -> Exception;


} // extern "C"

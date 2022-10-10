#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__TiledOutputFile_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__TiledOutputFile_ctor(this_: *mut *mut Imf_TiledOutputFile_t, file_name: *const c_char, header: *const Imf_Header_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_from_stream(this_: *mut *mut Imf_TiledOutputFile_t, os: *mut Imf_OStream_t, header: *const Imf_Header_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_dtor(this_: *mut Imf_TiledOutputFile_t) -> Exception;

pub fn Imf_3_0__TiledOutputFile_fileName(this_: *const Imf_TiledOutputFile_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TiledOutputFile_header(this_: *const Imf_TiledOutputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__TiledOutputFile_setFrameBuffer(this_: *mut Imf_TiledOutputFile_t, frame_buffer: *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__TiledOutputFile_frameBuffer(this_: *const Imf_TiledOutputFile_t, return_: *mut *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__TiledOutputFile_tileXSize(this_: *const Imf_TiledOutputFile_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__TiledOutputFile_tileYSize(this_: *const Imf_TiledOutputFile_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__TiledOutputFile_levelMode(this_: *const Imf_TiledOutputFile_t, return_: *mut Imf_LevelMode) -> Exception;

pub fn Imf_3_0__TiledOutputFile_levelRoundingMode(this_: *const Imf_TiledOutputFile_t, return_: *mut Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__TiledOutputFile_numLevels(this_: *const Imf_TiledOutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_numXLevels(this_: *const Imf_TiledOutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_numYLevels(this_: *const Imf_TiledOutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_isValidLevel(this_: *const Imf_TiledOutputFile_t, return_: *mut bool, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_levelWidth(this_: *const Imf_TiledOutputFile_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_levelHeight(this_: *const Imf_TiledOutputFile_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_numXTiles(this_: *const Imf_TiledOutputFile_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_numYTiles(this_: *const Imf_TiledOutputFile_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_dataWindowForLevel(this_: *const Imf_TiledOutputFile_t, return_: *mut Imath_Box2i_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_dataWindowForTile(this_: *const Imf_TiledOutputFile_t, return_: *mut Imath_Box2i_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_writeTile(this_: *mut Imf_TiledOutputFile_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_writeTiles(this_: *mut Imf_TiledOutputFile_t, dx1: c_int, dx2: c_int, dy1: c_int, dy2: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputFile_copyPixels_from_tiled_file(this_: *mut Imf_TiledOutputFile_t, in_: *mut Imf_TiledInputFile_t) -> Exception;

pub fn Imf_3_0__TiledOutputFile_copyPixels_from_tiled_part(this_: *mut Imf_TiledOutputFile_t, in_: *mut Imf_TiledInputPart_t) -> Exception;

pub fn Imf_3_0__TiledOutputFile_copyPixels_from_file(this_: *mut Imf_TiledOutputFile_t, in_: *mut Imf_InputFile_t) -> Exception;

pub fn Imf_3_0__TiledOutputFile_copyPixels_from_part(this_: *mut Imf_TiledOutputFile_t, in_: *mut Imf_InputPart_t) -> Exception;

pub fn Imf_3_0__TiledOutputFile_updatePreviewImage(this_: *mut Imf_TiledOutputFile_t, new_pixels: *const Imf_PreviewRgba_t) -> Exception;

pub fn Imf_3_0__TiledOutputFile_breakTile(this_: *mut Imf_TiledOutputFile_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int, offset: c_int, length: c_int, c: c_char) -> Exception;


} // extern "C"

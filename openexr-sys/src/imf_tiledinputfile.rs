#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__TiledInputFile_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__TiledInputFile_ctor(this_: *mut *mut Imf_TiledInputFile_t, file_name: *const c_char, num_threads: c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_from_stream(this_: *mut *mut Imf_TiledInputFile_t, is: *mut Imf_IStream_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_dtor(this_: *mut Imf_TiledInputFile_t) -> Exception;

pub fn Imf_3_0__TiledInputFile_fileName(this_: *const Imf_TiledInputFile_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TiledInputFile_header(this_: *const Imf_TiledInputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__TiledInputFile_version(this_: *const Imf_TiledInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_setFrameBuffer(this_: *mut Imf_TiledInputFile_t, frame_buffer: *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__TiledInputFile_frameBuffer(this_: *const Imf_TiledInputFile_t, return_: *mut *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__TiledInputFile_isComplete(this_: *const Imf_TiledInputFile_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TiledInputFile_tileXSize(this_: *const Imf_TiledInputFile_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__TiledInputFile_tileYSize(this_: *const Imf_TiledInputFile_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__TiledInputFile_levelMode(this_: *const Imf_TiledInputFile_t, return_: *mut Imf_LevelMode) -> Exception;

pub fn Imf_3_0__TiledInputFile_levelRoundingMode(this_: *const Imf_TiledInputFile_t, return_: *mut Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__TiledInputFile_numLevels(this_: *const Imf_TiledInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_numXLevels(this_: *const Imf_TiledInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_numYLevels(this_: *const Imf_TiledInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_isValidLevel(this_: *const Imf_TiledInputFile_t, return_: *mut bool, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_levelWidth(this_: *const Imf_TiledInputFile_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_levelHeight(this_: *const Imf_TiledInputFile_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_numXTiles(this_: *const Imf_TiledInputFile_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_numYTiles(this_: *const Imf_TiledInputFile_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_dataWindowForLevel(this_: *const Imf_TiledInputFile_t, return_: *mut Imath_Box2i_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_dataWindowForTile(this_: *const Imf_TiledInputFile_t, return_: *mut Imath_Box2i_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_readTile(this_: *mut Imf_TiledInputFile_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_readTiles(this_: *mut Imf_TiledInputFile_t, dx1: c_int, dx2: c_int, dy1: c_int, dy2: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputFile_rawTileData(this_: *mut Imf_TiledInputFile_t, dx: *mut c_int, dy: *mut c_int, lx: *mut c_int, ly: *mut c_int, pixel_data: *mut *const c_char, pixel_data_size: *mut c_int) -> Exception;


} // extern "C"

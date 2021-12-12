#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__DeepTiledInputFile_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__DeepTiledInputFile_ctor(this_: *mut *mut Imf_DeepTiledInputFile_t, file_name: *const c_char, num_threads: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_from_stream(this_: *mut *mut Imf_DeepTiledInputFile_t, is: *mut Imf_IStream_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_dtor(this_: *mut Imf_DeepTiledInputFile_t) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_fileName(this_: *const Imf_DeepTiledInputFile_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_header(this_: *const Imf_DeepTiledInputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_version(this_: *const Imf_DeepTiledInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_setFrameBuffer(this_: *mut Imf_DeepTiledInputFile_t, frame_buffer: *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_frameBuffer(this_: *const Imf_DeepTiledInputFile_t, return_: *mut *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_isComplete(this_: *const Imf_DeepTiledInputFile_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_tileXSize(this_: *const Imf_DeepTiledInputFile_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_tileYSize(this_: *const Imf_DeepTiledInputFile_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_levelMode(this_: *const Imf_DeepTiledInputFile_t, return_: *mut Imf_LevelMode) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_levelRoundingMode(this_: *const Imf_DeepTiledInputFile_t, return_: *mut Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_numLevels(this_: *const Imf_DeepTiledInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_numXLevels(this_: *const Imf_DeepTiledInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_numYLevels(this_: *const Imf_DeepTiledInputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_isValidLevel(this_: *const Imf_DeepTiledInputFile_t, return_: *mut bool, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_totalTiles(this_: *const Imf_DeepTiledInputFile_t, return_: *mut usize) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_levelWidth(this_: *const Imf_DeepTiledInputFile_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_levelHeight(this_: *const Imf_DeepTiledInputFile_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_numXTiles(this_: *const Imf_DeepTiledInputFile_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_numYTiles(this_: *const Imf_DeepTiledInputFile_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_dataWindowForLevel(this_: *const Imf_DeepTiledInputFile_t, return_: *mut Imath_Box2i_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_dataWindowForTile(this_: *const Imf_DeepTiledInputFile_t, return_: *mut Imath_Box2i_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_readTile(this_: *mut Imf_DeepTiledInputFile_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_readTiles(this_: *mut Imf_DeepTiledInputFile_t, dx1: c_int, dx2: c_int, dy1: c_int, dy2: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_rawTileData(this_: *const Imf_DeepTiledInputFile_t, dx: *mut c_int, dy: *mut c_int, lx: *mut c_int, ly: *mut c_int, pixel_data: *mut c_char, data_size: *mut u64) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_readPixelSampleCount(this_: *mut Imf_DeepTiledInputFile_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputFile_readPixelSampleCounts(this_: *mut Imf_DeepTiledInputFile_t, dx1: c_int, dx2: c_int, dy1: c_int, dy2: c_int, lx: c_int, ly: c_int) -> Exception;


} // extern "C"

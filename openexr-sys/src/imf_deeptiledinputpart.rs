#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


impl Imf_3_0__DeepTiledInputPart_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__DeepTiledInputPart_sizeof(),
                Imf_3_0__DeepTiledInputPart_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__DeepTiledInputPart_sizeof() -> usize;

pub fn Imf_3_0__DeepTiledInputPart_alignof() -> usize;

pub fn Imf_3_0__DeepTiledInputPart_ctor(this_: *mut Imf_DeepTiledInputPart_t, multi_part_file: *mut Imf_MultiPartInputFile_t, part_number: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_fileName(this_: *const Imf_DeepTiledInputPart_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_header(this_: *const Imf_DeepTiledInputPart_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_version(this_: *const Imf_DeepTiledInputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_setFrameBuffer(this_: *mut Imf_DeepTiledInputPart_t, frame_buffer: *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_frameBuffer(this_: *const Imf_DeepTiledInputPart_t, return_: *mut *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_isComplete(this_: *const Imf_DeepTiledInputPart_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_tileXSize(this_: *const Imf_DeepTiledInputPart_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_tileYSize(this_: *const Imf_DeepTiledInputPart_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_levelMode(this_: *const Imf_DeepTiledInputPart_t, return_: *mut Imf_LevelMode) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_levelRoundingMode(this_: *const Imf_DeepTiledInputPart_t, return_: *mut Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_numLevels(this_: *const Imf_DeepTiledInputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_numXLevels(this_: *const Imf_DeepTiledInputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_numYLevels(this_: *const Imf_DeepTiledInputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_isValidLevel(this_: *const Imf_DeepTiledInputPart_t, return_: *mut bool, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_levelWidth(this_: *const Imf_DeepTiledInputPart_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_levelHeight(this_: *const Imf_DeepTiledInputPart_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_numXTiles(this_: *const Imf_DeepTiledInputPart_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_numYTiles(this_: *const Imf_DeepTiledInputPart_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_dataWindowForLevel(this_: *const Imf_DeepTiledInputPart_t, return_: *mut Imath_Box2i_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_dataWindowForTile(this_: *const Imf_DeepTiledInputPart_t, return_: *mut Imath_Box2i_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_readTile(this_: *mut Imf_DeepTiledInputPart_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_readTiles(this_: *mut Imf_DeepTiledInputPart_t, dx1: c_int, dx2: c_int, dy1: c_int, dy2: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_rawTileData(this_: *const Imf_DeepTiledInputPart_t, dx: *mut c_int, dy: *mut c_int, lx: *mut c_int, ly: *mut c_int, data: *mut c_char, data_size: *mut u64) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_readPixelSampleCount(this_: *mut Imf_DeepTiledInputPart_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledInputPart_readPixelSampleCounts(this_: *mut Imf_DeepTiledInputPart_t, dx1: c_int, dx2: c_int, dy1: c_int, dy2: c_int, lx: c_int, ly: c_int) -> Exception;


} // extern "C"

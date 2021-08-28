#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(%ALIGNImf_3_0::TiledInputPart%))]
#[derive(Clone)]
pub struct Imf_3_0__TiledInputPart_t {
    _inner: [u8; %SIZEImf_3_0::TiledInputPart%]
}

impl Default for Imf_3_0__TiledInputPart_t {
    fn default() -> Self {
        Self { _inner: [0u8; %SIZEImf_3_0::TiledInputPart%] }
    }
}

impl Imf_3_0__TiledInputPart_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__TiledInputPart_sizeof(),
                Imf_3_0__TiledInputPart_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__TiledInputPart_sizeof() -> usize;

pub fn Imf_3_0__TiledInputPart_alignof() -> usize;

pub fn Imf_3_0__TiledInputPart_ctor(this_: *mut Imf_TiledInputPart_t, multi_part_file: *mut Imf_MultiPartInputFile_t, part_number: c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_fileName(this_: *const Imf_TiledInputPart_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TiledInputPart_header(this_: *const Imf_TiledInputPart_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__TiledInputPart_version(this_: *const Imf_TiledInputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_setFrameBuffer(this_: *mut Imf_TiledInputPart_t, frame_buffer: *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__TiledInputPart_frameBuffer(this_: *const Imf_TiledInputPart_t, return_: *mut *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__TiledInputPart_isComplete(this_: *const Imf_TiledInputPart_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TiledInputPart_tileXSize(this_: *const Imf_TiledInputPart_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__TiledInputPart_tileYSize(this_: *const Imf_TiledInputPart_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__TiledInputPart_levelMode(this_: *const Imf_TiledInputPart_t, return_: *mut Imf_LevelMode) -> Exception;

pub fn Imf_3_0__TiledInputPart_levelRoundingMode(this_: *const Imf_TiledInputPart_t, return_: *mut Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__TiledInputPart_numLevels(this_: *const Imf_TiledInputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_numXLevels(this_: *const Imf_TiledInputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_numYLevels(this_: *const Imf_TiledInputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_isValidLevel(this_: *const Imf_TiledInputPart_t, return_: *mut bool, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_levelWidth(this_: *const Imf_TiledInputPart_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_levelHeight(this_: *const Imf_TiledInputPart_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_numXTiles(this_: *const Imf_TiledInputPart_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_numYTiles(this_: *const Imf_TiledInputPart_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_dataWindowForLevel(this_: *const Imf_TiledInputPart_t, return_: *mut Imath_Box2i_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_dataWindowForTile(this_: *const Imf_TiledInputPart_t, return_: *mut Imath_Box2i_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_readTile(this_: *mut Imf_TiledInputPart_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_readTiles(this_: *mut Imf_TiledInputPart_t, dx1: c_int, dx2: c_int, dy1: c_int, dy2: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledInputPart_rawTileData(this_: *mut Imf_TiledInputPart_t, dx: *mut c_int, dy: *mut c_int, lx: *mut c_int, ly: *mut c_int, pixel_data: *mut *const c_char, pixel_data_size: *mut c_int) -> Exception;


} // extern "C"

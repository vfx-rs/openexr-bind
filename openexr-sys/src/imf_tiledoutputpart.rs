#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(%ALIGNImf_3_0::TiledOutputPart%))]
#[derive(Clone)]
pub struct Imf_3_0__TiledOutputPart_t {
    _inner: [u8; %SIZEImf_3_0::TiledOutputPart%]
}

impl Default for Imf_3_0__TiledOutputPart_t {
    fn default() -> Self {
        Self { _inner: [0u8; %SIZEImf_3_0::TiledOutputPart%] }
    }
}

impl Imf_3_0__TiledOutputPart_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__TiledOutputPart_sizeof(),
                Imf_3_0__TiledOutputPart_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__TiledOutputPart_sizeof() -> usize;

pub fn Imf_3_0__TiledOutputPart_alignof() -> usize;

pub fn Imf_3_0__TiledOutputPart_ctor(this_: *mut Imf_TiledOutputPart_t, multi_part_file: *mut Imf_MultiPartOutputFile_t, part_number: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputPart_fileName(this_: *const Imf_TiledOutputPart_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TiledOutputPart_header(this_: *const Imf_TiledOutputPart_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__TiledOutputPart_setFrameBuffer(this_: *mut Imf_TiledOutputPart_t, frame_buffer: *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__TiledOutputPart_frameBuffer(this_: *const Imf_TiledOutputPart_t, return_: *mut *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__TiledOutputPart_tileXSize(this_: *const Imf_TiledOutputPart_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__TiledOutputPart_tileYSize(this_: *const Imf_TiledOutputPart_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__TiledOutputPart_levelMode(this_: *const Imf_TiledOutputPart_t, return_: *mut Imf_LevelMode) -> Exception;

pub fn Imf_3_0__TiledOutputPart_levelRoundingMode(this_: *const Imf_TiledOutputPart_t, return_: *mut Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__TiledOutputPart_numLevels(this_: *const Imf_TiledOutputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledOutputPart_numXLevels(this_: *const Imf_TiledOutputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledOutputPart_numYLevels(this_: *const Imf_TiledOutputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TiledOutputPart_isValidLevel(this_: *const Imf_TiledOutputPart_t, return_: *mut bool, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputPart_levelWidth(this_: *const Imf_TiledOutputPart_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputPart_levelHeight(this_: *const Imf_TiledOutputPart_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputPart_numXTiles(this_: *const Imf_TiledOutputPart_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputPart_numYTiles(this_: *const Imf_TiledOutputPart_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputPart_dataWindowForLevel(this_: *const Imf_TiledOutputPart_t, return_: *mut Imath_Box2i_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputPart_dataWindowForTile(this_: *const Imf_TiledOutputPart_t, return_: *mut Imath_Box2i_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputPart_writeTile(this_: *mut Imf_TiledOutputPart_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputPart_writeTiles(this_: *mut Imf_TiledOutputPart_t, dx1: c_int, dx2: c_int, dy1: c_int, dy2: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__TiledOutputPart_copyPixels_from_tiled_file(this_: *mut Imf_TiledOutputPart_t, in_: *mut Imf_TiledInputFile_t) -> Exception;

pub fn Imf_3_0__TiledOutputPart_copyPixels_from_file(this_: *mut Imf_TiledOutputPart_t, in_: *mut Imf_InputFile_t) -> Exception;

pub fn Imf_3_0__TiledOutputPart_copyPixels_from_tiled_part(this_: *mut Imf_TiledOutputPart_t, in_: *mut Imf_TiledInputPart_t) -> Exception;

pub fn Imf_3_0__TiledOutputPart_copyPixels_from_part(this_: *mut Imf_TiledOutputPart_t, in_: *mut Imf_InputPart_t) -> Exception;

pub fn Imf_3_0__TiledOutputPart_updatePreviewImage(this_: *mut Imf_TiledOutputPart_t, new_pixels: *const Imf_PreviewRgba_t) -> Exception;

pub fn Imf_3_0__TiledOutputPart_breakTile(this_: *mut Imf_TiledOutputPart_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int, offset: c_int, length: c_int, c: c_char) -> Exception;


} // extern "C"

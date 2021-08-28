#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(%ALIGNImf_3_0::DeepTiledOutputPart%))]
#[derive(Clone)]
pub struct Imf_3_0__DeepTiledOutputPart_t {
    _inner: [u8; %SIZEImf_3_0::DeepTiledOutputPart%]
}

impl Default for Imf_3_0__DeepTiledOutputPart_t {
    fn default() -> Self {
        Self { _inner: [0u8; %SIZEImf_3_0::DeepTiledOutputPart%] }
    }
}

impl Imf_3_0__DeepTiledOutputPart_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__DeepTiledOutputPart_sizeof(),
                Imf_3_0__DeepTiledOutputPart_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__DeepTiledOutputPart_sizeof() -> usize;

pub fn Imf_3_0__DeepTiledOutputPart_alignof() -> usize;

pub fn Imf_3_0__DeepTiledOutputPart_ctor(this_: *mut Imf_DeepTiledOutputPart_t, multi_part_file: *mut Imf_MultiPartOutputFile_t, part_number: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_fileName(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_header(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_setFrameBuffer(this_: *mut Imf_DeepTiledOutputPart_t, frame_buffer: *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_frameBuffer(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_tileXSize(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_tileYSize(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_levelMode(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut Imf_LevelMode) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_levelRoundingMode(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_numLevels(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_numXLevels(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_numYLevels(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_isValidLevel(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut bool, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_levelWidth(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_levelHeight(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_numXTiles(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_numYTiles(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_dataWindowForLevel(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut Imath_Box2i_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_dataWindowForTile(this_: *const Imf_DeepTiledOutputPart_t, return_: *mut Imath_Box2i_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_writeTile(this_: *mut Imf_DeepTiledOutputPart_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_writeTiles(this_: *mut Imf_DeepTiledOutputPart_t, dx1: c_int, dx2: c_int, dy1: c_int, dy2: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_copyPixels_from_file(this_: *mut Imf_DeepTiledOutputPart_t, in_: *mut Imf_DeepTiledInputFile_t) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_copyPixels_from_part(this_: *mut Imf_DeepTiledOutputPart_t, in_: *mut Imf_DeepTiledInputPart_t) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_updatePreviewImage(this_: *mut Imf_DeepTiledOutputPart_t, new_pixels: *const Imf_PreviewRgba_t) -> Exception;

pub fn Imf_3_0__DeepTiledOutputPart_breakTile(this_: *mut Imf_DeepTiledOutputPart_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int, offset: c_int, length: c_int, c: c_char) -> Exception;


} // extern "C"

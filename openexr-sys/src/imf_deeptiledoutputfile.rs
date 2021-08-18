#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__DeepTiledOutputFile_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__DeepTiledOutputFile_ctor(this_: *mut *mut Imf_DeepTiledOutputFile_t, file_name: *const c_char, header: *const Imf_Header_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_from_stream(this_: *mut *mut Imf_DeepTiledOutputFile_t, os: *mut Imf_OStream_t, header: *const Imf_Header_t, num_threads: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_dtor(this_: *mut Imf_DeepTiledOutputFile_t) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_fileName(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_header(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_setFrameBuffer(this_: *mut Imf_DeepTiledOutputFile_t, frame_buffer: *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_frameBuffer(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_tileXSize(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_tileYSize(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_levelMode(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut Imf_LevelMode) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_levelRoundingMode(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_numLevels(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_numXLevels(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_numYLevels(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_isValidLevel(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut bool, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_levelWidth(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_levelHeight(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_numXTiles(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_numYTiles(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_dataWindowForLevel(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut Imath_Box2i_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_dataWindowForTile(this_: *const Imf_DeepTiledOutputFile_t, return_: *mut Imath_Box2i_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_writeTile(this_: *mut Imf_DeepTiledOutputFile_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_writeTiles(this_: *mut Imf_DeepTiledOutputFile_t, dx1: c_int, dx2: c_int, dy1: c_int, dy2: c_int, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_copyPixels_from_file(this_: *mut Imf_DeepTiledOutputFile_t, in_: *mut Imf_DeepTiledInputFile_t) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_copyPixels_from_part(this_: *mut Imf_DeepTiledOutputFile_t, in_: *mut Imf_DeepTiledInputPart_t) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_updatePreviewImage(this_: *mut Imf_DeepTiledOutputFile_t, new_pixels: *const Imf_PreviewRgba_t) -> Exception;

pub fn Imf_3_0__DeepTiledOutputFile_breakTile(this_: *mut Imf_DeepTiledOutputFile_t, dx: c_int, dy: c_int, lx: c_int, ly: c_int, offset: c_int, length: c_int, c: c_char) -> Exception;


} // extern "C"

#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__FlatImage_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__FlatImage_levelMode(this_: *const Imf_FlatImage_t, return_: *mut Imf_LevelMode) -> Exception;

pub fn Imf_3_0__FlatImage_levelRoundingMode(this_: *const Imf_FlatImage_t, return_: *mut Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__FlatImage_numLevels(this_: *const Imf_FlatImage_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__FlatImage_numXLevels(this_: *const Imf_FlatImage_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__FlatImage_numYLevels(this_: *const Imf_FlatImage_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__FlatImage_dataWindow(this_: *const Imf_FlatImage_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__FlatImage_dataWindowForLevel(this_: *const Imf_FlatImage_t, return_: *mut *const Imath_Box2i_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__FlatImage_levelWidth(this_: *const Imf_FlatImage_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__FlatImage_levelHeight(this_: *const Imf_FlatImage_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__FlatImage_resize(this_: *mut Imf_FlatImage_t, data_window: *const Imath_Box2i_t, level_mode: Imf_LevelMode, level_rounding_mode: Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__FlatImage_shiftPixels(this_: *mut Imf_FlatImage_t, dx: c_int, dy: c_int) -> Exception;

pub fn Imf_3_0__FlatImage_insertChannel(this_: *mut Imf_FlatImage_t, name: *const std_string_t, type_: Imf_PixelType, x_sampling: c_int, y_sampling: c_int, p_linear: bool) -> Exception;

pub fn Imf_3_0__FlatImage_eraseChannel(this_: *mut Imf_FlatImage_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImage_clearChannels(this_: *mut Imf_FlatImage_t) -> Exception;

pub fn Imf_3_0__FlatImage_renameChannel(this_: *mut Imf_FlatImage_t, old_name: *const std_string_t, new_name: *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImage_default(this_: *mut *mut Imf_FlatImage_t) -> Exception;

pub fn Imf_3_0__FlatImage_ctor(this_: *mut *mut Imf_FlatImage_t, data_window: *const Imath_Box2i_t, level_mode: Imf_LevelMode, level_rounding_mode: Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__FlatImage_dtor(this_: *mut Imf_FlatImage_t) -> Exception;

pub fn Imf_3_0__FlatImage_level(this_: *mut Imf_FlatImage_t, return_: *mut *mut Imf_FlatImageLevel_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__FlatImage_level_const(this_: *const Imf_FlatImage_t, return_: *mut *const Imf_FlatImageLevel_t, lx: c_int, ly: c_int) -> Exception;


} // extern "C"

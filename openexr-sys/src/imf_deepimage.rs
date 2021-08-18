#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__DeepImage_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__DeepImage_levelMode(this_: *const Imf_DeepImage_t, return_: *mut Imf_LevelMode) -> Exception;

pub fn Imf_3_0__DeepImage_levelRoundingMode(this_: *const Imf_DeepImage_t, return_: *mut Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__DeepImage_numLevels(this_: *const Imf_DeepImage_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepImage_numXLevels(this_: *const Imf_DeepImage_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepImage_numYLevels(this_: *const Imf_DeepImage_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepImage_dataWindow(this_: *const Imf_DeepImage_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__DeepImage_dataWindowForLevel(this_: *const Imf_DeepImage_t, return_: *mut *const Imath_Box2i_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepImage_levelWidth(this_: *const Imf_DeepImage_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__DeepImage_levelHeight(this_: *const Imf_DeepImage_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepImage_resize(this_: *mut Imf_DeepImage_t, data_window: *const Imath_Box2i_t, level_mode: Imf_LevelMode, level_rounding_mode: Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__DeepImage_shiftPixels(this_: *mut Imf_DeepImage_t, dx: c_int, dy: c_int) -> Exception;

pub fn Imf_3_0__DeepImage_insertChannel(this_: *mut Imf_DeepImage_t, name: *const std_string_t, type_: Imf_PixelType, x_samplingt: c_int, y_sampling: c_int, p_linear: bool) -> Exception;

pub fn Imf_3_0__DeepImage_eraseChannel(this_: *mut Imf_DeepImage_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImage_clearChannels(this_: *mut Imf_DeepImage_t) -> Exception;

pub fn Imf_3_0__DeepImage_renameChannel(this_: *mut Imf_DeepImage_t, old_name: *const std_string_t, new_name: *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImage_renameChannels(this_: *mut Imf_DeepImage_t, old_to_new_names: *const std_map_string_string_t) -> Exception;

pub fn Imf_3_0__DeepImage_default(this_: *mut *mut Imf_DeepImage_t) -> Exception;

pub fn Imf_3_0__DeepImage_ctor(this_: *mut *mut Imf_DeepImage_t, data_window: *const Imath_Box2i_t, level_mode: Imf_LevelMode, level_rounding_mode: Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__DeepImage_dtor(this_: *mut Imf_DeepImage_t) -> Exception;

pub fn Imf_3_0__DeepImage_level(this_: *mut Imf_DeepImage_t, return_: *mut *mut Imf_DeepImageLevel_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__DeepImage_level_const(this_: *const Imf_DeepImage_t, return_: *mut *const Imf_DeepImageLevel_t, lx: c_int, ly: c_int) -> Exception;


} // extern "C"

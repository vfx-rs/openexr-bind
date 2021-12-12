#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__Image_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__Image_dtor(this_: *mut Imf_Image_t) -> Exception;

pub fn Imf_3_0__Image_levelMode(this_: *const Imf_Image_t, return_: *mut Imf_LevelMode) -> Exception;

pub fn Imf_3_0__Image_levelRoundingMode(this_: *const Imf_Image_t, return_: *mut Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__Image_numLevels(this_: *const Imf_Image_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__Image_numXLevels(this_: *const Imf_Image_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__Image_numYLevels(this_: *const Imf_Image_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__Image_dataWindow(this_: *const Imf_Image_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__Image_dataWindowForLevel(this_: *const Imf_Image_t, return_: *mut *const Imath_Box2i_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__Image_levelWidth(this_: *const Imf_Image_t, return_: *mut c_int, lx: c_int) -> Exception;

pub fn Imf_3_0__Image_levelHeight(this_: *const Imf_Image_t, return_: *mut c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__Image_resize(this_: *mut Imf_Image_t, data_window: *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__Image_resize_1(this_: *mut Imf_Image_t, data_window: *const Imath_Box2i_t, level_mode: Imf_LevelMode, level_rounding_mode: Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__Image_shiftPixels(this_: *mut Imf_Image_t, dx: c_int, dy: c_int) -> Exception;

pub fn Imf_3_0__Image_insertChannel(this_: *mut Imf_Image_t, name: *const std_string_t, type_: Imf_PixelType, x_sampling: c_int, y_sampling: c_int, p_linear: bool) -> Exception;

pub fn Imf_3_0__Image_insertChannel_1(this_: *mut Imf_Image_t, name: *const std_string_t, channel: *const Imf_Channel_t) -> Exception;

pub fn Imf_3_0__Image_eraseChannel(this_: *mut Imf_Image_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__Image_clearChannels(this_: *mut Imf_Image_t) -> Exception;

pub fn Imf_3_0__Image_renameChannel(this_: *mut Imf_Image_t, old_name: *const std_string_t, new_name: *const std_string_t) -> Exception;

pub fn Imf_3_0__Image_renameChannels(this_: *mut Imf_Image_t, old_to_new_names: *const std_map_string_string_t) -> Exception;

pub fn Imf_3_0__Image_level(this_: *mut Imf_Image_t, return_: *mut *mut Imf_ImageLevel_t, lx: c_int, ly: c_int) -> Exception;

pub fn Imf_3_0__Image_level_const(this_: *const Imf_Image_t, return_: *mut *const Imf_ImageLevel_t, lx: c_int, ly: c_int) -> Exception;


} // extern "C"

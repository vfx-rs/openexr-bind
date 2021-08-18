#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;



extern "C" {

pub fn Imf_3_0_fps_23_976(return_: *mut Imf_Rational_t) -> Exception;

pub fn Imf_3_0_fps_24(return_: *mut Imf_Rational_t) -> Exception;

pub fn Imf_3_0_fps_25(return_: *mut Imf_Rational_t) -> Exception;

pub fn Imf_3_0_fps_29_97(return_: *mut Imf_Rational_t) -> Exception;

pub fn Imf_3_0_fps_30(return_: *mut Imf_Rational_t) -> Exception;

pub fn Imf_3_0_fps_47_952(return_: *mut Imf_Rational_t) -> Exception;

pub fn Imf_3_0_fps_48(return_: *mut Imf_Rational_t) -> Exception;

pub fn Imf_3_0_fps_50(return_: *mut Imf_Rational_t) -> Exception;

pub fn Imf_3_0_fps_59_94(return_: *mut Imf_Rational_t) -> Exception;

pub fn Imf_3_0_fps_60(return_: *mut Imf_Rational_t) -> Exception;

pub fn Imf_3_0_guessExactFps_f64(return_: *mut Imf_Rational_t, fps: c_double) -> Exception;

pub fn Imf_3_0_guessExactFps(return_: *mut Imf_Rational_t, fps: *const Imf_Rational_t) -> Exception;


} // extern "C"

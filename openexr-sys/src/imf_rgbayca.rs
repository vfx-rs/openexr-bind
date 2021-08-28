#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;



extern "C" {

pub fn Imf_3_0_RgbaYca_computeYw(return_: *mut Imath_V3f_t, cr: *const Imf_Chromaticities_t) -> Exception;

pub fn Imf_3_0_RgbaYca_RGBAtoYCA(yw: *const Imath_V3f_t, n: c_int, a_is_valid: bool, rgba_in: *const Imf_Rgba_t, yca_out: *mut Imf_Rgba_t) -> Exception;

pub fn Imf_3_0_RgbaYca_decimateChromaHoriz(n: c_int, yca_in: *const Imf_Rgba_t, yca_out: *mut Imf_Rgba_t) -> Exception;

pub fn Imf_3_0_RgbaYca_roundYCA(n: c_int, round_y: c_uint, round_c: c_uint, yca_in: *const Imf_Rgba_t, yca_out: *mut Imf_Rgba_t) -> Exception;

pub fn Imf_3_0_RgbaYca_reconstructChromaHoriz(n: c_int, yca_in: *const Imf_Rgba_t, yca_out: *mut Imf_Rgba_t) -> Exception;

pub fn Imf_3_0_RgbaYca_YCAtoRGBA(yw: *const Imath_V3f_t, n: c_int, yca_in: *const Imf_Rgba_t, rgba_out: *mut Imf_Rgba_t) -> Exception;


} // extern "C"

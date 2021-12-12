#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C, align(2))]
#[derive(Clone)]
pub struct Imf_3_0__Rgba_t {
    pub r: Imath_half_t,
    pub g: Imath_half_t,
    pub b: Imath_half_t,
    pub a: Imath_half_t,
}


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imf_3_0__RgbaChannels_e(pub u32);
pub const Imf_RgbaChannels_WRITE_R: Imf_3_0__RgbaChannels_e = Imf_3_0__RgbaChannels_e(1);
pub const Imf_RgbaChannels_WRITE_G: Imf_3_0__RgbaChannels_e = Imf_3_0__RgbaChannels_e(2);
pub const Imf_RgbaChannels_WRITE_B: Imf_3_0__RgbaChannels_e = Imf_3_0__RgbaChannels_e(4);
pub const Imf_RgbaChannels_WRITE_RGB: Imf_3_0__RgbaChannels_e = Imf_3_0__RgbaChannels_e(7);
pub const Imf_RgbaChannels_WRITE_A: Imf_3_0__RgbaChannels_e = Imf_3_0__RgbaChannels_e(8);
pub const Imf_RgbaChannels_WRITE_RGBA: Imf_3_0__RgbaChannels_e = Imf_3_0__RgbaChannels_e(15);
pub const Imf_RgbaChannels_WRITE_Y: Imf_3_0__RgbaChannels_e = Imf_3_0__RgbaChannels_e(16);
pub const Imf_RgbaChannels_WRITE_YA: Imf_3_0__RgbaChannels_e = Imf_3_0__RgbaChannels_e(24);
pub const Imf_RgbaChannels_WRITE_C: Imf_3_0__RgbaChannels_e = Imf_3_0__RgbaChannels_e(32);
pub const Imf_RgbaChannels_WRITE_YC: Imf_3_0__RgbaChannels_e = Imf_3_0__RgbaChannels_e(48);
pub const Imf_RgbaChannels_WRITE_YCA: Imf_3_0__RgbaChannels_e = Imf_3_0__RgbaChannels_e(56);

#[repr(u32)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum RgbaChannels {
    WriteR = 1,
    WriteG = 2,
    WriteB = 4,
    WriteRgb = 7,
    WriteA = 8,
    WriteRgba = 15,
    WriteY = 16,
    WriteYa = 24,
    WriteC = 32,
    WriteYc = 48,
    WriteYca = 56,
}

impl From<Imf_3_0__RgbaChannels_e> for RgbaChannels {
    fn from(e: Imf_3_0__RgbaChannels_e) -> RgbaChannels {
        match e {
            Imf_RgbaChannels_WRITE_R => RgbaChannels::WriteR,
            Imf_RgbaChannels_WRITE_G => RgbaChannels::WriteG,
            Imf_RgbaChannels_WRITE_B => RgbaChannels::WriteB,
            Imf_RgbaChannels_WRITE_RGB => RgbaChannels::WriteRgb,
            Imf_RgbaChannels_WRITE_A => RgbaChannels::WriteA,
            Imf_RgbaChannels_WRITE_RGBA => RgbaChannels::WriteRgba,
            Imf_RgbaChannels_WRITE_Y => RgbaChannels::WriteY,
            Imf_RgbaChannels_WRITE_YA => RgbaChannels::WriteYa,
            Imf_RgbaChannels_WRITE_C => RgbaChannels::WriteC,
            Imf_RgbaChannels_WRITE_YC => RgbaChannels::WriteYc,
            Imf_RgbaChannels_WRITE_YCA => RgbaChannels::WriteYca,
            _ => panic!("Invalid value {:?} for RgbaChannels in conversion", e),
        }
    }
}

impl From<RgbaChannels> for Imf_3_0__RgbaChannels_e {
    fn from(e: RgbaChannels) -> Imf_3_0__RgbaChannels_e {
        match e {
            RgbaChannels::WriteR => Imf_RgbaChannels_WRITE_R,
            RgbaChannels::WriteG => Imf_RgbaChannels_WRITE_G,
            RgbaChannels::WriteB => Imf_RgbaChannels_WRITE_B,
            RgbaChannels::WriteRgb => Imf_RgbaChannels_WRITE_RGB,
            RgbaChannels::WriteA => Imf_RgbaChannels_WRITE_A,
            RgbaChannels::WriteRgba => Imf_RgbaChannels_WRITE_RGBA,
            RgbaChannels::WriteY => Imf_RgbaChannels_WRITE_Y,
            RgbaChannels::WriteYa => Imf_RgbaChannels_WRITE_YA,
            RgbaChannels::WriteC => Imf_RgbaChannels_WRITE_C,
            RgbaChannels::WriteYc => Imf_RgbaChannels_WRITE_YC,
            RgbaChannels::WriteYca => Imf_RgbaChannels_WRITE_YCA,
        }
    }
}


extern "C" {

pub fn Imf_3_0__Rgba_ctor(this_: *mut Imf_Rgba_t) -> Exception;

pub fn Imf_3_0__Rgba_ctor_1(this_: *mut Imf_Rgba_t, r: Imath_half_t, g: Imath_half_t, b: Imath_half_t, a: Imath_half_t) -> Exception;

pub fn Imf_3_0__Rgba_copy(this_: *mut Imf_Rgba_t, rhs: *const Imf_Rgba_t) -> Exception;

pub fn Imf_3_0__Rgba_move(this_: *mut Imf_Rgba_t, rhs: *mut Imf_Rgba_t) -> Exception;

pub fn Imf_3_0__Rgba_dtor(this_: *mut Imf_Rgba_t) -> Exception;


} // extern "C"

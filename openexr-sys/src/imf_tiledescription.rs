#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imf_3_0__TileDescription_t {
    pub x_size: c_uint,
    pub y_size: c_uint,
    pub mode: Imf_LevelMode,
    pub rounding_mode: Imf_LevelRoundingMode,
}


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imf_3_0__LevelMode_e(pub u32);
pub const Imf_LevelMode_ONE_LEVEL: Imf_3_0__LevelMode_e = Imf_3_0__LevelMode_e(0);
pub const Imf_LevelMode_MIPMAP_LEVELS: Imf_3_0__LevelMode_e = Imf_3_0__LevelMode_e(1);
pub const Imf_LevelMode_RIPMAP_LEVELS: Imf_3_0__LevelMode_e = Imf_3_0__LevelMode_e(2);
pub const Imf_LevelMode_NUM_LEVELMODES: Imf_3_0__LevelMode_e = Imf_3_0__LevelMode_e(3);

#[repr(u32)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum LevelMode {
    OneLevel = 0,
    MipmapLevels = 1,
    RipmapLevels = 2,
    NumLevelmodes = 3,
}

impl From<Imf_3_0__LevelMode_e> for LevelMode {
    fn from(e: Imf_3_0__LevelMode_e) -> LevelMode {
        match e {
            Imf_LevelMode_ONE_LEVEL => LevelMode::OneLevel,
            Imf_LevelMode_MIPMAP_LEVELS => LevelMode::MipmapLevels,
            Imf_LevelMode_RIPMAP_LEVELS => LevelMode::RipmapLevels,
            Imf_LevelMode_NUM_LEVELMODES => LevelMode::NumLevelmodes,
            _ => panic!("Invalid value {:?} for LevelMode in conversion", e),
        }
    }
}

impl From<LevelMode> for Imf_3_0__LevelMode_e {
    fn from(e: LevelMode) -> Imf_3_0__LevelMode_e {
        match e {
            LevelMode::OneLevel => Imf_LevelMode_ONE_LEVEL,
            LevelMode::MipmapLevels => Imf_LevelMode_MIPMAP_LEVELS,
            LevelMode::RipmapLevels => Imf_LevelMode_RIPMAP_LEVELS,
            LevelMode::NumLevelmodes => Imf_LevelMode_NUM_LEVELMODES,
        }
    }
}

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imf_3_0__LevelRoundingMode_e(pub u32);
pub const Imf_LevelRoundingMode_ROUND_DOWN: Imf_3_0__LevelRoundingMode_e = Imf_3_0__LevelRoundingMode_e(0);
pub const Imf_LevelRoundingMode_ROUND_UP: Imf_3_0__LevelRoundingMode_e = Imf_3_0__LevelRoundingMode_e(1);
pub const Imf_LevelRoundingMode_NUM_ROUNDINGMODES: Imf_3_0__LevelRoundingMode_e = Imf_3_0__LevelRoundingMode_e(2);

#[repr(u32)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum LevelRoundingMode {
    RoundDown = 0,
    RoundUp = 1,
    NumRoundingmodes = 2,
}

impl From<Imf_3_0__LevelRoundingMode_e> for LevelRoundingMode {
    fn from(e: Imf_3_0__LevelRoundingMode_e) -> LevelRoundingMode {
        match e {
            Imf_LevelRoundingMode_ROUND_DOWN => LevelRoundingMode::RoundDown,
            Imf_LevelRoundingMode_ROUND_UP => LevelRoundingMode::RoundUp,
            Imf_LevelRoundingMode_NUM_ROUNDINGMODES => LevelRoundingMode::NumRoundingmodes,
            _ => panic!("Invalid value {:?} for LevelRoundingMode in conversion", e),
        }
    }
}

impl From<LevelRoundingMode> for Imf_3_0__LevelRoundingMode_e {
    fn from(e: LevelRoundingMode) -> Imf_3_0__LevelRoundingMode_e {
        match e {
            LevelRoundingMode::RoundDown => Imf_LevelRoundingMode_ROUND_DOWN,
            LevelRoundingMode::RoundUp => Imf_LevelRoundingMode_ROUND_UP,
            LevelRoundingMode::NumRoundingmodes => Imf_LevelRoundingMode_NUM_ROUNDINGMODES,
        }
    }
}


extern "C" {

pub fn Imf_3_0__TileDescription_ctor(this_: *mut Imf_TileDescription_t, xs: c_uint, ys: c_uint, m: Imf_LevelMode, r: Imf_LevelRoundingMode) -> Exception;

pub fn Imf_3_0__TileDescription__eq(this_: *const Imf_TileDescription_t, return_: *mut bool, other: *const Imf_TileDescription_t) -> Exception;


} // extern "C"

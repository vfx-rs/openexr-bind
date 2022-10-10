#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imf_3_0__PixelType_e(pub u32);
pub const Imf_PixelType_UINT: Imf_3_0__PixelType_e = Imf_3_0__PixelType_e(0);
pub const Imf_PixelType_HALF: Imf_3_0__PixelType_e = Imf_3_0__PixelType_e(1);
pub const Imf_PixelType_FLOAT: Imf_3_0__PixelType_e = Imf_3_0__PixelType_e(2);
pub const Imf_PixelType_NUM_PIXELTYPES: Imf_3_0__PixelType_e = Imf_3_0__PixelType_e(3);

#[repr(u32)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum PixelType {
    Uint = 0,
    Half = 1,
    Float = 2,
    NumPixeltypes = 3,
}

impl From<Imf_3_0__PixelType_e> for PixelType {
    fn from(e: Imf_3_0__PixelType_e) -> PixelType {
        match e {
            Imf_PixelType_UINT => PixelType::Uint,
            Imf_PixelType_HALF => PixelType::Half,
            Imf_PixelType_FLOAT => PixelType::Float,
            Imf_PixelType_NUM_PIXELTYPES => PixelType::NumPixeltypes,
            _ => panic!("Invalid value {:?} for PixelType in conversion", e),
        }
    }
}

impl From<PixelType> for Imf_3_0__PixelType_e {
    fn from(e: PixelType) -> Imf_3_0__PixelType_e {
        match e {
            PixelType::Uint => Imf_PixelType_UINT,
            PixelType::Half => Imf_PixelType_HALF,
            PixelType::Float => Imf_PixelType_FLOAT,
            PixelType::NumPixeltypes => Imf_PixelType_NUM_PIXELTYPES,
        }
    }
}


extern "C" {


} // extern "C"

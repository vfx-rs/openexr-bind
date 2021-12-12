#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imf_3_0__DataWindowSource_e(pub u32);
pub const Imf_DataWindowSource_USE_IMAGE_DATA_WINDOW: Imf_3_0__DataWindowSource_e = Imf_3_0__DataWindowSource_e(0);
pub const Imf_DataWindowSource_USE_HEADER_DATA_WINDOW: Imf_3_0__DataWindowSource_e = Imf_3_0__DataWindowSource_e(1);

#[repr(u32)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum DataWindowSource {
    Image = 0,
    Header = 1,
}

impl From<Imf_3_0__DataWindowSource_e> for DataWindowSource {
    fn from(e: Imf_3_0__DataWindowSource_e) -> DataWindowSource {
        match e {
            Imf_DataWindowSource_USE_IMAGE_DATA_WINDOW => DataWindowSource::Image,
            Imf_DataWindowSource_USE_HEADER_DATA_WINDOW => DataWindowSource::Header,
            _ => panic!("Invalid value {:?} for DataWindowSource in conversion", e),
        }
    }
}

impl From<DataWindowSource> for Imf_3_0__DataWindowSource_e {
    fn from(e: DataWindowSource) -> Imf_3_0__DataWindowSource_e {
        match e {
            DataWindowSource::Image => Imf_DataWindowSource_USE_IMAGE_DATA_WINDOW,
            DataWindowSource::Header => Imf_DataWindowSource_USE_HEADER_DATA_WINDOW,
        }
    }
}


extern "C" {

pub fn Imf_3_0_dataWindowForFile(return_: *mut Imath_Box2i_t, hdr: *const Imf_Header_t, img: *const Imf_Image_t, dws: Imf_DataWindowSource) -> Exception;


} // extern "C"

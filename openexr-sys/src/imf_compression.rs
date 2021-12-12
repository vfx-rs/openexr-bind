#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imf_3_0__Compression_e(pub u32);
pub const Imf_Compression_NO_COMPRESSION: Imf_3_0__Compression_e = Imf_3_0__Compression_e(0);
pub const Imf_Compression_RLE_COMPRESSION: Imf_3_0__Compression_e = Imf_3_0__Compression_e(1);
pub const Imf_Compression_ZIPS_COMPRESSION: Imf_3_0__Compression_e = Imf_3_0__Compression_e(2);
pub const Imf_Compression_ZIP_COMPRESSION: Imf_3_0__Compression_e = Imf_3_0__Compression_e(3);
pub const Imf_Compression_PIZ_COMPRESSION: Imf_3_0__Compression_e = Imf_3_0__Compression_e(4);
pub const Imf_Compression_PXR24_COMPRESSION: Imf_3_0__Compression_e = Imf_3_0__Compression_e(5);
pub const Imf_Compression_B44_COMPRESSION: Imf_3_0__Compression_e = Imf_3_0__Compression_e(6);
pub const Imf_Compression_B44A_COMPRESSION: Imf_3_0__Compression_e = Imf_3_0__Compression_e(7);
pub const Imf_Compression_DWAA_COMPRESSION: Imf_3_0__Compression_e = Imf_3_0__Compression_e(8);
pub const Imf_Compression_DWAB_COMPRESSION: Imf_3_0__Compression_e = Imf_3_0__Compression_e(9);
pub const Imf_Compression_NUM_COMPRESSION_METHODS: Imf_3_0__Compression_e = Imf_3_0__Compression_e(10);

#[repr(u32)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum Compression {
    No = 0,
    Rle = 1,
    Zips = 2,
    Zip = 3,
    Piz = 4,
    Pxr24 = 5,
    B44 = 6,
    B44a = 7,
    Dwaa = 8,
    Dwab = 9,
    NumCompressionMethods = 10,
}

impl From<Imf_3_0__Compression_e> for Compression {
    fn from(e: Imf_3_0__Compression_e) -> Compression {
        match e {
            Imf_Compression_NO_COMPRESSION => Compression::No,
            Imf_Compression_RLE_COMPRESSION => Compression::Rle,
            Imf_Compression_ZIPS_COMPRESSION => Compression::Zips,
            Imf_Compression_ZIP_COMPRESSION => Compression::Zip,
            Imf_Compression_PIZ_COMPRESSION => Compression::Piz,
            Imf_Compression_PXR24_COMPRESSION => Compression::Pxr24,
            Imf_Compression_B44_COMPRESSION => Compression::B44,
            Imf_Compression_B44A_COMPRESSION => Compression::B44a,
            Imf_Compression_DWAA_COMPRESSION => Compression::Dwaa,
            Imf_Compression_DWAB_COMPRESSION => Compression::Dwab,
            Imf_Compression_NUM_COMPRESSION_METHODS => Compression::NumCompressionMethods,
            _ => panic!("Invalid value {:?} for Compression in conversion", e),
        }
    }
}

impl From<Compression> for Imf_3_0__Compression_e {
    fn from(e: Compression) -> Imf_3_0__Compression_e {
        match e {
            Compression::No => Imf_Compression_NO_COMPRESSION,
            Compression::Rle => Imf_Compression_RLE_COMPRESSION,
            Compression::Zips => Imf_Compression_ZIPS_COMPRESSION,
            Compression::Zip => Imf_Compression_ZIP_COMPRESSION,
            Compression::Piz => Imf_Compression_PIZ_COMPRESSION,
            Compression::Pxr24 => Imf_Compression_PXR24_COMPRESSION,
            Compression::B44 => Imf_Compression_B44_COMPRESSION,
            Compression::B44a => Imf_Compression_B44A_COMPRESSION,
            Compression::Dwaa => Imf_Compression_DWAA_COMPRESSION,
            Compression::Dwab => Imf_Compression_DWAB_COMPRESSION,
            Compression::NumCompressionMethods => Imf_Compression_NUM_COMPRESSION_METHODS,
        }
    }
}


extern "C" {


} // extern "C"

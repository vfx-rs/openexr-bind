#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;



extern "C" {

pub fn Imf_3_0_saveFlatImage_with_header(file_name: *const std_string_t, hdr: *const Imf_Header_t, img: *const Imf_FlatImage_t, dws: Imf_DataWindowSource) -> Exception;

pub fn Imf_3_0_saveFlatImage(file_name: *const std_string_t, img: *const Imf_FlatImage_t) -> Exception;

pub fn Imf_3_0_loadFlatImage_with_header(file_name: *const std_string_t, hdr: *mut Imf_Header_t, img: *mut Imf_FlatImage_t) -> Exception;

pub fn Imf_3_0_loadFlatImage(file_name: *const std_string_t, img: *mut Imf_FlatImage_t) -> Exception;

pub fn Imf_3_0_saveFlatScanLineImage_with_header(file_name: *const std_string_t, hdr: *const Imf_Header_t, img: *const Imf_FlatImage_t, dws: Imf_DataWindowSource) -> Exception;

pub fn Imf_3_0_saveFlatScanLineImage(file_name: *const std_string_t, img: *const Imf_FlatImage_t) -> Exception;

pub fn Imf_3_0_loadFlatScanLineImage_with_header(file_name: *const std_string_t, hdr: *mut Imf_Header_t, img: *mut Imf_FlatImage_t) -> Exception;

pub fn Imf_3_0_loadFlatScanLineImage(file_name: *const std_string_t, img: *mut Imf_FlatImage_t) -> Exception;

pub fn Imf_3_0_saveFlatTiledImage_with_header(file_name: *const std_string_t, hdr: *const Imf_Header_t, img: *const Imf_FlatImage_t, dws: Imf_DataWindowSource) -> Exception;

pub fn Imf_3_0_saveFlatTiledImage(file_name: *const std_string_t, img: *const Imf_FlatImage_t) -> Exception;

pub fn Imf_3_0_loadFlatTiledImage_with_header(file_name: *const std_string_t, hdr: *mut Imf_Header_t, img: *mut Imf_FlatImage_t) -> Exception;

pub fn Imf_3_0_loadFlatTiledImage(file_name: *const std_string_t, img: *mut Imf_FlatImage_t) -> Exception;


} // extern "C"

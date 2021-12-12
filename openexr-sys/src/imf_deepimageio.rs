#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;



extern "C" {

pub fn Imf_3_0_saveDeepImage_with_header(file_name: *const std_string_t, hdr: *const Imf_Header_t, img: *const Imf_DeepImage_t, dws: Imf_DataWindowSource) -> Exception;

pub fn Imf_3_0_saveDeepImage(file_name: *const std_string_t, img: *const Imf_DeepImage_t) -> Exception;

pub fn Imf_3_0_loadDeepImage_with_header(file_name: *const std_string_t, hdr: *mut Imf_Header_t, img: *mut Imf_DeepImage_t) -> Exception;

pub fn Imf_3_0_loadDeepImage(file_name: *const std_string_t, img: *mut Imf_DeepImage_t) -> Exception;

pub fn Imf_3_0_saveDeepScanLineImage_with_header(file_name: *const std_string_t, hdr: *const Imf_Header_t, img: *const Imf_DeepImage_t, dws: Imf_DataWindowSource) -> Exception;

pub fn Imf_3_0_saveDeepScanLineImage(file_name: *const std_string_t, img: *const Imf_DeepImage_t) -> Exception;

pub fn Imf_3_0_loadDeepScanLineImage_with_header(file_name: *const std_string_t, hdr: *mut Imf_Header_t, img: *mut Imf_DeepImage_t) -> Exception;

pub fn Imf_3_0_loadDeepScanLineImage(file_name: *const std_string_t, img: *mut Imf_DeepImage_t) -> Exception;

pub fn Imf_3_0_saveDeepTiledImage_with_header(file_name: *const std_string_t, hdr: *const Imf_Header_t, img: *const Imf_DeepImage_t, dws: Imf_DataWindowSource) -> Exception;

pub fn Imf_3_0_saveDeepTiledImage(file_name: *const std_string_t, img: *const Imf_DeepImage_t) -> Exception;

pub fn Imf_3_0_loadDeepTiledImage_with_header(file_name: *const std_string_t, hdr: *mut Imf_Header_t, img: *mut Imf_DeepImage_t) -> Exception;

pub fn Imf_3_0_loadDeepTiledImage(file_name: *const std_string_t, img: *mut Imf_DeepImage_t) -> Exception;


} // extern "C"

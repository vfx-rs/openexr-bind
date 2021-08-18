#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;



extern "C" {

pub fn Imf_3_0_saveImage(file_name: *const std_string_t, hdr: *const Imf_Header_t, img: *const Imf_Image_t, dws: Imf_DataWindowSource) -> Exception;

pub fn Imf_3_0_saveImage_1(file_name: *const std_string_t, img: *const Imf_Image_t) -> Exception;

pub fn Imf_3_0_loadImage(return_: *mut *mut Imf_Image_t, file_name: *const std_string_t, hdr: *mut Imf_Header_t) -> Exception;

pub fn Imf_3_0_loadImage_1(return_: *mut *mut Imf_Image_t, file_name: *const std_string_t) -> Exception;


} // extern "C"

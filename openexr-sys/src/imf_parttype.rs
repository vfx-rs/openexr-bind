#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;



extern "C" {

pub fn Imf_3_0_part_isImage(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn Imf_3_0_part_isTiled(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn Imf_3_0_part_isDeepData(return_: *mut bool, name: *const std_string_t) -> Exception;

pub fn Imf_3_0_part_isSupportedType(return_: *mut bool, name: *const std_string_t) -> Exception;


} // extern "C"

#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;



extern "C" {

pub fn Imf_3_0_globalThreadCount(return_: *mut c_int) -> Exception;

pub fn Imf_3_0_setGlobalThreadCount(count: c_int) -> Exception;


} // extern "C"

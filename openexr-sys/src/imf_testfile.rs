#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;



extern "C" {

pub fn Imf_3_0_isOpenExrFile(return_: *mut bool, file_name: *const c_char, is_tiled: *mut bool, is_deep: *mut bool, is_multi_part: *mut bool) -> Exception;

pub fn Imf_3_0_isTiledOpenExrFile(return_: *mut bool, file_name: *const c_char) -> Exception;

pub fn Imf_3_0_isDeepOpenExrFile(return_: *mut bool, file_name: *const c_char) -> Exception;

pub fn Imf_3_0_isMultiPartOpenExrFile(return_: *mut bool, file_name: *const c_char) -> Exception;

pub fn Imf_3_0_stream_is_openexr_file(return_: *mut bool, is: *mut Imf_IStream_t, is_tiled: *mut bool, is_deep: *mut bool, is_multi_part: *mut bool) -> Exception;

pub fn Imf_3_0_stream_is_tiled_openexr_file(return_: *mut bool, is: *mut Imf_IStream_t) -> Exception;

pub fn Imf_3_0_stream_is_deep_openexr_file(return_: *mut bool, is: *mut Imf_IStream_t) -> Exception;

pub fn Imf_3_0_stream_is_multi_part_openexr_file(return_: *mut bool, is: *mut Imf_IStream_t) -> Exception;


} // extern "C"

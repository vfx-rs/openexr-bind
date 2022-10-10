#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


impl Imf_3_0__KeyCode_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__KeyCode_sizeof(),
                Imf_3_0__KeyCode_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__KeyCode_sizeof() -> usize;

pub fn Imf_3_0__KeyCode_alignof() -> usize;

pub fn Imf_3_0__KeyCode_ctor(this_: *mut Imf_KeyCode_t, film_mfc_code: c_int, film_type: c_int, prefix: c_int, count: c_int, perf_offset: c_int, perfs_per_frame: c_int, perfs_per_count: c_int) -> Exception;

pub fn Imf_3_0__KeyCode_copy(this_: *mut Imf_KeyCode_t, other: *const Imf_KeyCode_t) -> Exception;

pub fn Imf_3_0__KeyCode_dtor(this_: *mut Imf_KeyCode_t) -> Exception;

pub fn Imf_3_0__KeyCode__assign(this_: *mut Imf_KeyCode_t, return_: *mut *mut Imf_KeyCode_t, other: *const Imf_KeyCode_t) -> Exception;

pub fn Imf_3_0__KeyCode_filmMfcCode(this_: *const Imf_KeyCode_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__KeyCode_setFilmMfcCode(this_: *mut Imf_KeyCode_t, film_mfc_code: c_int) -> Exception;

pub fn Imf_3_0__KeyCode_filmType(this_: *const Imf_KeyCode_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__KeyCode_setFilmType(this_: *mut Imf_KeyCode_t, film_type: c_int) -> Exception;

pub fn Imf_3_0__KeyCode_prefix(this_: *const Imf_KeyCode_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__KeyCode_setPrefix(this_: *mut Imf_KeyCode_t, prefix: c_int) -> Exception;

pub fn Imf_3_0__KeyCode_count(this_: *const Imf_KeyCode_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__KeyCode_setCount(this_: *mut Imf_KeyCode_t, count: c_int) -> Exception;

pub fn Imf_3_0__KeyCode_perfOffset(this_: *const Imf_KeyCode_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__KeyCode_setPerfOffset(this_: *mut Imf_KeyCode_t, perf_offset: c_int) -> Exception;

pub fn Imf_3_0__KeyCode_perfsPerFrame(this_: *const Imf_KeyCode_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__KeyCode_setPerfsPerFrame(this_: *mut Imf_KeyCode_t, perfs_per_frame_: c_int) -> Exception;

pub fn Imf_3_0__KeyCode_perfsPerCount(this_: *const Imf_KeyCode_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__KeyCode_setPerfsPerCount(this_: *mut Imf_KeyCode_t, perfs_per_count: c_int) -> Exception;


} // extern "C"

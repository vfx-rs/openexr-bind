#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


impl Imf_3_0__Name_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__Name_sizeof(),
                Imf_3_0__Name_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__Name_sizeof() -> usize;

pub fn Imf_3_0__Name_alignof() -> usize;

pub fn Imf_3_0__Name_default(this_: *mut Imf_Name_t) -> Exception;

pub fn Imf_3_0__Name_ctor(this_: *mut Imf_Name_t, text: *const c_char) -> Exception;

pub fn Imf_3_0__Name_copy(this_: *mut Imf_Name_t, rhs: *const Imf_Name_t) -> Exception;

pub fn Imf_3_0__Name_move(this_: *mut Imf_Name_t, rhs: *mut Imf_Name_t) -> Exception;

pub fn Imf_3_0__Name_dtor(this_: *mut Imf_Name_t) -> Exception;

pub fn Imf_3_0__Name__assign(this_: *mut Imf_Name_t, return_: *mut *mut Imf_Name_t, rhs: *const Imf_Name_t) -> Exception;

pub fn Imf_3_0__Name__assign_1(this_: *mut Imf_Name_t, return_: *mut *mut Imf_Name_t, text: *const c_char) -> Exception;

pub fn Imf_3_0__Name_text(this_: *const Imf_Name_t, return_: *mut *const c_char) -> Exception;


} // extern "C"

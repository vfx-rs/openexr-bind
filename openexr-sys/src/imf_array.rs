#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__Array_float__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__Array_char__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__Array2D_float__t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__Array_float__new(this_: *mut *mut Imf_ArrayFloat_t) -> Exception;

pub fn Imf_3_0__Array_float__with_size(this_: *mut *mut Imf_ArrayFloat_t, size: c_long) -> Exception;

pub fn Imf_3_0__Array_float__delete(this_: *mut Imf_ArrayFloat_t) -> Exception;

pub fn Imf_3_0__Array_float__as_ptr(this_: *mut Imf_ArrayFloat_t, return_: *mut *mut c_float) -> Exception;

pub fn Imf_3_0__Array_float__as_const_ptr(this_: *const Imf_ArrayFloat_t, return_: *mut *const c_float) -> Exception;

pub fn Imf_3_0__Array_float__resizeErase(this_: *mut Imf_ArrayFloat_t, size: c_long) -> Exception;

pub fn Imf_3_0__Array_float__resizeEraseUnsafe(this_: *mut Imf_ArrayFloat_t, size: c_long) -> Exception;

pub fn Imf_3_0__Array_float__size(this_: *const Imf_ArrayFloat_t, return_: *mut c_long) -> Exception;

pub fn Imf_3_0__Array_char__new(this_: *mut *mut Imf_ArrayChar_t) -> Exception;

pub fn Imf_3_0__Array_char__with_size(this_: *mut *mut Imf_ArrayChar_t, size: c_long) -> Exception;

pub fn Imf_3_0__Array_char__delete(this_: *mut Imf_ArrayChar_t) -> Exception;

pub fn Imf_3_0__Array_char__as_ptr(this_: *mut Imf_ArrayChar_t, return_: *mut *mut c_char) -> Exception;

pub fn Imf_3_0__Array_char__as_const_ptr(this_: *const Imf_ArrayChar_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__Array_char__resizeErase(this_: *mut Imf_ArrayChar_t, size: c_long) -> Exception;

pub fn Imf_3_0__Array_char__resizeEraseUnsafe(this_: *mut Imf_ArrayChar_t, size: c_long) -> Exception;

pub fn Imf_3_0__Array_char__size(this_: *const Imf_ArrayChar_t, return_: *mut c_long) -> Exception;

pub fn Imf_3_0__Array2D_float__new(this_: *mut *mut Imf_Array2DFloat_t) -> Exception;

pub fn Imf_3_0__Array2D_float__with_size(this_: *mut *mut Imf_Array2DFloat_t, size_x: c_long, size_y: c_long) -> Exception;

pub fn Imf_3_0__Array2D_float__delete(this_: *mut Imf_Array2DFloat_t) -> Exception;

pub fn Imf_3_0__Array2D_float__row(this_: *mut Imf_Array2DFloat_t, return_: *mut *mut c_float, x: c_long) -> Exception;

pub fn Imf_3_0__Array2D_float__const_row(this_: *const Imf_Array2DFloat_t, return_: *mut *const c_float, x: c_long) -> Exception;

pub fn Imf_3_0__Array2D_float__resizeErase(this_: *mut Imf_Array2DFloat_t, size_x: c_long, size_y: c_long) -> Exception;

pub fn Imf_3_0__Array2D_float__resizeEraseUnsafe(this_: *mut Imf_Array2DFloat_t, size_x: c_long, size_y: c_long) -> Exception;

pub fn Imf_3_0__Array2D_float__height(this_: *const Imf_Array2DFloat_t, return_: *mut c_long) -> Exception;

pub fn Imf_3_0__Array2D_float__width(this_: *const Imf_Array2DFloat_t, return_: *mut c_long) -> Exception;


} // extern "C"

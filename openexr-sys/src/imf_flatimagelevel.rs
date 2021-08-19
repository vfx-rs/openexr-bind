#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__FlatImageLevel_t {
    _unused: [u8; 0],
}
#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imf_3_0__FlatImageLevel__Iterator_t {
    _inner: [u8; 8]
}

impl Default for Imf_3_0__FlatImageLevel__Iterator_t {
    fn default() -> Self {
        Self { _inner: [0u8; 8] }
    }
}

impl Imf_3_0__FlatImageLevel__Iterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__FlatImageLevel__Iterator_sizeof(),
                Imf_3_0__FlatImageLevel__Iterator_alignof(),
            ).unwrap()
        }
    }
}

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imf_3_0__FlatImageLevel__ConstIterator_t {
    _inner: [u8; 8]
}

impl Default for Imf_3_0__FlatImageLevel__ConstIterator_t {
    fn default() -> Self {
        Self { _inner: [0u8; 8] }
    }
}

impl Imf_3_0__FlatImageLevel__ConstIterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__FlatImageLevel__ConstIterator_sizeof(),
                Imf_3_0__FlatImageLevel__ConstIterator_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__FlatImageLevel_xLevelNumber(this_: *const Imf_FlatImageLevel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__FlatImageLevel_yLevelNumber(this_: *const Imf_FlatImageLevel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__FlatImageLevel_dataWindow(this_: *const Imf_FlatImageLevel_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_flatImage(this_: *mut Imf_FlatImageLevel_t, return_: *mut *mut Imf_FlatImage_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_flatImage_const(this_: *const Imf_FlatImageLevel_t, return_: *mut *const Imf_FlatImage_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_findChannel(this_: *mut Imf_FlatImageLevel_t, return_: *mut *mut Imf_FlatImageChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_findChannel_const(this_: *const Imf_FlatImageLevel_t, return_: *mut *const Imf_FlatImageChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_channel(this_: *mut Imf_FlatImageLevel_t, return_: *mut *mut Imf_FlatImageChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_channel_const(this_: *const Imf_FlatImageLevel_t, return_: *mut *const Imf_FlatImageChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_findTypedChannel_half(this_: *mut Imf_FlatImageLevel_t, return_: *mut *mut Imf_FlatHalfChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_findTypedChannel_float(this_: *mut Imf_FlatImageLevel_t, return_: *mut *mut Imf_FlatFloatChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_findTypedChannel_uint(this_: *mut Imf_FlatImageLevel_t, return_: *mut *mut Imf_FlatUIntChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_findTypedChannel_half_const(this_: *const Imf_FlatImageLevel_t, return_: *mut *const Imf_FlatHalfChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_findTypedChannel_float_const(this_: *const Imf_FlatImageLevel_t, return_: *mut *const Imf_FlatFloatChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_findTypedChannel_uint_const(this_: *const Imf_FlatImageLevel_t, return_: *mut *const Imf_FlatUIntChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_begin(this_: *mut Imf_FlatImageLevel_t, return_: *mut Imf_FlatImageLevel_Iterator_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_begin_const(this_: *const Imf_FlatImageLevel_t, return_: *mut Imf_FlatImageLevel_ConstIterator_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_end(this_: *mut Imf_FlatImageLevel_t, return_: *mut Imf_FlatImageLevel_Iterator_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel_end_const(this_: *const Imf_FlatImageLevel_t, return_: *mut Imf_FlatImageLevel_ConstIterator_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel__Iterator_sizeof() -> usize;

pub fn Imf_3_0__FlatImageLevel__Iterator_alignof() -> usize;

pub fn Imf_3_0__FlatImageLevel__Iterator_ctor(this_: *mut Imf_FlatImageLevel_Iterator_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel__Iterator_inc(this_: *mut Imf_FlatImageLevel_Iterator_t, return_: *mut *mut Imf_FlatImageLevel_Iterator_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel__Iterator_name(this_: *const Imf_FlatImageLevel_Iterator_t, return_: *mut *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel__Iterator_channel(this_: *const Imf_FlatImageLevel_Iterator_t, return_: *mut *mut Imf_FlatImageChannel_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel__Iterator_copy(this_: *mut Imf_FlatImageLevel_Iterator_t, rhs: *const Imf_FlatImageLevel_Iterator_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel__ConstIterator_sizeof() -> usize;

pub fn Imf_3_0__FlatImageLevel__ConstIterator_alignof() -> usize;

pub fn Imf_3_0__FlatImageLevel__ConstIterator_ctor(this_: *mut Imf_FlatImageLevel_ConstIterator_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel__ConstIterator_from_mut(this_: *mut Imf_FlatImageLevel_ConstIterator_t, rhs: *const Imf_FlatImageLevel_Iterator_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel__ConstIterator_inc(this_: *mut Imf_FlatImageLevel_ConstIterator_t, return_: *mut *mut Imf_FlatImageLevel_ConstIterator_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel__ConstIterator_name(this_: *const Imf_FlatImageLevel_ConstIterator_t, return_: *mut *const std_string_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel__ConstIterator_channel(this_: *const Imf_FlatImageLevel_ConstIterator_t, return_: *mut *const Imf_FlatImageChannel_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel__ConstIterator_copy(this_: *mut Imf_FlatImageLevel_ConstIterator_t, rhs: *const Imf_FlatImageLevel_ConstIterator_t) -> Exception;

pub fn Imf_3_0__FlatImageLevel__ConstIterator_move(this_: *mut Imf_FlatImageLevel_ConstIterator_t, rhs: *mut Imf_FlatImageLevel_ConstIterator_t) -> Exception;


} // extern "C"
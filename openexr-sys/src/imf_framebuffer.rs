#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imf_3_0__Slice_t {
    _inner: [u8; 56]
}

impl Default for Imf_3_0__Slice_t {
    fn default() -> Self {
        Self { _inner: [0u8; 56] }
    }
}

impl Imf_3_0__Slice_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__Slice_sizeof(),
                Imf_3_0__Slice_alignof(),
            ).unwrap()
        }
    }
}

#[repr(C)]
pub struct Imf_3_0__FrameBuffer_t {
    _unused: [u8; 0],
}
#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imf_3_0__FrameBuffer__Iterator_t {
    _inner: [u8; 8]
}

impl Default for Imf_3_0__FrameBuffer__Iterator_t {
    fn default() -> Self {
        Self { _inner: [0u8; 8] }
    }
}

impl Imf_3_0__FrameBuffer__Iterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__FrameBuffer__Iterator_sizeof(),
                Imf_3_0__FrameBuffer__Iterator_alignof(),
            ).unwrap()
        }
    }
}

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imf_3_0__FrameBuffer__ConstIterator_t {
    _inner: [u8; 8]
}

impl Default for Imf_3_0__FrameBuffer__ConstIterator_t {
    fn default() -> Self {
        Self { _inner: [0u8; 8] }
    }
}

impl Imf_3_0__FrameBuffer__ConstIterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__FrameBuffer__ConstIterator_sizeof(),
                Imf_3_0__FrameBuffer__ConstIterator_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__Slice_sizeof() -> usize;

pub fn Imf_3_0__Slice_alignof() -> usize;

pub fn Imf_3_0__Slice_ctor(this_: *mut Imf_Slice_t, type_: Imf_PixelType, base: *mut c_char, x_stride: c_ulong, y_stride: c_ulong, x_sampling: c_int, y_sampling: c_int, fill_value: c_double, x_tile_coords: bool, y_tile_coords: bool) -> Exception;

pub fn Imf_3_0__Slice_with_origin(return_: *mut Imf_Slice_t, type_: Imf_PixelType, ptr: *const c_void, origin: *const Imath_V2i_t, w: c_long, h: c_long, x_stride: c_ulong, y_stride: c_ulong, x_sampling: c_int, y_sampling: c_int, fill_value: c_double, x_tile_coords: bool, y_tile_coords: bool) -> Exception;

pub fn Imf_3_0__Slice_with_window(return_: *mut Imf_Slice_t, type_: Imf_PixelType, ptr: *const c_void, data_window: *const Imath_Box2i_t, x_stride: c_ulong, y_stride: c_ulong, x_sampling: c_int, y_sampling: c_int, fill_value: c_double, x_tile_coords: bool, y_tile_coords: bool) -> Exception;

pub fn Imf_3_0__Slice_dtor(this_: *mut Imf_Slice_t) -> Exception;

pub fn Imf_3_0__Slice_copy(this_: *mut Imf_Slice_t, rhs: *const Imf_Slice_t) -> Exception;

pub fn Imf_3_0__FrameBuffer_insert(this_: *mut Imf_FrameBuffer_t, name: *const c_char, slice: *const Imf_Slice_t) -> Exception;

pub fn Imf_3_0__FrameBuffer_findSlice(this_: *mut Imf_FrameBuffer_t, return_: *mut *mut Imf_Slice_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__FrameBuffer_findSlice_const(this_: *const Imf_FrameBuffer_t, return_: *mut *const Imf_Slice_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__FrameBuffer_begin(this_: *mut Imf_FrameBuffer_t, return_: *mut Imf_FrameBuffer_Iterator_t) -> Exception;

pub fn Imf_3_0__FrameBuffer_begin_const(this_: *const Imf_FrameBuffer_t, return_: *mut Imf_FrameBuffer_ConstIterator_t) -> Exception;

pub fn Imf_3_0__FrameBuffer_end(this_: *mut Imf_FrameBuffer_t, return_: *mut Imf_FrameBuffer_Iterator_t) -> Exception;

pub fn Imf_3_0__FrameBuffer_end_const(this_: *const Imf_FrameBuffer_t, return_: *mut Imf_FrameBuffer_ConstIterator_t) -> Exception;

pub fn Imf_3_0__FrameBuffer_find(this_: *mut Imf_FrameBuffer_t, return_: *mut Imf_FrameBuffer_Iterator_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__FrameBuffer_find_1(this_: *const Imf_FrameBuffer_t, return_: *mut Imf_FrameBuffer_ConstIterator_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__FrameBuffer_copy(this_: *mut *mut Imf_FrameBuffer_t, rhs: *const Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__FrameBuffer_dtor(this_: *mut Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__FrameBuffer_ctor(this_: *mut *mut Imf_FrameBuffer_t) -> Exception;

pub fn Imf_3_0__FrameBuffer__Iterator_sizeof() -> usize;

pub fn Imf_3_0__FrameBuffer__Iterator_alignof() -> usize;

pub fn Imf_3_0__FrameBuffer__Iterator_ctor(this_: *mut Imf_FrameBuffer_Iterator_t) -> Exception;

pub fn Imf_3_0__FrameBuffer__Iterator__op_inc(this_: *mut Imf_FrameBuffer_Iterator_t, return_: *mut *mut Imf_FrameBuffer_Iterator_t) -> Exception;

pub fn Imf_3_0__FrameBuffer__Iterator_name(this_: *const Imf_FrameBuffer_Iterator_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__FrameBuffer__Iterator_slice(this_: *const Imf_FrameBuffer_Iterator_t, return_: *mut *mut Imf_Slice_t) -> Exception;

pub fn Imf_3_0__FrameBuffer__Iterator_copy(this_: *mut Imf_FrameBuffer_Iterator_t, rhs: *const Imf_FrameBuffer_Iterator_t) -> Exception;

pub fn Imf_3_0__FrameBuffer__ConstIterator_sizeof() -> usize;

pub fn Imf_3_0__FrameBuffer__ConstIterator_alignof() -> usize;

pub fn Imf_3_0__FrameBuffer__ConstIterator_ctor(this_: *mut Imf_FrameBuffer_ConstIterator_t) -> Exception;

pub fn Imf_3_0__FrameBuffer__ConstIterator_from_mut(this_: *mut Imf_FrameBuffer_ConstIterator_t, rhs: *const Imf_FrameBuffer_Iterator_t) -> Exception;

pub fn Imf_3_0__FrameBuffer__ConstIterator__op_inc(this_: *mut Imf_FrameBuffer_ConstIterator_t, return_: *mut *mut Imf_FrameBuffer_ConstIterator_t) -> Exception;

pub fn Imf_3_0__FrameBuffer__ConstIterator_name(this_: *const Imf_FrameBuffer_ConstIterator_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__FrameBuffer__ConstIterator_slice(this_: *const Imf_FrameBuffer_ConstIterator_t, return_: *mut *const Imf_Slice_t) -> Exception;

pub fn Imf_3_0__FrameBuffer__ConstIterator_copy(this_: *mut Imf_FrameBuffer_ConstIterator_t, rhs: *const Imf_FrameBuffer_ConstIterator_t) -> Exception;

pub fn Imf_3_0_frame_buffer_const_iter_eq(return_: *mut bool, _param0: *const Imf_FrameBuffer_ConstIterator_t, _param1: *const Imf_FrameBuffer_ConstIterator_t) -> Exception;


} // extern "C"

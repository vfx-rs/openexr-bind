#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


impl Imf_3_0__DeepSlice_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__DeepSlice_sizeof(),
                Imf_3_0__DeepSlice_alignof(),
            ).unwrap()
        }
    }
}

#[repr(C)]
pub struct Imf_3_0__DeepFrameBuffer_t {
    _unused: [u8; 0],
}

impl Imf_3_0__DeepFrameBuffer__Iterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__DeepFrameBuffer__Iterator_sizeof(),
                Imf_3_0__DeepFrameBuffer__Iterator_alignof(),
            ).unwrap()
        }
    }
}


impl Imf_3_0__DeepFrameBuffer__ConstIterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__DeepFrameBuffer__ConstIterator_sizeof(),
                Imf_3_0__DeepFrameBuffer__ConstIterator_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__DeepSlice_sizeof() -> usize;

pub fn Imf_3_0__DeepSlice_alignof() -> usize;

pub fn Imf_3_0__DeepSlice_ctor(this_: *mut Imf_DeepSlice_t, type_: Imf_PixelType, base: *mut c_char, x_stride: usize, y_stride: usize, sample_stride: usize, x_sampling: c_int, y_sampling: c_int, fill_value: c_double, x_tile_coords: bool, y_tile_coords: bool) -> Exception;

pub fn Imf_3_0__DeepSlice_dtor(this_: *mut Imf_DeepSlice_t) -> Exception;

pub fn Imf_3_0__DeepSlice_copy(this_: *mut Imf_DeepSlice_t, rhs: *const Imf_DeepSlice_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer_insert(this_: *mut Imf_DeepFrameBuffer_t, name: *const c_char, slice: *const Imf_DeepSlice_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer_findSlice(this_: *mut Imf_DeepFrameBuffer_t, return_: *mut *mut Imf_DeepSlice_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer_findSlice_const(this_: *const Imf_DeepFrameBuffer_t, return_: *mut *const Imf_DeepSlice_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer_begin(this_: *mut Imf_DeepFrameBuffer_t, return_: *mut Imf_DeepFrameBuffer_Iterator_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer_begin_const(this_: *const Imf_DeepFrameBuffer_t, return_: *mut Imf_DeepFrameBuffer_ConstIterator_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer_end(this_: *mut Imf_DeepFrameBuffer_t, return_: *mut Imf_DeepFrameBuffer_Iterator_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer_end_const(this_: *const Imf_DeepFrameBuffer_t, return_: *mut Imf_DeepFrameBuffer_ConstIterator_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer_insertSampleCountSlice(this_: *mut Imf_DeepFrameBuffer_t, slice: *const Imf_Slice_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer_getSampleCountSlice(this_: *const Imf_DeepFrameBuffer_t, return_: *mut *const Imf_Slice_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer_copy(this_: *mut *mut Imf_DeepFrameBuffer_t, rhs: *const Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer_dtor(this_: *mut Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer_ctor(this_: *mut *mut Imf_DeepFrameBuffer_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer__Iterator_sizeof() -> usize;

pub fn Imf_3_0__DeepFrameBuffer__Iterator_alignof() -> usize;

pub fn Imf_3_0__DeepFrameBuffer__Iterator_ctor(this_: *mut Imf_DeepFrameBuffer_Iterator_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer__Iterator__op_inc(this_: *mut Imf_DeepFrameBuffer_Iterator_t, return_: *mut *mut Imf_DeepFrameBuffer_Iterator_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer__Iterator_name(this_: *const Imf_DeepFrameBuffer_Iterator_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer__Iterator_slice(this_: *const Imf_DeepFrameBuffer_Iterator_t, return_: *mut *mut Imf_DeepSlice_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer__Iterator_copy(this_: *mut Imf_DeepFrameBuffer_Iterator_t, rhs: *const Imf_DeepFrameBuffer_Iterator_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer__ConstIterator_sizeof() -> usize;

pub fn Imf_3_0__DeepFrameBuffer__ConstIterator_alignof() -> usize;

pub fn Imf_3_0__DeepFrameBuffer__ConstIterator_ctor(this_: *mut Imf_DeepFrameBuffer_ConstIterator_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer__ConstIterator_from_mut(this_: *mut Imf_DeepFrameBuffer_ConstIterator_t, rhs: *const Imf_DeepFrameBuffer_Iterator_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer__ConstIterator__op_inc(this_: *mut Imf_DeepFrameBuffer_ConstIterator_t, return_: *mut *mut Imf_DeepFrameBuffer_ConstIterator_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer__ConstIterator_name(this_: *const Imf_DeepFrameBuffer_ConstIterator_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer__ConstIterator_slice(this_: *const Imf_DeepFrameBuffer_ConstIterator_t, return_: *mut *const Imf_DeepSlice_t) -> Exception;

pub fn Imf_3_0__DeepFrameBuffer__ConstIterator_copy(this_: *mut Imf_DeepFrameBuffer_ConstIterator_t, rhs: *const Imf_DeepFrameBuffer_ConstIterator_t) -> Exception;

pub fn Imf_3_0_deep_frame_buffer_const_iter_eq(return_: *mut bool, _param0: *const Imf_DeepFrameBuffer_ConstIterator_t, _param1: *const Imf_DeepFrameBuffer_ConstIterator_t) -> Exception;


} // extern "C"

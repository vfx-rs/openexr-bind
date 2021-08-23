#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__DeepImageLevel_t {
    _unused: [u8; 0],
}
#[repr(C, align(%ALIGNImf_3_0::DeepImageLevel::Iterator%))]
#[derive(Clone)]
pub struct Imf_3_0__DeepImageLevel__Iterator_t {
    _inner: [u8; %SIZEImf_3_0::DeepImageLevel::Iterator%]
}

impl Default for Imf_3_0__DeepImageLevel__Iterator_t {
    fn default() -> Self {
        Self { _inner: [0u8; %SIZEImf_3_0::DeepImageLevel::Iterator%] }
    }
}

impl Imf_3_0__DeepImageLevel__Iterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__DeepImageLevel__Iterator_sizeof(),
                Imf_3_0__DeepImageLevel__Iterator_alignof(),
            ).unwrap()
        }
    }
}

#[repr(C, align(%ALIGNImf_3_0::DeepImageLevel::ConstIterator%))]
#[derive(Clone)]
pub struct Imf_3_0__DeepImageLevel__ConstIterator_t {
    _inner: [u8; %SIZEImf_3_0::DeepImageLevel::ConstIterator%]
}

impl Default for Imf_3_0__DeepImageLevel__ConstIterator_t {
    fn default() -> Self {
        Self { _inner: [0u8; %SIZEImf_3_0::DeepImageLevel::ConstIterator%] }
    }
}

impl Imf_3_0__DeepImageLevel__ConstIterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__DeepImageLevel__ConstIterator_sizeof(),
                Imf_3_0__DeepImageLevel__ConstIterator_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__DeepImageLevel_image(this_: *mut Imf_DeepImageLevel_t, return_: *mut *mut Imf_Image_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_image_const(this_: *const Imf_DeepImageLevel_t, return_: *mut *const Imf_Image_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_xLevelNumber(this_: *const Imf_DeepImageLevel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepImageLevel_yLevelNumber(this_: *const Imf_DeepImageLevel_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__DeepImageLevel_dataWindow(this_: *const Imf_DeepImageLevel_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_deepImage(this_: *mut Imf_DeepImageLevel_t, return_: *mut *mut Imf_DeepImage_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_deepImage_const(this_: *const Imf_DeepImageLevel_t, return_: *mut *const Imf_DeepImage_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_findChannel(this_: *mut Imf_DeepImageLevel_t, return_: *mut *mut Imf_DeepImageChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_findChannel_const(this_: *const Imf_DeepImageLevel_t, return_: *mut *const Imf_DeepImageChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_channel(this_: *mut Imf_DeepImageLevel_t, return_: *mut *mut Imf_DeepImageChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_channel_const(this_: *const Imf_DeepImageLevel_t, return_: *mut *const Imf_DeepImageChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_findTypedChannel_half(this_: *mut Imf_DeepImageLevel_t, return_: *mut *mut Imf_DeepHalfChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_findTypedChannel_float(this_: *mut Imf_DeepImageLevel_t, return_: *mut *mut Imf_DeepFloatChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_findTypedChannel_uint(this_: *mut Imf_DeepImageLevel_t, return_: *mut *mut Imf_DeepUIntChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_findTypedChannel_half_const(this_: *const Imf_DeepImageLevel_t, return_: *mut *const Imf_DeepHalfChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_findTypedChannel_float_const(this_: *const Imf_DeepImageLevel_t, return_: *mut *const Imf_DeepFloatChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_findTypedChannel_uint_const(this_: *const Imf_DeepImageLevel_t, return_: *mut *const Imf_DeepUIntChannel_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_begin(this_: *mut Imf_DeepImageLevel_t, return_: *mut Imf_DeepImageLevel_Iterator_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_begin_const(this_: *const Imf_DeepImageLevel_t, return_: *mut Imf_DeepImageLevel_ConstIterator_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_end(this_: *mut Imf_DeepImageLevel_t, return_: *mut Imf_DeepImageLevel_Iterator_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_end_const(this_: *const Imf_DeepImageLevel_t, return_: *mut Imf_DeepImageLevel_ConstIterator_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_sampleCounts(this_: *mut Imf_DeepImageLevel_t, return_: *mut *mut Imf_SampleCountChannel_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel_sampleCounts_const(this_: *const Imf_DeepImageLevel_t, return_: *mut *const Imf_SampleCountChannel_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel__Iterator_sizeof() -> usize;

pub fn Imf_3_0__DeepImageLevel__Iterator_alignof() -> usize;

pub fn Imf_3_0__DeepImageLevel__Iterator_ctor(this_: *mut Imf_DeepImageLevel_Iterator_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel__Iterator_inc(this_: *mut Imf_DeepImageLevel_Iterator_t, return_: *mut *mut Imf_DeepImageLevel_Iterator_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel__Iterator_name(this_: *const Imf_DeepImageLevel_Iterator_t, return_: *mut *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel__Iterator_channel(this_: *const Imf_DeepImageLevel_Iterator_t, return_: *mut *mut Imf_DeepImageChannel_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel__Iterator_copy(this_: *mut Imf_DeepImageLevel_Iterator_t, rhs: *const Imf_DeepImageLevel_Iterator_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel__Iterator_move(this_: *mut Imf_DeepImageLevel_Iterator_t, rhs: *mut Imf_DeepImageLevel_Iterator_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel__ConstIterator_sizeof() -> usize;

pub fn Imf_3_0__DeepImageLevel__ConstIterator_alignof() -> usize;

pub fn Imf_3_0__DeepImageLevel__ConstIterator_ctor(this_: *mut Imf_DeepImageLevel_ConstIterator_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel__ConstIterator_from_mut(this_: *mut Imf_DeepImageLevel_ConstIterator_t, rhs: *const Imf_DeepImageLevel_Iterator_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel__ConstIterator_inc(this_: *mut Imf_DeepImageLevel_ConstIterator_t, return_: *mut *mut Imf_DeepImageLevel_ConstIterator_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel__ConstIterator_name(this_: *const Imf_DeepImageLevel_ConstIterator_t, return_: *mut *const std_string_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel__ConstIterator_channel(this_: *const Imf_DeepImageLevel_ConstIterator_t, return_: *mut *const Imf_DeepImageChannel_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel__ConstIterator_copy(this_: *mut Imf_DeepImageLevel_ConstIterator_t, rhs: *const Imf_DeepImageLevel_ConstIterator_t) -> Exception;

pub fn Imf_3_0__DeepImageLevel__ConstIterator_move(this_: *mut Imf_DeepImageLevel_ConstIterator_t, rhs: *mut Imf_DeepImageLevel_ConstIterator_t) -> Exception;


} // extern "C"

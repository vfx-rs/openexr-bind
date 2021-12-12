#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imf_3_0__Channel_t {
    pub type_: Imf_PixelType,
    pub x_sampling: c_int,
    pub y_sampling: c_int,
    pub p_linear: bool,
}

#[repr(C)]
pub struct Imf_3_0__ChannelList_t {
    _unused: [u8; 0],
}

impl Imf_3_0__ChannelList__Iterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__ChannelList__Iterator_sizeof(),
                Imf_3_0__ChannelList__Iterator_alignof(),
            ).unwrap()
        }
    }
}


impl Imf_3_0__ChannelList__ConstIterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__ChannelList__ConstIterator_sizeof(),
                Imf_3_0__ChannelList__ConstIterator_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__Channel_ctor(this_: *mut Imf_Channel_t, type_: Imf_PixelType, x_sampling: c_int, y_sampling: c_int, p_linear: bool) -> Exception;

pub fn Imf_3_0__Channel__eq(this_: *const Imf_Channel_t, return_: *mut bool, other: *const Imf_Channel_t) -> Exception;

pub fn Imf_3_0__Channel_dtor(this_: *mut Imf_Channel_t) -> Exception;

pub fn Imf_3_0__Channel_copy(this_: *mut Imf_Channel_t, rhs: *const Imf_Channel_t) -> Exception;

pub fn Imf_3_0__Channel_move(this_: *mut Imf_Channel_t, rhs: *mut Imf_Channel_t) -> Exception;

pub fn Imf_3_0__ChannelList_insert(this_: *mut Imf_ChannelList_t, name: *const c_char, channel: *const Imf_Channel_t) -> Exception;

pub fn Imf_3_0__ChannelList_findChannel(this_: *mut Imf_ChannelList_t, return_: *mut *mut Imf_Channel_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__ChannelList_findChannel_const(this_: *const Imf_ChannelList_t, return_: *mut *const Imf_Channel_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__ChannelList_begin(this_: *mut Imf_ChannelList_t, return_: *mut Imf_ChannelList_Iterator_t) -> Exception;

pub fn Imf_3_0__ChannelList_begin_const(this_: *const Imf_ChannelList_t, return_: *mut Imf_ChannelList_ConstIterator_t) -> Exception;

pub fn Imf_3_0__ChannelList_end(this_: *mut Imf_ChannelList_t, return_: *mut Imf_ChannelList_Iterator_t) -> Exception;

pub fn Imf_3_0__ChannelList_end_const(this_: *const Imf_ChannelList_t, return_: *mut Imf_ChannelList_ConstIterator_t) -> Exception;

pub fn Imf_3_0__ChannelList_find(this_: *mut Imf_ChannelList_t, return_: *mut Imf_ChannelList_Iterator_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__ChannelList_find_const(this_: *const Imf_ChannelList_t, return_: *mut Imf_ChannelList_ConstIterator_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__ChannelList_layers(this_: *const Imf_ChannelList_t, layer_names: *mut std_set_string_t) -> Exception;

pub fn Imf_3_0__ChannelList_channelsInLayer(this_: *mut Imf_ChannelList_t, layer_name: *const std_string_t, first: *mut Imf_ChannelList_Iterator_t, last: *mut Imf_ChannelList_Iterator_t) -> Exception;

pub fn Imf_3_0__ChannelList_channelsInLayer_const(this_: *const Imf_ChannelList_t, layer_name: *const std_string_t, first: *mut Imf_ChannelList_ConstIterator_t, last: *mut Imf_ChannelList_ConstIterator_t) -> Exception;

pub fn Imf_3_0__ChannelList_channelsWithPrefix(this_: *mut Imf_ChannelList_t, prefix: *const c_char, first: *mut Imf_ChannelList_Iterator_t, last: *mut Imf_ChannelList_Iterator_t) -> Exception;

pub fn Imf_3_0__ChannelList_channelsWithPrefix_const(this_: *const Imf_ChannelList_t, prefix: *const c_char, first: *mut Imf_ChannelList_ConstIterator_t, last: *mut Imf_ChannelList_ConstIterator_t) -> Exception;

pub fn Imf_3_0__ChannelList__eq(this_: *const Imf_ChannelList_t, return_: *mut bool, other: *const Imf_ChannelList_t) -> Exception;

pub fn Imf_3_0__ChannelList_copy(this_: *mut *mut Imf_ChannelList_t, rhs: *const Imf_ChannelList_t) -> Exception;

pub fn Imf_3_0__ChannelList_dtor(this_: *mut Imf_ChannelList_t) -> Exception;

pub fn Imf_3_0__ChannelList_ctor(this_: *mut *mut Imf_ChannelList_t) -> Exception;

pub fn Imf_3_0__ChannelList__Iterator_sizeof() -> usize;

pub fn Imf_3_0__ChannelList__Iterator_alignof() -> usize;

pub fn Imf_3_0__ChannelList__Iterator_ctor(this_: *mut Imf_ChannelList_Iterator_t) -> Exception;

pub fn Imf_3_0__ChannelList__Iterator__op_inc(this_: *mut Imf_ChannelList_Iterator_t, return_: *mut *mut Imf_ChannelList_Iterator_t) -> Exception;

pub fn Imf_3_0__ChannelList__Iterator_name(this_: *const Imf_ChannelList_Iterator_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__ChannelList__Iterator_channel(this_: *const Imf_ChannelList_Iterator_t, return_: *mut *mut Imf_Channel_t) -> Exception;

pub fn Imf_3_0__ChannelList__Iterator_copy(this_: *mut Imf_ChannelList_Iterator_t, rhs: *const Imf_ChannelList_Iterator_t) -> Exception;

pub fn Imf_3_0__ChannelList__Iterator_move(this_: *mut Imf_ChannelList_Iterator_t, rhs: *mut Imf_ChannelList_Iterator_t) -> Exception;

pub fn Imf_3_0__ChannelList__ConstIterator_sizeof() -> usize;

pub fn Imf_3_0__ChannelList__ConstIterator_alignof() -> usize;

pub fn Imf_3_0__ChannelList__ConstIterator_ctor(this_: *mut Imf_ChannelList_ConstIterator_t) -> Exception;

pub fn Imf_3_0__ChannelList__ConstIterator_from_mut(this_: *mut Imf_ChannelList_ConstIterator_t, rhs: *const Imf_ChannelList_Iterator_t) -> Exception;

pub fn Imf_3_0__ChannelList__ConstIterator__op_inc(this_: *mut Imf_ChannelList_ConstIterator_t, return_: *mut *mut Imf_ChannelList_ConstIterator_t) -> Exception;

pub fn Imf_3_0__ChannelList__ConstIterator_name(this_: *const Imf_ChannelList_ConstIterator_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__ChannelList__ConstIterator_channel(this_: *const Imf_ChannelList_ConstIterator_t, return_: *mut *const Imf_Channel_t) -> Exception;

pub fn Imf_3_0__ChannelList__ConstIterator_copy(this_: *mut Imf_ChannelList_ConstIterator_t, rhs: *const Imf_ChannelList_ConstIterator_t) -> Exception;

pub fn Imf_3_0__ChannelList__ConstIterator_move(this_: *mut Imf_ChannelList_ConstIterator_t, rhs: *mut Imf_ChannelList_ConstIterator_t) -> Exception;

pub fn Imf_3_0_channel_list_const_iter_eq(return_: *mut bool, _param0: *const Imf_ChannelList_ConstIterator_t, _param1: *const Imf_ChannelList_ConstIterator_t) -> Exception;


} // extern "C"

#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__MultiViewChannelName_t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__MultiViewChannelName_copy(this_: *mut *mut Imf_MultiViewChannelName_t, rhs: *const Imf_MultiViewChannelName_t) -> Exception;

pub fn Imf_3_0__MultiViewChannelName_move(this_: *mut *mut Imf_MultiViewChannelName_t, rhs: *mut Imf_MultiViewChannelName_t) -> Exception;

pub fn Imf_3_0__MultiViewChannelName_dtor(this_: *mut Imf_MultiViewChannelName_t) -> Exception;

pub fn Imf_3_0__MultiViewChannelName_ctor(this_: *mut *mut Imf_MultiViewChannelName_t) -> Exception;


} // extern "C"

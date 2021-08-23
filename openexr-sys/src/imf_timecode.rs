#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imf_3_0__TimeCode_t {
    _inner: [u8; 8]
}

impl Default for Imf_3_0__TimeCode_t {
    fn default() -> Self {
        Self { _inner: [0u8; 8] }
    }
}

impl Imf_3_0__TimeCode_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__TimeCode_sizeof(),
                Imf_3_0__TimeCode_alignof(),
            ).unwrap()
        }
    }
}


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imf_3_0__TimeCode__Packing_e(pub u32);
pub const Imf_TimeCode_Packing_TV60_PACKING: Imf_3_0__TimeCode__Packing_e = Imf_3_0__TimeCode__Packing_e(0);
pub const Imf_TimeCode_Packing_TV50_PACKING: Imf_3_0__TimeCode__Packing_e = Imf_3_0__TimeCode__Packing_e(1);
pub const Imf_TimeCode_Packing_FILM24_PACKING: Imf_3_0__TimeCode__Packing_e = Imf_3_0__TimeCode__Packing_e(2);


extern "C" {

pub fn Imf_3_0__TimeCode_sizeof() -> usize;

pub fn Imf_3_0__TimeCode_alignof() -> usize;

pub fn Imf_3_0__TimeCode_default(this_: *mut Imf_TimeCode_t) -> Exception;

pub fn Imf_3_0__TimeCode_ctor(this_: *mut Imf_TimeCode_t, hours: c_int, minutes: c_int, seconds: c_int, frame: c_int, drop_frame: bool, color_frame: bool, field_phase: bool, bgf0: bool, bgf1: bool, bgf2: bool, binary_group1: c_int, binary_group2: c_int, binary_group3: c_int, binary_group4: c_int, binary_group5: c_int, binary_group6: c_int, binary_group7: c_int, binary_group8: c_int) -> Exception;

pub fn Imf_3_0__TimeCode_from_time_and_flags(this_: *mut Imf_TimeCode_t, time_and_flags: c_uint, user_data: c_uint, packing: Imf_TimeCode_Packing) -> Exception;

pub fn Imf_3_0__TimeCode_copy(this_: *mut Imf_TimeCode_t, other: *const Imf_TimeCode_t) -> Exception;

pub fn Imf_3_0__TimeCode_dtor(this_: *mut Imf_TimeCode_t) -> Exception;

pub fn Imf_3_0__TimeCode__assign(this_: *mut Imf_TimeCode_t, return_: *mut *mut Imf_TimeCode_t, other: *const Imf_TimeCode_t) -> Exception;

pub fn Imf_3_0__TimeCode_hours(this_: *const Imf_TimeCode_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TimeCode_setHours(this_: *mut Imf_TimeCode_t, value: c_int) -> Exception;

pub fn Imf_3_0__TimeCode_minutes(this_: *const Imf_TimeCode_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TimeCode_setMinutes(this_: *mut Imf_TimeCode_t, value: c_int) -> Exception;

pub fn Imf_3_0__TimeCode_seconds(this_: *const Imf_TimeCode_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TimeCode_setSeconds(this_: *mut Imf_TimeCode_t, value: c_int) -> Exception;

pub fn Imf_3_0__TimeCode_frame(this_: *const Imf_TimeCode_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__TimeCode_setFrame(this_: *mut Imf_TimeCode_t, value: c_int) -> Exception;

pub fn Imf_3_0__TimeCode_dropFrame(this_: *const Imf_TimeCode_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TimeCode_setDropFrame(this_: *mut Imf_TimeCode_t, value: bool) -> Exception;

pub fn Imf_3_0__TimeCode_colorFrame(this_: *const Imf_TimeCode_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TimeCode_setColorFrame(this_: *mut Imf_TimeCode_t, value: bool) -> Exception;

pub fn Imf_3_0__TimeCode_fieldPhase(this_: *const Imf_TimeCode_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TimeCode_setFieldPhase(this_: *mut Imf_TimeCode_t, value: bool) -> Exception;

pub fn Imf_3_0__TimeCode_bgf0(this_: *const Imf_TimeCode_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TimeCode_setBgf0(this_: *mut Imf_TimeCode_t, value: bool) -> Exception;

pub fn Imf_3_0__TimeCode_bgf1(this_: *const Imf_TimeCode_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TimeCode_setBgf1(this_: *mut Imf_TimeCode_t, value: bool) -> Exception;

pub fn Imf_3_0__TimeCode_bgf2(this_: *const Imf_TimeCode_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__TimeCode_setBgf2(this_: *mut Imf_TimeCode_t, value: bool) -> Exception;

pub fn Imf_3_0__TimeCode_binaryGroup(this_: *const Imf_TimeCode_t, return_: *mut c_int, group: c_int) -> Exception;

pub fn Imf_3_0__TimeCode_setBinaryGroup(this_: *mut Imf_TimeCode_t, group: c_int, value: c_int) -> Exception;

pub fn Imf_3_0__TimeCode_timeAndFlags(this_: *const Imf_TimeCode_t, return_: *mut c_uint, packing: Imf_TimeCode_Packing) -> Exception;

pub fn Imf_3_0__TimeCode_setTimeAndFlags(this_: *mut Imf_TimeCode_t, value: c_uint, packing: Imf_TimeCode_Packing) -> Exception;

pub fn Imf_3_0__TimeCode_userData(this_: *const Imf_TimeCode_t, return_: *mut c_uint) -> Exception;

pub fn Imf_3_0__TimeCode_setUserData(this_: *mut Imf_TimeCode_t, value: c_uint) -> Exception;

pub fn Imf_3_0__TimeCode__eq(this_: *const Imf_TimeCode_t, return_: *mut bool, v: *const Imf_TimeCode_t) -> Exception;

pub fn Imf_3_0__TimeCode__ne(this_: *const Imf_TimeCode_t, return_: *mut bool, v: *const Imf_TimeCode_t) -> Exception;


} // extern "C"

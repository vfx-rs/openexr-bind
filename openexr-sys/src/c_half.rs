#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(2))]
#[derive(Clone)]
pub struct Imath_3_0__half_t {
    _inner: [u8; 2]
}

impl Default for Imath_3_0__half_t {
    fn default() -> Self {
        Self { _inner: [0u8; 2] }
    }
}

impl Imath_3_0__half_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imath_3_0__half_sizeof(),
                Imath_3_0__half_alignof(),
            ).unwrap()
        }
    }
}


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imath_3_0__half__FromBitsTag_e(pub u32);
pub const Imath_half_FromBitsTag_FromBits: Imath_3_0__half__FromBitsTag_e = Imath_3_0__half__FromBitsTag_e(0);


extern "C" {

pub fn Imath_3_0__half_sizeof() -> usize;

pub fn Imath_3_0__half_alignof() -> usize;

pub fn Imath_3_0__half_ctor(this_: *mut Imath_half_t) -> Exception;

pub fn Imath_3_0__half_from_float(this_: *mut Imath_half_t, f: c_float) -> Exception;

pub fn Imath_3_0__half_ctor_1(this_: *mut Imath_half_t, tag: Imath_half_FromBitsTag, bits: c_ushort) -> Exception;

pub fn Imath_3_0__half_copy(this_: *mut Imath_half_t, rhs: *const Imath_half_t) -> Exception;

pub fn Imath_3_0__half_dtor(this_: *mut Imath_half_t) -> Exception;

pub fn Imath_3_0__half_operatorfloat(this_: *const Imath_half_t, return_: *mut c_float) -> Exception;

pub fn Imath_3_0__half__op_sub(this_: *const Imath_half_t, return_: *mut Imath_half_t) -> Exception;

pub fn Imath_3_0__half__assign(this_: *mut Imath_half_t, return_: *mut *mut Imath_half_t, h: *const Imath_half_t) -> Exception;

pub fn Imath_3_0__half__assign_1(this_: *mut Imath_half_t, return_: *mut *mut Imath_half_t, f: c_float) -> Exception;

pub fn Imath_3_0__half__op_iadd(this_: *mut Imath_half_t, return_: *mut *mut Imath_half_t, h: Imath_half_t) -> Exception;

pub fn Imath_3_0__half__op_iadd_1(this_: *mut Imath_half_t, return_: *mut *mut Imath_half_t, f: c_float) -> Exception;

pub fn Imath_3_0__half__op_isub(this_: *mut Imath_half_t, return_: *mut *mut Imath_half_t, h: Imath_half_t) -> Exception;

pub fn Imath_3_0__half__op_isub_1(this_: *mut Imath_half_t, return_: *mut *mut Imath_half_t, f: c_float) -> Exception;

pub fn Imath_3_0__half__op_imul(this_: *mut Imath_half_t, return_: *mut *mut Imath_half_t, h: Imath_half_t) -> Exception;

pub fn Imath_3_0__half__op_imul_1(this_: *mut Imath_half_t, return_: *mut *mut Imath_half_t, f: c_float) -> Exception;

pub fn Imath_3_0__half__op_idiv(this_: *mut Imath_half_t, return_: *mut *mut Imath_half_t, h: Imath_half_t) -> Exception;

pub fn Imath_3_0__half__op_idiv_1(this_: *mut Imath_half_t, return_: *mut *mut Imath_half_t, f: c_float) -> Exception;

pub fn Imath_3_0__half_round(this_: *const Imath_half_t, return_: *mut Imath_half_t, n: c_uint) -> Exception;

pub fn Imath_3_0__half_isFinite(this_: *const Imath_half_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__half_isNormalized(this_: *const Imath_half_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__half_isDenormalized(this_: *const Imath_half_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__half_isZero(this_: *const Imath_half_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__half_isNan(this_: *const Imath_half_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__half_isInfinity(this_: *const Imath_half_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__half_isNegative(this_: *const Imath_half_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__half_posInf(return_: *mut Imath_half_t) -> Exception;

pub fn Imath_3_0__half_negInf(return_: *mut Imath_half_t) -> Exception;

pub fn Imath_3_0__half_qNan(return_: *mut Imath_half_t) -> Exception;

pub fn Imath_3_0__half_sNan(return_: *mut Imath_half_t) -> Exception;

pub fn Imath_3_0__half_bits(this_: *const Imath_half_t, return_: *mut c_ushort) -> Exception;

pub fn Imath_3_0__half_setBits(this_: *mut Imath_half_t, bits: c_ushort) -> Exception;


} // extern "C"

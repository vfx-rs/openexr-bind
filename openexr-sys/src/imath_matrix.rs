#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imath_3_0__Matrix33_float__t {
    pub x: *mut c_float,
}

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imath_3_0__Matrix33_double__t {
    pub x: *mut c_double,
}

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imath_3_0__Matrix44_float__t {
    pub x: *mut c_float,
}

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imath_3_0__Matrix44_double__t {
    pub x: *mut c_double,
}


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imath_3_0__Uninitialized_e(pub u32);
pub const Imath_Uninitialized_UNINITIALIZED: Imath_3_0__Uninitialized_e = Imath_3_0__Uninitialized_e(0);


extern "C" {

pub fn Imath_3_0__Matrix33_float__row(this_: *mut Imath_M33f_t, return_: *mut *mut c_float, i: c_int) -> Exception;

pub fn Imath_3_0__Matrix33_float__row_const(this_: *const Imath_M33f_t, return_: *mut *const c_float, i: c_int) -> Exception;

pub fn Imath_3_0__Matrix33_float__uninitialized(this_: *mut Imath_M33f_t, _unused: Imath_Uninitialized) -> Exception;

pub fn Imath_3_0__Matrix33_float__identity(this_: *mut Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__broadcast(this_: *mut Imath_M33f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__from_array(this_: *mut Imath_M33f_t, a: *const c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__ctor(this_: *mut Imath_M33f_t, a: c_float, b: c_float, c: c_float, d: c_float, e: c_float, f: c_float, g: c_float, h: c_float, i: c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__ctor_1(this_: *mut Imath_M33f_t, v: *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float___assign(this_: *mut Imath_M33f_t, return_: *mut *const Imath_M33f_t, v: *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__dtor(this_: *mut Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__getValue(this_: *mut Imath_M33f_t, return_: *mut *mut c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__getValue_const(this_: *const Imath_M33f_t, return_: *mut *const c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float___eq(this_: *const Imath_M33f_t, return_: *mut bool, v: *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float___ne(this_: *const Imath_M33f_t, return_: *mut bool, v: *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__equalWithAbsError(this_: *const Imath_M33f_t, return_: *mut bool, v: *const Imath_M33f_t, e: c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__equalWithRelError(this_: *const Imath_M33f_t, return_: *mut bool, v: *const Imath_M33f_t, e: c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float___op_iadd(this_: *mut Imath_M33f_t, return_: *mut *const Imath_M33f_t, v: *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__add_assign_scalar(this_: *mut Imath_M33f_t, return_: *mut *const Imath_M33f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float___op_add(this_: *const Imath_M33f_t, return_: *mut Imath_M33f_t, v: *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float___op_isub(this_: *mut Imath_M33f_t, return_: *mut *const Imath_M33f_t, v: *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__sub_assign_scalar(this_: *mut Imath_M33f_t, return_: *mut *const Imath_M33f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float___op_sub(this_: *const Imath_M33f_t, return_: *mut Imath_M33f_t, v: *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float___op_sub_1(this_: *const Imath_M33f_t, return_: *mut Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__negate(this_: *mut Imath_M33f_t, return_: *mut *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__mul_assign_scalar(this_: *mut Imath_M33f_t, return_: *mut *const Imath_M33f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__mul_scalar(this_: *const Imath_M33f_t, return_: *mut Imath_M33f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__div_assign_scalar(this_: *mut Imath_M33f_t, return_: *mut *const Imath_M33f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__div_scalar(this_: *const Imath_M33f_t, return_: *mut Imath_M33f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float___op_imul(this_: *mut Imath_M33f_t, return_: *mut *const Imath_M33f_t, v: *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float___op_mul(this_: *const Imath_M33f_t, return_: *mut Imath_M33f_t, v: *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__makeIdentity(this_: *mut Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__transpose(this_: *mut Imath_M33f_t, return_: *mut *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__transposed(this_: *const Imath_M33f_t, return_: *mut Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__invert(this_: *mut Imath_M33f_t, return_: *mut *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__inverse(this_: *const Imath_M33f_t, return_: *mut Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__gjInvert(this_: *mut Imath_M33f_t, return_: *mut *const Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__gjInverse(this_: *const Imath_M33f_t, return_: *mut Imath_M33f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__minorOf(this_: *const Imath_M33f_t, return_: *mut c_float, r: c_int, c: c_int) -> Exception;

pub fn Imath_3_0__Matrix33_float__fastMinor(this_: *const Imath_M33f_t, return_: *mut c_float, r0: c_int, r1: c_int, c0: c_int, c1: c_int) -> Exception;

pub fn Imath_3_0__Matrix33_float__determinant(this_: *const Imath_M33f_t, return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__setScale(this_: *mut Imath_M33f_t, return_: *mut *const Imath_M33f_t, s: c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__translation(this_: *const Imath_M33f_t, return_: *mut Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Matrix33_float__baseTypeLowest(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__baseTypeMax(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__baseTypeSmallest(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__baseTypeEpsilon(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Matrix33_float__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Matrix33_double__row(this_: *mut Imath_M33d_t, return_: *mut *mut c_double, i: c_int) -> Exception;

pub fn Imath_3_0__Matrix33_double__row_const(this_: *const Imath_M33d_t, return_: *mut *const c_double, i: c_int) -> Exception;

pub fn Imath_3_0__Matrix33_double__uninitialized(this_: *mut Imath_M33d_t, _unused: Imath_Uninitialized) -> Exception;

pub fn Imath_3_0__Matrix33_double__identity(this_: *mut Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__broadcast(this_: *mut Imath_M33d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__from_array(this_: *mut Imath_M33d_t, a: *const c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__ctor(this_: *mut Imath_M33d_t, a: c_double, b: c_double, c: c_double, d: c_double, e: c_double, f: c_double, g: c_double, h: c_double, i: c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__ctor_1(this_: *mut Imath_M33d_t, v: *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double___assign(this_: *mut Imath_M33d_t, return_: *mut *const Imath_M33d_t, v: *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__dtor(this_: *mut Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__getValue(this_: *mut Imath_M33d_t, return_: *mut *mut c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__getValue_const(this_: *const Imath_M33d_t, return_: *mut *const c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double___eq(this_: *const Imath_M33d_t, return_: *mut bool, v: *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double___ne(this_: *const Imath_M33d_t, return_: *mut bool, v: *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__equalWithAbsError(this_: *const Imath_M33d_t, return_: *mut bool, v: *const Imath_M33d_t, e: c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__equalWithRelError(this_: *const Imath_M33d_t, return_: *mut bool, v: *const Imath_M33d_t, e: c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double___op_iadd(this_: *mut Imath_M33d_t, return_: *mut *const Imath_M33d_t, v: *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__add_assign_scalar(this_: *mut Imath_M33d_t, return_: *mut *const Imath_M33d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double___op_add(this_: *const Imath_M33d_t, return_: *mut Imath_M33d_t, v: *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double___op_isub(this_: *mut Imath_M33d_t, return_: *mut *const Imath_M33d_t, v: *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__sub_assign_scalar(this_: *mut Imath_M33d_t, return_: *mut *const Imath_M33d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double___op_sub(this_: *const Imath_M33d_t, return_: *mut Imath_M33d_t, v: *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double___op_sub_1(this_: *const Imath_M33d_t, return_: *mut Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__negate(this_: *mut Imath_M33d_t, return_: *mut *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__mul_assign_scalar(this_: *mut Imath_M33d_t, return_: *mut *const Imath_M33d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__mul_scalar(this_: *const Imath_M33d_t, return_: *mut Imath_M33d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__div_assign_scalar(this_: *mut Imath_M33d_t, return_: *mut *const Imath_M33d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__div_scalar(this_: *const Imath_M33d_t, return_: *mut Imath_M33d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double___op_imul(this_: *mut Imath_M33d_t, return_: *mut *const Imath_M33d_t, v: *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double___op_mul(this_: *const Imath_M33d_t, return_: *mut Imath_M33d_t, v: *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__makeIdentity(this_: *mut Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__transpose(this_: *mut Imath_M33d_t, return_: *mut *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__transposed(this_: *const Imath_M33d_t, return_: *mut Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__invert(this_: *mut Imath_M33d_t, return_: *mut *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__inverse(this_: *const Imath_M33d_t, return_: *mut Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__gjInvert(this_: *mut Imath_M33d_t, return_: *mut *const Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__gjInverse(this_: *const Imath_M33d_t, return_: *mut Imath_M33d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__minorOf(this_: *const Imath_M33d_t, return_: *mut c_double, r: c_int, c: c_int) -> Exception;

pub fn Imath_3_0__Matrix33_double__fastMinor(this_: *const Imath_M33d_t, return_: *mut c_double, r0: c_int, r1: c_int, c0: c_int, c1: c_int) -> Exception;

pub fn Imath_3_0__Matrix33_double__determinant(this_: *const Imath_M33d_t, return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__setScale(this_: *mut Imath_M33d_t, return_: *mut *const Imath_M33d_t, s: c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__translation(this_: *const Imath_M33d_t, return_: *mut Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Matrix33_double__baseTypeLowest(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__baseTypeMax(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__baseTypeSmallest(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__baseTypeEpsilon(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Matrix33_double__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Matrix44_float__row(this_: *mut Imath_M44f_t, return_: *mut *mut c_float, i: c_int) -> Exception;

pub fn Imath_3_0__Matrix44_float__row_const(this_: *const Imath_M44f_t, return_: *mut *const c_float, i: c_int) -> Exception;

pub fn Imath_3_0__Matrix44_float__uninitialized(this_: *mut Imath_M44f_t, _unused: Imath_Uninitialized) -> Exception;

pub fn Imath_3_0__Matrix44_float__identity(this_: *mut Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__broadcast(this_: *mut Imath_M44f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__from_array(this_: *mut Imath_M44f_t, a: *const c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__ctor(this_: *mut Imath_M44f_t, a: c_float, b: c_float, c: c_float, d: c_float, e: c_float, f: c_float, g: c_float, h: c_float, i: c_float, j: c_float, k: c_float, l: c_float, m: c_float, n: c_float, o: c_float, p: c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__from_rotation_and_translation(this_: *mut Imath_M44f_t, r: Imath_M33f_t, t: Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__ctor_1(this_: *mut Imath_M44f_t, v: *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float___assign(this_: *mut Imath_M44f_t, return_: *mut *const Imath_M44f_t, v: *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__dtor(this_: *mut Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__getValue(this_: *mut Imath_M44f_t, return_: *mut *mut c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__getValue_1(this_: *const Imath_M44f_t, return_: *mut *const c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float___eq(this_: *const Imath_M44f_t, return_: *mut bool, v: *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float___ne(this_: *const Imath_M44f_t, return_: *mut bool, v: *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__equalWithAbsError(this_: *const Imath_M44f_t, return_: *mut bool, v: *const Imath_M44f_t, e: c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__equalWithRelError(this_: *const Imath_M44f_t, return_: *mut bool, v: *const Imath_M44f_t, e: c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float___op_iadd(this_: *mut Imath_M44f_t, return_: *mut *const Imath_M44f_t, v: *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__add_assign_scalar(this_: *mut Imath_M44f_t, return_: *mut *const Imath_M44f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float___op_add(this_: *const Imath_M44f_t, return_: *mut Imath_M44f_t, v: *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float___op_isub(this_: *mut Imath_M44f_t, return_: *mut *const Imath_M44f_t, v: *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__sub_assign_scalar(this_: *mut Imath_M44f_t, return_: *mut *const Imath_M44f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float___op_sub(this_: *const Imath_M44f_t, return_: *mut Imath_M44f_t, v: *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float___op_sub_1(this_: *const Imath_M44f_t, return_: *mut Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__negate(this_: *mut Imath_M44f_t, return_: *mut *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__mul_assign_scalar(this_: *mut Imath_M44f_t, return_: *mut *const Imath_M44f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__mul_scalar(this_: *const Imath_M44f_t, return_: *mut Imath_M44f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__div_assign_scalar(this_: *mut Imath_M44f_t, return_: *mut *const Imath_M44f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__div_scalar(this_: *const Imath_M44f_t, return_: *mut Imath_M44f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float___op_imul(this_: *mut Imath_M44f_t, return_: *mut *const Imath_M44f_t, v: *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float___op_mul(this_: *const Imath_M44f_t, return_: *mut Imath_M44f_t, v: *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__multiply(a: *const Imath_M44f_t, b: *const Imath_M44f_t, c: *mut Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__makeIdentity(this_: *mut Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__transpose(this_: *mut Imath_M44f_t, return_: *mut *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__transposed(this_: *const Imath_M44f_t, return_: *mut Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__invert(this_: *mut Imath_M44f_t, return_: *mut *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__inverse(this_: *const Imath_M44f_t, return_: *mut Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__gjInvert(this_: *mut Imath_M44f_t, return_: *mut *const Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__gjInverse(this_: *const Imath_M44f_t, return_: *mut Imath_M44f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__minorOf(this_: *const Imath_M44f_t, return_: *mut c_float, r: c_int, c: c_int) -> Exception;

pub fn Imath_3_0__Matrix44_float__fastMinor(this_: *const Imath_M44f_t, return_: *mut c_float, r0: c_int, r1: c_int, r2: c_int, c0: c_int, c1: c_int, c2: c_int) -> Exception;

pub fn Imath_3_0__Matrix44_float__determinant(this_: *const Imath_M44f_t, return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__setScale_uniform(this_: *mut Imath_M44f_t, return_: *mut *const Imath_M44f_t, s: c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__translation(this_: *const Imath_M44f_t, return_: *mut Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Matrix44_float__baseTypeLowest(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__baseTypeMax(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__baseTypeSmallest(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__baseTypeEpsilon(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Matrix44_float__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Matrix44_double__row(this_: *mut Imath_M44d_t, return_: *mut *mut c_double, i: c_int) -> Exception;

pub fn Imath_3_0__Matrix44_double__row_const(this_: *const Imath_M44d_t, return_: *mut *const c_double, i: c_int) -> Exception;

pub fn Imath_3_0__Matrix44_double__uninitialized(this_: *mut Imath_M44d_t, _unused: Imath_Uninitialized) -> Exception;

pub fn Imath_3_0__Matrix44_double__identity(this_: *mut Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__broadcast(this_: *mut Imath_M44d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__from_array(this_: *mut Imath_M44d_t, a: *const c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__ctor(this_: *mut Imath_M44d_t, a: c_double, b: c_double, c: c_double, d: c_double, e: c_double, f: c_double, g: c_double, h: c_double, i: c_double, j: c_double, k: c_double, l: c_double, m: c_double, n: c_double, o: c_double, p: c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__from_rotation_and_translation(this_: *mut Imath_M44d_t, r: Imath_M33d_t, t: Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__ctor_1(this_: *mut Imath_M44d_t, v: *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double___assign(this_: *mut Imath_M44d_t, return_: *mut *const Imath_M44d_t, v: *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__dtor(this_: *mut Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__getValue(this_: *mut Imath_M44d_t, return_: *mut *mut c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__getValue_1(this_: *const Imath_M44d_t, return_: *mut *const c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double___eq(this_: *const Imath_M44d_t, return_: *mut bool, v: *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double___ne(this_: *const Imath_M44d_t, return_: *mut bool, v: *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__equalWithAbsError(this_: *const Imath_M44d_t, return_: *mut bool, v: *const Imath_M44d_t, e: c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__equalWithRelError(this_: *const Imath_M44d_t, return_: *mut bool, v: *const Imath_M44d_t, e: c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double___op_iadd(this_: *mut Imath_M44d_t, return_: *mut *const Imath_M44d_t, v: *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__add_assign_scalar(this_: *mut Imath_M44d_t, return_: *mut *const Imath_M44d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double___op_add(this_: *const Imath_M44d_t, return_: *mut Imath_M44d_t, v: *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double___op_isub(this_: *mut Imath_M44d_t, return_: *mut *const Imath_M44d_t, v: *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__sub_assign_scalar(this_: *mut Imath_M44d_t, return_: *mut *const Imath_M44d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double___op_sub(this_: *const Imath_M44d_t, return_: *mut Imath_M44d_t, v: *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double___op_sub_1(this_: *const Imath_M44d_t, return_: *mut Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__negate(this_: *mut Imath_M44d_t, return_: *mut *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__mul_assign_scalar(this_: *mut Imath_M44d_t, return_: *mut *const Imath_M44d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__mul_scalar(this_: *const Imath_M44d_t, return_: *mut Imath_M44d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__div_assign_scalar(this_: *mut Imath_M44d_t, return_: *mut *const Imath_M44d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__div_scalar(this_: *const Imath_M44d_t, return_: *mut Imath_M44d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double___op_imul(this_: *mut Imath_M44d_t, return_: *mut *const Imath_M44d_t, v: *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double___op_mul(this_: *const Imath_M44d_t, return_: *mut Imath_M44d_t, v: *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__multiply(a: *const Imath_M44d_t, b: *const Imath_M44d_t, c: *mut Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__makeIdentity(this_: *mut Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__transpose(this_: *mut Imath_M44d_t, return_: *mut *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__transposed(this_: *const Imath_M44d_t, return_: *mut Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__invert(this_: *mut Imath_M44d_t, return_: *mut *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__inverse(this_: *const Imath_M44d_t, return_: *mut Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__gjInvert(this_: *mut Imath_M44d_t, return_: *mut *const Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__gjInverse(this_: *const Imath_M44d_t, return_: *mut Imath_M44d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__minorOf(this_: *const Imath_M44d_t, return_: *mut c_double, r: c_int, c: c_int) -> Exception;

pub fn Imath_3_0__Matrix44_double__fastMinor(this_: *const Imath_M44d_t, return_: *mut c_double, r0: c_int, r1: c_int, r2: c_int, c0: c_int, c1: c_int, c2: c_int) -> Exception;

pub fn Imath_3_0__Matrix44_double__determinant(this_: *const Imath_M44d_t, return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__setScale_uniform(this_: *mut Imath_M44d_t, return_: *mut *const Imath_M44d_t, s: c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__translation(this_: *const Imath_M44d_t, return_: *mut Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Matrix44_double__baseTypeLowest(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__baseTypeMax(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__baseTypeSmallest(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__baseTypeEpsilon(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Matrix44_double__dimensions(return_: *mut c_uint) -> Exception;


} // extern "C"

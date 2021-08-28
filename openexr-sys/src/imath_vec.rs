#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;

#[repr(C, align(2))]
#[derive(Clone)]
pub struct Imath_3_0__Vec2_short__t {
    pub x: c_short,
    pub y: c_short,
}

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imath_3_0__Vec2_int__t {
    pub x: c_int,
    pub y: c_int,
}

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imath_3_0__Vec2_long__t {
    pub x: c_long,
    pub y: c_long,
}

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imath_3_0__Vec2_float__t {
    pub x: c_float,
    pub y: c_float,
}

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imath_3_0__Vec2_double__t {
    pub x: c_double,
    pub y: c_double,
}

#[repr(C, align(2))]
#[derive(Clone)]
pub struct Imath_3_0__Vec3_short__t {
    pub x: c_short,
    pub y: c_short,
    pub z: c_short,
}

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imath_3_0__Vec3_int__t {
    pub x: c_int,
    pub y: c_int,
    pub z: c_int,
}

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imath_3_0__Vec3_long__t {
    pub x: c_long,
    pub y: c_long,
    pub z: c_long,
}

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imath_3_0__Vec3_float__t {
    pub x: c_float,
    pub y: c_float,
    pub z: c_float,
}

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imath_3_0__Vec3_double__t {
    pub x: c_double,
    pub y: c_double,
    pub z: c_double,
}

#[repr(C, align(2))]
#[derive(Clone)]
pub struct Imath_3_0__Vec4_short__t {
    pub x: c_short,
    pub y: c_short,
    pub z: c_short,
    pub w: c_short,
}

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imath_3_0__Vec4_int__t {
    pub x: c_int,
    pub y: c_int,
    pub z: c_int,
    pub w: c_int,
}

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imath_3_0__Vec4_long__t {
    pub x: c_long,
    pub y: c_long,
    pub z: c_long,
    pub w: c_long,
}

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imath_3_0__Vec4_float__t {
    pub x: c_float,
    pub y: c_float,
    pub z: c_float,
    pub w: c_float,
}

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imath_3_0__Vec4_double__t {
    pub x: c_double,
    pub y: c_double,
    pub z: c_double,
    pub w: c_double,
}


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imath_3_0__InfException_e(pub u32);
pub const Imath_InfException_INF_EXCEPTION: Imath_3_0__InfException_e = Imath_3_0__InfException_e(0);


extern "C" {

pub fn Imath_3_0__Vec2_short__index(this_: *mut Imath_V2s_t, return_: *mut *mut c_short, i: c_int) -> Exception;

pub fn Imath_3_0__Vec2_short__index_const(this_: *const Imath_V2s_t, return_: *mut *const c_short, i: c_int) -> Exception;

pub fn Imath_3_0__Vec2_short__broadcast(this_: *mut Imath_V2s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec2_short__ctor(this_: *mut Imath_V2s_t, a: c_short, b: c_short) -> Exception;

pub fn Imath_3_0__Vec2_short__ctor_1(this_: *mut Imath_V2s_t, v: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short___assign(this_: *mut Imath_V2s_t, return_: *mut *const Imath_V2s_t, v: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short__dtor(this_: *mut Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short__equalWithAbsError(this_: *const Imath_V2s_t, return_: *mut bool, v: *const Imath_V2s_t, e: c_short) -> Exception;

pub fn Imath_3_0__Vec2_short__equalWithRelError(this_: *const Imath_V2s_t, return_: *mut bool, v: *const Imath_V2s_t, e: c_short) -> Exception;

pub fn Imath_3_0__Vec2_short__dot(this_: *const Imath_V2s_t, return_: *mut c_short, v: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short__cross(this_: *const Imath_V2s_t, return_: *mut c_short, v: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short___op_iadd(this_: *mut Imath_V2s_t, return_: *mut *const Imath_V2s_t, v: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short___op_add(this_: *const Imath_V2s_t, return_: *mut Imath_V2s_t, v: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short___op_isub(this_: *mut Imath_V2s_t, return_: *mut *const Imath_V2s_t, v: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short___op_sub(this_: *const Imath_V2s_t, return_: *mut Imath_V2s_t, v: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short___op_sub_1(this_: *const Imath_V2s_t, return_: *mut Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short__negate(this_: *mut Imath_V2s_t, return_: *mut *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short___op_imul(this_: *mut Imath_V2s_t, return_: *mut *const Imath_V2s_t, v: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short___op_imul_1(this_: *mut Imath_V2s_t, return_: *mut *const Imath_V2s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec2_short___op_mul(this_: *const Imath_V2s_t, return_: *mut Imath_V2s_t, v: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short___op_mul_1(this_: *const Imath_V2s_t, return_: *mut Imath_V2s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec2_short___op_idiv(this_: *mut Imath_V2s_t, return_: *mut *const Imath_V2s_t, v: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short___op_idiv_1(this_: *mut Imath_V2s_t, return_: *mut *const Imath_V2s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec2_short___op_div(this_: *const Imath_V2s_t, return_: *mut Imath_V2s_t, v: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Vec2_short___op_div_1(this_: *const Imath_V2s_t, return_: *mut Imath_V2s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec2_short__length2(this_: *const Imath_V2s_t, return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec2_short__baseTypeLowest(return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec2_short__baseTypeMax(return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec2_short__baseTypeSmallest(return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec2_short__baseTypeEpsilon(return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec2_short__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec2_int__index(this_: *mut Imath_V2i_t, return_: *mut *mut c_int, i: c_int) -> Exception;

pub fn Imath_3_0__Vec2_int__index_const(this_: *const Imath_V2i_t, return_: *mut *const c_int, i: c_int) -> Exception;

pub fn Imath_3_0__Vec2_int__broadcast(this_: *mut Imath_V2i_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec2_int__ctor(this_: *mut Imath_V2i_t, a: c_int, b: c_int) -> Exception;

pub fn Imath_3_0__Vec2_int__ctor_1(this_: *mut Imath_V2i_t, v: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int___assign(this_: *mut Imath_V2i_t, return_: *mut *const Imath_V2i_t, v: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int__dtor(this_: *mut Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int__equalWithAbsError(this_: *const Imath_V2i_t, return_: *mut bool, v: *const Imath_V2i_t, e: c_int) -> Exception;

pub fn Imath_3_0__Vec2_int__equalWithRelError(this_: *const Imath_V2i_t, return_: *mut bool, v: *const Imath_V2i_t, e: c_int) -> Exception;

pub fn Imath_3_0__Vec2_int__dot(this_: *const Imath_V2i_t, return_: *mut c_int, v: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int__cross(this_: *const Imath_V2i_t, return_: *mut c_int, v: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int___op_iadd(this_: *mut Imath_V2i_t, return_: *mut *const Imath_V2i_t, v: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int___op_add(this_: *const Imath_V2i_t, return_: *mut Imath_V2i_t, v: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int___op_isub(this_: *mut Imath_V2i_t, return_: *mut *const Imath_V2i_t, v: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int___op_sub(this_: *const Imath_V2i_t, return_: *mut Imath_V2i_t, v: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int___op_sub_1(this_: *const Imath_V2i_t, return_: *mut Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int__negate(this_: *mut Imath_V2i_t, return_: *mut *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int___op_imul(this_: *mut Imath_V2i_t, return_: *mut *const Imath_V2i_t, v: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int___op_imul_1(this_: *mut Imath_V2i_t, return_: *mut *const Imath_V2i_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec2_int___op_mul(this_: *const Imath_V2i_t, return_: *mut Imath_V2i_t, v: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int___op_mul_1(this_: *const Imath_V2i_t, return_: *mut Imath_V2i_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec2_int___op_idiv(this_: *mut Imath_V2i_t, return_: *mut *const Imath_V2i_t, v: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int___op_idiv_1(this_: *mut Imath_V2i_t, return_: *mut *const Imath_V2i_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec2_int___op_div(this_: *const Imath_V2i_t, return_: *mut Imath_V2i_t, v: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Vec2_int___op_div_1(this_: *const Imath_V2i_t, return_: *mut Imath_V2i_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec2_int__length2(this_: *const Imath_V2i_t, return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec2_int__baseTypeLowest(return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec2_int__baseTypeMax(return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec2_int__baseTypeSmallest(return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec2_int__baseTypeEpsilon(return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec2_int__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec2_long__index(this_: *mut Imath_V2i64_t, return_: *mut *mut c_long, i: c_int) -> Exception;

pub fn Imath_3_0__Vec2_long__index_const(this_: *const Imath_V2i64_t, return_: *mut *const c_long, i: c_int) -> Exception;

pub fn Imath_3_0__Vec2_long__broadcast(this_: *mut Imath_V2i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec2_long__ctor(this_: *mut Imath_V2i64_t, a: c_long, b: c_long) -> Exception;

pub fn Imath_3_0__Vec2_long__copy(this_: *mut Imath_V2i64_t, v: *const Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long___assign(this_: *mut Imath_V2i64_t, return_: *mut *const Imath_V2i64_t, v: *const Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long__dtor(this_: *mut Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long__equalWithAbsError(this_: *const Imath_V2i64_t, return_: *mut bool, v: *const Imath_V2i64_t, e: c_long) -> Exception;

pub fn Imath_3_0__Vec2_long__equalWithRelError(this_: *const Imath_V2i64_t, return_: *mut bool, v: *const Imath_V2i64_t, e: c_long) -> Exception;

pub fn Imath_3_0__Vec2_long__dot(this_: *const Imath_V2i64_t, return_: *mut c_long, v: *const Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long__cross(this_: *const Imath_V2i64_t, return_: *mut c_long, v: *const Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long___op_iadd(this_: *mut Imath_V2i64_t, return_: *mut *const Imath_V2i64_t, v: *const Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long___op_add(this_: *const Imath_V2i64_t, return_: *mut Imath_V2i64_t, v: *const Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long___op_isub(this_: *mut Imath_V2i64_t, return_: *mut *const Imath_V2i64_t, v: *const Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long___op_sub(this_: *const Imath_V2i64_t, return_: *mut Imath_V2i64_t, v: *const Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long___op_sub_1(this_: *const Imath_V2i64_t, return_: *mut Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long__negate(this_: *mut Imath_V2i64_t, return_: *mut *const Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long___op_imul(this_: *mut Imath_V2i64_t, return_: *mut *const Imath_V2i64_t, v: *const Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long___op_imul_1(this_: *mut Imath_V2i64_t, return_: *mut *const Imath_V2i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec2_long___op_mul(this_: *const Imath_V2i64_t, return_: *mut Imath_V2i64_t, v: *const Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long___op_mul_1(this_: *const Imath_V2i64_t, return_: *mut Imath_V2i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec2_long___op_idiv(this_: *mut Imath_V2i64_t, return_: *mut *const Imath_V2i64_t, v: *const Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long___op_idiv_1(this_: *mut Imath_V2i64_t, return_: *mut *const Imath_V2i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec2_long___op_div(this_: *const Imath_V2i64_t, return_: *mut Imath_V2i64_t, v: *const Imath_V2i64_t) -> Exception;

pub fn Imath_3_0__Vec2_long___op_div_1(this_: *const Imath_V2i64_t, return_: *mut Imath_V2i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec2_long__length2(this_: *const Imath_V2i64_t, return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec2_long__baseTypeLowest(return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec2_long__baseTypeMax(return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec2_long__baseTypeSmallest(return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec2_long__baseTypeEpsilon(return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec2_long__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec2_float__index(this_: *mut Imath_V2f_t, return_: *mut *mut c_float, i: c_int) -> Exception;

pub fn Imath_3_0__Vec2_float__index_const(this_: *const Imath_V2f_t, return_: *mut *const c_float, i: c_int) -> Exception;

pub fn Imath_3_0__Vec2_float__broadcast(this_: *mut Imath_V2f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec2_float__ctor(this_: *mut Imath_V2f_t, a: c_float, b: c_float) -> Exception;

pub fn Imath_3_0__Vec2_float__ctor_1(this_: *mut Imath_V2f_t, v: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float___assign(this_: *mut Imath_V2f_t, return_: *mut *const Imath_V2f_t, v: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float__dtor(this_: *mut Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float__equalWithAbsError(this_: *const Imath_V2f_t, return_: *mut bool, v: *const Imath_V2f_t, e: c_float) -> Exception;

pub fn Imath_3_0__Vec2_float__equalWithRelError(this_: *const Imath_V2f_t, return_: *mut bool, v: *const Imath_V2f_t, e: c_float) -> Exception;

pub fn Imath_3_0__Vec2_float__dot(this_: *const Imath_V2f_t, return_: *mut c_float, v: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float__cross(this_: *const Imath_V2f_t, return_: *mut c_float, v: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float___op_iadd(this_: *mut Imath_V2f_t, return_: *mut *const Imath_V2f_t, v: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float___op_add(this_: *const Imath_V2f_t, return_: *mut Imath_V2f_t, v: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float___op_isub(this_: *mut Imath_V2f_t, return_: *mut *const Imath_V2f_t, v: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float___op_sub(this_: *const Imath_V2f_t, return_: *mut Imath_V2f_t, v: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float___op_sub_1(this_: *const Imath_V2f_t, return_: *mut Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float__negate(this_: *mut Imath_V2f_t, return_: *mut *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float___op_imul(this_: *mut Imath_V2f_t, return_: *mut *const Imath_V2f_t, v: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float___op_imul_1(this_: *mut Imath_V2f_t, return_: *mut *const Imath_V2f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec2_float___op_mul(this_: *const Imath_V2f_t, return_: *mut Imath_V2f_t, v: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float___op_mul_1(this_: *const Imath_V2f_t, return_: *mut Imath_V2f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec2_float___op_idiv(this_: *mut Imath_V2f_t, return_: *mut *const Imath_V2f_t, v: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float___op_idiv_1(this_: *mut Imath_V2f_t, return_: *mut *const Imath_V2f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec2_float___op_div(this_: *const Imath_V2f_t, return_: *mut Imath_V2f_t, v: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float___op_div_1(this_: *const Imath_V2f_t, return_: *mut Imath_V2f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec2_float__length(this_: *const Imath_V2f_t, return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec2_float__length2(this_: *const Imath_V2f_t, return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec2_float__normalize(this_: *mut Imath_V2f_t, return_: *mut *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float__normalizeExc(this_: *mut Imath_V2f_t, return_: *mut *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float__normalizeNonNull(this_: *mut Imath_V2f_t, return_: *mut *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float__normalized(this_: *const Imath_V2f_t, return_: *mut Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float__normalizedExc(this_: *const Imath_V2f_t, return_: *mut Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float__normalizedNonNull(this_: *const Imath_V2f_t, return_: *mut Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Vec2_float__baseTypeLowest(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec2_float__baseTypeMax(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec2_float__baseTypeSmallest(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec2_float__baseTypeEpsilon(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec2_float__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec2_double__index(this_: *mut Imath_V2d_t, return_: *mut *mut c_double, i: c_int) -> Exception;

pub fn Imath_3_0__Vec2_double__index_const(this_: *const Imath_V2d_t, return_: *mut *const c_double, i: c_int) -> Exception;

pub fn Imath_3_0__Vec2_double__broadcast(this_: *mut Imath_V2d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec2_double__ctor(this_: *mut Imath_V2d_t, a: c_double, b: c_double) -> Exception;

pub fn Imath_3_0__Vec2_double__ctor_1(this_: *mut Imath_V2d_t, v: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double___assign(this_: *mut Imath_V2d_t, return_: *mut *const Imath_V2d_t, v: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double__dtor(this_: *mut Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double__equalWithAbsError(this_: *const Imath_V2d_t, return_: *mut bool, v: *const Imath_V2d_t, e: c_double) -> Exception;

pub fn Imath_3_0__Vec2_double__equalWithRelError(this_: *const Imath_V2d_t, return_: *mut bool, v: *const Imath_V2d_t, e: c_double) -> Exception;

pub fn Imath_3_0__Vec2_double__dot(this_: *const Imath_V2d_t, return_: *mut c_double, v: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double__cross(this_: *const Imath_V2d_t, return_: *mut c_double, v: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double___op_iadd(this_: *mut Imath_V2d_t, return_: *mut *const Imath_V2d_t, v: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double___op_add(this_: *const Imath_V2d_t, return_: *mut Imath_V2d_t, v: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double___op_isub(this_: *mut Imath_V2d_t, return_: *mut *const Imath_V2d_t, v: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double___op_sub(this_: *const Imath_V2d_t, return_: *mut Imath_V2d_t, v: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double___op_sub_1(this_: *const Imath_V2d_t, return_: *mut Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double__negate(this_: *mut Imath_V2d_t, return_: *mut *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double___op_imul(this_: *mut Imath_V2d_t, return_: *mut *const Imath_V2d_t, v: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double___op_imul_1(this_: *mut Imath_V2d_t, return_: *mut *const Imath_V2d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec2_double___op_mul(this_: *const Imath_V2d_t, return_: *mut Imath_V2d_t, v: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double___op_mul_1(this_: *const Imath_V2d_t, return_: *mut Imath_V2d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec2_double___op_idiv(this_: *mut Imath_V2d_t, return_: *mut *const Imath_V2d_t, v: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double___op_idiv_1(this_: *mut Imath_V2d_t, return_: *mut *const Imath_V2d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec2_double___op_div(this_: *const Imath_V2d_t, return_: *mut Imath_V2d_t, v: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double___op_div_1(this_: *const Imath_V2d_t, return_: *mut Imath_V2d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec2_double__length(this_: *const Imath_V2d_t, return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec2_double__length2(this_: *const Imath_V2d_t, return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec2_double__normalize(this_: *mut Imath_V2d_t, return_: *mut *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double__normalizeExc(this_: *mut Imath_V2d_t, return_: *mut *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double__normalizeNonNull(this_: *mut Imath_V2d_t, return_: *mut *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double__normalized(this_: *const Imath_V2d_t, return_: *mut Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double__normalizedExc(this_: *const Imath_V2d_t, return_: *mut Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double__normalizedNonNull(this_: *const Imath_V2d_t, return_: *mut Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Vec2_double__baseTypeLowest(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec2_double__baseTypeMax(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec2_double__baseTypeSmallest(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec2_double__baseTypeEpsilon(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec2_double__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec3_short__index(this_: *mut Imath_V3s_t, return_: *mut *mut c_short, i: c_int) -> Exception;

pub fn Imath_3_0__Vec3_short__index_const(this_: *const Imath_V3s_t, return_: *mut *const c_short, i: c_int) -> Exception;

pub fn Imath_3_0__Vec3_short__ctor(this_: *mut Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short__ctor_1(this_: *mut Imath_V3s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec3_short__ctor_2(this_: *mut Imath_V3s_t, a: c_short, b: c_short, c: c_short) -> Exception;

pub fn Imath_3_0__Vec3_short__ctor_3(this_: *mut Imath_V3s_t, v: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short___assign(this_: *mut Imath_V3s_t, return_: *mut *const Imath_V3s_t, v: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short__dtor(this_: *mut Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short__getValue(this_: *mut Imath_V3s_t, return_: *mut *mut c_short) -> Exception;

pub fn Imath_3_0__Vec3_short__getValue_1(this_: *const Imath_V3s_t, return_: *mut *const c_short) -> Exception;

pub fn Imath_3_0__Vec3_short__equalWithAbsError(this_: *const Imath_V3s_t, return_: *mut bool, v: *const Imath_V3s_t, e: c_short) -> Exception;

pub fn Imath_3_0__Vec3_short__equalWithRelError(this_: *const Imath_V3s_t, return_: *mut bool, v: *const Imath_V3s_t, e: c_short) -> Exception;

pub fn Imath_3_0__Vec3_short__dot(this_: *const Imath_V3s_t, return_: *mut c_short, v: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short__cross(this_: *const Imath_V3s_t, return_: *mut Imath_V3s_t, v: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short___op_iadd(this_: *mut Imath_V3s_t, return_: *mut *const Imath_V3s_t, v: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short___op_add(this_: *const Imath_V3s_t, return_: *mut Imath_V3s_t, v: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short___op_isub(this_: *mut Imath_V3s_t, return_: *mut *const Imath_V3s_t, v: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short___op_sub(this_: *const Imath_V3s_t, return_: *mut Imath_V3s_t, v: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short___op_sub_1(this_: *const Imath_V3s_t, return_: *mut Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short__negate(this_: *mut Imath_V3s_t, return_: *mut *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short___op_imul(this_: *mut Imath_V3s_t, return_: *mut *const Imath_V3s_t, v: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short___op_imul_1(this_: *mut Imath_V3s_t, return_: *mut *const Imath_V3s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec3_short___op_mul(this_: *const Imath_V3s_t, return_: *mut Imath_V3s_t, v: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short___op_mul_1(this_: *const Imath_V3s_t, return_: *mut Imath_V3s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec3_short___op_idiv(this_: *mut Imath_V3s_t, return_: *mut *const Imath_V3s_t, v: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short___op_idiv_1(this_: *mut Imath_V3s_t, return_: *mut *const Imath_V3s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec3_short___op_div(this_: *const Imath_V3s_t, return_: *mut Imath_V3s_t, v: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Vec3_short___op_div_1(this_: *const Imath_V3s_t, return_: *mut Imath_V3s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec3_short__length2(this_: *const Imath_V3s_t, return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec3_short__baseTypeLowest(return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec3_short__baseTypeMax(return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec3_short__baseTypeSmallest(return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec3_short__baseTypeEpsilon(return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec3_short__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec3_int__index(this_: *mut Imath_V3i_t, return_: *mut *mut c_int, i: c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__index_const(this_: *const Imath_V3i_t, return_: *mut *const c_int, i: c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__ctor(this_: *mut Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int__ctor_1(this_: *mut Imath_V3i_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__ctor_2(this_: *mut Imath_V3i_t, a: c_int, b: c_int, c: c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__ctor_3(this_: *mut Imath_V3i_t, v: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int___assign(this_: *mut Imath_V3i_t, return_: *mut *const Imath_V3i_t, v: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int__dtor(this_: *mut Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int__getValue(this_: *mut Imath_V3i_t, return_: *mut *mut c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__getValue_1(this_: *const Imath_V3i_t, return_: *mut *const c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__equalWithAbsError(this_: *const Imath_V3i_t, return_: *mut bool, v: *const Imath_V3i_t, e: c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__equalWithRelError(this_: *const Imath_V3i_t, return_: *mut bool, v: *const Imath_V3i_t, e: c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__dot(this_: *const Imath_V3i_t, return_: *mut c_int, v: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int__cross(this_: *const Imath_V3i_t, return_: *mut Imath_V3i_t, v: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int___op_iadd(this_: *mut Imath_V3i_t, return_: *mut *const Imath_V3i_t, v: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int___op_add(this_: *const Imath_V3i_t, return_: *mut Imath_V3i_t, v: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int___op_isub(this_: *mut Imath_V3i_t, return_: *mut *const Imath_V3i_t, v: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int___op_sub(this_: *const Imath_V3i_t, return_: *mut Imath_V3i_t, v: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int___op_sub_1(this_: *const Imath_V3i_t, return_: *mut Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int__negate(this_: *mut Imath_V3i_t, return_: *mut *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int___op_imul(this_: *mut Imath_V3i_t, return_: *mut *const Imath_V3i_t, v: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int___op_imul_1(this_: *mut Imath_V3i_t, return_: *mut *const Imath_V3i_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec3_int___op_mul(this_: *const Imath_V3i_t, return_: *mut Imath_V3i_t, v: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int___op_mul_1(this_: *const Imath_V3i_t, return_: *mut Imath_V3i_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec3_int___op_idiv(this_: *mut Imath_V3i_t, return_: *mut *const Imath_V3i_t, v: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int___op_idiv_1(this_: *mut Imath_V3i_t, return_: *mut *const Imath_V3i_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec3_int___op_div(this_: *const Imath_V3i_t, return_: *mut Imath_V3i_t, v: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Vec3_int___op_div_1(this_: *const Imath_V3i_t, return_: *mut Imath_V3i_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__length2(this_: *const Imath_V3i_t, return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__baseTypeLowest(return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__baseTypeMax(return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__baseTypeSmallest(return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__baseTypeEpsilon(return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec3_int__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec3_long__index(this_: *mut Imath_V3i64_t, return_: *mut *mut c_long, i: c_int) -> Exception;

pub fn Imath_3_0__Vec3_long__index_const(this_: *const Imath_V3i64_t, return_: *mut *const c_long, i: c_int) -> Exception;

pub fn Imath_3_0__Vec3_long__ctor(this_: *mut Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long__ctor_1(this_: *mut Imath_V3i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec3_long__ctor_2(this_: *mut Imath_V3i64_t, a: c_long, b: c_long, c: c_long) -> Exception;

pub fn Imath_3_0__Vec3_long__copy(this_: *mut Imath_V3i64_t, v: *const Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long___assign(this_: *mut Imath_V3i64_t, return_: *mut *const Imath_V3i64_t, v: *const Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long__dtor(this_: *mut Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long__getValue(this_: *mut Imath_V3i64_t, return_: *mut *mut c_long) -> Exception;

pub fn Imath_3_0__Vec3_long__getValue_1(this_: *const Imath_V3i64_t, return_: *mut *const c_long) -> Exception;

pub fn Imath_3_0__Vec3_long__equalWithAbsError(this_: *const Imath_V3i64_t, return_: *mut bool, v: *const Imath_V3i64_t, e: c_long) -> Exception;

pub fn Imath_3_0__Vec3_long__equalWithRelError(this_: *const Imath_V3i64_t, return_: *mut bool, v: *const Imath_V3i64_t, e: c_long) -> Exception;

pub fn Imath_3_0__Vec3_long__dot(this_: *const Imath_V3i64_t, return_: *mut c_long, v: *const Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long__cross(this_: *const Imath_V3i64_t, return_: *mut Imath_V3i64_t, v: *const Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long___op_iadd(this_: *mut Imath_V3i64_t, return_: *mut *const Imath_V3i64_t, v: *const Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long___op_add(this_: *const Imath_V3i64_t, return_: *mut Imath_V3i64_t, v: *const Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long___op_isub(this_: *mut Imath_V3i64_t, return_: *mut *const Imath_V3i64_t, v: *const Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long___op_sub(this_: *const Imath_V3i64_t, return_: *mut Imath_V3i64_t, v: *const Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long___op_sub_1(this_: *const Imath_V3i64_t, return_: *mut Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long__negate(this_: *mut Imath_V3i64_t, return_: *mut *const Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long___op_imul(this_: *mut Imath_V3i64_t, return_: *mut *const Imath_V3i64_t, v: *const Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long___op_imul_1(this_: *mut Imath_V3i64_t, return_: *mut *const Imath_V3i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec3_long___op_mul(this_: *const Imath_V3i64_t, return_: *mut Imath_V3i64_t, v: *const Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long___op_mul_1(this_: *const Imath_V3i64_t, return_: *mut Imath_V3i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec3_long___op_idiv(this_: *mut Imath_V3i64_t, return_: *mut *const Imath_V3i64_t, v: *const Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long___op_idiv_1(this_: *mut Imath_V3i64_t, return_: *mut *const Imath_V3i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec3_long___op_div(this_: *const Imath_V3i64_t, return_: *mut Imath_V3i64_t, v: *const Imath_V3i64_t) -> Exception;

pub fn Imath_3_0__Vec3_long___op_div_1(this_: *const Imath_V3i64_t, return_: *mut Imath_V3i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec3_long__length2(this_: *const Imath_V3i64_t, return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec3_long__baseTypeLowest(return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec3_long__baseTypeMax(return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec3_long__baseTypeSmallest(return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec3_long__baseTypeEpsilon(return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec3_long__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec3_float__index(this_: *mut Imath_V3f_t, return_: *mut *mut c_float, i: c_int) -> Exception;

pub fn Imath_3_0__Vec3_float__index_const(this_: *const Imath_V3f_t, return_: *mut *const c_float, i: c_int) -> Exception;

pub fn Imath_3_0__Vec3_float__ctor(this_: *mut Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float__ctor_1(this_: *mut Imath_V3f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec3_float__ctor_2(this_: *mut Imath_V3f_t, a: c_float, b: c_float, c: c_float) -> Exception;

pub fn Imath_3_0__Vec3_float__ctor_3(this_: *mut Imath_V3f_t, v: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float___assign(this_: *mut Imath_V3f_t, return_: *mut *const Imath_V3f_t, v: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float__dtor(this_: *mut Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float__getValue(this_: *mut Imath_V3f_t, return_: *mut *mut c_float) -> Exception;

pub fn Imath_3_0__Vec3_float__getValue_1(this_: *const Imath_V3f_t, return_: *mut *const c_float) -> Exception;

pub fn Imath_3_0__Vec3_float__equalWithAbsError(this_: *const Imath_V3f_t, return_: *mut bool, v: *const Imath_V3f_t, e: c_float) -> Exception;

pub fn Imath_3_0__Vec3_float__equalWithRelError(this_: *const Imath_V3f_t, return_: *mut bool, v: *const Imath_V3f_t, e: c_float) -> Exception;

pub fn Imath_3_0__Vec3_float__dot(this_: *const Imath_V3f_t, return_: *mut c_float, v: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float__cross(this_: *const Imath_V3f_t, return_: *mut Imath_V3f_t, v: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float___op_iadd(this_: *mut Imath_V3f_t, return_: *mut *const Imath_V3f_t, v: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float___op_add(this_: *const Imath_V3f_t, return_: *mut Imath_V3f_t, v: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float___op_isub(this_: *mut Imath_V3f_t, return_: *mut *const Imath_V3f_t, v: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float___op_sub(this_: *const Imath_V3f_t, return_: *mut Imath_V3f_t, v: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float___op_sub_1(this_: *const Imath_V3f_t, return_: *mut Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float__negate(this_: *mut Imath_V3f_t, return_: *mut *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float___op_imul(this_: *mut Imath_V3f_t, return_: *mut *const Imath_V3f_t, v: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float___op_imul_1(this_: *mut Imath_V3f_t, return_: *mut *const Imath_V3f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec3_float___op_mul(this_: *const Imath_V3f_t, return_: *mut Imath_V3f_t, v: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float___op_mul_1(this_: *const Imath_V3f_t, return_: *mut Imath_V3f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec3_float___op_idiv(this_: *mut Imath_V3f_t, return_: *mut *const Imath_V3f_t, v: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float___op_idiv_1(this_: *mut Imath_V3f_t, return_: *mut *const Imath_V3f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec3_float___op_div(this_: *const Imath_V3f_t, return_: *mut Imath_V3f_t, v: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float___op_div_1(this_: *const Imath_V3f_t, return_: *mut Imath_V3f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec3_float__length(this_: *const Imath_V3f_t, return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec3_float__length2(this_: *const Imath_V3f_t, return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec3_float__normalize(this_: *mut Imath_V3f_t, return_: *mut *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float__normalizeNonNull(this_: *mut Imath_V3f_t, return_: *mut *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float__normalized(this_: *const Imath_V3f_t, return_: *mut Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float__normalizedNonNull(this_: *const Imath_V3f_t, return_: *mut Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Vec3_float__baseTypeLowest(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec3_float__baseTypeMax(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec3_float__baseTypeSmallest(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec3_float__baseTypeEpsilon(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec3_float__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec3_double__index(this_: *mut Imath_V3d_t, return_: *mut *mut c_double, i: c_int) -> Exception;

pub fn Imath_3_0__Vec3_double__index_const(this_: *const Imath_V3d_t, return_: *mut *const c_double, i: c_int) -> Exception;

pub fn Imath_3_0__Vec3_double__ctor(this_: *mut Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double__ctor_1(this_: *mut Imath_V3d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec3_double__ctor_2(this_: *mut Imath_V3d_t, a: c_double, b: c_double, c: c_double) -> Exception;

pub fn Imath_3_0__Vec3_double__ctor_3(this_: *mut Imath_V3d_t, v: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double___assign(this_: *mut Imath_V3d_t, return_: *mut *const Imath_V3d_t, v: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double__dtor(this_: *mut Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double__getValue(this_: *mut Imath_V3d_t, return_: *mut *mut c_double) -> Exception;

pub fn Imath_3_0__Vec3_double__getValue_1(this_: *const Imath_V3d_t, return_: *mut *const c_double) -> Exception;

pub fn Imath_3_0__Vec3_double__equalWithAbsError(this_: *const Imath_V3d_t, return_: *mut bool, v: *const Imath_V3d_t, e: c_double) -> Exception;

pub fn Imath_3_0__Vec3_double__equalWithRelError(this_: *const Imath_V3d_t, return_: *mut bool, v: *const Imath_V3d_t, e: c_double) -> Exception;

pub fn Imath_3_0__Vec3_double__dot(this_: *const Imath_V3d_t, return_: *mut c_double, v: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double__cross(this_: *const Imath_V3d_t, return_: *mut Imath_V3d_t, v: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double___op_iadd(this_: *mut Imath_V3d_t, return_: *mut *const Imath_V3d_t, v: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double___op_add(this_: *const Imath_V3d_t, return_: *mut Imath_V3d_t, v: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double___op_isub(this_: *mut Imath_V3d_t, return_: *mut *const Imath_V3d_t, v: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double___op_sub(this_: *const Imath_V3d_t, return_: *mut Imath_V3d_t, v: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double___op_sub_1(this_: *const Imath_V3d_t, return_: *mut Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double__negate(this_: *mut Imath_V3d_t, return_: *mut *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double___op_imul(this_: *mut Imath_V3d_t, return_: *mut *const Imath_V3d_t, v: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double___op_imul_1(this_: *mut Imath_V3d_t, return_: *mut *const Imath_V3d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec3_double___op_mul(this_: *const Imath_V3d_t, return_: *mut Imath_V3d_t, v: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double___op_mul_1(this_: *const Imath_V3d_t, return_: *mut Imath_V3d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec3_double___op_idiv(this_: *mut Imath_V3d_t, return_: *mut *const Imath_V3d_t, v: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double___op_idiv_1(this_: *mut Imath_V3d_t, return_: *mut *const Imath_V3d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec3_double___op_div(this_: *const Imath_V3d_t, return_: *mut Imath_V3d_t, v: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double___op_div_1(this_: *const Imath_V3d_t, return_: *mut Imath_V3d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec3_double__length(this_: *const Imath_V3d_t, return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec3_double__length2(this_: *const Imath_V3d_t, return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec3_double__normalize(this_: *mut Imath_V3d_t, return_: *mut *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double__normalizeNonNull(this_: *mut Imath_V3d_t, return_: *mut *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double__normalized(this_: *const Imath_V3d_t, return_: *mut Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double__normalizedNonNull(this_: *const Imath_V3d_t, return_: *mut Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Vec3_double__baseTypeLowest(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec3_double__baseTypeMax(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec3_double__baseTypeSmallest(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec3_double__baseTypeEpsilon(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec3_double__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec4_short__index(this_: *mut Imath_V4s_t, return_: *mut *mut c_short, i: c_int) -> Exception;

pub fn Imath_3_0__Vec4_short__index_const(this_: *const Imath_V4s_t, return_: *mut *const c_short, i: c_int) -> Exception;

pub fn Imath_3_0__Vec4_short__ctor(this_: *mut Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short__ctor_1(this_: *mut Imath_V4s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec4_short__ctor_2(this_: *mut Imath_V4s_t, a: c_short, b: c_short, c: c_short, d: c_short) -> Exception;

pub fn Imath_3_0__Vec4_short__ctor_3(this_: *mut Imath_V4s_t, v: *const Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short___assign(this_: *mut Imath_V4s_t, return_: *mut *const Imath_V4s_t, v: *const Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short__dtor(this_: *mut Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short__equalWithAbsError(this_: *const Imath_V4s_t, return_: *mut bool, v: *const Imath_V4s_t, e: c_short) -> Exception;

pub fn Imath_3_0__Vec4_short__equalWithRelError(this_: *const Imath_V4s_t, return_: *mut bool, v: *const Imath_V4s_t, e: c_short) -> Exception;

pub fn Imath_3_0__Vec4_short__dot(this_: *const Imath_V4s_t, return_: *mut c_short, v: *const Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short___op_add(this_: *const Imath_V4s_t, return_: *mut Imath_V4s_t, v: *const Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short___op_isub(this_: *mut Imath_V4s_t, return_: *mut *const Imath_V4s_t, v: *const Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short___op_sub(this_: *const Imath_V4s_t, return_: *mut Imath_V4s_t, v: *const Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short___op_sub_1(this_: *const Imath_V4s_t, return_: *mut Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short__negate(this_: *mut Imath_V4s_t, return_: *mut *const Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short___op_imul(this_: *mut Imath_V4s_t, return_: *mut *const Imath_V4s_t, v: *const Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short___op_imul_1(this_: *mut Imath_V4s_t, return_: *mut *const Imath_V4s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec4_short___op_mul(this_: *const Imath_V4s_t, return_: *mut Imath_V4s_t, v: *const Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short___op_mul_1(this_: *const Imath_V4s_t, return_: *mut Imath_V4s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec4_short___op_idiv(this_: *mut Imath_V4s_t, return_: *mut *const Imath_V4s_t, v: *const Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short___op_idiv_1(this_: *mut Imath_V4s_t, return_: *mut *const Imath_V4s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec4_short___op_div(this_: *const Imath_V4s_t, return_: *mut Imath_V4s_t, v: *const Imath_V4s_t) -> Exception;

pub fn Imath_3_0__Vec4_short___op_div_1(this_: *const Imath_V4s_t, return_: *mut Imath_V4s_t, a: c_short) -> Exception;

pub fn Imath_3_0__Vec4_short__length2(this_: *const Imath_V4s_t, return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec4_short__baseTypeLowest(return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec4_short__baseTypeMax(return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec4_short__baseTypeSmallest(return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec4_short__baseTypeEpsilon(return_: *mut c_short) -> Exception;

pub fn Imath_3_0__Vec4_short__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec4_int__index(this_: *mut Imath_Vec4_t, return_: *mut *mut c_int, i: c_int) -> Exception;

pub fn Imath_3_0__Vec4_int__index_const(this_: *const Imath_Vec4_t, return_: *mut *const c_int, i: c_int) -> Exception;

pub fn Imath_3_0__Vec4_int__ctor(this_: *mut Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int__ctor_1(this_: *mut Imath_Vec4_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec4_int__ctor_2(this_: *mut Imath_Vec4_t, a: c_int, b: c_int, c: c_int, d: c_int) -> Exception;

pub fn Imath_3_0__Vec4_int__ctor_3(this_: *mut Imath_Vec4_t, v: *const Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int___assign(this_: *mut Imath_Vec4_t, return_: *mut *const Imath_Vec4_t, v: *const Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int__dtor(this_: *mut Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int__equalWithAbsError(this_: *const Imath_Vec4_t, return_: *mut bool, v: *const Imath_Vec4_t, e: c_int) -> Exception;

pub fn Imath_3_0__Vec4_int__equalWithRelError(this_: *const Imath_Vec4_t, return_: *mut bool, v: *const Imath_Vec4_t, e: c_int) -> Exception;

pub fn Imath_3_0__Vec4_int__dot(this_: *const Imath_Vec4_t, return_: *mut c_int, v: *const Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int___op_add(this_: *const Imath_Vec4_t, return_: *mut Imath_Vec4_t, v: *const Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int___op_isub(this_: *mut Imath_Vec4_t, return_: *mut *const Imath_Vec4_t, v: *const Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int___op_sub(this_: *const Imath_Vec4_t, return_: *mut Imath_Vec4_t, v: *const Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int___op_sub_1(this_: *const Imath_Vec4_t, return_: *mut Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int__negate(this_: *mut Imath_Vec4_t, return_: *mut *const Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int___op_imul(this_: *mut Imath_Vec4_t, return_: *mut *const Imath_Vec4_t, v: *const Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int___op_imul_1(this_: *mut Imath_Vec4_t, return_: *mut *const Imath_Vec4_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec4_int___op_mul(this_: *const Imath_Vec4_t, return_: *mut Imath_Vec4_t, v: *const Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int___op_mul_1(this_: *const Imath_Vec4_t, return_: *mut Imath_Vec4_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec4_int___op_idiv(this_: *mut Imath_Vec4_t, return_: *mut *const Imath_Vec4_t, v: *const Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int___op_idiv_1(this_: *mut Imath_Vec4_t, return_: *mut *const Imath_Vec4_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec4_int___op_div(this_: *const Imath_Vec4_t, return_: *mut Imath_Vec4_t, v: *const Imath_Vec4_t) -> Exception;

pub fn Imath_3_0__Vec4_int___op_div_1(this_: *const Imath_Vec4_t, return_: *mut Imath_Vec4_t, a: c_int) -> Exception;

pub fn Imath_3_0__Vec4_int__length2(this_: *const Imath_Vec4_t, return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec4_int__baseTypeLowest(return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec4_int__baseTypeMax(return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec4_int__baseTypeSmallest(return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec4_int__baseTypeEpsilon(return_: *mut c_int) -> Exception;

pub fn Imath_3_0__Vec4_int__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec4_long__index(this_: *mut Imath_V4i64_t, return_: *mut *mut c_long, i: c_int) -> Exception;

pub fn Imath_3_0__Vec4_long__index_const(this_: *const Imath_V4i64_t, return_: *mut *const c_long, i: c_int) -> Exception;

pub fn Imath_3_0__Vec4_long__ctor(this_: *mut Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long__ctor_1(this_: *mut Imath_V4i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec4_long__ctor_2(this_: *mut Imath_V4i64_t, a: c_long, b: c_long, c: c_long, d: c_long) -> Exception;

pub fn Imath_3_0__Vec4_long__copy(this_: *mut Imath_V4i64_t, v: *const Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long___assign(this_: *mut Imath_V4i64_t, return_: *mut *const Imath_V4i64_t, v: *const Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long__dtor(this_: *mut Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long__equalWithAbsError(this_: *const Imath_V4i64_t, return_: *mut bool, v: *const Imath_V4i64_t, e: c_long) -> Exception;

pub fn Imath_3_0__Vec4_long__equalWithRelError(this_: *const Imath_V4i64_t, return_: *mut bool, v: *const Imath_V4i64_t, e: c_long) -> Exception;

pub fn Imath_3_0__Vec4_long__dot(this_: *const Imath_V4i64_t, return_: *mut c_long, v: *const Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long___op_add(this_: *const Imath_V4i64_t, return_: *mut Imath_V4i64_t, v: *const Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long___op_isub(this_: *mut Imath_V4i64_t, return_: *mut *const Imath_V4i64_t, v: *const Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long___op_sub(this_: *const Imath_V4i64_t, return_: *mut Imath_V4i64_t, v: *const Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long___op_sub_1(this_: *const Imath_V4i64_t, return_: *mut Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long__negate(this_: *mut Imath_V4i64_t, return_: *mut *const Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long___op_imul(this_: *mut Imath_V4i64_t, return_: *mut *const Imath_V4i64_t, v: *const Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long___op_imul_1(this_: *mut Imath_V4i64_t, return_: *mut *const Imath_V4i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec4_long___op_mul(this_: *const Imath_V4i64_t, return_: *mut Imath_V4i64_t, v: *const Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long___op_mul_1(this_: *const Imath_V4i64_t, return_: *mut Imath_V4i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec4_long___op_idiv(this_: *mut Imath_V4i64_t, return_: *mut *const Imath_V4i64_t, v: *const Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long___op_idiv_1(this_: *mut Imath_V4i64_t, return_: *mut *const Imath_V4i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec4_long___op_div(this_: *const Imath_V4i64_t, return_: *mut Imath_V4i64_t, v: *const Imath_V4i64_t) -> Exception;

pub fn Imath_3_0__Vec4_long___op_div_1(this_: *const Imath_V4i64_t, return_: *mut Imath_V4i64_t, a: c_long) -> Exception;

pub fn Imath_3_0__Vec4_long__length2(this_: *const Imath_V4i64_t, return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec4_long__baseTypeLowest(return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec4_long__baseTypeMax(return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec4_long__baseTypeSmallest(return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec4_long__baseTypeEpsilon(return_: *mut c_long) -> Exception;

pub fn Imath_3_0__Vec4_long__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec4_float__index(this_: *mut Imath_V4f_t, return_: *mut *mut c_float, i: c_int) -> Exception;

pub fn Imath_3_0__Vec4_float__index_const(this_: *const Imath_V4f_t, return_: *mut *const c_float, i: c_int) -> Exception;

pub fn Imath_3_0__Vec4_float__ctor(this_: *mut Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float__ctor_1(this_: *mut Imath_V4f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec4_float__ctor_2(this_: *mut Imath_V4f_t, a: c_float, b: c_float, c: c_float, d: c_float) -> Exception;

pub fn Imath_3_0__Vec4_float__ctor_3(this_: *mut Imath_V4f_t, v: *const Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float___assign(this_: *mut Imath_V4f_t, return_: *mut *const Imath_V4f_t, v: *const Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float__dtor(this_: *mut Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float__equalWithAbsError(this_: *const Imath_V4f_t, return_: *mut bool, v: *const Imath_V4f_t, e: c_float) -> Exception;

pub fn Imath_3_0__Vec4_float__equalWithRelError(this_: *const Imath_V4f_t, return_: *mut bool, v: *const Imath_V4f_t, e: c_float) -> Exception;

pub fn Imath_3_0__Vec4_float__dot(this_: *const Imath_V4f_t, return_: *mut c_float, v: *const Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float___op_add(this_: *const Imath_V4f_t, return_: *mut Imath_V4f_t, v: *const Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float___op_isub(this_: *mut Imath_V4f_t, return_: *mut *const Imath_V4f_t, v: *const Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float___op_sub(this_: *const Imath_V4f_t, return_: *mut Imath_V4f_t, v: *const Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float___op_sub_1(this_: *const Imath_V4f_t, return_: *mut Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float__negate(this_: *mut Imath_V4f_t, return_: *mut *const Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float___op_imul(this_: *mut Imath_V4f_t, return_: *mut *const Imath_V4f_t, v: *const Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float___op_imul_1(this_: *mut Imath_V4f_t, return_: *mut *const Imath_V4f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec4_float___op_mul(this_: *const Imath_V4f_t, return_: *mut Imath_V4f_t, v: *const Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float___op_mul_1(this_: *const Imath_V4f_t, return_: *mut Imath_V4f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec4_float___op_idiv(this_: *mut Imath_V4f_t, return_: *mut *const Imath_V4f_t, v: *const Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float___op_idiv_1(this_: *mut Imath_V4f_t, return_: *mut *const Imath_V4f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec4_float___op_div(this_: *const Imath_V4f_t, return_: *mut Imath_V4f_t, v: *const Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float___op_div_1(this_: *const Imath_V4f_t, return_: *mut Imath_V4f_t, a: c_float) -> Exception;

pub fn Imath_3_0__Vec4_float__length(this_: *const Imath_V4f_t, return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec4_float__length2(this_: *const Imath_V4f_t, return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec4_float__normalize(this_: *mut Imath_V4f_t, return_: *mut *const Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float__normalizeNonNull(this_: *mut Imath_V4f_t, return_: *mut *const Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float__normalized(this_: *const Imath_V4f_t, return_: *mut Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float__normalizedNonNull(this_: *const Imath_V4f_t, return_: *mut Imath_V4f_t) -> Exception;

pub fn Imath_3_0__Vec4_float__baseTypeLowest(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec4_float__baseTypeMax(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec4_float__baseTypeSmallest(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec4_float__baseTypeEpsilon(return_: *mut c_float) -> Exception;

pub fn Imath_3_0__Vec4_float__dimensions(return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Vec4_double__index(this_: *mut Imath_V4d_t, return_: *mut *mut c_double, i: c_int) -> Exception;

pub fn Imath_3_0__Vec4_double__index_const(this_: *const Imath_V4d_t, return_: *mut *const c_double, i: c_int) -> Exception;

pub fn Imath_3_0__Vec4_double__ctor(this_: *mut Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double__ctor_1(this_: *mut Imath_V4d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec4_double__ctor_2(this_: *mut Imath_V4d_t, a: c_double, b: c_double, c: c_double, d: c_double) -> Exception;

pub fn Imath_3_0__Vec4_double__ctor_3(this_: *mut Imath_V4d_t, v: *const Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double___assign(this_: *mut Imath_V4d_t, return_: *mut *const Imath_V4d_t, v: *const Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double__dtor(this_: *mut Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double__equalWithAbsError(this_: *const Imath_V4d_t, return_: *mut bool, v: *const Imath_V4d_t, e: c_double) -> Exception;

pub fn Imath_3_0__Vec4_double__equalWithRelError(this_: *const Imath_V4d_t, return_: *mut bool, v: *const Imath_V4d_t, e: c_double) -> Exception;

pub fn Imath_3_0__Vec4_double__dot(this_: *const Imath_V4d_t, return_: *mut c_double, v: *const Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double___op_add(this_: *const Imath_V4d_t, return_: *mut Imath_V4d_t, v: *const Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double___op_isub(this_: *mut Imath_V4d_t, return_: *mut *const Imath_V4d_t, v: *const Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double___op_sub(this_: *const Imath_V4d_t, return_: *mut Imath_V4d_t, v: *const Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double___op_sub_1(this_: *const Imath_V4d_t, return_: *mut Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double__negate(this_: *mut Imath_V4d_t, return_: *mut *const Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double___op_imul(this_: *mut Imath_V4d_t, return_: *mut *const Imath_V4d_t, v: *const Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double___op_imul_1(this_: *mut Imath_V4d_t, return_: *mut *const Imath_V4d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec4_double___op_mul(this_: *const Imath_V4d_t, return_: *mut Imath_V4d_t, v: *const Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double___op_mul_1(this_: *const Imath_V4d_t, return_: *mut Imath_V4d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec4_double___op_idiv(this_: *mut Imath_V4d_t, return_: *mut *const Imath_V4d_t, v: *const Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double___op_idiv_1(this_: *mut Imath_V4d_t, return_: *mut *const Imath_V4d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec4_double___op_div(this_: *const Imath_V4d_t, return_: *mut Imath_V4d_t, v: *const Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double___op_div_1(this_: *const Imath_V4d_t, return_: *mut Imath_V4d_t, a: c_double) -> Exception;

pub fn Imath_3_0__Vec4_double__length(this_: *const Imath_V4d_t, return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec4_double__length2(this_: *const Imath_V4d_t, return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec4_double__normalize(this_: *mut Imath_V4d_t, return_: *mut *const Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double__normalizeNonNull(this_: *mut Imath_V4d_t, return_: *mut *const Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double__normalized(this_: *const Imath_V4d_t, return_: *mut Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double__normalizedNonNull(this_: *const Imath_V4d_t, return_: *mut Imath_V4d_t) -> Exception;

pub fn Imath_3_0__Vec4_double__baseTypeLowest(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec4_double__baseTypeMax(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec4_double__baseTypeSmallest(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec4_double__baseTypeEpsilon(return_: *mut c_double) -> Exception;

pub fn Imath_3_0__Vec4_double__dimensions(return_: *mut c_uint) -> Exception;


} // extern "C"

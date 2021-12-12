#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C, align(2))]
#[derive(Clone)]
pub struct Imath_3_0__Box_Imath_3_0__Vec2_short___t {
    pub min: Imath_V2s_t,
    pub max: Imath_V2s_t,
}

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imath_3_0__Box_Imath_3_0__Vec2_int___t {
    pub min: Imath_V2i_t,
    pub max: Imath_V2i_t,
}

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imath_3_0__Box_Imath_3_0__Vec2_float___t {
    pub min: Imath_V2f_t,
    pub max: Imath_V2f_t,
}

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imath_3_0__Box_Imath_3_0__Vec2_double___t {
    pub min: Imath_V2d_t,
    pub max: Imath_V2d_t,
}

#[repr(C, align(2))]
#[derive(Clone)]
pub struct Imath_3_0__Box_Imath_3_0__Vec3_short___t {
    pub min: Imath_V3s_t,
    pub max: Imath_V3s_t,
}

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imath_3_0__Box_Imath_3_0__Vec3_int___t {
    pub min: Imath_V3i_t,
    pub max: Imath_V3i_t,
}

#[repr(C, align(4))]
#[derive(Clone)]
pub struct Imath_3_0__Box_Imath_3_0__Vec3_float___t {
    pub min: Imath_V3f_t,
    pub max: Imath_V3f_t,
}

#[repr(C, align(8))]
#[derive(Clone)]
pub struct Imath_3_0__Box_Imath_3_0__Vec3_double___t {
    pub min: Imath_V3d_t,
    pub max: Imath_V3d_t,
}



extern "C" {

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___ctor(this_: *mut Imath_Box2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___ctor_1(this_: *mut Imath_Box2s_t, point: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___ctor_2(this_: *mut Imath_Box2s_t, min_v: *const Imath_V2s_t, max_v: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short____eq(this_: *const Imath_Box2s_t, return_: *mut bool, src: *const Imath_Box2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short____ne(this_: *const Imath_Box2s_t, return_: *mut bool, src: *const Imath_Box2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___makeEmpty(this_: *mut Imath_Box2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___extendBy(this_: *mut Imath_Box2s_t, point: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___extendBy_1(this_: *mut Imath_Box2s_t, box_: *const Imath_Box2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___makeInfinite(this_: *mut Imath_Box2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___size(this_: *const Imath_Box2s_t, return_: *mut Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___center(this_: *const Imath_Box2s_t, return_: *mut Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___intersects(this_: *const Imath_Box2s_t, return_: *mut bool, point: *const Imath_V2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___intersects_1(this_: *const Imath_Box2s_t, return_: *mut bool, box_: *const Imath_Box2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___majorAxis(this_: *const Imath_Box2s_t, return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___isEmpty(this_: *const Imath_Box2s_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___hasVolume(this_: *const Imath_Box2s_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___isInfinite(this_: *const Imath_Box2s_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___copy(this_: *mut Imath_Box2s_t, rhs: *const Imath_Box2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___move(this_: *mut Imath_Box2s_t, rhs: *mut Imath_Box2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_short___dtor(this_: *mut Imath_Box2s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___ctor(this_: *mut Imath_Box2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___ctor_1(this_: *mut Imath_Box2i_t, point: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___ctor_2(this_: *mut Imath_Box2i_t, min_v: *const Imath_V2i_t, max_v: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int____eq(this_: *const Imath_Box2i_t, return_: *mut bool, src: *const Imath_Box2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int____ne(this_: *const Imath_Box2i_t, return_: *mut bool, src: *const Imath_Box2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___makeEmpty(this_: *mut Imath_Box2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___extendBy(this_: *mut Imath_Box2i_t, point: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___extendBy_1(this_: *mut Imath_Box2i_t, box_: *const Imath_Box2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___makeInfinite(this_: *mut Imath_Box2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___size(this_: *const Imath_Box2i_t, return_: *mut Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___center(this_: *const Imath_Box2i_t, return_: *mut Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___intersects(this_: *const Imath_Box2i_t, return_: *mut bool, point: *const Imath_V2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___intersects_1(this_: *const Imath_Box2i_t, return_: *mut bool, box_: *const Imath_Box2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___majorAxis(this_: *const Imath_Box2i_t, return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___isEmpty(this_: *const Imath_Box2i_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___hasVolume(this_: *const Imath_Box2i_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___isInfinite(this_: *const Imath_Box2i_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___copy(this_: *mut Imath_Box2i_t, rhs: *const Imath_Box2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___move(this_: *mut Imath_Box2i_t, rhs: *mut Imath_Box2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_int___dtor(this_: *mut Imath_Box2i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___ctor(this_: *mut Imath_Box2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___ctor_1(this_: *mut Imath_Box2f_t, point: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___ctor_2(this_: *mut Imath_Box2f_t, min_v: *const Imath_V2f_t, max_v: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float____eq(this_: *const Imath_Box2f_t, return_: *mut bool, src: *const Imath_Box2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float____ne(this_: *const Imath_Box2f_t, return_: *mut bool, src: *const Imath_Box2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___makeEmpty(this_: *mut Imath_Box2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___extendBy(this_: *mut Imath_Box2f_t, point: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___extendBy_1(this_: *mut Imath_Box2f_t, box_: *const Imath_Box2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___makeInfinite(this_: *mut Imath_Box2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___size(this_: *const Imath_Box2f_t, return_: *mut Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___center(this_: *const Imath_Box2f_t, return_: *mut Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___intersects(this_: *const Imath_Box2f_t, return_: *mut bool, point: *const Imath_V2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___intersects_1(this_: *const Imath_Box2f_t, return_: *mut bool, box_: *const Imath_Box2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___majorAxis(this_: *const Imath_Box2f_t, return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___isEmpty(this_: *const Imath_Box2f_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___hasVolume(this_: *const Imath_Box2f_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___isInfinite(this_: *const Imath_Box2f_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___copy(this_: *mut Imath_Box2f_t, rhs: *const Imath_Box2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___move(this_: *mut Imath_Box2f_t, rhs: *mut Imath_Box2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_float___dtor(this_: *mut Imath_Box2f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___ctor(this_: *mut Imath_Box2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___ctor_1(this_: *mut Imath_Box2d_t, point: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___ctor_2(this_: *mut Imath_Box2d_t, min_v: *const Imath_V2d_t, max_v: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double____eq(this_: *const Imath_Box2d_t, return_: *mut bool, src: *const Imath_Box2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double____ne(this_: *const Imath_Box2d_t, return_: *mut bool, src: *const Imath_Box2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___makeEmpty(this_: *mut Imath_Box2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___extendBy(this_: *mut Imath_Box2d_t, point: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___extendBy_1(this_: *mut Imath_Box2d_t, box_: *const Imath_Box2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___makeInfinite(this_: *mut Imath_Box2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___size(this_: *const Imath_Box2d_t, return_: *mut Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___center(this_: *const Imath_Box2d_t, return_: *mut Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___intersects(this_: *const Imath_Box2d_t, return_: *mut bool, point: *const Imath_V2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___intersects_1(this_: *const Imath_Box2d_t, return_: *mut bool, box_: *const Imath_Box2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___majorAxis(this_: *const Imath_Box2d_t, return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___isEmpty(this_: *const Imath_Box2d_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___hasVolume(this_: *const Imath_Box2d_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___isInfinite(this_: *const Imath_Box2d_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___copy(this_: *mut Imath_Box2d_t, rhs: *const Imath_Box2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___move(this_: *mut Imath_Box2d_t, rhs: *mut Imath_Box2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec2_double___dtor(this_: *mut Imath_Box2d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___ctor(this_: *mut Imath_Box3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___ctor_1(this_: *mut Imath_Box3s_t, point: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___ctor_2(this_: *mut Imath_Box3s_t, min_v: *const Imath_V3s_t, max_v: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short____eq(this_: *const Imath_Box3s_t, return_: *mut bool, src: *const Imath_Box3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short____ne(this_: *const Imath_Box3s_t, return_: *mut bool, src: *const Imath_Box3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___makeEmpty(this_: *mut Imath_Box3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___extendBy(this_: *mut Imath_Box3s_t, point: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___extendBy_1(this_: *mut Imath_Box3s_t, box_: *const Imath_Box3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___makeInfinite(this_: *mut Imath_Box3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___size(this_: *const Imath_Box3s_t, return_: *mut Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___center(this_: *const Imath_Box3s_t, return_: *mut Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___intersects(this_: *const Imath_Box3s_t, return_: *mut bool, point: *const Imath_V3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___intersects_1(this_: *const Imath_Box3s_t, return_: *mut bool, box_: *const Imath_Box3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___majorAxis(this_: *const Imath_Box3s_t, return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___isEmpty(this_: *const Imath_Box3s_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___hasVolume(this_: *const Imath_Box3s_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___isInfinite(this_: *const Imath_Box3s_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___copy(this_: *mut Imath_Box3s_t, rhs: *const Imath_Box3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___move(this_: *mut Imath_Box3s_t, rhs: *mut Imath_Box3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_short___dtor(this_: *mut Imath_Box3s_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___ctor(this_: *mut Imath_Box3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___ctor_1(this_: *mut Imath_Box3i_t, point: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___ctor_2(this_: *mut Imath_Box3i_t, min_v: *const Imath_V3i_t, max_v: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int____eq(this_: *const Imath_Box3i_t, return_: *mut bool, src: *const Imath_Box3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int____ne(this_: *const Imath_Box3i_t, return_: *mut bool, src: *const Imath_Box3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___makeEmpty(this_: *mut Imath_Box3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___extendBy(this_: *mut Imath_Box3i_t, point: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___extendBy_1(this_: *mut Imath_Box3i_t, box_: *const Imath_Box3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___makeInfinite(this_: *mut Imath_Box3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___size(this_: *const Imath_Box3i_t, return_: *mut Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___center(this_: *const Imath_Box3i_t, return_: *mut Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___intersects(this_: *const Imath_Box3i_t, return_: *mut bool, point: *const Imath_V3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___intersects_1(this_: *const Imath_Box3i_t, return_: *mut bool, box_: *const Imath_Box3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___majorAxis(this_: *const Imath_Box3i_t, return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___isEmpty(this_: *const Imath_Box3i_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___hasVolume(this_: *const Imath_Box3i_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___isInfinite(this_: *const Imath_Box3i_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___copy(this_: *mut Imath_Box3i_t, rhs: *const Imath_Box3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___move(this_: *mut Imath_Box3i_t, rhs: *mut Imath_Box3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_int___dtor(this_: *mut Imath_Box3i_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___ctor(this_: *mut Imath_Box3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___ctor_1(this_: *mut Imath_Box3f_t, point: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___ctor_2(this_: *mut Imath_Box3f_t, min_v: *const Imath_V3f_t, max_v: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float____eq(this_: *const Imath_Box3f_t, return_: *mut bool, src: *const Imath_Box3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float____ne(this_: *const Imath_Box3f_t, return_: *mut bool, src: *const Imath_Box3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___makeEmpty(this_: *mut Imath_Box3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___extendBy(this_: *mut Imath_Box3f_t, point: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___extendBy_1(this_: *mut Imath_Box3f_t, box_: *const Imath_Box3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___makeInfinite(this_: *mut Imath_Box3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___size(this_: *const Imath_Box3f_t, return_: *mut Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___center(this_: *const Imath_Box3f_t, return_: *mut Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___intersects(this_: *const Imath_Box3f_t, return_: *mut bool, point: *const Imath_V3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___intersects_1(this_: *const Imath_Box3f_t, return_: *mut bool, box_: *const Imath_Box3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___majorAxis(this_: *const Imath_Box3f_t, return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___isEmpty(this_: *const Imath_Box3f_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___hasVolume(this_: *const Imath_Box3f_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___isInfinite(this_: *const Imath_Box3f_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___copy(this_: *mut Imath_Box3f_t, rhs: *const Imath_Box3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___move(this_: *mut Imath_Box3f_t, rhs: *mut Imath_Box3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_float___dtor(this_: *mut Imath_Box3f_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___ctor(this_: *mut Imath_Box3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___ctor_1(this_: *mut Imath_Box3d_t, point: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___ctor_2(this_: *mut Imath_Box3d_t, min_v: *const Imath_V3d_t, max_v: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double____eq(this_: *const Imath_Box3d_t, return_: *mut bool, src: *const Imath_Box3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double____ne(this_: *const Imath_Box3d_t, return_: *mut bool, src: *const Imath_Box3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___makeEmpty(this_: *mut Imath_Box3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___extendBy(this_: *mut Imath_Box3d_t, point: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___extendBy_1(this_: *mut Imath_Box3d_t, box_: *const Imath_Box3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___makeInfinite(this_: *mut Imath_Box3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___size(this_: *const Imath_Box3d_t, return_: *mut Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___center(this_: *const Imath_Box3d_t, return_: *mut Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___intersects(this_: *const Imath_Box3d_t, return_: *mut bool, point: *const Imath_V3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___intersects_1(this_: *const Imath_Box3d_t, return_: *mut bool, box_: *const Imath_Box3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___majorAxis(this_: *const Imath_Box3d_t, return_: *mut c_uint) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___isEmpty(this_: *const Imath_Box3d_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___hasVolume(this_: *const Imath_Box3d_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___isInfinite(this_: *const Imath_Box3d_t, return_: *mut bool) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___copy(this_: *mut Imath_Box3d_t, rhs: *const Imath_Box3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___move(this_: *mut Imath_Box3d_t, rhs: *mut Imath_Box3d_t) -> Exception;

pub fn Imath_3_0__Box_Imath_3_0__Vec3_double___dtor(this_: *mut Imath_Box3d_t) -> Exception;


} // extern "C"

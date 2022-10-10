#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;

#[repr(C)]
pub struct Imf_3_0__Attribute_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__OpaqueAttribute_t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_int__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_float__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_double__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imath__Box2i__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imath__Box2f__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imf_3_0__Compression__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imf_3_0__Envmap__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imf_3_0__StringVector__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_std__string__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imath__M33f__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imath__M33d__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imath__M44f__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imath__M44d__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imf_3_0__Rational__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imath__V2i__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imath__V2f__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imath__V2d__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imath__V3i__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imath__V3f__t {
    _unused: [u8; 0],
}
#[repr(C)]
pub struct Imf_3_0__TypedAttribute_Imath__V3d__t {
    _unused: [u8; 0],
}


extern "C" {

pub fn Imf_3_0__Attribute_dtor(this_: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__Attribute_typeName(this_: *const Imf_Attribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__Attribute_copy(this_: *const Imf_Attribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__Attribute_writeValueTo(this_: *const Imf_Attribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__Attribute_readValueFrom(this_: *mut Imf_Attribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__Attribute_copyValueFrom(this_: *mut Imf_Attribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__Attribute_newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__Attribute_knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__Attribute__assign(this_: *mut Imf_Attribute_t, return_: *mut *mut Imf_Attribute_t, rhs: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__OpaqueAttribute_typeName(this_: *const Imf_OpaqueAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__OpaqueAttribute_copy(this_: *const Imf_OpaqueAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__OpaqueAttribute_writeValueTo(this_: *const Imf_OpaqueAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__OpaqueAttribute_readValueFrom(this_: *mut Imf_OpaqueAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__OpaqueAttribute_copyValueFrom(this_: *mut Imf_OpaqueAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__OpaqueAttribute_newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__OpaqueAttribute_knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__OpaqueAttribute_from_typeName(this_: *mut *mut Imf_OpaqueAttribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__OpaqueAttribute_copy_1(this_: *mut *mut Imf_OpaqueAttribute_t, rhs: *const Imf_OpaqueAttribute_t) -> Exception;

pub fn Imf_3_0__OpaqueAttribute_dtor(this_: *mut Imf_OpaqueAttribute_t) -> Exception;

pub fn Imf_3_0__OpaqueAttribute_dataSize(this_: *const Imf_OpaqueAttribute_t, return_: *mut c_int) -> Exception;

pub fn Imf_3_0__OpaqueAttribute_data(this_: *const Imf_OpaqueAttribute_t, return_: *mut *const Imf_ArrayChar_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__typeName(this_: *const Imf_IntAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__copy(this_: *const Imf_IntAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__writeValueTo(this_: *const Imf_IntAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__readValueFrom(this_: *mut Imf_IntAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__copyValueFrom(this_: *mut Imf_IntAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__ctor(this_: *mut *mut Imf_IntAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__from_value(this_: *mut *mut Imf_IntAttribute_t, value: *const c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__ctor_copy(this_: *mut *mut Imf_IntAttribute_t, other: *const Imf_IntAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__dtor(this_: *mut Imf_IntAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__assign(this_: *mut Imf_IntAttribute_t, return_: *mut *mut Imf_IntAttribute_t, other: *const Imf_IntAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__value(this_: *mut Imf_IntAttribute_t, return_: *mut *mut c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__value_const(this_: *const Imf_IntAttribute_t, return_: *mut *const c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__cast_ptr(return_: *mut *mut Imf_IntAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__cast_ptr_const(return_: *mut *const Imf_IntAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__cast(return_: *mut *mut Imf_IntAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__cast_const(return_: *mut *const Imf_IntAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_int__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_int__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_float__typeName(this_: *const Imf_FloatAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__copy(this_: *const Imf_FloatAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__writeValueTo(this_: *const Imf_FloatAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__readValueFrom(this_: *mut Imf_FloatAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__copyValueFrom(this_: *mut Imf_FloatAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__ctor(this_: *mut *mut Imf_FloatAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__from_value(this_: *mut *mut Imf_FloatAttribute_t, value: *const c_float) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__ctor_copy(this_: *mut *mut Imf_FloatAttribute_t, other: *const Imf_FloatAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__dtor(this_: *mut Imf_FloatAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__assign(this_: *mut Imf_FloatAttribute_t, return_: *mut *mut Imf_FloatAttribute_t, other: *const Imf_FloatAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__value(this_: *mut Imf_FloatAttribute_t, return_: *mut *mut c_float) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__value_const(this_: *const Imf_FloatAttribute_t, return_: *mut *const c_float) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__cast_ptr(return_: *mut *mut Imf_FloatAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__cast_ptr_const(return_: *mut *const Imf_FloatAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__cast(return_: *mut *mut Imf_FloatAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__cast_const(return_: *mut *const Imf_FloatAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_float__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_float__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_double__typeName(this_: *const Imf_DoubleAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__copy(this_: *const Imf_DoubleAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__writeValueTo(this_: *const Imf_DoubleAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__readValueFrom(this_: *mut Imf_DoubleAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__copyValueFrom(this_: *mut Imf_DoubleAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__ctor(this_: *mut *mut Imf_DoubleAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__from_value(this_: *mut *mut Imf_DoubleAttribute_t, value: *const c_double) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__ctor_copy(this_: *mut *mut Imf_DoubleAttribute_t, other: *const Imf_DoubleAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__dtor(this_: *mut Imf_DoubleAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__assign(this_: *mut Imf_DoubleAttribute_t, return_: *mut *mut Imf_DoubleAttribute_t, other: *const Imf_DoubleAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__value(this_: *mut Imf_DoubleAttribute_t, return_: *mut *mut c_double) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__value_const(this_: *const Imf_DoubleAttribute_t, return_: *mut *const c_double) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__cast_ptr(return_: *mut *mut Imf_DoubleAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__cast_ptr_const(return_: *mut *const Imf_DoubleAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__cast(return_: *mut *mut Imf_DoubleAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__cast_const(return_: *mut *const Imf_DoubleAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_double__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_double__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__typeName(this_: *const Imf_Box2iAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__copy(this_: *const Imf_Box2iAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__writeValueTo(this_: *const Imf_Box2iAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__readValueFrom(this_: *mut Imf_Box2iAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__copyValueFrom(this_: *mut Imf_Box2iAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__ctor(this_: *mut *mut Imf_Box2iAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__from_value(this_: *mut *mut Imf_Box2iAttribute_t, value: *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__ctor_copy(this_: *mut *mut Imf_Box2iAttribute_t, other: *const Imf_Box2iAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__dtor(this_: *mut Imf_Box2iAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__assign(this_: *mut Imf_Box2iAttribute_t, return_: *mut *mut Imf_Box2iAttribute_t, other: *const Imf_Box2iAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__value(this_: *mut Imf_Box2iAttribute_t, return_: *mut *mut Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__value_const(this_: *const Imf_Box2iAttribute_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__cast_ptr(return_: *mut *mut Imf_Box2iAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__cast_ptr_const(return_: *mut *const Imf_Box2iAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__cast(return_: *mut *mut Imf_Box2iAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__cast_const(return_: *mut *const Imf_Box2iAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2i__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__typeName(this_: *const Imf_Box2fAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__copy(this_: *const Imf_Box2fAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__writeValueTo(this_: *const Imf_Box2fAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__readValueFrom(this_: *mut Imf_Box2fAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__copyValueFrom(this_: *mut Imf_Box2fAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__ctor(this_: *mut *mut Imf_Box2fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__from_value(this_: *mut *mut Imf_Box2fAttribute_t, value: *const Imath_Box2f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__ctor_copy(this_: *mut *mut Imf_Box2fAttribute_t, other: *const Imf_Box2fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__dtor(this_: *mut Imf_Box2fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__assign(this_: *mut Imf_Box2fAttribute_t, return_: *mut *mut Imf_Box2fAttribute_t, other: *const Imf_Box2fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__value(this_: *mut Imf_Box2fAttribute_t, return_: *mut *mut Imath_Box2f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__value_const(this_: *const Imf_Box2fAttribute_t, return_: *mut *const Imath_Box2f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__cast_ptr(return_: *mut *mut Imf_Box2fAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__cast_ptr_const(return_: *mut *const Imf_Box2fAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__cast(return_: *mut *mut Imf_Box2fAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__cast_const(return_: *mut *const Imf_Box2fAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__Box2f__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__typeName(this_: *const Imf_ChannelListAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__copy(this_: *const Imf_ChannelListAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__writeValueTo(this_: *const Imf_ChannelListAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__readValueFrom(this_: *mut Imf_ChannelListAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__copyValueFrom(this_: *mut Imf_ChannelListAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__ctor(this_: *mut *mut Imf_ChannelListAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__from_value(this_: *mut *mut Imf_ChannelListAttribute_t, value: *const Imf_ChannelList_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__ctor_copy(this_: *mut *mut Imf_ChannelListAttribute_t, other: *const Imf_ChannelListAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__dtor(this_: *mut Imf_ChannelListAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__assign(this_: *mut Imf_ChannelListAttribute_t, return_: *mut *mut Imf_ChannelListAttribute_t, other: *const Imf_ChannelListAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__value(this_: *mut Imf_ChannelListAttribute_t, return_: *mut *mut Imf_ChannelList_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__value_const(this_: *const Imf_ChannelListAttribute_t, return_: *mut *const Imf_ChannelList_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast_ptr(return_: *mut *mut Imf_ChannelListAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast_ptr_const(return_: *mut *const Imf_ChannelListAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast(return_: *mut *mut Imf_ChannelListAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast_const(return_: *mut *const Imf_ChannelListAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__typeName(this_: *const Imf_ChromaticitiesAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__copy(this_: *const Imf_ChromaticitiesAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__writeValueTo(this_: *const Imf_ChromaticitiesAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__readValueFrom(this_: *mut Imf_ChromaticitiesAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__copyValueFrom(this_: *mut Imf_ChromaticitiesAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__ctor(this_: *mut *mut Imf_ChromaticitiesAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__from_value(this_: *mut *mut Imf_ChromaticitiesAttribute_t, value: *const Imf_Chromaticities_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__ctor_copy(this_: *mut *mut Imf_ChromaticitiesAttribute_t, other: *const Imf_ChromaticitiesAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__dtor(this_: *mut Imf_ChromaticitiesAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__assign(this_: *mut Imf_ChromaticitiesAttribute_t, return_: *mut *mut Imf_ChromaticitiesAttribute_t, other: *const Imf_ChromaticitiesAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__value(this_: *mut Imf_ChromaticitiesAttribute_t, return_: *mut *mut Imf_Chromaticities_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__value_const(this_: *const Imf_ChromaticitiesAttribute_t, return_: *mut *const Imf_Chromaticities_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast_ptr(return_: *mut *mut Imf_ChromaticitiesAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast_ptr_const(return_: *mut *const Imf_ChromaticitiesAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast(return_: *mut *mut Imf_ChromaticitiesAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast_const(return_: *mut *const Imf_ChromaticitiesAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__typeName(this_: *const Imf_CompressionAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__copy(this_: *const Imf_CompressionAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__writeValueTo(this_: *const Imf_CompressionAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__readValueFrom(this_: *mut Imf_CompressionAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__copyValueFrom(this_: *mut Imf_CompressionAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__ctor(this_: *mut *mut Imf_CompressionAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__from_value(this_: *mut *mut Imf_CompressionAttribute_t, value: *const Imf_Compression) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__ctor_copy(this_: *mut *mut Imf_CompressionAttribute_t, other: *const Imf_CompressionAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__dtor(this_: *mut Imf_CompressionAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__assign(this_: *mut Imf_CompressionAttribute_t, return_: *mut *mut Imf_CompressionAttribute_t, other: *const Imf_CompressionAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__value(this_: *mut Imf_CompressionAttribute_t, return_: *mut *mut Imf_Compression) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__value_const(this_: *const Imf_CompressionAttribute_t, return_: *mut *const Imf_Compression) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast_ptr(return_: *mut *mut Imf_CompressionAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast_ptr_const(return_: *mut *const Imf_CompressionAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast(return_: *mut *mut Imf_CompressionAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast_const(return_: *mut *const Imf_CompressionAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Compression__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__typeName(this_: *const Imf_DeepImageStateAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__copy(this_: *const Imf_DeepImageStateAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__writeValueTo(this_: *const Imf_DeepImageStateAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__readValueFrom(this_: *mut Imf_DeepImageStateAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__copyValueFrom(this_: *mut Imf_DeepImageStateAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__ctor(this_: *mut *mut Imf_DeepImageStateAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__from_value(this_: *mut *mut Imf_DeepImageStateAttribute_t, value: *const Imf_DeepImageState) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__ctor_copy(this_: *mut *mut Imf_DeepImageStateAttribute_t, other: *const Imf_DeepImageStateAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__dtor(this_: *mut Imf_DeepImageStateAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__assign(this_: *mut Imf_DeepImageStateAttribute_t, return_: *mut *mut Imf_DeepImageStateAttribute_t, other: *const Imf_DeepImageStateAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__value(this_: *mut Imf_DeepImageStateAttribute_t, return_: *mut *mut Imf_DeepImageState) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__value_const(this_: *const Imf_DeepImageStateAttribute_t, return_: *mut *const Imf_DeepImageState) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast_ptr(return_: *mut *mut Imf_DeepImageStateAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast_ptr_const(return_: *mut *const Imf_DeepImageStateAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast(return_: *mut *mut Imf_DeepImageStateAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast_const(return_: *mut *const Imf_DeepImageStateAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__typeName(this_: *const Imf_EnvmapAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__copy(this_: *const Imf_EnvmapAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__writeValueTo(this_: *const Imf_EnvmapAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__readValueFrom(this_: *mut Imf_EnvmapAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__copyValueFrom(this_: *mut Imf_EnvmapAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__ctor(this_: *mut *mut Imf_EnvmapAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__from_value(this_: *mut *mut Imf_EnvmapAttribute_t, value: *const Imf_Envmap) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__ctor_copy(this_: *mut *mut Imf_EnvmapAttribute_t, other: *const Imf_EnvmapAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__dtor(this_: *mut Imf_EnvmapAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__assign(this_: *mut Imf_EnvmapAttribute_t, return_: *mut *mut Imf_EnvmapAttribute_t, other: *const Imf_EnvmapAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__value(this_: *mut Imf_EnvmapAttribute_t, return_: *mut *mut Imf_Envmap) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__value_const(this_: *const Imf_EnvmapAttribute_t, return_: *mut *const Imf_Envmap) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast_ptr(return_: *mut *mut Imf_EnvmapAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast_ptr_const(return_: *mut *const Imf_EnvmapAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast(return_: *mut *mut Imf_EnvmapAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast_const(return_: *mut *const Imf_EnvmapAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Envmap__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__typeName(this_: *const Imf_CppVectorFloatAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__copy(this_: *const Imf_CppVectorFloatAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__writeValueTo(this_: *const Imf_CppVectorFloatAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__readValueFrom(this_: *mut Imf_CppVectorFloatAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__copyValueFrom(this_: *mut Imf_CppVectorFloatAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__ctor(this_: *mut *mut Imf_CppVectorFloatAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__from_value(this_: *mut *mut Imf_CppVectorFloatAttribute_t, value: *const std_vector_float_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__ctor_copy(this_: *mut *mut Imf_CppVectorFloatAttribute_t, other: *const Imf_CppVectorFloatAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__dtor(this_: *mut Imf_CppVectorFloatAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__assign(this_: *mut Imf_CppVectorFloatAttribute_t, return_: *mut *mut Imf_CppVectorFloatAttribute_t, other: *const Imf_CppVectorFloatAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__value(this_: *mut Imf_CppVectorFloatAttribute_t, return_: *mut *mut std_vector_float_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__value_const(this_: *const Imf_CppVectorFloatAttribute_t, return_: *mut *const std_vector_float_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast_ptr(return_: *mut *mut Imf_CppVectorFloatAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast_ptr_const(return_: *mut *const Imf_CppVectorFloatAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast(return_: *mut *mut Imf_CppVectorFloatAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast_const(return_: *mut *const Imf_CppVectorFloatAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__typeName(this_: *const Imf_CppVectorStringAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__copy(this_: *const Imf_CppVectorStringAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__writeValueTo(this_: *const Imf_CppVectorStringAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__readValueFrom(this_: *mut Imf_CppVectorStringAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__copyValueFrom(this_: *mut Imf_CppVectorStringAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__ctor(this_: *mut *mut Imf_CppVectorStringAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__from_value(this_: *mut *mut Imf_CppVectorStringAttribute_t, value: *const std_vector_string_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__ctor_copy(this_: *mut *mut Imf_CppVectorStringAttribute_t, other: *const Imf_CppVectorStringAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__dtor(this_: *mut Imf_CppVectorStringAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__assign(this_: *mut Imf_CppVectorStringAttribute_t, return_: *mut *mut Imf_CppVectorStringAttribute_t, other: *const Imf_CppVectorStringAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__value(this_: *mut Imf_CppVectorStringAttribute_t, return_: *mut *mut std_vector_string_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__value_const(this_: *const Imf_CppVectorStringAttribute_t, return_: *mut *const std_vector_string_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast_ptr(return_: *mut *mut Imf_CppVectorStringAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast_ptr_const(return_: *mut *const Imf_CppVectorStringAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast(return_: *mut *mut Imf_CppVectorStringAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast_const(return_: *mut *const Imf_CppVectorStringAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__StringVector__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__typeName(this_: *const Imf_CppStringAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__copy(this_: *const Imf_CppStringAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__writeValueTo(this_: *const Imf_CppStringAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__readValueFrom(this_: *mut Imf_CppStringAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__copyValueFrom(this_: *mut Imf_CppStringAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__ctor(this_: *mut *mut Imf_CppStringAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__from_value(this_: *mut *mut Imf_CppStringAttribute_t, value: *const std_string_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__ctor_copy(this_: *mut *mut Imf_CppStringAttribute_t, other: *const Imf_CppStringAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__dtor(this_: *mut Imf_CppStringAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__assign(this_: *mut Imf_CppStringAttribute_t, return_: *mut *mut Imf_CppStringAttribute_t, other: *const Imf_CppStringAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__value(this_: *mut Imf_CppStringAttribute_t, return_: *mut *mut std_string_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__value_const(this_: *const Imf_CppStringAttribute_t, return_: *mut *const std_string_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__cast_ptr(return_: *mut *mut Imf_CppStringAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__cast_ptr_const(return_: *mut *const Imf_CppStringAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__cast(return_: *mut *mut Imf_CppStringAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__cast_const(return_: *mut *const Imf_CppStringAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_std__string__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__typeName(this_: *const Imf_KeyCodeAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__copy(this_: *const Imf_KeyCodeAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__writeValueTo(this_: *const Imf_KeyCodeAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__readValueFrom(this_: *mut Imf_KeyCodeAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__copyValueFrom(this_: *mut Imf_KeyCodeAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__ctor(this_: *mut *mut Imf_KeyCodeAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__from_value(this_: *mut *mut Imf_KeyCodeAttribute_t, value: *const Imf_KeyCode_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__ctor_copy(this_: *mut *mut Imf_KeyCodeAttribute_t, other: *const Imf_KeyCodeAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__dtor(this_: *mut Imf_KeyCodeAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__assign(this_: *mut Imf_KeyCodeAttribute_t, return_: *mut *mut Imf_KeyCodeAttribute_t, other: *const Imf_KeyCodeAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__value(this_: *mut Imf_KeyCodeAttribute_t, return_: *mut *mut Imf_KeyCode_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__value_const(this_: *const Imf_KeyCodeAttribute_t, return_: *mut *const Imf_KeyCode_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast_ptr(return_: *mut *mut Imf_KeyCodeAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast_ptr_const(return_: *mut *const Imf_KeyCodeAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast(return_: *mut *mut Imf_KeyCodeAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast_const(return_: *mut *const Imf_KeyCodeAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__typeName(this_: *const Imf_LineOrderAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__copy(this_: *const Imf_LineOrderAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__writeValueTo(this_: *const Imf_LineOrderAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__readValueFrom(this_: *mut Imf_LineOrderAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__copyValueFrom(this_: *mut Imf_LineOrderAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__ctor(this_: *mut *mut Imf_LineOrderAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__from_value(this_: *mut *mut Imf_LineOrderAttribute_t, value: *const Imf_LineOrder) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__ctor_copy(this_: *mut *mut Imf_LineOrderAttribute_t, other: *const Imf_LineOrderAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__dtor(this_: *mut Imf_LineOrderAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__assign(this_: *mut Imf_LineOrderAttribute_t, return_: *mut *mut Imf_LineOrderAttribute_t, other: *const Imf_LineOrderAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__value(this_: *mut Imf_LineOrderAttribute_t, return_: *mut *mut Imf_LineOrder) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__value_const(this_: *const Imf_LineOrderAttribute_t, return_: *mut *const Imf_LineOrder) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast_ptr(return_: *mut *mut Imf_LineOrderAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast_ptr_const(return_: *mut *const Imf_LineOrderAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast(return_: *mut *mut Imf_LineOrderAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast_const(return_: *mut *const Imf_LineOrderAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__typeName(this_: *const Imf_M33fAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__copy(this_: *const Imf_M33fAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__writeValueTo(this_: *const Imf_M33fAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__readValueFrom(this_: *mut Imf_M33fAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__copyValueFrom(this_: *mut Imf_M33fAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__ctor(this_: *mut *mut Imf_M33fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__from_value(this_: *mut *mut Imf_M33fAttribute_t, value: *const Imath_M33f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__ctor_copy(this_: *mut *mut Imf_M33fAttribute_t, other: *const Imf_M33fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__dtor(this_: *mut Imf_M33fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__assign(this_: *mut Imf_M33fAttribute_t, return_: *mut *mut Imf_M33fAttribute_t, other: *const Imf_M33fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__value(this_: *mut Imf_M33fAttribute_t, return_: *mut *mut Imath_M33f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__value_const(this_: *const Imf_M33fAttribute_t, return_: *mut *const Imath_M33f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__cast_ptr(return_: *mut *mut Imf_M33fAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__cast_ptr_const(return_: *mut *const Imf_M33fAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__cast(return_: *mut *mut Imf_M33fAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__cast_const(return_: *mut *const Imf_M33fAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33f__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__typeName(this_: *const Imf_M33dAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__copy(this_: *const Imf_M33dAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__writeValueTo(this_: *const Imf_M33dAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__readValueFrom(this_: *mut Imf_M33dAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__copyValueFrom(this_: *mut Imf_M33dAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__ctor(this_: *mut *mut Imf_M33dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__from_value(this_: *mut *mut Imf_M33dAttribute_t, value: *const Imath_M33d_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__ctor_copy(this_: *mut *mut Imf_M33dAttribute_t, other: *const Imf_M33dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__dtor(this_: *mut Imf_M33dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__assign(this_: *mut Imf_M33dAttribute_t, return_: *mut *mut Imf_M33dAttribute_t, other: *const Imf_M33dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__value(this_: *mut Imf_M33dAttribute_t, return_: *mut *mut Imath_M33d_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__value_const(this_: *const Imf_M33dAttribute_t, return_: *mut *const Imath_M33d_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__cast_ptr(return_: *mut *mut Imf_M33dAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__cast_ptr_const(return_: *mut *const Imf_M33dAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__cast(return_: *mut *mut Imf_M33dAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__cast_const(return_: *mut *const Imf_M33dAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M33d__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__typeName(this_: *const Imf_M44fAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__copy(this_: *const Imf_M44fAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__writeValueTo(this_: *const Imf_M44fAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__readValueFrom(this_: *mut Imf_M44fAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__copyValueFrom(this_: *mut Imf_M44fAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__ctor(this_: *mut *mut Imf_M44fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__from_value(this_: *mut *mut Imf_M44fAttribute_t, value: *const Imath_M44f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__ctor_copy(this_: *mut *mut Imf_M44fAttribute_t, other: *const Imf_M44fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__dtor(this_: *mut Imf_M44fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__assign(this_: *mut Imf_M44fAttribute_t, return_: *mut *mut Imf_M44fAttribute_t, other: *const Imf_M44fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__value(this_: *mut Imf_M44fAttribute_t, return_: *mut *mut Imath_M44f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__value_const(this_: *const Imf_M44fAttribute_t, return_: *mut *const Imath_M44f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__cast_ptr(return_: *mut *mut Imf_M44fAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__cast_ptr_const(return_: *mut *const Imf_M44fAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__cast(return_: *mut *mut Imf_M44fAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__cast_const(return_: *mut *const Imf_M44fAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44f__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__typeName(this_: *const Imf_M44dAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__copy(this_: *const Imf_M44dAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__writeValueTo(this_: *const Imf_M44dAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__readValueFrom(this_: *mut Imf_M44dAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__copyValueFrom(this_: *mut Imf_M44dAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__ctor(this_: *mut *mut Imf_M44dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__from_value(this_: *mut *mut Imf_M44dAttribute_t, value: *const Imath_M44d_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__ctor_copy(this_: *mut *mut Imf_M44dAttribute_t, other: *const Imf_M44dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__dtor(this_: *mut Imf_M44dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__assign(this_: *mut Imf_M44dAttribute_t, return_: *mut *mut Imf_M44dAttribute_t, other: *const Imf_M44dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__value(this_: *mut Imf_M44dAttribute_t, return_: *mut *mut Imath_M44d_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__value_const(this_: *const Imf_M44dAttribute_t, return_: *mut *const Imath_M44d_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__cast_ptr(return_: *mut *mut Imf_M44dAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__cast_ptr_const(return_: *mut *const Imf_M44dAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__cast(return_: *mut *mut Imf_M44dAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__cast_const(return_: *mut *const Imf_M44dAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__M44d__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__typeName(this_: *const Imf_PreviewImageAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__copy(this_: *const Imf_PreviewImageAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__writeValueTo(this_: *const Imf_PreviewImageAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__readValueFrom(this_: *mut Imf_PreviewImageAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__copyValueFrom(this_: *mut Imf_PreviewImageAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__ctor(this_: *mut *mut Imf_PreviewImageAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__from_value(this_: *mut *mut Imf_PreviewImageAttribute_t, value: *const Imf_PreviewImage_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__ctor_copy(this_: *mut *mut Imf_PreviewImageAttribute_t, other: *const Imf_PreviewImageAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__dtor(this_: *mut Imf_PreviewImageAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__assign(this_: *mut Imf_PreviewImageAttribute_t, return_: *mut *mut Imf_PreviewImageAttribute_t, other: *const Imf_PreviewImageAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__value(this_: *mut Imf_PreviewImageAttribute_t, return_: *mut *mut Imf_PreviewImage_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__value_const(this_: *const Imf_PreviewImageAttribute_t, return_: *mut *const Imf_PreviewImage_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast_ptr(return_: *mut *mut Imf_PreviewImageAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast_ptr_const(return_: *mut *const Imf_PreviewImageAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast(return_: *mut *mut Imf_PreviewImageAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast_const(return_: *mut *const Imf_PreviewImageAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__typeName(this_: *const Imf_RationalAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__copy(this_: *const Imf_RationalAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__writeValueTo(this_: *const Imf_RationalAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__readValueFrom(this_: *mut Imf_RationalAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__copyValueFrom(this_: *mut Imf_RationalAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__ctor(this_: *mut *mut Imf_RationalAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__from_value(this_: *mut *mut Imf_RationalAttribute_t, value: *const Imf_Rational_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__ctor_copy(this_: *mut *mut Imf_RationalAttribute_t, other: *const Imf_RationalAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__dtor(this_: *mut Imf_RationalAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__assign(this_: *mut Imf_RationalAttribute_t, return_: *mut *mut Imf_RationalAttribute_t, other: *const Imf_RationalAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__value(this_: *mut Imf_RationalAttribute_t, return_: *mut *mut Imf_Rational_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__value_const(this_: *const Imf_RationalAttribute_t, return_: *mut *const Imf_Rational_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast_ptr(return_: *mut *mut Imf_RationalAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast_ptr_const(return_: *mut *const Imf_RationalAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast(return_: *mut *mut Imf_RationalAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast_const(return_: *mut *const Imf_RationalAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__Rational__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__typeName(this_: *const Imf_TileDescriptionAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__copy(this_: *const Imf_TileDescriptionAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__writeValueTo(this_: *const Imf_TileDescriptionAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__readValueFrom(this_: *mut Imf_TileDescriptionAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__copyValueFrom(this_: *mut Imf_TileDescriptionAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__ctor(this_: *mut *mut Imf_TileDescriptionAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__from_value(this_: *mut *mut Imf_TileDescriptionAttribute_t, value: *const Imf_TileDescription_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__ctor_copy(this_: *mut *mut Imf_TileDescriptionAttribute_t, other: *const Imf_TileDescriptionAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__dtor(this_: *mut Imf_TileDescriptionAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__assign(this_: *mut Imf_TileDescriptionAttribute_t, return_: *mut *mut Imf_TileDescriptionAttribute_t, other: *const Imf_TileDescriptionAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__value(this_: *mut Imf_TileDescriptionAttribute_t, return_: *mut *mut Imf_TileDescription_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__value_const(this_: *const Imf_TileDescriptionAttribute_t, return_: *mut *const Imf_TileDescription_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast_ptr(return_: *mut *mut Imf_TileDescriptionAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast_ptr_const(return_: *mut *const Imf_TileDescriptionAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast(return_: *mut *mut Imf_TileDescriptionAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast_const(return_: *mut *const Imf_TileDescriptionAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__typeName(this_: *const Imf_TimeCodeAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__copy(this_: *const Imf_TimeCodeAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__writeValueTo(this_: *const Imf_TimeCodeAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__readValueFrom(this_: *mut Imf_TimeCodeAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__copyValueFrom(this_: *mut Imf_TimeCodeAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__ctor(this_: *mut *mut Imf_TimeCodeAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__from_value(this_: *mut *mut Imf_TimeCodeAttribute_t, value: *const Imf_TimeCode_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__ctor_copy(this_: *mut *mut Imf_TimeCodeAttribute_t, other: *const Imf_TimeCodeAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__dtor(this_: *mut Imf_TimeCodeAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__assign(this_: *mut Imf_TimeCodeAttribute_t, return_: *mut *mut Imf_TimeCodeAttribute_t, other: *const Imf_TimeCodeAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__value(this_: *mut Imf_TimeCodeAttribute_t, return_: *mut *mut Imf_TimeCode_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__value_const(this_: *const Imf_TimeCodeAttribute_t, return_: *mut *const Imf_TimeCode_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast_ptr(return_: *mut *mut Imf_TimeCodeAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast_ptr_const(return_: *mut *const Imf_TimeCodeAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast(return_: *mut *mut Imf_TimeCodeAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast_const(return_: *mut *const Imf_TimeCodeAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__typeName(this_: *const Imf_V2iAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__copy(this_: *const Imf_V2iAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__writeValueTo(this_: *const Imf_V2iAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__readValueFrom(this_: *mut Imf_V2iAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__copyValueFrom(this_: *mut Imf_V2iAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__ctor(this_: *mut *mut Imf_V2iAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__from_value(this_: *mut *mut Imf_V2iAttribute_t, value: *const Imath_V2i_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__ctor_copy(this_: *mut *mut Imf_V2iAttribute_t, other: *const Imf_V2iAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__dtor(this_: *mut Imf_V2iAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__assign(this_: *mut Imf_V2iAttribute_t, return_: *mut *mut Imf_V2iAttribute_t, other: *const Imf_V2iAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__value(this_: *mut Imf_V2iAttribute_t, return_: *mut *mut Imath_V2i_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__value_const(this_: *const Imf_V2iAttribute_t, return_: *mut *const Imath_V2i_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__cast_ptr(return_: *mut *mut Imf_V2iAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__cast_ptr_const(return_: *mut *const Imf_V2iAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__cast(return_: *mut *mut Imf_V2iAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__cast_const(return_: *mut *const Imf_V2iAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2i__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__typeName(this_: *const Imf_V2fAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__copy(this_: *const Imf_V2fAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__writeValueTo(this_: *const Imf_V2fAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__readValueFrom(this_: *mut Imf_V2fAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__copyValueFrom(this_: *mut Imf_V2fAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__ctor(this_: *mut *mut Imf_V2fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__from_value(this_: *mut *mut Imf_V2fAttribute_t, value: *const Imath_V2f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__ctor_copy(this_: *mut *mut Imf_V2fAttribute_t, other: *const Imf_V2fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__dtor(this_: *mut Imf_V2fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__assign(this_: *mut Imf_V2fAttribute_t, return_: *mut *mut Imf_V2fAttribute_t, other: *const Imf_V2fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__value(this_: *mut Imf_V2fAttribute_t, return_: *mut *mut Imath_V2f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__value_const(this_: *const Imf_V2fAttribute_t, return_: *mut *const Imath_V2f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__cast_ptr(return_: *mut *mut Imf_V2fAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__cast_ptr_const(return_: *mut *const Imf_V2fAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__cast(return_: *mut *mut Imf_V2fAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__cast_const(return_: *mut *const Imf_V2fAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2f__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__typeName(this_: *const Imf_V2dAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__copy(this_: *const Imf_V2dAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__writeValueTo(this_: *const Imf_V2dAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__readValueFrom(this_: *mut Imf_V2dAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__copyValueFrom(this_: *mut Imf_V2dAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__ctor(this_: *mut *mut Imf_V2dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__from_value(this_: *mut *mut Imf_V2dAttribute_t, value: *const Imath_V2d_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__ctor_copy(this_: *mut *mut Imf_V2dAttribute_t, other: *const Imf_V2dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__dtor(this_: *mut Imf_V2dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__assign(this_: *mut Imf_V2dAttribute_t, return_: *mut *mut Imf_V2dAttribute_t, other: *const Imf_V2dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__value(this_: *mut Imf_V2dAttribute_t, return_: *mut *mut Imath_V2d_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__value_const(this_: *const Imf_V2dAttribute_t, return_: *mut *const Imath_V2d_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__cast_ptr(return_: *mut *mut Imf_V2dAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__cast_ptr_const(return_: *mut *const Imf_V2dAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__cast(return_: *mut *mut Imf_V2dAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__cast_const(return_: *mut *const Imf_V2dAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V2d__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__typeName(this_: *const Imf_V3iAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__copy(this_: *const Imf_V3iAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__writeValueTo(this_: *const Imf_V3iAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__readValueFrom(this_: *mut Imf_V3iAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__copyValueFrom(this_: *mut Imf_V3iAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__ctor(this_: *mut *mut Imf_V3iAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__from_value(this_: *mut *mut Imf_V3iAttribute_t, value: *const Imath_V3i_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__ctor_copy(this_: *mut *mut Imf_V3iAttribute_t, other: *const Imf_V3iAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__dtor(this_: *mut Imf_V3iAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__assign(this_: *mut Imf_V3iAttribute_t, return_: *mut *mut Imf_V3iAttribute_t, other: *const Imf_V3iAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__value(this_: *mut Imf_V3iAttribute_t, return_: *mut *mut Imath_V3i_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__value_const(this_: *const Imf_V3iAttribute_t, return_: *mut *const Imath_V3i_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__cast_ptr(return_: *mut *mut Imf_V3iAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__cast_ptr_const(return_: *mut *const Imf_V3iAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__cast(return_: *mut *mut Imf_V3iAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__cast_const(return_: *mut *const Imf_V3iAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3i__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__typeName(this_: *const Imf_V3fAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__copy(this_: *const Imf_V3fAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__writeValueTo(this_: *const Imf_V3fAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__readValueFrom(this_: *mut Imf_V3fAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__copyValueFrom(this_: *mut Imf_V3fAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__ctor(this_: *mut *mut Imf_V3fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__from_value(this_: *mut *mut Imf_V3fAttribute_t, value: *const Imath_V3f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__ctor_copy(this_: *mut *mut Imf_V3fAttribute_t, other: *const Imf_V3fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__dtor(this_: *mut Imf_V3fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__assign(this_: *mut Imf_V3fAttribute_t, return_: *mut *mut Imf_V3fAttribute_t, other: *const Imf_V3fAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__value(this_: *mut Imf_V3fAttribute_t, return_: *mut *mut Imath_V3f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__value_const(this_: *const Imf_V3fAttribute_t, return_: *mut *const Imath_V3f_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__cast_ptr(return_: *mut *mut Imf_V3fAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__cast_ptr_const(return_: *mut *const Imf_V3fAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__cast(return_: *mut *mut Imf_V3fAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__cast_const(return_: *mut *const Imf_V3fAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3f__unRegisterAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__typeName(this_: *const Imf_V3dAttribute_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__copy(this_: *const Imf_V3dAttribute_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__writeValueTo(this_: *const Imf_V3dAttribute_t, os: *mut Imf_OStream_t, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__readValueFrom(this_: *mut Imf_V3dAttribute_t, is: *mut Imf_IStream_t, size: c_int, version: c_int) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__copyValueFrom(this_: *mut Imf_V3dAttribute_t, other: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__newAttribute(return_: *mut *mut Imf_Attribute_t, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__knownType(return_: *mut bool, type_name: *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__ctor(this_: *mut *mut Imf_V3dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__from_value(this_: *mut *mut Imf_V3dAttribute_t, value: *const Imath_V3d_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__ctor_copy(this_: *mut *mut Imf_V3dAttribute_t, other: *const Imf_V3dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__dtor(this_: *mut Imf_V3dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__assign(this_: *mut Imf_V3dAttribute_t, return_: *mut *mut Imf_V3dAttribute_t, other: *const Imf_V3dAttribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__value(this_: *mut Imf_V3dAttribute_t, return_: *mut *mut Imath_V3d_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__value_const(this_: *const Imf_V3dAttribute_t, return_: *mut *const Imath_V3d_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__staticTypeName(return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__makeNewAttribute(return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__cast_ptr(return_: *mut *mut Imf_V3dAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__cast_ptr_const(return_: *mut *const Imf_V3dAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__cast(return_: *mut *mut Imf_V3dAttribute_t, attribute: *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__cast_const(return_: *mut *const Imf_V3dAttribute_t, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__registerAttributeType() -> Exception;

pub fn Imf_3_0__TypedAttribute_Imath__V3d__unRegisterAttributeType() -> Exception;


} // extern "C"

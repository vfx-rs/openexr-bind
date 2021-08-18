#pragma once
#include <imf_compression.h>
#include <imf_deepimagestate.h>
#include <imf_envmap.h>
#include <imf_lineorder.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imath_3_0__Matrix33_float__t_s Imath_3_0__Matrix33_float__t;
typedef Imath_3_0__Matrix33_float__t Imath_M33f_t;
typedef struct Imath_3_0__Matrix33_double__t_s Imath_3_0__Matrix33_double__t;
typedef Imath_3_0__Matrix33_double__t Imath_M33d_t;
typedef struct Imath_3_0__Matrix44_float__t_s Imath_3_0__Matrix44_float__t;
typedef Imath_3_0__Matrix44_float__t Imath_M44f_t;
typedef struct Imath_3_0__Matrix44_double__t_s Imath_3_0__Matrix44_double__t;
typedef Imath_3_0__Matrix44_double__t Imath_M44d_t;
typedef struct std__vector_float__t_s std__vector_float__t;
typedef std__vector_float__t std_vector_float_t;
typedef struct Imf_3_0__ChannelList_t_s Imf_3_0__ChannelList_t;
typedef Imf_3_0__ChannelList_t Imf_ChannelList_t;
typedef struct Imath_3_0__Box_Imath_3_0__Vec2_int___t_s Imath_3_0__Box_Imath_3_0__Vec2_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_int___t Imath_Box2i_t;
typedef struct Imath_3_0__Box_Imath_3_0__Vec2_float___t_s Imath_3_0__Box_Imath_3_0__Vec2_float___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_float___t Imath_Box2f_t;
typedef struct Imf_3_0__Array_char__t_s Imf_3_0__Array_char__t;
typedef Imf_3_0__Array_char__t Imf_ArrayChar_t;
typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;
typedef struct Imf_3_0__KeyCode_t_s Imf_3_0__KeyCode_t;
typedef Imf_3_0__KeyCode_t Imf_KeyCode_t;
typedef struct Imf_3_0__Rational_t_s Imf_3_0__Rational_t;
typedef Imf_3_0__Rational_t Imf_Rational_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct Imf_3_0__PreviewImage_t_s Imf_3_0__PreviewImage_t;
typedef Imf_3_0__PreviewImage_t Imf_PreviewImage_t;
typedef struct Imath_3_0__Vec2_int__t_s Imath_3_0__Vec2_int__t;
typedef Imath_3_0__Vec2_int__t Imath_V2i_t;
typedef struct Imath_3_0__Vec2_float__t_s Imath_3_0__Vec2_float__t;
typedef Imath_3_0__Vec2_float__t Imath_V2f_t;
typedef struct Imath_3_0__Vec2_double__t_s Imath_3_0__Vec2_double__t;
typedef Imath_3_0__Vec2_double__t Imath_V2d_t;
typedef struct Imath_3_0__Vec3_int__t_s Imath_3_0__Vec3_int__t;
typedef Imath_3_0__Vec3_int__t Imath_V3i_t;
typedef struct Imath_3_0__Vec3_float__t_s Imath_3_0__Vec3_float__t;
typedef Imath_3_0__Vec3_float__t Imath_V3f_t;
typedef struct Imath_3_0__Vec3_double__t_s Imath_3_0__Vec3_double__t;
typedef Imath_3_0__Vec3_double__t Imath_V3d_t;
typedef struct Imf_3_0__TimeCode_t_s Imf_3_0__TimeCode_t;
typedef Imf_3_0__TimeCode_t Imf_TimeCode_t;
typedef struct Imf_3_0__TileDescription_t_s Imf_3_0__TileDescription_t;
typedef Imf_3_0__TileDescription_t Imf_TileDescription_t;
typedef struct Imf_3_0__Chromaticities_t_s Imf_3_0__Chromaticities_t;
typedef Imf_3_0__Chromaticities_t Imf_Chromaticities_t;
typedef struct Imf_3_0__OStream_t_s Imf_3_0__OStream_t;
typedef Imf_3_0__OStream_t Imf_OStream_t;
typedef struct Imf_3_0__IStream_t_s Imf_3_0__IStream_t;
typedef Imf_3_0__IStream_t Imf_IStream_t;

typedef struct Imf_3_0__Attribute_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__Attribute_t;
typedef Imf_3_0__Attribute_t Imf_Attribute_t;

typedef struct Imf_3_0__OpaqueAttribute_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__OpaqueAttribute_t;
typedef Imf_3_0__OpaqueAttribute_t Imf_OpaqueAttribute_t;

typedef struct Imf_3_0__TypedAttribute_int__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_int__t;
typedef Imf_3_0__TypedAttribute_int__t Imf_IntAttribute_t;

typedef struct Imf_3_0__TypedAttribute_float__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_float__t;
typedef Imf_3_0__TypedAttribute_float__t Imf_FloatAttribute_t;

typedef struct Imf_3_0__TypedAttribute_double__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_double__t;
typedef Imf_3_0__TypedAttribute_double__t Imf_DoubleAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imath__Box2i__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imath__Box2i__t;
typedef Imf_3_0__TypedAttribute_Imath__Box2i__t Imf_Box2iAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imath__Box2f__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imath__Box2f__t;
typedef Imf_3_0__TypedAttribute_Imath__Box2f__t Imf_Box2fAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__t Imf_ChannelListAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__t Imf_ChromaticitiesAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__Compression__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imf_3_0__Compression__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__Compression__t Imf_CompressionAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__t Imf_DeepImageStateAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__Envmap__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imf_3_0__Envmap__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__Envmap__t Imf_EnvmapAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__t Imf_CppVectorFloatAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__StringVector__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imf_3_0__StringVector__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__StringVector__t Imf_CppVectorStringAttribute_t;

typedef struct Imf_3_0__TypedAttribute_std__string__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_std__string__t;
typedef Imf_3_0__TypedAttribute_std__string__t Imf_CppStringAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__t Imf_KeyCodeAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__t Imf_LineOrderAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imath__M33f__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imath__M33f__t;
typedef Imf_3_0__TypedAttribute_Imath__M33f__t Imf_M33fAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imath__M33d__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imath__M33d__t;
typedef Imf_3_0__TypedAttribute_Imath__M33d__t Imf_M33dAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imath__M44f__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imath__M44f__t;
typedef Imf_3_0__TypedAttribute_Imath__M44f__t Imf_M44fAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imath__M44d__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imath__M44d__t;
typedef Imf_3_0__TypedAttribute_Imath__M44d__t Imf_M44dAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__t Imf_PreviewImageAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__Rational__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imf_3_0__Rational__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__Rational__t Imf_RationalAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__t Imf_TileDescriptionAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__t Imf_TimeCodeAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imath__V2i__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imath__V2i__t;
typedef Imf_3_0__TypedAttribute_Imath__V2i__t Imf_V2iAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imath__V2f__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imath__V2f__t;
typedef Imf_3_0__TypedAttribute_Imath__V2f__t Imf_V2fAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imath__V2d__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imath__V2d__t;
typedef Imf_3_0__TypedAttribute_Imath__V2d__t Imf_V2dAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imath__V3i__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imath__V3i__t;
typedef Imf_3_0__TypedAttribute_Imath__V3i__t Imf_V3iAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imath__V3f__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imath__V3f__t;
typedef Imf_3_0__TypedAttribute_Imath__V3f__t Imf_V3fAttribute_t;

typedef struct Imf_3_0__TypedAttribute_Imath__V3d__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedAttribute_Imath__V3d__t;
typedef Imf_3_0__TypedAttribute_Imath__V3d__t Imf_V3dAttribute_t;


unsigned int Imf_3_0__Attribute_dtor(
    Imf_Attribute_t * this_);
#define Imf_Attribute_dtor Imf_3_0__Attribute_dtor


unsigned int Imf_3_0__Attribute_typeName(
    Imf_Attribute_t const * this_
    , char const * * return_);
#define Imf_Attribute_typeName Imf_3_0__Attribute_typeName


unsigned int Imf_3_0__Attribute_copy(
    Imf_Attribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_Attribute_copy Imf_3_0__Attribute_copy


unsigned int Imf_3_0__Attribute_writeValueTo(
    Imf_Attribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_Attribute_writeValueTo Imf_3_0__Attribute_writeValueTo


unsigned int Imf_3_0__Attribute_readValueFrom(
    Imf_Attribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_Attribute_readValueFrom Imf_3_0__Attribute_readValueFrom


unsigned int Imf_3_0__Attribute_copyValueFrom(
    Imf_Attribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_Attribute_copyValueFrom Imf_3_0__Attribute_copyValueFrom


unsigned int Imf_3_0__Attribute_newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_Attribute_newAttribute Imf_3_0__Attribute_newAttribute


unsigned int Imf_3_0__Attribute_knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_Attribute_knownType Imf_3_0__Attribute_knownType


unsigned int Imf_3_0__Attribute__assign(
    Imf_Attribute_t * this_
    , Imf_Attribute_t * * return_
    , Imf_Attribute_t const * rhs);
#define Imf_Attribute__assign Imf_3_0__Attribute__assign


unsigned int Imf_3_0__OpaqueAttribute_typeName(
    Imf_OpaqueAttribute_t const * this_
    , char const * * return_);
#define Imf_OpaqueAttribute_typeName Imf_3_0__OpaqueAttribute_typeName


unsigned int Imf_3_0__OpaqueAttribute_copy(
    Imf_OpaqueAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_OpaqueAttribute_copy Imf_3_0__OpaqueAttribute_copy


unsigned int Imf_3_0__OpaqueAttribute_writeValueTo(
    Imf_OpaqueAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_OpaqueAttribute_writeValueTo Imf_3_0__OpaqueAttribute_writeValueTo


unsigned int Imf_3_0__OpaqueAttribute_readValueFrom(
    Imf_OpaqueAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_OpaqueAttribute_readValueFrom Imf_3_0__OpaqueAttribute_readValueFrom


unsigned int Imf_3_0__OpaqueAttribute_copyValueFrom(
    Imf_OpaqueAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_OpaqueAttribute_copyValueFrom Imf_3_0__OpaqueAttribute_copyValueFrom


unsigned int Imf_3_0__OpaqueAttribute_newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_OpaqueAttribute_newAttribute Imf_3_0__OpaqueAttribute_newAttribute


unsigned int Imf_3_0__OpaqueAttribute_knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_OpaqueAttribute_knownType Imf_3_0__OpaqueAttribute_knownType


unsigned int Imf_3_0__OpaqueAttribute_from_typeName(
    Imf_OpaqueAttribute_t * * this_
    , char const * typeName);
#define Imf_OpaqueAttribute_from_typeName Imf_3_0__OpaqueAttribute_from_typeName


unsigned int Imf_3_0__OpaqueAttribute_copy_1(
    Imf_OpaqueAttribute_t * * this_
    , Imf_OpaqueAttribute_t const * rhs);
#define Imf_OpaqueAttribute_copy_1 Imf_3_0__OpaqueAttribute_copy_1


unsigned int Imf_3_0__OpaqueAttribute_dtor(
    Imf_OpaqueAttribute_t * this_);
#define Imf_OpaqueAttribute_dtor Imf_3_0__OpaqueAttribute_dtor


unsigned int Imf_3_0__OpaqueAttribute_dataSize(
    Imf_OpaqueAttribute_t const * this_
    , int * return_);
#define Imf_OpaqueAttribute_dataSize Imf_3_0__OpaqueAttribute_dataSize


unsigned int Imf_3_0__OpaqueAttribute_data(
    Imf_OpaqueAttribute_t const * this_
    , Imf_ArrayChar_t const * * return_);
#define Imf_OpaqueAttribute_data Imf_3_0__OpaqueAttribute_data


unsigned int Imf_3_0__TypedAttribute_int__typeName(
    Imf_IntAttribute_t const * this_
    , char const * * return_);
#define Imf_IntAttribute_typeName Imf_3_0__TypedAttribute_int__typeName


unsigned int Imf_3_0__TypedAttribute_int__copy(
    Imf_IntAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_IntAttribute_copy Imf_3_0__TypedAttribute_int__copy


unsigned int Imf_3_0__TypedAttribute_int__writeValueTo(
    Imf_IntAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_IntAttribute_writeValueTo Imf_3_0__TypedAttribute_int__writeValueTo


unsigned int Imf_3_0__TypedAttribute_int__readValueFrom(
    Imf_IntAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_IntAttribute_readValueFrom Imf_3_0__TypedAttribute_int__readValueFrom


unsigned int Imf_3_0__TypedAttribute_int__copyValueFrom(
    Imf_IntAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_IntAttribute_copyValueFrom Imf_3_0__TypedAttribute_int__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_int__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_IntAttribute_newAttribute Imf_3_0__TypedAttribute_int__newAttribute


unsigned int Imf_3_0__TypedAttribute_int__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_IntAttribute_knownType Imf_3_0__TypedAttribute_int__knownType


unsigned int Imf_3_0__TypedAttribute_int__ctor(
    Imf_IntAttribute_t * * this_);
#define Imf_IntAttribute_ctor Imf_3_0__TypedAttribute_int__ctor


unsigned int Imf_3_0__TypedAttribute_int__from_value(
    Imf_IntAttribute_t * * this_
    , int const * value);
#define Imf_IntAttribute_from_value Imf_3_0__TypedAttribute_int__from_value


unsigned int Imf_3_0__TypedAttribute_int__ctor_copy(
    Imf_IntAttribute_t * * this_
    , Imf_IntAttribute_t const * other);
#define Imf_IntAttribute_ctor_copy Imf_3_0__TypedAttribute_int__ctor_copy


unsigned int Imf_3_0__TypedAttribute_int__dtor(
    Imf_IntAttribute_t * this_);
#define Imf_IntAttribute_dtor Imf_3_0__TypedAttribute_int__dtor


unsigned int Imf_3_0__TypedAttribute_int__assign(
    Imf_IntAttribute_t * this_
    , Imf_IntAttribute_t * * return_
    , Imf_IntAttribute_t const * other);
#define Imf_IntAttribute_assign Imf_3_0__TypedAttribute_int__assign


unsigned int Imf_3_0__TypedAttribute_int__value(
    Imf_IntAttribute_t * this_
    , int * * return_);
#define Imf_IntAttribute_value Imf_3_0__TypedAttribute_int__value


unsigned int Imf_3_0__TypedAttribute_int__value_const(
    Imf_IntAttribute_t const * this_
    , int const * * return_);
#define Imf_IntAttribute_value_const Imf_3_0__TypedAttribute_int__value_const


unsigned int Imf_3_0__TypedAttribute_int__staticTypeName(
    char const * * return_);
#define Imf_IntAttribute_staticTypeName Imf_3_0__TypedAttribute_int__staticTypeName


unsigned int Imf_3_0__TypedAttribute_int__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_IntAttribute_makeNewAttribute Imf_3_0__TypedAttribute_int__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_int__cast_ptr(
    Imf_IntAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_IntAttribute_cast_ptr Imf_3_0__TypedAttribute_int__cast_ptr


unsigned int Imf_3_0__TypedAttribute_int__cast_ptr_const(
    Imf_IntAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_IntAttribute_cast_ptr_const Imf_3_0__TypedAttribute_int__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_int__cast(
    Imf_IntAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_IntAttribute_cast Imf_3_0__TypedAttribute_int__cast


unsigned int Imf_3_0__TypedAttribute_int__cast_const(
    Imf_IntAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_IntAttribute_cast_const Imf_3_0__TypedAttribute_int__cast_const


unsigned int Imf_3_0__TypedAttribute_int__registerAttributeType();
#define Imf_IntAttribute_registerAttributeType Imf_3_0__TypedAttribute_int__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_int__unRegisterAttributeType();
#define Imf_IntAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_int__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_float__typeName(
    Imf_FloatAttribute_t const * this_
    , char const * * return_);
#define Imf_FloatAttribute_typeName Imf_3_0__TypedAttribute_float__typeName


unsigned int Imf_3_0__TypedAttribute_float__copy(
    Imf_FloatAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_FloatAttribute_copy Imf_3_0__TypedAttribute_float__copy


unsigned int Imf_3_0__TypedAttribute_float__writeValueTo(
    Imf_FloatAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_FloatAttribute_writeValueTo Imf_3_0__TypedAttribute_float__writeValueTo


unsigned int Imf_3_0__TypedAttribute_float__readValueFrom(
    Imf_FloatAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_FloatAttribute_readValueFrom Imf_3_0__TypedAttribute_float__readValueFrom


unsigned int Imf_3_0__TypedAttribute_float__copyValueFrom(
    Imf_FloatAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_FloatAttribute_copyValueFrom Imf_3_0__TypedAttribute_float__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_float__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_FloatAttribute_newAttribute Imf_3_0__TypedAttribute_float__newAttribute


unsigned int Imf_3_0__TypedAttribute_float__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_FloatAttribute_knownType Imf_3_0__TypedAttribute_float__knownType


unsigned int Imf_3_0__TypedAttribute_float__ctor(
    Imf_FloatAttribute_t * * this_);
#define Imf_FloatAttribute_ctor Imf_3_0__TypedAttribute_float__ctor


unsigned int Imf_3_0__TypedAttribute_float__from_value(
    Imf_FloatAttribute_t * * this_
    , float const * value);
#define Imf_FloatAttribute_from_value Imf_3_0__TypedAttribute_float__from_value


unsigned int Imf_3_0__TypedAttribute_float__ctor_copy(
    Imf_FloatAttribute_t * * this_
    , Imf_FloatAttribute_t const * other);
#define Imf_FloatAttribute_ctor_copy Imf_3_0__TypedAttribute_float__ctor_copy


unsigned int Imf_3_0__TypedAttribute_float__dtor(
    Imf_FloatAttribute_t * this_);
#define Imf_FloatAttribute_dtor Imf_3_0__TypedAttribute_float__dtor


unsigned int Imf_3_0__TypedAttribute_float__assign(
    Imf_FloatAttribute_t * this_
    , Imf_FloatAttribute_t * * return_
    , Imf_FloatAttribute_t const * other);
#define Imf_FloatAttribute_assign Imf_3_0__TypedAttribute_float__assign


unsigned int Imf_3_0__TypedAttribute_float__value(
    Imf_FloatAttribute_t * this_
    , float * * return_);
#define Imf_FloatAttribute_value Imf_3_0__TypedAttribute_float__value


unsigned int Imf_3_0__TypedAttribute_float__value_const(
    Imf_FloatAttribute_t const * this_
    , float const * * return_);
#define Imf_FloatAttribute_value_const Imf_3_0__TypedAttribute_float__value_const


unsigned int Imf_3_0__TypedAttribute_float__staticTypeName(
    char const * * return_);
#define Imf_FloatAttribute_staticTypeName Imf_3_0__TypedAttribute_float__staticTypeName


unsigned int Imf_3_0__TypedAttribute_float__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_FloatAttribute_makeNewAttribute Imf_3_0__TypedAttribute_float__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_float__cast_ptr(
    Imf_FloatAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_FloatAttribute_cast_ptr Imf_3_0__TypedAttribute_float__cast_ptr


unsigned int Imf_3_0__TypedAttribute_float__cast_ptr_const(
    Imf_FloatAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_FloatAttribute_cast_ptr_const Imf_3_0__TypedAttribute_float__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_float__cast(
    Imf_FloatAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_FloatAttribute_cast Imf_3_0__TypedAttribute_float__cast


unsigned int Imf_3_0__TypedAttribute_float__cast_const(
    Imf_FloatAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_FloatAttribute_cast_const Imf_3_0__TypedAttribute_float__cast_const


unsigned int Imf_3_0__TypedAttribute_float__registerAttributeType();
#define Imf_FloatAttribute_registerAttributeType Imf_3_0__TypedAttribute_float__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_float__unRegisterAttributeType();
#define Imf_FloatAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_float__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_double__typeName(
    Imf_DoubleAttribute_t const * this_
    , char const * * return_);
#define Imf_DoubleAttribute_typeName Imf_3_0__TypedAttribute_double__typeName


unsigned int Imf_3_0__TypedAttribute_double__copy(
    Imf_DoubleAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_DoubleAttribute_copy Imf_3_0__TypedAttribute_double__copy


unsigned int Imf_3_0__TypedAttribute_double__writeValueTo(
    Imf_DoubleAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_DoubleAttribute_writeValueTo Imf_3_0__TypedAttribute_double__writeValueTo


unsigned int Imf_3_0__TypedAttribute_double__readValueFrom(
    Imf_DoubleAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_DoubleAttribute_readValueFrom Imf_3_0__TypedAttribute_double__readValueFrom


unsigned int Imf_3_0__TypedAttribute_double__copyValueFrom(
    Imf_DoubleAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_DoubleAttribute_copyValueFrom Imf_3_0__TypedAttribute_double__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_double__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_DoubleAttribute_newAttribute Imf_3_0__TypedAttribute_double__newAttribute


unsigned int Imf_3_0__TypedAttribute_double__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_DoubleAttribute_knownType Imf_3_0__TypedAttribute_double__knownType


unsigned int Imf_3_0__TypedAttribute_double__ctor(
    Imf_DoubleAttribute_t * * this_);
#define Imf_DoubleAttribute_ctor Imf_3_0__TypedAttribute_double__ctor


unsigned int Imf_3_0__TypedAttribute_double__from_value(
    Imf_DoubleAttribute_t * * this_
    , double const * value);
#define Imf_DoubleAttribute_from_value Imf_3_0__TypedAttribute_double__from_value


unsigned int Imf_3_0__TypedAttribute_double__ctor_copy(
    Imf_DoubleAttribute_t * * this_
    , Imf_DoubleAttribute_t const * other);
#define Imf_DoubleAttribute_ctor_copy Imf_3_0__TypedAttribute_double__ctor_copy


unsigned int Imf_3_0__TypedAttribute_double__dtor(
    Imf_DoubleAttribute_t * this_);
#define Imf_DoubleAttribute_dtor Imf_3_0__TypedAttribute_double__dtor


unsigned int Imf_3_0__TypedAttribute_double__assign(
    Imf_DoubleAttribute_t * this_
    , Imf_DoubleAttribute_t * * return_
    , Imf_DoubleAttribute_t const * other);
#define Imf_DoubleAttribute_assign Imf_3_0__TypedAttribute_double__assign


unsigned int Imf_3_0__TypedAttribute_double__value(
    Imf_DoubleAttribute_t * this_
    , double * * return_);
#define Imf_DoubleAttribute_value Imf_3_0__TypedAttribute_double__value


unsigned int Imf_3_0__TypedAttribute_double__value_const(
    Imf_DoubleAttribute_t const * this_
    , double const * * return_);
#define Imf_DoubleAttribute_value_const Imf_3_0__TypedAttribute_double__value_const


unsigned int Imf_3_0__TypedAttribute_double__staticTypeName(
    char const * * return_);
#define Imf_DoubleAttribute_staticTypeName Imf_3_0__TypedAttribute_double__staticTypeName


unsigned int Imf_3_0__TypedAttribute_double__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_DoubleAttribute_makeNewAttribute Imf_3_0__TypedAttribute_double__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_double__cast_ptr(
    Imf_DoubleAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_DoubleAttribute_cast_ptr Imf_3_0__TypedAttribute_double__cast_ptr


unsigned int Imf_3_0__TypedAttribute_double__cast_ptr_const(
    Imf_DoubleAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_DoubleAttribute_cast_ptr_const Imf_3_0__TypedAttribute_double__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_double__cast(
    Imf_DoubleAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_DoubleAttribute_cast Imf_3_0__TypedAttribute_double__cast


unsigned int Imf_3_0__TypedAttribute_double__cast_const(
    Imf_DoubleAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_DoubleAttribute_cast_const Imf_3_0__TypedAttribute_double__cast_const


unsigned int Imf_3_0__TypedAttribute_double__registerAttributeType();
#define Imf_DoubleAttribute_registerAttributeType Imf_3_0__TypedAttribute_double__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_double__unRegisterAttributeType();
#define Imf_DoubleAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_double__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__typeName(
    Imf_Box2iAttribute_t const * this_
    , char const * * return_);
#define Imf_Box2iAttribute_typeName Imf_3_0__TypedAttribute_Imath__Box2i__typeName


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__copy(
    Imf_Box2iAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_Box2iAttribute_copy Imf_3_0__TypedAttribute_Imath__Box2i__copy


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__writeValueTo(
    Imf_Box2iAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_Box2iAttribute_writeValueTo Imf_3_0__TypedAttribute_Imath__Box2i__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__readValueFrom(
    Imf_Box2iAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_Box2iAttribute_readValueFrom Imf_3_0__TypedAttribute_Imath__Box2i__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__copyValueFrom(
    Imf_Box2iAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_Box2iAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imath__Box2i__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_Box2iAttribute_newAttribute Imf_3_0__TypedAttribute_Imath__Box2i__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_Box2iAttribute_knownType Imf_3_0__TypedAttribute_Imath__Box2i__knownType


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__ctor(
    Imf_Box2iAttribute_t * * this_);
#define Imf_Box2iAttribute_ctor Imf_3_0__TypedAttribute_Imath__Box2i__ctor


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__from_value(
    Imf_Box2iAttribute_t * * this_
    , Imath_Box2i_t const * value);
#define Imf_Box2iAttribute_from_value Imf_3_0__TypedAttribute_Imath__Box2i__from_value


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__ctor_copy(
    Imf_Box2iAttribute_t * * this_
    , Imf_Box2iAttribute_t const * other);
#define Imf_Box2iAttribute_ctor_copy Imf_3_0__TypedAttribute_Imath__Box2i__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__dtor(
    Imf_Box2iAttribute_t * this_);
#define Imf_Box2iAttribute_dtor Imf_3_0__TypedAttribute_Imath__Box2i__dtor


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__assign(
    Imf_Box2iAttribute_t * this_
    , Imf_Box2iAttribute_t * * return_
    , Imf_Box2iAttribute_t const * other);
#define Imf_Box2iAttribute_assign Imf_3_0__TypedAttribute_Imath__Box2i__assign


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__value(
    Imf_Box2iAttribute_t * this_
    , Imath_Box2i_t * * return_);
#define Imf_Box2iAttribute_value Imf_3_0__TypedAttribute_Imath__Box2i__value


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__value_const(
    Imf_Box2iAttribute_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_Box2iAttribute_value_const Imf_3_0__TypedAttribute_Imath__Box2i__value_const


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__staticTypeName(
    char const * * return_);
#define Imf_Box2iAttribute_staticTypeName Imf_3_0__TypedAttribute_Imath__Box2i__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_Box2iAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imath__Box2i__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__cast_ptr(
    Imf_Box2iAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_Box2iAttribute_cast_ptr Imf_3_0__TypedAttribute_Imath__Box2i__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__cast_ptr_const(
    Imf_Box2iAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_Box2iAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imath__Box2i__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__cast(
    Imf_Box2iAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_Box2iAttribute_cast Imf_3_0__TypedAttribute_Imath__Box2i__cast


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__cast_const(
    Imf_Box2iAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_Box2iAttribute_cast_const Imf_3_0__TypedAttribute_Imath__Box2i__cast_const


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__registerAttributeType();
#define Imf_Box2iAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imath__Box2i__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__unRegisterAttributeType();
#define Imf_Box2iAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imath__Box2i__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__typeName(
    Imf_Box2fAttribute_t const * this_
    , char const * * return_);
#define Imf_Box2fAttribute_typeName Imf_3_0__TypedAttribute_Imath__Box2f__typeName


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__copy(
    Imf_Box2fAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_Box2fAttribute_copy Imf_3_0__TypedAttribute_Imath__Box2f__copy


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__writeValueTo(
    Imf_Box2fAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_Box2fAttribute_writeValueTo Imf_3_0__TypedAttribute_Imath__Box2f__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__readValueFrom(
    Imf_Box2fAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_Box2fAttribute_readValueFrom Imf_3_0__TypedAttribute_Imath__Box2f__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__copyValueFrom(
    Imf_Box2fAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_Box2fAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imath__Box2f__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_Box2fAttribute_newAttribute Imf_3_0__TypedAttribute_Imath__Box2f__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_Box2fAttribute_knownType Imf_3_0__TypedAttribute_Imath__Box2f__knownType


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__ctor(
    Imf_Box2fAttribute_t * * this_);
#define Imf_Box2fAttribute_ctor Imf_3_0__TypedAttribute_Imath__Box2f__ctor


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__from_value(
    Imf_Box2fAttribute_t * * this_
    , Imath_Box2f_t const * value);
#define Imf_Box2fAttribute_from_value Imf_3_0__TypedAttribute_Imath__Box2f__from_value


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__ctor_copy(
    Imf_Box2fAttribute_t * * this_
    , Imf_Box2fAttribute_t const * other);
#define Imf_Box2fAttribute_ctor_copy Imf_3_0__TypedAttribute_Imath__Box2f__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__dtor(
    Imf_Box2fAttribute_t * this_);
#define Imf_Box2fAttribute_dtor Imf_3_0__TypedAttribute_Imath__Box2f__dtor


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__assign(
    Imf_Box2fAttribute_t * this_
    , Imf_Box2fAttribute_t * * return_
    , Imf_Box2fAttribute_t const * other);
#define Imf_Box2fAttribute_assign Imf_3_0__TypedAttribute_Imath__Box2f__assign


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__value(
    Imf_Box2fAttribute_t * this_
    , Imath_Box2f_t * * return_);
#define Imf_Box2fAttribute_value Imf_3_0__TypedAttribute_Imath__Box2f__value


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__value_const(
    Imf_Box2fAttribute_t const * this_
    , Imath_Box2f_t const * * return_);
#define Imf_Box2fAttribute_value_const Imf_3_0__TypedAttribute_Imath__Box2f__value_const


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__staticTypeName(
    char const * * return_);
#define Imf_Box2fAttribute_staticTypeName Imf_3_0__TypedAttribute_Imath__Box2f__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_Box2fAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imath__Box2f__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__cast_ptr(
    Imf_Box2fAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_Box2fAttribute_cast_ptr Imf_3_0__TypedAttribute_Imath__Box2f__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__cast_ptr_const(
    Imf_Box2fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_Box2fAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imath__Box2f__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__cast(
    Imf_Box2fAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_Box2fAttribute_cast Imf_3_0__TypedAttribute_Imath__Box2f__cast


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__cast_const(
    Imf_Box2fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_Box2fAttribute_cast_const Imf_3_0__TypedAttribute_Imath__Box2f__cast_const


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__registerAttributeType();
#define Imf_Box2fAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imath__Box2f__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__unRegisterAttributeType();
#define Imf_Box2fAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imath__Box2f__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__typeName(
    Imf_ChannelListAttribute_t const * this_
    , char const * * return_);
#define Imf_ChannelListAttribute_typeName Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__typeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__copy(
    Imf_ChannelListAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_ChannelListAttribute_copy Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__writeValueTo(
    Imf_ChannelListAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_ChannelListAttribute_writeValueTo Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__readValueFrom(
    Imf_ChannelListAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_ChannelListAttribute_readValueFrom Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__copyValueFrom(
    Imf_ChannelListAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_ChannelListAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_ChannelListAttribute_newAttribute Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_ChannelListAttribute_knownType Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__knownType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__ctor(
    Imf_ChannelListAttribute_t * * this_);
#define Imf_ChannelListAttribute_ctor Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__ctor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__from_value(
    Imf_ChannelListAttribute_t * * this_
    , Imf_ChannelList_t const * value);
#define Imf_ChannelListAttribute_from_value Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__from_value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__ctor_copy(
    Imf_ChannelListAttribute_t * * this_
    , Imf_ChannelListAttribute_t const * other);
#define Imf_ChannelListAttribute_ctor_copy Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__dtor(
    Imf_ChannelListAttribute_t * this_);
#define Imf_ChannelListAttribute_dtor Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__dtor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__assign(
    Imf_ChannelListAttribute_t * this_
    , Imf_ChannelListAttribute_t * * return_
    , Imf_ChannelListAttribute_t const * other);
#define Imf_ChannelListAttribute_assign Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__assign


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__value(
    Imf_ChannelListAttribute_t * this_
    , Imf_ChannelList_t * * return_);
#define Imf_ChannelListAttribute_value Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__value_const(
    Imf_ChannelListAttribute_t const * this_
    , Imf_ChannelList_t const * * return_);
#define Imf_ChannelListAttribute_value_const Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__value_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__staticTypeName(
    char const * * return_);
#define Imf_ChannelListAttribute_staticTypeName Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_ChannelListAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast_ptr(
    Imf_ChannelListAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_ChannelListAttribute_cast_ptr Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast_ptr_const(
    Imf_ChannelListAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_ChannelListAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast(
    Imf_ChannelListAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_ChannelListAttribute_cast Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast_const(
    Imf_ChannelListAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_ChannelListAttribute_cast_const Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__registerAttributeType();
#define Imf_ChannelListAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__unRegisterAttributeType();
#define Imf_ChannelListAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__typeName(
    Imf_ChromaticitiesAttribute_t const * this_
    , char const * * return_);
#define Imf_ChromaticitiesAttribute_typeName Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__typeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__copy(
    Imf_ChromaticitiesAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_ChromaticitiesAttribute_copy Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__writeValueTo(
    Imf_ChromaticitiesAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_ChromaticitiesAttribute_writeValueTo Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__readValueFrom(
    Imf_ChromaticitiesAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_ChromaticitiesAttribute_readValueFrom Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__copyValueFrom(
    Imf_ChromaticitiesAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_ChromaticitiesAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_ChromaticitiesAttribute_newAttribute Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_ChromaticitiesAttribute_knownType Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__knownType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__ctor(
    Imf_ChromaticitiesAttribute_t * * this_);
#define Imf_ChromaticitiesAttribute_ctor Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__ctor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__from_value(
    Imf_ChromaticitiesAttribute_t * * this_
    , Imf_Chromaticities_t const * value);
#define Imf_ChromaticitiesAttribute_from_value Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__from_value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__ctor_copy(
    Imf_ChromaticitiesAttribute_t * * this_
    , Imf_ChromaticitiesAttribute_t const * other);
#define Imf_ChromaticitiesAttribute_ctor_copy Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__dtor(
    Imf_ChromaticitiesAttribute_t * this_);
#define Imf_ChromaticitiesAttribute_dtor Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__dtor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__assign(
    Imf_ChromaticitiesAttribute_t * this_
    , Imf_ChromaticitiesAttribute_t * * return_
    , Imf_ChromaticitiesAttribute_t const * other);
#define Imf_ChromaticitiesAttribute_assign Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__assign


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__value(
    Imf_ChromaticitiesAttribute_t * this_
    , Imf_Chromaticities_t * * return_);
#define Imf_ChromaticitiesAttribute_value Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__value_const(
    Imf_ChromaticitiesAttribute_t const * this_
    , Imf_Chromaticities_t const * * return_);
#define Imf_ChromaticitiesAttribute_value_const Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__value_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__staticTypeName(
    char const * * return_);
#define Imf_ChromaticitiesAttribute_staticTypeName Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_ChromaticitiesAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast_ptr(
    Imf_ChromaticitiesAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_ChromaticitiesAttribute_cast_ptr Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast_ptr_const(
    Imf_ChromaticitiesAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_ChromaticitiesAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast(
    Imf_ChromaticitiesAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_ChromaticitiesAttribute_cast Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast_const(
    Imf_ChromaticitiesAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_ChromaticitiesAttribute_cast_const Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__registerAttributeType();
#define Imf_ChromaticitiesAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__unRegisterAttributeType();
#define Imf_ChromaticitiesAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__typeName(
    Imf_CompressionAttribute_t const * this_
    , char const * * return_);
#define Imf_CompressionAttribute_typeName Imf_3_0__TypedAttribute_Imf_3_0__Compression__typeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__copy(
    Imf_CompressionAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_CompressionAttribute_copy Imf_3_0__TypedAttribute_Imf_3_0__Compression__copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__writeValueTo(
    Imf_CompressionAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_CompressionAttribute_writeValueTo Imf_3_0__TypedAttribute_Imf_3_0__Compression__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__readValueFrom(
    Imf_CompressionAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_CompressionAttribute_readValueFrom Imf_3_0__TypedAttribute_Imf_3_0__Compression__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__copyValueFrom(
    Imf_CompressionAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_CompressionAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imf_3_0__Compression__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_CompressionAttribute_newAttribute Imf_3_0__TypedAttribute_Imf_3_0__Compression__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_CompressionAttribute_knownType Imf_3_0__TypedAttribute_Imf_3_0__Compression__knownType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__ctor(
    Imf_CompressionAttribute_t * * this_);
#define Imf_CompressionAttribute_ctor Imf_3_0__TypedAttribute_Imf_3_0__Compression__ctor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__from_value(
    Imf_CompressionAttribute_t * * this_
    , Imf_Compression const * value);
#define Imf_CompressionAttribute_from_value Imf_3_0__TypedAttribute_Imf_3_0__Compression__from_value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__ctor_copy(
    Imf_CompressionAttribute_t * * this_
    , Imf_CompressionAttribute_t const * other);
#define Imf_CompressionAttribute_ctor_copy Imf_3_0__TypedAttribute_Imf_3_0__Compression__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__dtor(
    Imf_CompressionAttribute_t * this_);
#define Imf_CompressionAttribute_dtor Imf_3_0__TypedAttribute_Imf_3_0__Compression__dtor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__assign(
    Imf_CompressionAttribute_t * this_
    , Imf_CompressionAttribute_t * * return_
    , Imf_CompressionAttribute_t const * other);
#define Imf_CompressionAttribute_assign Imf_3_0__TypedAttribute_Imf_3_0__Compression__assign


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__value(
    Imf_CompressionAttribute_t * this_
    , Imf_Compression * * return_);
#define Imf_CompressionAttribute_value Imf_3_0__TypedAttribute_Imf_3_0__Compression__value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__value_const(
    Imf_CompressionAttribute_t const * this_
    , Imf_Compression const * * return_);
#define Imf_CompressionAttribute_value_const Imf_3_0__TypedAttribute_Imf_3_0__Compression__value_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__staticTypeName(
    char const * * return_);
#define Imf_CompressionAttribute_staticTypeName Imf_3_0__TypedAttribute_Imf_3_0__Compression__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_CompressionAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imf_3_0__Compression__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast_ptr(
    Imf_CompressionAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_CompressionAttribute_cast_ptr Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast_ptr_const(
    Imf_CompressionAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_CompressionAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast(
    Imf_CompressionAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_CompressionAttribute_cast Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast_const(
    Imf_CompressionAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_CompressionAttribute_cast_const Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__registerAttributeType();
#define Imf_CompressionAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imf_3_0__Compression__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__unRegisterAttributeType();
#define Imf_CompressionAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imf_3_0__Compression__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__typeName(
    Imf_DeepImageStateAttribute_t const * this_
    , char const * * return_);
#define Imf_DeepImageStateAttribute_typeName Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__typeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__copy(
    Imf_DeepImageStateAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_DeepImageStateAttribute_copy Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__writeValueTo(
    Imf_DeepImageStateAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_DeepImageStateAttribute_writeValueTo Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__readValueFrom(
    Imf_DeepImageStateAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_DeepImageStateAttribute_readValueFrom Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__copyValueFrom(
    Imf_DeepImageStateAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_DeepImageStateAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_DeepImageStateAttribute_newAttribute Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_DeepImageStateAttribute_knownType Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__knownType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__ctor(
    Imf_DeepImageStateAttribute_t * * this_);
#define Imf_DeepImageStateAttribute_ctor Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__ctor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__from_value(
    Imf_DeepImageStateAttribute_t * * this_
    , Imf_DeepImageState const * value);
#define Imf_DeepImageStateAttribute_from_value Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__from_value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__ctor_copy(
    Imf_DeepImageStateAttribute_t * * this_
    , Imf_DeepImageStateAttribute_t const * other);
#define Imf_DeepImageStateAttribute_ctor_copy Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__dtor(
    Imf_DeepImageStateAttribute_t * this_);
#define Imf_DeepImageStateAttribute_dtor Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__dtor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__assign(
    Imf_DeepImageStateAttribute_t * this_
    , Imf_DeepImageStateAttribute_t * * return_
    , Imf_DeepImageStateAttribute_t const * other);
#define Imf_DeepImageStateAttribute_assign Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__assign


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__value(
    Imf_DeepImageStateAttribute_t * this_
    , Imf_DeepImageState * * return_);
#define Imf_DeepImageStateAttribute_value Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__value_const(
    Imf_DeepImageStateAttribute_t const * this_
    , Imf_DeepImageState const * * return_);
#define Imf_DeepImageStateAttribute_value_const Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__value_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__staticTypeName(
    char const * * return_);
#define Imf_DeepImageStateAttribute_staticTypeName Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_DeepImageStateAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast_ptr(
    Imf_DeepImageStateAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_DeepImageStateAttribute_cast_ptr Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast_ptr_const(
    Imf_DeepImageStateAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_DeepImageStateAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast(
    Imf_DeepImageStateAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_DeepImageStateAttribute_cast Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast_const(
    Imf_DeepImageStateAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_DeepImageStateAttribute_cast_const Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__registerAttributeType();
#define Imf_DeepImageStateAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__unRegisterAttributeType();
#define Imf_DeepImageStateAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__typeName(
    Imf_EnvmapAttribute_t const * this_
    , char const * * return_);
#define Imf_EnvmapAttribute_typeName Imf_3_0__TypedAttribute_Imf_3_0__Envmap__typeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__copy(
    Imf_EnvmapAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_EnvmapAttribute_copy Imf_3_0__TypedAttribute_Imf_3_0__Envmap__copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__writeValueTo(
    Imf_EnvmapAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_EnvmapAttribute_writeValueTo Imf_3_0__TypedAttribute_Imf_3_0__Envmap__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__readValueFrom(
    Imf_EnvmapAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_EnvmapAttribute_readValueFrom Imf_3_0__TypedAttribute_Imf_3_0__Envmap__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__copyValueFrom(
    Imf_EnvmapAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_EnvmapAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imf_3_0__Envmap__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_EnvmapAttribute_newAttribute Imf_3_0__TypedAttribute_Imf_3_0__Envmap__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_EnvmapAttribute_knownType Imf_3_0__TypedAttribute_Imf_3_0__Envmap__knownType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__ctor(
    Imf_EnvmapAttribute_t * * this_);
#define Imf_EnvmapAttribute_ctor Imf_3_0__TypedAttribute_Imf_3_0__Envmap__ctor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__from_value(
    Imf_EnvmapAttribute_t * * this_
    , Imf_Envmap const * value);
#define Imf_EnvmapAttribute_from_value Imf_3_0__TypedAttribute_Imf_3_0__Envmap__from_value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__ctor_copy(
    Imf_EnvmapAttribute_t * * this_
    , Imf_EnvmapAttribute_t const * other);
#define Imf_EnvmapAttribute_ctor_copy Imf_3_0__TypedAttribute_Imf_3_0__Envmap__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__dtor(
    Imf_EnvmapAttribute_t * this_);
#define Imf_EnvmapAttribute_dtor Imf_3_0__TypedAttribute_Imf_3_0__Envmap__dtor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__assign(
    Imf_EnvmapAttribute_t * this_
    , Imf_EnvmapAttribute_t * * return_
    , Imf_EnvmapAttribute_t const * other);
#define Imf_EnvmapAttribute_assign Imf_3_0__TypedAttribute_Imf_3_0__Envmap__assign


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__value(
    Imf_EnvmapAttribute_t * this_
    , Imf_Envmap * * return_);
#define Imf_EnvmapAttribute_value Imf_3_0__TypedAttribute_Imf_3_0__Envmap__value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__value_const(
    Imf_EnvmapAttribute_t const * this_
    , Imf_Envmap const * * return_);
#define Imf_EnvmapAttribute_value_const Imf_3_0__TypedAttribute_Imf_3_0__Envmap__value_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__staticTypeName(
    char const * * return_);
#define Imf_EnvmapAttribute_staticTypeName Imf_3_0__TypedAttribute_Imf_3_0__Envmap__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_EnvmapAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imf_3_0__Envmap__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast_ptr(
    Imf_EnvmapAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_EnvmapAttribute_cast_ptr Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast_ptr_const(
    Imf_EnvmapAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_EnvmapAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast(
    Imf_EnvmapAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_EnvmapAttribute_cast Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast_const(
    Imf_EnvmapAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_EnvmapAttribute_cast_const Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__registerAttributeType();
#define Imf_EnvmapAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imf_3_0__Envmap__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__unRegisterAttributeType();
#define Imf_EnvmapAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imf_3_0__Envmap__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__typeName(
    Imf_CppVectorFloatAttribute_t const * this_
    , char const * * return_);
#define Imf_CppVectorFloatAttribute_typeName Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__typeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__copy(
    Imf_CppVectorFloatAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_CppVectorFloatAttribute_copy Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__writeValueTo(
    Imf_CppVectorFloatAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_CppVectorFloatAttribute_writeValueTo Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__readValueFrom(
    Imf_CppVectorFloatAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_CppVectorFloatAttribute_readValueFrom Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__copyValueFrom(
    Imf_CppVectorFloatAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_CppVectorFloatAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_CppVectorFloatAttribute_newAttribute Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_CppVectorFloatAttribute_knownType Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__knownType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__ctor(
    Imf_CppVectorFloatAttribute_t * * this_);
#define Imf_CppVectorFloatAttribute_ctor Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__ctor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__from_value(
    Imf_CppVectorFloatAttribute_t * * this_
    , std_vector_float_t const * value);
#define Imf_CppVectorFloatAttribute_from_value Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__from_value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__ctor_copy(
    Imf_CppVectorFloatAttribute_t * * this_
    , Imf_CppVectorFloatAttribute_t const * other);
#define Imf_CppVectorFloatAttribute_ctor_copy Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__dtor(
    Imf_CppVectorFloatAttribute_t * this_);
#define Imf_CppVectorFloatAttribute_dtor Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__dtor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__assign(
    Imf_CppVectorFloatAttribute_t * this_
    , Imf_CppVectorFloatAttribute_t * * return_
    , Imf_CppVectorFloatAttribute_t const * other);
#define Imf_CppVectorFloatAttribute_assign Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__assign


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__value(
    Imf_CppVectorFloatAttribute_t * this_
    , std_vector_float_t * * return_);
#define Imf_CppVectorFloatAttribute_value Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__value_const(
    Imf_CppVectorFloatAttribute_t const * this_
    , std_vector_float_t const * * return_);
#define Imf_CppVectorFloatAttribute_value_const Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__value_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__staticTypeName(
    char const * * return_);
#define Imf_CppVectorFloatAttribute_staticTypeName Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_CppVectorFloatAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast_ptr(
    Imf_CppVectorFloatAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_CppVectorFloatAttribute_cast_ptr Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast_ptr_const(
    Imf_CppVectorFloatAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_CppVectorFloatAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast(
    Imf_CppVectorFloatAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_CppVectorFloatAttribute_cast Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast_const(
    Imf_CppVectorFloatAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_CppVectorFloatAttribute_cast_const Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__registerAttributeType();
#define Imf_CppVectorFloatAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__unRegisterAttributeType();
#define Imf_CppVectorFloatAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__typeName(
    Imf_CppVectorStringAttribute_t const * this_
    , char const * * return_);
#define Imf_CppVectorStringAttribute_typeName Imf_3_0__TypedAttribute_Imf_3_0__StringVector__typeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__copy(
    Imf_CppVectorStringAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_CppVectorStringAttribute_copy Imf_3_0__TypedAttribute_Imf_3_0__StringVector__copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__writeValueTo(
    Imf_CppVectorStringAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_CppVectorStringAttribute_writeValueTo Imf_3_0__TypedAttribute_Imf_3_0__StringVector__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__readValueFrom(
    Imf_CppVectorStringAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_CppVectorStringAttribute_readValueFrom Imf_3_0__TypedAttribute_Imf_3_0__StringVector__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__copyValueFrom(
    Imf_CppVectorStringAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_CppVectorStringAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imf_3_0__StringVector__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_CppVectorStringAttribute_newAttribute Imf_3_0__TypedAttribute_Imf_3_0__StringVector__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_CppVectorStringAttribute_knownType Imf_3_0__TypedAttribute_Imf_3_0__StringVector__knownType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__ctor(
    Imf_CppVectorStringAttribute_t * * this_);
#define Imf_CppVectorStringAttribute_ctor Imf_3_0__TypedAttribute_Imf_3_0__StringVector__ctor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__from_value(
    Imf_CppVectorStringAttribute_t * * this_
    , std_vector_string_t const * value);
#define Imf_CppVectorStringAttribute_from_value Imf_3_0__TypedAttribute_Imf_3_0__StringVector__from_value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__ctor_copy(
    Imf_CppVectorStringAttribute_t * * this_
    , Imf_CppVectorStringAttribute_t const * other);
#define Imf_CppVectorStringAttribute_ctor_copy Imf_3_0__TypedAttribute_Imf_3_0__StringVector__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__dtor(
    Imf_CppVectorStringAttribute_t * this_);
#define Imf_CppVectorStringAttribute_dtor Imf_3_0__TypedAttribute_Imf_3_0__StringVector__dtor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__assign(
    Imf_CppVectorStringAttribute_t * this_
    , Imf_CppVectorStringAttribute_t * * return_
    , Imf_CppVectorStringAttribute_t const * other);
#define Imf_CppVectorStringAttribute_assign Imf_3_0__TypedAttribute_Imf_3_0__StringVector__assign


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__value(
    Imf_CppVectorStringAttribute_t * this_
    , std_vector_string_t * * return_);
#define Imf_CppVectorStringAttribute_value Imf_3_0__TypedAttribute_Imf_3_0__StringVector__value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__value_const(
    Imf_CppVectorStringAttribute_t const * this_
    , std_vector_string_t const * * return_);
#define Imf_CppVectorStringAttribute_value_const Imf_3_0__TypedAttribute_Imf_3_0__StringVector__value_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__staticTypeName(
    char const * * return_);
#define Imf_CppVectorStringAttribute_staticTypeName Imf_3_0__TypedAttribute_Imf_3_0__StringVector__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_CppVectorStringAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imf_3_0__StringVector__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast_ptr(
    Imf_CppVectorStringAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_CppVectorStringAttribute_cast_ptr Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast_ptr_const(
    Imf_CppVectorStringAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_CppVectorStringAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast(
    Imf_CppVectorStringAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_CppVectorStringAttribute_cast Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast_const(
    Imf_CppVectorStringAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_CppVectorStringAttribute_cast_const Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__registerAttributeType();
#define Imf_CppVectorStringAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imf_3_0__StringVector__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__unRegisterAttributeType();
#define Imf_CppVectorStringAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imf_3_0__StringVector__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_std__string__typeName(
    Imf_CppStringAttribute_t const * this_
    , char const * * return_);
#define Imf_CppStringAttribute_typeName Imf_3_0__TypedAttribute_std__string__typeName


unsigned int Imf_3_0__TypedAttribute_std__string__copy(
    Imf_CppStringAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_CppStringAttribute_copy Imf_3_0__TypedAttribute_std__string__copy


unsigned int Imf_3_0__TypedAttribute_std__string__writeValueTo(
    Imf_CppStringAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_CppStringAttribute_writeValueTo Imf_3_0__TypedAttribute_std__string__writeValueTo


unsigned int Imf_3_0__TypedAttribute_std__string__readValueFrom(
    Imf_CppStringAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_CppStringAttribute_readValueFrom Imf_3_0__TypedAttribute_std__string__readValueFrom


unsigned int Imf_3_0__TypedAttribute_std__string__copyValueFrom(
    Imf_CppStringAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_CppStringAttribute_copyValueFrom Imf_3_0__TypedAttribute_std__string__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_std__string__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_CppStringAttribute_newAttribute Imf_3_0__TypedAttribute_std__string__newAttribute


unsigned int Imf_3_0__TypedAttribute_std__string__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_CppStringAttribute_knownType Imf_3_0__TypedAttribute_std__string__knownType


unsigned int Imf_3_0__TypedAttribute_std__string__ctor(
    Imf_CppStringAttribute_t * * this_);
#define Imf_CppStringAttribute_ctor Imf_3_0__TypedAttribute_std__string__ctor


unsigned int Imf_3_0__TypedAttribute_std__string__from_value(
    Imf_CppStringAttribute_t * * this_
    , std_string_t const * value);
#define Imf_CppStringAttribute_from_value Imf_3_0__TypedAttribute_std__string__from_value


unsigned int Imf_3_0__TypedAttribute_std__string__ctor_copy(
    Imf_CppStringAttribute_t * * this_
    , Imf_CppStringAttribute_t const * other);
#define Imf_CppStringAttribute_ctor_copy Imf_3_0__TypedAttribute_std__string__ctor_copy


unsigned int Imf_3_0__TypedAttribute_std__string__dtor(
    Imf_CppStringAttribute_t * this_);
#define Imf_CppStringAttribute_dtor Imf_3_0__TypedAttribute_std__string__dtor


unsigned int Imf_3_0__TypedAttribute_std__string__assign(
    Imf_CppStringAttribute_t * this_
    , Imf_CppStringAttribute_t * * return_
    , Imf_CppStringAttribute_t const * other);
#define Imf_CppStringAttribute_assign Imf_3_0__TypedAttribute_std__string__assign


unsigned int Imf_3_0__TypedAttribute_std__string__value(
    Imf_CppStringAttribute_t * this_
    , std_string_t * * return_);
#define Imf_CppStringAttribute_value Imf_3_0__TypedAttribute_std__string__value


unsigned int Imf_3_0__TypedAttribute_std__string__value_const(
    Imf_CppStringAttribute_t const * this_
    , std_string_t const * * return_);
#define Imf_CppStringAttribute_value_const Imf_3_0__TypedAttribute_std__string__value_const


unsigned int Imf_3_0__TypedAttribute_std__string__staticTypeName(
    char const * * return_);
#define Imf_CppStringAttribute_staticTypeName Imf_3_0__TypedAttribute_std__string__staticTypeName


unsigned int Imf_3_0__TypedAttribute_std__string__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_CppStringAttribute_makeNewAttribute Imf_3_0__TypedAttribute_std__string__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_std__string__cast_ptr(
    Imf_CppStringAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_CppStringAttribute_cast_ptr Imf_3_0__TypedAttribute_std__string__cast_ptr


unsigned int Imf_3_0__TypedAttribute_std__string__cast_ptr_const(
    Imf_CppStringAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_CppStringAttribute_cast_ptr_const Imf_3_0__TypedAttribute_std__string__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_std__string__cast(
    Imf_CppStringAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_CppStringAttribute_cast Imf_3_0__TypedAttribute_std__string__cast


unsigned int Imf_3_0__TypedAttribute_std__string__cast_const(
    Imf_CppStringAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_CppStringAttribute_cast_const Imf_3_0__TypedAttribute_std__string__cast_const


unsigned int Imf_3_0__TypedAttribute_std__string__registerAttributeType();
#define Imf_CppStringAttribute_registerAttributeType Imf_3_0__TypedAttribute_std__string__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_std__string__unRegisterAttributeType();
#define Imf_CppStringAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_std__string__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__typeName(
    Imf_KeyCodeAttribute_t const * this_
    , char const * * return_);
#define Imf_KeyCodeAttribute_typeName Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__typeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__copy(
    Imf_KeyCodeAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_KeyCodeAttribute_copy Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__writeValueTo(
    Imf_KeyCodeAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_KeyCodeAttribute_writeValueTo Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__readValueFrom(
    Imf_KeyCodeAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_KeyCodeAttribute_readValueFrom Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__copyValueFrom(
    Imf_KeyCodeAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_KeyCodeAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_KeyCodeAttribute_newAttribute Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_KeyCodeAttribute_knownType Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__knownType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__ctor(
    Imf_KeyCodeAttribute_t * * this_);
#define Imf_KeyCodeAttribute_ctor Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__ctor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__from_value(
    Imf_KeyCodeAttribute_t * * this_
    , Imf_KeyCode_t const * value);
#define Imf_KeyCodeAttribute_from_value Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__from_value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__ctor_copy(
    Imf_KeyCodeAttribute_t * * this_
    , Imf_KeyCodeAttribute_t const * other);
#define Imf_KeyCodeAttribute_ctor_copy Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__dtor(
    Imf_KeyCodeAttribute_t * this_);
#define Imf_KeyCodeAttribute_dtor Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__dtor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__assign(
    Imf_KeyCodeAttribute_t * this_
    , Imf_KeyCodeAttribute_t * * return_
    , Imf_KeyCodeAttribute_t const * other);
#define Imf_KeyCodeAttribute_assign Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__assign


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__value(
    Imf_KeyCodeAttribute_t * this_
    , Imf_KeyCode_t * * return_);
#define Imf_KeyCodeAttribute_value Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__value_const(
    Imf_KeyCodeAttribute_t const * this_
    , Imf_KeyCode_t const * * return_);
#define Imf_KeyCodeAttribute_value_const Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__value_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__staticTypeName(
    char const * * return_);
#define Imf_KeyCodeAttribute_staticTypeName Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_KeyCodeAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast_ptr(
    Imf_KeyCodeAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_KeyCodeAttribute_cast_ptr Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast_ptr_const(
    Imf_KeyCodeAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_KeyCodeAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast(
    Imf_KeyCodeAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_KeyCodeAttribute_cast Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast_const(
    Imf_KeyCodeAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_KeyCodeAttribute_cast_const Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__registerAttributeType();
#define Imf_KeyCodeAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__unRegisterAttributeType();
#define Imf_KeyCodeAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__typeName(
    Imf_LineOrderAttribute_t const * this_
    , char const * * return_);
#define Imf_LineOrderAttribute_typeName Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__typeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__copy(
    Imf_LineOrderAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_LineOrderAttribute_copy Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__writeValueTo(
    Imf_LineOrderAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_LineOrderAttribute_writeValueTo Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__readValueFrom(
    Imf_LineOrderAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_LineOrderAttribute_readValueFrom Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__copyValueFrom(
    Imf_LineOrderAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_LineOrderAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_LineOrderAttribute_newAttribute Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_LineOrderAttribute_knownType Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__knownType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__ctor(
    Imf_LineOrderAttribute_t * * this_);
#define Imf_LineOrderAttribute_ctor Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__ctor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__from_value(
    Imf_LineOrderAttribute_t * * this_
    , Imf_LineOrder const * value);
#define Imf_LineOrderAttribute_from_value Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__from_value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__ctor_copy(
    Imf_LineOrderAttribute_t * * this_
    , Imf_LineOrderAttribute_t const * other);
#define Imf_LineOrderAttribute_ctor_copy Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__dtor(
    Imf_LineOrderAttribute_t * this_);
#define Imf_LineOrderAttribute_dtor Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__dtor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__assign(
    Imf_LineOrderAttribute_t * this_
    , Imf_LineOrderAttribute_t * * return_
    , Imf_LineOrderAttribute_t const * other);
#define Imf_LineOrderAttribute_assign Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__assign


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__value(
    Imf_LineOrderAttribute_t * this_
    , Imf_LineOrder * * return_);
#define Imf_LineOrderAttribute_value Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__value_const(
    Imf_LineOrderAttribute_t const * this_
    , Imf_LineOrder const * * return_);
#define Imf_LineOrderAttribute_value_const Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__value_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__staticTypeName(
    char const * * return_);
#define Imf_LineOrderAttribute_staticTypeName Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_LineOrderAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast_ptr(
    Imf_LineOrderAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_LineOrderAttribute_cast_ptr Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast_ptr_const(
    Imf_LineOrderAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_LineOrderAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast(
    Imf_LineOrderAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_LineOrderAttribute_cast Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast_const(
    Imf_LineOrderAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_LineOrderAttribute_cast_const Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__registerAttributeType();
#define Imf_LineOrderAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__unRegisterAttributeType();
#define Imf_LineOrderAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__typeName(
    Imf_M33fAttribute_t const * this_
    , char const * * return_);
#define Imf_M33fAttribute_typeName Imf_3_0__TypedAttribute_Imath__M33f__typeName


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__copy(
    Imf_M33fAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_M33fAttribute_copy Imf_3_0__TypedAttribute_Imath__M33f__copy


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__writeValueTo(
    Imf_M33fAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_M33fAttribute_writeValueTo Imf_3_0__TypedAttribute_Imath__M33f__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__readValueFrom(
    Imf_M33fAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_M33fAttribute_readValueFrom Imf_3_0__TypedAttribute_Imath__M33f__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__copyValueFrom(
    Imf_M33fAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_M33fAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imath__M33f__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_M33fAttribute_newAttribute Imf_3_0__TypedAttribute_Imath__M33f__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_M33fAttribute_knownType Imf_3_0__TypedAttribute_Imath__M33f__knownType


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__ctor(
    Imf_M33fAttribute_t * * this_);
#define Imf_M33fAttribute_ctor Imf_3_0__TypedAttribute_Imath__M33f__ctor


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__from_value(
    Imf_M33fAttribute_t * * this_
    , Imath_M33f_t const * value);
#define Imf_M33fAttribute_from_value Imf_3_0__TypedAttribute_Imath__M33f__from_value


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__ctor_copy(
    Imf_M33fAttribute_t * * this_
    , Imf_M33fAttribute_t const * other);
#define Imf_M33fAttribute_ctor_copy Imf_3_0__TypedAttribute_Imath__M33f__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__dtor(
    Imf_M33fAttribute_t * this_);
#define Imf_M33fAttribute_dtor Imf_3_0__TypedAttribute_Imath__M33f__dtor


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__assign(
    Imf_M33fAttribute_t * this_
    , Imf_M33fAttribute_t * * return_
    , Imf_M33fAttribute_t const * other);
#define Imf_M33fAttribute_assign Imf_3_0__TypedAttribute_Imath__M33f__assign


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__value(
    Imf_M33fAttribute_t * this_
    , Imath_M33f_t * * return_);
#define Imf_M33fAttribute_value Imf_3_0__TypedAttribute_Imath__M33f__value


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__value_const(
    Imf_M33fAttribute_t const * this_
    , Imath_M33f_t const * * return_);
#define Imf_M33fAttribute_value_const Imf_3_0__TypedAttribute_Imath__M33f__value_const


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__staticTypeName(
    char const * * return_);
#define Imf_M33fAttribute_staticTypeName Imf_3_0__TypedAttribute_Imath__M33f__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_M33fAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imath__M33f__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__cast_ptr(
    Imf_M33fAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_M33fAttribute_cast_ptr Imf_3_0__TypedAttribute_Imath__M33f__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__cast_ptr_const(
    Imf_M33fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_M33fAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imath__M33f__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__cast(
    Imf_M33fAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_M33fAttribute_cast Imf_3_0__TypedAttribute_Imath__M33f__cast


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__cast_const(
    Imf_M33fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_M33fAttribute_cast_const Imf_3_0__TypedAttribute_Imath__M33f__cast_const


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__registerAttributeType();
#define Imf_M33fAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imath__M33f__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__M33f__unRegisterAttributeType();
#define Imf_M33fAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imath__M33f__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__typeName(
    Imf_M33dAttribute_t const * this_
    , char const * * return_);
#define Imf_M33dAttribute_typeName Imf_3_0__TypedAttribute_Imath__M33d__typeName


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__copy(
    Imf_M33dAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_M33dAttribute_copy Imf_3_0__TypedAttribute_Imath__M33d__copy


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__writeValueTo(
    Imf_M33dAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_M33dAttribute_writeValueTo Imf_3_0__TypedAttribute_Imath__M33d__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__readValueFrom(
    Imf_M33dAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_M33dAttribute_readValueFrom Imf_3_0__TypedAttribute_Imath__M33d__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__copyValueFrom(
    Imf_M33dAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_M33dAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imath__M33d__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_M33dAttribute_newAttribute Imf_3_0__TypedAttribute_Imath__M33d__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_M33dAttribute_knownType Imf_3_0__TypedAttribute_Imath__M33d__knownType


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__ctor(
    Imf_M33dAttribute_t * * this_);
#define Imf_M33dAttribute_ctor Imf_3_0__TypedAttribute_Imath__M33d__ctor


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__from_value(
    Imf_M33dAttribute_t * * this_
    , Imath_M33d_t const * value);
#define Imf_M33dAttribute_from_value Imf_3_0__TypedAttribute_Imath__M33d__from_value


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__ctor_copy(
    Imf_M33dAttribute_t * * this_
    , Imf_M33dAttribute_t const * other);
#define Imf_M33dAttribute_ctor_copy Imf_3_0__TypedAttribute_Imath__M33d__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__dtor(
    Imf_M33dAttribute_t * this_);
#define Imf_M33dAttribute_dtor Imf_3_0__TypedAttribute_Imath__M33d__dtor


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__assign(
    Imf_M33dAttribute_t * this_
    , Imf_M33dAttribute_t * * return_
    , Imf_M33dAttribute_t const * other);
#define Imf_M33dAttribute_assign Imf_3_0__TypedAttribute_Imath__M33d__assign


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__value(
    Imf_M33dAttribute_t * this_
    , Imath_M33d_t * * return_);
#define Imf_M33dAttribute_value Imf_3_0__TypedAttribute_Imath__M33d__value


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__value_const(
    Imf_M33dAttribute_t const * this_
    , Imath_M33d_t const * * return_);
#define Imf_M33dAttribute_value_const Imf_3_0__TypedAttribute_Imath__M33d__value_const


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__staticTypeName(
    char const * * return_);
#define Imf_M33dAttribute_staticTypeName Imf_3_0__TypedAttribute_Imath__M33d__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_M33dAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imath__M33d__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__cast_ptr(
    Imf_M33dAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_M33dAttribute_cast_ptr Imf_3_0__TypedAttribute_Imath__M33d__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__cast_ptr_const(
    Imf_M33dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_M33dAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imath__M33d__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__cast(
    Imf_M33dAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_M33dAttribute_cast Imf_3_0__TypedAttribute_Imath__M33d__cast


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__cast_const(
    Imf_M33dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_M33dAttribute_cast_const Imf_3_0__TypedAttribute_Imath__M33d__cast_const


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__registerAttributeType();
#define Imf_M33dAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imath__M33d__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__M33d__unRegisterAttributeType();
#define Imf_M33dAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imath__M33d__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__typeName(
    Imf_M44fAttribute_t const * this_
    , char const * * return_);
#define Imf_M44fAttribute_typeName Imf_3_0__TypedAttribute_Imath__M44f__typeName


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__copy(
    Imf_M44fAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_M44fAttribute_copy Imf_3_0__TypedAttribute_Imath__M44f__copy


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__writeValueTo(
    Imf_M44fAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_M44fAttribute_writeValueTo Imf_3_0__TypedAttribute_Imath__M44f__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__readValueFrom(
    Imf_M44fAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_M44fAttribute_readValueFrom Imf_3_0__TypedAttribute_Imath__M44f__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__copyValueFrom(
    Imf_M44fAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_M44fAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imath__M44f__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_M44fAttribute_newAttribute Imf_3_0__TypedAttribute_Imath__M44f__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_M44fAttribute_knownType Imf_3_0__TypedAttribute_Imath__M44f__knownType


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__ctor(
    Imf_M44fAttribute_t * * this_);
#define Imf_M44fAttribute_ctor Imf_3_0__TypedAttribute_Imath__M44f__ctor


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__from_value(
    Imf_M44fAttribute_t * * this_
    , Imath_M44f_t const * value);
#define Imf_M44fAttribute_from_value Imf_3_0__TypedAttribute_Imath__M44f__from_value


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__ctor_copy(
    Imf_M44fAttribute_t * * this_
    , Imf_M44fAttribute_t const * other);
#define Imf_M44fAttribute_ctor_copy Imf_3_0__TypedAttribute_Imath__M44f__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__dtor(
    Imf_M44fAttribute_t * this_);
#define Imf_M44fAttribute_dtor Imf_3_0__TypedAttribute_Imath__M44f__dtor


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__assign(
    Imf_M44fAttribute_t * this_
    , Imf_M44fAttribute_t * * return_
    , Imf_M44fAttribute_t const * other);
#define Imf_M44fAttribute_assign Imf_3_0__TypedAttribute_Imath__M44f__assign


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__value(
    Imf_M44fAttribute_t * this_
    , Imath_M44f_t * * return_);
#define Imf_M44fAttribute_value Imf_3_0__TypedAttribute_Imath__M44f__value


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__value_const(
    Imf_M44fAttribute_t const * this_
    , Imath_M44f_t const * * return_);
#define Imf_M44fAttribute_value_const Imf_3_0__TypedAttribute_Imath__M44f__value_const


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__staticTypeName(
    char const * * return_);
#define Imf_M44fAttribute_staticTypeName Imf_3_0__TypedAttribute_Imath__M44f__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_M44fAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imath__M44f__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__cast_ptr(
    Imf_M44fAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_M44fAttribute_cast_ptr Imf_3_0__TypedAttribute_Imath__M44f__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__cast_ptr_const(
    Imf_M44fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_M44fAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imath__M44f__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__cast(
    Imf_M44fAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_M44fAttribute_cast Imf_3_0__TypedAttribute_Imath__M44f__cast


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__cast_const(
    Imf_M44fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_M44fAttribute_cast_const Imf_3_0__TypedAttribute_Imath__M44f__cast_const


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__registerAttributeType();
#define Imf_M44fAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imath__M44f__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__M44f__unRegisterAttributeType();
#define Imf_M44fAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imath__M44f__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__typeName(
    Imf_M44dAttribute_t const * this_
    , char const * * return_);
#define Imf_M44dAttribute_typeName Imf_3_0__TypedAttribute_Imath__M44d__typeName


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__copy(
    Imf_M44dAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_M44dAttribute_copy Imf_3_0__TypedAttribute_Imath__M44d__copy


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__writeValueTo(
    Imf_M44dAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_M44dAttribute_writeValueTo Imf_3_0__TypedAttribute_Imath__M44d__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__readValueFrom(
    Imf_M44dAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_M44dAttribute_readValueFrom Imf_3_0__TypedAttribute_Imath__M44d__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__copyValueFrom(
    Imf_M44dAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_M44dAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imath__M44d__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_M44dAttribute_newAttribute Imf_3_0__TypedAttribute_Imath__M44d__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_M44dAttribute_knownType Imf_3_0__TypedAttribute_Imath__M44d__knownType


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__ctor(
    Imf_M44dAttribute_t * * this_);
#define Imf_M44dAttribute_ctor Imf_3_0__TypedAttribute_Imath__M44d__ctor


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__from_value(
    Imf_M44dAttribute_t * * this_
    , Imath_M44d_t const * value);
#define Imf_M44dAttribute_from_value Imf_3_0__TypedAttribute_Imath__M44d__from_value


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__ctor_copy(
    Imf_M44dAttribute_t * * this_
    , Imf_M44dAttribute_t const * other);
#define Imf_M44dAttribute_ctor_copy Imf_3_0__TypedAttribute_Imath__M44d__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__dtor(
    Imf_M44dAttribute_t * this_);
#define Imf_M44dAttribute_dtor Imf_3_0__TypedAttribute_Imath__M44d__dtor


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__assign(
    Imf_M44dAttribute_t * this_
    , Imf_M44dAttribute_t * * return_
    , Imf_M44dAttribute_t const * other);
#define Imf_M44dAttribute_assign Imf_3_0__TypedAttribute_Imath__M44d__assign


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__value(
    Imf_M44dAttribute_t * this_
    , Imath_M44d_t * * return_);
#define Imf_M44dAttribute_value Imf_3_0__TypedAttribute_Imath__M44d__value


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__value_const(
    Imf_M44dAttribute_t const * this_
    , Imath_M44d_t const * * return_);
#define Imf_M44dAttribute_value_const Imf_3_0__TypedAttribute_Imath__M44d__value_const


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__staticTypeName(
    char const * * return_);
#define Imf_M44dAttribute_staticTypeName Imf_3_0__TypedAttribute_Imath__M44d__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_M44dAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imath__M44d__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__cast_ptr(
    Imf_M44dAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_M44dAttribute_cast_ptr Imf_3_0__TypedAttribute_Imath__M44d__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__cast_ptr_const(
    Imf_M44dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_M44dAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imath__M44d__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__cast(
    Imf_M44dAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_M44dAttribute_cast Imf_3_0__TypedAttribute_Imath__M44d__cast


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__cast_const(
    Imf_M44dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_M44dAttribute_cast_const Imf_3_0__TypedAttribute_Imath__M44d__cast_const


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__registerAttributeType();
#define Imf_M44dAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imath__M44d__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__M44d__unRegisterAttributeType();
#define Imf_M44dAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imath__M44d__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__typeName(
    Imf_PreviewImageAttribute_t const * this_
    , char const * * return_);
#define Imf_PreviewImageAttribute_typeName Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__typeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__copy(
    Imf_PreviewImageAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_PreviewImageAttribute_copy Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__writeValueTo(
    Imf_PreviewImageAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_PreviewImageAttribute_writeValueTo Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__readValueFrom(
    Imf_PreviewImageAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_PreviewImageAttribute_readValueFrom Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__copyValueFrom(
    Imf_PreviewImageAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_PreviewImageAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_PreviewImageAttribute_newAttribute Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_PreviewImageAttribute_knownType Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__knownType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__ctor(
    Imf_PreviewImageAttribute_t * * this_);
#define Imf_PreviewImageAttribute_ctor Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__ctor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__from_value(
    Imf_PreviewImageAttribute_t * * this_
    , Imf_PreviewImage_t const * value);
#define Imf_PreviewImageAttribute_from_value Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__from_value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__ctor_copy(
    Imf_PreviewImageAttribute_t * * this_
    , Imf_PreviewImageAttribute_t const * other);
#define Imf_PreviewImageAttribute_ctor_copy Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__dtor(
    Imf_PreviewImageAttribute_t * this_);
#define Imf_PreviewImageAttribute_dtor Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__dtor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__assign(
    Imf_PreviewImageAttribute_t * this_
    , Imf_PreviewImageAttribute_t * * return_
    , Imf_PreviewImageAttribute_t const * other);
#define Imf_PreviewImageAttribute_assign Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__assign


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__value(
    Imf_PreviewImageAttribute_t * this_
    , Imf_PreviewImage_t * * return_);
#define Imf_PreviewImageAttribute_value Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__value_const(
    Imf_PreviewImageAttribute_t const * this_
    , Imf_PreviewImage_t const * * return_);
#define Imf_PreviewImageAttribute_value_const Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__value_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__staticTypeName(
    char const * * return_);
#define Imf_PreviewImageAttribute_staticTypeName Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_PreviewImageAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast_ptr(
    Imf_PreviewImageAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_PreviewImageAttribute_cast_ptr Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast_ptr_const(
    Imf_PreviewImageAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_PreviewImageAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast(
    Imf_PreviewImageAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_PreviewImageAttribute_cast Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast_const(
    Imf_PreviewImageAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_PreviewImageAttribute_cast_const Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__registerAttributeType();
#define Imf_PreviewImageAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__unRegisterAttributeType();
#define Imf_PreviewImageAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__typeName(
    Imf_RationalAttribute_t const * this_
    , char const * * return_);
#define Imf_RationalAttribute_typeName Imf_3_0__TypedAttribute_Imf_3_0__Rational__typeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__copy(
    Imf_RationalAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_RationalAttribute_copy Imf_3_0__TypedAttribute_Imf_3_0__Rational__copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__writeValueTo(
    Imf_RationalAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_RationalAttribute_writeValueTo Imf_3_0__TypedAttribute_Imf_3_0__Rational__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__readValueFrom(
    Imf_RationalAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_RationalAttribute_readValueFrom Imf_3_0__TypedAttribute_Imf_3_0__Rational__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__copyValueFrom(
    Imf_RationalAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_RationalAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imf_3_0__Rational__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_RationalAttribute_newAttribute Imf_3_0__TypedAttribute_Imf_3_0__Rational__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_RationalAttribute_knownType Imf_3_0__TypedAttribute_Imf_3_0__Rational__knownType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__ctor(
    Imf_RationalAttribute_t * * this_);
#define Imf_RationalAttribute_ctor Imf_3_0__TypedAttribute_Imf_3_0__Rational__ctor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__from_value(
    Imf_RationalAttribute_t * * this_
    , Imf_Rational_t const * value);
#define Imf_RationalAttribute_from_value Imf_3_0__TypedAttribute_Imf_3_0__Rational__from_value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__ctor_copy(
    Imf_RationalAttribute_t * * this_
    , Imf_RationalAttribute_t const * other);
#define Imf_RationalAttribute_ctor_copy Imf_3_0__TypedAttribute_Imf_3_0__Rational__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__dtor(
    Imf_RationalAttribute_t * this_);
#define Imf_RationalAttribute_dtor Imf_3_0__TypedAttribute_Imf_3_0__Rational__dtor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__assign(
    Imf_RationalAttribute_t * this_
    , Imf_RationalAttribute_t * * return_
    , Imf_RationalAttribute_t const * other);
#define Imf_RationalAttribute_assign Imf_3_0__TypedAttribute_Imf_3_0__Rational__assign


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__value(
    Imf_RationalAttribute_t * this_
    , Imf_Rational_t * * return_);
#define Imf_RationalAttribute_value Imf_3_0__TypedAttribute_Imf_3_0__Rational__value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__value_const(
    Imf_RationalAttribute_t const * this_
    , Imf_Rational_t const * * return_);
#define Imf_RationalAttribute_value_const Imf_3_0__TypedAttribute_Imf_3_0__Rational__value_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__staticTypeName(
    char const * * return_);
#define Imf_RationalAttribute_staticTypeName Imf_3_0__TypedAttribute_Imf_3_0__Rational__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_RationalAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imf_3_0__Rational__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast_ptr(
    Imf_RationalAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_RationalAttribute_cast_ptr Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast_ptr_const(
    Imf_RationalAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_RationalAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast(
    Imf_RationalAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_RationalAttribute_cast Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast_const(
    Imf_RationalAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_RationalAttribute_cast_const Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__registerAttributeType();
#define Imf_RationalAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imf_3_0__Rational__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__unRegisterAttributeType();
#define Imf_RationalAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imf_3_0__Rational__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__typeName(
    Imf_TileDescriptionAttribute_t const * this_
    , char const * * return_);
#define Imf_TileDescriptionAttribute_typeName Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__typeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__copy(
    Imf_TileDescriptionAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_TileDescriptionAttribute_copy Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__writeValueTo(
    Imf_TileDescriptionAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_TileDescriptionAttribute_writeValueTo Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__readValueFrom(
    Imf_TileDescriptionAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_TileDescriptionAttribute_readValueFrom Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__copyValueFrom(
    Imf_TileDescriptionAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_TileDescriptionAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_TileDescriptionAttribute_newAttribute Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_TileDescriptionAttribute_knownType Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__knownType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__ctor(
    Imf_TileDescriptionAttribute_t * * this_);
#define Imf_TileDescriptionAttribute_ctor Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__ctor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__from_value(
    Imf_TileDescriptionAttribute_t * * this_
    , Imf_TileDescription_t const * value);
#define Imf_TileDescriptionAttribute_from_value Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__from_value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__ctor_copy(
    Imf_TileDescriptionAttribute_t * * this_
    , Imf_TileDescriptionAttribute_t const * other);
#define Imf_TileDescriptionAttribute_ctor_copy Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__dtor(
    Imf_TileDescriptionAttribute_t * this_);
#define Imf_TileDescriptionAttribute_dtor Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__dtor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__assign(
    Imf_TileDescriptionAttribute_t * this_
    , Imf_TileDescriptionAttribute_t * * return_
    , Imf_TileDescriptionAttribute_t const * other);
#define Imf_TileDescriptionAttribute_assign Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__assign


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__value(
    Imf_TileDescriptionAttribute_t * this_
    , Imf_TileDescription_t * * return_);
#define Imf_TileDescriptionAttribute_value Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__value_const(
    Imf_TileDescriptionAttribute_t const * this_
    , Imf_TileDescription_t const * * return_);
#define Imf_TileDescriptionAttribute_value_const Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__value_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__staticTypeName(
    char const * * return_);
#define Imf_TileDescriptionAttribute_staticTypeName Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_TileDescriptionAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast_ptr(
    Imf_TileDescriptionAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_TileDescriptionAttribute_cast_ptr Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast_ptr_const(
    Imf_TileDescriptionAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_TileDescriptionAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast(
    Imf_TileDescriptionAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_TileDescriptionAttribute_cast Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast_const(
    Imf_TileDescriptionAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_TileDescriptionAttribute_cast_const Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__registerAttributeType();
#define Imf_TileDescriptionAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__unRegisterAttributeType();
#define Imf_TileDescriptionAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__typeName(
    Imf_TimeCodeAttribute_t const * this_
    , char const * * return_);
#define Imf_TimeCodeAttribute_typeName Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__typeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__copy(
    Imf_TimeCodeAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_TimeCodeAttribute_copy Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__writeValueTo(
    Imf_TimeCodeAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_TimeCodeAttribute_writeValueTo Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__readValueFrom(
    Imf_TimeCodeAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_TimeCodeAttribute_readValueFrom Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__copyValueFrom(
    Imf_TimeCodeAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_TimeCodeAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_TimeCodeAttribute_newAttribute Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_TimeCodeAttribute_knownType Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__knownType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__ctor(
    Imf_TimeCodeAttribute_t * * this_);
#define Imf_TimeCodeAttribute_ctor Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__ctor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__from_value(
    Imf_TimeCodeAttribute_t * * this_
    , Imf_TimeCode_t const * value);
#define Imf_TimeCodeAttribute_from_value Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__from_value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__ctor_copy(
    Imf_TimeCodeAttribute_t * * this_
    , Imf_TimeCodeAttribute_t const * other);
#define Imf_TimeCodeAttribute_ctor_copy Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__dtor(
    Imf_TimeCodeAttribute_t * this_);
#define Imf_TimeCodeAttribute_dtor Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__dtor


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__assign(
    Imf_TimeCodeAttribute_t * this_
    , Imf_TimeCodeAttribute_t * * return_
    , Imf_TimeCodeAttribute_t const * other);
#define Imf_TimeCodeAttribute_assign Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__assign


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__value(
    Imf_TimeCodeAttribute_t * this_
    , Imf_TimeCode_t * * return_);
#define Imf_TimeCodeAttribute_value Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__value


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__value_const(
    Imf_TimeCodeAttribute_t const * this_
    , Imf_TimeCode_t const * * return_);
#define Imf_TimeCodeAttribute_value_const Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__value_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__staticTypeName(
    char const * * return_);
#define Imf_TimeCodeAttribute_staticTypeName Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_TimeCodeAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast_ptr(
    Imf_TimeCodeAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_TimeCodeAttribute_cast_ptr Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast_ptr_const(
    Imf_TimeCodeAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_TimeCodeAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast(
    Imf_TimeCodeAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_TimeCodeAttribute_cast Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast_const(
    Imf_TimeCodeAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_TimeCodeAttribute_cast_const Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast_const


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__registerAttributeType();
#define Imf_TimeCodeAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__unRegisterAttributeType();
#define Imf_TimeCodeAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__typeName(
    Imf_V2iAttribute_t const * this_
    , char const * * return_);
#define Imf_V2iAttribute_typeName Imf_3_0__TypedAttribute_Imath__V2i__typeName


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__copy(
    Imf_V2iAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_V2iAttribute_copy Imf_3_0__TypedAttribute_Imath__V2i__copy


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__writeValueTo(
    Imf_V2iAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_V2iAttribute_writeValueTo Imf_3_0__TypedAttribute_Imath__V2i__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__readValueFrom(
    Imf_V2iAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_V2iAttribute_readValueFrom Imf_3_0__TypedAttribute_Imath__V2i__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__copyValueFrom(
    Imf_V2iAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_V2iAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imath__V2i__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_V2iAttribute_newAttribute Imf_3_0__TypedAttribute_Imath__V2i__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_V2iAttribute_knownType Imf_3_0__TypedAttribute_Imath__V2i__knownType


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__ctor(
    Imf_V2iAttribute_t * * this_);
#define Imf_V2iAttribute_ctor Imf_3_0__TypedAttribute_Imath__V2i__ctor


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__from_value(
    Imf_V2iAttribute_t * * this_
    , Imath_V2i_t const * value);
#define Imf_V2iAttribute_from_value Imf_3_0__TypedAttribute_Imath__V2i__from_value


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__ctor_copy(
    Imf_V2iAttribute_t * * this_
    , Imf_V2iAttribute_t const * other);
#define Imf_V2iAttribute_ctor_copy Imf_3_0__TypedAttribute_Imath__V2i__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__dtor(
    Imf_V2iAttribute_t * this_);
#define Imf_V2iAttribute_dtor Imf_3_0__TypedAttribute_Imath__V2i__dtor


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__assign(
    Imf_V2iAttribute_t * this_
    , Imf_V2iAttribute_t * * return_
    , Imf_V2iAttribute_t const * other);
#define Imf_V2iAttribute_assign Imf_3_0__TypedAttribute_Imath__V2i__assign


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__value(
    Imf_V2iAttribute_t * this_
    , Imath_V2i_t * * return_);
#define Imf_V2iAttribute_value Imf_3_0__TypedAttribute_Imath__V2i__value


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__value_const(
    Imf_V2iAttribute_t const * this_
    , Imath_V2i_t const * * return_);
#define Imf_V2iAttribute_value_const Imf_3_0__TypedAttribute_Imath__V2i__value_const


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__staticTypeName(
    char const * * return_);
#define Imf_V2iAttribute_staticTypeName Imf_3_0__TypedAttribute_Imath__V2i__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_V2iAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imath__V2i__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__cast_ptr(
    Imf_V2iAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_V2iAttribute_cast_ptr Imf_3_0__TypedAttribute_Imath__V2i__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__cast_ptr_const(
    Imf_V2iAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_V2iAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imath__V2i__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__cast(
    Imf_V2iAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_V2iAttribute_cast Imf_3_0__TypedAttribute_Imath__V2i__cast


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__cast_const(
    Imf_V2iAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_V2iAttribute_cast_const Imf_3_0__TypedAttribute_Imath__V2i__cast_const


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__registerAttributeType();
#define Imf_V2iAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imath__V2i__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__V2i__unRegisterAttributeType();
#define Imf_V2iAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imath__V2i__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__typeName(
    Imf_V2fAttribute_t const * this_
    , char const * * return_);
#define Imf_V2fAttribute_typeName Imf_3_0__TypedAttribute_Imath__V2f__typeName


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__copy(
    Imf_V2fAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_V2fAttribute_copy Imf_3_0__TypedAttribute_Imath__V2f__copy


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__writeValueTo(
    Imf_V2fAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_V2fAttribute_writeValueTo Imf_3_0__TypedAttribute_Imath__V2f__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__readValueFrom(
    Imf_V2fAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_V2fAttribute_readValueFrom Imf_3_0__TypedAttribute_Imath__V2f__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__copyValueFrom(
    Imf_V2fAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_V2fAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imath__V2f__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_V2fAttribute_newAttribute Imf_3_0__TypedAttribute_Imath__V2f__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_V2fAttribute_knownType Imf_3_0__TypedAttribute_Imath__V2f__knownType


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__ctor(
    Imf_V2fAttribute_t * * this_);
#define Imf_V2fAttribute_ctor Imf_3_0__TypedAttribute_Imath__V2f__ctor


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__from_value(
    Imf_V2fAttribute_t * * this_
    , Imath_V2f_t const * value);
#define Imf_V2fAttribute_from_value Imf_3_0__TypedAttribute_Imath__V2f__from_value


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__ctor_copy(
    Imf_V2fAttribute_t * * this_
    , Imf_V2fAttribute_t const * other);
#define Imf_V2fAttribute_ctor_copy Imf_3_0__TypedAttribute_Imath__V2f__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__dtor(
    Imf_V2fAttribute_t * this_);
#define Imf_V2fAttribute_dtor Imf_3_0__TypedAttribute_Imath__V2f__dtor


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__assign(
    Imf_V2fAttribute_t * this_
    , Imf_V2fAttribute_t * * return_
    , Imf_V2fAttribute_t const * other);
#define Imf_V2fAttribute_assign Imf_3_0__TypedAttribute_Imath__V2f__assign


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__value(
    Imf_V2fAttribute_t * this_
    , Imath_V2f_t * * return_);
#define Imf_V2fAttribute_value Imf_3_0__TypedAttribute_Imath__V2f__value


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__value_const(
    Imf_V2fAttribute_t const * this_
    , Imath_V2f_t const * * return_);
#define Imf_V2fAttribute_value_const Imf_3_0__TypedAttribute_Imath__V2f__value_const


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__staticTypeName(
    char const * * return_);
#define Imf_V2fAttribute_staticTypeName Imf_3_0__TypedAttribute_Imath__V2f__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_V2fAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imath__V2f__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__cast_ptr(
    Imf_V2fAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_V2fAttribute_cast_ptr Imf_3_0__TypedAttribute_Imath__V2f__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__cast_ptr_const(
    Imf_V2fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_V2fAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imath__V2f__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__cast(
    Imf_V2fAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_V2fAttribute_cast Imf_3_0__TypedAttribute_Imath__V2f__cast


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__cast_const(
    Imf_V2fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_V2fAttribute_cast_const Imf_3_0__TypedAttribute_Imath__V2f__cast_const


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__registerAttributeType();
#define Imf_V2fAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imath__V2f__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__V2f__unRegisterAttributeType();
#define Imf_V2fAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imath__V2f__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__typeName(
    Imf_V2dAttribute_t const * this_
    , char const * * return_);
#define Imf_V2dAttribute_typeName Imf_3_0__TypedAttribute_Imath__V2d__typeName


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__copy(
    Imf_V2dAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_V2dAttribute_copy Imf_3_0__TypedAttribute_Imath__V2d__copy


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__writeValueTo(
    Imf_V2dAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_V2dAttribute_writeValueTo Imf_3_0__TypedAttribute_Imath__V2d__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__readValueFrom(
    Imf_V2dAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_V2dAttribute_readValueFrom Imf_3_0__TypedAttribute_Imath__V2d__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__copyValueFrom(
    Imf_V2dAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_V2dAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imath__V2d__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_V2dAttribute_newAttribute Imf_3_0__TypedAttribute_Imath__V2d__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_V2dAttribute_knownType Imf_3_0__TypedAttribute_Imath__V2d__knownType


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__ctor(
    Imf_V2dAttribute_t * * this_);
#define Imf_V2dAttribute_ctor Imf_3_0__TypedAttribute_Imath__V2d__ctor


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__from_value(
    Imf_V2dAttribute_t * * this_
    , Imath_V2d_t const * value);
#define Imf_V2dAttribute_from_value Imf_3_0__TypedAttribute_Imath__V2d__from_value


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__ctor_copy(
    Imf_V2dAttribute_t * * this_
    , Imf_V2dAttribute_t const * other);
#define Imf_V2dAttribute_ctor_copy Imf_3_0__TypedAttribute_Imath__V2d__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__dtor(
    Imf_V2dAttribute_t * this_);
#define Imf_V2dAttribute_dtor Imf_3_0__TypedAttribute_Imath__V2d__dtor


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__assign(
    Imf_V2dAttribute_t * this_
    , Imf_V2dAttribute_t * * return_
    , Imf_V2dAttribute_t const * other);
#define Imf_V2dAttribute_assign Imf_3_0__TypedAttribute_Imath__V2d__assign


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__value(
    Imf_V2dAttribute_t * this_
    , Imath_V2d_t * * return_);
#define Imf_V2dAttribute_value Imf_3_0__TypedAttribute_Imath__V2d__value


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__value_const(
    Imf_V2dAttribute_t const * this_
    , Imath_V2d_t const * * return_);
#define Imf_V2dAttribute_value_const Imf_3_0__TypedAttribute_Imath__V2d__value_const


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__staticTypeName(
    char const * * return_);
#define Imf_V2dAttribute_staticTypeName Imf_3_0__TypedAttribute_Imath__V2d__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_V2dAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imath__V2d__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__cast_ptr(
    Imf_V2dAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_V2dAttribute_cast_ptr Imf_3_0__TypedAttribute_Imath__V2d__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__cast_ptr_const(
    Imf_V2dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_V2dAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imath__V2d__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__cast(
    Imf_V2dAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_V2dAttribute_cast Imf_3_0__TypedAttribute_Imath__V2d__cast


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__cast_const(
    Imf_V2dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_V2dAttribute_cast_const Imf_3_0__TypedAttribute_Imath__V2d__cast_const


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__registerAttributeType();
#define Imf_V2dAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imath__V2d__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__V2d__unRegisterAttributeType();
#define Imf_V2dAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imath__V2d__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__typeName(
    Imf_V3iAttribute_t const * this_
    , char const * * return_);
#define Imf_V3iAttribute_typeName Imf_3_0__TypedAttribute_Imath__V3i__typeName


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__copy(
    Imf_V3iAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_V3iAttribute_copy Imf_3_0__TypedAttribute_Imath__V3i__copy


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__writeValueTo(
    Imf_V3iAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_V3iAttribute_writeValueTo Imf_3_0__TypedAttribute_Imath__V3i__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__readValueFrom(
    Imf_V3iAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_V3iAttribute_readValueFrom Imf_3_0__TypedAttribute_Imath__V3i__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__copyValueFrom(
    Imf_V3iAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_V3iAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imath__V3i__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_V3iAttribute_newAttribute Imf_3_0__TypedAttribute_Imath__V3i__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_V3iAttribute_knownType Imf_3_0__TypedAttribute_Imath__V3i__knownType


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__ctor(
    Imf_V3iAttribute_t * * this_);
#define Imf_V3iAttribute_ctor Imf_3_0__TypedAttribute_Imath__V3i__ctor


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__from_value(
    Imf_V3iAttribute_t * * this_
    , Imath_V3i_t const * value);
#define Imf_V3iAttribute_from_value Imf_3_0__TypedAttribute_Imath__V3i__from_value


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__ctor_copy(
    Imf_V3iAttribute_t * * this_
    , Imf_V3iAttribute_t const * other);
#define Imf_V3iAttribute_ctor_copy Imf_3_0__TypedAttribute_Imath__V3i__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__dtor(
    Imf_V3iAttribute_t * this_);
#define Imf_V3iAttribute_dtor Imf_3_0__TypedAttribute_Imath__V3i__dtor


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__assign(
    Imf_V3iAttribute_t * this_
    , Imf_V3iAttribute_t * * return_
    , Imf_V3iAttribute_t const * other);
#define Imf_V3iAttribute_assign Imf_3_0__TypedAttribute_Imath__V3i__assign


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__value(
    Imf_V3iAttribute_t * this_
    , Imath_V3i_t * * return_);
#define Imf_V3iAttribute_value Imf_3_0__TypedAttribute_Imath__V3i__value


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__value_const(
    Imf_V3iAttribute_t const * this_
    , Imath_V3i_t const * * return_);
#define Imf_V3iAttribute_value_const Imf_3_0__TypedAttribute_Imath__V3i__value_const


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__staticTypeName(
    char const * * return_);
#define Imf_V3iAttribute_staticTypeName Imf_3_0__TypedAttribute_Imath__V3i__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_V3iAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imath__V3i__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__cast_ptr(
    Imf_V3iAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_V3iAttribute_cast_ptr Imf_3_0__TypedAttribute_Imath__V3i__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__cast_ptr_const(
    Imf_V3iAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_V3iAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imath__V3i__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__cast(
    Imf_V3iAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_V3iAttribute_cast Imf_3_0__TypedAttribute_Imath__V3i__cast


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__cast_const(
    Imf_V3iAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_V3iAttribute_cast_const Imf_3_0__TypedAttribute_Imath__V3i__cast_const


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__registerAttributeType();
#define Imf_V3iAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imath__V3i__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__V3i__unRegisterAttributeType();
#define Imf_V3iAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imath__V3i__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__typeName(
    Imf_V3fAttribute_t const * this_
    , char const * * return_);
#define Imf_V3fAttribute_typeName Imf_3_0__TypedAttribute_Imath__V3f__typeName


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__copy(
    Imf_V3fAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_V3fAttribute_copy Imf_3_0__TypedAttribute_Imath__V3f__copy


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__writeValueTo(
    Imf_V3fAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_V3fAttribute_writeValueTo Imf_3_0__TypedAttribute_Imath__V3f__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__readValueFrom(
    Imf_V3fAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_V3fAttribute_readValueFrom Imf_3_0__TypedAttribute_Imath__V3f__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__copyValueFrom(
    Imf_V3fAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_V3fAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imath__V3f__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_V3fAttribute_newAttribute Imf_3_0__TypedAttribute_Imath__V3f__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_V3fAttribute_knownType Imf_3_0__TypedAttribute_Imath__V3f__knownType


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__ctor(
    Imf_V3fAttribute_t * * this_);
#define Imf_V3fAttribute_ctor Imf_3_0__TypedAttribute_Imath__V3f__ctor


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__from_value(
    Imf_V3fAttribute_t * * this_
    , Imath_V3f_t const * value);
#define Imf_V3fAttribute_from_value Imf_3_0__TypedAttribute_Imath__V3f__from_value


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__ctor_copy(
    Imf_V3fAttribute_t * * this_
    , Imf_V3fAttribute_t const * other);
#define Imf_V3fAttribute_ctor_copy Imf_3_0__TypedAttribute_Imath__V3f__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__dtor(
    Imf_V3fAttribute_t * this_);
#define Imf_V3fAttribute_dtor Imf_3_0__TypedAttribute_Imath__V3f__dtor


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__assign(
    Imf_V3fAttribute_t * this_
    , Imf_V3fAttribute_t * * return_
    , Imf_V3fAttribute_t const * other);
#define Imf_V3fAttribute_assign Imf_3_0__TypedAttribute_Imath__V3f__assign


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__value(
    Imf_V3fAttribute_t * this_
    , Imath_V3f_t * * return_);
#define Imf_V3fAttribute_value Imf_3_0__TypedAttribute_Imath__V3f__value


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__value_const(
    Imf_V3fAttribute_t const * this_
    , Imath_V3f_t const * * return_);
#define Imf_V3fAttribute_value_const Imf_3_0__TypedAttribute_Imath__V3f__value_const


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__staticTypeName(
    char const * * return_);
#define Imf_V3fAttribute_staticTypeName Imf_3_0__TypedAttribute_Imath__V3f__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_V3fAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imath__V3f__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__cast_ptr(
    Imf_V3fAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_V3fAttribute_cast_ptr Imf_3_0__TypedAttribute_Imath__V3f__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__cast_ptr_const(
    Imf_V3fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_V3fAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imath__V3f__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__cast(
    Imf_V3fAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_V3fAttribute_cast Imf_3_0__TypedAttribute_Imath__V3f__cast


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__cast_const(
    Imf_V3fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_V3fAttribute_cast_const Imf_3_0__TypedAttribute_Imath__V3f__cast_const


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__registerAttributeType();
#define Imf_V3fAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imath__V3f__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__V3f__unRegisterAttributeType();
#define Imf_V3fAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imath__V3f__unRegisterAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__typeName(
    Imf_V3dAttribute_t const * this_
    , char const * * return_);
#define Imf_V3dAttribute_typeName Imf_3_0__TypedAttribute_Imath__V3d__typeName


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__copy(
    Imf_V3dAttribute_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_V3dAttribute_copy Imf_3_0__TypedAttribute_Imath__V3d__copy


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__writeValueTo(
    Imf_V3dAttribute_t const * this_
    , Imf_OStream_t * os
    , int version);
#define Imf_V3dAttribute_writeValueTo Imf_3_0__TypedAttribute_Imath__V3d__writeValueTo


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__readValueFrom(
    Imf_V3dAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version);
#define Imf_V3dAttribute_readValueFrom Imf_3_0__TypedAttribute_Imath__V3d__readValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__copyValueFrom(
    Imf_V3dAttribute_t * this_
    , Imf_Attribute_t const * other);
#define Imf_V3dAttribute_copyValueFrom Imf_3_0__TypedAttribute_Imath__V3d__copyValueFrom


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName);
#define Imf_V3dAttribute_newAttribute Imf_3_0__TypedAttribute_Imath__V3d__newAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__knownType(
    _Bool * return_
    , char const * typeName);
#define Imf_V3dAttribute_knownType Imf_3_0__TypedAttribute_Imath__V3d__knownType


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__ctor(
    Imf_V3dAttribute_t * * this_);
#define Imf_V3dAttribute_ctor Imf_3_0__TypedAttribute_Imath__V3d__ctor


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__from_value(
    Imf_V3dAttribute_t * * this_
    , Imath_V3d_t const * value);
#define Imf_V3dAttribute_from_value Imf_3_0__TypedAttribute_Imath__V3d__from_value


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__ctor_copy(
    Imf_V3dAttribute_t * * this_
    , Imf_V3dAttribute_t const * other);
#define Imf_V3dAttribute_ctor_copy Imf_3_0__TypedAttribute_Imath__V3d__ctor_copy


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__dtor(
    Imf_V3dAttribute_t * this_);
#define Imf_V3dAttribute_dtor Imf_3_0__TypedAttribute_Imath__V3d__dtor


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__assign(
    Imf_V3dAttribute_t * this_
    , Imf_V3dAttribute_t * * return_
    , Imf_V3dAttribute_t const * other);
#define Imf_V3dAttribute_assign Imf_3_0__TypedAttribute_Imath__V3d__assign


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__value(
    Imf_V3dAttribute_t * this_
    , Imath_V3d_t * * return_);
#define Imf_V3dAttribute_value Imf_3_0__TypedAttribute_Imath__V3d__value


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__value_const(
    Imf_V3dAttribute_t const * this_
    , Imath_V3d_t const * * return_);
#define Imf_V3dAttribute_value_const Imf_3_0__TypedAttribute_Imath__V3d__value_const


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__staticTypeName(
    char const * * return_);
#define Imf_V3dAttribute_staticTypeName Imf_3_0__TypedAttribute_Imath__V3d__staticTypeName


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__makeNewAttribute(
    Imf_Attribute_t * * return_);
#define Imf_V3dAttribute_makeNewAttribute Imf_3_0__TypedAttribute_Imath__V3d__makeNewAttribute


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__cast_ptr(
    Imf_V3dAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_V3dAttribute_cast_ptr Imf_3_0__TypedAttribute_Imath__V3d__cast_ptr


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__cast_ptr_const(
    Imf_V3dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_V3dAttribute_cast_ptr_const Imf_3_0__TypedAttribute_Imath__V3d__cast_ptr_const


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__cast(
    Imf_V3dAttribute_t * * return_
    , Imf_Attribute_t * attribute);
#define Imf_V3dAttribute_cast Imf_3_0__TypedAttribute_Imath__V3d__cast


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__cast_const(
    Imf_V3dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute);
#define Imf_V3dAttribute_cast_const Imf_3_0__TypedAttribute_Imath__V3d__cast_const


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__registerAttributeType();
#define Imf_V3dAttribute_registerAttributeType Imf_3_0__TypedAttribute_Imath__V3d__registerAttributeType


unsigned int Imf_3_0__TypedAttribute_Imath__V3d__unRegisterAttributeType();
#define Imf_V3dAttribute_unRegisterAttributeType Imf_3_0__TypedAttribute_Imath__V3d__unRegisterAttributeType


#ifdef __cplusplus
}
#endif

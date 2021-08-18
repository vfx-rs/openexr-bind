#pragma once
#include "openexr-api-export.h"

#include <imf_compression.h>
#include <imf_lineorder.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__TypedAttribute_Imf_3_0__StringVector__t_s Imf_3_0__TypedAttribute_Imf_3_0__StringVector__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__StringVector__t Imf_CppVectorStringAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imf_3_0__Envmap__t_s Imf_3_0__TypedAttribute_Imf_3_0__Envmap__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__Envmap__t Imf_EnvmapAttribute_t;
typedef struct Imf_3_0__ChannelList_t_s Imf_3_0__ChannelList_t;
typedef Imf_3_0__ChannelList_t Imf_ChannelList_t;
typedef struct Imath_3_0__Box_Imath_3_0__Vec2_int___t_s Imath_3_0__Box_Imath_3_0__Vec2_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_int___t Imath_Box2i_t;
typedef struct Imf_3_0__TypedAttribute_Imath__V3i__t_s Imf_3_0__TypedAttribute_Imath__V3i__t;
typedef Imf_3_0__TypedAttribute_Imath__V3i__t Imf_V3iAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__t_s Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__t Imf_KeyCodeAttribute_t;
typedef struct Imf_3_0__TypedAttribute_float__t_s Imf_3_0__TypedAttribute_float__t;
typedef Imf_3_0__TypedAttribute_float__t Imf_FloatAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imath__M44d__t_s Imf_3_0__TypedAttribute_Imath__M44d__t;
typedef Imf_3_0__TypedAttribute_Imath__M44d__t Imf_M44dAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imath__Box2f__t_s Imf_3_0__TypedAttribute_Imath__Box2f__t;
typedef Imf_3_0__TypedAttribute_Imath__Box2f__t Imf_Box2fAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__t_s Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__t Imf_TimeCodeAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imath__V2i__t_s Imf_3_0__TypedAttribute_Imath__V2i__t;
typedef Imf_3_0__TypedAttribute_Imath__V2i__t Imf_V2iAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__t_s Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__t Imf_ChannelListAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imf_3_0__Compression__t_s Imf_3_0__TypedAttribute_Imf_3_0__Compression__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__Compression__t Imf_CompressionAttribute_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct Imf_3_0__PreviewImage_t_s Imf_3_0__PreviewImage_t;
typedef Imf_3_0__PreviewImage_t Imf_PreviewImage_t;
typedef struct Imath_3_0__Vec2_float__t_s Imath_3_0__Vec2_float__t;
typedef Imath_3_0__Vec2_float__t Imath_V2f_t;
typedef struct Imf_3_0__TypedAttribute_Imath__V2f__t_s Imf_3_0__TypedAttribute_Imath__V2f__t;
typedef Imf_3_0__TypedAttribute_Imath__V2f__t Imf_V2fAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__t_s Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__t Imf_ChromaticitiesAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imath__V2d__t_s Imf_3_0__TypedAttribute_Imath__V2d__t;
typedef Imf_3_0__TypedAttribute_Imath__V2d__t Imf_V2dAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imath__Box2i__t_s Imf_3_0__TypedAttribute_Imath__Box2i__t;
typedef Imf_3_0__TypedAttribute_Imath__Box2i__t Imf_Box2iAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imf_3_0__Rational__t_s Imf_3_0__TypedAttribute_Imf_3_0__Rational__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__Rational__t Imf_RationalAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__t_s Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__t Imf_PreviewImageAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__t_s Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__t Imf_TileDescriptionAttribute_t;
typedef struct Imf_3_0__Attribute_t_s Imf_3_0__Attribute_t;
typedef Imf_3_0__Attribute_t Imf_Attribute_t;
typedef struct Imf_3_0__TypedAttribute_Imath__M33f__t_s Imf_3_0__TypedAttribute_Imath__M33f__t;
typedef Imf_3_0__TypedAttribute_Imath__M33f__t Imf_M33fAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__t_s Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__t Imf_CppVectorFloatAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__t_s Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__t Imf_DeepImageStateAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imath__V3f__t_s Imf_3_0__TypedAttribute_Imath__V3f__t;
typedef Imf_3_0__TypedAttribute_Imath__V3f__t Imf_V3fAttribute_t;
typedef struct Imf_3_0__TileDescription_t_s Imf_3_0__TileDescription_t;
typedef Imf_3_0__TileDescription_t Imf_TileDescription_t;
typedef struct Imf_3_0__TypedAttribute_Imath__M33d__t_s Imf_3_0__TypedAttribute_Imath__M33d__t;
typedef Imf_3_0__TypedAttribute_Imath__M33d__t Imf_M33dAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imath__V3d__t_s Imf_3_0__TypedAttribute_Imath__V3d__t;
typedef Imf_3_0__TypedAttribute_Imath__V3d__t Imf_V3dAttribute_t;
typedef struct Imf_3_0__TypedAttribute_double__t_s Imf_3_0__TypedAttribute_double__t;
typedef Imf_3_0__TypedAttribute_double__t Imf_DoubleAttribute_t;
typedef struct Imf_3_0__TypedAttribute_std__string__t_s Imf_3_0__TypedAttribute_std__string__t;
typedef Imf_3_0__TypedAttribute_std__string__t Imf_CppStringAttribute_t;
typedef struct Imf_3_0__OStream_t_s Imf_3_0__OStream_t;
typedef Imf_3_0__OStream_t Imf_OStream_t;
typedef struct Imf_3_0__IStream_t_s Imf_3_0__IStream_t;
typedef Imf_3_0__IStream_t Imf_IStream_t;
typedef struct Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__t_s Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__t;
typedef Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__t Imf_LineOrderAttribute_t;
typedef struct Imf_3_0__TypedAttribute_int__t_s Imf_3_0__TypedAttribute_int__t;
typedef Imf_3_0__TypedAttribute_int__t Imf_IntAttribute_t;
typedef struct Imf_3_0__TypedAttribute_Imath__M44f__t_s Imf_3_0__TypedAttribute_Imath__M44f__t;
typedef Imf_3_0__TypedAttribute_Imath__M44f__t Imf_M44fAttribute_t;

typedef struct Imf_3_0__Header_t_s {
    char data[56];
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;

typedef struct Imf_3_0__Header__Iterator_t_s {
    char data[8];
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__Header__Iterator_t;
typedef Imf_3_0__Header__Iterator_t Imf_Header_Iterator_t;

typedef struct Imf_3_0__Header__ConstIterator_t_s {
    char data[8];
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__Header__ConstIterator_t;
typedef Imf_3_0__Header__ConstIterator_t Imf_Header_ConstIterator_t;


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_sizeof();
#define Imf_Header_sizeof Imf_3_0__Header_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_alignof();
#define Imf_Header_alignof Imf_3_0__Header_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_with_dimensions(
    Imf_Header_t * this_
    , int width
    , int height
    , float pixelAspectRatio
    , Imath_V2f_t const * screenWindowCenter
    , float screenWindowWidth
    , Imf_LineOrder lineOrder
    , Imf_Compression compression);
#define Imf_Header_with_dimensions Imf_3_0__Header_with_dimensions


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_ctor(
    Imf_Header_t * this_
    , Imath_Box2i_t const * displayWindow
    , Imath_Box2i_t const * dataWindow
    , float pixelAspectRatio
    , Imath_V2f_t const * screenWindowCenter
    , float screenWindowWidth
    , Imf_LineOrder lineOrder
    , Imf_Compression compression);
#define Imf_Header_ctor Imf_3_0__Header_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_copy(
    Imf_Header_t * this_
    , Imf_Header_t const * rhs);
#define Imf_Header_copy Imf_3_0__Header_copy


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_dtor(
    Imf_Header_t * this_);
#define Imf_Header_dtor Imf_3_0__Header_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__assign(
    Imf_Header_t * this_
    , Imf_Header_t * * return_
    , Imf_Header_t const * rhs);
#define Imf_Header__assign Imf_3_0__Header__assign


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_insert(
    Imf_Header_t * this_
    , char const * name
    , Imf_Attribute_t const * attribute);
#define Imf_Header_insert Imf_3_0__Header_insert


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_erase(
    Imf_Header_t * this_
    , char const * name);
#define Imf_Header_erase Imf_3_0__Header_erase


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_index(
    Imf_Header_t * this_
    , Imf_Attribute_t * * return_
    , char const * name);
#define Imf_Header_index Imf_3_0__Header_index


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_index_const(
    Imf_Header_t const * this_
    , Imf_Attribute_t const * * return_
    , char const * name);
#define Imf_Header_index_const Imf_3_0__Header_index_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Int(
    Imf_Header_t * this_
    , Imf_IntAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Int Imf_3_0__Header_findTypedAttribute_Int


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Float(
    Imf_Header_t * this_
    , Imf_FloatAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Float Imf_3_0__Header_findTypedAttribute_Float


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Double(
    Imf_Header_t * this_
    , Imf_DoubleAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Double Imf_3_0__Header_findTypedAttribute_Double


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Box2i(
    Imf_Header_t * this_
    , Imf_Box2iAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Box2i Imf_3_0__Header_findTypedAttribute_Box2i


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Box2f(
    Imf_Header_t * this_
    , Imf_Box2fAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Box2f Imf_3_0__Header_findTypedAttribute_Box2f


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_ChannelList(
    Imf_Header_t * this_
    , Imf_ChannelListAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_ChannelList Imf_3_0__Header_findTypedAttribute_ChannelList


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Chromaticities(
    Imf_Header_t * this_
    , Imf_ChromaticitiesAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Chromaticities Imf_3_0__Header_findTypedAttribute_Chromaticities


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Compression(
    Imf_Header_t * this_
    , Imf_CompressionAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Compression Imf_3_0__Header_findTypedAttribute_Compression


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_DeepImageState(
    Imf_Header_t * this_
    , Imf_DeepImageStateAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_DeepImageState Imf_3_0__Header_findTypedAttribute_DeepImageState


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Envmap(
    Imf_Header_t * this_
    , Imf_EnvmapAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Envmap Imf_3_0__Header_findTypedAttribute_Envmap


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_CppVectorFloat(
    Imf_Header_t * this_
    , Imf_CppVectorFloatAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_CppVectorFloat Imf_3_0__Header_findTypedAttribute_CppVectorFloat


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_CppVectorString(
    Imf_Header_t * this_
    , Imf_CppVectorStringAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_CppVectorString Imf_3_0__Header_findTypedAttribute_CppVectorString


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_CppString(
    Imf_Header_t * this_
    , Imf_CppStringAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_CppString Imf_3_0__Header_findTypedAttribute_CppString


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_KeyCode(
    Imf_Header_t * this_
    , Imf_KeyCodeAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_KeyCode Imf_3_0__Header_findTypedAttribute_KeyCode


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_LineOrder(
    Imf_Header_t * this_
    , Imf_LineOrderAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_LineOrder Imf_3_0__Header_findTypedAttribute_LineOrder


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M33f(
    Imf_Header_t * this_
    , Imf_M33fAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_M33f Imf_3_0__Header_findTypedAttribute_M33f


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M33d(
    Imf_Header_t * this_
    , Imf_M33dAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_M33d Imf_3_0__Header_findTypedAttribute_M33d


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M44f(
    Imf_Header_t * this_
    , Imf_M44fAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_M44f Imf_3_0__Header_findTypedAttribute_M44f


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M44d(
    Imf_Header_t * this_
    , Imf_M44dAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_M44d Imf_3_0__Header_findTypedAttribute_M44d


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_PreviewImage(
    Imf_Header_t * this_
    , Imf_PreviewImageAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_PreviewImage Imf_3_0__Header_findTypedAttribute_PreviewImage


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Rational(
    Imf_Header_t * this_
    , Imf_RationalAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Rational Imf_3_0__Header_findTypedAttribute_Rational


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_TileDescription(
    Imf_Header_t * this_
    , Imf_TileDescriptionAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_TileDescription Imf_3_0__Header_findTypedAttribute_TileDescription


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_TimeCode(
    Imf_Header_t * this_
    , Imf_TimeCodeAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_TimeCode Imf_3_0__Header_findTypedAttribute_TimeCode


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V2i(
    Imf_Header_t * this_
    , Imf_V2iAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_V2i Imf_3_0__Header_findTypedAttribute_V2i


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V2f(
    Imf_Header_t * this_
    , Imf_V2fAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_V2f Imf_3_0__Header_findTypedAttribute_V2f


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V2d(
    Imf_Header_t * this_
    , Imf_V2dAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_V2d Imf_3_0__Header_findTypedAttribute_V2d


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V3i(
    Imf_Header_t * this_
    , Imf_V3iAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_V3i Imf_3_0__Header_findTypedAttribute_V3i


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V3f(
    Imf_Header_t * this_
    , Imf_V3fAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_V3f Imf_3_0__Header_findTypedAttribute_V3f


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V3d(
    Imf_Header_t * this_
    , Imf_V3dAttribute_t * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_V3d Imf_3_0__Header_findTypedAttribute_V3d


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Int_const(
    Imf_Header_t const * this_
    , Imf_IntAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Int_const Imf_3_0__Header_findTypedAttribute_Int_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Float_const(
    Imf_Header_t const * this_
    , Imf_FloatAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Float_const Imf_3_0__Header_findTypedAttribute_Float_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Double_const(
    Imf_Header_t const * this_
    , Imf_DoubleAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Double_const Imf_3_0__Header_findTypedAttribute_Double_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Box2i_const(
    Imf_Header_t const * this_
    , Imf_Box2iAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Box2i_const Imf_3_0__Header_findTypedAttribute_Box2i_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Box2f_const(
    Imf_Header_t const * this_
    , Imf_Box2fAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Box2f_const Imf_3_0__Header_findTypedAttribute_Box2f_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_ChannelList_const(
    Imf_Header_t const * this_
    , Imf_ChannelListAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_ChannelList_const Imf_3_0__Header_findTypedAttribute_ChannelList_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Chromaticities_const(
    Imf_Header_t const * this_
    , Imf_ChromaticitiesAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Chromaticities_const Imf_3_0__Header_findTypedAttribute_Chromaticities_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Compression_const(
    Imf_Header_t const * this_
    , Imf_CompressionAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Compression_const Imf_3_0__Header_findTypedAttribute_Compression_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_DeepImageState_const(
    Imf_Header_t const * this_
    , Imf_DeepImageStateAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_DeepImageState_const Imf_3_0__Header_findTypedAttribute_DeepImageState_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Envmap_const(
    Imf_Header_t const * this_
    , Imf_EnvmapAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Envmap_const Imf_3_0__Header_findTypedAttribute_Envmap_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_CppVectorFloat_const(
    Imf_Header_t const * this_
    , Imf_CppVectorFloatAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_CppVectorFloat_const Imf_3_0__Header_findTypedAttribute_CppVectorFloat_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_CppVectorString_const(
    Imf_Header_t const * this_
    , Imf_CppVectorStringAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_CppVectorString_const Imf_3_0__Header_findTypedAttribute_CppVectorString_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_CppString_const(
    Imf_Header_t const * this_
    , Imf_CppStringAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_CppString_const Imf_3_0__Header_findTypedAttribute_CppString_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_KeyCode_const(
    Imf_Header_t const * this_
    , Imf_KeyCodeAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_KeyCode_const Imf_3_0__Header_findTypedAttribute_KeyCode_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_LineOrder_const(
    Imf_Header_t const * this_
    , Imf_LineOrderAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_LineOrder_const Imf_3_0__Header_findTypedAttribute_LineOrder_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M33f_const(
    Imf_Header_t const * this_
    , Imf_M33fAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_M33f_const Imf_3_0__Header_findTypedAttribute_M33f_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M33d_const(
    Imf_Header_t const * this_
    , Imf_M33dAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_M33d_const Imf_3_0__Header_findTypedAttribute_M33d_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M44f_const(
    Imf_Header_t const * this_
    , Imf_M44fAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_M44f_const Imf_3_0__Header_findTypedAttribute_M44f_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M44d_const(
    Imf_Header_t const * this_
    , Imf_M44dAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_M44d_const Imf_3_0__Header_findTypedAttribute_M44d_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_PreviewImage_const(
    Imf_Header_t const * this_
    , Imf_PreviewImageAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_PreviewImage_const Imf_3_0__Header_findTypedAttribute_PreviewImage_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Rational_const(
    Imf_Header_t const * this_
    , Imf_RationalAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_Rational_const Imf_3_0__Header_findTypedAttribute_Rational_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_TileDescription_const(
    Imf_Header_t const * this_
    , Imf_TileDescriptionAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_TileDescription_const Imf_3_0__Header_findTypedAttribute_TileDescription_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_TimeCode_const(
    Imf_Header_t const * this_
    , Imf_TimeCodeAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_TimeCode_const Imf_3_0__Header_findTypedAttribute_TimeCode_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V2i_const(
    Imf_Header_t const * this_
    , Imf_V2iAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_V2i_const Imf_3_0__Header_findTypedAttribute_V2i_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V2f_const(
    Imf_Header_t const * this_
    , Imf_V2fAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_V2f_const Imf_3_0__Header_findTypedAttribute_V2f_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V2d_const(
    Imf_Header_t const * this_
    , Imf_V2dAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_V2d_const Imf_3_0__Header_findTypedAttribute_V2d_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V3i_const(
    Imf_Header_t const * this_
    , Imf_V3iAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_V3i_const Imf_3_0__Header_findTypedAttribute_V3i_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V3f_const(
    Imf_Header_t const * this_
    , Imf_V3fAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_V3f_const Imf_3_0__Header_findTypedAttribute_V3f_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V3d_const(
    Imf_Header_t const * this_
    , Imf_V3dAttribute_t const * * return_
    , char const * name);
#define Imf_Header_findTypedAttribute_V3d_const Imf_3_0__Header_findTypedAttribute_V3d_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_begin(
    Imf_Header_t * this_
    , Imf_Header_Iterator_t * return_);
#define Imf_Header_begin Imf_3_0__Header_begin


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_begin_const(
    Imf_Header_t const * this_
    , Imf_Header_ConstIterator_t * return_);
#define Imf_Header_begin_const Imf_3_0__Header_begin_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_end(
    Imf_Header_t * this_
    , Imf_Header_Iterator_t * return_);
#define Imf_Header_end Imf_3_0__Header_end


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_end_const(
    Imf_Header_t const * this_
    , Imf_Header_ConstIterator_t * return_);
#define Imf_Header_end_const Imf_3_0__Header_end_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_find(
    Imf_Header_t * this_
    , Imf_Header_Iterator_t * return_
    , char const * name);
#define Imf_Header_find Imf_3_0__Header_find


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_find_const(
    Imf_Header_t const * this_
    , Imf_Header_ConstIterator_t * return_
    , char const * name);
#define Imf_Header_find_const Imf_3_0__Header_find_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_displayWindow(
    Imf_Header_t * this_
    , Imath_Box2i_t * * return_);
#define Imf_Header_displayWindow Imf_3_0__Header_displayWindow


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_displayWindow_const(
    Imf_Header_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_Header_displayWindow_const Imf_3_0__Header_displayWindow_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_dataWindow(
    Imf_Header_t * this_
    , Imath_Box2i_t * * return_);
#define Imf_Header_dataWindow Imf_3_0__Header_dataWindow


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_dataWindow_const(
    Imf_Header_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_Header_dataWindow_const Imf_3_0__Header_dataWindow_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_pixelAspectRatio(
    Imf_Header_t * this_
    , float * * return_);
#define Imf_Header_pixelAspectRatio Imf_3_0__Header_pixelAspectRatio


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_pixelAspectRatio_const(
    Imf_Header_t const * this_
    , float const * * return_);
#define Imf_Header_pixelAspectRatio_const Imf_3_0__Header_pixelAspectRatio_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_screenWindowCenter(
    Imf_Header_t * this_
    , Imath_V2f_t * * return_);
#define Imf_Header_screenWindowCenter Imf_3_0__Header_screenWindowCenter


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_screenWindowCenter_const(
    Imf_Header_t const * this_
    , Imath_V2f_t const * * return_);
#define Imf_Header_screenWindowCenter_const Imf_3_0__Header_screenWindowCenter_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_screenWindowWidth(
    Imf_Header_t * this_
    , float * * return_);
#define Imf_Header_screenWindowWidth Imf_3_0__Header_screenWindowWidth


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_screenWindowWidth_const(
    Imf_Header_t const * this_
    , float const * * return_);
#define Imf_Header_screenWindowWidth_const Imf_3_0__Header_screenWindowWidth_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_channels(
    Imf_Header_t * this_
    , Imf_ChannelList_t * * return_);
#define Imf_Header_channels Imf_3_0__Header_channels


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_channels_const(
    Imf_Header_t const * this_
    , Imf_ChannelList_t const * * return_);
#define Imf_Header_channels_const Imf_3_0__Header_channels_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_lineOrder(
    Imf_Header_t * this_
    , Imf_LineOrder * * return_);
#define Imf_Header_lineOrder Imf_3_0__Header_lineOrder


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_lineOrder_const(
    Imf_Header_t const * this_
    , Imf_LineOrder const * * return_);
#define Imf_Header_lineOrder_const Imf_3_0__Header_lineOrder_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_compression(
    Imf_Header_t * this_
    , Imf_Compression * * return_);
#define Imf_Header_compression Imf_3_0__Header_compression


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_compression_const(
    Imf_Header_t const * this_
    , Imf_Compression const * * return_);
#define Imf_Header_compression_const Imf_3_0__Header_compression_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setName(
    Imf_Header_t * this_
    , std_string_t const * name);
#define Imf_Header_setName Imf_3_0__Header_setName


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_name(
    Imf_Header_t * this_
    , std_string_t * * return_);
#define Imf_Header_name Imf_3_0__Header_name


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_name_const(
    Imf_Header_t const * this_
    , std_string_t const * * return_);
#define Imf_Header_name_const Imf_3_0__Header_name_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasName(
    Imf_Header_t const * this_
    , _Bool * return_);
#define Imf_Header_hasName Imf_3_0__Header_hasName


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setType(
    Imf_Header_t * this_
    , std_string_t const * Type);
#define Imf_Header_setType Imf_3_0__Header_setType


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_type(
    Imf_Header_t * this_
    , std_string_t * * return_);
#define Imf_Header_type Imf_3_0__Header_type


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_type_const(
    Imf_Header_t const * this_
    , std_string_t const * * return_);
#define Imf_Header_type_const Imf_3_0__Header_type_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasType(
    Imf_Header_t const * this_
    , _Bool * return_);
#define Imf_Header_hasType Imf_3_0__Header_hasType


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setVersion(
    Imf_Header_t * this_
    , int const version);
#define Imf_Header_setVersion Imf_3_0__Header_setVersion


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_version(
    Imf_Header_t * this_
    , int * * return_);
#define Imf_Header_version Imf_3_0__Header_version


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_version_const(
    Imf_Header_t const * this_
    , int const * * return_);
#define Imf_Header_version_const Imf_3_0__Header_version_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasVersion(
    Imf_Header_t const * this_
    , _Bool * return_);
#define Imf_Header_hasVersion Imf_3_0__Header_hasVersion


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setChunkCount(
    Imf_Header_t * this_
    , int chunks);
#define Imf_Header_setChunkCount Imf_3_0__Header_setChunkCount


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasChunkCount(
    Imf_Header_t const * this_
    , _Bool * return_);
#define Imf_Header_hasChunkCount Imf_3_0__Header_hasChunkCount


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_chunkCount_const(
    Imf_Header_t const * this_
    , int const * * return_);
#define Imf_Header_chunkCount_const Imf_3_0__Header_chunkCount_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setView(
    Imf_Header_t * this_
    , std_string_t const * view);
#define Imf_Header_setView Imf_3_0__Header_setView


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasView(
    Imf_Header_t const * this_
    , _Bool * return_);
#define Imf_Header_hasView Imf_3_0__Header_hasView


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_view(
    Imf_Header_t * this_
    , std_string_t * * return_);
#define Imf_Header_view Imf_3_0__Header_view


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_view_const(
    Imf_Header_t const * this_
    , std_string_t const * * return_);
#define Imf_Header_view_const Imf_3_0__Header_view_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setTileDescription(
    Imf_Header_t * this_
    , Imf_TileDescription_t const * td);
#define Imf_Header_setTileDescription Imf_3_0__Header_setTileDescription


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_tileDescription(
    Imf_Header_t * this_
    , Imf_TileDescription_t * * return_);
#define Imf_Header_tileDescription Imf_3_0__Header_tileDescription


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_tileDescription_const(
    Imf_Header_t const * this_
    , Imf_TileDescription_t const * * return_);
#define Imf_Header_tileDescription_const Imf_3_0__Header_tileDescription_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasTileDescription(
    Imf_Header_t const * this_
    , _Bool * return_);
#define Imf_Header_hasTileDescription Imf_3_0__Header_hasTileDescription


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setPreviewImage(
    Imf_Header_t * this_
    , Imf_PreviewImage_t const * p);
#define Imf_Header_setPreviewImage Imf_3_0__Header_setPreviewImage


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_previewImage(
    Imf_Header_t * this_
    , Imf_PreviewImage_t * * return_);
#define Imf_Header_previewImage Imf_3_0__Header_previewImage


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_previewImage_const(
    Imf_Header_t const * this_
    , Imf_PreviewImage_t const * * return_);
#define Imf_Header_previewImage_const Imf_3_0__Header_previewImage_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasPreviewImage(
    Imf_Header_t const * this_
    , _Bool * return_);
#define Imf_Header_hasPreviewImage Imf_3_0__Header_hasPreviewImage


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_sanityCheck(
    Imf_Header_t const * this_
    , _Bool isTiled
    , _Bool isMultipartFile);
#define Imf_Header_sanityCheck Imf_3_0__Header_sanityCheck


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setMaxImageSize(
    int maxWidth
    , int maxHeight);
#define Imf_Header_setMaxImageSize Imf_3_0__Header_setMaxImageSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setMaxTileSize(
    int maxWidth
    , int maxHeight);
#define Imf_Header_setMaxTileSize Imf_3_0__Header_setMaxTileSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_readsNothing(
    Imf_Header_t * this_
    , _Bool * return_);
#define Imf_Header_readsNothing Imf_3_0__Header_readsNothing


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_writeTo(
    Imf_Header_t const * this_
    , unsigned long * return_
    , Imf_OStream_t * os
    , _Bool isTiled);
#define Imf_Header_writeTo Imf_3_0__Header_writeTo


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_readFrom(
    Imf_Header_t * this_
    , Imf_IStream_t * is
    , int * version);
#define Imf_Header_readFrom Imf_3_0__Header_readFrom


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_sizeof();
#define Imf_Header_Iterator_sizeof Imf_3_0__Header__Iterator_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_alignof();
#define Imf_Header_Iterator_alignof Imf_3_0__Header__Iterator_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_ctor(
    Imf_Header_Iterator_t * this_);
#define Imf_Header_Iterator_ctor Imf_3_0__Header__Iterator_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_inc(
    Imf_Header_Iterator_t * this_
    , Imf_Header_Iterator_t * * return_);
#define Imf_Header_Iterator_inc Imf_3_0__Header__Iterator_inc


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_name(
    Imf_Header_Iterator_t const * this_
    , char const * * return_);
#define Imf_Header_Iterator_name Imf_3_0__Header__Iterator_name


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_attribute(
    Imf_Header_Iterator_t const * this_
    , Imf_Attribute_t * * return_);
#define Imf_Header_Iterator_attribute Imf_3_0__Header__Iterator_attribute


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_copy(
    Imf_Header_Iterator_t * this_
    , Imf_Header_Iterator_t const * rhs);
#define Imf_Header_Iterator_copy Imf_3_0__Header__Iterator_copy


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_move(
    Imf_Header_Iterator_t * this_
    , Imf_Header_Iterator_t * rhs);
#define Imf_Header_Iterator_move Imf_3_0__Header__Iterator_move


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_sizeof();
#define Imf_Header_ConstIterator_sizeof Imf_3_0__Header__ConstIterator_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_alignof();
#define Imf_Header_ConstIterator_alignof Imf_3_0__Header__ConstIterator_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_ctor(
    Imf_Header_ConstIterator_t * this_);
#define Imf_Header_ConstIterator_ctor Imf_3_0__Header__ConstIterator_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_from_mut(
    Imf_Header_ConstIterator_t * this_
    , Imf_Header_Iterator_t const * rhs);
#define Imf_Header_ConstIterator_from_mut Imf_3_0__Header__ConstIterator_from_mut


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_inc(
    Imf_Header_ConstIterator_t * this_
    , Imf_Header_ConstIterator_t * * return_);
#define Imf_Header_ConstIterator_inc Imf_3_0__Header__ConstIterator_inc


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_name(
    Imf_Header_ConstIterator_t const * this_
    , char const * * return_);
#define Imf_Header_ConstIterator_name Imf_3_0__Header__ConstIterator_name


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_attribute(
    Imf_Header_ConstIterator_t const * this_
    , Imf_Attribute_t const * * return_);
#define Imf_Header_ConstIterator_attribute Imf_3_0__Header__ConstIterator_attribute


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_copy(
    Imf_Header_ConstIterator_t * this_
    , Imf_Header_ConstIterator_t const * rhs);
#define Imf_Header_ConstIterator_copy Imf_3_0__Header__ConstIterator_copy


OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_move(
    Imf_Header_ConstIterator_t * this_
    , Imf_Header_ConstIterator_t * rhs);
#define Imf_Header_ConstIterator_move Imf_3_0__Header__ConstIterator_move


#ifdef __cplusplus
}
#endif

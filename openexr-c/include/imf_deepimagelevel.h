#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__DeepImageChannel_t_s Imf_3_0__DeepImageChannel_t;
typedef Imf_3_0__DeepImageChannel_t Imf_DeepImageChannel_t;
typedef struct Imf_3_0__TypedDeepImageChannel_half__t_s Imf_3_0__TypedDeepImageChannel_half__t;
typedef Imf_3_0__TypedDeepImageChannel_half__t Imf_DeepHalfChannel_t;
typedef struct Imf_3_0__TypedDeepImageChannel_float__t_s Imf_3_0__TypedDeepImageChannel_float__t;
typedef Imf_3_0__TypedDeepImageChannel_float__t Imf_DeepFloatChannel_t;
typedef struct Imf_3_0__TypedDeepImageChannel_unsignedint__t_s Imf_3_0__TypedDeepImageChannel_unsignedint__t;
typedef Imf_3_0__TypedDeepImageChannel_unsignedint__t Imf_DeepUIntChannel_t;
typedef struct Imath_3_0__Box_Imath_3_0__Vec2_int___t_s Imath_3_0__Box_Imath_3_0__Vec2_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_int___t Imath_Box2i_t;
typedef struct Imf_3_0__SampleCountChannel_t_s Imf_3_0__SampleCountChannel_t;
typedef Imf_3_0__SampleCountChannel_t Imf_SampleCountChannel_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct Imf_3_0__Image_t_s Imf_3_0__Image_t;
typedef Imf_3_0__Image_t Imf_Image_t;
typedef struct Imf_3_0__DeepImage_t_s Imf_3_0__DeepImage_t;
typedef Imf_3_0__DeepImage_t Imf_DeepImage_t;

typedef struct Imf_3_0__DeepImageLevel_t_s {
    char _unused;
} OPENEXR_ALIGN(8) Imf_3_0__DeepImageLevel_t;
typedef Imf_3_0__DeepImageLevel_t Imf_DeepImageLevel_t;

typedef struct Imf_3_0__DeepImageLevel__Iterator_t_s {
    char data[8];
} OPENEXR_ALIGN(8) Imf_3_0__DeepImageLevel__Iterator_t;
typedef Imf_3_0__DeepImageLevel__Iterator_t Imf_DeepImageLevel_Iterator_t;

typedef struct Imf_3_0__DeepImageLevel__ConstIterator_t_s {
    char data[8];
} OPENEXR_ALIGN(8) Imf_3_0__DeepImageLevel__ConstIterator_t;
typedef Imf_3_0__DeepImageLevel__ConstIterator_t Imf_DeepImageLevel_ConstIterator_t;


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_image(
    Imf_DeepImageLevel_t * this_
    , Imf_Image_t * * return_);
#define Imf_DeepImageLevel_image Imf_3_0__DeepImageLevel_image


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_image_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_Image_t const * * return_);
#define Imf_DeepImageLevel_image_const Imf_3_0__DeepImageLevel_image_const


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_xLevelNumber(
    Imf_DeepImageLevel_t const * this_
    , int * return_);
#define Imf_DeepImageLevel_xLevelNumber Imf_3_0__DeepImageLevel_xLevelNumber


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_yLevelNumber(
    Imf_DeepImageLevel_t const * this_
    , int * return_);
#define Imf_DeepImageLevel_yLevelNumber Imf_3_0__DeepImageLevel_yLevelNumber


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_dataWindow(
    Imf_DeepImageLevel_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_DeepImageLevel_dataWindow Imf_3_0__DeepImageLevel_dataWindow


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_deepImage(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepImage_t * * return_);
#define Imf_DeepImageLevel_deepImage Imf_3_0__DeepImageLevel_deepImage


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_deepImage_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepImage_t const * * return_);
#define Imf_DeepImageLevel_deepImage_const Imf_3_0__DeepImageLevel_deepImage_const


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_findChannel(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepImageChannel_t * * return_
    , std_string_t const * name);
#define Imf_DeepImageLevel_findChannel Imf_3_0__DeepImageLevel_findChannel


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_findChannel_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepImageChannel_t const * * return_
    , std_string_t const * name);
#define Imf_DeepImageLevel_findChannel_const Imf_3_0__DeepImageLevel_findChannel_const


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_channel(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepImageChannel_t * * return_
    , std_string_t const * name);
#define Imf_DeepImageLevel_channel Imf_3_0__DeepImageLevel_channel


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_channel_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepImageChannel_t const * * return_
    , std_string_t const * name);
#define Imf_DeepImageLevel_channel_const Imf_3_0__DeepImageLevel_channel_const


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_findTypedChannel_half(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepHalfChannel_t * * return_
    , std_string_t const * name);
#define Imf_DeepImageLevel_findTypedChannel_half Imf_3_0__DeepImageLevel_findTypedChannel_half


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_findTypedChannel_float(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepFloatChannel_t * * return_
    , std_string_t const * name);
#define Imf_DeepImageLevel_findTypedChannel_float Imf_3_0__DeepImageLevel_findTypedChannel_float


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_findTypedChannel_uint(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepUIntChannel_t * * return_
    , std_string_t const * name);
#define Imf_DeepImageLevel_findTypedChannel_uint Imf_3_0__DeepImageLevel_findTypedChannel_uint


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_findTypedChannel_half_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepHalfChannel_t const * * return_
    , std_string_t const * name);
#define Imf_DeepImageLevel_findTypedChannel_half_const Imf_3_0__DeepImageLevel_findTypedChannel_half_const


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_findTypedChannel_float_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepFloatChannel_t const * * return_
    , std_string_t const * name);
#define Imf_DeepImageLevel_findTypedChannel_float_const Imf_3_0__DeepImageLevel_findTypedChannel_float_const


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_findTypedChannel_uint_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepUIntChannel_t const * * return_
    , std_string_t const * name);
#define Imf_DeepImageLevel_findTypedChannel_uint_const Imf_3_0__DeepImageLevel_findTypedChannel_uint_const


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_begin(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepImageLevel_Iterator_t * return_);
#define Imf_DeepImageLevel_begin Imf_3_0__DeepImageLevel_begin


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_begin_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepImageLevel_ConstIterator_t * return_);
#define Imf_DeepImageLevel_begin_const Imf_3_0__DeepImageLevel_begin_const


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_end(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepImageLevel_Iterator_t * return_);
#define Imf_DeepImageLevel_end Imf_3_0__DeepImageLevel_end


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_end_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepImageLevel_ConstIterator_t * return_);
#define Imf_DeepImageLevel_end_const Imf_3_0__DeepImageLevel_end_const


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_sampleCounts(
    Imf_DeepImageLevel_t * this_
    , Imf_SampleCountChannel_t * * return_);
#define Imf_DeepImageLevel_sampleCounts Imf_3_0__DeepImageLevel_sampleCounts


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel_sampleCounts_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_SampleCountChannel_t const * * return_);
#define Imf_DeepImageLevel_sampleCounts_const Imf_3_0__DeepImageLevel_sampleCounts_const


/** returns the size of this type in bytes */
OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__Iterator_sizeof();
#define Imf_DeepImageLevel_Iterator_sizeof Imf_3_0__DeepImageLevel__Iterator_sizeof


/** returns the size of this type in bytes */
OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__Iterator_alignof();
#define Imf_DeepImageLevel_Iterator_alignof Imf_3_0__DeepImageLevel__Iterator_alignof


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__Iterator_ctor(
    Imf_DeepImageLevel_Iterator_t * this_);
#define Imf_DeepImageLevel_Iterator_ctor Imf_3_0__DeepImageLevel__Iterator_ctor


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__Iterator_inc(
    Imf_DeepImageLevel_Iterator_t * this_
    , Imf_DeepImageLevel_Iterator_t * * return_);
#define Imf_DeepImageLevel_Iterator_inc Imf_3_0__DeepImageLevel__Iterator_inc


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__Iterator_name(
    Imf_DeepImageLevel_Iterator_t const * this_
    , std_string_t const * * return_);
#define Imf_DeepImageLevel_Iterator_name Imf_3_0__DeepImageLevel__Iterator_name


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__Iterator_channel(
    Imf_DeepImageLevel_Iterator_t const * this_
    , Imf_DeepImageChannel_t * * return_);
#define Imf_DeepImageLevel_Iterator_channel Imf_3_0__DeepImageLevel__Iterator_channel


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__Iterator_copy(
    Imf_DeepImageLevel_Iterator_t * this_
    , Imf_DeepImageLevel_Iterator_t const * rhs);
#define Imf_DeepImageLevel_Iterator_copy Imf_3_0__DeepImageLevel__Iterator_copy


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__Iterator_move(
    Imf_DeepImageLevel_Iterator_t * this_
    , Imf_DeepImageLevel_Iterator_t * rhs);
#define Imf_DeepImageLevel_Iterator_move Imf_3_0__DeepImageLevel__Iterator_move


/** returns the size of this type in bytes */
OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__ConstIterator_sizeof();
#define Imf_DeepImageLevel_ConstIterator_sizeof Imf_3_0__DeepImageLevel__ConstIterator_sizeof


/** returns the size of this type in bytes */
OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__ConstIterator_alignof();
#define Imf_DeepImageLevel_ConstIterator_alignof Imf_3_0__DeepImageLevel__ConstIterator_alignof


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__ConstIterator_ctor(
    Imf_DeepImageLevel_ConstIterator_t * this_);
#define Imf_DeepImageLevel_ConstIterator_ctor Imf_3_0__DeepImageLevel__ConstIterator_ctor


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__ConstIterator_from_mut(
    Imf_DeepImageLevel_ConstIterator_t * this_
    , Imf_DeepImageLevel_Iterator_t const * rhs);
#define Imf_DeepImageLevel_ConstIterator_from_mut Imf_3_0__DeepImageLevel__ConstIterator_from_mut


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__ConstIterator_inc(
    Imf_DeepImageLevel_ConstIterator_t * this_
    , Imf_DeepImageLevel_ConstIterator_t * * return_);
#define Imf_DeepImageLevel_ConstIterator_inc Imf_3_0__DeepImageLevel__ConstIterator_inc


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__ConstIterator_name(
    Imf_DeepImageLevel_ConstIterator_t const * this_
    , std_string_t const * * return_);
#define Imf_DeepImageLevel_ConstIterator_name Imf_3_0__DeepImageLevel__ConstIterator_name


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__ConstIterator_channel(
    Imf_DeepImageLevel_ConstIterator_t const * this_
    , Imf_DeepImageChannel_t const * * return_);
#define Imf_DeepImageLevel_ConstIterator_channel Imf_3_0__DeepImageLevel__ConstIterator_channel


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__ConstIterator_copy(
    Imf_DeepImageLevel_ConstIterator_t * this_
    , Imf_DeepImageLevel_ConstIterator_t const * rhs);
#define Imf_DeepImageLevel_ConstIterator_copy Imf_3_0__DeepImageLevel__ConstIterator_copy


OPENEXR_API unsigned int Imf_3_0__DeepImageLevel__ConstIterator_move(
    Imf_DeepImageLevel_ConstIterator_t * this_
    , Imf_DeepImageLevel_ConstIterator_t * rhs);
#define Imf_DeepImageLevel_ConstIterator_move Imf_3_0__DeepImageLevel__ConstIterator_move


#ifdef __cplusplus
}
#endif

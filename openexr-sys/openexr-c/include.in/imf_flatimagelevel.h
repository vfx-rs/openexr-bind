#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__FlatImageChannel_t_s Imf_3_0__FlatImageChannel_t;
typedef Imf_3_0__FlatImageChannel_t Imf_FlatImageChannel_t;
typedef struct Imf_3_0__TypedFlatImageChannel_half__t_s Imf_3_0__TypedFlatImageChannel_half__t;
typedef Imf_3_0__TypedFlatImageChannel_half__t Imf_FlatHalfChannel_t;
typedef struct Imf_3_0__TypedFlatImageChannel_float__t_s Imf_3_0__TypedFlatImageChannel_float__t;
typedef Imf_3_0__TypedFlatImageChannel_float__t Imf_FlatFloatChannel_t;
typedef struct Imf_3_0__FlatImage_t_s Imf_3_0__FlatImage_t;
typedef Imf_3_0__FlatImage_t Imf_FlatImage_t;
typedef struct Imf_3_0__TypedFlatImageChannel_unsignedint__t_s Imf_3_0__TypedFlatImageChannel_unsignedint__t;
typedef Imf_3_0__TypedFlatImageChannel_unsignedint__t Imf_FlatUIntChannel_t;
typedef struct Imath_3_0__Box_Imath_3_0__Vec2_int___t_s Imath_3_0__Box_Imath_3_0__Vec2_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_int___t Imath_Box2i_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

typedef struct Imf_3_0__FlatImageLevel_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__FlatImageLevel_t;
typedef Imf_3_0__FlatImageLevel_t Imf_FlatImageLevel_t;

typedef struct Imf_3_0__FlatImageLevel__Iterator_t_s {
    char data[%SIZEImf_3_0::FlatImageLevel::Iterator%];
} OPENEXR_CPPMM_ALIGN(%ALIGNImf_3_0::FlatImageLevel::Iterator%) Imf_3_0__FlatImageLevel__Iterator_t;
typedef Imf_3_0__FlatImageLevel__Iterator_t Imf_FlatImageLevel_Iterator_t;

typedef struct Imf_3_0__FlatImageLevel__ConstIterator_t_s {
    char data[%SIZEImf_3_0::FlatImageLevel::ConstIterator%];
} OPENEXR_CPPMM_ALIGN(%ALIGNImf_3_0::FlatImageLevel::ConstIterator%) Imf_3_0__FlatImageLevel__ConstIterator_t;
typedef Imf_3_0__FlatImageLevel__ConstIterator_t Imf_FlatImageLevel_ConstIterator_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_xLevelNumber(
    Imf_FlatImageLevel_t const * this_
    , int * return_);
#define Imf_FlatImageLevel_xLevelNumber Imf_3_0__FlatImageLevel_xLevelNumber


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_yLevelNumber(
    Imf_FlatImageLevel_t const * this_
    , int * return_);
#define Imf_FlatImageLevel_yLevelNumber Imf_3_0__FlatImageLevel_yLevelNumber


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_dataWindow(
    Imf_FlatImageLevel_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_FlatImageLevel_dataWindow Imf_3_0__FlatImageLevel_dataWindow


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_flatImage(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatImage_t * * return_);
#define Imf_FlatImageLevel_flatImage Imf_3_0__FlatImageLevel_flatImage


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_flatImage_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatImage_t const * * return_);
#define Imf_FlatImageLevel_flatImage_const Imf_3_0__FlatImageLevel_flatImage_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_findChannel(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatImageChannel_t * * return_
    , std_string_t const * name);
#define Imf_FlatImageLevel_findChannel Imf_3_0__FlatImageLevel_findChannel


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_findChannel_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatImageChannel_t const * * return_
    , std_string_t const * name);
#define Imf_FlatImageLevel_findChannel_const Imf_3_0__FlatImageLevel_findChannel_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_channel(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatImageChannel_t * * return_
    , std_string_t const * name);
#define Imf_FlatImageLevel_channel Imf_3_0__FlatImageLevel_channel


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_channel_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatImageChannel_t const * * return_
    , std_string_t const * name);
#define Imf_FlatImageLevel_channel_const Imf_3_0__FlatImageLevel_channel_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_findTypedChannel_half(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatHalfChannel_t * * return_
    , std_string_t const * name);
#define Imf_FlatImageLevel_findTypedChannel_half Imf_3_0__FlatImageLevel_findTypedChannel_half


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_findTypedChannel_float(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatFloatChannel_t * * return_
    , std_string_t const * name);
#define Imf_FlatImageLevel_findTypedChannel_float Imf_3_0__FlatImageLevel_findTypedChannel_float


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_findTypedChannel_uint(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatUIntChannel_t * * return_
    , std_string_t const * name);
#define Imf_FlatImageLevel_findTypedChannel_uint Imf_3_0__FlatImageLevel_findTypedChannel_uint


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_findTypedChannel_half_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatHalfChannel_t const * * return_
    , std_string_t const * name);
#define Imf_FlatImageLevel_findTypedChannel_half_const Imf_3_0__FlatImageLevel_findTypedChannel_half_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_findTypedChannel_float_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatFloatChannel_t const * * return_
    , std_string_t const * name);
#define Imf_FlatImageLevel_findTypedChannel_float_const Imf_3_0__FlatImageLevel_findTypedChannel_float_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_findTypedChannel_uint_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatUIntChannel_t const * * return_
    , std_string_t const * name);
#define Imf_FlatImageLevel_findTypedChannel_uint_const Imf_3_0__FlatImageLevel_findTypedChannel_uint_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_begin(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatImageLevel_Iterator_t * return_);
#define Imf_FlatImageLevel_begin Imf_3_0__FlatImageLevel_begin


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_begin_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatImageLevel_ConstIterator_t * return_);
#define Imf_FlatImageLevel_begin_const Imf_3_0__FlatImageLevel_begin_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_end(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatImageLevel_Iterator_t * return_);
#define Imf_FlatImageLevel_end Imf_3_0__FlatImageLevel_end


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel_end_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatImageLevel_ConstIterator_t * return_);
#define Imf_FlatImageLevel_end_const Imf_3_0__FlatImageLevel_end_const


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__Iterator_sizeof();
#define Imf_FlatImageLevel_Iterator_sizeof Imf_3_0__FlatImageLevel__Iterator_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__Iterator_alignof();
#define Imf_FlatImageLevel_Iterator_alignof Imf_3_0__FlatImageLevel__Iterator_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__Iterator_ctor(
    Imf_FlatImageLevel_Iterator_t * this_);
#define Imf_FlatImageLevel_Iterator_ctor Imf_3_0__FlatImageLevel__Iterator_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__Iterator_inc(
    Imf_FlatImageLevel_Iterator_t * this_
    , Imf_FlatImageLevel_Iterator_t * * return_);
#define Imf_FlatImageLevel_Iterator_inc Imf_3_0__FlatImageLevel__Iterator_inc


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__Iterator_name(
    Imf_FlatImageLevel_Iterator_t const * this_
    , std_string_t const * * return_);
#define Imf_FlatImageLevel_Iterator_name Imf_3_0__FlatImageLevel__Iterator_name


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__Iterator_channel(
    Imf_FlatImageLevel_Iterator_t const * this_
    , Imf_FlatImageChannel_t * * return_);
#define Imf_FlatImageLevel_Iterator_channel Imf_3_0__FlatImageLevel__Iterator_channel


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__Iterator_copy(
    Imf_FlatImageLevel_Iterator_t * this_
    , Imf_FlatImageLevel_Iterator_t const * rhs);
#define Imf_FlatImageLevel_Iterator_copy Imf_3_0__FlatImageLevel__Iterator_copy


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__ConstIterator_sizeof();
#define Imf_FlatImageLevel_ConstIterator_sizeof Imf_3_0__FlatImageLevel__ConstIterator_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__ConstIterator_alignof();
#define Imf_FlatImageLevel_ConstIterator_alignof Imf_3_0__FlatImageLevel__ConstIterator_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__ConstIterator_ctor(
    Imf_FlatImageLevel_ConstIterator_t * this_);
#define Imf_FlatImageLevel_ConstIterator_ctor Imf_3_0__FlatImageLevel__ConstIterator_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__ConstIterator_from_mut(
    Imf_FlatImageLevel_ConstIterator_t * this_
    , Imf_FlatImageLevel_Iterator_t const * rhs);
#define Imf_FlatImageLevel_ConstIterator_from_mut Imf_3_0__FlatImageLevel__ConstIterator_from_mut


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__ConstIterator_inc(
    Imf_FlatImageLevel_ConstIterator_t * this_
    , Imf_FlatImageLevel_ConstIterator_t * * return_);
#define Imf_FlatImageLevel_ConstIterator_inc Imf_3_0__FlatImageLevel__ConstIterator_inc


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__ConstIterator_name(
    Imf_FlatImageLevel_ConstIterator_t const * this_
    , std_string_t const * * return_);
#define Imf_FlatImageLevel_ConstIterator_name Imf_3_0__FlatImageLevel__ConstIterator_name


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__ConstIterator_channel(
    Imf_FlatImageLevel_ConstIterator_t const * this_
    , Imf_FlatImageChannel_t const * * return_);
#define Imf_FlatImageLevel_ConstIterator_channel Imf_3_0__FlatImageLevel__ConstIterator_channel


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__ConstIterator_copy(
    Imf_FlatImageLevel_ConstIterator_t * this_
    , Imf_FlatImageLevel_ConstIterator_t const * rhs);
#define Imf_FlatImageLevel_ConstIterator_copy Imf_3_0__FlatImageLevel__ConstIterator_copy


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageLevel__ConstIterator_move(
    Imf_FlatImageLevel_ConstIterator_t * this_
    , Imf_FlatImageLevel_ConstIterator_t * rhs);
#define Imf_FlatImageLevel_ConstIterator_move Imf_3_0__FlatImageLevel__ConstIterator_move


#ifdef __cplusplus
}
#endif

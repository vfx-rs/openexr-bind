#pragma once
#include "openexr-api-export.h"

#include <imf_pixeltype.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imath_3_0__Box_Imath_3_0__Vec2_int___t_s Imath_3_0__Box_Imath_3_0__Vec2_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_int___t Imath_Box2i_t;
typedef struct Imath_3_0__Vec2_int__t_s Imath_3_0__Vec2_int__t;
typedef Imath_3_0__Vec2_int__t Imath_V2i_t;

typedef struct Imf_3_0__Slice_t_s {
    char data[56];
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__Slice_t;
typedef Imf_3_0__Slice_t Imf_Slice_t;

typedef struct Imf_3_0__FrameBuffer_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__FrameBuffer_t;
typedef Imf_3_0__FrameBuffer_t Imf_FrameBuffer_t;

typedef struct Imf_3_0__FrameBuffer__Iterator_t_s {
    char data[8];
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__FrameBuffer__Iterator_t;
typedef Imf_3_0__FrameBuffer__Iterator_t Imf_FrameBuffer_Iterator_t;

typedef struct Imf_3_0__FrameBuffer__ConstIterator_t_s {
    char data[8];
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__FrameBuffer__ConstIterator_t;
typedef Imf_3_0__FrameBuffer__ConstIterator_t Imf_FrameBuffer_ConstIterator_t;


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__Slice_sizeof();
#define Imf_Slice_sizeof Imf_3_0__Slice_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__Slice_alignof();
#define Imf_Slice_alignof Imf_3_0__Slice_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__Slice_ctor(
    Imf_Slice_t * this_
    , Imf_PixelType type
    , char * base
    , size_t xStride
    , size_t yStride
    , int xSampling
    , int ySampling
    , double fillValue
    , _Bool xTileCoords
    , _Bool yTileCoords);
#define Imf_Slice_ctor Imf_3_0__Slice_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__Slice_with_origin(
    Imf_Slice_t * return_
    , Imf_PixelType type
    , void const * ptr
    , Imath_V2i_t const * origin
    , long w
    , long h
    , size_t xStride
    , size_t yStride
    , int xSampling
    , int ySampling
    , double fillValue
    , _Bool xTileCoords
    , _Bool yTileCoords);
#define Imf_Slice_with_origin Imf_3_0__Slice_with_origin


OPENEXR_CPPMM_API unsigned int Imf_3_0__Slice_with_window(
    Imf_Slice_t * return_
    , Imf_PixelType type
    , void const * ptr
    , Imath_Box2i_t const * dataWindow
    , size_t xStride
    , size_t yStride
    , int xSampling
    , int ySampling
    , double fillValue
    , _Bool xTileCoords
    , _Bool yTileCoords);
#define Imf_Slice_with_window Imf_3_0__Slice_with_window


OPENEXR_CPPMM_API unsigned int Imf_3_0__Slice_dtor(
    Imf_Slice_t * this_);
#define Imf_Slice_dtor Imf_3_0__Slice_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__Slice_copy(
    Imf_Slice_t * this_
    , Imf_Slice_t const * rhs);
#define Imf_Slice_copy Imf_3_0__Slice_copy


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer_insert(
    Imf_FrameBuffer_t * this_
    , char const * name
    , Imf_Slice_t const * slice);
#define Imf_FrameBuffer_insert Imf_3_0__FrameBuffer_insert


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer_findSlice(
    Imf_FrameBuffer_t * this_
    , Imf_Slice_t * * return_
    , char const * name);
#define Imf_FrameBuffer_findSlice Imf_3_0__FrameBuffer_findSlice


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer_findSlice_const(
    Imf_FrameBuffer_t const * this_
    , Imf_Slice_t const * * return_
    , char const * name);
#define Imf_FrameBuffer_findSlice_const Imf_3_0__FrameBuffer_findSlice_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer_begin(
    Imf_FrameBuffer_t * this_
    , Imf_FrameBuffer_Iterator_t * return_);
#define Imf_FrameBuffer_begin Imf_3_0__FrameBuffer_begin


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer_begin_const(
    Imf_FrameBuffer_t const * this_
    , Imf_FrameBuffer_ConstIterator_t * return_);
#define Imf_FrameBuffer_begin_const Imf_3_0__FrameBuffer_begin_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer_end(
    Imf_FrameBuffer_t * this_
    , Imf_FrameBuffer_Iterator_t * return_);
#define Imf_FrameBuffer_end Imf_3_0__FrameBuffer_end


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer_end_const(
    Imf_FrameBuffer_t const * this_
    , Imf_FrameBuffer_ConstIterator_t * return_);
#define Imf_FrameBuffer_end_const Imf_3_0__FrameBuffer_end_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer_find(
    Imf_FrameBuffer_t * this_
    , Imf_FrameBuffer_Iterator_t * return_
    , char const * name);
#define Imf_FrameBuffer_find Imf_3_0__FrameBuffer_find


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer_find_1(
    Imf_FrameBuffer_t const * this_
    , Imf_FrameBuffer_ConstIterator_t * return_
    , char const * name);
#define Imf_FrameBuffer_find_1 Imf_3_0__FrameBuffer_find_1


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer_copy(
    Imf_FrameBuffer_t * * this_
    , Imf_FrameBuffer_t const * rhs);
#define Imf_FrameBuffer_copy Imf_3_0__FrameBuffer_copy


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer_dtor(
    Imf_FrameBuffer_t * this_);
#define Imf_FrameBuffer_dtor Imf_3_0__FrameBuffer_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer_ctor(
    Imf_FrameBuffer_t * * this_);
#define Imf_FrameBuffer_ctor Imf_3_0__FrameBuffer_ctor


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__Iterator_sizeof();
#define Imf_FrameBuffer_Iterator_sizeof Imf_3_0__FrameBuffer__Iterator_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__Iterator_alignof();
#define Imf_FrameBuffer_Iterator_alignof Imf_3_0__FrameBuffer__Iterator_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__Iterator_ctor(
    Imf_FrameBuffer_Iterator_t * this_);
#define Imf_FrameBuffer_Iterator_ctor Imf_3_0__FrameBuffer__Iterator_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__Iterator__op_inc(
    Imf_FrameBuffer_Iterator_t * this_
    , Imf_FrameBuffer_Iterator_t * * return_);
#define Imf_FrameBuffer_Iterator__op_inc Imf_3_0__FrameBuffer__Iterator__op_inc


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__Iterator_name(
    Imf_FrameBuffer_Iterator_t const * this_
    , char const * * return_);
#define Imf_FrameBuffer_Iterator_name Imf_3_0__FrameBuffer__Iterator_name


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__Iterator_slice(
    Imf_FrameBuffer_Iterator_t const * this_
    , Imf_Slice_t * * return_);
#define Imf_FrameBuffer_Iterator_slice Imf_3_0__FrameBuffer__Iterator_slice


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__Iterator_copy(
    Imf_FrameBuffer_Iterator_t * this_
    , Imf_FrameBuffer_Iterator_t const * rhs);
#define Imf_FrameBuffer_Iterator_copy Imf_3_0__FrameBuffer__Iterator_copy


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__ConstIterator_sizeof();
#define Imf_FrameBuffer_ConstIterator_sizeof Imf_3_0__FrameBuffer__ConstIterator_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__ConstIterator_alignof();
#define Imf_FrameBuffer_ConstIterator_alignof Imf_3_0__FrameBuffer__ConstIterator_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__ConstIterator_ctor(
    Imf_FrameBuffer_ConstIterator_t * this_);
#define Imf_FrameBuffer_ConstIterator_ctor Imf_3_0__FrameBuffer__ConstIterator_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__ConstIterator_from_mut(
    Imf_FrameBuffer_ConstIterator_t * this_
    , Imf_FrameBuffer_Iterator_t const * rhs);
#define Imf_FrameBuffer_ConstIterator_from_mut Imf_3_0__FrameBuffer__ConstIterator_from_mut


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__ConstIterator__op_inc(
    Imf_FrameBuffer_ConstIterator_t * this_
    , Imf_FrameBuffer_ConstIterator_t * * return_);
#define Imf_FrameBuffer_ConstIterator__op_inc Imf_3_0__FrameBuffer__ConstIterator__op_inc


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__ConstIterator_name(
    Imf_FrameBuffer_ConstIterator_t const * this_
    , char const * * return_);
#define Imf_FrameBuffer_ConstIterator_name Imf_3_0__FrameBuffer__ConstIterator_name


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__ConstIterator_slice(
    Imf_FrameBuffer_ConstIterator_t const * this_
    , Imf_Slice_t const * * return_);
#define Imf_FrameBuffer_ConstIterator_slice Imf_3_0__FrameBuffer__ConstIterator_slice


OPENEXR_CPPMM_API unsigned int Imf_3_0__FrameBuffer__ConstIterator_copy(
    Imf_FrameBuffer_ConstIterator_t * this_
    , Imf_FrameBuffer_ConstIterator_t const * rhs);
#define Imf_FrameBuffer_ConstIterator_copy Imf_3_0__FrameBuffer__ConstIterator_copy


OPENEXR_CPPMM_API unsigned int Imf_3_0_frame_buffer_const_iter_eq(
    _Bool * return_
    , Imf_FrameBuffer_ConstIterator_t const * _param0
    , Imf_FrameBuffer_ConstIterator_t const * _param1);
#define Imf_frame_buffer_const_iter_eq Imf_3_0_frame_buffer_const_iter_eq


#ifdef __cplusplus
}
#endif

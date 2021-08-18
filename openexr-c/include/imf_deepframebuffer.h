#pragma once
#include <imf_pixeltype.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__Slice_t_s Imf_3_0__Slice_t;
typedef Imf_3_0__Slice_t Imf_Slice_t;

typedef struct Imf_3_0__DeepSlice_t_s {
    char data[56];
} __attribute__((aligned(8))) Imf_3_0__DeepSlice_t;
typedef Imf_3_0__DeepSlice_t Imf_DeepSlice_t;

typedef struct Imf_3_0__DeepFrameBuffer_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__DeepFrameBuffer_t;
typedef Imf_3_0__DeepFrameBuffer_t Imf_DeepFrameBuffer_t;

typedef struct Imf_3_0__DeepFrameBuffer__Iterator_t_s {
    char data[8];
} __attribute__((aligned(8))) Imf_3_0__DeepFrameBuffer__Iterator_t;
typedef Imf_3_0__DeepFrameBuffer__Iterator_t Imf_DeepFrameBuffer_Iterator_t;

typedef struct Imf_3_0__DeepFrameBuffer__ConstIterator_t_s {
    char data[8];
} __attribute__((aligned(8))) Imf_3_0__DeepFrameBuffer__ConstIterator_t;
typedef Imf_3_0__DeepFrameBuffer__ConstIterator_t Imf_DeepFrameBuffer_ConstIterator_t;


/** returns the size of this type in bytes */
unsigned int Imf_3_0__DeepSlice_sizeof();
#define Imf_DeepSlice_sizeof Imf_3_0__DeepSlice_sizeof


/** returns the size of this type in bytes */
unsigned int Imf_3_0__DeepSlice_alignof();
#define Imf_DeepSlice_alignof Imf_3_0__DeepSlice_alignof


unsigned int Imf_3_0__DeepSlice_ctor(
    Imf_DeepSlice_t * this_
    , Imf_PixelType type
    , char * base
    , unsigned long xStride
    , unsigned long yStride
    , unsigned long sampleStride
    , int xSampling
    , int ySampling
    , double fillValue
    , _Bool xTileCoords
    , _Bool yTileCoords);
#define Imf_DeepSlice_ctor Imf_3_0__DeepSlice_ctor


unsigned int Imf_3_0__DeepSlice_dtor(
    Imf_DeepSlice_t * this_);
#define Imf_DeepSlice_dtor Imf_3_0__DeepSlice_dtor


unsigned int Imf_3_0__DeepSlice_copy(
    Imf_DeepSlice_t * this_
    , Imf_DeepSlice_t const * rhs);
#define Imf_DeepSlice_copy Imf_3_0__DeepSlice_copy


unsigned int Imf_3_0__DeepFrameBuffer_insert(
    Imf_DeepFrameBuffer_t * this_
    , char const * name
    , Imf_DeepSlice_t const * slice);
#define Imf_DeepFrameBuffer_insert Imf_3_0__DeepFrameBuffer_insert


unsigned int Imf_3_0__DeepFrameBuffer_findSlice(
    Imf_DeepFrameBuffer_t * this_
    , Imf_DeepSlice_t * * return_
    , char const * name);
#define Imf_DeepFrameBuffer_findSlice Imf_3_0__DeepFrameBuffer_findSlice


unsigned int Imf_3_0__DeepFrameBuffer_findSlice_const(
    Imf_DeepFrameBuffer_t const * this_
    , Imf_DeepSlice_t const * * return_
    , char const * name);
#define Imf_DeepFrameBuffer_findSlice_const Imf_3_0__DeepFrameBuffer_findSlice_const


unsigned int Imf_3_0__DeepFrameBuffer_begin(
    Imf_DeepFrameBuffer_t * this_
    , Imf_DeepFrameBuffer_Iterator_t * return_);
#define Imf_DeepFrameBuffer_begin Imf_3_0__DeepFrameBuffer_begin


unsigned int Imf_3_0__DeepFrameBuffer_begin_const(
    Imf_DeepFrameBuffer_t const * this_
    , Imf_DeepFrameBuffer_ConstIterator_t * return_);
#define Imf_DeepFrameBuffer_begin_const Imf_3_0__DeepFrameBuffer_begin_const


unsigned int Imf_3_0__DeepFrameBuffer_end(
    Imf_DeepFrameBuffer_t * this_
    , Imf_DeepFrameBuffer_Iterator_t * return_);
#define Imf_DeepFrameBuffer_end Imf_3_0__DeepFrameBuffer_end


unsigned int Imf_3_0__DeepFrameBuffer_end_const(
    Imf_DeepFrameBuffer_t const * this_
    , Imf_DeepFrameBuffer_ConstIterator_t * return_);
#define Imf_DeepFrameBuffer_end_const Imf_3_0__DeepFrameBuffer_end_const


unsigned int Imf_3_0__DeepFrameBuffer_insertSampleCountSlice(
    Imf_DeepFrameBuffer_t * this_
    , Imf_Slice_t const * slice);
#define Imf_DeepFrameBuffer_insertSampleCountSlice Imf_3_0__DeepFrameBuffer_insertSampleCountSlice


unsigned int Imf_3_0__DeepFrameBuffer_getSampleCountSlice(
    Imf_DeepFrameBuffer_t const * this_
    , Imf_Slice_t const * * return_);
#define Imf_DeepFrameBuffer_getSampleCountSlice Imf_3_0__DeepFrameBuffer_getSampleCountSlice


unsigned int Imf_3_0__DeepFrameBuffer_copy(
    Imf_DeepFrameBuffer_t * * this_
    , Imf_DeepFrameBuffer_t const * rhs);
#define Imf_DeepFrameBuffer_copy Imf_3_0__DeepFrameBuffer_copy


unsigned int Imf_3_0__DeepFrameBuffer_dtor(
    Imf_DeepFrameBuffer_t * this_);
#define Imf_DeepFrameBuffer_dtor Imf_3_0__DeepFrameBuffer_dtor


unsigned int Imf_3_0__DeepFrameBuffer_ctor(
    Imf_DeepFrameBuffer_t * * this_);
#define Imf_DeepFrameBuffer_ctor Imf_3_0__DeepFrameBuffer_ctor


/** returns the size of this type in bytes */
unsigned int Imf_3_0__DeepFrameBuffer__Iterator_sizeof();
#define Imf_DeepFrameBuffer_Iterator_sizeof Imf_3_0__DeepFrameBuffer__Iterator_sizeof


/** returns the size of this type in bytes */
unsigned int Imf_3_0__DeepFrameBuffer__Iterator_alignof();
#define Imf_DeepFrameBuffer_Iterator_alignof Imf_3_0__DeepFrameBuffer__Iterator_alignof


unsigned int Imf_3_0__DeepFrameBuffer__Iterator_ctor(
    Imf_DeepFrameBuffer_Iterator_t * this_);
#define Imf_DeepFrameBuffer_Iterator_ctor Imf_3_0__DeepFrameBuffer__Iterator_ctor


unsigned int Imf_3_0__DeepFrameBuffer__Iterator__op_inc(
    Imf_DeepFrameBuffer_Iterator_t * this_
    , Imf_DeepFrameBuffer_Iterator_t * * return_);
#define Imf_DeepFrameBuffer_Iterator__op_inc Imf_3_0__DeepFrameBuffer__Iterator__op_inc


unsigned int Imf_3_0__DeepFrameBuffer__Iterator_name(
    Imf_DeepFrameBuffer_Iterator_t const * this_
    , char const * * return_);
#define Imf_DeepFrameBuffer_Iterator_name Imf_3_0__DeepFrameBuffer__Iterator_name


unsigned int Imf_3_0__DeepFrameBuffer__Iterator_slice(
    Imf_DeepFrameBuffer_Iterator_t const * this_
    , Imf_DeepSlice_t * * return_);
#define Imf_DeepFrameBuffer_Iterator_slice Imf_3_0__DeepFrameBuffer__Iterator_slice


unsigned int Imf_3_0__DeepFrameBuffer__Iterator_copy(
    Imf_DeepFrameBuffer_Iterator_t * this_
    , Imf_DeepFrameBuffer_Iterator_t const * rhs);
#define Imf_DeepFrameBuffer_Iterator_copy Imf_3_0__DeepFrameBuffer__Iterator_copy


/** returns the size of this type in bytes */
unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_sizeof();
#define Imf_DeepFrameBuffer_ConstIterator_sizeof Imf_3_0__DeepFrameBuffer__ConstIterator_sizeof


/** returns the size of this type in bytes */
unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_alignof();
#define Imf_DeepFrameBuffer_ConstIterator_alignof Imf_3_0__DeepFrameBuffer__ConstIterator_alignof


unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_ctor(
    Imf_DeepFrameBuffer_ConstIterator_t * this_);
#define Imf_DeepFrameBuffer_ConstIterator_ctor Imf_3_0__DeepFrameBuffer__ConstIterator_ctor


unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_from_mut(
    Imf_DeepFrameBuffer_ConstIterator_t * this_
    , Imf_DeepFrameBuffer_Iterator_t const * rhs);
#define Imf_DeepFrameBuffer_ConstIterator_from_mut Imf_3_0__DeepFrameBuffer__ConstIterator_from_mut


unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator__op_inc(
    Imf_DeepFrameBuffer_ConstIterator_t * this_
    , Imf_DeepFrameBuffer_ConstIterator_t * * return_);
#define Imf_DeepFrameBuffer_ConstIterator__op_inc Imf_3_0__DeepFrameBuffer__ConstIterator__op_inc


unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_name(
    Imf_DeepFrameBuffer_ConstIterator_t const * this_
    , char const * * return_);
#define Imf_DeepFrameBuffer_ConstIterator_name Imf_3_0__DeepFrameBuffer__ConstIterator_name


unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_slice(
    Imf_DeepFrameBuffer_ConstIterator_t const * this_
    , Imf_DeepSlice_t const * * return_);
#define Imf_DeepFrameBuffer_ConstIterator_slice Imf_3_0__DeepFrameBuffer__ConstIterator_slice


unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_copy(
    Imf_DeepFrameBuffer_ConstIterator_t * this_
    , Imf_DeepFrameBuffer_ConstIterator_t const * rhs);
#define Imf_DeepFrameBuffer_ConstIterator_copy Imf_3_0__DeepFrameBuffer__ConstIterator_copy


unsigned int Imf_3_0_deep_frame_buffer_const_iter_eq(
    _Bool * return_
    , Imf_DeepFrameBuffer_ConstIterator_t const * _param0
    , Imf_DeepFrameBuffer_ConstIterator_t const * _param1);
#define Imf_deep_frame_buffer_const_iter_eq Imf_3_0_deep_frame_buffer_const_iter_eq


#ifdef __cplusplus
}
#endif

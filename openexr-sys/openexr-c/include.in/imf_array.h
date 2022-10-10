#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__Array_float__t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__Array_float__t;
typedef Imf_3_0__Array_float__t Imf_ArrayFloat_t;

typedef struct Imf_3_0__Array_char__t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__Array_char__t;
typedef Imf_3_0__Array_char__t Imf_ArrayChar_t;

typedef struct Imf_3_0__Array2D_float__t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__Array2D_float__t;
typedef Imf_3_0__Array2D_float__t Imf_Array2DFloat_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_float__new(
    Imf_ArrayFloat_t * * this_);
#define Imf_ArrayFloat_new Imf_3_0__Array_float__new


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_float__with_size(
    Imf_ArrayFloat_t * * this_
    , long size);
#define Imf_ArrayFloat_with_size Imf_3_0__Array_float__with_size


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_float__delete(
    Imf_ArrayFloat_t * this_);
#define Imf_ArrayFloat_delete Imf_3_0__Array_float__delete


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_float__as_ptr(
    Imf_ArrayFloat_t * this_
    , float * * return_);
#define Imf_ArrayFloat_as_ptr Imf_3_0__Array_float__as_ptr


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_float__as_const_ptr(
    Imf_ArrayFloat_t const * this_
    , float const * * return_);
#define Imf_ArrayFloat_as_const_ptr Imf_3_0__Array_float__as_const_ptr


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_float__resizeErase(
    Imf_ArrayFloat_t * this_
    , long size);
#define Imf_ArrayFloat_resizeErase Imf_3_0__Array_float__resizeErase


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_float__resizeEraseUnsafe(
    Imf_ArrayFloat_t * this_
    , long size);
#define Imf_ArrayFloat_resizeEraseUnsafe Imf_3_0__Array_float__resizeEraseUnsafe


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_float__size(
    Imf_ArrayFloat_t const * this_
    , long * return_);
#define Imf_ArrayFloat_size Imf_3_0__Array_float__size


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_char__new(
    Imf_ArrayChar_t * * this_);
#define Imf_ArrayChar_new Imf_3_0__Array_char__new


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_char__with_size(
    Imf_ArrayChar_t * * this_
    , long size);
#define Imf_ArrayChar_with_size Imf_3_0__Array_char__with_size


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_char__delete(
    Imf_ArrayChar_t * this_);
#define Imf_ArrayChar_delete Imf_3_0__Array_char__delete


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_char__as_ptr(
    Imf_ArrayChar_t * this_
    , char * * return_);
#define Imf_ArrayChar_as_ptr Imf_3_0__Array_char__as_ptr


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_char__as_const_ptr(
    Imf_ArrayChar_t const * this_
    , char const * * return_);
#define Imf_ArrayChar_as_const_ptr Imf_3_0__Array_char__as_const_ptr


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_char__resizeErase(
    Imf_ArrayChar_t * this_
    , long size);
#define Imf_ArrayChar_resizeErase Imf_3_0__Array_char__resizeErase


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_char__resizeEraseUnsafe(
    Imf_ArrayChar_t * this_
    , long size);
#define Imf_ArrayChar_resizeEraseUnsafe Imf_3_0__Array_char__resizeEraseUnsafe


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array_char__size(
    Imf_ArrayChar_t const * this_
    , long * return_);
#define Imf_ArrayChar_size Imf_3_0__Array_char__size


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array2D_float__new(
    Imf_Array2DFloat_t * * this_);
#define Imf_Array2DFloat_new Imf_3_0__Array2D_float__new


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array2D_float__with_size(
    Imf_Array2DFloat_t * * this_
    , long sizeX
    , long sizeY);
#define Imf_Array2DFloat_with_size Imf_3_0__Array2D_float__with_size


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array2D_float__delete(
    Imf_Array2DFloat_t * this_);
#define Imf_Array2DFloat_delete Imf_3_0__Array2D_float__delete


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array2D_float__row(
    Imf_Array2DFloat_t * this_
    , float * * return_
    , long x);
#define Imf_Array2DFloat_row Imf_3_0__Array2D_float__row


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array2D_float__const_row(
    Imf_Array2DFloat_t const * this_
    , float const * * return_
    , long x);
#define Imf_Array2DFloat_const_row Imf_3_0__Array2D_float__const_row


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array2D_float__resizeErase(
    Imf_Array2DFloat_t * this_
    , long sizeX
    , long sizeY);
#define Imf_Array2DFloat_resizeErase Imf_3_0__Array2D_float__resizeErase


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array2D_float__resizeEraseUnsafe(
    Imf_Array2DFloat_t * this_
    , long sizeX
    , long sizeY);
#define Imf_Array2DFloat_resizeEraseUnsafe Imf_3_0__Array2D_float__resizeEraseUnsafe


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array2D_float__height(
    Imf_Array2DFloat_t const * this_
    , long * return_);
#define Imf_Array2DFloat_height Imf_3_0__Array2D_float__height


OPENEXR_CPPMM_API unsigned int Imf_3_0__Array2D_float__width(
    Imf_Array2DFloat_t const * this_
    , long * return_);
#define Imf_Array2DFloat_width Imf_3_0__Array2D_float__width


#ifdef __cplusplus
}
#endif

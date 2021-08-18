#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imath_3_0__Box_Imath_3_0__Vec2_int___t_s Imath_3_0__Box_Imath_3_0__Vec2_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_int___t Imath_Box2i_t;
typedef struct Imf_3_0__Rgba_t_s Imf_3_0__Rgba_t;
typedef Imf_3_0__Rgba_t Imf_Rgba_t;
typedef struct Imath_3_0__half_t_s Imath_3_0__half_t;
typedef Imath_3_0__half_t Imath_half_t;
typedef struct Imf_3_0__Slice_t_s Imf_3_0__Slice_t;
typedef Imf_3_0__Slice_t Imf_Slice_t;

typedef struct Imf_3_0__HalfLut_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__HalfLut_t;
typedef Imf_3_0__HalfLut_t Imf_HalfLut_t;

typedef struct Imf_3_0__RgbaLut_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__RgbaLut_t;
typedef Imf_3_0__RgbaLut_t Imf_RgbaLut_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__HalfLut_apply(
    Imf_HalfLut_t const * this_
    , Imath_half_t * data
    , int nData
    , int stride);
#define Imf_HalfLut_apply Imf_3_0__HalfLut_apply


OPENEXR_CPPMM_API unsigned int Imf_3_0__HalfLut_apply_1(
    Imf_HalfLut_t const * this_
    , Imf_Slice_t const * data
    , Imath_Box2i_t const * dataWindow);
#define Imf_HalfLut_apply_1 Imf_3_0__HalfLut_apply_1


OPENEXR_CPPMM_API unsigned int Imf_3_0__HalfLut_dtor(
    Imf_HalfLut_t * this_);
#define Imf_HalfLut_dtor Imf_3_0__HalfLut_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__RgbaLut_apply(
    Imf_RgbaLut_t const * this_
    , Imf_Rgba_t * data
    , int nData
    , int stride);
#define Imf_RgbaLut_apply Imf_3_0__RgbaLut_apply


OPENEXR_CPPMM_API unsigned int Imf_3_0__RgbaLut_apply_1(
    Imf_RgbaLut_t const * this_
    , Imf_Rgba_t * base
    , int xStride
    , int yStride
    , Imath_Box2i_t const * dataWindow);
#define Imf_RgbaLut_apply_1 Imf_3_0__RgbaLut_apply_1


OPENEXR_CPPMM_API unsigned int Imf_3_0__RgbaLut_dtor(
    Imf_RgbaLut_t * this_);
#define Imf_RgbaLut_dtor Imf_3_0__RgbaLut_dtor


#ifdef __cplusplus
}
#endif

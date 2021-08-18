#pragma once
#include <c-half.h>

#ifdef __cplusplus
extern "C" {
#endif

enum Imf_3_0__RgbaChannels_e {
    Imf_RgbaChannels_WRITE_R = 1,
    Imf_RgbaChannels_WRITE_G = 2,
    Imf_RgbaChannels_WRITE_B = 4,
    Imf_RgbaChannels_WRITE_RGB = 7,
    Imf_RgbaChannels_WRITE_A = 8,
    Imf_RgbaChannels_WRITE_RGBA = 15,
    Imf_RgbaChannels_WRITE_Y = 16,
    Imf_RgbaChannels_WRITE_YA = 24,
    Imf_RgbaChannels_WRITE_C = 32,
    Imf_RgbaChannels_WRITE_YC = 48,
    Imf_RgbaChannels_WRITE_YCA = 56,
};
typedef unsigned int Imf_RgbaChannels;

typedef struct Imf_3_0__Rgba_t_s {
    Imath_half_t r;
    Imath_half_t g;
    Imath_half_t b;
    Imath_half_t a;
} __attribute__((aligned(2))) Imf_3_0__Rgba_t;
typedef Imf_3_0__Rgba_t Imf_Rgba_t;


unsigned int Imf_3_0__Rgba_ctor(
    Imf_Rgba_t * this_);
#define Imf_Rgba_ctor Imf_3_0__Rgba_ctor


unsigned int Imf_3_0__Rgba_ctor_1(
    Imf_Rgba_t * this_
    , Imath_half_t r
    , Imath_half_t g
    , Imath_half_t b
    , Imath_half_t a);
#define Imf_Rgba_ctor_1 Imf_3_0__Rgba_ctor_1


unsigned int Imf_3_0__Rgba_copy(
    Imf_Rgba_t * this_
    , Imf_Rgba_t const * rhs);
#define Imf_Rgba_copy Imf_3_0__Rgba_copy


unsigned int Imf_3_0__Rgba_move(
    Imf_Rgba_t * this_
    , Imf_Rgba_t * rhs);
#define Imf_Rgba_move Imf_3_0__Rgba_move


unsigned int Imf_3_0__Rgba_dtor(
    Imf_Rgba_t * this_);
#define Imf_Rgba_dtor Imf_3_0__Rgba_dtor


#ifdef __cplusplus
}
#endif

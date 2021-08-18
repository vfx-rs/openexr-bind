#pragma once
#include <imath_vec.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imath_3_0__Vec2_float__t_s Imath_3_0__Vec2_float__t;
typedef Imath_3_0__Vec2_float__t Imath_V2f_t;

typedef struct Imf_3_0__Chromaticities_t_s {
    Imath_V2f_t red;
    Imath_V2f_t green;
    Imath_V2f_t blue;
    Imath_V2f_t white;
} __attribute__((aligned(4))) Imf_3_0__Chromaticities_t;
typedef Imf_3_0__Chromaticities_t Imf_Chromaticities_t;


unsigned int Imf_3_0__Chromaticities_ctor(
    Imf_Chromaticities_t * this_
    , Imath_V2f_t const * red
    , Imath_V2f_t const * green
    , Imath_V2f_t const * blue
    , Imath_V2f_t const * white);
#define Imf_Chromaticities_ctor Imf_3_0__Chromaticities_ctor


unsigned int Imf_3_0__Chromaticities__eq(
    Imf_Chromaticities_t const * this_
    , _Bool * return_
    , Imf_Chromaticities_t const * v);
#define Imf_Chromaticities__eq Imf_3_0__Chromaticities__eq


unsigned int Imf_3_0__Chromaticities__ne(
    Imf_Chromaticities_t const * this_
    , _Bool * return_
    , Imf_Chromaticities_t const * v);
#define Imf_Chromaticities__ne Imf_3_0__Chromaticities__ne


unsigned int Imf_3_0__Chromaticities_copy(
    Imf_Chromaticities_t * this_
    , Imf_Chromaticities_t const * rhs);
#define Imf_Chromaticities_copy Imf_3_0__Chromaticities_copy


unsigned int Imf_3_0__Chromaticities_move(
    Imf_Chromaticities_t * this_
    , Imf_Chromaticities_t * rhs);
#define Imf_Chromaticities_move Imf_3_0__Chromaticities_move


unsigned int Imf_3_0__Chromaticities_dtor(
    Imf_Chromaticities_t * this_);
#define Imf_Chromaticities_dtor Imf_3_0__Chromaticities_dtor


#ifdef __cplusplus
}
#endif

#pragma once
#include "openexr-api-export.h"

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
} OPENEXR_ALIGN(4) Imf_3_0__Chromaticities_t;
typedef Imf_3_0__Chromaticities_t Imf_Chromaticities_t;


OPENEXR_API unsigned int Imf_3_0__Chromaticities_ctor(
    Imf_Chromaticities_t * this_
    , Imath_V2f_t const * red
    , Imath_V2f_t const * green
    , Imath_V2f_t const * blue
    , Imath_V2f_t const * white);
#define Imf_Chromaticities_ctor Imf_3_0__Chromaticities_ctor


OPENEXR_API unsigned int Imf_3_0__Chromaticities__eq(
    Imf_Chromaticities_t const * this_
    , _Bool * return_
    , Imf_Chromaticities_t const * v);
#define Imf_Chromaticities__eq Imf_3_0__Chromaticities__eq


OPENEXR_API unsigned int Imf_3_0__Chromaticities__ne(
    Imf_Chromaticities_t const * this_
    , _Bool * return_
    , Imf_Chromaticities_t const * v);
#define Imf_Chromaticities__ne Imf_3_0__Chromaticities__ne


OPENEXR_API unsigned int Imf_3_0__Chromaticities_copy(
    Imf_Chromaticities_t * this_
    , Imf_Chromaticities_t const * rhs);
#define Imf_Chromaticities_copy Imf_3_0__Chromaticities_copy


OPENEXR_API unsigned int Imf_3_0__Chromaticities_move(
    Imf_Chromaticities_t * this_
    , Imf_Chromaticities_t * rhs);
#define Imf_Chromaticities_move Imf_3_0__Chromaticities_move


OPENEXR_API unsigned int Imf_3_0__Chromaticities_dtor(
    Imf_Chromaticities_t * this_);
#define Imf_Chromaticities_dtor Imf_3_0__Chromaticities_dtor


#ifdef __cplusplus
}
#endif

#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imath_3_0__Box_Imath_3_0__Vec2_int___t_s Imath_3_0__Box_Imath_3_0__Vec2_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_int___t Imath_Box2i_t;
typedef struct Imf_3_0__Image_t_s Imf_3_0__Image_t;
typedef Imf_3_0__Image_t Imf_Image_t;

typedef struct Imf_3_0__ImageLevel_t_s {
    char _unused;
} OPENEXR_ALIGN(8) Imf_3_0__ImageLevel_t;
typedef Imf_3_0__ImageLevel_t Imf_ImageLevel_t;


OPENEXR_API unsigned int Imf_3_0__ImageLevel_image(
    Imf_ImageLevel_t * this_
    , Imf_Image_t * * return_);
#define Imf_ImageLevel_image Imf_3_0__ImageLevel_image


OPENEXR_API unsigned int Imf_3_0__ImageLevel_image_const(
    Imf_ImageLevel_t const * this_
    , Imf_Image_t const * * return_);
#define Imf_ImageLevel_image_const Imf_3_0__ImageLevel_image_const


OPENEXR_API unsigned int Imf_3_0__ImageLevel_xLevelNumber(
    Imf_ImageLevel_t const * this_
    , int * return_);
#define Imf_ImageLevel_xLevelNumber Imf_3_0__ImageLevel_xLevelNumber


OPENEXR_API unsigned int Imf_3_0__ImageLevel_yLevelNumber(
    Imf_ImageLevel_t const * this_
    , int * return_);
#define Imf_ImageLevel_yLevelNumber Imf_3_0__ImageLevel_yLevelNumber


OPENEXR_API unsigned int Imf_3_0__ImageLevel_dataWindow(
    Imf_ImageLevel_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_ImageLevel_dataWindow Imf_3_0__ImageLevel_dataWindow


#ifdef __cplusplus
}
#endif

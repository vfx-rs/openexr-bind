#pragma once
#include "openexr-api-export.h"

#include <imath_vec.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imath_3_0__Vec3_float__t_s Imath_3_0__Vec3_float__t;
typedef Imath_3_0__Vec3_float__t Imath_V3f_t;
typedef struct Imf_3_0__Rgba_t_s Imf_3_0__Rgba_t;
typedef Imf_3_0__Rgba_t Imf_Rgba_t;
typedef struct Imf_3_0__Chromaticities_t_s Imf_3_0__Chromaticities_t;
typedef Imf_3_0__Chromaticities_t Imf_Chromaticities_t;

OPENEXR_CPPMM_API unsigned int Imf_3_0_RgbaYca_computeYw(
    Imath_V3f_t * return_
    , Imf_Chromaticities_t const * cr);
#define Imf_RgbaYca_computeYw Imf_3_0_RgbaYca_computeYw


OPENEXR_CPPMM_API unsigned int Imf_3_0_RgbaYca_RGBAtoYCA(
    Imath_V3f_t const * yw
    , int n
    , _Bool aIsValid
    , Imf_Rgba_t const * rgbaIn
    , Imf_Rgba_t * ycaOut);
#define Imf_RgbaYca_RGBAtoYCA Imf_3_0_RgbaYca_RGBAtoYCA


OPENEXR_CPPMM_API unsigned int Imf_3_0_RgbaYca_decimateChromaHoriz(
    int n
    , Imf_Rgba_t const * ycaIn
    , Imf_Rgba_t * ycaOut);
#define Imf_RgbaYca_decimateChromaHoriz Imf_3_0_RgbaYca_decimateChromaHoriz


OPENEXR_CPPMM_API unsigned int Imf_3_0_RgbaYca_roundYCA(
    int n
    , unsigned int roundY
    , unsigned int roundC
    , Imf_Rgba_t const * ycaIn
    , Imf_Rgba_t * ycaOut);
#define Imf_RgbaYca_roundYCA Imf_3_0_RgbaYca_roundYCA


OPENEXR_CPPMM_API unsigned int Imf_3_0_RgbaYca_reconstructChromaHoriz(
    int n
    , Imf_Rgba_t const * ycaIn
    , Imf_Rgba_t * ycaOut);
#define Imf_RgbaYca_reconstructChromaHoriz Imf_3_0_RgbaYca_reconstructChromaHoriz


OPENEXR_CPPMM_API unsigned int Imf_3_0_RgbaYca_YCAtoRGBA(
    Imath_V3f_t const * yw
    , int n
    , Imf_Rgba_t const * ycaIn
    , Imf_Rgba_t * rgbaOut);
#define Imf_RgbaYca_YCAtoRGBA Imf_3_0_RgbaYca_YCAtoRGBA


#ifdef __cplusplus
}
#endif

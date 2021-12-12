#pragma once
#include "openexr-api-export.h"

#include <imf_channellist.h>
#include <imf_pixeltype.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__ImageLevel_t_s Imf_3_0__ImageLevel_t;
typedef Imf_3_0__ImageLevel_t Imf_ImageLevel_t;

typedef struct Imf_3_0__ImageChannel_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__ImageChannel_t;
typedef Imf_3_0__ImageChannel_t Imf_ImageChannel_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__ImageChannel_pixelType(
    Imf_ImageChannel_t const * this_
    , Imf_PixelType * return_);
#define Imf_ImageChannel_pixelType Imf_3_0__ImageChannel_pixelType


OPENEXR_CPPMM_API unsigned int Imf_3_0__ImageChannel_channel(
    Imf_ImageChannel_t const * this_
    , Imf_Channel_t * return_);
#define Imf_ImageChannel_channel Imf_3_0__ImageChannel_channel


OPENEXR_CPPMM_API unsigned int Imf_3_0__ImageChannel_xSampling(
    Imf_ImageChannel_t const * this_
    , int * return_);
#define Imf_ImageChannel_xSampling Imf_3_0__ImageChannel_xSampling


OPENEXR_CPPMM_API unsigned int Imf_3_0__ImageChannel_ySampling(
    Imf_ImageChannel_t const * this_
    , int * return_);
#define Imf_ImageChannel_ySampling Imf_3_0__ImageChannel_ySampling


OPENEXR_CPPMM_API unsigned int Imf_3_0__ImageChannel_pLinear(
    Imf_ImageChannel_t const * this_
    , _Bool * return_);
#define Imf_ImageChannel_pLinear Imf_3_0__ImageChannel_pLinear


OPENEXR_CPPMM_API unsigned int Imf_3_0__ImageChannel_pixelsPerRow(
    Imf_ImageChannel_t const * this_
    , int * return_);
#define Imf_ImageChannel_pixelsPerRow Imf_3_0__ImageChannel_pixelsPerRow


OPENEXR_CPPMM_API unsigned int Imf_3_0__ImageChannel_pixelsPerColumn(
    Imf_ImageChannel_t const * this_
    , int * return_);
#define Imf_ImageChannel_pixelsPerColumn Imf_3_0__ImageChannel_pixelsPerColumn


OPENEXR_CPPMM_API unsigned int Imf_3_0__ImageChannel_numPixels(
    Imf_ImageChannel_t const * this_
    , size_t * return_);
#define Imf_ImageChannel_numPixels Imf_3_0__ImageChannel_numPixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__ImageChannel_level(
    Imf_ImageChannel_t * this_
    , Imf_ImageLevel_t * * return_);
#define Imf_ImageChannel_level Imf_3_0__ImageChannel_level


OPENEXR_CPPMM_API unsigned int Imf_3_0__ImageChannel_level_const(
    Imf_ImageChannel_t const * this_
    , Imf_ImageLevel_t const * * return_);
#define Imf_ImageChannel_level_const Imf_3_0__ImageChannel_level_const


#ifdef __cplusplus
}
#endif

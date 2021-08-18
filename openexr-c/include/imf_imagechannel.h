#pragma once
#include <imf_channellist.h>
#include <imf_pixeltype.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__ImageLevel_t_s Imf_3_0__ImageLevel_t;
typedef Imf_3_0__ImageLevel_t Imf_ImageLevel_t;

typedef struct Imf_3_0__ImageChannel_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__ImageChannel_t;
typedef Imf_3_0__ImageChannel_t Imf_ImageChannel_t;


unsigned int Imf_3_0__ImageChannel_pixelType(
    Imf_ImageChannel_t const * this_
    , Imf_PixelType * return_);
#define Imf_ImageChannel_pixelType Imf_3_0__ImageChannel_pixelType


unsigned int Imf_3_0__ImageChannel_channel(
    Imf_ImageChannel_t const * this_
    , Imf_Channel_t * return_);
#define Imf_ImageChannel_channel Imf_3_0__ImageChannel_channel


unsigned int Imf_3_0__ImageChannel_xSampling(
    Imf_ImageChannel_t const * this_
    , int * return_);
#define Imf_ImageChannel_xSampling Imf_3_0__ImageChannel_xSampling


unsigned int Imf_3_0__ImageChannel_ySampling(
    Imf_ImageChannel_t const * this_
    , int * return_);
#define Imf_ImageChannel_ySampling Imf_3_0__ImageChannel_ySampling


unsigned int Imf_3_0__ImageChannel_pLinear(
    Imf_ImageChannel_t const * this_
    , _Bool * return_);
#define Imf_ImageChannel_pLinear Imf_3_0__ImageChannel_pLinear


unsigned int Imf_3_0__ImageChannel_pixelsPerRow(
    Imf_ImageChannel_t const * this_
    , int * return_);
#define Imf_ImageChannel_pixelsPerRow Imf_3_0__ImageChannel_pixelsPerRow


unsigned int Imf_3_0__ImageChannel_pixelsPerColumn(
    Imf_ImageChannel_t const * this_
    , int * return_);
#define Imf_ImageChannel_pixelsPerColumn Imf_3_0__ImageChannel_pixelsPerColumn


unsigned int Imf_3_0__ImageChannel_numPixels(
    Imf_ImageChannel_t const * this_
    , unsigned long * return_);
#define Imf_ImageChannel_numPixels Imf_3_0__ImageChannel_numPixels


unsigned int Imf_3_0__ImageChannel_level(
    Imf_ImageChannel_t * this_
    , Imf_ImageLevel_t * * return_);
#define Imf_ImageChannel_level Imf_3_0__ImageChannel_level


unsigned int Imf_3_0__ImageChannel_level_const(
    Imf_ImageChannel_t const * this_
    , Imf_ImageLevel_t const * * return_);
#define Imf_ImageChannel_level_const Imf_3_0__ImageChannel_level_const


#ifdef __cplusplus
}
#endif

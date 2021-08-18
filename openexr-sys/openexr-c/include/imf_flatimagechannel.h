#pragma once
#include "openexr-api-export.h"

#include <imf_channellist.h>
#include <imf_framebuffer.h>
#include <imf_pixeltype.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imath_3_0__half_t_s Imath_3_0__half_t;
typedef Imath_3_0__half_t Imath_half_t;
typedef struct Imf_3_0__FlatImageLevel_t_s Imf_3_0__FlatImageLevel_t;
typedef Imf_3_0__FlatImageLevel_t Imf_FlatImageLevel_t;
typedef struct Imf_3_0__ImageLevel_t_s Imf_3_0__ImageLevel_t;
typedef Imf_3_0__ImageLevel_t Imf_ImageLevel_t;

typedef struct Imf_3_0__FlatImageChannel_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__FlatImageChannel_t;
typedef Imf_3_0__FlatImageChannel_t Imf_FlatImageChannel_t;

typedef struct Imf_3_0__TypedFlatImageChannel_half__t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__TypedFlatImageChannel_half__t;
typedef Imf_3_0__TypedFlatImageChannel_half__t Imf_FlatHalfChannel_t;

typedef struct Imf_3_0__TypedFlatImageChannel_float__t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__TypedFlatImageChannel_float__t;
typedef Imf_3_0__TypedFlatImageChannel_float__t Imf_FlatFloatChannel_t;

typedef struct Imf_3_0__TypedFlatImageChannel_unsignedint__t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__TypedFlatImageChannel_unsignedint__t;
typedef Imf_3_0__TypedFlatImageChannel_unsignedint__t Imf_FlatUIntChannel_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_pixelType(
    Imf_FlatImageChannel_t const * this_
    , Imf_PixelType * return_);
#define Imf_FlatImageChannel_pixelType Imf_3_0__FlatImageChannel_pixelType


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_channel(
    Imf_FlatImageChannel_t const * this_
    , Imf_Channel_t * return_);
#define Imf_FlatImageChannel_channel Imf_3_0__FlatImageChannel_channel


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_xSampling(
    Imf_FlatImageChannel_t const * this_
    , int * return_);
#define Imf_FlatImageChannel_xSampling Imf_3_0__FlatImageChannel_xSampling


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_ySampling(
    Imf_FlatImageChannel_t const * this_
    , int * return_);
#define Imf_FlatImageChannel_ySampling Imf_3_0__FlatImageChannel_ySampling


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_pLinear(
    Imf_FlatImageChannel_t const * this_
    , _Bool * return_);
#define Imf_FlatImageChannel_pLinear Imf_3_0__FlatImageChannel_pLinear


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_pixelsPerRow(
    Imf_FlatImageChannel_t const * this_
    , int * return_);
#define Imf_FlatImageChannel_pixelsPerRow Imf_3_0__FlatImageChannel_pixelsPerRow


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_pixelsPerColumn(
    Imf_FlatImageChannel_t const * this_
    , int * return_);
#define Imf_FlatImageChannel_pixelsPerColumn Imf_3_0__FlatImageChannel_pixelsPerColumn


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_numPixels(
    Imf_FlatImageChannel_t const * this_
    , size_t * return_);
#define Imf_FlatImageChannel_numPixels Imf_3_0__FlatImageChannel_numPixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_level(
    Imf_FlatImageChannel_t * this_
    , Imf_ImageLevel_t * * return_);
#define Imf_FlatImageChannel_level Imf_3_0__FlatImageChannel_level


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_level_1(
    Imf_FlatImageChannel_t const * this_
    , Imf_ImageLevel_t const * * return_);
#define Imf_FlatImageChannel_level_1 Imf_3_0__FlatImageChannel_level_1


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_slice(
    Imf_FlatImageChannel_t const * this_
    , Imf_Slice_t * return_);
#define Imf_FlatImageChannel_slice Imf_3_0__FlatImageChannel_slice


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_flatLevel(
    Imf_FlatImageChannel_t * this_
    , Imf_FlatImageLevel_t * * return_);
#define Imf_FlatImageChannel_flatLevel Imf_3_0__FlatImageChannel_flatLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_flatLevel_1(
    Imf_FlatImageChannel_t const * this_
    , Imf_FlatImageLevel_t const * * return_);
#define Imf_FlatImageChannel_flatLevel_1 Imf_3_0__FlatImageChannel_flatLevel_1


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__pixelType(
    Imf_FlatHalfChannel_t const * this_
    , Imf_PixelType * return_);
#define Imf_FlatHalfChannel_pixelType Imf_3_0__TypedFlatImageChannel_half__pixelType


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__channel(
    Imf_FlatHalfChannel_t const * this_
    , Imf_Channel_t * return_);
#define Imf_FlatHalfChannel_channel Imf_3_0__TypedFlatImageChannel_half__channel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__xSampling(
    Imf_FlatHalfChannel_t const * this_
    , int * return_);
#define Imf_FlatHalfChannel_xSampling Imf_3_0__TypedFlatImageChannel_half__xSampling


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__ySampling(
    Imf_FlatHalfChannel_t const * this_
    , int * return_);
#define Imf_FlatHalfChannel_ySampling Imf_3_0__TypedFlatImageChannel_half__ySampling


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__pLinear(
    Imf_FlatHalfChannel_t const * this_
    , _Bool * return_);
#define Imf_FlatHalfChannel_pLinear Imf_3_0__TypedFlatImageChannel_half__pLinear


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__pixelsPerRow(
    Imf_FlatHalfChannel_t const * this_
    , int * return_);
#define Imf_FlatHalfChannel_pixelsPerRow Imf_3_0__TypedFlatImageChannel_half__pixelsPerRow


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__pixelsPerColumn(
    Imf_FlatHalfChannel_t const * this_
    , int * return_);
#define Imf_FlatHalfChannel_pixelsPerColumn Imf_3_0__TypedFlatImageChannel_half__pixelsPerColumn


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__numPixels(
    Imf_FlatHalfChannel_t const * this_
    , size_t * return_);
#define Imf_FlatHalfChannel_numPixels Imf_3_0__TypedFlatImageChannel_half__numPixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__slice(
    Imf_FlatHalfChannel_t const * this_
    , Imf_Slice_t * return_);
#define Imf_FlatHalfChannel_slice Imf_3_0__TypedFlatImageChannel_half__slice


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__flatLevel(
    Imf_FlatHalfChannel_t * this_
    , Imf_FlatImageLevel_t * * return_);
#define Imf_FlatHalfChannel_flatLevel Imf_3_0__TypedFlatImageChannel_half__flatLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__flatLevel_const(
    Imf_FlatHalfChannel_t const * this_
    , Imf_FlatImageLevel_t const * * return_);
#define Imf_FlatHalfChannel_flatLevel_const Imf_3_0__TypedFlatImageChannel_half__flatLevel_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__index(
    Imf_FlatHalfChannel_t * this_
    , Imath_half_t * * return_
    , int x
    , int y);
#define Imf_FlatHalfChannel_index Imf_3_0__TypedFlatImageChannel_half__index


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__index_const(
    Imf_FlatHalfChannel_t const * this_
    , Imath_half_t const * * return_
    , int x
    , int y);
#define Imf_FlatHalfChannel_index_const Imf_3_0__TypedFlatImageChannel_half__index_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__at(
    Imf_FlatHalfChannel_t * this_
    , Imath_half_t * * return_
    , int x
    , int y);
#define Imf_FlatHalfChannel_at Imf_3_0__TypedFlatImageChannel_half__at


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__at_const(
    Imf_FlatHalfChannel_t const * this_
    , Imath_half_t const * * return_
    , int x
    , int y);
#define Imf_FlatHalfChannel_at_const Imf_3_0__TypedFlatImageChannel_half__at_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__row(
    Imf_FlatHalfChannel_t * this_
    , Imath_half_t * * return_
    , int r);
#define Imf_FlatHalfChannel_row Imf_3_0__TypedFlatImageChannel_half__row


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__row_const(
    Imf_FlatHalfChannel_t const * this_
    , Imath_half_t const * * return_
    , int r);
#define Imf_FlatHalfChannel_row_const Imf_3_0__TypedFlatImageChannel_half__row_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__pixelType(
    Imf_FlatFloatChannel_t const * this_
    , Imf_PixelType * return_);
#define Imf_FlatFloatChannel_pixelType Imf_3_0__TypedFlatImageChannel_float__pixelType


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__channel(
    Imf_FlatFloatChannel_t const * this_
    , Imf_Channel_t * return_);
#define Imf_FlatFloatChannel_channel Imf_3_0__TypedFlatImageChannel_float__channel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__xSampling(
    Imf_FlatFloatChannel_t const * this_
    , int * return_);
#define Imf_FlatFloatChannel_xSampling Imf_3_0__TypedFlatImageChannel_float__xSampling


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__ySampling(
    Imf_FlatFloatChannel_t const * this_
    , int * return_);
#define Imf_FlatFloatChannel_ySampling Imf_3_0__TypedFlatImageChannel_float__ySampling


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__pLinear(
    Imf_FlatFloatChannel_t const * this_
    , _Bool * return_);
#define Imf_FlatFloatChannel_pLinear Imf_3_0__TypedFlatImageChannel_float__pLinear


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__pixelsPerRow(
    Imf_FlatFloatChannel_t const * this_
    , int * return_);
#define Imf_FlatFloatChannel_pixelsPerRow Imf_3_0__TypedFlatImageChannel_float__pixelsPerRow


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__pixelsPerColumn(
    Imf_FlatFloatChannel_t const * this_
    , int * return_);
#define Imf_FlatFloatChannel_pixelsPerColumn Imf_3_0__TypedFlatImageChannel_float__pixelsPerColumn


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__numPixels(
    Imf_FlatFloatChannel_t const * this_
    , size_t * return_);
#define Imf_FlatFloatChannel_numPixels Imf_3_0__TypedFlatImageChannel_float__numPixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__slice(
    Imf_FlatFloatChannel_t const * this_
    , Imf_Slice_t * return_);
#define Imf_FlatFloatChannel_slice Imf_3_0__TypedFlatImageChannel_float__slice


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__flatLevel(
    Imf_FlatFloatChannel_t * this_
    , Imf_FlatImageLevel_t * * return_);
#define Imf_FlatFloatChannel_flatLevel Imf_3_0__TypedFlatImageChannel_float__flatLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__flatLevel_const(
    Imf_FlatFloatChannel_t const * this_
    , Imf_FlatImageLevel_t const * * return_);
#define Imf_FlatFloatChannel_flatLevel_const Imf_3_0__TypedFlatImageChannel_float__flatLevel_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__index(
    Imf_FlatFloatChannel_t * this_
    , float * * return_
    , int x
    , int y);
#define Imf_FlatFloatChannel_index Imf_3_0__TypedFlatImageChannel_float__index


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__index_const(
    Imf_FlatFloatChannel_t const * this_
    , float const * * return_
    , int x
    , int y);
#define Imf_FlatFloatChannel_index_const Imf_3_0__TypedFlatImageChannel_float__index_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__at(
    Imf_FlatFloatChannel_t * this_
    , float * * return_
    , int x
    , int y);
#define Imf_FlatFloatChannel_at Imf_3_0__TypedFlatImageChannel_float__at


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__at_const(
    Imf_FlatFloatChannel_t const * this_
    , float const * * return_
    , int x
    , int y);
#define Imf_FlatFloatChannel_at_const Imf_3_0__TypedFlatImageChannel_float__at_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__row(
    Imf_FlatFloatChannel_t * this_
    , float * * return_
    , int r);
#define Imf_FlatFloatChannel_row Imf_3_0__TypedFlatImageChannel_float__row


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__row_const(
    Imf_FlatFloatChannel_t const * this_
    , float const * * return_
    , int r);
#define Imf_FlatFloatChannel_row_const Imf_3_0__TypedFlatImageChannel_float__row_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__pixelType(
    Imf_FlatUIntChannel_t const * this_
    , Imf_PixelType * return_);
#define Imf_FlatUIntChannel_pixelType Imf_3_0__TypedFlatImageChannel_unsignedint__pixelType


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__channel(
    Imf_FlatUIntChannel_t const * this_
    , Imf_Channel_t * return_);
#define Imf_FlatUIntChannel_channel Imf_3_0__TypedFlatImageChannel_unsignedint__channel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__xSampling(
    Imf_FlatUIntChannel_t const * this_
    , int * return_);
#define Imf_FlatUIntChannel_xSampling Imf_3_0__TypedFlatImageChannel_unsignedint__xSampling


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__ySampling(
    Imf_FlatUIntChannel_t const * this_
    , int * return_);
#define Imf_FlatUIntChannel_ySampling Imf_3_0__TypedFlatImageChannel_unsignedint__ySampling


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__pLinear(
    Imf_FlatUIntChannel_t const * this_
    , _Bool * return_);
#define Imf_FlatUIntChannel_pLinear Imf_3_0__TypedFlatImageChannel_unsignedint__pLinear


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__pixelsPerRow(
    Imf_FlatUIntChannel_t const * this_
    , int * return_);
#define Imf_FlatUIntChannel_pixelsPerRow Imf_3_0__TypedFlatImageChannel_unsignedint__pixelsPerRow


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__pixelsPerColumn(
    Imf_FlatUIntChannel_t const * this_
    , int * return_);
#define Imf_FlatUIntChannel_pixelsPerColumn Imf_3_0__TypedFlatImageChannel_unsignedint__pixelsPerColumn


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__numPixels(
    Imf_FlatUIntChannel_t const * this_
    , size_t * return_);
#define Imf_FlatUIntChannel_numPixels Imf_3_0__TypedFlatImageChannel_unsignedint__numPixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__slice(
    Imf_FlatUIntChannel_t const * this_
    , Imf_Slice_t * return_);
#define Imf_FlatUIntChannel_slice Imf_3_0__TypedFlatImageChannel_unsignedint__slice


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__flatLevel(
    Imf_FlatUIntChannel_t * this_
    , Imf_FlatImageLevel_t * * return_);
#define Imf_FlatUIntChannel_flatLevel Imf_3_0__TypedFlatImageChannel_unsignedint__flatLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__flatLevel_const(
    Imf_FlatUIntChannel_t const * this_
    , Imf_FlatImageLevel_t const * * return_);
#define Imf_FlatUIntChannel_flatLevel_const Imf_3_0__TypedFlatImageChannel_unsignedint__flatLevel_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__index(
    Imf_FlatUIntChannel_t * this_
    , unsigned int * * return_
    , int x
    , int y);
#define Imf_FlatUIntChannel_index Imf_3_0__TypedFlatImageChannel_unsignedint__index


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__index_const(
    Imf_FlatUIntChannel_t const * this_
    , unsigned int const * * return_
    , int x
    , int y);
#define Imf_FlatUIntChannel_index_const Imf_3_0__TypedFlatImageChannel_unsignedint__index_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__at(
    Imf_FlatUIntChannel_t * this_
    , unsigned int * * return_
    , int x
    , int y);
#define Imf_FlatUIntChannel_at Imf_3_0__TypedFlatImageChannel_unsignedint__at


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__at_const(
    Imf_FlatUIntChannel_t const * this_
    , unsigned int const * * return_
    , int x
    , int y);
#define Imf_FlatUIntChannel_at_const Imf_3_0__TypedFlatImageChannel_unsignedint__at_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__row(
    Imf_FlatUIntChannel_t * this_
    , unsigned int * * return_
    , int r);
#define Imf_FlatUIntChannel_row Imf_3_0__TypedFlatImageChannel_unsignedint__row


OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__row_const(
    Imf_FlatUIntChannel_t const * this_
    , unsigned int const * * return_
    , int r);
#define Imf_FlatUIntChannel_row_const Imf_3_0__TypedFlatImageChannel_unsignedint__row_const


#ifdef __cplusplus
}
#endif

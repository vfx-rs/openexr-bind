#pragma once
#include <imf_channellist.h>
#include <imf_deepframebuffer.h>
#include <imf_pixeltype.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__DeepImageLevel_t_s Imf_3_0__DeepImageLevel_t;
typedef Imf_3_0__DeepImageLevel_t Imf_DeepImageLevel_t;
typedef struct Imf_3_0__SampleCountChannel_t_s Imf_3_0__SampleCountChannel_t;
typedef Imf_3_0__SampleCountChannel_t Imf_SampleCountChannel_t;
typedef struct Imf_3_0__ImageLevel_t_s Imf_3_0__ImageLevel_t;
typedef Imf_3_0__ImageLevel_t Imf_ImageLevel_t;
typedef struct Imath_3_0__half_t_s Imath_3_0__half_t;
typedef Imath_3_0__half_t Imath_half_t;

typedef struct Imf_3_0__DeepImageChannel_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__DeepImageChannel_t;
typedef Imf_3_0__DeepImageChannel_t Imf_DeepImageChannel_t;

typedef struct Imf_3_0__TypedDeepImageChannel_half__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedDeepImageChannel_half__t;
typedef Imf_3_0__TypedDeepImageChannel_half__t Imf_DeepHalfChannel_t;

typedef struct Imf_3_0__TypedDeepImageChannel_float__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedDeepImageChannel_float__t;
typedef Imf_3_0__TypedDeepImageChannel_float__t Imf_DeepFloatChannel_t;

typedef struct Imf_3_0__TypedDeepImageChannel_unsignedint__t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__TypedDeepImageChannel_unsignedint__t;
typedef Imf_3_0__TypedDeepImageChannel_unsignedint__t Imf_DeepUIntChannel_t;


unsigned int Imf_3_0__DeepImageChannel_pixelType(
    Imf_DeepImageChannel_t const * this_
    , Imf_PixelType * return_);
#define Imf_DeepImageChannel_pixelType Imf_3_0__DeepImageChannel_pixelType


unsigned int Imf_3_0__DeepImageChannel_channel(
    Imf_DeepImageChannel_t const * this_
    , Imf_Channel_t * return_);
#define Imf_DeepImageChannel_channel Imf_3_0__DeepImageChannel_channel


unsigned int Imf_3_0__DeepImageChannel_xSampling(
    Imf_DeepImageChannel_t const * this_
    , int * return_);
#define Imf_DeepImageChannel_xSampling Imf_3_0__DeepImageChannel_xSampling


unsigned int Imf_3_0__DeepImageChannel_ySampling(
    Imf_DeepImageChannel_t const * this_
    , int * return_);
#define Imf_DeepImageChannel_ySampling Imf_3_0__DeepImageChannel_ySampling


unsigned int Imf_3_0__DeepImageChannel_pLinear(
    Imf_DeepImageChannel_t const * this_
    , _Bool * return_);
#define Imf_DeepImageChannel_pLinear Imf_3_0__DeepImageChannel_pLinear


unsigned int Imf_3_0__DeepImageChannel_pixelsPerRow(
    Imf_DeepImageChannel_t const * this_
    , int * return_);
#define Imf_DeepImageChannel_pixelsPerRow Imf_3_0__DeepImageChannel_pixelsPerRow


unsigned int Imf_3_0__DeepImageChannel_pixelsPerColumn(
    Imf_DeepImageChannel_t const * this_
    , int * return_);
#define Imf_DeepImageChannel_pixelsPerColumn Imf_3_0__DeepImageChannel_pixelsPerColumn


unsigned int Imf_3_0__DeepImageChannel_numPixels(
    Imf_DeepImageChannel_t const * this_
    , unsigned long * return_);
#define Imf_DeepImageChannel_numPixels Imf_3_0__DeepImageChannel_numPixels


unsigned int Imf_3_0__DeepImageChannel_level(
    Imf_DeepImageChannel_t * this_
    , Imf_ImageLevel_t * * return_);
#define Imf_DeepImageChannel_level Imf_3_0__DeepImageChannel_level


unsigned int Imf_3_0__DeepImageChannel_level_const(
    Imf_DeepImageChannel_t const * this_
    , Imf_ImageLevel_t const * * return_);
#define Imf_DeepImageChannel_level_const Imf_3_0__DeepImageChannel_level_const


unsigned int Imf_3_0__DeepImageChannel_slice(
    Imf_DeepImageChannel_t const * this_
    , Imf_DeepSlice_t * return_);
#define Imf_DeepImageChannel_slice Imf_3_0__DeepImageChannel_slice


unsigned int Imf_3_0__DeepImageChannel_deepLevel(
    Imf_DeepImageChannel_t * this_
    , Imf_DeepImageLevel_t * * return_);
#define Imf_DeepImageChannel_deepLevel Imf_3_0__DeepImageChannel_deepLevel


unsigned int Imf_3_0__DeepImageChannel_deepLevel_const(
    Imf_DeepImageChannel_t const * this_
    , Imf_DeepImageLevel_t const * * return_);
#define Imf_DeepImageChannel_deepLevel_const Imf_3_0__DeepImageChannel_deepLevel_const


unsigned int Imf_3_0__DeepImageChannel_sampleCounts(
    Imf_DeepImageChannel_t * this_
    , Imf_SampleCountChannel_t * * return_);
#define Imf_DeepImageChannel_sampleCounts Imf_3_0__DeepImageChannel_sampleCounts


unsigned int Imf_3_0__DeepImageChannel_sampleCounts_1(
    Imf_DeepImageChannel_t const * this_
    , Imf_SampleCountChannel_t const * * return_);
#define Imf_DeepImageChannel_sampleCounts_1 Imf_3_0__DeepImageChannel_sampleCounts_1


unsigned int Imf_3_0__TypedDeepImageChannel_half__pixelType(
    Imf_DeepHalfChannel_t const * this_
    , Imf_PixelType * return_);
#define Imf_DeepHalfChannel_pixelType Imf_3_0__TypedDeepImageChannel_half__pixelType


unsigned int Imf_3_0__TypedDeepImageChannel_half__channel(
    Imf_DeepHalfChannel_t const * this_
    , Imf_Channel_t * return_);
#define Imf_DeepHalfChannel_channel Imf_3_0__TypedDeepImageChannel_half__channel


unsigned int Imf_3_0__TypedDeepImageChannel_half__xSampling(
    Imf_DeepHalfChannel_t const * this_
    , int * return_);
#define Imf_DeepHalfChannel_xSampling Imf_3_0__TypedDeepImageChannel_half__xSampling


unsigned int Imf_3_0__TypedDeepImageChannel_half__ySampling(
    Imf_DeepHalfChannel_t const * this_
    , int * return_);
#define Imf_DeepHalfChannel_ySampling Imf_3_0__TypedDeepImageChannel_half__ySampling


unsigned int Imf_3_0__TypedDeepImageChannel_half__pLinear(
    Imf_DeepHalfChannel_t const * this_
    , _Bool * return_);
#define Imf_DeepHalfChannel_pLinear Imf_3_0__TypedDeepImageChannel_half__pLinear


unsigned int Imf_3_0__TypedDeepImageChannel_half__pixelsPerRow(
    Imf_DeepHalfChannel_t const * this_
    , int * return_);
#define Imf_DeepHalfChannel_pixelsPerRow Imf_3_0__TypedDeepImageChannel_half__pixelsPerRow


unsigned int Imf_3_0__TypedDeepImageChannel_half__pixelsPerColumn(
    Imf_DeepHalfChannel_t const * this_
    , int * return_);
#define Imf_DeepHalfChannel_pixelsPerColumn Imf_3_0__TypedDeepImageChannel_half__pixelsPerColumn


unsigned int Imf_3_0__TypedDeepImageChannel_half__numPixels(
    Imf_DeepHalfChannel_t const * this_
    , unsigned long * return_);
#define Imf_DeepHalfChannel_numPixels Imf_3_0__TypedDeepImageChannel_half__numPixels


unsigned int Imf_3_0__TypedDeepImageChannel_half__level(
    Imf_DeepHalfChannel_t * this_
    , Imf_ImageLevel_t * * return_);
#define Imf_DeepHalfChannel_level Imf_3_0__TypedDeepImageChannel_half__level


unsigned int Imf_3_0__TypedDeepImageChannel_half__level_const(
    Imf_DeepHalfChannel_t const * this_
    , Imf_ImageLevel_t const * * return_);
#define Imf_DeepHalfChannel_level_const Imf_3_0__TypedDeepImageChannel_half__level_const


unsigned int Imf_3_0__TypedDeepImageChannel_half__slice(
    Imf_DeepHalfChannel_t const * this_
    , Imf_DeepSlice_t * return_);
#define Imf_DeepHalfChannel_slice Imf_3_0__TypedDeepImageChannel_half__slice


unsigned int Imf_3_0__TypedDeepImageChannel_half__deepLevel(
    Imf_DeepHalfChannel_t * this_
    , Imf_DeepImageLevel_t * * return_);
#define Imf_DeepHalfChannel_deepLevel Imf_3_0__TypedDeepImageChannel_half__deepLevel


unsigned int Imf_3_0__TypedDeepImageChannel_half__deepLevel_const(
    Imf_DeepHalfChannel_t const * this_
    , Imf_DeepImageLevel_t const * * return_);
#define Imf_DeepHalfChannel_deepLevel_const Imf_3_0__TypedDeepImageChannel_half__deepLevel_const


unsigned int Imf_3_0__TypedDeepImageChannel_half__sampleCounts(
    Imf_DeepHalfChannel_t * this_
    , Imf_SampleCountChannel_t * * return_);
#define Imf_DeepHalfChannel_sampleCounts Imf_3_0__TypedDeepImageChannel_half__sampleCounts


unsigned int Imf_3_0__TypedDeepImageChannel_half__sampleCounts_1(
    Imf_DeepHalfChannel_t const * this_
    , Imf_SampleCountChannel_t const * * return_);
#define Imf_DeepHalfChannel_sampleCounts_1 Imf_3_0__TypedDeepImageChannel_half__sampleCounts_1


unsigned int Imf_3_0__TypedDeepImageChannel_half__index(
    Imf_DeepHalfChannel_t * this_
    , Imath_half_t * * return_
    , int x
    , int y);
#define Imf_DeepHalfChannel_index Imf_3_0__TypedDeepImageChannel_half__index


unsigned int Imf_3_0__TypedDeepImageChannel_half__index_const(
    Imf_DeepHalfChannel_t const * this_
    , Imath_half_t const * * return_
    , int x
    , int y);
#define Imf_DeepHalfChannel_index_const Imf_3_0__TypedDeepImageChannel_half__index_const


unsigned int Imf_3_0__TypedDeepImageChannel_half__at(
    Imf_DeepHalfChannel_t * this_
    , Imath_half_t * * return_
    , int x
    , int y);
#define Imf_DeepHalfChannel_at Imf_3_0__TypedDeepImageChannel_half__at


unsigned int Imf_3_0__TypedDeepImageChannel_half__at_const(
    Imf_DeepHalfChannel_t const * this_
    , Imath_half_t const * * return_
    , int x
    , int y);
#define Imf_DeepHalfChannel_at_const Imf_3_0__TypedDeepImageChannel_half__at_const


unsigned int Imf_3_0__TypedDeepImageChannel_float__pixelType(
    Imf_DeepFloatChannel_t const * this_
    , Imf_PixelType * return_);
#define Imf_DeepFloatChannel_pixelType Imf_3_0__TypedDeepImageChannel_float__pixelType


unsigned int Imf_3_0__TypedDeepImageChannel_float__channel(
    Imf_DeepFloatChannel_t const * this_
    , Imf_Channel_t * return_);
#define Imf_DeepFloatChannel_channel Imf_3_0__TypedDeepImageChannel_float__channel


unsigned int Imf_3_0__TypedDeepImageChannel_float__xSampling(
    Imf_DeepFloatChannel_t const * this_
    , int * return_);
#define Imf_DeepFloatChannel_xSampling Imf_3_0__TypedDeepImageChannel_float__xSampling


unsigned int Imf_3_0__TypedDeepImageChannel_float__ySampling(
    Imf_DeepFloatChannel_t const * this_
    , int * return_);
#define Imf_DeepFloatChannel_ySampling Imf_3_0__TypedDeepImageChannel_float__ySampling


unsigned int Imf_3_0__TypedDeepImageChannel_float__pLinear(
    Imf_DeepFloatChannel_t const * this_
    , _Bool * return_);
#define Imf_DeepFloatChannel_pLinear Imf_3_0__TypedDeepImageChannel_float__pLinear


unsigned int Imf_3_0__TypedDeepImageChannel_float__pixelsPerRow(
    Imf_DeepFloatChannel_t const * this_
    , int * return_);
#define Imf_DeepFloatChannel_pixelsPerRow Imf_3_0__TypedDeepImageChannel_float__pixelsPerRow


unsigned int Imf_3_0__TypedDeepImageChannel_float__pixelsPerColumn(
    Imf_DeepFloatChannel_t const * this_
    , int * return_);
#define Imf_DeepFloatChannel_pixelsPerColumn Imf_3_0__TypedDeepImageChannel_float__pixelsPerColumn


unsigned int Imf_3_0__TypedDeepImageChannel_float__numPixels(
    Imf_DeepFloatChannel_t const * this_
    , unsigned long * return_);
#define Imf_DeepFloatChannel_numPixels Imf_3_0__TypedDeepImageChannel_float__numPixels


unsigned int Imf_3_0__TypedDeepImageChannel_float__level(
    Imf_DeepFloatChannel_t * this_
    , Imf_ImageLevel_t * * return_);
#define Imf_DeepFloatChannel_level Imf_3_0__TypedDeepImageChannel_float__level


unsigned int Imf_3_0__TypedDeepImageChannel_float__level_const(
    Imf_DeepFloatChannel_t const * this_
    , Imf_ImageLevel_t const * * return_);
#define Imf_DeepFloatChannel_level_const Imf_3_0__TypedDeepImageChannel_float__level_const


unsigned int Imf_3_0__TypedDeepImageChannel_float__slice(
    Imf_DeepFloatChannel_t const * this_
    , Imf_DeepSlice_t * return_);
#define Imf_DeepFloatChannel_slice Imf_3_0__TypedDeepImageChannel_float__slice


unsigned int Imf_3_0__TypedDeepImageChannel_float__deepLevel(
    Imf_DeepFloatChannel_t * this_
    , Imf_DeepImageLevel_t * * return_);
#define Imf_DeepFloatChannel_deepLevel Imf_3_0__TypedDeepImageChannel_float__deepLevel


unsigned int Imf_3_0__TypedDeepImageChannel_float__deepLevel_const(
    Imf_DeepFloatChannel_t const * this_
    , Imf_DeepImageLevel_t const * * return_);
#define Imf_DeepFloatChannel_deepLevel_const Imf_3_0__TypedDeepImageChannel_float__deepLevel_const


unsigned int Imf_3_0__TypedDeepImageChannel_float__sampleCounts(
    Imf_DeepFloatChannel_t * this_
    , Imf_SampleCountChannel_t * * return_);
#define Imf_DeepFloatChannel_sampleCounts Imf_3_0__TypedDeepImageChannel_float__sampleCounts


unsigned int Imf_3_0__TypedDeepImageChannel_float__sampleCounts_1(
    Imf_DeepFloatChannel_t const * this_
    , Imf_SampleCountChannel_t const * * return_);
#define Imf_DeepFloatChannel_sampleCounts_1 Imf_3_0__TypedDeepImageChannel_float__sampleCounts_1


unsigned int Imf_3_0__TypedDeepImageChannel_float__index(
    Imf_DeepFloatChannel_t * this_
    , float * * return_
    , int x
    , int y);
#define Imf_DeepFloatChannel_index Imf_3_0__TypedDeepImageChannel_float__index


unsigned int Imf_3_0__TypedDeepImageChannel_float__index_const(
    Imf_DeepFloatChannel_t const * this_
    , float const * * return_
    , int x
    , int y);
#define Imf_DeepFloatChannel_index_const Imf_3_0__TypedDeepImageChannel_float__index_const


unsigned int Imf_3_0__TypedDeepImageChannel_float__at(
    Imf_DeepFloatChannel_t * this_
    , float * * return_
    , int x
    , int y);
#define Imf_DeepFloatChannel_at Imf_3_0__TypedDeepImageChannel_float__at


unsigned int Imf_3_0__TypedDeepImageChannel_float__at_const(
    Imf_DeepFloatChannel_t const * this_
    , float const * * return_
    , int x
    , int y);
#define Imf_DeepFloatChannel_at_const Imf_3_0__TypedDeepImageChannel_float__at_const


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__pixelType(
    Imf_DeepUIntChannel_t const * this_
    , Imf_PixelType * return_);
#define Imf_DeepUIntChannel_pixelType Imf_3_0__TypedDeepImageChannel_unsignedint__pixelType


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__channel(
    Imf_DeepUIntChannel_t const * this_
    , Imf_Channel_t * return_);
#define Imf_DeepUIntChannel_channel Imf_3_0__TypedDeepImageChannel_unsignedint__channel


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__xSampling(
    Imf_DeepUIntChannel_t const * this_
    , int * return_);
#define Imf_DeepUIntChannel_xSampling Imf_3_0__TypedDeepImageChannel_unsignedint__xSampling


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__ySampling(
    Imf_DeepUIntChannel_t const * this_
    , int * return_);
#define Imf_DeepUIntChannel_ySampling Imf_3_0__TypedDeepImageChannel_unsignedint__ySampling


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__pLinear(
    Imf_DeepUIntChannel_t const * this_
    , _Bool * return_);
#define Imf_DeepUIntChannel_pLinear Imf_3_0__TypedDeepImageChannel_unsignedint__pLinear


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__pixelsPerRow(
    Imf_DeepUIntChannel_t const * this_
    , int * return_);
#define Imf_DeepUIntChannel_pixelsPerRow Imf_3_0__TypedDeepImageChannel_unsignedint__pixelsPerRow


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__pixelsPerColumn(
    Imf_DeepUIntChannel_t const * this_
    , int * return_);
#define Imf_DeepUIntChannel_pixelsPerColumn Imf_3_0__TypedDeepImageChannel_unsignedint__pixelsPerColumn


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__numPixels(
    Imf_DeepUIntChannel_t const * this_
    , unsigned long * return_);
#define Imf_DeepUIntChannel_numPixels Imf_3_0__TypedDeepImageChannel_unsignedint__numPixels


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__level(
    Imf_DeepUIntChannel_t * this_
    , Imf_ImageLevel_t * * return_);
#define Imf_DeepUIntChannel_level Imf_3_0__TypedDeepImageChannel_unsignedint__level


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__level_const(
    Imf_DeepUIntChannel_t const * this_
    , Imf_ImageLevel_t const * * return_);
#define Imf_DeepUIntChannel_level_const Imf_3_0__TypedDeepImageChannel_unsignedint__level_const


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__slice(
    Imf_DeepUIntChannel_t const * this_
    , Imf_DeepSlice_t * return_);
#define Imf_DeepUIntChannel_slice Imf_3_0__TypedDeepImageChannel_unsignedint__slice


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__deepLevel(
    Imf_DeepUIntChannel_t * this_
    , Imf_DeepImageLevel_t * * return_);
#define Imf_DeepUIntChannel_deepLevel Imf_3_0__TypedDeepImageChannel_unsignedint__deepLevel


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__deepLevel_const(
    Imf_DeepUIntChannel_t const * this_
    , Imf_DeepImageLevel_t const * * return_);
#define Imf_DeepUIntChannel_deepLevel_const Imf_3_0__TypedDeepImageChannel_unsignedint__deepLevel_const


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__sampleCounts(
    Imf_DeepUIntChannel_t * this_
    , Imf_SampleCountChannel_t * * return_);
#define Imf_DeepUIntChannel_sampleCounts Imf_3_0__TypedDeepImageChannel_unsignedint__sampleCounts


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__sampleCounts_1(
    Imf_DeepUIntChannel_t const * this_
    , Imf_SampleCountChannel_t const * * return_);
#define Imf_DeepUIntChannel_sampleCounts_1 Imf_3_0__TypedDeepImageChannel_unsignedint__sampleCounts_1


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__index(
    Imf_DeepUIntChannel_t * this_
    , unsigned int * * return_
    , int x
    , int y);
#define Imf_DeepUIntChannel_index Imf_3_0__TypedDeepImageChannel_unsignedint__index


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__index_const(
    Imf_DeepUIntChannel_t const * this_
    , unsigned int const * * return_
    , int x
    , int y);
#define Imf_DeepUIntChannel_index_const Imf_3_0__TypedDeepImageChannel_unsignedint__index_const


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__at(
    Imf_DeepUIntChannel_t * this_
    , unsigned int * * return_
    , int x
    , int y);
#define Imf_DeepUIntChannel_at Imf_3_0__TypedDeepImageChannel_unsignedint__at


unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__at_const(
    Imf_DeepUIntChannel_t const * this_
    , unsigned int const * * return_
    , int x
    , int y);
#define Imf_DeepUIntChannel_at_const Imf_3_0__TypedDeepImageChannel_unsignedint__at_const


#ifdef __cplusplus
}
#endif

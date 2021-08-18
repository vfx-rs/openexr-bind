#pragma once
#include "openexr-api-export.h"

#include <imf_channellist.h>
#include <imf_framebuffer.h>
#include <imf_pixeltype.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__DeepImageLevel_t_s Imf_3_0__DeepImageLevel_t;
typedef Imf_3_0__DeepImageLevel_t Imf_DeepImageLevel_t;
typedef struct Imf_3_0__ImageLevel_t_s Imf_3_0__ImageLevel_t;
typedef Imf_3_0__ImageLevel_t Imf_ImageLevel_t;

typedef struct Imf_3_0__SampleCountChannel_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__SampleCountChannel_t;
typedef Imf_3_0__SampleCountChannel_t Imf_SampleCountChannel_t;

typedef struct Imf_3_0__SampleCountChannel__Edit_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__SampleCountChannel__Edit_t;
typedef Imf_3_0__SampleCountChannel__Edit_t Imf_SampleCountChannel_Edit_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_pixelType(
    Imf_SampleCountChannel_t const * this_
    , Imf_PixelType * return_);
#define Imf_SampleCountChannel_pixelType Imf_3_0__SampleCountChannel_pixelType


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_channel(
    Imf_SampleCountChannel_t const * this_
    , Imf_Channel_t * return_);
#define Imf_SampleCountChannel_channel Imf_3_0__SampleCountChannel_channel


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_xSampling(
    Imf_SampleCountChannel_t const * this_
    , int * return_);
#define Imf_SampleCountChannel_xSampling Imf_3_0__SampleCountChannel_xSampling


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_ySampling(
    Imf_SampleCountChannel_t const * this_
    , int * return_);
#define Imf_SampleCountChannel_ySampling Imf_3_0__SampleCountChannel_ySampling


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_pLinear(
    Imf_SampleCountChannel_t const * this_
    , _Bool * return_);
#define Imf_SampleCountChannel_pLinear Imf_3_0__SampleCountChannel_pLinear


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_pixelsPerRow(
    Imf_SampleCountChannel_t const * this_
    , int * return_);
#define Imf_SampleCountChannel_pixelsPerRow Imf_3_0__SampleCountChannel_pixelsPerRow


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_pixelsPerColumn(
    Imf_SampleCountChannel_t const * this_
    , int * return_);
#define Imf_SampleCountChannel_pixelsPerColumn Imf_3_0__SampleCountChannel_pixelsPerColumn


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_numPixels(
    Imf_SampleCountChannel_t const * this_
    , unsigned long * return_);
#define Imf_SampleCountChannel_numPixels Imf_3_0__SampleCountChannel_numPixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_level(
    Imf_SampleCountChannel_t * this_
    , Imf_ImageLevel_t * * return_);
#define Imf_SampleCountChannel_level Imf_3_0__SampleCountChannel_level


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_level_1(
    Imf_SampleCountChannel_t const * this_
    , Imf_ImageLevel_t const * * return_);
#define Imf_SampleCountChannel_level_1 Imf_3_0__SampleCountChannel_level_1


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_slice(
    Imf_SampleCountChannel_t const * this_
    , Imf_Slice_t * return_);
#define Imf_SampleCountChannel_slice Imf_3_0__SampleCountChannel_slice


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_deepLevel(
    Imf_SampleCountChannel_t * this_
    , Imf_DeepImageLevel_t * * return_);
#define Imf_SampleCountChannel_deepLevel Imf_3_0__SampleCountChannel_deepLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_deepLevel_const(
    Imf_SampleCountChannel_t const * this_
    , Imf_DeepImageLevel_t const * * return_);
#define Imf_SampleCountChannel_deepLevel_const Imf_3_0__SampleCountChannel_deepLevel_const


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_index(
    Imf_SampleCountChannel_t const * this_
    , unsigned int const * * return_
    , int x
    , int y);
#define Imf_SampleCountChannel_index Imf_3_0__SampleCountChannel_index


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_at(
    Imf_SampleCountChannel_t const * this_
    , unsigned int const * * return_
    , int x
    , int y);
#define Imf_SampleCountChannel_at Imf_3_0__SampleCountChannel_at


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_row(
    Imf_SampleCountChannel_t const * this_
    , unsigned int const * * return_
    , int r);
#define Imf_SampleCountChannel_row Imf_3_0__SampleCountChannel_row


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_set(
    Imf_SampleCountChannel_t * this_
    , int x
    , int y
    , unsigned int newNumSamples);
#define Imf_SampleCountChannel_set Imf_3_0__SampleCountChannel_set


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_set_row(
    Imf_SampleCountChannel_t * this_
    , int r
    , unsigned int * newNumSamples);
#define Imf_SampleCountChannel_set_row Imf_3_0__SampleCountChannel_set_row


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_clear(
    Imf_SampleCountChannel_t * this_);
#define Imf_SampleCountChannel_clear Imf_3_0__SampleCountChannel_clear


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_beginEdit(
    Imf_SampleCountChannel_t * this_
    , unsigned int * * return_);
#define Imf_SampleCountChannel_beginEdit Imf_3_0__SampleCountChannel_beginEdit


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_endEdit(
    Imf_SampleCountChannel_t * this_);
#define Imf_SampleCountChannel_endEdit Imf_3_0__SampleCountChannel_endEdit


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_numSamples(
    Imf_SampleCountChannel_t const * this_
    , unsigned int const * * return_);
#define Imf_SampleCountChannel_numSamples Imf_3_0__SampleCountChannel_numSamples


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_sampleListSizes(
    Imf_SampleCountChannel_t const * this_
    , unsigned int const * * return_);
#define Imf_SampleCountChannel_sampleListSizes Imf_3_0__SampleCountChannel_sampleListSizes


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_sampleListPositions(
    Imf_SampleCountChannel_t const * this_
    , unsigned long const * * return_);
#define Imf_SampleCountChannel_sampleListPositions Imf_3_0__SampleCountChannel_sampleListPositions


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_sampleBufferSize(
    Imf_SampleCountChannel_t const * this_
    , unsigned long * return_);
#define Imf_SampleCountChannel_sampleBufferSize Imf_3_0__SampleCountChannel_sampleBufferSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel__Edit_ctor(
    Imf_SampleCountChannel_Edit_t * * this_
    , Imf_SampleCountChannel_t * level);
#define Imf_SampleCountChannel_Edit_ctor Imf_3_0__SampleCountChannel__Edit_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel__Edit_dtor(
    Imf_SampleCountChannel_Edit_t * this_);
#define Imf_SampleCountChannel_Edit_dtor Imf_3_0__SampleCountChannel__Edit_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel__Edit_sampleCounts(
    Imf_SampleCountChannel_Edit_t const * this_
    , unsigned int * * return_);
#define Imf_SampleCountChannel_Edit_sampleCounts Imf_3_0__SampleCountChannel__Edit_sampleCounts


#ifdef __cplusplus
}
#endif

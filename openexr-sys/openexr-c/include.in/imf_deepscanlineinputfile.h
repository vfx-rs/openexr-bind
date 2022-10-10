#pragma once
#include "openexr-api-export.h"

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__IStream_t_s Imf_3_0__IStream_t;
typedef Imf_3_0__IStream_t Imf_IStream_t;
typedef struct Imf_3_0__DeepFrameBuffer_t_s Imf_3_0__DeepFrameBuffer_t;
typedef Imf_3_0__DeepFrameBuffer_t Imf_DeepFrameBuffer_t;

typedef struct Imf_3_0__DeepScanLineInputFile_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__DeepScanLineInputFile_t;
typedef Imf_3_0__DeepScanLineInputFile_t Imf_DeepScanLineInputFile_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_ctor(
    Imf_DeepScanLineInputFile_t * * this_
    , char const * fileName
    , int numThreads);
#define Imf_DeepScanLineInputFile_ctor Imf_3_0__DeepScanLineInputFile_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_ctor_1(
    Imf_DeepScanLineInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads);
#define Imf_DeepScanLineInputFile_ctor_1 Imf_3_0__DeepScanLineInputFile_ctor_1


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_ctor_2(
    Imf_DeepScanLineInputFile_t * * this_
    , Imf_Header_t const * header
    , Imf_IStream_t * is
    , int version
    , int numThreads);
#define Imf_DeepScanLineInputFile_ctor_2 Imf_3_0__DeepScanLineInputFile_ctor_2


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_dtor(
    Imf_DeepScanLineInputFile_t * this_);
#define Imf_DeepScanLineInputFile_dtor Imf_3_0__DeepScanLineInputFile_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_fileName(
    Imf_DeepScanLineInputFile_t const * this_
    , char const * * return_);
#define Imf_DeepScanLineInputFile_fileName Imf_3_0__DeepScanLineInputFile_fileName


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_header(
    Imf_DeepScanLineInputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_DeepScanLineInputFile_header Imf_3_0__DeepScanLineInputFile_header


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_version(
    Imf_DeepScanLineInputFile_t const * this_
    , int * return_);
#define Imf_DeepScanLineInputFile_version Imf_3_0__DeepScanLineInputFile_version


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_setFrameBuffer(
    Imf_DeepScanLineInputFile_t * this_
    , Imf_DeepFrameBuffer_t const * frameBuffer);
#define Imf_DeepScanLineInputFile_setFrameBuffer Imf_3_0__DeepScanLineInputFile_setFrameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_frameBuffer(
    Imf_DeepScanLineInputFile_t const * this_
    , Imf_DeepFrameBuffer_t const * * return_);
#define Imf_DeepScanLineInputFile_frameBuffer Imf_3_0__DeepScanLineInputFile_frameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_isComplete(
    Imf_DeepScanLineInputFile_t const * this_
    , _Bool * return_);
#define Imf_DeepScanLineInputFile_isComplete Imf_3_0__DeepScanLineInputFile_isComplete


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_readPixels(
    Imf_DeepScanLineInputFile_t * this_
    , int scanLine1
    , int scanLine2);
#define Imf_DeepScanLineInputFile_readPixels Imf_3_0__DeepScanLineInputFile_readPixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_readPixels_from_frame_buffer(
    Imf_DeepScanLineInputFile_t const * this_
    , char const * rawPixelData
    , Imf_DeepFrameBuffer_t const * frameBuffer
    , int scanLine1
    , int scanLine2);
#define Imf_DeepScanLineInputFile_readPixels_from_frame_buffer Imf_3_0__DeepScanLineInputFile_readPixels_from_frame_buffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_rawPixelData(
    Imf_DeepScanLineInputFile_t * this_
    , int firstScanLine
    , char * pixelData
    , uint64_t * pixelDataSize);
#define Imf_DeepScanLineInputFile_rawPixelData Imf_3_0__DeepScanLineInputFile_rawPixelData


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_firstScanLineInChunk(
    Imf_DeepScanLineInputFile_t const * this_
    , int * return_
    , int y);
#define Imf_DeepScanLineInputFile_firstScanLineInChunk Imf_3_0__DeepScanLineInputFile_firstScanLineInChunk


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_lastScanLineInChunk(
    Imf_DeepScanLineInputFile_t const * this_
    , int * return_
    , int y);
#define Imf_DeepScanLineInputFile_lastScanLineInChunk Imf_3_0__DeepScanLineInputFile_lastScanLineInChunk


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_readPixelSampleCounts(
    Imf_DeepScanLineInputFile_t * this_
    , int scanline1
    , int scanline2);
#define Imf_DeepScanLineInputFile_readPixelSampleCounts Imf_3_0__DeepScanLineInputFile_readPixelSampleCounts


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_readPixelSampleCounts_into_frame_buffer(
    Imf_DeepScanLineInputFile_t const * this_
    , char const * rawdata
    , Imf_DeepFrameBuffer_t const * frameBuffer
    , int scanLine1
    , int scanLine2);
#define Imf_DeepScanLineInputFile_readPixelSampleCounts_into_frame_buffer Imf_3_0__DeepScanLineInputFile_readPixelSampleCounts_into_frame_buffer


#ifdef __cplusplus
}
#endif

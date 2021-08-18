#pragma once
#include "openexr-api-export.h"

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__DeepFrameBuffer_t_s Imf_3_0__DeepFrameBuffer_t;
typedef Imf_3_0__DeepFrameBuffer_t Imf_DeepFrameBuffer_t;
typedef struct Imf_3_0__MultiPartInputFile_t_s Imf_3_0__MultiPartInputFile_t;
typedef Imf_3_0__MultiPartInputFile_t Imf_MultiPartInputFile_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;

typedef struct Imf_3_0__DeepScanLineInputPart_t_s {
    char data[8];
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__DeepScanLineInputPart_t;
typedef Imf_3_0__DeepScanLineInputPart_t Imf_DeepScanLineInputPart_t;


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_sizeof();
#define Imf_DeepScanLineInputPart_sizeof Imf_3_0__DeepScanLineInputPart_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_alignof();
#define Imf_DeepScanLineInputPart_alignof Imf_3_0__DeepScanLineInputPart_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_ctor(
    Imf_DeepScanLineInputPart_t * this_
    , Imf_MultiPartInputFile_t * file
    , int partNumber);
#define Imf_DeepScanLineInputPart_ctor Imf_3_0__DeepScanLineInputPart_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_fileName(
    Imf_DeepScanLineInputPart_t const * this_
    , char const * * return_);
#define Imf_DeepScanLineInputPart_fileName Imf_3_0__DeepScanLineInputPart_fileName


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_header(
    Imf_DeepScanLineInputPart_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_DeepScanLineInputPart_header Imf_3_0__DeepScanLineInputPart_header


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_version(
    Imf_DeepScanLineInputPart_t const * this_
    , int * return_);
#define Imf_DeepScanLineInputPart_version Imf_3_0__DeepScanLineInputPart_version


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_setFrameBuffer(
    Imf_DeepScanLineInputPart_t * this_
    , Imf_DeepFrameBuffer_t const * frameBuffer);
#define Imf_DeepScanLineInputPart_setFrameBuffer Imf_3_0__DeepScanLineInputPart_setFrameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_frameBuffer(
    Imf_DeepScanLineInputPart_t const * this_
    , Imf_DeepFrameBuffer_t const * * return_);
#define Imf_DeepScanLineInputPart_frameBuffer Imf_3_0__DeepScanLineInputPart_frameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_isComplete(
    Imf_DeepScanLineInputPart_t const * this_
    , _Bool * return_);
#define Imf_DeepScanLineInputPart_isComplete Imf_3_0__DeepScanLineInputPart_isComplete


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_readPixels(
    Imf_DeepScanLineInputPart_t * this_
    , int scanLine1
    , int scanLine2);
#define Imf_DeepScanLineInputPart_readPixels Imf_3_0__DeepScanLineInputPart_readPixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_readPixels_from_frame_buffer(
    Imf_DeepScanLineInputPart_t const * this_
    , char const * rawPixelData
    , Imf_DeepFrameBuffer_t const * frameBuffer
    , int scanLine1
    , int scanLine2);
#define Imf_DeepScanLineInputPart_readPixels_from_frame_buffer Imf_3_0__DeepScanLineInputPart_readPixels_from_frame_buffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_rawPixelData(
    Imf_DeepScanLineInputPart_t * this_
    , int firstScanLine
    , char * pixelData
    , uint64_t * pixelDataSize);
#define Imf_DeepScanLineInputPart_rawPixelData Imf_3_0__DeepScanLineInputPart_rawPixelData


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_readPixelSampleCounts(
    Imf_DeepScanLineInputPart_t * this_
    , int scanline1
    , int scanline2);
#define Imf_DeepScanLineInputPart_readPixelSampleCounts Imf_3_0__DeepScanLineInputPart_readPixelSampleCounts


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_readPixelSampleCounts_into_frame_buffer(
    Imf_DeepScanLineInputPart_t const * this_
    , char const * rawdata
    , Imf_DeepFrameBuffer_t const * frameBuffer
    , int scanLine1
    , int scanLine2);
#define Imf_DeepScanLineInputPart_readPixelSampleCounts_into_frame_buffer Imf_3_0__DeepScanLineInputPart_readPixelSampleCounts_into_frame_buffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_firstScanLineInChunk(
    Imf_DeepScanLineInputPart_t const * this_
    , int * return_
    , int y);
#define Imf_DeepScanLineInputPart_firstScanLineInChunk Imf_3_0__DeepScanLineInputPart_firstScanLineInChunk


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_lastScanLineInChunk(
    Imf_DeepScanLineInputPart_t const * this_
    , int * return_
    , int y);
#define Imf_DeepScanLineInputPart_lastScanLineInChunk Imf_3_0__DeepScanLineInputPart_lastScanLineInChunk


#ifdef __cplusplus
}
#endif

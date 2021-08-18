#pragma once
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__DeepFrameBuffer_t_s Imf_3_0__DeepFrameBuffer_t;
typedef Imf_3_0__DeepFrameBuffer_t Imf_DeepFrameBuffer_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__IStream_t_s Imf_3_0__IStream_t;
typedef Imf_3_0__IStream_t Imf_IStream_t;

typedef struct Imf_3_0__DeepScanLineInputFile_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__DeepScanLineInputFile_t;
typedef Imf_3_0__DeepScanLineInputFile_t Imf_DeepScanLineInputFile_t;


unsigned int Imf_3_0__DeepScanLineInputFile_ctor(
    Imf_DeepScanLineInputFile_t * * this_
    , char const * fileName
    , int numThreads);
#define Imf_DeepScanLineInputFile_ctor Imf_3_0__DeepScanLineInputFile_ctor


unsigned int Imf_3_0__DeepScanLineInputFile_ctor_1(
    Imf_DeepScanLineInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads);
#define Imf_DeepScanLineInputFile_ctor_1 Imf_3_0__DeepScanLineInputFile_ctor_1


unsigned int Imf_3_0__DeepScanLineInputFile_ctor_2(
    Imf_DeepScanLineInputFile_t * * this_
    , Imf_Header_t const * header
    , Imf_IStream_t * is
    , int version
    , int numThreads);
#define Imf_DeepScanLineInputFile_ctor_2 Imf_3_0__DeepScanLineInputFile_ctor_2


unsigned int Imf_3_0__DeepScanLineInputFile_dtor(
    Imf_DeepScanLineInputFile_t * this_);
#define Imf_DeepScanLineInputFile_dtor Imf_3_0__DeepScanLineInputFile_dtor


unsigned int Imf_3_0__DeepScanLineInputFile_fileName(
    Imf_DeepScanLineInputFile_t const * this_
    , char const * * return_);
#define Imf_DeepScanLineInputFile_fileName Imf_3_0__DeepScanLineInputFile_fileName


unsigned int Imf_3_0__DeepScanLineInputFile_header(
    Imf_DeepScanLineInputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_DeepScanLineInputFile_header Imf_3_0__DeepScanLineInputFile_header


unsigned int Imf_3_0__DeepScanLineInputFile_version(
    Imf_DeepScanLineInputFile_t const * this_
    , int * return_);
#define Imf_DeepScanLineInputFile_version Imf_3_0__DeepScanLineInputFile_version


unsigned int Imf_3_0__DeepScanLineInputFile_setFrameBuffer(
    Imf_DeepScanLineInputFile_t * this_
    , Imf_DeepFrameBuffer_t const * frameBuffer);
#define Imf_DeepScanLineInputFile_setFrameBuffer Imf_3_0__DeepScanLineInputFile_setFrameBuffer


unsigned int Imf_3_0__DeepScanLineInputFile_frameBuffer(
    Imf_DeepScanLineInputFile_t const * this_
    , Imf_DeepFrameBuffer_t const * * return_);
#define Imf_DeepScanLineInputFile_frameBuffer Imf_3_0__DeepScanLineInputFile_frameBuffer


unsigned int Imf_3_0__DeepScanLineInputFile_isComplete(
    Imf_DeepScanLineInputFile_t const * this_
    , _Bool * return_);
#define Imf_DeepScanLineInputFile_isComplete Imf_3_0__DeepScanLineInputFile_isComplete


unsigned int Imf_3_0__DeepScanLineInputFile_readPixels(
    Imf_DeepScanLineInputFile_t * this_
    , int scanLine1
    , int scanLine2);
#define Imf_DeepScanLineInputFile_readPixels Imf_3_0__DeepScanLineInputFile_readPixels


unsigned int Imf_3_0__DeepScanLineInputFile_readPixels_from_frame_buffer(
    Imf_DeepScanLineInputFile_t const * this_
    , char const * rawPixelData
    , Imf_DeepFrameBuffer_t const * frameBuffer
    , int scanLine1
    , int scanLine2);
#define Imf_DeepScanLineInputFile_readPixels_from_frame_buffer Imf_3_0__DeepScanLineInputFile_readPixels_from_frame_buffer


unsigned int Imf_3_0__DeepScanLineInputFile_rawPixelData(
    Imf_DeepScanLineInputFile_t * this_
    , int firstScanLine
    , char * pixelData
    , unsigned long * pixelDataSize);
#define Imf_DeepScanLineInputFile_rawPixelData Imf_3_0__DeepScanLineInputFile_rawPixelData


unsigned int Imf_3_0__DeepScanLineInputFile_firstScanLineInChunk(
    Imf_DeepScanLineInputFile_t const * this_
    , int * return_
    , int y);
#define Imf_DeepScanLineInputFile_firstScanLineInChunk Imf_3_0__DeepScanLineInputFile_firstScanLineInChunk


unsigned int Imf_3_0__DeepScanLineInputFile_lastScanLineInChunk(
    Imf_DeepScanLineInputFile_t const * this_
    , int * return_
    , int y);
#define Imf_DeepScanLineInputFile_lastScanLineInChunk Imf_3_0__DeepScanLineInputFile_lastScanLineInChunk


unsigned int Imf_3_0__DeepScanLineInputFile_readPixelSampleCounts(
    Imf_DeepScanLineInputFile_t * this_
    , int scanline1
    , int scanline2);
#define Imf_DeepScanLineInputFile_readPixelSampleCounts Imf_3_0__DeepScanLineInputFile_readPixelSampleCounts


unsigned int Imf_3_0__DeepScanLineInputFile_readPixelSampleCounts_into_frame_buffer(
    Imf_DeepScanLineInputFile_t const * this_
    , char const * rawdata
    , Imf_DeepFrameBuffer_t const * frameBuffer
    , int scanLine1
    , int scanLine2);
#define Imf_DeepScanLineInputFile_readPixelSampleCounts_into_frame_buffer Imf_3_0__DeepScanLineInputFile_readPixelSampleCounts_into_frame_buffer


#ifdef __cplusplus
}
#endif

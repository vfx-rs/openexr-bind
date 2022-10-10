#pragma once
#include "openexr-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__FrameBuffer_t_s Imf_3_0__FrameBuffer_t;
typedef Imf_3_0__FrameBuffer_t Imf_FrameBuffer_t;
typedef struct Imf_3_0__IStream_t_s Imf_3_0__IStream_t;
typedef Imf_3_0__IStream_t Imf_IStream_t;

typedef struct Imf_3_0__InputFile_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__InputFile_t;
typedef Imf_3_0__InputFile_t Imf_InputFile_t;

typedef struct Imf_3_0__GenericInputFile_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__GenericInputFile_t;
typedef Imf_3_0__GenericInputFile_t Imf_GenericInputFile_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_ctor(
    Imf_InputFile_t * * this_
    , char const * fileName
    , int numThreads);
#define Imf_InputFile_ctor Imf_3_0__InputFile_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_from_stream(
    Imf_InputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads);
#define Imf_InputFile_from_stream Imf_3_0__InputFile_from_stream


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_dtor(
    Imf_InputFile_t * this_);
#define Imf_InputFile_dtor Imf_3_0__InputFile_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_fileName(
    Imf_InputFile_t const * this_
    , char const * * return_);
#define Imf_InputFile_fileName Imf_3_0__InputFile_fileName


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_header(
    Imf_InputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_InputFile_header Imf_3_0__InputFile_header


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_version(
    Imf_InputFile_t const * this_
    , int * return_);
#define Imf_InputFile_version Imf_3_0__InputFile_version


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_setFrameBuffer(
    Imf_InputFile_t * this_
    , Imf_FrameBuffer_t const * frameBuffer);
#define Imf_InputFile_setFrameBuffer Imf_3_0__InputFile_setFrameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_frameBuffer(
    Imf_InputFile_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_InputFile_frameBuffer Imf_3_0__InputFile_frameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_isComplete(
    Imf_InputFile_t const * this_
    , _Bool * return_);
#define Imf_InputFile_isComplete Imf_3_0__InputFile_isComplete


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_isOptimizationEnabled(
    Imf_InputFile_t const * this_
    , _Bool * return_);
#define Imf_InputFile_isOptimizationEnabled Imf_3_0__InputFile_isOptimizationEnabled


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_readPixels(
    Imf_InputFile_t * this_
    , int scanLine1
    , int scanLine2);
#define Imf_InputFile_readPixels Imf_3_0__InputFile_readPixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_rawPixelData(
    Imf_InputFile_t * this_
    , int firstScanLine
    , char const * * pixelData
    , int * pixelDataSize);
#define Imf_InputFile_rawPixelData Imf_3_0__InputFile_rawPixelData


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_rawPixelDataToBuffer(
    Imf_InputFile_t const * this_
    , int scanLine
    , char * pixelData
    , int * pixelDataSize);
#define Imf_InputFile_rawPixelDataToBuffer Imf_3_0__InputFile_rawPixelDataToBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputFile_rawTileData(
    Imf_InputFile_t * this_
    , int * dx
    , int * dy
    , int * lx
    , int * ly
    , char const * * pixelData
    , int * pixelDataSize);
#define Imf_InputFile_rawTileData Imf_3_0__InputFile_rawTileData


OPENEXR_CPPMM_API unsigned int Imf_3_0__GenericInputFile_dtor(
    Imf_GenericInputFile_t * this_);
#define Imf_GenericInputFile_dtor Imf_3_0__GenericInputFile_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__GenericInputFile__assign(
    Imf_GenericInputFile_t * this_
    , Imf_GenericInputFile_t * * return_
    , Imf_GenericInputFile_t const * rhs);
#define Imf_GenericInputFile__assign Imf_3_0__GenericInputFile__assign


OPENEXR_CPPMM_API unsigned int Imf_3_0__GenericInputFile_copy(
    Imf_GenericInputFile_t * * this_
    , Imf_GenericInputFile_t const * rhs);
#define Imf_GenericInputFile_copy Imf_3_0__GenericInputFile_copy


#ifdef __cplusplus
}
#endif

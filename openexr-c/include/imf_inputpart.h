#pragma once
#include "openexr-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__MultiPartInputFile_t_s Imf_3_0__MultiPartInputFile_t;
typedef Imf_3_0__MultiPartInputFile_t Imf_MultiPartInputFile_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__FrameBuffer_t_s Imf_3_0__FrameBuffer_t;
typedef Imf_3_0__FrameBuffer_t Imf_FrameBuffer_t;

typedef struct Imf_3_0__InputPart_t_s {
    char data[8];
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__InputPart_t;
typedef Imf_3_0__InputPart_t Imf_InputPart_t;


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_sizeof();
#define Imf_InputPart_sizeof Imf_3_0__InputPart_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_alignof();
#define Imf_InputPart_alignof Imf_3_0__InputPart_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_ctor(
    Imf_InputPart_t * this_
    , Imf_MultiPartInputFile_t * multiPartFile
    , int partNumber);
#define Imf_InputPart_ctor Imf_3_0__InputPart_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_fileName(
    Imf_InputPart_t const * this_
    , char const * * return_);
#define Imf_InputPart_fileName Imf_3_0__InputPart_fileName


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_header(
    Imf_InputPart_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_InputPart_header Imf_3_0__InputPart_header


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_version(
    Imf_InputPart_t const * this_
    , int * return_);
#define Imf_InputPart_version Imf_3_0__InputPart_version


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_setFrameBuffer(
    Imf_InputPart_t * this_
    , Imf_FrameBuffer_t const * frameBuffer);
#define Imf_InputPart_setFrameBuffer Imf_3_0__InputPart_setFrameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_frameBuffer(
    Imf_InputPart_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_InputPart_frameBuffer Imf_3_0__InputPart_frameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_isComplete(
    Imf_InputPart_t const * this_
    , _Bool * return_);
#define Imf_InputPart_isComplete Imf_3_0__InputPart_isComplete


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_isOptimizationEnabled(
    Imf_InputPart_t const * this_
    , _Bool * return_);
#define Imf_InputPart_isOptimizationEnabled Imf_3_0__InputPart_isOptimizationEnabled


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_readPixels(
    Imf_InputPart_t * this_
    , int scanLine1
    , int scanLine2);
#define Imf_InputPart_readPixels Imf_3_0__InputPart_readPixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_readPixels_1(
    Imf_InputPart_t * this_
    , int scanLine);
#define Imf_InputPart_readPixels_1 Imf_3_0__InputPart_readPixels_1


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_rawPixelData(
    Imf_InputPart_t * this_
    , int firstScanLine
    , char const * * pixelData
    , int * pixelDataSize);
#define Imf_InputPart_rawPixelData Imf_3_0__InputPart_rawPixelData


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_rawPixelDataToBuffer(
    Imf_InputPart_t const * this_
    , int scanLine
    , char * pixelData
    , int * pixelDataSize);
#define Imf_InputPart_rawPixelDataToBuffer Imf_3_0__InputPart_rawPixelDataToBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_rawTileData(
    Imf_InputPart_t * this_
    , int * dx
    , int * dy
    , int * lx
    , int * ly
    , char const * * pixelData
    , int * pixelDataSize);
#define Imf_InputPart_rawTileData Imf_3_0__InputPart_rawTileData


#ifdef __cplusplus
}
#endif

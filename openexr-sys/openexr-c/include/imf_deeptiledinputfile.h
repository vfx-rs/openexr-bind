#pragma once
#include "openexr-api-export.h"

#include <imath_box.h>
#include <imf_tiledescription.h>
#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__DeepFrameBuffer_t_s Imf_3_0__DeepFrameBuffer_t;
typedef Imf_3_0__DeepFrameBuffer_t Imf_DeepFrameBuffer_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__IStream_t_s Imf_3_0__IStream_t;
typedef Imf_3_0__IStream_t Imf_IStream_t;

typedef struct Imf_3_0__DeepTiledInputFile_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__DeepTiledInputFile_t;
typedef Imf_3_0__DeepTiledInputFile_t Imf_DeepTiledInputFile_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_ctor(
    Imf_DeepTiledInputFile_t * * this_
    , char const * fileName
    , int numThreads);
#define Imf_DeepTiledInputFile_ctor Imf_3_0__DeepTiledInputFile_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_from_stream(
    Imf_DeepTiledInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads);
#define Imf_DeepTiledInputFile_from_stream Imf_3_0__DeepTiledInputFile_from_stream


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_dtor(
    Imf_DeepTiledInputFile_t * this_);
#define Imf_DeepTiledInputFile_dtor Imf_3_0__DeepTiledInputFile_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_fileName(
    Imf_DeepTiledInputFile_t const * this_
    , char const * * return_);
#define Imf_DeepTiledInputFile_fileName Imf_3_0__DeepTiledInputFile_fileName


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_header(
    Imf_DeepTiledInputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_DeepTiledInputFile_header Imf_3_0__DeepTiledInputFile_header


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_version(
    Imf_DeepTiledInputFile_t const * this_
    , int * return_);
#define Imf_DeepTiledInputFile_version Imf_3_0__DeepTiledInputFile_version


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_setFrameBuffer(
    Imf_DeepTiledInputFile_t * this_
    , Imf_DeepFrameBuffer_t const * frameBuffer);
#define Imf_DeepTiledInputFile_setFrameBuffer Imf_3_0__DeepTiledInputFile_setFrameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_frameBuffer(
    Imf_DeepTiledInputFile_t const * this_
    , Imf_DeepFrameBuffer_t const * * return_);
#define Imf_DeepTiledInputFile_frameBuffer Imf_3_0__DeepTiledInputFile_frameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_isComplete(
    Imf_DeepTiledInputFile_t const * this_
    , _Bool * return_);
#define Imf_DeepTiledInputFile_isComplete Imf_3_0__DeepTiledInputFile_isComplete


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_tileXSize(
    Imf_DeepTiledInputFile_t const * this_
    , unsigned int * return_);
#define Imf_DeepTiledInputFile_tileXSize Imf_3_0__DeepTiledInputFile_tileXSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_tileYSize(
    Imf_DeepTiledInputFile_t const * this_
    , unsigned int * return_);
#define Imf_DeepTiledInputFile_tileYSize Imf_3_0__DeepTiledInputFile_tileYSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_levelMode(
    Imf_DeepTiledInputFile_t const * this_
    , Imf_LevelMode * return_);
#define Imf_DeepTiledInputFile_levelMode Imf_3_0__DeepTiledInputFile_levelMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_levelRoundingMode(
    Imf_DeepTiledInputFile_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_DeepTiledInputFile_levelRoundingMode Imf_3_0__DeepTiledInputFile_levelRoundingMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_numLevels(
    Imf_DeepTiledInputFile_t const * this_
    , int * return_);
#define Imf_DeepTiledInputFile_numLevels Imf_3_0__DeepTiledInputFile_numLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_numXLevels(
    Imf_DeepTiledInputFile_t const * this_
    , int * return_);
#define Imf_DeepTiledInputFile_numXLevels Imf_3_0__DeepTiledInputFile_numXLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_numYLevels(
    Imf_DeepTiledInputFile_t const * this_
    , int * return_);
#define Imf_DeepTiledInputFile_numYLevels Imf_3_0__DeepTiledInputFile_numYLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_isValidLevel(
    Imf_DeepTiledInputFile_t const * this_
    , _Bool * return_
    , int lx
    , int ly);
#define Imf_DeepTiledInputFile_isValidLevel Imf_3_0__DeepTiledInputFile_isValidLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_totalTiles(
    Imf_DeepTiledInputFile_t const * this_
    , unsigned long * return_);
#define Imf_DeepTiledInputFile_totalTiles Imf_3_0__DeepTiledInputFile_totalTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_levelWidth(
    Imf_DeepTiledInputFile_t const * this_
    , int * return_
    , int lx);
#define Imf_DeepTiledInputFile_levelWidth Imf_3_0__DeepTiledInputFile_levelWidth


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_levelHeight(
    Imf_DeepTiledInputFile_t const * this_
    , int * return_
    , int ly);
#define Imf_DeepTiledInputFile_levelHeight Imf_3_0__DeepTiledInputFile_levelHeight


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_numXTiles(
    Imf_DeepTiledInputFile_t const * this_
    , int * return_
    , int lx);
#define Imf_DeepTiledInputFile_numXTiles Imf_3_0__DeepTiledInputFile_numXTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_numYTiles(
    Imf_DeepTiledInputFile_t const * this_
    , int * return_
    , int ly);
#define Imf_DeepTiledInputFile_numYTiles Imf_3_0__DeepTiledInputFile_numYTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_dataWindowForLevel(
    Imf_DeepTiledInputFile_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly);
#define Imf_DeepTiledInputFile_dataWindowForLevel Imf_3_0__DeepTiledInputFile_dataWindowForLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_dataWindowForTile(
    Imf_DeepTiledInputFile_t const * this_
    , Imath_Box2i_t * return_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_DeepTiledInputFile_dataWindowForTile Imf_3_0__DeepTiledInputFile_dataWindowForTile


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_readTile(
    Imf_DeepTiledInputFile_t * this_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_DeepTiledInputFile_readTile Imf_3_0__DeepTiledInputFile_readTile


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_readTiles(
    Imf_DeepTiledInputFile_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly);
#define Imf_DeepTiledInputFile_readTiles Imf_3_0__DeepTiledInputFile_readTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_rawTileData(
    Imf_DeepTiledInputFile_t const * this_
    , int * dx
    , int * dy
    , int * lx
    , int * ly
    , char * pixelData
    , uint64_t * dataSize);
#define Imf_DeepTiledInputFile_rawTileData Imf_3_0__DeepTiledInputFile_rawTileData


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_readPixelSampleCount(
    Imf_DeepTiledInputFile_t * this_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_DeepTiledInputFile_readPixelSampleCount Imf_3_0__DeepTiledInputFile_readPixelSampleCount


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_readPixelSampleCounts(
    Imf_DeepTiledInputFile_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly);
#define Imf_DeepTiledInputFile_readPixelSampleCounts Imf_3_0__DeepTiledInputFile_readPixelSampleCounts


#ifdef __cplusplus
}
#endif

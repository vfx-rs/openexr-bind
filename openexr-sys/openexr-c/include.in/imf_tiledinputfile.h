#pragma once
#include "openexr-api-export.h"

#include <imath_box.h>
#include <imf_tiledescription.h>
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

typedef struct Imf_3_0__TiledInputFile_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__TiledInputFile_t;
typedef Imf_3_0__TiledInputFile_t Imf_TiledInputFile_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_ctor(
    Imf_TiledInputFile_t * * this_
    , char const * fileName
    , int numThreads);
#define Imf_TiledInputFile_ctor Imf_3_0__TiledInputFile_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_from_stream(
    Imf_TiledInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads);
#define Imf_TiledInputFile_from_stream Imf_3_0__TiledInputFile_from_stream


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_dtor(
    Imf_TiledInputFile_t * this_);
#define Imf_TiledInputFile_dtor Imf_3_0__TiledInputFile_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_fileName(
    Imf_TiledInputFile_t const * this_
    , char const * * return_);
#define Imf_TiledInputFile_fileName Imf_3_0__TiledInputFile_fileName


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_header(
    Imf_TiledInputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_TiledInputFile_header Imf_3_0__TiledInputFile_header


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_version(
    Imf_TiledInputFile_t const * this_
    , int * return_);
#define Imf_TiledInputFile_version Imf_3_0__TiledInputFile_version


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_setFrameBuffer(
    Imf_TiledInputFile_t * this_
    , Imf_FrameBuffer_t const * frameBuffer);
#define Imf_TiledInputFile_setFrameBuffer Imf_3_0__TiledInputFile_setFrameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_frameBuffer(
    Imf_TiledInputFile_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_TiledInputFile_frameBuffer Imf_3_0__TiledInputFile_frameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_isComplete(
    Imf_TiledInputFile_t const * this_
    , _Bool * return_);
#define Imf_TiledInputFile_isComplete Imf_3_0__TiledInputFile_isComplete


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_tileXSize(
    Imf_TiledInputFile_t const * this_
    , unsigned int * return_);
#define Imf_TiledInputFile_tileXSize Imf_3_0__TiledInputFile_tileXSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_tileYSize(
    Imf_TiledInputFile_t const * this_
    , unsigned int * return_);
#define Imf_TiledInputFile_tileYSize Imf_3_0__TiledInputFile_tileYSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_levelMode(
    Imf_TiledInputFile_t const * this_
    , Imf_LevelMode * return_);
#define Imf_TiledInputFile_levelMode Imf_3_0__TiledInputFile_levelMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_levelRoundingMode(
    Imf_TiledInputFile_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_TiledInputFile_levelRoundingMode Imf_3_0__TiledInputFile_levelRoundingMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_numLevels(
    Imf_TiledInputFile_t const * this_
    , int * return_);
#define Imf_TiledInputFile_numLevels Imf_3_0__TiledInputFile_numLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_numXLevels(
    Imf_TiledInputFile_t const * this_
    , int * return_);
#define Imf_TiledInputFile_numXLevels Imf_3_0__TiledInputFile_numXLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_numYLevels(
    Imf_TiledInputFile_t const * this_
    , int * return_);
#define Imf_TiledInputFile_numYLevels Imf_3_0__TiledInputFile_numYLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_isValidLevel(
    Imf_TiledInputFile_t const * this_
    , _Bool * return_
    , int lx
    , int ly);
#define Imf_TiledInputFile_isValidLevel Imf_3_0__TiledInputFile_isValidLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_levelWidth(
    Imf_TiledInputFile_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledInputFile_levelWidth Imf_3_0__TiledInputFile_levelWidth


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_levelHeight(
    Imf_TiledInputFile_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledInputFile_levelHeight Imf_3_0__TiledInputFile_levelHeight


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_numXTiles(
    Imf_TiledInputFile_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledInputFile_numXTiles Imf_3_0__TiledInputFile_numXTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_numYTiles(
    Imf_TiledInputFile_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledInputFile_numYTiles Imf_3_0__TiledInputFile_numYTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_dataWindowForLevel(
    Imf_TiledInputFile_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly);
#define Imf_TiledInputFile_dataWindowForLevel Imf_3_0__TiledInputFile_dataWindowForLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_dataWindowForTile(
    Imf_TiledInputFile_t const * this_
    , Imath_Box2i_t * return_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledInputFile_dataWindowForTile Imf_3_0__TiledInputFile_dataWindowForTile


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_readTile(
    Imf_TiledInputFile_t * this_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledInputFile_readTile Imf_3_0__TiledInputFile_readTile


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_readTiles(
    Imf_TiledInputFile_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly);
#define Imf_TiledInputFile_readTiles Imf_3_0__TiledInputFile_readTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputFile_rawTileData(
    Imf_TiledInputFile_t * this_
    , int * dx
    , int * dy
    , int * lx
    , int * ly
    , char const * * pixelData
    , int * pixelDataSize);
#define Imf_TiledInputFile_rawTileData Imf_3_0__TiledInputFile_rawTileData


#ifdef __cplusplus
}
#endif

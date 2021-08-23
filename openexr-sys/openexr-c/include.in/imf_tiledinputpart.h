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
typedef struct Imf_3_0__MultiPartInputFile_t_s Imf_3_0__MultiPartInputFile_t;
typedef Imf_3_0__MultiPartInputFile_t Imf_MultiPartInputFile_t;

typedef struct Imf_3_0__TiledInputPart_t_s {
    char data[%SIZEImf_3_0::TiledInputPart%];
} OPENEXR_CPPMM_ALIGN(%ALIGNImf_3_0::TiledInputPart%) Imf_3_0__TiledInputPart_t;
typedef Imf_3_0__TiledInputPart_t Imf_TiledInputPart_t;


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_sizeof();
#define Imf_TiledInputPart_sizeof Imf_3_0__TiledInputPart_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_alignof();
#define Imf_TiledInputPart_alignof Imf_3_0__TiledInputPart_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_ctor(
    Imf_TiledInputPart_t * this_
    , Imf_MultiPartInputFile_t * multiPartFile
    , int partNumber);
#define Imf_TiledInputPart_ctor Imf_3_0__TiledInputPart_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_fileName(
    Imf_TiledInputPart_t const * this_
    , char const * * return_);
#define Imf_TiledInputPart_fileName Imf_3_0__TiledInputPart_fileName


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_header(
    Imf_TiledInputPart_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_TiledInputPart_header Imf_3_0__TiledInputPart_header


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_version(
    Imf_TiledInputPart_t const * this_
    , int * return_);
#define Imf_TiledInputPart_version Imf_3_0__TiledInputPart_version


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_setFrameBuffer(
    Imf_TiledInputPart_t * this_
    , Imf_FrameBuffer_t const * frameBuffer);
#define Imf_TiledInputPart_setFrameBuffer Imf_3_0__TiledInputPart_setFrameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_frameBuffer(
    Imf_TiledInputPart_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_TiledInputPart_frameBuffer Imf_3_0__TiledInputPart_frameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_isComplete(
    Imf_TiledInputPart_t const * this_
    , _Bool * return_);
#define Imf_TiledInputPart_isComplete Imf_3_0__TiledInputPart_isComplete


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_tileXSize(
    Imf_TiledInputPart_t const * this_
    , unsigned int * return_);
#define Imf_TiledInputPart_tileXSize Imf_3_0__TiledInputPart_tileXSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_tileYSize(
    Imf_TiledInputPart_t const * this_
    , unsigned int * return_);
#define Imf_TiledInputPart_tileYSize Imf_3_0__TiledInputPart_tileYSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_levelMode(
    Imf_TiledInputPart_t const * this_
    , Imf_LevelMode * return_);
#define Imf_TiledInputPart_levelMode Imf_3_0__TiledInputPart_levelMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_levelRoundingMode(
    Imf_TiledInputPart_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_TiledInputPart_levelRoundingMode Imf_3_0__TiledInputPart_levelRoundingMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_numLevels(
    Imf_TiledInputPart_t const * this_
    , int * return_);
#define Imf_TiledInputPart_numLevels Imf_3_0__TiledInputPart_numLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_numXLevels(
    Imf_TiledInputPart_t const * this_
    , int * return_);
#define Imf_TiledInputPart_numXLevels Imf_3_0__TiledInputPart_numXLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_numYLevels(
    Imf_TiledInputPart_t const * this_
    , int * return_);
#define Imf_TiledInputPart_numYLevels Imf_3_0__TiledInputPart_numYLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_isValidLevel(
    Imf_TiledInputPart_t const * this_
    , _Bool * return_
    , int lx
    , int ly);
#define Imf_TiledInputPart_isValidLevel Imf_3_0__TiledInputPart_isValidLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_levelWidth(
    Imf_TiledInputPart_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledInputPart_levelWidth Imf_3_0__TiledInputPart_levelWidth


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_levelHeight(
    Imf_TiledInputPart_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledInputPart_levelHeight Imf_3_0__TiledInputPart_levelHeight


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_numXTiles(
    Imf_TiledInputPart_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledInputPart_numXTiles Imf_3_0__TiledInputPart_numXTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_numYTiles(
    Imf_TiledInputPart_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledInputPart_numYTiles Imf_3_0__TiledInputPart_numYTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_dataWindowForLevel(
    Imf_TiledInputPart_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly);
#define Imf_TiledInputPart_dataWindowForLevel Imf_3_0__TiledInputPart_dataWindowForLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_dataWindowForTile(
    Imf_TiledInputPart_t const * this_
    , Imath_Box2i_t * return_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledInputPart_dataWindowForTile Imf_3_0__TiledInputPart_dataWindowForTile


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_readTile(
    Imf_TiledInputPart_t * this_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledInputPart_readTile Imf_3_0__TiledInputPart_readTile


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_readTiles(
    Imf_TiledInputPart_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly);
#define Imf_TiledInputPart_readTiles Imf_3_0__TiledInputPart_readTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledInputPart_rawTileData(
    Imf_TiledInputPart_t * this_
    , int * dx
    , int * dy
    , int * lx
    , int * ly
    , char const * * pixelData
    , int * pixelDataSize);
#define Imf_TiledInputPart_rawTileData Imf_3_0__TiledInputPart_rawTileData


#ifdef __cplusplus
}
#endif

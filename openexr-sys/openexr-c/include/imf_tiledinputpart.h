#pragma once
#include <imath_box.h>
#include <imf_tiledescription.h>
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

typedef struct Imf_3_0__TiledInputPart_t_s {
    char data[8];
} __attribute__((aligned(8))) Imf_3_0__TiledInputPart_t;
typedef Imf_3_0__TiledInputPart_t Imf_TiledInputPart_t;


/** returns the size of this type in bytes */
unsigned int Imf_3_0__TiledInputPart_sizeof();
#define Imf_TiledInputPart_sizeof Imf_3_0__TiledInputPart_sizeof


/** returns the size of this type in bytes */
unsigned int Imf_3_0__TiledInputPart_alignof();
#define Imf_TiledInputPart_alignof Imf_3_0__TiledInputPart_alignof


unsigned int Imf_3_0__TiledInputPart_ctor(
    Imf_TiledInputPart_t * this_
    , Imf_MultiPartInputFile_t * multiPartFile
    , int partNumber);
#define Imf_TiledInputPart_ctor Imf_3_0__TiledInputPart_ctor


unsigned int Imf_3_0__TiledInputPart_fileName(
    Imf_TiledInputPart_t const * this_
    , char const * * return_);
#define Imf_TiledInputPart_fileName Imf_3_0__TiledInputPart_fileName


unsigned int Imf_3_0__TiledInputPart_header(
    Imf_TiledInputPart_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_TiledInputPart_header Imf_3_0__TiledInputPart_header


unsigned int Imf_3_0__TiledInputPart_version(
    Imf_TiledInputPart_t const * this_
    , int * return_);
#define Imf_TiledInputPart_version Imf_3_0__TiledInputPart_version


unsigned int Imf_3_0__TiledInputPart_setFrameBuffer(
    Imf_TiledInputPart_t * this_
    , Imf_FrameBuffer_t const * frameBuffer);
#define Imf_TiledInputPart_setFrameBuffer Imf_3_0__TiledInputPart_setFrameBuffer


unsigned int Imf_3_0__TiledInputPart_frameBuffer(
    Imf_TiledInputPart_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_TiledInputPart_frameBuffer Imf_3_0__TiledInputPart_frameBuffer


unsigned int Imf_3_0__TiledInputPart_isComplete(
    Imf_TiledInputPart_t const * this_
    , _Bool * return_);
#define Imf_TiledInputPart_isComplete Imf_3_0__TiledInputPart_isComplete


unsigned int Imf_3_0__TiledInputPart_tileXSize(
    Imf_TiledInputPart_t const * this_
    , unsigned int * return_);
#define Imf_TiledInputPart_tileXSize Imf_3_0__TiledInputPart_tileXSize


unsigned int Imf_3_0__TiledInputPart_tileYSize(
    Imf_TiledInputPart_t const * this_
    , unsigned int * return_);
#define Imf_TiledInputPart_tileYSize Imf_3_0__TiledInputPart_tileYSize


unsigned int Imf_3_0__TiledInputPart_levelMode(
    Imf_TiledInputPart_t const * this_
    , Imf_LevelMode * return_);
#define Imf_TiledInputPart_levelMode Imf_3_0__TiledInputPart_levelMode


unsigned int Imf_3_0__TiledInputPart_levelRoundingMode(
    Imf_TiledInputPart_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_TiledInputPart_levelRoundingMode Imf_3_0__TiledInputPart_levelRoundingMode


unsigned int Imf_3_0__TiledInputPart_numLevels(
    Imf_TiledInputPart_t const * this_
    , int * return_);
#define Imf_TiledInputPart_numLevels Imf_3_0__TiledInputPart_numLevels


unsigned int Imf_3_0__TiledInputPart_numXLevels(
    Imf_TiledInputPart_t const * this_
    , int * return_);
#define Imf_TiledInputPart_numXLevels Imf_3_0__TiledInputPart_numXLevels


unsigned int Imf_3_0__TiledInputPart_numYLevels(
    Imf_TiledInputPart_t const * this_
    , int * return_);
#define Imf_TiledInputPart_numYLevels Imf_3_0__TiledInputPart_numYLevels


unsigned int Imf_3_0__TiledInputPart_isValidLevel(
    Imf_TiledInputPart_t const * this_
    , _Bool * return_
    , int lx
    , int ly);
#define Imf_TiledInputPart_isValidLevel Imf_3_0__TiledInputPart_isValidLevel


unsigned int Imf_3_0__TiledInputPart_levelWidth(
    Imf_TiledInputPart_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledInputPart_levelWidth Imf_3_0__TiledInputPart_levelWidth


unsigned int Imf_3_0__TiledInputPart_levelHeight(
    Imf_TiledInputPart_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledInputPart_levelHeight Imf_3_0__TiledInputPart_levelHeight


unsigned int Imf_3_0__TiledInputPart_numXTiles(
    Imf_TiledInputPart_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledInputPart_numXTiles Imf_3_0__TiledInputPart_numXTiles


unsigned int Imf_3_0__TiledInputPart_numYTiles(
    Imf_TiledInputPart_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledInputPart_numYTiles Imf_3_0__TiledInputPart_numYTiles


unsigned int Imf_3_0__TiledInputPart_dataWindowForLevel(
    Imf_TiledInputPart_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly);
#define Imf_TiledInputPart_dataWindowForLevel Imf_3_0__TiledInputPart_dataWindowForLevel


unsigned int Imf_3_0__TiledInputPart_dataWindowForTile(
    Imf_TiledInputPart_t const * this_
    , Imath_Box2i_t * return_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledInputPart_dataWindowForTile Imf_3_0__TiledInputPart_dataWindowForTile


unsigned int Imf_3_0__TiledInputPart_readTile(
    Imf_TiledInputPart_t * this_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledInputPart_readTile Imf_3_0__TiledInputPart_readTile


unsigned int Imf_3_0__TiledInputPart_readTiles(
    Imf_TiledInputPart_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly);
#define Imf_TiledInputPart_readTiles Imf_3_0__TiledInputPart_readTiles


unsigned int Imf_3_0__TiledInputPart_rawTileData(
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

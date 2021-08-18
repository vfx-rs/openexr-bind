#pragma once
#include <imath_box.h>
#include <imf_tiledescription.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__DeepFrameBuffer_t_s Imf_3_0__DeepFrameBuffer_t;
typedef Imf_3_0__DeepFrameBuffer_t Imf_DeepFrameBuffer_t;
typedef struct Imf_3_0__MultiPartInputFile_t_s Imf_3_0__MultiPartInputFile_t;
typedef Imf_3_0__MultiPartInputFile_t Imf_MultiPartInputFile_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;

typedef struct Imf_3_0__DeepTiledInputPart_t_s {
    char data[8];
} __attribute__((aligned(8))) Imf_3_0__DeepTiledInputPart_t;
typedef Imf_3_0__DeepTiledInputPart_t Imf_DeepTiledInputPart_t;


/** returns the size of this type in bytes */
unsigned int Imf_3_0__DeepTiledInputPart_sizeof();
#define Imf_DeepTiledInputPart_sizeof Imf_3_0__DeepTiledInputPart_sizeof


/** returns the size of this type in bytes */
unsigned int Imf_3_0__DeepTiledInputPart_alignof();
#define Imf_DeepTiledInputPart_alignof Imf_3_0__DeepTiledInputPart_alignof


unsigned int Imf_3_0__DeepTiledInputPart_ctor(
    Imf_DeepTiledInputPart_t * this_
    , Imf_MultiPartInputFile_t * multiPartFile
    , int partNumber);
#define Imf_DeepTiledInputPart_ctor Imf_3_0__DeepTiledInputPart_ctor


unsigned int Imf_3_0__DeepTiledInputPart_fileName(
    Imf_DeepTiledInputPart_t const * this_
    , char const * * return_);
#define Imf_DeepTiledInputPart_fileName Imf_3_0__DeepTiledInputPart_fileName


unsigned int Imf_3_0__DeepTiledInputPart_header(
    Imf_DeepTiledInputPart_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_DeepTiledInputPart_header Imf_3_0__DeepTiledInputPart_header


unsigned int Imf_3_0__DeepTiledInputPart_version(
    Imf_DeepTiledInputPart_t const * this_
    , int * return_);
#define Imf_DeepTiledInputPart_version Imf_3_0__DeepTiledInputPart_version


unsigned int Imf_3_0__DeepTiledInputPart_setFrameBuffer(
    Imf_DeepTiledInputPart_t * this_
    , Imf_DeepFrameBuffer_t const * frameBuffer);
#define Imf_DeepTiledInputPart_setFrameBuffer Imf_3_0__DeepTiledInputPart_setFrameBuffer


unsigned int Imf_3_0__DeepTiledInputPart_frameBuffer(
    Imf_DeepTiledInputPart_t const * this_
    , Imf_DeepFrameBuffer_t const * * return_);
#define Imf_DeepTiledInputPart_frameBuffer Imf_3_0__DeepTiledInputPart_frameBuffer


unsigned int Imf_3_0__DeepTiledInputPart_isComplete(
    Imf_DeepTiledInputPart_t const * this_
    , _Bool * return_);
#define Imf_DeepTiledInputPart_isComplete Imf_3_0__DeepTiledInputPart_isComplete


unsigned int Imf_3_0__DeepTiledInputPart_tileXSize(
    Imf_DeepTiledInputPart_t const * this_
    , unsigned int * return_);
#define Imf_DeepTiledInputPart_tileXSize Imf_3_0__DeepTiledInputPart_tileXSize


unsigned int Imf_3_0__DeepTiledInputPart_tileYSize(
    Imf_DeepTiledInputPart_t const * this_
    , unsigned int * return_);
#define Imf_DeepTiledInputPart_tileYSize Imf_3_0__DeepTiledInputPart_tileYSize


unsigned int Imf_3_0__DeepTiledInputPart_levelMode(
    Imf_DeepTiledInputPart_t const * this_
    , Imf_LevelMode * return_);
#define Imf_DeepTiledInputPart_levelMode Imf_3_0__DeepTiledInputPart_levelMode


unsigned int Imf_3_0__DeepTiledInputPart_levelRoundingMode(
    Imf_DeepTiledInputPart_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_DeepTiledInputPart_levelRoundingMode Imf_3_0__DeepTiledInputPart_levelRoundingMode


unsigned int Imf_3_0__DeepTiledInputPart_numLevels(
    Imf_DeepTiledInputPart_t const * this_
    , int * return_);
#define Imf_DeepTiledInputPart_numLevels Imf_3_0__DeepTiledInputPart_numLevels


unsigned int Imf_3_0__DeepTiledInputPart_numXLevels(
    Imf_DeepTiledInputPart_t const * this_
    , int * return_);
#define Imf_DeepTiledInputPart_numXLevels Imf_3_0__DeepTiledInputPart_numXLevels


unsigned int Imf_3_0__DeepTiledInputPart_numYLevels(
    Imf_DeepTiledInputPart_t const * this_
    , int * return_);
#define Imf_DeepTiledInputPart_numYLevels Imf_3_0__DeepTiledInputPart_numYLevels


unsigned int Imf_3_0__DeepTiledInputPart_isValidLevel(
    Imf_DeepTiledInputPart_t const * this_
    , _Bool * return_
    , int lx
    , int ly);
#define Imf_DeepTiledInputPart_isValidLevel Imf_3_0__DeepTiledInputPart_isValidLevel


unsigned int Imf_3_0__DeepTiledInputPart_levelWidth(
    Imf_DeepTiledInputPart_t const * this_
    , int * return_
    , int lx);
#define Imf_DeepTiledInputPart_levelWidth Imf_3_0__DeepTiledInputPart_levelWidth


unsigned int Imf_3_0__DeepTiledInputPart_levelHeight(
    Imf_DeepTiledInputPart_t const * this_
    , int * return_
    , int ly);
#define Imf_DeepTiledInputPart_levelHeight Imf_3_0__DeepTiledInputPart_levelHeight


unsigned int Imf_3_0__DeepTiledInputPart_numXTiles(
    Imf_DeepTiledInputPart_t const * this_
    , int * return_
    , int lx);
#define Imf_DeepTiledInputPart_numXTiles Imf_3_0__DeepTiledInputPart_numXTiles


unsigned int Imf_3_0__DeepTiledInputPart_numYTiles(
    Imf_DeepTiledInputPart_t const * this_
    , int * return_
    , int ly);
#define Imf_DeepTiledInputPart_numYTiles Imf_3_0__DeepTiledInputPart_numYTiles


unsigned int Imf_3_0__DeepTiledInputPart_dataWindowForLevel(
    Imf_DeepTiledInputPart_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly);
#define Imf_DeepTiledInputPart_dataWindowForLevel Imf_3_0__DeepTiledInputPart_dataWindowForLevel


unsigned int Imf_3_0__DeepTiledInputPart_dataWindowForTile(
    Imf_DeepTiledInputPart_t const * this_
    , Imath_Box2i_t * return_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_DeepTiledInputPart_dataWindowForTile Imf_3_0__DeepTiledInputPart_dataWindowForTile


unsigned int Imf_3_0__DeepTiledInputPart_readTile(
    Imf_DeepTiledInputPart_t * this_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_DeepTiledInputPart_readTile Imf_3_0__DeepTiledInputPart_readTile


unsigned int Imf_3_0__DeepTiledInputPart_readTiles(
    Imf_DeepTiledInputPart_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly);
#define Imf_DeepTiledInputPart_readTiles Imf_3_0__DeepTiledInputPart_readTiles


unsigned int Imf_3_0__DeepTiledInputPart_rawTileData(
    Imf_DeepTiledInputPart_t const * this_
    , int * dx
    , int * dy
    , int * lx
    , int * ly
    , char * data
    , unsigned long * dataSize);
#define Imf_DeepTiledInputPart_rawTileData Imf_3_0__DeepTiledInputPart_rawTileData


unsigned int Imf_3_0__DeepTiledInputPart_readPixelSampleCount(
    Imf_DeepTiledInputPart_t * this_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_DeepTiledInputPart_readPixelSampleCount Imf_3_0__DeepTiledInputPart_readPixelSampleCount


unsigned int Imf_3_0__DeepTiledInputPart_readPixelSampleCounts(
    Imf_DeepTiledInputPart_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly);
#define Imf_DeepTiledInputPart_readPixelSampleCounts Imf_3_0__DeepTiledInputPart_readPixelSampleCounts


#ifdef __cplusplus
}
#endif

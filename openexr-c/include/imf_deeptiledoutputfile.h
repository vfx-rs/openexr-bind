#pragma once
#include <imath_box.h>
#include <imf_tiledescription.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__PreviewRgba_t_s Imf_3_0__PreviewRgba_t;
typedef Imf_3_0__PreviewRgba_t Imf_PreviewRgba_t;
typedef struct Imf_3_0__DeepTiledInputPart_t_s Imf_3_0__DeepTiledInputPart_t;
typedef Imf_3_0__DeepTiledInputPart_t Imf_DeepTiledInputPart_t;
typedef struct Imf_3_0__DeepFrameBuffer_t_s Imf_3_0__DeepFrameBuffer_t;
typedef Imf_3_0__DeepFrameBuffer_t Imf_DeepFrameBuffer_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__DeepTiledInputFile_t_s Imf_3_0__DeepTiledInputFile_t;
typedef Imf_3_0__DeepTiledInputFile_t Imf_DeepTiledInputFile_t;
typedef struct Imf_3_0__OStream_t_s Imf_3_0__OStream_t;
typedef Imf_3_0__OStream_t Imf_OStream_t;

typedef struct Imf_3_0__DeepTiledOutputFile_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__DeepTiledOutputFile_t;
typedef Imf_3_0__DeepTiledOutputFile_t Imf_DeepTiledOutputFile_t;


unsigned int Imf_3_0__DeepTiledOutputFile_ctor(
    Imf_DeepTiledOutputFile_t * * this_
    , char const * fileName
    , Imf_Header_t const * header
    , int numThreads);
#define Imf_DeepTiledOutputFile_ctor Imf_3_0__DeepTiledOutputFile_ctor


unsigned int Imf_3_0__DeepTiledOutputFile_from_stream(
    Imf_DeepTiledOutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * header
    , int numThreads);
#define Imf_DeepTiledOutputFile_from_stream Imf_3_0__DeepTiledOutputFile_from_stream


unsigned int Imf_3_0__DeepTiledOutputFile_dtor(
    Imf_DeepTiledOutputFile_t * this_);
#define Imf_DeepTiledOutputFile_dtor Imf_3_0__DeepTiledOutputFile_dtor


unsigned int Imf_3_0__DeepTiledOutputFile_fileName(
    Imf_DeepTiledOutputFile_t const * this_
    , char const * * return_);
#define Imf_DeepTiledOutputFile_fileName Imf_3_0__DeepTiledOutputFile_fileName


unsigned int Imf_3_0__DeepTiledOutputFile_header(
    Imf_DeepTiledOutputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_DeepTiledOutputFile_header Imf_3_0__DeepTiledOutputFile_header


unsigned int Imf_3_0__DeepTiledOutputFile_setFrameBuffer(
    Imf_DeepTiledOutputFile_t * this_
    , Imf_DeepFrameBuffer_t const * frameBuffer);
#define Imf_DeepTiledOutputFile_setFrameBuffer Imf_3_0__DeepTiledOutputFile_setFrameBuffer


unsigned int Imf_3_0__DeepTiledOutputFile_frameBuffer(
    Imf_DeepTiledOutputFile_t const * this_
    , Imf_DeepFrameBuffer_t const * * return_);
#define Imf_DeepTiledOutputFile_frameBuffer Imf_3_0__DeepTiledOutputFile_frameBuffer


unsigned int Imf_3_0__DeepTiledOutputFile_tileXSize(
    Imf_DeepTiledOutputFile_t const * this_
    , unsigned int * return_);
#define Imf_DeepTiledOutputFile_tileXSize Imf_3_0__DeepTiledOutputFile_tileXSize


unsigned int Imf_3_0__DeepTiledOutputFile_tileYSize(
    Imf_DeepTiledOutputFile_t const * this_
    , unsigned int * return_);
#define Imf_DeepTiledOutputFile_tileYSize Imf_3_0__DeepTiledOutputFile_tileYSize


unsigned int Imf_3_0__DeepTiledOutputFile_levelMode(
    Imf_DeepTiledOutputFile_t const * this_
    , Imf_LevelMode * return_);
#define Imf_DeepTiledOutputFile_levelMode Imf_3_0__DeepTiledOutputFile_levelMode


unsigned int Imf_3_0__DeepTiledOutputFile_levelRoundingMode(
    Imf_DeepTiledOutputFile_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_DeepTiledOutputFile_levelRoundingMode Imf_3_0__DeepTiledOutputFile_levelRoundingMode


unsigned int Imf_3_0__DeepTiledOutputFile_numLevels(
    Imf_DeepTiledOutputFile_t const * this_
    , int * return_);
#define Imf_DeepTiledOutputFile_numLevels Imf_3_0__DeepTiledOutputFile_numLevels


unsigned int Imf_3_0__DeepTiledOutputFile_numXLevels(
    Imf_DeepTiledOutputFile_t const * this_
    , int * return_);
#define Imf_DeepTiledOutputFile_numXLevels Imf_3_0__DeepTiledOutputFile_numXLevels


unsigned int Imf_3_0__DeepTiledOutputFile_numYLevels(
    Imf_DeepTiledOutputFile_t const * this_
    , int * return_);
#define Imf_DeepTiledOutputFile_numYLevels Imf_3_0__DeepTiledOutputFile_numYLevels


unsigned int Imf_3_0__DeepTiledOutputFile_isValidLevel(
    Imf_DeepTiledOutputFile_t const * this_
    , _Bool * return_
    , int lx
    , int ly);
#define Imf_DeepTiledOutputFile_isValidLevel Imf_3_0__DeepTiledOutputFile_isValidLevel


unsigned int Imf_3_0__DeepTiledOutputFile_levelWidth(
    Imf_DeepTiledOutputFile_t const * this_
    , int * return_
    , int lx);
#define Imf_DeepTiledOutputFile_levelWidth Imf_3_0__DeepTiledOutputFile_levelWidth


unsigned int Imf_3_0__DeepTiledOutputFile_levelHeight(
    Imf_DeepTiledOutputFile_t const * this_
    , int * return_
    , int ly);
#define Imf_DeepTiledOutputFile_levelHeight Imf_3_0__DeepTiledOutputFile_levelHeight


unsigned int Imf_3_0__DeepTiledOutputFile_numXTiles(
    Imf_DeepTiledOutputFile_t const * this_
    , int * return_
    , int lx);
#define Imf_DeepTiledOutputFile_numXTiles Imf_3_0__DeepTiledOutputFile_numXTiles


unsigned int Imf_3_0__DeepTiledOutputFile_numYTiles(
    Imf_DeepTiledOutputFile_t const * this_
    , int * return_
    , int ly);
#define Imf_DeepTiledOutputFile_numYTiles Imf_3_0__DeepTiledOutputFile_numYTiles


unsigned int Imf_3_0__DeepTiledOutputFile_dataWindowForLevel(
    Imf_DeepTiledOutputFile_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly);
#define Imf_DeepTiledOutputFile_dataWindowForLevel Imf_3_0__DeepTiledOutputFile_dataWindowForLevel


unsigned int Imf_3_0__DeepTiledOutputFile_dataWindowForTile(
    Imf_DeepTiledOutputFile_t const * this_
    , Imath_Box2i_t * return_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_DeepTiledOutputFile_dataWindowForTile Imf_3_0__DeepTiledOutputFile_dataWindowForTile


unsigned int Imf_3_0__DeepTiledOutputFile_writeTile(
    Imf_DeepTiledOutputFile_t * this_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_DeepTiledOutputFile_writeTile Imf_3_0__DeepTiledOutputFile_writeTile


unsigned int Imf_3_0__DeepTiledOutputFile_writeTiles(
    Imf_DeepTiledOutputFile_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly);
#define Imf_DeepTiledOutputFile_writeTiles Imf_3_0__DeepTiledOutputFile_writeTiles


unsigned int Imf_3_0__DeepTiledOutputFile_copyPixels_from_file(
    Imf_DeepTiledOutputFile_t * this_
    , Imf_DeepTiledInputFile_t * in);
#define Imf_DeepTiledOutputFile_copyPixels_from_file Imf_3_0__DeepTiledOutputFile_copyPixels_from_file


unsigned int Imf_3_0__DeepTiledOutputFile_copyPixels_from_part(
    Imf_DeepTiledOutputFile_t * this_
    , Imf_DeepTiledInputPart_t * in);
#define Imf_DeepTiledOutputFile_copyPixels_from_part Imf_3_0__DeepTiledOutputFile_copyPixels_from_part


unsigned int Imf_3_0__DeepTiledOutputFile_updatePreviewImage(
    Imf_DeepTiledOutputFile_t * this_
    , Imf_PreviewRgba_t const * newPixels);
#define Imf_DeepTiledOutputFile_updatePreviewImage Imf_3_0__DeepTiledOutputFile_updatePreviewImage


unsigned int Imf_3_0__DeepTiledOutputFile_breakTile(
    Imf_DeepTiledOutputFile_t * this_
    , int dx
    , int dy
    , int lx
    , int ly
    , int offset
    , int length
    , char c);
#define Imf_DeepTiledOutputFile_breakTile Imf_3_0__DeepTiledOutputFile_breakTile


#ifdef __cplusplus
}
#endif

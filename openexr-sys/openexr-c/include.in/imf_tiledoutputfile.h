#pragma once
#include "openexr-api-export.h"

#include <imath_box.h>
#include <imf_tiledescription.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__TiledInputFile_t_s Imf_3_0__TiledInputFile_t;
typedef Imf_3_0__TiledInputFile_t Imf_TiledInputFile_t;
typedef struct Imf_3_0__InputFile_t_s Imf_3_0__InputFile_t;
typedef Imf_3_0__InputFile_t Imf_InputFile_t;
typedef struct Imf_3_0__TiledInputPart_t_s Imf_3_0__TiledInputPart_t;
typedef Imf_3_0__TiledInputPart_t Imf_TiledInputPart_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__FrameBuffer_t_s Imf_3_0__FrameBuffer_t;
typedef Imf_3_0__FrameBuffer_t Imf_FrameBuffer_t;
typedef struct Imf_3_0__OStream_t_s Imf_3_0__OStream_t;
typedef Imf_3_0__OStream_t Imf_OStream_t;
typedef struct Imf_3_0__PreviewRgba_t_s Imf_3_0__PreviewRgba_t;
typedef Imf_3_0__PreviewRgba_t Imf_PreviewRgba_t;
typedef struct Imf_3_0__InputPart_t_s Imf_3_0__InputPart_t;
typedef Imf_3_0__InputPart_t Imf_InputPart_t;

typedef struct Imf_3_0__TiledOutputFile_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__TiledOutputFile_t;
typedef Imf_3_0__TiledOutputFile_t Imf_TiledOutputFile_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_ctor(
    Imf_TiledOutputFile_t * * this_
    , char const * fileName
    , Imf_Header_t const * header
    , int numThreads);
#define Imf_TiledOutputFile_ctor Imf_3_0__TiledOutputFile_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_from_stream(
    Imf_TiledOutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * header
    , int numThreads);
#define Imf_TiledOutputFile_from_stream Imf_3_0__TiledOutputFile_from_stream


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_dtor(
    Imf_TiledOutputFile_t * this_);
#define Imf_TiledOutputFile_dtor Imf_3_0__TiledOutputFile_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_fileName(
    Imf_TiledOutputFile_t const * this_
    , char const * * return_);
#define Imf_TiledOutputFile_fileName Imf_3_0__TiledOutputFile_fileName


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_header(
    Imf_TiledOutputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_TiledOutputFile_header Imf_3_0__TiledOutputFile_header


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_setFrameBuffer(
    Imf_TiledOutputFile_t * this_
    , Imf_FrameBuffer_t const * frameBuffer);
#define Imf_TiledOutputFile_setFrameBuffer Imf_3_0__TiledOutputFile_setFrameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_frameBuffer(
    Imf_TiledOutputFile_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_TiledOutputFile_frameBuffer Imf_3_0__TiledOutputFile_frameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_tileXSize(
    Imf_TiledOutputFile_t const * this_
    , unsigned int * return_);
#define Imf_TiledOutputFile_tileXSize Imf_3_0__TiledOutputFile_tileXSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_tileYSize(
    Imf_TiledOutputFile_t const * this_
    , unsigned int * return_);
#define Imf_TiledOutputFile_tileYSize Imf_3_0__TiledOutputFile_tileYSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_levelMode(
    Imf_TiledOutputFile_t const * this_
    , Imf_LevelMode * return_);
#define Imf_TiledOutputFile_levelMode Imf_3_0__TiledOutputFile_levelMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_levelRoundingMode(
    Imf_TiledOutputFile_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_TiledOutputFile_levelRoundingMode Imf_3_0__TiledOutputFile_levelRoundingMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_numLevels(
    Imf_TiledOutputFile_t const * this_
    , int * return_);
#define Imf_TiledOutputFile_numLevels Imf_3_0__TiledOutputFile_numLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_numXLevels(
    Imf_TiledOutputFile_t const * this_
    , int * return_);
#define Imf_TiledOutputFile_numXLevels Imf_3_0__TiledOutputFile_numXLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_numYLevels(
    Imf_TiledOutputFile_t const * this_
    , int * return_);
#define Imf_TiledOutputFile_numYLevels Imf_3_0__TiledOutputFile_numYLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_isValidLevel(
    Imf_TiledOutputFile_t const * this_
    , _Bool * return_
    , int lx
    , int ly);
#define Imf_TiledOutputFile_isValidLevel Imf_3_0__TiledOutputFile_isValidLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_levelWidth(
    Imf_TiledOutputFile_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledOutputFile_levelWidth Imf_3_0__TiledOutputFile_levelWidth


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_levelHeight(
    Imf_TiledOutputFile_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledOutputFile_levelHeight Imf_3_0__TiledOutputFile_levelHeight


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_numXTiles(
    Imf_TiledOutputFile_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledOutputFile_numXTiles Imf_3_0__TiledOutputFile_numXTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_numYTiles(
    Imf_TiledOutputFile_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledOutputFile_numYTiles Imf_3_0__TiledOutputFile_numYTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_dataWindowForLevel(
    Imf_TiledOutputFile_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly);
#define Imf_TiledOutputFile_dataWindowForLevel Imf_3_0__TiledOutputFile_dataWindowForLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_dataWindowForTile(
    Imf_TiledOutputFile_t const * this_
    , Imath_Box2i_t * return_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledOutputFile_dataWindowForTile Imf_3_0__TiledOutputFile_dataWindowForTile


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_writeTile(
    Imf_TiledOutputFile_t * this_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledOutputFile_writeTile Imf_3_0__TiledOutputFile_writeTile


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_writeTiles(
    Imf_TiledOutputFile_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly);
#define Imf_TiledOutputFile_writeTiles Imf_3_0__TiledOutputFile_writeTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_copyPixels_from_tiled_file(
    Imf_TiledOutputFile_t * this_
    , Imf_TiledInputFile_t * in);
#define Imf_TiledOutputFile_copyPixels_from_tiled_file Imf_3_0__TiledOutputFile_copyPixels_from_tiled_file


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_copyPixels_from_tiled_part(
    Imf_TiledOutputFile_t * this_
    , Imf_TiledInputPart_t * in);
#define Imf_TiledOutputFile_copyPixels_from_tiled_part Imf_3_0__TiledOutputFile_copyPixels_from_tiled_part


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_copyPixels_from_file(
    Imf_TiledOutputFile_t * this_
    , Imf_InputFile_t * in);
#define Imf_TiledOutputFile_copyPixels_from_file Imf_3_0__TiledOutputFile_copyPixels_from_file


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_copyPixels_from_part(
    Imf_TiledOutputFile_t * this_
    , Imf_InputPart_t * in);
#define Imf_TiledOutputFile_copyPixels_from_part Imf_3_0__TiledOutputFile_copyPixels_from_part


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_updatePreviewImage(
    Imf_TiledOutputFile_t * this_
    , Imf_PreviewRgba_t const * newPixels);
#define Imf_TiledOutputFile_updatePreviewImage Imf_3_0__TiledOutputFile_updatePreviewImage


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputFile_breakTile(
    Imf_TiledOutputFile_t * this_
    , int dx
    , int dy
    , int lx
    , int ly
    , int offset
    , int length
    , char c);
#define Imf_TiledOutputFile_breakTile Imf_3_0__TiledOutputFile_breakTile


#ifdef __cplusplus
}
#endif

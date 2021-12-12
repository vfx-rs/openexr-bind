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
typedef struct Imf_3_0__PreviewRgba_t_s Imf_3_0__PreviewRgba_t;
typedef Imf_3_0__PreviewRgba_t Imf_PreviewRgba_t;
typedef struct Imf_3_0__MultiPartOutputFile_t_s Imf_3_0__MultiPartOutputFile_t;
typedef Imf_3_0__MultiPartOutputFile_t Imf_MultiPartOutputFile_t;
typedef struct Imf_3_0__InputPart_t_s Imf_3_0__InputPart_t;
typedef Imf_3_0__InputPart_t Imf_InputPart_t;

typedef struct Imf_3_0__TiledOutputPart_t_s {
    char data[%SIZEImf_3_0::TiledOutputPart%];
} OPENEXR_CPPMM_ALIGN(%ALIGNImf_3_0::TiledOutputPart%) Imf_3_0__TiledOutputPart_t;
typedef Imf_3_0__TiledOutputPart_t Imf_TiledOutputPart_t;


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_sizeof();
#define Imf_TiledOutputPart_sizeof Imf_3_0__TiledOutputPart_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_alignof();
#define Imf_TiledOutputPart_alignof Imf_3_0__TiledOutputPart_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_ctor(
    Imf_TiledOutputPart_t * this_
    , Imf_MultiPartOutputFile_t * multiPartFile
    , int partNumber);
#define Imf_TiledOutputPart_ctor Imf_3_0__TiledOutputPart_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_fileName(
    Imf_TiledOutputPart_t const * this_
    , char const * * return_);
#define Imf_TiledOutputPart_fileName Imf_3_0__TiledOutputPart_fileName


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_header(
    Imf_TiledOutputPart_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_TiledOutputPart_header Imf_3_0__TiledOutputPart_header


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_setFrameBuffer(
    Imf_TiledOutputPart_t * this_
    , Imf_FrameBuffer_t const * frameBuffer);
#define Imf_TiledOutputPart_setFrameBuffer Imf_3_0__TiledOutputPart_setFrameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_frameBuffer(
    Imf_TiledOutputPart_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_TiledOutputPart_frameBuffer Imf_3_0__TiledOutputPart_frameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_tileXSize(
    Imf_TiledOutputPart_t const * this_
    , unsigned int * return_);
#define Imf_TiledOutputPart_tileXSize Imf_3_0__TiledOutputPart_tileXSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_tileYSize(
    Imf_TiledOutputPart_t const * this_
    , unsigned int * return_);
#define Imf_TiledOutputPart_tileYSize Imf_3_0__TiledOutputPart_tileYSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_levelMode(
    Imf_TiledOutputPart_t const * this_
    , Imf_LevelMode * return_);
#define Imf_TiledOutputPart_levelMode Imf_3_0__TiledOutputPart_levelMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_levelRoundingMode(
    Imf_TiledOutputPart_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_TiledOutputPart_levelRoundingMode Imf_3_0__TiledOutputPart_levelRoundingMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_numLevels(
    Imf_TiledOutputPart_t const * this_
    , int * return_);
#define Imf_TiledOutputPart_numLevels Imf_3_0__TiledOutputPart_numLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_numXLevels(
    Imf_TiledOutputPart_t const * this_
    , int * return_);
#define Imf_TiledOutputPart_numXLevels Imf_3_0__TiledOutputPart_numXLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_numYLevels(
    Imf_TiledOutputPart_t const * this_
    , int * return_);
#define Imf_TiledOutputPart_numYLevels Imf_3_0__TiledOutputPart_numYLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_isValidLevel(
    Imf_TiledOutputPart_t const * this_
    , _Bool * return_
    , int lx
    , int ly);
#define Imf_TiledOutputPart_isValidLevel Imf_3_0__TiledOutputPart_isValidLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_levelWidth(
    Imf_TiledOutputPart_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledOutputPart_levelWidth Imf_3_0__TiledOutputPart_levelWidth


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_levelHeight(
    Imf_TiledOutputPart_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledOutputPart_levelHeight Imf_3_0__TiledOutputPart_levelHeight


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_numXTiles(
    Imf_TiledOutputPart_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledOutputPart_numXTiles Imf_3_0__TiledOutputPart_numXTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_numYTiles(
    Imf_TiledOutputPart_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledOutputPart_numYTiles Imf_3_0__TiledOutputPart_numYTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_dataWindowForLevel(
    Imf_TiledOutputPart_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly);
#define Imf_TiledOutputPart_dataWindowForLevel Imf_3_0__TiledOutputPart_dataWindowForLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_dataWindowForTile(
    Imf_TiledOutputPart_t const * this_
    , Imath_Box2i_t * return_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledOutputPart_dataWindowForTile Imf_3_0__TiledOutputPart_dataWindowForTile


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_writeTile(
    Imf_TiledOutputPart_t * this_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledOutputPart_writeTile Imf_3_0__TiledOutputPart_writeTile


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_writeTiles(
    Imf_TiledOutputPart_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly);
#define Imf_TiledOutputPart_writeTiles Imf_3_0__TiledOutputPart_writeTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_copyPixels_from_tiled_file(
    Imf_TiledOutputPart_t * this_
    , Imf_TiledInputFile_t * in);
#define Imf_TiledOutputPart_copyPixels_from_tiled_file Imf_3_0__TiledOutputPart_copyPixels_from_tiled_file


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_copyPixels_from_file(
    Imf_TiledOutputPart_t * this_
    , Imf_InputFile_t * in);
#define Imf_TiledOutputPart_copyPixels_from_file Imf_3_0__TiledOutputPart_copyPixels_from_file


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_copyPixels_from_tiled_part(
    Imf_TiledOutputPart_t * this_
    , Imf_TiledInputPart_t * in);
#define Imf_TiledOutputPart_copyPixels_from_tiled_part Imf_3_0__TiledOutputPart_copyPixels_from_tiled_part


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_copyPixels_from_part(
    Imf_TiledOutputPart_t * this_
    , Imf_InputPart_t * in);
#define Imf_TiledOutputPart_copyPixels_from_part Imf_3_0__TiledOutputPart_copyPixels_from_part


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_updatePreviewImage(
    Imf_TiledOutputPart_t * this_
    , Imf_PreviewRgba_t const * newPixels);
#define Imf_TiledOutputPart_updatePreviewImage Imf_3_0__TiledOutputPart_updatePreviewImage


OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledOutputPart_breakTile(
    Imf_TiledOutputPart_t * this_
    , int dx
    , int dy
    , int lx
    , int ly
    , int offset
    , int length
    , char c);
#define Imf_TiledOutputPart_breakTile Imf_3_0__TiledOutputPart_breakTile


#ifdef __cplusplus
}
#endif

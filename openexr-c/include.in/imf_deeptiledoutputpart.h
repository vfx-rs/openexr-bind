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
typedef struct Imf_3_0__DeepTiledInputFile_t_s Imf_3_0__DeepTiledInputFile_t;
typedef Imf_3_0__DeepTiledInputFile_t Imf_DeepTiledInputFile_t;
typedef struct Imf_3_0__DeepFrameBuffer_t_s Imf_3_0__DeepFrameBuffer_t;
typedef Imf_3_0__DeepFrameBuffer_t Imf_DeepFrameBuffer_t;
typedef struct Imf_3_0__PreviewRgba_t_s Imf_3_0__PreviewRgba_t;
typedef Imf_3_0__PreviewRgba_t Imf_PreviewRgba_t;
typedef struct Imf_3_0__MultiPartOutputFile_t_s Imf_3_0__MultiPartOutputFile_t;
typedef Imf_3_0__MultiPartOutputFile_t Imf_MultiPartOutputFile_t;
typedef struct Imf_3_0__DeepTiledInputPart_t_s Imf_3_0__DeepTiledInputPart_t;
typedef Imf_3_0__DeepTiledInputPart_t Imf_DeepTiledInputPart_t;

typedef struct Imf_3_0__DeepTiledOutputPart_t_s {
    char data[%SIZEImf_3_0::DeepTiledOutputPart%];
} OPENEXR_CPPMM_ALIGN(%ALIGNImf_3_0::DeepTiledOutputPart%) Imf_3_0__DeepTiledOutputPart_t;
typedef Imf_3_0__DeepTiledOutputPart_t Imf_DeepTiledOutputPart_t;


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_sizeof();
#define Imf_DeepTiledOutputPart_sizeof Imf_3_0__DeepTiledOutputPart_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_alignof();
#define Imf_DeepTiledOutputPart_alignof Imf_3_0__DeepTiledOutputPart_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_ctor(
    Imf_DeepTiledOutputPart_t * this_
    , Imf_MultiPartOutputFile_t * multiPartFile
    , int partNumber);
#define Imf_DeepTiledOutputPart_ctor Imf_3_0__DeepTiledOutputPart_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_fileName(
    Imf_DeepTiledOutputPart_t const * this_
    , char const * * return_);
#define Imf_DeepTiledOutputPart_fileName Imf_3_0__DeepTiledOutputPart_fileName


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_header(
    Imf_DeepTiledOutputPart_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_DeepTiledOutputPart_header Imf_3_0__DeepTiledOutputPart_header


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_setFrameBuffer(
    Imf_DeepTiledOutputPart_t * this_
    , Imf_DeepFrameBuffer_t const * frameBuffer);
#define Imf_DeepTiledOutputPart_setFrameBuffer Imf_3_0__DeepTiledOutputPart_setFrameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_frameBuffer(
    Imf_DeepTiledOutputPart_t const * this_
    , Imf_DeepFrameBuffer_t const * * return_);
#define Imf_DeepTiledOutputPart_frameBuffer Imf_3_0__DeepTiledOutputPart_frameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_tileXSize(
    Imf_DeepTiledOutputPart_t const * this_
    , unsigned int * return_);
#define Imf_DeepTiledOutputPart_tileXSize Imf_3_0__DeepTiledOutputPart_tileXSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_tileYSize(
    Imf_DeepTiledOutputPart_t const * this_
    , unsigned int * return_);
#define Imf_DeepTiledOutputPart_tileYSize Imf_3_0__DeepTiledOutputPart_tileYSize


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_levelMode(
    Imf_DeepTiledOutputPart_t const * this_
    , Imf_LevelMode * return_);
#define Imf_DeepTiledOutputPart_levelMode Imf_3_0__DeepTiledOutputPart_levelMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_levelRoundingMode(
    Imf_DeepTiledOutputPart_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_DeepTiledOutputPart_levelRoundingMode Imf_3_0__DeepTiledOutputPart_levelRoundingMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_numLevels(
    Imf_DeepTiledOutputPart_t const * this_
    , int * return_);
#define Imf_DeepTiledOutputPart_numLevels Imf_3_0__DeepTiledOutputPart_numLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_numXLevels(
    Imf_DeepTiledOutputPart_t const * this_
    , int * return_);
#define Imf_DeepTiledOutputPart_numXLevels Imf_3_0__DeepTiledOutputPart_numXLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_numYLevels(
    Imf_DeepTiledOutputPart_t const * this_
    , int * return_);
#define Imf_DeepTiledOutputPart_numYLevels Imf_3_0__DeepTiledOutputPart_numYLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_isValidLevel(
    Imf_DeepTiledOutputPart_t const * this_
    , _Bool * return_
    , int lx
    , int ly);
#define Imf_DeepTiledOutputPart_isValidLevel Imf_3_0__DeepTiledOutputPart_isValidLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_levelWidth(
    Imf_DeepTiledOutputPart_t const * this_
    , int * return_
    , int lx);
#define Imf_DeepTiledOutputPart_levelWidth Imf_3_0__DeepTiledOutputPart_levelWidth


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_levelHeight(
    Imf_DeepTiledOutputPart_t const * this_
    , int * return_
    , int ly);
#define Imf_DeepTiledOutputPart_levelHeight Imf_3_0__DeepTiledOutputPart_levelHeight


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_numXTiles(
    Imf_DeepTiledOutputPart_t const * this_
    , int * return_
    , int lx);
#define Imf_DeepTiledOutputPart_numXTiles Imf_3_0__DeepTiledOutputPart_numXTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_numYTiles(
    Imf_DeepTiledOutputPart_t const * this_
    , int * return_
    , int ly);
#define Imf_DeepTiledOutputPart_numYTiles Imf_3_0__DeepTiledOutputPart_numYTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_dataWindowForLevel(
    Imf_DeepTiledOutputPart_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly);
#define Imf_DeepTiledOutputPart_dataWindowForLevel Imf_3_0__DeepTiledOutputPart_dataWindowForLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_dataWindowForTile(
    Imf_DeepTiledOutputPart_t const * this_
    , Imath_Box2i_t * return_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_DeepTiledOutputPart_dataWindowForTile Imf_3_0__DeepTiledOutputPart_dataWindowForTile


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_writeTile(
    Imf_DeepTiledOutputPart_t * this_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_DeepTiledOutputPart_writeTile Imf_3_0__DeepTiledOutputPart_writeTile


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_writeTiles(
    Imf_DeepTiledOutputPart_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly);
#define Imf_DeepTiledOutputPart_writeTiles Imf_3_0__DeepTiledOutputPart_writeTiles


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_copyPixels_from_file(
    Imf_DeepTiledOutputPart_t * this_
    , Imf_DeepTiledInputFile_t * in);
#define Imf_DeepTiledOutputPart_copyPixels_from_file Imf_3_0__DeepTiledOutputPart_copyPixels_from_file


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_copyPixels_from_part(
    Imf_DeepTiledOutputPart_t * this_
    , Imf_DeepTiledInputPart_t * in);
#define Imf_DeepTiledOutputPart_copyPixels_from_part Imf_3_0__DeepTiledOutputPart_copyPixels_from_part


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_updatePreviewImage(
    Imf_DeepTiledOutputPart_t * this_
    , Imf_PreviewRgba_t const * newPixels);
#define Imf_DeepTiledOutputPart_updatePreviewImage Imf_3_0__DeepTiledOutputPart_updatePreviewImage


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledOutputPart_breakTile(
    Imf_DeepTiledOutputPart_t * this_
    , int dx
    , int dy
    , int lx
    , int ly
    , int offset
    , int length
    , char c);
#define Imf_DeepTiledOutputPart_breakTile Imf_3_0__DeepTiledOutputPart_breakTile


#ifdef __cplusplus
}
#endif

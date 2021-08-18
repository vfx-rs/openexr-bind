#pragma once
#include "openexr-api-export.h"

#include <imath_box.h>
#include <imath_vec.h>
#include <imf_compression.h>
#include <imf_lineorder.h>
#include <imf_rgba.h>
#include <imf_tiledescription.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imath_3_0__Box_Imath_3_0__Vec2_int___t_s Imath_3_0__Box_Imath_3_0__Vec2_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_int___t Imath_Box2i_t;
typedef struct Imf_3_0__PreviewRgba_t_s Imf_3_0__PreviewRgba_t;
typedef Imf_3_0__PreviewRgba_t Imf_PreviewRgba_t;
typedef struct Imf_3_0__Rgba_t_s Imf_3_0__Rgba_t;
typedef Imf_3_0__Rgba_t Imf_Rgba_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__FrameBuffer_t_s Imf_3_0__FrameBuffer_t;
typedef Imf_3_0__FrameBuffer_t Imf_FrameBuffer_t;
typedef struct Imf_3_0__OStream_t_s Imf_3_0__OStream_t;
typedef Imf_3_0__OStream_t Imf_OStream_t;
typedef struct Imf_3_0__IStream_t_s Imf_3_0__IStream_t;
typedef Imf_3_0__IStream_t Imf_IStream_t;

typedef struct Imf_3_0__TiledRgbaOutputFile_t_s {
    char _unused;
} OPENEXR_ALIGN(8) Imf_3_0__TiledRgbaOutputFile_t;
typedef Imf_3_0__TiledRgbaOutputFile_t Imf_TiledRgbaOutputFile_t;

typedef struct Imf_3_0__TiledRgbaInputFile_t_s {
    char _unused;
} OPENEXR_ALIGN(8) Imf_3_0__TiledRgbaInputFile_t;
typedef Imf_3_0__TiledRgbaInputFile_t Imf_TiledRgbaInputFile_t;


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_ctor(
    Imf_TiledRgbaOutputFile_t * * this_
    , char const * name
    , Imf_Header_t const * header
    , Imf_RgbaChannels rgbaChannels
    , int tileXSize
    , int tileYSize
    , Imf_LevelMode mode
    , Imf_LevelRoundingMode rmode
    , int numThreads);
#define Imf_TiledRgbaOutputFile_ctor Imf_3_0__TiledRgbaOutputFile_ctor


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_from_stream(
    Imf_TiledRgbaOutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * header
    , Imf_RgbaChannels rgbaChannels
    , int tileXSize
    , int tileYSize
    , Imf_LevelMode mode
    , Imf_LevelRoundingMode rmode
    , int numThreads);
#define Imf_TiledRgbaOutputFile_from_stream Imf_3_0__TiledRgbaOutputFile_from_stream


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_with_windows(
    Imf_TiledRgbaOutputFile_t * * this_
    , char const * name
    , int tileXSize
    , int tileYSize
    , Imf_LevelMode mode
    , Imf_LevelRoundingMode rmode
    , Imath_Box2i_t const * displayWindow
    , Imath_Box2i_t const * dataWindow
    , Imf_RgbaChannels rgbaChannels
    , float pixelAspectRatio
    , Imath_V2f_t const screenWindowCenter
    , float screenWindowWidth
    , Imf_LineOrder lineOrder
    , Imf_Compression compression
    , int numThreads);
#define Imf_TiledRgbaOutputFile_with_windows Imf_3_0__TiledRgbaOutputFile_with_windows


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_with_dimensions(
    Imf_TiledRgbaOutputFile_t * * this_
    , char const * name
    , int width
    , int height
    , int tileXSize
    , int tileYSize
    , Imf_LevelMode mode
    , Imf_LevelRoundingMode rmode
    , Imf_RgbaChannels rgbaChannel
    , float pixelAspectRatio
    , Imath_V2f_t const screenWindowCenter
    , float screenWindowWidth
    , Imf_LineOrder lineOrder
    , Imf_Compression compression
    , int numThreads);
#define Imf_TiledRgbaOutputFile_with_dimensions Imf_3_0__TiledRgbaOutputFile_with_dimensions


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_dtor(
    Imf_TiledRgbaOutputFile_t * this_);
#define Imf_TiledRgbaOutputFile_dtor Imf_3_0__TiledRgbaOutputFile_dtor


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_setFrameBuffer(
    Imf_TiledRgbaOutputFile_t * this_
    , Imf_Rgba_t const * base
    , unsigned long xStride
    , unsigned long yStride);
#define Imf_TiledRgbaOutputFile_setFrameBuffer Imf_3_0__TiledRgbaOutputFile_setFrameBuffer


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_header(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_TiledRgbaOutputFile_header Imf_3_0__TiledRgbaOutputFile_header


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_frameBuffer(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_TiledRgbaOutputFile_frameBuffer Imf_3_0__TiledRgbaOutputFile_frameBuffer


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_displayWindow(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_TiledRgbaOutputFile_displayWindow Imf_3_0__TiledRgbaOutputFile_displayWindow


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_dataWindow(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_TiledRgbaOutputFile_dataWindow Imf_3_0__TiledRgbaOutputFile_dataWindow


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_pixelAspectRatio(
    Imf_TiledRgbaOutputFile_t const * this_
    , float * return_);
#define Imf_TiledRgbaOutputFile_pixelAspectRatio Imf_3_0__TiledRgbaOutputFile_pixelAspectRatio


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_screenWindowCenter(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imath_V2f_t * return_);
#define Imf_TiledRgbaOutputFile_screenWindowCenter Imf_3_0__TiledRgbaOutputFile_screenWindowCenter


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_screenWindowWidth(
    Imf_TiledRgbaOutputFile_t const * this_
    , float * return_);
#define Imf_TiledRgbaOutputFile_screenWindowWidth Imf_3_0__TiledRgbaOutputFile_screenWindowWidth


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_lineOrder(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imf_LineOrder * return_);
#define Imf_TiledRgbaOutputFile_lineOrder Imf_3_0__TiledRgbaOutputFile_lineOrder


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_compression(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imf_Compression * return_);
#define Imf_TiledRgbaOutputFile_compression Imf_3_0__TiledRgbaOutputFile_compression


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_channels(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imf_RgbaChannels * return_);
#define Imf_TiledRgbaOutputFile_channels Imf_3_0__TiledRgbaOutputFile_channels


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_tileXSize(
    Imf_TiledRgbaOutputFile_t const * this_
    , unsigned int * return_);
#define Imf_TiledRgbaOutputFile_tileXSize Imf_3_0__TiledRgbaOutputFile_tileXSize


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_tileYSize(
    Imf_TiledRgbaOutputFile_t const * this_
    , unsigned int * return_);
#define Imf_TiledRgbaOutputFile_tileYSize Imf_3_0__TiledRgbaOutputFile_tileYSize


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_levelMode(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imf_LevelMode * return_);
#define Imf_TiledRgbaOutputFile_levelMode Imf_3_0__TiledRgbaOutputFile_levelMode


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_levelRoundingMode(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_TiledRgbaOutputFile_levelRoundingMode Imf_3_0__TiledRgbaOutputFile_levelRoundingMode


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_numLevels(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_);
#define Imf_TiledRgbaOutputFile_numLevels Imf_3_0__TiledRgbaOutputFile_numLevels


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_numXLevels(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_);
#define Imf_TiledRgbaOutputFile_numXLevels Imf_3_0__TiledRgbaOutputFile_numXLevels


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_numYLevels(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_);
#define Imf_TiledRgbaOutputFile_numYLevels Imf_3_0__TiledRgbaOutputFile_numYLevels


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_isValidLevel(
    Imf_TiledRgbaOutputFile_t const * this_
    , _Bool * return_
    , int lx
    , int ly);
#define Imf_TiledRgbaOutputFile_isValidLevel Imf_3_0__TiledRgbaOutputFile_isValidLevel


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_levelWidth(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledRgbaOutputFile_levelWidth Imf_3_0__TiledRgbaOutputFile_levelWidth


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_levelHeight(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledRgbaOutputFile_levelHeight Imf_3_0__TiledRgbaOutputFile_levelHeight


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_numXTiles(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledRgbaOutputFile_numXTiles Imf_3_0__TiledRgbaOutputFile_numXTiles


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_numYTiles(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledRgbaOutputFile_numYTiles Imf_3_0__TiledRgbaOutputFile_numYTiles


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_dataWindowForLevel(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly);
#define Imf_TiledRgbaOutputFile_dataWindowForLevel Imf_3_0__TiledRgbaOutputFile_dataWindowForLevel


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_dataWindowForTile(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imath_Box2i_t * return_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledRgbaOutputFile_dataWindowForTile Imf_3_0__TiledRgbaOutputFile_dataWindowForTile


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_writeTile(
    Imf_TiledRgbaOutputFile_t * this_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledRgbaOutputFile_writeTile Imf_3_0__TiledRgbaOutputFile_writeTile


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_writeTiles(
    Imf_TiledRgbaOutputFile_t * this_
    , int dxMin
    , int dxMax
    , int dyMin
    , int dyMax
    , int lx
    , int ly);
#define Imf_TiledRgbaOutputFile_writeTiles Imf_3_0__TiledRgbaOutputFile_writeTiles


OPENEXR_API unsigned int Imf_3_0__TiledRgbaOutputFile_updatePreviewImage(
    Imf_TiledRgbaOutputFile_t * this_
    , Imf_PreviewRgba_t const * newPixels);
#define Imf_TiledRgbaOutputFile_updatePreviewImage Imf_3_0__TiledRgbaOutputFile_updatePreviewImage


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_ctor(
    Imf_TiledRgbaInputFile_t * * this_
    , char const * name
    , int numThreads);
#define Imf_TiledRgbaInputFile_ctor Imf_3_0__TiledRgbaInputFile_ctor


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_from_stream(
    Imf_TiledRgbaInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads);
#define Imf_TiledRgbaInputFile_from_stream Imf_3_0__TiledRgbaInputFile_from_stream


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_with_layer(
    Imf_TiledRgbaInputFile_t * * this_
    , char const * name
    , std_string_t const * layerName
    , int numThreads);
#define Imf_TiledRgbaInputFile_with_layer Imf_3_0__TiledRgbaInputFile_with_layer


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_from_stream_with_layer(
    Imf_TiledRgbaInputFile_t * * this_
    , Imf_IStream_t * is
    , std_string_t const * layerName
    , int numThreads);
#define Imf_TiledRgbaInputFile_from_stream_with_layer Imf_3_0__TiledRgbaInputFile_from_stream_with_layer


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_dtor(
    Imf_TiledRgbaInputFile_t * this_);
#define Imf_TiledRgbaInputFile_dtor Imf_3_0__TiledRgbaInputFile_dtor


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_setFrameBuffer(
    Imf_TiledRgbaInputFile_t * this_
    , Imf_Rgba_t * base
    , unsigned long xStride
    , unsigned long yStride);
#define Imf_TiledRgbaInputFile_setFrameBuffer Imf_3_0__TiledRgbaInputFile_setFrameBuffer


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_setLayerName(
    Imf_TiledRgbaInputFile_t * this_
    , std_string_t const * layerName);
#define Imf_TiledRgbaInputFile_setLayerName Imf_3_0__TiledRgbaInputFile_setLayerName


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_header(
    Imf_TiledRgbaInputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_TiledRgbaInputFile_header Imf_3_0__TiledRgbaInputFile_header


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_frameBuffer(
    Imf_TiledRgbaInputFile_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_TiledRgbaInputFile_frameBuffer Imf_3_0__TiledRgbaInputFile_frameBuffer


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_displayWindow(
    Imf_TiledRgbaInputFile_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_TiledRgbaInputFile_displayWindow Imf_3_0__TiledRgbaInputFile_displayWindow


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_dataWindow(
    Imf_TiledRgbaInputFile_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_TiledRgbaInputFile_dataWindow Imf_3_0__TiledRgbaInputFile_dataWindow


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_pixelAspectRatio(
    Imf_TiledRgbaInputFile_t const * this_
    , float * return_);
#define Imf_TiledRgbaInputFile_pixelAspectRatio Imf_3_0__TiledRgbaInputFile_pixelAspectRatio


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_screenWindowCenter(
    Imf_TiledRgbaInputFile_t const * this_
    , Imath_V2f_t * return_);
#define Imf_TiledRgbaInputFile_screenWindowCenter Imf_3_0__TiledRgbaInputFile_screenWindowCenter


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_screenWindowWidth(
    Imf_TiledRgbaInputFile_t const * this_
    , float * return_);
#define Imf_TiledRgbaInputFile_screenWindowWidth Imf_3_0__TiledRgbaInputFile_screenWindowWidth


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_lineOrder(
    Imf_TiledRgbaInputFile_t const * this_
    , Imf_LineOrder * return_);
#define Imf_TiledRgbaInputFile_lineOrder Imf_3_0__TiledRgbaInputFile_lineOrder


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_compression(
    Imf_TiledRgbaInputFile_t const * this_
    , Imf_Compression * return_);
#define Imf_TiledRgbaInputFile_compression Imf_3_0__TiledRgbaInputFile_compression


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_channels(
    Imf_TiledRgbaInputFile_t const * this_
    , Imf_RgbaChannels * return_);
#define Imf_TiledRgbaInputFile_channels Imf_3_0__TiledRgbaInputFile_channels


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_fileName(
    Imf_TiledRgbaInputFile_t const * this_
    , char const * * return_);
#define Imf_TiledRgbaInputFile_fileName Imf_3_0__TiledRgbaInputFile_fileName


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_isComplete(
    Imf_TiledRgbaInputFile_t const * this_
    , _Bool * return_);
#define Imf_TiledRgbaInputFile_isComplete Imf_3_0__TiledRgbaInputFile_isComplete


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_version(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_);
#define Imf_TiledRgbaInputFile_version Imf_3_0__TiledRgbaInputFile_version


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_tileXSize(
    Imf_TiledRgbaInputFile_t const * this_
    , unsigned int * return_);
#define Imf_TiledRgbaInputFile_tileXSize Imf_3_0__TiledRgbaInputFile_tileXSize


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_tileYSize(
    Imf_TiledRgbaInputFile_t const * this_
    , unsigned int * return_);
#define Imf_TiledRgbaInputFile_tileYSize Imf_3_0__TiledRgbaInputFile_tileYSize


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_levelMode(
    Imf_TiledRgbaInputFile_t const * this_
    , Imf_LevelMode * return_);
#define Imf_TiledRgbaInputFile_levelMode Imf_3_0__TiledRgbaInputFile_levelMode


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_levelRoundingMode(
    Imf_TiledRgbaInputFile_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_TiledRgbaInputFile_levelRoundingMode Imf_3_0__TiledRgbaInputFile_levelRoundingMode


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_numLevels(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_);
#define Imf_TiledRgbaInputFile_numLevels Imf_3_0__TiledRgbaInputFile_numLevels


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_numXLevels(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_);
#define Imf_TiledRgbaInputFile_numXLevels Imf_3_0__TiledRgbaInputFile_numXLevels


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_numYLevels(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_);
#define Imf_TiledRgbaInputFile_numYLevels Imf_3_0__TiledRgbaInputFile_numYLevels


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_isValidLevel(
    Imf_TiledRgbaInputFile_t const * this_
    , _Bool * return_
    , int lx
    , int ly);
#define Imf_TiledRgbaInputFile_isValidLevel Imf_3_0__TiledRgbaInputFile_isValidLevel


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_levelWidth(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledRgbaInputFile_levelWidth Imf_3_0__TiledRgbaInputFile_levelWidth


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_levelHeight(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledRgbaInputFile_levelHeight Imf_3_0__TiledRgbaInputFile_levelHeight


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_numXTiles(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_
    , int lx);
#define Imf_TiledRgbaInputFile_numXTiles Imf_3_0__TiledRgbaInputFile_numXTiles


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_numYTiles(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_
    , int ly);
#define Imf_TiledRgbaInputFile_numYTiles Imf_3_0__TiledRgbaInputFile_numYTiles


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_dataWindowForLevel(
    Imf_TiledRgbaInputFile_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly);
#define Imf_TiledRgbaInputFile_dataWindowForLevel Imf_3_0__TiledRgbaInputFile_dataWindowForLevel


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_dataWindowForTile(
    Imf_TiledRgbaInputFile_t const * this_
    , Imath_Box2i_t * return_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledRgbaInputFile_dataWindowForTile Imf_3_0__TiledRgbaInputFile_dataWindowForTile


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_readTile(
    Imf_TiledRgbaInputFile_t * this_
    , int dx
    , int dy
    , int lx
    , int ly);
#define Imf_TiledRgbaInputFile_readTile Imf_3_0__TiledRgbaInputFile_readTile


OPENEXR_API unsigned int Imf_3_0__TiledRgbaInputFile_readTiles(
    Imf_TiledRgbaInputFile_t * this_
    , int dxMin
    , int dxMax
    , int dyMin
    , int dyMax
    , int lx
    , int ly);
#define Imf_TiledRgbaInputFile_readTiles Imf_3_0__TiledRgbaInputFile_readTiles


#ifdef __cplusplus
}
#endif

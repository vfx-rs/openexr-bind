#pragma once
#include <imath_vec.h>
#include <imf_compression.h>
#include <imf_lineorder.h>
#include <imf_rgba.h>
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

typedef struct Imf_3_0__RgbaOutputFile_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__RgbaOutputFile_t;
typedef Imf_3_0__RgbaOutputFile_t Imf_RgbaOutputFile_t;

typedef struct Imf_3_0__RgbaInputFile_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__RgbaInputFile_t;
typedef Imf_3_0__RgbaInputFile_t Imf_RgbaInputFile_t;


unsigned int Imf_3_0__RgbaOutputFile_ctor(
    Imf_RgbaOutputFile_t * * this_
    , char const * name
    , Imf_Header_t const * header
    , Imf_RgbaChannels rgbaChannels
    , int numThreads);
#define Imf_RgbaOutputFile_ctor Imf_3_0__RgbaOutputFile_ctor


unsigned int Imf_3_0__RgbaOutputFile_from_stream(
    Imf_RgbaOutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * header
    , Imf_RgbaChannels rgbaChannels
    , int numThreads);
#define Imf_RgbaOutputFile_from_stream Imf_3_0__RgbaOutputFile_from_stream


unsigned int Imf_3_0__RgbaOutputFile_with_windows(
    Imf_RgbaOutputFile_t * * this_
    , char const * name
    , Imath_Box2i_t const * displayWindow
    , Imath_Box2i_t const * dataWindow
    , Imf_RgbaChannels rgbaChannels
    , float pixelAspectRatio
    , Imath_V2f_t const screenWindowCenter
    , float screenWindowWidth
    , Imf_LineOrder lineOrder
    , Imf_Compression compression
    , int numThreads);
#define Imf_RgbaOutputFile_with_windows Imf_3_0__RgbaOutputFile_with_windows


unsigned int Imf_3_0__RgbaOutputFile_with_dimensions(
    Imf_RgbaOutputFile_t * * this_
    , char const * name
    , int width
    , int height
    , Imf_RgbaChannels rgbaChannels
    , float pixelAspectRatio
    , Imath_V2f_t const screenWindowCenter
    , float screenWindowWidth
    , Imf_LineOrder lineOrder
    , Imf_Compression compression
    , int numThreads);
#define Imf_RgbaOutputFile_with_dimensions Imf_3_0__RgbaOutputFile_with_dimensions


unsigned int Imf_3_0__RgbaOutputFile_dtor(
    Imf_RgbaOutputFile_t * this_);
#define Imf_RgbaOutputFile_dtor Imf_3_0__RgbaOutputFile_dtor


unsigned int Imf_3_0__RgbaOutputFile_setFrameBuffer(
    Imf_RgbaOutputFile_t * this_
    , Imf_Rgba_t const * base
    , unsigned long xStride
    , unsigned long yStride);
#define Imf_RgbaOutputFile_setFrameBuffer Imf_3_0__RgbaOutputFile_setFrameBuffer


unsigned int Imf_3_0__RgbaOutputFile_writePixels(
    Imf_RgbaOutputFile_t * this_
    , int numScanLines);
#define Imf_RgbaOutputFile_writePixels Imf_3_0__RgbaOutputFile_writePixels


unsigned int Imf_3_0__RgbaOutputFile_currentScanLine(
    Imf_RgbaOutputFile_t const * this_
    , int * return_);
#define Imf_RgbaOutputFile_currentScanLine Imf_3_0__RgbaOutputFile_currentScanLine


unsigned int Imf_3_0__RgbaOutputFile_header(
    Imf_RgbaOutputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_RgbaOutputFile_header Imf_3_0__RgbaOutputFile_header


unsigned int Imf_3_0__RgbaOutputFile_frameBuffer(
    Imf_RgbaOutputFile_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_RgbaOutputFile_frameBuffer Imf_3_0__RgbaOutputFile_frameBuffer


unsigned int Imf_3_0__RgbaOutputFile_displayWindow(
    Imf_RgbaOutputFile_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_RgbaOutputFile_displayWindow Imf_3_0__RgbaOutputFile_displayWindow


unsigned int Imf_3_0__RgbaOutputFile_dataWindow(
    Imf_RgbaOutputFile_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_RgbaOutputFile_dataWindow Imf_3_0__RgbaOutputFile_dataWindow


unsigned int Imf_3_0__RgbaOutputFile_pixelAspectRatio(
    Imf_RgbaOutputFile_t const * this_
    , float * return_);
#define Imf_RgbaOutputFile_pixelAspectRatio Imf_3_0__RgbaOutputFile_pixelAspectRatio


unsigned int Imf_3_0__RgbaOutputFile_screenWindowCenter(
    Imf_RgbaOutputFile_t const * this_
    , Imath_V2f_t * return_);
#define Imf_RgbaOutputFile_screenWindowCenter Imf_3_0__RgbaOutputFile_screenWindowCenter


unsigned int Imf_3_0__RgbaOutputFile_screenWindowWidth(
    Imf_RgbaOutputFile_t const * this_
    , float * return_);
#define Imf_RgbaOutputFile_screenWindowWidth Imf_3_0__RgbaOutputFile_screenWindowWidth


unsigned int Imf_3_0__RgbaOutputFile_lineOrder(
    Imf_RgbaOutputFile_t const * this_
    , Imf_LineOrder * return_);
#define Imf_RgbaOutputFile_lineOrder Imf_3_0__RgbaOutputFile_lineOrder


unsigned int Imf_3_0__RgbaOutputFile_compression(
    Imf_RgbaOutputFile_t const * this_
    , Imf_Compression * return_);
#define Imf_RgbaOutputFile_compression Imf_3_0__RgbaOutputFile_compression


unsigned int Imf_3_0__RgbaOutputFile_channels(
    Imf_RgbaOutputFile_t const * this_
    , Imf_RgbaChannels * return_);
#define Imf_RgbaOutputFile_channels Imf_3_0__RgbaOutputFile_channels


unsigned int Imf_3_0__RgbaOutputFile_updatePreviewImage(
    Imf_RgbaOutputFile_t * this_
    , Imf_PreviewRgba_t const * preview);
#define Imf_RgbaOutputFile_updatePreviewImage Imf_3_0__RgbaOutputFile_updatePreviewImage


unsigned int Imf_3_0__RgbaOutputFile_setYCRounding(
    Imf_RgbaOutputFile_t * this_
    , unsigned int roundY
    , unsigned int roundC);
#define Imf_RgbaOutputFile_setYCRounding Imf_3_0__RgbaOutputFile_setYCRounding


unsigned int Imf_3_0__RgbaInputFile_ctor(
    Imf_RgbaInputFile_t * * this_
    , char const * name
    , int numThreads);
#define Imf_RgbaInputFile_ctor Imf_3_0__RgbaInputFile_ctor


unsigned int Imf_3_0__RgbaInputFile_from_stream(
    Imf_RgbaInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads);
#define Imf_RgbaInputFile_from_stream Imf_3_0__RgbaInputFile_from_stream


unsigned int Imf_3_0__RgbaInputFile_with_layer(
    Imf_RgbaInputFile_t * * this_
    , char const * name
    , std_string_t const * layerName
    , int numThreads);
#define Imf_RgbaInputFile_with_layer Imf_3_0__RgbaInputFile_with_layer


unsigned int Imf_3_0__RgbaInputFile_from_stream_with_layer(
    Imf_RgbaInputFile_t * * this_
    , Imf_IStream_t * is
    , std_string_t const * layerName
    , int numThreads);
#define Imf_RgbaInputFile_from_stream_with_layer Imf_3_0__RgbaInputFile_from_stream_with_layer


unsigned int Imf_3_0__RgbaInputFile_dtor(
    Imf_RgbaInputFile_t * this_);
#define Imf_RgbaInputFile_dtor Imf_3_0__RgbaInputFile_dtor


unsigned int Imf_3_0__RgbaInputFile_setFrameBuffer(
    Imf_RgbaInputFile_t * this_
    , Imf_Rgba_t * base
    , unsigned long xStride
    , unsigned long yStride);
#define Imf_RgbaInputFile_setFrameBuffer Imf_3_0__RgbaInputFile_setFrameBuffer


unsigned int Imf_3_0__RgbaInputFile_setLayerName(
    Imf_RgbaInputFile_t * this_
    , std_string_t const * layerName);
#define Imf_RgbaInputFile_setLayerName Imf_3_0__RgbaInputFile_setLayerName


unsigned int Imf_3_0__RgbaInputFile_readPixels(
    Imf_RgbaInputFile_t * this_
    , int scanLine1
    , int scanLine2);
#define Imf_RgbaInputFile_readPixels Imf_3_0__RgbaInputFile_readPixels


unsigned int Imf_3_0__RgbaInputFile_header(
    Imf_RgbaInputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_RgbaInputFile_header Imf_3_0__RgbaInputFile_header


unsigned int Imf_3_0__RgbaInputFile_frameBuffer(
    Imf_RgbaInputFile_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_RgbaInputFile_frameBuffer Imf_3_0__RgbaInputFile_frameBuffer


unsigned int Imf_3_0__RgbaInputFile_displayWindow(
    Imf_RgbaInputFile_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_RgbaInputFile_displayWindow Imf_3_0__RgbaInputFile_displayWindow


unsigned int Imf_3_0__RgbaInputFile_dataWindow(
    Imf_RgbaInputFile_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_RgbaInputFile_dataWindow Imf_3_0__RgbaInputFile_dataWindow


unsigned int Imf_3_0__RgbaInputFile_pixelAspectRatio(
    Imf_RgbaInputFile_t const * this_
    , float * return_);
#define Imf_RgbaInputFile_pixelAspectRatio Imf_3_0__RgbaInputFile_pixelAspectRatio


unsigned int Imf_3_0__RgbaInputFile_screenWindowCenter(
    Imf_RgbaInputFile_t const * this_
    , Imath_V2f_t * return_);
#define Imf_RgbaInputFile_screenWindowCenter Imf_3_0__RgbaInputFile_screenWindowCenter


unsigned int Imf_3_0__RgbaInputFile_screenWindowWidth(
    Imf_RgbaInputFile_t const * this_
    , float * return_);
#define Imf_RgbaInputFile_screenWindowWidth Imf_3_0__RgbaInputFile_screenWindowWidth


unsigned int Imf_3_0__RgbaInputFile_lineOrder(
    Imf_RgbaInputFile_t const * this_
    , Imf_LineOrder * return_);
#define Imf_RgbaInputFile_lineOrder Imf_3_0__RgbaInputFile_lineOrder


unsigned int Imf_3_0__RgbaInputFile_compression(
    Imf_RgbaInputFile_t const * this_
    , Imf_Compression * return_);
#define Imf_RgbaInputFile_compression Imf_3_0__RgbaInputFile_compression


unsigned int Imf_3_0__RgbaInputFile_channels(
    Imf_RgbaInputFile_t const * this_
    , Imf_RgbaChannels * return_);
#define Imf_RgbaInputFile_channels Imf_3_0__RgbaInputFile_channels


unsigned int Imf_3_0__RgbaInputFile_fileName(
    Imf_RgbaInputFile_t const * this_
    , char const * * return_);
#define Imf_RgbaInputFile_fileName Imf_3_0__RgbaInputFile_fileName


unsigned int Imf_3_0__RgbaInputFile_isComplete(
    Imf_RgbaInputFile_t const * this_
    , _Bool * return_);
#define Imf_RgbaInputFile_isComplete Imf_3_0__RgbaInputFile_isComplete


unsigned int Imf_3_0__RgbaInputFile_version(
    Imf_RgbaInputFile_t const * this_
    , int * return_);
#define Imf_RgbaInputFile_version Imf_3_0__RgbaInputFile_version


unsigned int Imf_3_0_ComputeBasePointer(
    Imf_Rgba_t * * return_
    , Imf_Rgba_t * ptr
    , Imath_Box2i_t const * dataWindow);
#define Imf_ComputeBasePointer Imf_3_0_ComputeBasePointer


#ifdef __cplusplus
}
#endif

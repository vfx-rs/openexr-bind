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
typedef struct Imf_3_0__OStream_t_s Imf_3_0__OStream_t;
typedef Imf_3_0__OStream_t Imf_OStream_t;
typedef struct Imf_3_0__IStream_t_s Imf_3_0__IStream_t;
typedef Imf_3_0__IStream_t Imf_IStream_t;

typedef struct Imf_3_0__AcesOutputFile_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__AcesOutputFile_t;
typedef Imf_3_0__AcesOutputFile_t Imf_AcesOutputFile_t;

typedef struct Imf_3_0__AcesInputFile_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__AcesInputFile_t;
typedef Imf_3_0__AcesInputFile_t Imf_AcesInputFile_t;


unsigned int Imf_3_0__AcesOutputFile_new(
    Imf_AcesOutputFile_t * * this_
    , std_string_t const * name
    , Imf_Header_t const * header
    , Imf_RgbaChannels rgbaChannels
    , int numThreads);
#define Imf_AcesOutputFile_new Imf_3_0__AcesOutputFile_new


unsigned int Imf_3_0__AcesOutputFile_new_with_stream(
    Imf_AcesOutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * header
    , Imf_RgbaChannels rgbaChannels
    , int numThreads);
#define Imf_AcesOutputFile_new_with_stream Imf_3_0__AcesOutputFile_new_with_stream


unsigned int Imf_3_0__AcesOutputFile_new_with_header(
    Imf_AcesOutputFile_t * * this_
    , std_string_t const * name
    , Imath_Box2i_t const * displayWindow
    , Imath_Box2i_t const * dataWindow
    , Imf_RgbaChannels rgbaChannels
    , float pixelAspectRatio
    , Imath_V2f_t const screenWindowCenter
    , float screenWindowWidth
    , Imf_LineOrder lineOrder
    , Imf_Compression compression
    , int numThreads);
#define Imf_AcesOutputFile_new_with_header Imf_3_0__AcesOutputFile_new_with_header


unsigned int Imf_3_0__AcesOutputFile_dtor(
    Imf_AcesOutputFile_t * this_);
#define Imf_AcesOutputFile_dtor Imf_3_0__AcesOutputFile_dtor


unsigned int Imf_3_0__AcesOutputFile_setFrameBuffer(
    Imf_AcesOutputFile_t * this_
    , Imf_Rgba_t const * base
    , unsigned long xStride
    , unsigned long yStride);
#define Imf_AcesOutputFile_setFrameBuffer Imf_3_0__AcesOutputFile_setFrameBuffer


unsigned int Imf_3_0__AcesOutputFile_writePixels(
    Imf_AcesOutputFile_t * this_
    , int numScanLines);
#define Imf_AcesOutputFile_writePixels Imf_3_0__AcesOutputFile_writePixels


unsigned int Imf_3_0__AcesOutputFile_currentScanLine(
    Imf_AcesOutputFile_t const * this_
    , int * return_);
#define Imf_AcesOutputFile_currentScanLine Imf_3_0__AcesOutputFile_currentScanLine


unsigned int Imf_3_0__AcesOutputFile_header(
    Imf_AcesOutputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_AcesOutputFile_header Imf_3_0__AcesOutputFile_header


unsigned int Imf_3_0__AcesOutputFile_displayWindow(
    Imf_AcesOutputFile_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_AcesOutputFile_displayWindow Imf_3_0__AcesOutputFile_displayWindow


unsigned int Imf_3_0__AcesOutputFile_dataWindow(
    Imf_AcesOutputFile_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_AcesOutputFile_dataWindow Imf_3_0__AcesOutputFile_dataWindow


unsigned int Imf_3_0__AcesOutputFile_pixelAspectRatio(
    Imf_AcesOutputFile_t const * this_
    , float * return_);
#define Imf_AcesOutputFile_pixelAspectRatio Imf_3_0__AcesOutputFile_pixelAspectRatio


unsigned int Imf_3_0__AcesOutputFile_screenWindowCenter(
    Imf_AcesOutputFile_t const * this_
    , Imath_V2f_t * return_);
#define Imf_AcesOutputFile_screenWindowCenter Imf_3_0__AcesOutputFile_screenWindowCenter


unsigned int Imf_3_0__AcesOutputFile_screenWindowWidth(
    Imf_AcesOutputFile_t const * this_
    , float * return_);
#define Imf_AcesOutputFile_screenWindowWidth Imf_3_0__AcesOutputFile_screenWindowWidth


unsigned int Imf_3_0__AcesOutputFile_lineOrder(
    Imf_AcesOutputFile_t const * this_
    , Imf_LineOrder * return_);
#define Imf_AcesOutputFile_lineOrder Imf_3_0__AcesOutputFile_lineOrder


unsigned int Imf_3_0__AcesOutputFile_compression(
    Imf_AcesOutputFile_t const * this_
    , Imf_Compression * return_);
#define Imf_AcesOutputFile_compression Imf_3_0__AcesOutputFile_compression


unsigned int Imf_3_0__AcesOutputFile_channels(
    Imf_AcesOutputFile_t const * this_
    , Imf_RgbaChannels * return_);
#define Imf_AcesOutputFile_channels Imf_3_0__AcesOutputFile_channels


unsigned int Imf_3_0__AcesOutputFile_updatePreviewImage(
    Imf_AcesOutputFile_t * this_
    , Imf_PreviewRgba_t const * newPixels);
#define Imf_AcesOutputFile_updatePreviewImage Imf_3_0__AcesOutputFile_updatePreviewImage


unsigned int Imf_3_0__AcesInputFile_new(
    Imf_AcesInputFile_t * * this_
    , std_string_t const * name
    , int numThreads);
#define Imf_AcesInputFile_new Imf_3_0__AcesInputFile_new


unsigned int Imf_3_0__AcesInputFile_new_with_stream(
    Imf_AcesInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads);
#define Imf_AcesInputFile_new_with_stream Imf_3_0__AcesInputFile_new_with_stream


unsigned int Imf_3_0__AcesInputFile_dtor(
    Imf_AcesInputFile_t * this_);
#define Imf_AcesInputFile_dtor Imf_3_0__AcesInputFile_dtor


unsigned int Imf_3_0__AcesInputFile_setFrameBuffer(
    Imf_AcesInputFile_t * this_
    , Imf_Rgba_t * base
    , unsigned long xStride
    , unsigned long yStride);
#define Imf_AcesInputFile_setFrameBuffer Imf_3_0__AcesInputFile_setFrameBuffer


unsigned int Imf_3_0__AcesInputFile_readPixels(
    Imf_AcesInputFile_t * this_
    , int scanLine1
    , int scanLine2);
#define Imf_AcesInputFile_readPixels Imf_3_0__AcesInputFile_readPixels


unsigned int Imf_3_0__AcesInputFile_header(
    Imf_AcesInputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_AcesInputFile_header Imf_3_0__AcesInputFile_header


unsigned int Imf_3_0__AcesInputFile_displayWindow(
    Imf_AcesInputFile_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_AcesInputFile_displayWindow Imf_3_0__AcesInputFile_displayWindow


unsigned int Imf_3_0__AcesInputFile_dataWindow(
    Imf_AcesInputFile_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_AcesInputFile_dataWindow Imf_3_0__AcesInputFile_dataWindow


unsigned int Imf_3_0__AcesInputFile_pixelAspectRatio(
    Imf_AcesInputFile_t const * this_
    , float * return_);
#define Imf_AcesInputFile_pixelAspectRatio Imf_3_0__AcesInputFile_pixelAspectRatio


unsigned int Imf_3_0__AcesInputFile_screenWindowCenter(
    Imf_AcesInputFile_t const * this_
    , Imath_V2f_t * return_);
#define Imf_AcesInputFile_screenWindowCenter Imf_3_0__AcesInputFile_screenWindowCenter


unsigned int Imf_3_0__AcesInputFile_screenWindowWidth(
    Imf_AcesInputFile_t const * this_
    , float * return_);
#define Imf_AcesInputFile_screenWindowWidth Imf_3_0__AcesInputFile_screenWindowWidth


unsigned int Imf_3_0__AcesInputFile_lineOrder(
    Imf_AcesInputFile_t const * this_
    , Imf_LineOrder * return_);
#define Imf_AcesInputFile_lineOrder Imf_3_0__AcesInputFile_lineOrder


unsigned int Imf_3_0__AcesInputFile_compression(
    Imf_AcesInputFile_t const * this_
    , Imf_Compression * return_);
#define Imf_AcesInputFile_compression Imf_3_0__AcesInputFile_compression


unsigned int Imf_3_0__AcesInputFile_channels(
    Imf_AcesInputFile_t const * this_
    , Imf_RgbaChannels * return_);
#define Imf_AcesInputFile_channels Imf_3_0__AcesInputFile_channels


unsigned int Imf_3_0__AcesInputFile_fileName(
    Imf_AcesInputFile_t const * this_
    , char const * * return_);
#define Imf_AcesInputFile_fileName Imf_3_0__AcesInputFile_fileName


unsigned int Imf_3_0__AcesInputFile_isComplete(
    Imf_AcesInputFile_t const * this_
    , _Bool * return_);
#define Imf_AcesInputFile_isComplete Imf_3_0__AcesInputFile_isComplete


unsigned int Imf_3_0__AcesInputFile_version(
    Imf_AcesInputFile_t const * this_
    , int * return_);
#define Imf_AcesInputFile_version Imf_3_0__AcesInputFile_version


#ifdef __cplusplus
}
#endif

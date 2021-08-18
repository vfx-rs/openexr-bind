#include "imf_rgbafile_private.h"

#include "imath_box_private.h"
#include "imath_vec_private.h"
#include "imf_compression_private.h"
#include "imf_framebuffer_private.h"
#include "imf_header_private.h"
#include "imf_io_private.h"
#include "imf_lineorder_private.h"
#include "imf_previewimage_private.h"
#include "imf_rgba_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

unsigned int Imf_3_0__RgbaOutputFile_ctor(
    Imf_RgbaOutputFile_t * * this_
    , char const * name
    , Imf_Header_t const * header
    , Imf_RgbaChannels rgbaChannels
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::RgbaOutputFile(name, to_cpp_ref(header), Imf_RgbaChannels_to_cpp_ref(&(rgbaChannels)), numThreads));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_from_stream(
    Imf_RgbaOutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * header
    , Imf_RgbaChannels rgbaChannels
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::RgbaOutputFile(to_cpp_ref(os), to_cpp_ref(header), Imf_RgbaChannels_to_cpp_ref(&(rgbaChannels)), numThreads));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

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
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::RgbaOutputFile(name, to_cpp_ref(displayWindow), to_cpp_ref(dataWindow), Imf_RgbaChannels_to_cpp_ref(&(rgbaChannels)), pixelAspectRatio, to_cpp_ref(&(screenWindowCenter)), screenWindowWidth, Imf_LineOrder_to_cpp_ref(&(lineOrder)), Imf_Compression_to_cpp_ref(&(compression)), numThreads));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

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
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::RgbaOutputFile(name, width, height, Imf_RgbaChannels_to_cpp_ref(&(rgbaChannels)), pixelAspectRatio, to_cpp_ref(&(screenWindowCenter)), screenWindowWidth, Imf_LineOrder_to_cpp_ref(&(lineOrder)), Imf_Compression_to_cpp_ref(&(compression)), numThreads));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_dtor(
    Imf_RgbaOutputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_setFrameBuffer(
    Imf_RgbaOutputFile_t * this_
    , Imf_Rgba_t const * base
    , unsigned long xStride
    , unsigned long yStride)
{
    try {
        (to_cpp(this_)) -> setFrameBuffer(to_cpp(base), xStride, yStride);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_writePixels(
    Imf_RgbaOutputFile_t * this_
    , int numScanLines)
{
    try {
        (to_cpp(this_)) -> writePixels(numScanLines);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_currentScanLine(
    Imf_RgbaOutputFile_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> currentScanLine();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_header(
    Imf_RgbaOutputFile_t const * this_
    , Imf_Header_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> header());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_frameBuffer(
    Imf_RgbaOutputFile_t const * this_
    , Imf_FrameBuffer_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> frameBuffer());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_displayWindow(
    Imf_RgbaOutputFile_t const * this_
    , Imath_Box2i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> displayWindow());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_dataWindow(
    Imf_RgbaOutputFile_t const * this_
    , Imath_Box2i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> dataWindow());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_pixelAspectRatio(
    Imf_RgbaOutputFile_t const * this_
    , float * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> pixelAspectRatio();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_screenWindowCenter(
    Imf_RgbaOutputFile_t const * this_
    , Imath_V2f_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> screenWindowCenter());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_screenWindowWidth(
    Imf_RgbaOutputFile_t const * this_
    , float * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> screenWindowWidth();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_lineOrder(
    Imf_RgbaOutputFile_t const * this_
    , Imf_LineOrder * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> lineOrder());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_compression(
    Imf_RgbaOutputFile_t const * this_
    , Imf_Compression * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> compression());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_channels(
    Imf_RgbaOutputFile_t const * this_
    , Imf_RgbaChannels * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> channels());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_updatePreviewImage(
    Imf_RgbaOutputFile_t * this_
    , Imf_PreviewRgba_t const * preview)
{
    try {
        (to_cpp(this_)) -> updatePreviewImage(to_cpp(preview));
        return 0;
    } catch (Iex::LogicExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 9;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaOutputFile_setYCRounding(
    Imf_RgbaOutputFile_t * this_
    , unsigned int roundY
    , unsigned int roundC)
{
    try {
        (to_cpp(this_)) -> setYCRounding(roundY, roundC);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_ctor(
    Imf_RgbaInputFile_t * * this_
    , char const * name
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::RgbaInputFile(name, numThreads));
        return 0;
    } catch (Iex::InputExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 5;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_from_stream(
    Imf_RgbaInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::RgbaInputFile(to_cpp_ref(is), numThreads));
        return 0;
    } catch (Iex::InputExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 5;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_with_layer(
    Imf_RgbaInputFile_t * * this_
    , char const * name
    , std_string_t const * layerName
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::RgbaInputFile(name, to_cpp_ref(layerName), numThreads));
        return 0;
    } catch (Iex::InputExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 5;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_from_stream_with_layer(
    Imf_RgbaInputFile_t * * this_
    , Imf_IStream_t * is
    , std_string_t const * layerName
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::RgbaInputFile(to_cpp_ref(is), to_cpp_ref(layerName), numThreads));
        return 0;
    } catch (Iex::InputExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 5;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_dtor(
    Imf_RgbaInputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_setFrameBuffer(
    Imf_RgbaInputFile_t * this_
    , Imf_Rgba_t * base
    , unsigned long xStride
    , unsigned long yStride)
{
    try {
        (to_cpp(this_)) -> setFrameBuffer(to_cpp(base), xStride, yStride);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_setLayerName(
    Imf_RgbaInputFile_t * this_
    , std_string_t const * layerName)
{
    try {
        (to_cpp(this_)) -> setLayerName(to_cpp_ref(layerName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_readPixels(
    Imf_RgbaInputFile_t * this_
    , int scanLine1
    , int scanLine2)
{
    try {
        (to_cpp(this_)) -> readPixels(scanLine1, scanLine2);
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_header(
    Imf_RgbaInputFile_t const * this_
    , Imf_Header_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> header());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_frameBuffer(
    Imf_RgbaInputFile_t const * this_
    , Imf_FrameBuffer_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> frameBuffer());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_displayWindow(
    Imf_RgbaInputFile_t const * this_
    , Imath_Box2i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> displayWindow());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_dataWindow(
    Imf_RgbaInputFile_t const * this_
    , Imath_Box2i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> dataWindow());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_pixelAspectRatio(
    Imf_RgbaInputFile_t const * this_
    , float * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> pixelAspectRatio();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_screenWindowCenter(
    Imf_RgbaInputFile_t const * this_
    , Imath_V2f_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> screenWindowCenter());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_screenWindowWidth(
    Imf_RgbaInputFile_t const * this_
    , float * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> screenWindowWidth();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_lineOrder(
    Imf_RgbaInputFile_t const * this_
    , Imf_LineOrder * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> lineOrder());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_compression(
    Imf_RgbaInputFile_t const * this_
    , Imf_Compression * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> compression());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_channels(
    Imf_RgbaInputFile_t const * this_
    , Imf_RgbaChannels * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> channels());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_fileName(
    Imf_RgbaInputFile_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> fileName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_isComplete(
    Imf_RgbaInputFile_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> isComplete();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaInputFile_version(
    Imf_RgbaInputFile_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> version();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_ComputeBasePointer(
    Imf_Rgba_t * * return_
    , Imf_Rgba_t * ptr
    , Imath_Box2i_t const * dataWindow)
{
    try {
        to_c(return_, Imf_3_0::ComputeBasePointer(to_cpp(ptr), to_cpp_ref(dataWindow)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


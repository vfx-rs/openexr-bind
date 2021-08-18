#include "imf_aces_file_private.h"

#include "imath_box_private.h"
#include "imath_vec_private.h"
#include "imf_compression_private.h"
#include "imf_header_private.h"
#include "imf_io_private.h"
#include "imf_lineorder_private.h"
#include "imf_previewimage_private.h"
#include "imf_rgba_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_new(
    Imf_AcesOutputFile_t * * this_
    , std_string_t const * name
    , Imf_Header_t const * header
    , Imf_RgbaChannels rgbaChannels
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::AcesOutputFile(to_cpp_ref(name), to_cpp_ref(header), Imf_RgbaChannels_to_cpp_ref(&(rgbaChannels)), numThreads));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_new_with_stream(
    Imf_AcesOutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * header
    , Imf_RgbaChannels rgbaChannels
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::AcesOutputFile(to_cpp_ref(os), to_cpp_ref(header), Imf_RgbaChannels_to_cpp_ref(&(rgbaChannels)), numThreads));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_new_with_header(
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
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::AcesOutputFile(to_cpp_ref(name), to_cpp_ref(displayWindow), to_cpp_ref(dataWindow), Imf_RgbaChannels_to_cpp_ref(&(rgbaChannels)), pixelAspectRatio, to_cpp_ref(&(screenWindowCenter)), screenWindowWidth, Imf_LineOrder_to_cpp_ref(&(lineOrder)), Imf_Compression_to_cpp_ref(&(compression)), numThreads));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_dtor(
    Imf_AcesOutputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_setFrameBuffer(
    Imf_AcesOutputFile_t * this_
    , Imf_Rgba_t const * base
    , unsigned long xStride
    , unsigned long yStride)
{
    try {
        (to_cpp(this_)) -> setFrameBuffer(to_cpp(base), xStride, yStride);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_writePixels(
    Imf_AcesOutputFile_t * this_
    , int numScanLines)
{
    try {
        (to_cpp(this_)) -> writePixels(numScanLines);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_currentScanLine(
    Imf_AcesOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_header(
    Imf_AcesOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_displayWindow(
    Imf_AcesOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_dataWindow(
    Imf_AcesOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_pixelAspectRatio(
    Imf_AcesOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_screenWindowCenter(
    Imf_AcesOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_screenWindowWidth(
    Imf_AcesOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_lineOrder(
    Imf_AcesOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_compression(
    Imf_AcesOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_channels(
    Imf_AcesOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesOutputFile_updatePreviewImage(
    Imf_AcesOutputFile_t * this_
    , Imf_PreviewRgba_t const * newPixels)
{
    try {
        (to_cpp(this_)) -> updatePreviewImage(to_cpp(newPixels));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_new(
    Imf_AcesInputFile_t * * this_
    , std_string_t const * name
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::AcesInputFile(to_cpp_ref(name), numThreads));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_new_with_stream(
    Imf_AcesInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::AcesInputFile(to_cpp_ref(is), numThreads));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_dtor(
    Imf_AcesInputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_setFrameBuffer(
    Imf_AcesInputFile_t * this_
    , Imf_Rgba_t * base
    , unsigned long xStride
    , unsigned long yStride)
{
    try {
        (to_cpp(this_)) -> setFrameBuffer(to_cpp(base), xStride, yStride);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_readPixels(
    Imf_AcesInputFile_t * this_
    , int scanLine1
    , int scanLine2)
{
    try {
        (to_cpp(this_)) -> readPixels(scanLine1, scanLine2);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_header(
    Imf_AcesInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_displayWindow(
    Imf_AcesInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_dataWindow(
    Imf_AcesInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_pixelAspectRatio(
    Imf_AcesInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_screenWindowCenter(
    Imf_AcesInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_screenWindowWidth(
    Imf_AcesInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_lineOrder(
    Imf_AcesInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_compression(
    Imf_AcesInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_channels(
    Imf_AcesInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_fileName(
    Imf_AcesInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_isComplete(
    Imf_AcesInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__AcesInputFile_version(
    Imf_AcesInputFile_t const * this_
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


#include "imf_tiledrgbafile_private.h"

#include "imath_box_private.h"
#include "imath_vec_private.h"
#include "imf_compression_private.h"
#include "imf_framebuffer_private.h"
#include "imf_header_private.h"
#include "imf_io_private.h"
#include "imf_lineorder_private.h"
#include "imf_previewimage_private.h"
#include "imf_rgba_private.h"
#include "imf_tiledescription_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_ctor(
    Imf_TiledRgbaOutputFile_t * * this_
    , char const * name
    , Imf_Header_t const * header
    , Imf_RgbaChannels rgbaChannels
    , int tileXSize
    , int tileYSize
    , Imf_LevelMode mode
    , Imf_LevelRoundingMode rmode
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::TiledRgbaOutputFile(name, to_cpp_ref(header), Imf_RgbaChannels_to_cpp_ref(&(rgbaChannels)), tileXSize, tileYSize, Imf_LevelMode_to_cpp_ref(&(mode)), Imf_LevelRoundingMode_to_cpp_ref(&(rmode)), numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_from_stream(
    Imf_TiledRgbaOutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * header
    , Imf_RgbaChannels rgbaChannels
    , int tileXSize
    , int tileYSize
    , Imf_LevelMode mode
    , Imf_LevelRoundingMode rmode
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::TiledRgbaOutputFile(to_cpp_ref(os), to_cpp_ref(header), Imf_RgbaChannels_to_cpp_ref(&(rgbaChannels)), tileXSize, tileYSize, Imf_LevelMode_to_cpp_ref(&(mode)), Imf_LevelRoundingMode_to_cpp_ref(&(rmode)), numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_with_windows(
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
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::TiledRgbaOutputFile(name, tileXSize, tileYSize, Imf_LevelMode_to_cpp_ref(&(mode)), Imf_LevelRoundingMode_to_cpp_ref(&(rmode)), to_cpp_ref(displayWindow), to_cpp_ref(dataWindow), Imf_RgbaChannels_to_cpp_ref(&(rgbaChannels)), pixelAspectRatio, to_cpp_ref(&(screenWindowCenter)), screenWindowWidth, Imf_LineOrder_to_cpp_ref(&(lineOrder)), Imf_Compression_to_cpp_ref(&(compression)), numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_with_dimensions(
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
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::TiledRgbaOutputFile(name, width, height, tileXSize, tileYSize, Imf_LevelMode_to_cpp_ref(&(mode)), Imf_LevelRoundingMode_to_cpp_ref(&(rmode)), Imf_RgbaChannels_to_cpp_ref(&(rgbaChannel)), pixelAspectRatio, to_cpp_ref(&(screenWindowCenter)), screenWindowWidth, Imf_LineOrder_to_cpp_ref(&(lineOrder)), Imf_Compression_to_cpp_ref(&(compression)), numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_dtor(
    Imf_TiledRgbaOutputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_setFrameBuffer(
    Imf_TiledRgbaOutputFile_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_header(
    Imf_TiledRgbaOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_frameBuffer(
    Imf_TiledRgbaOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_displayWindow(
    Imf_TiledRgbaOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_dataWindow(
    Imf_TiledRgbaOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_pixelAspectRatio(
    Imf_TiledRgbaOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_screenWindowCenter(
    Imf_TiledRgbaOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_screenWindowWidth(
    Imf_TiledRgbaOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_lineOrder(
    Imf_TiledRgbaOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_compression(
    Imf_TiledRgbaOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_channels(
    Imf_TiledRgbaOutputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_tileXSize(
    Imf_TiledRgbaOutputFile_t const * this_
    , unsigned int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> tileXSize();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_tileYSize(
    Imf_TiledRgbaOutputFile_t const * this_
    , unsigned int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> tileYSize();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_levelMode(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imf_LevelMode * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> levelMode());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_levelRoundingMode(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imf_LevelRoundingMode * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> levelRoundingMode());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_numLevels(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numLevels();
        return 0;
    } catch (Iex::LogicExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 3;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_numXLevels(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numXLevels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_numYLevels(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numYLevels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_isValidLevel(
    Imf_TiledRgbaOutputFile_t const * this_
    , _Bool * return_
    , int lx
    , int ly)
{
    try {
        *(return_) = (to_cpp(this_)) -> isValidLevel(lx, ly);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_levelWidth(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_
    , int lx)
{
    try {
        *(return_) = (to_cpp(this_)) -> levelWidth(lx);
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_levelHeight(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_
    , int ly)
{
    try {
        *(return_) = (to_cpp(this_)) -> levelHeight(ly);
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_numXTiles(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_
    , int lx)
{
    try {
        *(return_) = (to_cpp(this_)) -> numXTiles(lx);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_numYTiles(
    Imf_TiledRgbaOutputFile_t const * this_
    , int * return_
    , int ly)
{
    try {
        *(return_) = (to_cpp(this_)) -> numYTiles(ly);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_dataWindowForLevel(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> dataWindowForLevel(lx, ly));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_dataWindowForTile(
    Imf_TiledRgbaOutputFile_t const * this_
    , Imath_Box2i_t * return_
    , int dx
    , int dy
    , int lx
    , int ly)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> dataWindowForTile(dx, dy, lx, ly));
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_writeTile(
    Imf_TiledRgbaOutputFile_t * this_
    , int dx
    , int dy
    , int lx
    , int ly)
{
    try {
        (to_cpp(this_)) -> writeTile(dx, dy, lx, ly);
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_writeTiles(
    Imf_TiledRgbaOutputFile_t * this_
    , int dxMin
    , int dxMax
    , int dyMin
    , int dyMax
    , int lx
    , int ly)
{
    try {
        (to_cpp(this_)) -> writeTiles(dxMin, dxMax, dyMin, dyMax, lx, ly);
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaOutputFile_updatePreviewImage(
    Imf_TiledRgbaOutputFile_t * this_
    , Imf_PreviewRgba_t const * newPixels)
{
    try {
        (to_cpp(this_)) -> updatePreviewImage(to_cpp(newPixels));
        return 0;
    } catch (Iex::LogicExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 3;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_ctor(
    Imf_TiledRgbaInputFile_t * * this_
    , char const * name
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::TiledRgbaInputFile(name, numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_from_stream(
    Imf_TiledRgbaInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::TiledRgbaInputFile(to_cpp_ref(is), numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_with_layer(
    Imf_TiledRgbaInputFile_t * * this_
    , char const * name
    , std_string_t const * layerName
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::TiledRgbaInputFile(name, to_cpp_ref(layerName), numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_from_stream_with_layer(
    Imf_TiledRgbaInputFile_t * * this_
    , Imf_IStream_t * is
    , std_string_t const * layerName
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::TiledRgbaInputFile(to_cpp_ref(is), to_cpp_ref(layerName), numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_dtor(
    Imf_TiledRgbaInputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_setFrameBuffer(
    Imf_TiledRgbaInputFile_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_setLayerName(
    Imf_TiledRgbaInputFile_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_header(
    Imf_TiledRgbaInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_frameBuffer(
    Imf_TiledRgbaInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_displayWindow(
    Imf_TiledRgbaInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_dataWindow(
    Imf_TiledRgbaInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_pixelAspectRatio(
    Imf_TiledRgbaInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_screenWindowCenter(
    Imf_TiledRgbaInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_screenWindowWidth(
    Imf_TiledRgbaInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_lineOrder(
    Imf_TiledRgbaInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_compression(
    Imf_TiledRgbaInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_channels(
    Imf_TiledRgbaInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_fileName(
    Imf_TiledRgbaInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_isComplete(
    Imf_TiledRgbaInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_version(
    Imf_TiledRgbaInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_tileXSize(
    Imf_TiledRgbaInputFile_t const * this_
    , unsigned int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> tileXSize();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_tileYSize(
    Imf_TiledRgbaInputFile_t const * this_
    , unsigned int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> tileYSize();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_levelMode(
    Imf_TiledRgbaInputFile_t const * this_
    , Imf_LevelMode * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> levelMode());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_levelRoundingMode(
    Imf_TiledRgbaInputFile_t const * this_
    , Imf_LevelRoundingMode * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> levelRoundingMode());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_numLevels(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numLevels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_numXLevels(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numXLevels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_numYLevels(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numYLevels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_isValidLevel(
    Imf_TiledRgbaInputFile_t const * this_
    , _Bool * return_
    , int lx
    , int ly)
{
    try {
        *(return_) = (to_cpp(this_)) -> isValidLevel(lx, ly);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_levelWidth(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_
    , int lx)
{
    try {
        *(return_) = (to_cpp(this_)) -> levelWidth(lx);
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_levelHeight(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_
    , int ly)
{
    try {
        *(return_) = (to_cpp(this_)) -> levelHeight(ly);
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_numXTiles(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_
    , int lx)
{
    try {
        *(return_) = (to_cpp(this_)) -> numXTiles(lx);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_numYTiles(
    Imf_TiledRgbaInputFile_t const * this_
    , int * return_
    , int ly)
{
    try {
        *(return_) = (to_cpp(this_)) -> numYTiles(ly);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_dataWindowForLevel(
    Imf_TiledRgbaInputFile_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> dataWindowForLevel(lx, ly));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_dataWindowForTile(
    Imf_TiledRgbaInputFile_t const * this_
    , Imath_Box2i_t * return_
    , int dx
    , int dy
    , int lx
    , int ly)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> dataWindowForTile(dx, dy, lx, ly));
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_readTile(
    Imf_TiledRgbaInputFile_t * this_
    , int dx
    , int dy
    , int lx
    , int ly)
{
    try {
        (to_cpp(this_)) -> readTile(dx, dy, lx, ly);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TiledRgbaInputFile_readTiles(
    Imf_TiledRgbaInputFile_t * this_
    , int dxMin
    , int dxMax
    , int dyMin
    , int dyMax
    , int lx
    , int ly)
{
    try {
        (to_cpp(this_)) -> readTiles(dxMin, dxMax, dyMin, dyMax, lx, ly);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


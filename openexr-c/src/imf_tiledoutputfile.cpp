#include "imf_tiledoutputfile_private.h"

#include "imath_box_private.h"
#include "imf_framebuffer_private.h"
#include "imf_header_private.h"
#include "imf_inputfile_private.h"
#include "imf_inputpart_private.h"
#include "imf_io_private.h"
#include "imf_previewimage_private.h"
#include "imf_tiledescription_private.h"
#include "imf_tiledinputfile_private.h"
#include "imf_tiledinputpart_private.h"
#include <new>

#include <stdexcept>

unsigned int Imf_3_0__TiledOutputFile_ctor(
    Imf_TiledOutputFile_t * * this_
    , char const * fileName
    , Imf_Header_t const * header
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::TiledOutputFile(fileName, to_cpp_ref(header), numThreads));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TiledOutputFile_from_stream(
    Imf_TiledOutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * header
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::TiledOutputFile(to_cpp_ref(os), to_cpp_ref(header), numThreads));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TiledOutputFile_dtor(
    Imf_TiledOutputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TiledOutputFile_fileName(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_header(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_setFrameBuffer(
    Imf_TiledOutputFile_t * this_
    , Imf_FrameBuffer_t const * frameBuffer)
{
    try {
        (to_cpp(this_)) -> setFrameBuffer(to_cpp_ref(frameBuffer));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TiledOutputFile_frameBuffer(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_tileXSize(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_tileYSize(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_levelMode(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_levelRoundingMode(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_numLevels(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_numXLevels(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_numYLevels(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_isValidLevel(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_levelWidth(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_levelHeight(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_numXTiles(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_numYTiles(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_dataWindowForLevel(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_dataWindowForTile(
    Imf_TiledOutputFile_t const * this_
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

unsigned int Imf_3_0__TiledOutputFile_writeTile(
    Imf_TiledOutputFile_t * this_
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

unsigned int Imf_3_0__TiledOutputFile_writeTiles(
    Imf_TiledOutputFile_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly)
{
    try {
        (to_cpp(this_)) -> writeTiles(dx1, dx2, dy1, dy2, lx, ly);
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

unsigned int Imf_3_0__TiledOutputFile_copyPixels_from_tiled_file(
    Imf_TiledOutputFile_t * this_
    , Imf_TiledInputFile_t * in)
{
    try {
        (to_cpp(this_)) -> copyPixels(to_cpp_ref(in));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
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

unsigned int Imf_3_0__TiledOutputFile_copyPixels_from_tiled_part(
    Imf_TiledOutputFile_t * this_
    , Imf_TiledInputPart_t * in)
{
    try {
        (to_cpp(this_)) -> copyPixels(to_cpp_ref(in));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
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

unsigned int Imf_3_0__TiledOutputFile_copyPixels_from_file(
    Imf_TiledOutputFile_t * this_
    , Imf_InputFile_t * in)
{
    try {
        (to_cpp(this_)) -> copyPixels(to_cpp_ref(in));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
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

unsigned int Imf_3_0__TiledOutputFile_copyPixels_from_part(
    Imf_TiledOutputFile_t * this_
    , Imf_InputPart_t * in)
{
    try {
        (to_cpp(this_)) -> copyPixels(to_cpp_ref(in));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
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

unsigned int Imf_3_0__TiledOutputFile_updatePreviewImage(
    Imf_TiledOutputFile_t * this_
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

unsigned int Imf_3_0__TiledOutputFile_breakTile(
    Imf_TiledOutputFile_t * this_
    , int dx
    , int dy
    , int lx
    , int ly
    , int offset
    , int length
    , char c)
{
    try {
        (to_cpp(this_)) -> breakTile(dx, dy, lx, ly, offset, length, c);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


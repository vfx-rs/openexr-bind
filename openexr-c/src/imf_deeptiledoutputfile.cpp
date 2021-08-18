#include "imf_deeptiledoutputfile_private.h"

#include "imath_box_private.h"
#include "imf_deepframebuffer_private.h"
#include "imf_deeptiledinputfile_private.h"
#include "imf_deeptiledinputpart_private.h"
#include "imf_header_private.h"
#include "imf_io_private.h"
#include "imf_previewimage_private.h"
#include "imf_tiledescription_private.h"
#include <new>

#include <stdexcept>

unsigned int Imf_3_0__DeepTiledOutputFile_ctor(
    Imf_DeepTiledOutputFile_t * * this_
    , char const * fileName
    , Imf_Header_t const * header
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::DeepTiledOutputFile(fileName, to_cpp_ref(header), numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepTiledOutputFile_from_stream(
    Imf_DeepTiledOutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * header
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::DeepTiledOutputFile(to_cpp_ref(os), to_cpp_ref(header), numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepTiledOutputFile_dtor(
    Imf_DeepTiledOutputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepTiledOutputFile_fileName(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_header(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_setFrameBuffer(
    Imf_DeepTiledOutputFile_t * this_
    , Imf_DeepFrameBuffer_t const * frameBuffer)
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

unsigned int Imf_3_0__DeepTiledOutputFile_frameBuffer(
    Imf_DeepTiledOutputFile_t const * this_
    , Imf_DeepFrameBuffer_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> frameBuffer());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepTiledOutputFile_tileXSize(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_tileYSize(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_levelMode(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_levelRoundingMode(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_numLevels(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_numXLevels(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_numYLevels(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_isValidLevel(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_levelWidth(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_levelHeight(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_numXTiles(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_numYTiles(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_dataWindowForLevel(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_dataWindowForTile(
    Imf_DeepTiledOutputFile_t const * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_writeTile(
    Imf_DeepTiledOutputFile_t * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_writeTiles(
    Imf_DeepTiledOutputFile_t * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_copyPixels_from_file(
    Imf_DeepTiledOutputFile_t * this_
    , Imf_DeepTiledInputFile_t * in)
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

unsigned int Imf_3_0__DeepTiledOutputFile_copyPixels_from_part(
    Imf_DeepTiledOutputFile_t * this_
    , Imf_DeepTiledInputPart_t * in)
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

unsigned int Imf_3_0__DeepTiledOutputFile_updatePreviewImage(
    Imf_DeepTiledOutputFile_t * this_
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

unsigned int Imf_3_0__DeepTiledOutputFile_breakTile(
    Imf_DeepTiledOutputFile_t * this_
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


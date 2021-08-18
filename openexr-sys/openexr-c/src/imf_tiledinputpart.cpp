#include "imf_tiledinputpart_private.h"

#include "imath_box_private.h"
#include "imf_framebuffer_private.h"
#include "imf_header_private.h"
#include "imf_multipartinputfile_private.h"
#include "imf_tiledescription_private.h"
#include <new>

#include <stdexcept>

unsigned int Imf_3_0__TiledInputPart_sizeof()
{
        return sizeof(Imf_3_0::TiledInputPart);
}

unsigned int Imf_3_0__TiledInputPart_alignof()
{
        return alignof(Imf_3_0::TiledInputPart);
}

unsigned int Imf_3_0__TiledInputPart_ctor(
    Imf_TiledInputPart_t * this_
    , Imf_MultiPartInputFile_t * multiPartFile
    , int partNumber)
{
    try {
        new (this_) Imf_3_0::TiledInputPart(to_cpp_ref(multiPartFile), partNumber);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TiledInputPart_fileName(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_header(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_version(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_setFrameBuffer(
    Imf_TiledInputPart_t * this_
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

unsigned int Imf_3_0__TiledInputPart_frameBuffer(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_isComplete(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_tileXSize(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_tileYSize(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_levelMode(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_levelRoundingMode(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_numLevels(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_numXLevels(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_numYLevels(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_isValidLevel(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_levelWidth(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_levelHeight(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_numXTiles(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_numYTiles(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_dataWindowForLevel(
    Imf_TiledInputPart_t const * this_
    , Imath_Box2i_t * return_
    , int lx
    , int ly)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> dataWindowForLevel(lx, ly));
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

unsigned int Imf_3_0__TiledInputPart_dataWindowForTile(
    Imf_TiledInputPart_t const * this_
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

unsigned int Imf_3_0__TiledInputPart_readTile(
    Imf_TiledInputPart_t * this_
    , int dx
    , int dy
    , int lx
    , int ly)
{
    try {
        (to_cpp(this_)) -> readTile(dx, dy, lx, ly);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (Iex::IoExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 4;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TiledInputPart_readTiles(
    Imf_TiledInputPart_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly)
{
    try {
        (to_cpp(this_)) -> readTiles(dx1, dx2, dy1, dy2, lx, ly);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (Iex::IoExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 4;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TiledInputPart_rawTileData(
    Imf_TiledInputPart_t * this_
    , int * dx
    , int * dy
    , int * lx
    , int * ly
    , char const * * pixelData
    , int * pixelDataSize)
{
    try {
        (to_cpp(this_)) -> rawTileData(*(dx), *(dy), *(lx), *(ly), *(pixelData), *(pixelDataSize));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (Iex::IoExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 4;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


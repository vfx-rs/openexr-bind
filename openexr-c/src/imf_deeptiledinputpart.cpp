#include "imf_deeptiledinputpart_private.h"

#include "imath_box_private.h"
#include "imf_deepframebuffer_private.h"
#include "imf_header_private.h"
#include "imf_multipartinputfile_private.h"
#include "imf_tiledescription_private.h"
#include <new>

#include <stdexcept>

unsigned int Imf_3_0__DeepTiledInputPart_sizeof()
{
        return sizeof(Imf_3_0::DeepTiledInputPart);
}

unsigned int Imf_3_0__DeepTiledInputPart_alignof()
{
        return alignof(Imf_3_0::DeepTiledInputPart);
}

unsigned int Imf_3_0__DeepTiledInputPart_ctor(
    Imf_DeepTiledInputPart_t * this_
    , Imf_MultiPartInputFile_t * multiPartFile
    , int partNumber)
{
    try {
        new (this_) Imf_3_0::DeepTiledInputPart(to_cpp_ref(multiPartFile), partNumber);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepTiledInputPart_fileName(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_header(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_version(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_setFrameBuffer(
    Imf_DeepTiledInputPart_t * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_frameBuffer(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_isComplete(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_tileXSize(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_tileYSize(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_levelMode(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_levelRoundingMode(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_numLevels(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_numXLevels(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_numYLevels(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_isValidLevel(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_levelWidth(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_levelHeight(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_numXTiles(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_numYTiles(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_dataWindowForLevel(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_dataWindowForTile(
    Imf_DeepTiledInputPart_t const * this_
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

unsigned int Imf_3_0__DeepTiledInputPart_readTile(
    Imf_DeepTiledInputPart_t * this_
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
    } catch (Iex::IoExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 4;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepTiledInputPart_readTiles(
    Imf_DeepTiledInputPart_t * this_
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
    } catch (Iex::IoExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 4;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepTiledInputPart_rawTileData(
    Imf_DeepTiledInputPart_t const * this_
    , int * dx
    , int * dy
    , int * lx
    , int * ly
    , char * data
    , unsigned long * dataSize)
{
    try {
        (to_cpp(this_)) -> rawTileData(*(dx), *(dy), *(lx), *(ly), data, *(dataSize));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepTiledInputPart_readPixelSampleCount(
    Imf_DeepTiledInputPart_t * this_
    , int dx
    , int dy
    , int lx
    , int ly)
{
    try {
        (to_cpp(this_)) -> readPixelSampleCount(dx, dy, lx, ly);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
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

unsigned int Imf_3_0__DeepTiledInputPart_readPixelSampleCounts(
    Imf_DeepTiledInputPart_t * this_
    , int dx1
    , int dx2
    , int dy1
    , int dy2
    , int lx
    , int ly)
{
    try {
        (to_cpp(this_)) -> readPixelSampleCounts(dx1, dx2, dy1, dy2, lx, ly);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
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


#include "imf_deeptiledinputfile_private.h"

#include "imath_box_private.h"
#include "imf_deepframebuffer_private.h"
#include "imf_header_private.h"
#include "imf_io_private.h"
#include "imf_tiledescription_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_ctor(
    Imf_DeepTiledInputFile_t * * this_
    , char const * fileName
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::DeepTiledInputFile(fileName, numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_from_stream(
    Imf_DeepTiledInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::DeepTiledInputFile(to_cpp_ref(is), numThreads));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_dtor(
    Imf_DeepTiledInputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_fileName(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_header(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_version(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_setFrameBuffer(
    Imf_DeepTiledInputFile_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_frameBuffer(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_isComplete(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_tileXSize(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_tileYSize(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_levelMode(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_levelRoundingMode(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_numLevels(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_numXLevels(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_numYLevels(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_isValidLevel(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_totalTiles(
    Imf_DeepTiledInputFile_t const * this_
    , unsigned long * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> totalTiles();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_levelWidth(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_levelHeight(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_numXTiles(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_numYTiles(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_dataWindowForLevel(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_dataWindowForTile(
    Imf_DeepTiledInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_readTile(
    Imf_DeepTiledInputFile_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_readTiles(
    Imf_DeepTiledInputFile_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_rawTileData(
    Imf_DeepTiledInputFile_t const * this_
    , int * dx
    , int * dy
    , int * lx
    , int * ly
    , char * pixelData
    , uint64_t * dataSize)
{
    try {
        (to_cpp(this_)) -> rawTileData(*(dx), *(dy), *(lx), *(ly), pixelData, *(dataSize));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_readPixelSampleCount(
    Imf_DeepTiledInputFile_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepTiledInputFile_readPixelSampleCounts(
    Imf_DeepTiledInputFile_t * this_
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


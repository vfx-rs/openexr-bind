#include "imf_deepscanlineinputfile_private.h"

#include "imf_deepframebuffer_private.h"
#include "imf_header_private.h"
#include "imf_io_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_ctor(
    Imf_DeepScanLineInputFile_t * * this_
    , char const * fileName
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::DeepScanLineInputFile(fileName, numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_ctor_1(
    Imf_DeepScanLineInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::DeepScanLineInputFile(to_cpp_ref(is), numThreads));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_ctor_2(
    Imf_DeepScanLineInputFile_t * * this_
    , Imf_Header_t const * header
    , Imf_IStream_t * is
    , int version
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::DeepScanLineInputFile(to_cpp_ref(header), to_cpp(is), version, numThreads));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_dtor(
    Imf_DeepScanLineInputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_fileName(
    Imf_DeepScanLineInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_header(
    Imf_DeepScanLineInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_version(
    Imf_DeepScanLineInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_setFrameBuffer(
    Imf_DeepScanLineInputFile_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_frameBuffer(
    Imf_DeepScanLineInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_isComplete(
    Imf_DeepScanLineInputFile_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_readPixels(
    Imf_DeepScanLineInputFile_t * this_
    , int scanLine1
    , int scanLine2)
{
    try {
        (to_cpp(this_)) -> readPixels(scanLine1, scanLine2);
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_readPixels_from_frame_buffer(
    Imf_DeepScanLineInputFile_t const * this_
    , char const * rawPixelData
    , Imf_DeepFrameBuffer_t const * frameBuffer
    , int scanLine1
    , int scanLine2)
{
    try {
        (to_cpp(this_)) -> readPixels(rawPixelData, to_cpp_ref(frameBuffer), scanLine1, scanLine2);
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_rawPixelData(
    Imf_DeepScanLineInputFile_t * this_
    , int firstScanLine
    , char * pixelData
    , uint64_t * pixelDataSize)
{
    try {
        (to_cpp(this_)) -> rawPixelData(firstScanLine, pixelData, *(pixelDataSize));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_firstScanLineInChunk(
    Imf_DeepScanLineInputFile_t const * this_
    , int * return_
    , int y)
{
    try {
        *(return_) = (to_cpp(this_)) -> firstScanLineInChunk(y);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_lastScanLineInChunk(
    Imf_DeepScanLineInputFile_t const * this_
    , int * return_
    , int y)
{
    try {
        *(return_) = (to_cpp(this_)) -> lastScanLineInChunk(y);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_readPixelSampleCounts(
    Imf_DeepScanLineInputFile_t * this_
    , int scanline1
    , int scanline2)
{
    try {
        (to_cpp(this_)) -> readPixelSampleCounts(scanline1, scanline2);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputFile_readPixelSampleCounts_into_frame_buffer(
    Imf_DeepScanLineInputFile_t const * this_
    , char const * rawdata
    , Imf_DeepFrameBuffer_t const * frameBuffer
    , int scanLine1
    , int scanLine2)
{
    try {
        (to_cpp(this_)) -> readPixelSampleCounts(rawdata, to_cpp_ref(frameBuffer), scanLine1, scanLine2);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


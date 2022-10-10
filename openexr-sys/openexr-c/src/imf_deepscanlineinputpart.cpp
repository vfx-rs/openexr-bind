#include "imf_deepscanlineinputpart_private.h"

#include "imf_deepframebuffer_private.h"
#include "imf_header_private.h"
#include "imf_multipartinputfile_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_sizeof()
{
        return sizeof(Imf_3_0::DeepScanLineInputPart);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_alignof()
{
        return alignof(Imf_3_0::DeepScanLineInputPart);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_ctor(
    Imf_DeepScanLineInputPart_t * this_
    , Imf_MultiPartInputFile_t * file
    , int partNumber)
{
    try {
        new (this_) Imf_3_0::DeepScanLineInputPart(to_cpp_ref(file), partNumber);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_fileName(
    Imf_DeepScanLineInputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_header(
    Imf_DeepScanLineInputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_version(
    Imf_DeepScanLineInputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_setFrameBuffer(
    Imf_DeepScanLineInputPart_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_frameBuffer(
    Imf_DeepScanLineInputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_isComplete(
    Imf_DeepScanLineInputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_readPixels(
    Imf_DeepScanLineInputPart_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_readPixels_from_frame_buffer(
    Imf_DeepScanLineInputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_rawPixelData(
    Imf_DeepScanLineInputPart_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_readPixelSampleCounts(
    Imf_DeepScanLineInputPart_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_readPixelSampleCounts_into_frame_buffer(
    Imf_DeepScanLineInputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_firstScanLineInChunk(
    Imf_DeepScanLineInputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineInputPart_lastScanLineInChunk(
    Imf_DeepScanLineInputPart_t const * this_
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


#include "imf_inputpart_private.h"

#include "imf_framebuffer_private.h"
#include "imf_header_private.h"
#include "imf_multipartinputfile_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_sizeof()
{
        return sizeof(Imf_3_0::InputPart);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_alignof()
{
        return alignof(Imf_3_0::InputPart);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_ctor(
    Imf_InputPart_t * this_
    , Imf_MultiPartInputFile_t * multiPartFile
    , int partNumber)
{
    try {
        new (this_) Imf_3_0::InputPart(to_cpp_ref(multiPartFile), partNumber);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_fileName(
    Imf_InputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_header(
    Imf_InputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_version(
    Imf_InputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_setFrameBuffer(
    Imf_InputPart_t * this_
    , Imf_FrameBuffer_t const * frameBuffer)
{
    try {
        (to_cpp(this_)) -> setFrameBuffer(to_cpp_ref(frameBuffer));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_frameBuffer(
    Imf_InputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_isComplete(
    Imf_InputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_isOptimizationEnabled(
    Imf_InputPart_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> isOptimizationEnabled();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_readPixels(
    Imf_InputPart_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_readPixels_1(
    Imf_InputPart_t * this_
    , int scanLine)
{
    try {
        (to_cpp(this_)) -> readPixels(scanLine);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_rawPixelData(
    Imf_InputPart_t * this_
    , int firstScanLine
    , char const * * pixelData
    , int * pixelDataSize)
{
    try {
        (to_cpp(this_)) -> rawPixelData(firstScanLine, *(pixelData), *(pixelDataSize));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_rawPixelDataToBuffer(
    Imf_InputPart_t const * this_
    , int scanLine
    , char * pixelData
    , int * pixelDataSize)
{
    try {
        (to_cpp(this_)) -> rawPixelDataToBuffer(scanLine, pixelData, *(pixelDataSize));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__InputPart_rawTileData(
    Imf_InputPart_t * this_
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
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


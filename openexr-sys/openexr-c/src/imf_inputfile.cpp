#include "imf_inputfile_private.h"

#include "imf_framebuffer_private.h"
#include "imf_header_private.h"
#include "imf_io_private.h"
#include <new>

#include <stdexcept>

unsigned int Imf_3_0__InputFile_ctor(
    Imf_InputFile_t * * this_
    , char const * fileName
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::InputFile(fileName, numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__InputFile_from_stream(
    Imf_InputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::InputFile(to_cpp_ref(is), numThreads));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__InputFile_dtor(
    Imf_InputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__InputFile_fileName(
    Imf_InputFile_t const * this_
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

unsigned int Imf_3_0__InputFile_header(
    Imf_InputFile_t const * this_
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

unsigned int Imf_3_0__InputFile_version(
    Imf_InputFile_t const * this_
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

unsigned int Imf_3_0__InputFile_setFrameBuffer(
    Imf_InputFile_t * this_
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

unsigned int Imf_3_0__InputFile_frameBuffer(
    Imf_InputFile_t const * this_
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

unsigned int Imf_3_0__InputFile_isComplete(
    Imf_InputFile_t const * this_
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

unsigned int Imf_3_0__InputFile_isOptimizationEnabled(
    Imf_InputFile_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> isOptimizationEnabled();
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__InputFile_readPixels(
    Imf_InputFile_t * this_
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

unsigned int Imf_3_0__InputFile_rawPixelData(
    Imf_InputFile_t * this_
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

unsigned int Imf_3_0__InputFile_rawPixelDataToBuffer(
    Imf_InputFile_t const * this_
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

unsigned int Imf_3_0__InputFile_rawTileData(
    Imf_InputFile_t * this_
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

unsigned int Imf_3_0__GenericInputFile_dtor(
    Imf_GenericInputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__GenericInputFile__assign(
    Imf_GenericInputFile_t * this_
    , Imf_GenericInputFile_t * * return_
    , Imf_GenericInputFile_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__GenericInputFile_copy(
    Imf_GenericInputFile_t * * this_
    , Imf_GenericInputFile_t const * rhs)
{
    try {
        to_c(this_, new Imf_3_0::GenericInputFile(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


#include "imf_outputfile_private.h"

#include "imf_framebuffer_private.h"
#include "imf_header_private.h"
#include "imf_inputfile_private.h"
#include "imf_inputpart_private.h"
#include "imf_io_private.h"
#include "imf_previewimage_private.h"
#include <new>

#include <stdexcept>

unsigned int Imf_3_0__OutputFile_ctor(
    Imf_OutputFile_t * * this_
    , char const * fileName
    , Imf_Header_t const * header
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::OutputFile(fileName, to_cpp_ref(header), numThreads));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__OutputFile_from_stream(
    Imf_OutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * header
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::OutputFile(to_cpp_ref(os), to_cpp_ref(header), numThreads));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__OutputFile_dtor(
    Imf_OutputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__OutputFile_fileName(
    Imf_OutputFile_t const * this_
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

unsigned int Imf_3_0__OutputFile_header(
    Imf_OutputFile_t const * this_
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

unsigned int Imf_3_0__OutputFile_setFrameBuffer(
    Imf_OutputFile_t * this_
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

unsigned int Imf_3_0__OutputFile_frameBuffer(
    Imf_OutputFile_t const * this_
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

unsigned int Imf_3_0__OutputFile_writePixels(
    Imf_OutputFile_t * this_
    , int numScanLines)
{
    try {
        (to_cpp(this_)) -> writePixels(numScanLines);
        return 0;
    } catch (Iex::IoExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 4;
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

unsigned int Imf_3_0__OutputFile_currentScanLine(
    Imf_OutputFile_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> currentScanLine();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__OutputFile_copyPixels_from_file(
    Imf_OutputFile_t * this_
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
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__OutputFile_copyPixels_from_part(
    Imf_OutputFile_t * this_
    , Imf_InputPart_t * in)
{
    try {
        (to_cpp(this_)) -> copyPixels(to_cpp_ref(in));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__OutputFile_updatePreviewImage(
    Imf_OutputFile_t * this_
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

unsigned int Imf_3_0__OutputFile_breakScanLine(
    Imf_OutputFile_t * this_
    , int y
    , int offset
    , int length
    , char c)
{
    try {
        (to_cpp(this_)) -> breakScanLine(y, offset, length, c);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


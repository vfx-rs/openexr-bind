#include "imf_outputpart_private.h"

#include "imf_framebuffer_private.h"
#include "imf_header_private.h"
#include "imf_inputfile_private.h"
#include "imf_inputpart_private.h"
#include "imf_multipartoutputfile_private.h"
#include "imf_previewimage_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_sizeof()
{
        return sizeof(Imf_3_0::OutputPart);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_alignof()
{
        return alignof(Imf_3_0::OutputPart);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_ctor(
    Imf_OutputPart_t * this_
    , Imf_MultiPartOutputFile_t * multiPartFile
    , int partNumber)
{
    try {
        new (this_) Imf_3_0::OutputPart(to_cpp_ref(multiPartFile), partNumber);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_fileName(
    Imf_OutputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_header(
    Imf_OutputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_setFrameBuffer(
    Imf_OutputPart_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_frameBuffer(
    Imf_OutputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_writePixels(
    Imf_OutputPart_t * this_
    , int numScanLines)
{
    try {
        (to_cpp(this_)) -> writePixels(numScanLines);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_currentScanLine(
    Imf_OutputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_copyPixels_from_file(
    Imf_OutputPart_t * this_
    , Imf_InputFile_t * in)
{
    try {
        (to_cpp(this_)) -> copyPixels(to_cpp_ref(in));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_copyPixels_from_part(
    Imf_OutputPart_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_updatePreviewImage(
    Imf_OutputPart_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_breakScanLine(
    Imf_OutputPart_t * this_
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


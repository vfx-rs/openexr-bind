#include "imf_deepscanlineoutputpart_private.h"

#include "imf_deepframebuffer_private.h"
#include "imf_deepscanlineinputfile_private.h"
#include "imf_deepscanlineinputpart_private.h"
#include "imf_header_private.h"
#include "imf_multipartoutputfile_private.h"
#include "imf_previewimage_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_sizeof()
{
        return sizeof(Imf_3_0::DeepScanLineOutputPart);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_alignof()
{
        return alignof(Imf_3_0::DeepScanLineOutputPart);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_ctor(
    Imf_DeepScanLineOutputPart_t * this_
    , Imf_MultiPartOutputFile_t * multiPartFile
    , int partNumber)
{
    try {
        new (this_) Imf_3_0::DeepScanLineOutputPart(to_cpp_ref(multiPartFile), partNumber);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_fileName(
    Imf_DeepScanLineOutputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_header(
    Imf_DeepScanLineOutputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_setFrameBuffer(
    Imf_DeepScanLineOutputPart_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_frameBuffer(
    Imf_DeepScanLineOutputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_writePixels(
    Imf_DeepScanLineOutputPart_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_currentScanLine(
    Imf_DeepScanLineOutputPart_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_copyPixels_from_file(
    Imf_DeepScanLineOutputPart_t * this_
    , Imf_DeepScanLineInputFile_t * in)
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_copyPixels_from_part(
    Imf_DeepScanLineOutputPart_t * this_
    , Imf_DeepScanLineInputPart_t * in)
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_updatePreviewImage(
    Imf_DeepScanLineOutputPart_t * this_
    , Imf_PreviewRgba_t const * newPixels)
{
    try {
        (to_cpp(this_)) -> updatePreviewImage(to_cpp(newPixels));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (Iex::LogicExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 3;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


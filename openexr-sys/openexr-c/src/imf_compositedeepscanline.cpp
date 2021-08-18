#include "imf_compositedeepscanline_private.h"

#include "imath_box_private.h"
#include "imf_deepcompositing_private.h"
#include "imf_deepscanlineinputfile_private.h"
#include "imf_deepscanlineinputpart_private.h"
#include "imf_framebuffer_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__CompositeDeepScanLine_ctor(
    Imf_CompositeDeepScanLine_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::CompositeDeepScanLine());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__CompositeDeepScanLine_dtor(
    Imf_CompositeDeepScanLine_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__CompositeDeepScanLine_addSource_part(
    Imf_CompositeDeepScanLine_t * this_
    , Imf_DeepScanLineInputPart_t * part)
{
    try {
        (to_cpp(this_)) -> addSource(to_cpp(part));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__CompositeDeepScanLine_addSource_file(
    Imf_CompositeDeepScanLine_t * this_
    , Imf_DeepScanLineInputFile_t * file)
{
    try {
        (to_cpp(this_)) -> addSource(to_cpp(file));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__CompositeDeepScanLine_setFrameBuffer(
    Imf_CompositeDeepScanLine_t * this_
    , Imf_FrameBuffer_t const * fr)
{
    try {
        (to_cpp(this_)) -> setFrameBuffer(to_cpp_ref(fr));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__CompositeDeepScanLine_frameBuffer(
    Imf_CompositeDeepScanLine_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__CompositeDeepScanLine_readPixels(
    Imf_CompositeDeepScanLine_t * this_
    , int start
    , int end)
{
    try {
        (to_cpp(this_)) -> readPixels(start, end);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__CompositeDeepScanLine_sources(
    Imf_CompositeDeepScanLine_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> sources();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__CompositeDeepScanLine_dataWindow(
    Imf_CompositeDeepScanLine_t const * this_
    , Imath_Box2i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> dataWindow());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__CompositeDeepScanLine_setCompositing(
    Imf_CompositeDeepScanLine_t * this_
    , Imf_DeepCompositing_t * compositing)
{
    try {
        (to_cpp(this_)) -> setCompositing(to_cpp(compositing));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


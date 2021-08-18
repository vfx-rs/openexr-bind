#include "imf_samplecountchannel_private.h"

#include "imf_channellist_private.h"
#include "imf_deepimagelevel_private.h"
#include "imf_framebuffer_private.h"
#include "imf_imagelevel_private.h"
#include "imf_pixeltype_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_pixelType(
    Imf_SampleCountChannel_t const * this_
    , Imf_PixelType * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> pixelType());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_channel(
    Imf_SampleCountChannel_t const * this_
    , Imf_Channel_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> channel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_xSampling(
    Imf_SampleCountChannel_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> xSampling();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_ySampling(
    Imf_SampleCountChannel_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ySampling();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_pLinear(
    Imf_SampleCountChannel_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> pLinear();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_pixelsPerRow(
    Imf_SampleCountChannel_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> pixelsPerRow();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_pixelsPerColumn(
    Imf_SampleCountChannel_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> pixelsPerColumn();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_numPixels(
    Imf_SampleCountChannel_t const * this_
    , unsigned long * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numPixels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_level(
    Imf_SampleCountChannel_t * this_
    , Imf_ImageLevel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> level());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_level_1(
    Imf_SampleCountChannel_t const * this_
    , Imf_ImageLevel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> level());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_slice(
    Imf_SampleCountChannel_t const * this_
    , Imf_Slice_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> slice());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_deepLevel(
    Imf_SampleCountChannel_t * this_
    , Imf_DeepImageLevel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> deepLevel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_deepLevel_const(
    Imf_SampleCountChannel_t const * this_
    , Imf_DeepImageLevel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> deepLevel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_index(
    Imf_SampleCountChannel_t const * this_
    , unsigned int const * * return_
    , int x
    , int y)
{
    try {
        *(return_) = &((to_cpp(this_)) -> operator()(x, y));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_at(
    Imf_SampleCountChannel_t const * this_
    , unsigned int const * * return_
    , int x
    , int y)
{
    try {
        *(return_) = &((to_cpp(this_)) -> at(x, y));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_row(
    Imf_SampleCountChannel_t const * this_
    , unsigned int const * * return_
    , int r)
{
    try {
        *(return_) = (to_cpp(this_)) -> row(r);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_set(
    Imf_SampleCountChannel_t * this_
    , int x
    , int y
    , unsigned int newNumSamples)
{
    try {
        (to_cpp(this_)) -> set(x, y, newNumSamples);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_set_row(
    Imf_SampleCountChannel_t * this_
    , int r
    , unsigned int * newNumSamples)
{
    try {
        (to_cpp(this_)) -> set(r, newNumSamples);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_clear(
    Imf_SampleCountChannel_t * this_)
{
    try {
        (to_cpp(this_)) -> clear();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_beginEdit(
    Imf_SampleCountChannel_t * this_
    , unsigned int * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> beginEdit();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_endEdit(
    Imf_SampleCountChannel_t * this_)
{
    try {
        (to_cpp(this_)) -> endEdit();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_numSamples(
    Imf_SampleCountChannel_t const * this_
    , unsigned int const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numSamples();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_sampleListSizes(
    Imf_SampleCountChannel_t const * this_
    , unsigned int const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> sampleListSizes();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_sampleListPositions(
    Imf_SampleCountChannel_t const * this_
    , unsigned long const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> sampleListPositions();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel_sampleBufferSize(
    Imf_SampleCountChannel_t const * this_
    , unsigned long * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> sampleBufferSize();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel__Edit_ctor(
    Imf_SampleCountChannel_Edit_t * * this_
    , Imf_SampleCountChannel_t * level)
{
    try {
        to_c(this_, new Imf_3_0::SampleCountChannel::Edit(to_cpp_ref(level)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel__Edit_dtor(
    Imf_SampleCountChannel_Edit_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__SampleCountChannel__Edit_sampleCounts(
    Imf_SampleCountChannel_Edit_t const * this_
    , unsigned int * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> sampleCounts();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


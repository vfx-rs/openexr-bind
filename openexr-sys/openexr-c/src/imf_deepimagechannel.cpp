#include "imf_deepimagechannel_private.h"

#include "c-half_private.h"
#include "imf_channellist_private.h"
#include "imf_deepframebuffer_private.h"
#include "imf_deepimagelevel_private.h"
#include "imf_imagelevel_private.h"
#include "imf_pixeltype_private.h"
#include "imf_samplecountchannel_private.h"

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_pixelType(
    Imf_DeepImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_channel(
    Imf_DeepImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_xSampling(
    Imf_DeepImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_ySampling(
    Imf_DeepImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_pLinear(
    Imf_DeepImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_pixelsPerRow(
    Imf_DeepImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_pixelsPerColumn(
    Imf_DeepImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_numPixels(
    Imf_DeepImageChannel_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numPixels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_level(
    Imf_DeepImageChannel_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_level_const(
    Imf_DeepImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_slice(
    Imf_DeepImageChannel_t const * this_
    , Imf_DeepSlice_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> slice());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_deepLevel(
    Imf_DeepImageChannel_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_deepLevel_const(
    Imf_DeepImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_sampleCounts(
    Imf_DeepImageChannel_t * this_
    , Imf_SampleCountChannel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> sampleCounts());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImageChannel_sampleCounts_1(
    Imf_DeepImageChannel_t const * this_
    , Imf_SampleCountChannel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> sampleCounts());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__pixelType(
    Imf_DeepHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__channel(
    Imf_DeepHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__xSampling(
    Imf_DeepHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__ySampling(
    Imf_DeepHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__pLinear(
    Imf_DeepHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__pixelsPerRow(
    Imf_DeepHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__pixelsPerColumn(
    Imf_DeepHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__numPixels(
    Imf_DeepHalfChannel_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numPixels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__level(
    Imf_DeepHalfChannel_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__level_const(
    Imf_DeepHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__slice(
    Imf_DeepHalfChannel_t const * this_
    , Imf_DeepSlice_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> slice());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__deepLevel(
    Imf_DeepHalfChannel_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__deepLevel_const(
    Imf_DeepHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__sampleCounts(
    Imf_DeepHalfChannel_t * this_
    , Imf_SampleCountChannel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> sampleCounts());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__sampleCounts_1(
    Imf_DeepHalfChannel_t const * this_
    , Imf_SampleCountChannel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> sampleCounts());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__index(
    Imf_DeepHalfChannel_t * this_
    , Imath_half_t * * return_
    , int x
    , int y)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator()(x, y));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__index_const(
    Imf_DeepHalfChannel_t const * this_
    , Imath_half_t const * * return_
    , int x
    , int y)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator()(x, y));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__at(
    Imf_DeepHalfChannel_t * this_
    , Imath_half_t * * return_
    , int x
    , int y)
{
    try {
        to_c(return_, (to_cpp(this_)) -> at(x, y));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_half__at_const(
    Imf_DeepHalfChannel_t const * this_
    , Imath_half_t const * * return_
    , int x
    , int y)
{
    try {
        to_c(return_, (to_cpp(this_)) -> at(x, y));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__pixelType(
    Imf_DeepFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__channel(
    Imf_DeepFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__xSampling(
    Imf_DeepFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__ySampling(
    Imf_DeepFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__pLinear(
    Imf_DeepFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__pixelsPerRow(
    Imf_DeepFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__pixelsPerColumn(
    Imf_DeepFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__numPixels(
    Imf_DeepFloatChannel_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numPixels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__level(
    Imf_DeepFloatChannel_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__level_const(
    Imf_DeepFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__slice(
    Imf_DeepFloatChannel_t const * this_
    , Imf_DeepSlice_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> slice());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__deepLevel(
    Imf_DeepFloatChannel_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__deepLevel_const(
    Imf_DeepFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__sampleCounts(
    Imf_DeepFloatChannel_t * this_
    , Imf_SampleCountChannel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> sampleCounts());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__sampleCounts_1(
    Imf_DeepFloatChannel_t const * this_
    , Imf_SampleCountChannel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> sampleCounts());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__index(
    Imf_DeepFloatChannel_t * this_
    , float * * return_
    , int x
    , int y)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(x, y);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__index_const(
    Imf_DeepFloatChannel_t const * this_
    , float const * * return_
    , int x
    , int y)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(x, y);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__at(
    Imf_DeepFloatChannel_t * this_
    , float * * return_
    , int x
    , int y)
{
    try {
        *(return_) = (to_cpp(this_)) -> at(x, y);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_float__at_const(
    Imf_DeepFloatChannel_t const * this_
    , float const * * return_
    , int x
    , int y)
{
    try {
        *(return_) = (to_cpp(this_)) -> at(x, y);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__pixelType(
    Imf_DeepUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__channel(
    Imf_DeepUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__xSampling(
    Imf_DeepUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__ySampling(
    Imf_DeepUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__pLinear(
    Imf_DeepUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__pixelsPerRow(
    Imf_DeepUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__pixelsPerColumn(
    Imf_DeepUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__numPixels(
    Imf_DeepUIntChannel_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numPixels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__level(
    Imf_DeepUIntChannel_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__level_const(
    Imf_DeepUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__slice(
    Imf_DeepUIntChannel_t const * this_
    , Imf_DeepSlice_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> slice());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__deepLevel(
    Imf_DeepUIntChannel_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__deepLevel_const(
    Imf_DeepUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__sampleCounts(
    Imf_DeepUIntChannel_t * this_
    , Imf_SampleCountChannel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> sampleCounts());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__sampleCounts_1(
    Imf_DeepUIntChannel_t const * this_
    , Imf_SampleCountChannel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> sampleCounts());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__index(
    Imf_DeepUIntChannel_t * this_
    , unsigned int * * return_
    , int x
    , int y)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(x, y);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__index_const(
    Imf_DeepUIntChannel_t const * this_
    , unsigned int const * * return_
    , int x
    , int y)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(x, y);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__at(
    Imf_DeepUIntChannel_t * this_
    , unsigned int * * return_
    , int x
    , int y)
{
    try {
        *(return_) = (to_cpp(this_)) -> at(x, y);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedDeepImageChannel_unsignedint__at_const(
    Imf_DeepUIntChannel_t const * this_
    , unsigned int const * * return_
    , int x
    , int y)
{
    try {
        *(return_) = (to_cpp(this_)) -> at(x, y);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


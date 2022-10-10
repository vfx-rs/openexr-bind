#include "imf_flatimagechannel_private.h"

#include "c-half_private.h"
#include "imf_channellist_private.h"
#include "imf_flatimagelevel_private.h"
#include "imf_framebuffer_private.h"
#include "imf_imagelevel_private.h"
#include "imf_pixeltype_private.h"

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_pixelType(
    Imf_FlatImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_channel(
    Imf_FlatImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_xSampling(
    Imf_FlatImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_ySampling(
    Imf_FlatImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_pLinear(
    Imf_FlatImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_pixelsPerRow(
    Imf_FlatImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_pixelsPerColumn(
    Imf_FlatImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_numPixels(
    Imf_FlatImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_level(
    Imf_FlatImageChannel_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_level_1(
    Imf_FlatImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_slice(
    Imf_FlatImageChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_flatLevel(
    Imf_FlatImageChannel_t * this_
    , Imf_FlatImageLevel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> flatLevel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImageChannel_flatLevel_1(
    Imf_FlatImageChannel_t const * this_
    , Imf_FlatImageLevel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> flatLevel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__pixelType(
    Imf_FlatHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__channel(
    Imf_FlatHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__xSampling(
    Imf_FlatHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__ySampling(
    Imf_FlatHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__pLinear(
    Imf_FlatHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__pixelsPerRow(
    Imf_FlatHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__pixelsPerColumn(
    Imf_FlatHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__numPixels(
    Imf_FlatHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__slice(
    Imf_FlatHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__flatLevel(
    Imf_FlatHalfChannel_t * this_
    , Imf_FlatImageLevel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> flatLevel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__flatLevel_const(
    Imf_FlatHalfChannel_t const * this_
    , Imf_FlatImageLevel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> flatLevel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__index(
    Imf_FlatHalfChannel_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__index_const(
    Imf_FlatHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__at(
    Imf_FlatHalfChannel_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__at_const(
    Imf_FlatHalfChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__row(
    Imf_FlatHalfChannel_t * this_
    , Imath_half_t * * return_
    , int r)
{
    try {
        to_c(return_, (to_cpp(this_)) -> row(r));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_half__row_const(
    Imf_FlatHalfChannel_t const * this_
    , Imath_half_t const * * return_
    , int r)
{
    try {
        to_c(return_, (to_cpp(this_)) -> row(r));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__pixelType(
    Imf_FlatFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__channel(
    Imf_FlatFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__xSampling(
    Imf_FlatFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__ySampling(
    Imf_FlatFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__pLinear(
    Imf_FlatFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__pixelsPerRow(
    Imf_FlatFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__pixelsPerColumn(
    Imf_FlatFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__numPixels(
    Imf_FlatFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__slice(
    Imf_FlatFloatChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__flatLevel(
    Imf_FlatFloatChannel_t * this_
    , Imf_FlatImageLevel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> flatLevel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__flatLevel_const(
    Imf_FlatFloatChannel_t const * this_
    , Imf_FlatImageLevel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> flatLevel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__index(
    Imf_FlatFloatChannel_t * this_
    , float * * return_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__index_const(
    Imf_FlatFloatChannel_t const * this_
    , float const * * return_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__at(
    Imf_FlatFloatChannel_t * this_
    , float * * return_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__at_const(
    Imf_FlatFloatChannel_t const * this_
    , float const * * return_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__row(
    Imf_FlatFloatChannel_t * this_
    , float * * return_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_float__row_const(
    Imf_FlatFloatChannel_t const * this_
    , float const * * return_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__pixelType(
    Imf_FlatUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__channel(
    Imf_FlatUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__xSampling(
    Imf_FlatUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__ySampling(
    Imf_FlatUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__pLinear(
    Imf_FlatUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__pixelsPerRow(
    Imf_FlatUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__pixelsPerColumn(
    Imf_FlatUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__numPixels(
    Imf_FlatUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__slice(
    Imf_FlatUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__flatLevel(
    Imf_FlatUIntChannel_t * this_
    , Imf_FlatImageLevel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> flatLevel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__flatLevel_const(
    Imf_FlatUIntChannel_t const * this_
    , Imf_FlatImageLevel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> flatLevel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__index(
    Imf_FlatUIntChannel_t * this_
    , unsigned int * * return_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__index_const(
    Imf_FlatUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__at(
    Imf_FlatUIntChannel_t * this_
    , unsigned int * * return_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__at_const(
    Imf_FlatUIntChannel_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__row(
    Imf_FlatUIntChannel_t * this_
    , unsigned int * * return_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedFlatImageChannel_unsignedint__row_const(
    Imf_FlatUIntChannel_t const * this_
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


#include "imf_imagechannel_private.h"

#include "imf_channellist_private.h"
#include "imf_imagelevel_private.h"
#include "imf_pixeltype_private.h"

#include <stdexcept>

unsigned int Imf_3_0__ImageChannel_pixelType(
    Imf_ImageChannel_t const * this_
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

unsigned int Imf_3_0__ImageChannel_channel(
    Imf_ImageChannel_t const * this_
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

unsigned int Imf_3_0__ImageChannel_xSampling(
    Imf_ImageChannel_t const * this_
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

unsigned int Imf_3_0__ImageChannel_ySampling(
    Imf_ImageChannel_t const * this_
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

unsigned int Imf_3_0__ImageChannel_pLinear(
    Imf_ImageChannel_t const * this_
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

unsigned int Imf_3_0__ImageChannel_pixelsPerRow(
    Imf_ImageChannel_t const * this_
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

unsigned int Imf_3_0__ImageChannel_pixelsPerColumn(
    Imf_ImageChannel_t const * this_
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

unsigned int Imf_3_0__ImageChannel_numPixels(
    Imf_ImageChannel_t const * this_
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

unsigned int Imf_3_0__ImageChannel_level(
    Imf_ImageChannel_t * this_
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

unsigned int Imf_3_0__ImageChannel_level_const(
    Imf_ImageChannel_t const * this_
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


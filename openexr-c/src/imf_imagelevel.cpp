#include "imf_imagelevel_private.h"

#include "imath_box_private.h"
#include "imf_image_private.h"

#include <stdexcept>

unsigned int Imf_3_0__ImageLevel_image(
    Imf_ImageLevel_t * this_
    , Imf_Image_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> image());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__ImageLevel_image_const(
    Imf_ImageLevel_t const * this_
    , Imf_Image_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> image());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__ImageLevel_xLevelNumber(
    Imf_ImageLevel_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> xLevelNumber();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__ImageLevel_yLevelNumber(
    Imf_ImageLevel_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> yLevelNumber();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__ImageLevel_dataWindow(
    Imf_ImageLevel_t const * this_
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


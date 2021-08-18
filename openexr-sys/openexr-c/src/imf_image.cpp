#include "imf_image_private.h"

#include "imath_box_private.h"
#include "imf_channellist_private.h"
#include "imf_imagelevel_private.h"
#include "imf_pixeltype_private.h"
#include "imf_tiledescription_private.h"
#include "std_map_private.h"
#include "std_string_private.h"

#include <stdexcept>

unsigned int Imf_3_0__Image_dtor(
    Imf_Image_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_levelMode(
    Imf_Image_t const * this_
    , Imf_LevelMode * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> levelMode());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_levelRoundingMode(
    Imf_Image_t const * this_
    , Imf_LevelRoundingMode * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> levelRoundingMode());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_numLevels(
    Imf_Image_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numLevels();
        return 0;
    } catch (Iex::LogicExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 3;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_numXLevels(
    Imf_Image_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numXLevels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_numYLevels(
    Imf_Image_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numYLevels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_dataWindow(
    Imf_Image_t const * this_
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

unsigned int Imf_3_0__Image_dataWindowForLevel(
    Imf_Image_t const * this_
    , Imath_Box2i_t const * * return_
    , int lx
    , int ly)
{
    try {
        to_c(return_, (to_cpp(this_)) -> dataWindowForLevel(lx, ly));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_levelWidth(
    Imf_Image_t const * this_
    , int * return_
    , int lx)
{
    try {
        *(return_) = (to_cpp(this_)) -> levelWidth(lx);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_levelHeight(
    Imf_Image_t const * this_
    , int * return_
    , int ly)
{
    try {
        *(return_) = (to_cpp(this_)) -> levelHeight(ly);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_resize(
    Imf_Image_t * this_
    , Imath_Box2i_t const * dataWindow)
{
    try {
        (to_cpp(this_)) -> resize(to_cpp_ref(dataWindow));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_resize_1(
    Imf_Image_t * this_
    , Imath_Box2i_t const * dataWindow
    , Imf_LevelMode levelMode
    , Imf_LevelRoundingMode levelRoundingMode)
{
    try {
        (to_cpp(this_)) -> resize(to_cpp_ref(dataWindow), Imf_LevelMode_to_cpp_ref(&(levelMode)), Imf_LevelRoundingMode_to_cpp_ref(&(levelRoundingMode)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_shiftPixels(
    Imf_Image_t * this_
    , int dx
    , int dy)
{
    try {
        (to_cpp(this_)) -> shiftPixels(dx, dy);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_insertChannel(
    Imf_Image_t * this_
    , std_string_t const * name
    , Imf_PixelType type
    , int xSampling
    , int ySampling
    , _Bool pLinear)
{
    try {
        (to_cpp(this_)) -> insertChannel(to_cpp_ref(name), Imf_PixelType_to_cpp_ref(&(type)), xSampling, ySampling, pLinear);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_insertChannel_1(
    Imf_Image_t * this_
    , std_string_t const * name
    , Imf_Channel_t const * channel)
{
    try {
        (to_cpp(this_)) -> insertChannel(to_cpp_ref(name), to_cpp_ref(channel));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_eraseChannel(
    Imf_Image_t * this_
    , std_string_t const * name)
{
    try {
        (to_cpp(this_)) -> eraseChannel(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_clearChannels(
    Imf_Image_t * this_)
{
    try {
        (to_cpp(this_)) -> clearChannels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_renameChannel(
    Imf_Image_t * this_
    , std_string_t const * oldName
    , std_string_t const * newName)
{
    try {
        (to_cpp(this_)) -> renameChannel(to_cpp_ref(oldName), to_cpp_ref(newName));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 6;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_renameChannels(
    Imf_Image_t * this_
    , std_map_string_string_t const * oldToNewNames)
{
    try {
        (to_cpp(this_)) -> renameChannels(to_cpp_ref(oldToNewNames));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 6;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_level(
    Imf_Image_t * this_
    , Imf_ImageLevel_t * * return_
    , int lx
    , int ly)
{
    try {
        to_c(return_, (to_cpp(this_)) -> level(lx, ly));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Image_level_const(
    Imf_Image_t const * this_
    , Imf_ImageLevel_t const * * return_
    , int lx
    , int ly)
{
    try {
        to_c(return_, (to_cpp(this_)) -> level(lx, ly));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


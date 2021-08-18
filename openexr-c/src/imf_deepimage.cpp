#include "imf_deepimage_private.h"

#include "imath_box_private.h"
#include "imf_deepimagelevel_private.h"
#include "imf_pixeltype_private.h"
#include "imf_tiledescription_private.h"
#include "std_map_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

unsigned int Imf_3_0__DeepImage_levelMode(
    Imf_DeepImage_t const * this_
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

unsigned int Imf_3_0__DeepImage_levelRoundingMode(
    Imf_DeepImage_t const * this_
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

unsigned int Imf_3_0__DeepImage_numLevels(
    Imf_DeepImage_t const * this_
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

unsigned int Imf_3_0__DeepImage_numXLevels(
    Imf_DeepImage_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numXLevels();
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImage_numYLevels(
    Imf_DeepImage_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> numYLevels();
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImage_dataWindow(
    Imf_DeepImage_t const * this_
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

unsigned int Imf_3_0__DeepImage_dataWindowForLevel(
    Imf_DeepImage_t const * this_
    , Imath_Box2i_t const * * return_
    , int lx
    , int ly)
{
    try {
        to_c(return_, (to_cpp(this_)) -> dataWindowForLevel(lx, ly));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImage_levelWidth(
    Imf_DeepImage_t const * this_
    , int * return_
    , int lx)
{
    try {
        *(return_) = (to_cpp(this_)) -> levelWidth(lx);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImage_levelHeight(
    Imf_DeepImage_t const * this_
    , int * return_
    , int ly)
{
    try {
        *(return_) = (to_cpp(this_)) -> levelHeight(ly);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImage_resize(
    Imf_DeepImage_t * this_
    , Imath_Box2i_t const * dataWindow
    , Imf_LevelMode levelMode
    , Imf_LevelRoundingMode levelRoundingMode)
{
    try {
        (to_cpp(this_)) -> resize(to_cpp_ref(dataWindow), Imf_LevelMode_to_cpp_ref(&(levelMode)), Imf_LevelRoundingMode_to_cpp_ref(&(levelRoundingMode)));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImage_shiftPixels(
    Imf_DeepImage_t * this_
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

unsigned int Imf_3_0__DeepImage_insertChannel(
    Imf_DeepImage_t * this_
    , std_string_t const * name
    , Imf_PixelType type
    , int xSamplingt
    , int ySampling
    , _Bool pLinear)
{
    try {
        (to_cpp(this_)) -> insertChannel(to_cpp_ref(name), Imf_PixelType_to_cpp_ref(&(type)), xSamplingt, ySampling, pLinear);
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImage_eraseChannel(
    Imf_DeepImage_t * this_
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

unsigned int Imf_3_0__DeepImage_clearChannels(
    Imf_DeepImage_t * this_)
{
    try {
        (to_cpp(this_)) -> clearChannels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImage_renameChannel(
    Imf_DeepImage_t * this_
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

unsigned int Imf_3_0__DeepImage_renameChannels(
    Imf_DeepImage_t * this_
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

unsigned int Imf_3_0__DeepImage_default(
    Imf_DeepImage_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::DeepImage());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImage_ctor(
    Imf_DeepImage_t * * this_
    , Imath_Box2i_t const * dataWindow
    , Imf_LevelMode levelMode
    , Imf_LevelRoundingMode levelRoundingMode)
{
    try {
        to_c(this_, new Imf_3_0::DeepImage(to_cpp_ref(dataWindow), Imf_LevelMode_to_cpp_ref(&(levelMode)), Imf_LevelRoundingMode_to_cpp_ref(&(levelRoundingMode))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImage_dtor(
    Imf_DeepImage_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImage_level(
    Imf_DeepImage_t * this_
    , Imf_DeepImageLevel_t * * return_
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

unsigned int Imf_3_0__DeepImage_level_const(
    Imf_DeepImage_t const * this_
    , Imf_DeepImageLevel_t const * * return_
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


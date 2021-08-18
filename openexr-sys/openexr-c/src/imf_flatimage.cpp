#include "imf_flatimage_private.h"

#include "imath_box_private.h"
#include "imf_flatimagelevel_private.h"
#include "imf_pixeltype_private.h"
#include "imf_tiledescription_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_levelMode(
    Imf_FlatImage_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_levelRoundingMode(
    Imf_FlatImage_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_numLevels(
    Imf_FlatImage_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_numXLevels(
    Imf_FlatImage_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_numYLevels(
    Imf_FlatImage_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_dataWindow(
    Imf_FlatImage_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_dataWindowForLevel(
    Imf_FlatImage_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_levelWidth(
    Imf_FlatImage_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_levelHeight(
    Imf_FlatImage_t const * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_resize(
    Imf_FlatImage_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_shiftPixels(
    Imf_FlatImage_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_insertChannel(
    Imf_FlatImage_t * this_
    , std_string_t const * name
    , Imf_PixelType type
    , int xSampling
    , int ySampling
    , _Bool pLinear)
{
    try {
        (to_cpp(this_)) -> insertChannel(to_cpp_ref(name), Imf_PixelType_to_cpp_ref(&(type)), xSampling, ySampling, pLinear);
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_eraseChannel(
    Imf_FlatImage_t * this_
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

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_clearChannels(
    Imf_FlatImage_t * this_)
{
    try {
        (to_cpp(this_)) -> clearChannels();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_renameChannel(
    Imf_FlatImage_t * this_
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
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_default(
    Imf_FlatImage_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::FlatImage());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_ctor(
    Imf_FlatImage_t * * this_
    , Imath_Box2i_t const * dataWindow
    , Imf_LevelMode levelMode
    , Imf_LevelRoundingMode levelRoundingMode)
{
    try {
        to_c(this_, new Imf_3_0::FlatImage(to_cpp_ref(dataWindow), Imf_LevelMode_to_cpp_ref(&(levelMode)), Imf_LevelRoundingMode_to_cpp_ref(&(levelRoundingMode))));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_dtor(
    Imf_FlatImage_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_level(
    Imf_FlatImage_t * this_
    , Imf_FlatImageLevel_t * * return_
    , int lx
    , int ly)
{
    try {
        to_c(return_, (to_cpp(this_)) -> level(lx, ly));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_level_const(
    Imf_FlatImage_t const * this_
    , Imf_FlatImageLevel_t const * * return_
    , int lx
    , int ly)
{
    try {
        to_c(return_, (to_cpp(this_)) -> level(lx, ly));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


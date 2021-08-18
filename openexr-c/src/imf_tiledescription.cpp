#include "imf_tiledescription_private.h"

#include <new>

#include <stdexcept>

unsigned int Imf_3_0__TileDescription_ctor(
    Imf_TileDescription_t * this_
    , unsigned int xs
    , unsigned int ys
    , Imf_LevelMode m
    , Imf_LevelRoundingMode r)
{
    try {
        new (this_) Imf_3_0::TileDescription(xs, ys, Imf_LevelMode_to_cpp_ref(&(m)), Imf_LevelRoundingMode_to_cpp_ref(&(r)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TileDescription__eq(
    Imf_TileDescription_t const * this_
    , _Bool * return_
    , Imf_TileDescription_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


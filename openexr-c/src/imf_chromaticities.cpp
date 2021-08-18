#include "imf_chromaticities_private.h"

#include "imath_vec_private.h"
#include <new>

#include <stdexcept>

unsigned int Imf_3_0__Chromaticities_ctor(
    Imf_Chromaticities_t * this_
    , Imath_V2f_t const * red
    , Imath_V2f_t const * green
    , Imath_V2f_t const * blue
    , Imath_V2f_t const * white)
{
    try {
        new (this_) Imf_3_0::Chromaticities(to_cpp_ref(red), to_cpp_ref(green), to_cpp_ref(blue), to_cpp_ref(white));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Chromaticities__eq(
    Imf_Chromaticities_t const * this_
    , _Bool * return_
    , Imf_Chromaticities_t const * v)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Chromaticities__ne(
    Imf_Chromaticities_t const * this_
    , _Bool * return_
    , Imf_Chromaticities_t const * v)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Chromaticities_copy(
    Imf_Chromaticities_t * this_
    , Imf_Chromaticities_t const * rhs)
{
    try {
        new (this_) Imf_3_0::Chromaticities(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Chromaticities_move(
    Imf_Chromaticities_t * this_
    , Imf_Chromaticities_t * rhs)
{
    try {
        new (this_) Imf_3_0::Chromaticities(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Chromaticities_dtor(
    Imf_Chromaticities_t * this_)
{
    try {
        (to_cpp(this_)) -> Imf_3_0::Chromaticities::~Chromaticities();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


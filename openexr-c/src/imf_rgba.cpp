#include "imf_rgba_private.h"

#include "c-half_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__Rgba_ctor(
    Imf_Rgba_t * this_)
{
    try {
        new (this_) Imf_3_0::Rgba();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Rgba_ctor_1(
    Imf_Rgba_t * this_
    , Imath_half_t r
    , Imath_half_t g
    , Imath_half_t b
    , Imath_half_t a)
{
    try {
        new (this_) Imf_3_0::Rgba(to_cpp_ref(&(r)), to_cpp_ref(&(g)), to_cpp_ref(&(b)), to_cpp_ref(&(a)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Rgba_copy(
    Imf_Rgba_t * this_
    , Imf_Rgba_t const * rhs)
{
    try {
        new (this_) Imf_3_0::Rgba(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Rgba_move(
    Imf_Rgba_t * this_
    , Imf_Rgba_t * rhs)
{
    try {
        new (this_) Imf_3_0::Rgba(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Rgba_dtor(
    Imf_Rgba_t * this_)
{
    try {
        (to_cpp(this_)) -> Imf_3_0::Rgba::~Rgba();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


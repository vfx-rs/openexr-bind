#pragma once
#include <imf_rational.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfRational.h>
#include <cstring>

inline Imf_3_0::Rational const & to_cpp_ref(
    Imf_Rational_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Rational const * >(rhs));
}

inline Imf_3_0::Rational & to_cpp_ref(
    Imf_Rational_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Rational * >(rhs));
}

inline Imf_3_0::Rational const * to_cpp(
    Imf_Rational_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Rational const * >(rhs);
}

inline Imf_3_0::Rational * to_cpp(
    Imf_Rational_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Rational * >(rhs);
}

inline void to_c(
    Imf_Rational_t const * * lhs
    , Imf_3_0::Rational const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Rational_t const * >(&(rhs));
}

inline void to_c(
    Imf_Rational_t const * * lhs
    , Imf_3_0::Rational const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Rational_t const * >(rhs);
}

inline void to_c(
    Imf_Rational_t * * lhs
    , Imf_3_0::Rational & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Rational_t * >(&(rhs));
}

inline void to_c(
    Imf_Rational_t * * lhs
    , Imf_3_0::Rational * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Rational_t * >(rhs);
}

inline void to_c_copy(
    Imf_Rational_t * lhs
    , Imf_3_0::Rational const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


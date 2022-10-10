#pragma once
#include <imf_lut.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfLut.h>
#include <cstring>

inline Imf_3_0::HalfLut const & to_cpp_ref(
    Imf_HalfLut_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::HalfLut const * >(rhs));
}

inline Imf_3_0::HalfLut & to_cpp_ref(
    Imf_HalfLut_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::HalfLut * >(rhs));
}

inline Imf_3_0::HalfLut const * to_cpp(
    Imf_HalfLut_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::HalfLut const * >(rhs);
}

inline Imf_3_0::HalfLut * to_cpp(
    Imf_HalfLut_t * rhs)
{
        return reinterpret_cast<Imf_3_0::HalfLut * >(rhs);
}

inline void to_c(
    Imf_HalfLut_t const * * lhs
    , Imf_3_0::HalfLut const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_HalfLut_t const * >(&(rhs));
}

inline void to_c(
    Imf_HalfLut_t const * * lhs
    , Imf_3_0::HalfLut const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_HalfLut_t const * >(rhs);
}

inline void to_c(
    Imf_HalfLut_t * * lhs
    , Imf_3_0::HalfLut & rhs)
{
        *(lhs) = reinterpret_cast<Imf_HalfLut_t * >(&(rhs));
}

inline void to_c(
    Imf_HalfLut_t * * lhs
    , Imf_3_0::HalfLut * rhs)
{
        *(lhs) = reinterpret_cast<Imf_HalfLut_t * >(rhs);
}

inline Imf_3_0::RgbaLut const & to_cpp_ref(
    Imf_RgbaLut_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::RgbaLut const * >(rhs));
}

inline Imf_3_0::RgbaLut & to_cpp_ref(
    Imf_RgbaLut_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::RgbaLut * >(rhs));
}

inline Imf_3_0::RgbaLut const * to_cpp(
    Imf_RgbaLut_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::RgbaLut const * >(rhs);
}

inline Imf_3_0::RgbaLut * to_cpp(
    Imf_RgbaLut_t * rhs)
{
        return reinterpret_cast<Imf_3_0::RgbaLut * >(rhs);
}

inline void to_c(
    Imf_RgbaLut_t const * * lhs
    , Imf_3_0::RgbaLut const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaLut_t const * >(&(rhs));
}

inline void to_c(
    Imf_RgbaLut_t const * * lhs
    , Imf_3_0::RgbaLut const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaLut_t const * >(rhs);
}

inline void to_c(
    Imf_RgbaLut_t * * lhs
    , Imf_3_0::RgbaLut & rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaLut_t * >(&(rhs));
}

inline void to_c(
    Imf_RgbaLut_t * * lhs
    , Imf_3_0::RgbaLut * rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaLut_t * >(rhs);
}


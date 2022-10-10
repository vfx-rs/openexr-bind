#pragma once
#include <imf_rgba.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfRgba.h>
#include <cstring>

inline Imf_3_0::RgbaChannels const & Imf_RgbaChannels_to_cpp_ref(
    Imf_RgbaChannels const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::RgbaChannels const * >(rhs));
}

inline Imf_3_0::RgbaChannels & Imf_RgbaChannels_to_cpp_ref(
    Imf_RgbaChannels * rhs)
{
        return *(reinterpret_cast<Imf_3_0::RgbaChannels * >(rhs));
}

inline Imf_3_0::RgbaChannels const * Imf_RgbaChannels_to_cpp(
    Imf_RgbaChannels const * rhs)
{
        return reinterpret_cast<Imf_3_0::RgbaChannels const * >(rhs);
}

inline Imf_3_0::RgbaChannels * Imf_RgbaChannels_to_cpp(
    Imf_RgbaChannels * rhs)
{
        return reinterpret_cast<Imf_3_0::RgbaChannels * >(rhs);
}

inline void to_c(
    Imf_RgbaChannels const * * lhs
    , Imf_3_0::RgbaChannels const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaChannels const * >(&(rhs));
}

inline void to_c(
    Imf_RgbaChannels const * * lhs
    , Imf_3_0::RgbaChannels const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaChannels const * >(rhs);
}

inline void to_c(
    Imf_RgbaChannels * * lhs
    , Imf_3_0::RgbaChannels & rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaChannels * >(&(rhs));
}

inline void to_c(
    Imf_RgbaChannels * * lhs
    , Imf_3_0::RgbaChannels * rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaChannels * >(rhs);
}

inline void to_c_copy(
    Imf_RgbaChannels * lhs
    , Imf_3_0::RgbaChannels const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imf_3_0::Rgba const & to_cpp_ref(
    Imf_Rgba_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Rgba const * >(rhs));
}

inline Imf_3_0::Rgba & to_cpp_ref(
    Imf_Rgba_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Rgba * >(rhs));
}

inline Imf_3_0::Rgba const * to_cpp(
    Imf_Rgba_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Rgba const * >(rhs);
}

inline Imf_3_0::Rgba * to_cpp(
    Imf_Rgba_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Rgba * >(rhs);
}

inline void to_c(
    Imf_Rgba_t const * * lhs
    , Imf_3_0::Rgba const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Rgba_t const * >(&(rhs));
}

inline void to_c(
    Imf_Rgba_t const * * lhs
    , Imf_3_0::Rgba const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Rgba_t const * >(rhs);
}

inline void to_c(
    Imf_Rgba_t * * lhs
    , Imf_3_0::Rgba & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Rgba_t * >(&(rhs));
}

inline void to_c(
    Imf_Rgba_t * * lhs
    , Imf_3_0::Rgba * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Rgba_t * >(rhs);
}

inline void to_c_copy(
    Imf_Rgba_t * lhs
    , Imf_3_0::Rgba const & rhs)
{
        Imf_3_0__Rgba_copy(lhs, reinterpret_cast<Imf_Rgba_t const * >(&(rhs)));
}


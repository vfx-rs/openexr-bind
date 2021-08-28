#pragma once
#include <imf_pixeltype.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfPixelType.h>
#include <cstring>

inline Imf_3_0::PixelType const & Imf_PixelType_to_cpp_ref(
    Imf_PixelType const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::PixelType const * >(rhs));
}

inline Imf_3_0::PixelType & Imf_PixelType_to_cpp_ref(
    Imf_PixelType * rhs)
{
        return *(reinterpret_cast<Imf_3_0::PixelType * >(rhs));
}

inline Imf_3_0::PixelType const * Imf_PixelType_to_cpp(
    Imf_PixelType const * rhs)
{
        return reinterpret_cast<Imf_3_0::PixelType const * >(rhs);
}

inline Imf_3_0::PixelType * Imf_PixelType_to_cpp(
    Imf_PixelType * rhs)
{
        return reinterpret_cast<Imf_3_0::PixelType * >(rhs);
}

inline void to_c(
    Imf_PixelType const * * lhs
    , Imf_3_0::PixelType const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_PixelType const * >(&(rhs));
}

inline void to_c(
    Imf_PixelType const * * lhs
    , Imf_3_0::PixelType const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_PixelType const * >(rhs);
}

inline void to_c(
    Imf_PixelType * * lhs
    , Imf_3_0::PixelType & rhs)
{
        *(lhs) = reinterpret_cast<Imf_PixelType * >(&(rhs));
}

inline void to_c(
    Imf_PixelType * * lhs
    , Imf_3_0::PixelType * rhs)
{
        *(lhs) = reinterpret_cast<Imf_PixelType * >(rhs);
}

inline void to_c_copy(
    Imf_PixelType * lhs
    , Imf_3_0::PixelType const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


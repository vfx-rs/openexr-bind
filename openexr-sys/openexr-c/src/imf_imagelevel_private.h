#pragma once
#include <imf_imagelevel.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfImageLevel.h>
#include <cstring>

inline Imf_3_0::ImageLevel const & to_cpp_ref(
    Imf_ImageLevel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::ImageLevel const * >(rhs));
}

inline Imf_3_0::ImageLevel & to_cpp_ref(
    Imf_ImageLevel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::ImageLevel * >(rhs));
}

inline Imf_3_0::ImageLevel const * to_cpp(
    Imf_ImageLevel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::ImageLevel const * >(rhs);
}

inline Imf_3_0::ImageLevel * to_cpp(
    Imf_ImageLevel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::ImageLevel * >(rhs);
}

inline void to_c(
    Imf_ImageLevel_t const * * lhs
    , Imf_3_0::ImageLevel const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ImageLevel_t const * >(&(rhs));
}

inline void to_c(
    Imf_ImageLevel_t const * * lhs
    , Imf_3_0::ImageLevel const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ImageLevel_t const * >(rhs);
}

inline void to_c(
    Imf_ImageLevel_t * * lhs
    , Imf_3_0::ImageLevel & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ImageLevel_t * >(&(rhs));
}

inline void to_c(
    Imf_ImageLevel_t * * lhs
    , Imf_3_0::ImageLevel * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ImageLevel_t * >(rhs);
}


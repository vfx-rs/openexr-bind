#pragma once
#include <imf_imagechannel.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfImageChannel.h>
#include <cstring>

inline Imf_3_0::ImageChannel const & to_cpp_ref(
    Imf_ImageChannel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::ImageChannel const * >(rhs));
}

inline Imf_3_0::ImageChannel & to_cpp_ref(
    Imf_ImageChannel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::ImageChannel * >(rhs));
}

inline Imf_3_0::ImageChannel const * to_cpp(
    Imf_ImageChannel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::ImageChannel const * >(rhs);
}

inline Imf_3_0::ImageChannel * to_cpp(
    Imf_ImageChannel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::ImageChannel * >(rhs);
}

inline void to_c(
    Imf_ImageChannel_t const * * lhs
    , Imf_3_0::ImageChannel const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ImageChannel_t const * >(&(rhs));
}

inline void to_c(
    Imf_ImageChannel_t const * * lhs
    , Imf_3_0::ImageChannel const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ImageChannel_t const * >(rhs);
}

inline void to_c(
    Imf_ImageChannel_t * * lhs
    , Imf_3_0::ImageChannel & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ImageChannel_t * >(&(rhs));
}

inline void to_c(
    Imf_ImageChannel_t * * lhs
    , Imf_3_0::ImageChannel * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ImageChannel_t * >(rhs);
}


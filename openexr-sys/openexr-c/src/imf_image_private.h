#pragma once
#include <imf_image.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfImage.h>
#include <cstring>

inline Imf_3_0::Image const & to_cpp_ref(
    Imf_Image_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Image const * >(rhs));
}

inline Imf_3_0::Image & to_cpp_ref(
    Imf_Image_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Image * >(rhs));
}

inline Imf_3_0::Image const * to_cpp(
    Imf_Image_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Image const * >(rhs);
}

inline Imf_3_0::Image * to_cpp(
    Imf_Image_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Image * >(rhs);
}

inline void to_c(
    Imf_Image_t const * * lhs
    , Imf_3_0::Image const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Image_t const * >(&(rhs));
}

inline void to_c(
    Imf_Image_t const * * lhs
    , Imf_3_0::Image const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Image_t const * >(rhs);
}

inline void to_c(
    Imf_Image_t * * lhs
    , Imf_3_0::Image & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Image_t * >(&(rhs));
}

inline void to_c(
    Imf_Image_t * * lhs
    , Imf_3_0::Image * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Image_t * >(rhs);
}


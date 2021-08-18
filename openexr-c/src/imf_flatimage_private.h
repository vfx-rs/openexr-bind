#pragma once
#include <imf_flatimage.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfFlatImage.h>
#include <cstring>

inline Imf_3_0::FlatImage const & to_cpp_ref(
    Imf_FlatImage_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FlatImage const * >(rhs));
}

inline Imf_3_0::FlatImage & to_cpp_ref(
    Imf_FlatImage_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FlatImage * >(rhs));
}

inline Imf_3_0::FlatImage const * to_cpp(
    Imf_FlatImage_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::FlatImage const * >(rhs);
}

inline Imf_3_0::FlatImage * to_cpp(
    Imf_FlatImage_t * rhs)
{
        return reinterpret_cast<Imf_3_0::FlatImage * >(rhs);
}

inline void to_c(
    Imf_FlatImage_t const * * lhs
    , Imf_3_0::FlatImage const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImage_t const * >(&(rhs));
}

inline void to_c(
    Imf_FlatImage_t const * * lhs
    , Imf_3_0::FlatImage const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImage_t const * >(rhs);
}

inline void to_c(
    Imf_FlatImage_t * * lhs
    , Imf_3_0::FlatImage & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImage_t * >(&(rhs));
}

inline void to_c(
    Imf_FlatImage_t * * lhs
    , Imf_3_0::FlatImage * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImage_t * >(rhs);
}


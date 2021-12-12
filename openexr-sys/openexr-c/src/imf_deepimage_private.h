#pragma once
#include <imf_deepimage.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepImage.h>
#include <cstring>

inline Imf_3_0::DeepImage const & to_cpp_ref(
    Imf_DeepImage_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepImage const * >(rhs));
}

inline Imf_3_0::DeepImage & to_cpp_ref(
    Imf_DeepImage_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepImage * >(rhs));
}

inline Imf_3_0::DeepImage const * to_cpp(
    Imf_DeepImage_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepImage const * >(rhs);
}

inline Imf_3_0::DeepImage * to_cpp(
    Imf_DeepImage_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepImage * >(rhs);
}

inline void to_c(
    Imf_DeepImage_t const * * lhs
    , Imf_3_0::DeepImage const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImage_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepImage_t const * * lhs
    , Imf_3_0::DeepImage const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImage_t const * >(rhs);
}

inline void to_c(
    Imf_DeepImage_t * * lhs
    , Imf_3_0::DeepImage & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImage_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepImage_t * * lhs
    , Imf_3_0::DeepImage * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImage_t * >(rhs);
}


#pragma once
#include <imf_deepcompositing.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepCompositing.h>
#include <cstring>

inline Imf_3_0::DeepCompositing const & to_cpp_ref(
    Imf_DeepCompositing_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepCompositing const * >(rhs));
}

inline Imf_3_0::DeepCompositing & to_cpp_ref(
    Imf_DeepCompositing_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepCompositing * >(rhs));
}

inline Imf_3_0::DeepCompositing const * to_cpp(
    Imf_DeepCompositing_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepCompositing const * >(rhs);
}

inline Imf_3_0::DeepCompositing * to_cpp(
    Imf_DeepCompositing_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepCompositing * >(rhs);
}

inline void to_c(
    Imf_DeepCompositing_t const * * lhs
    , Imf_3_0::DeepCompositing const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepCompositing_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepCompositing_t const * * lhs
    , Imf_3_0::DeepCompositing const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepCompositing_t const * >(rhs);
}

inline void to_c(
    Imf_DeepCompositing_t * * lhs
    , Imf_3_0::DeepCompositing & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepCompositing_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepCompositing_t * * lhs
    , Imf_3_0::DeepCompositing * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepCompositing_t * >(rhs);
}


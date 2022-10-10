#pragma once
#include <imf_deeptiledoutputpart.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepTiledOutputPart.h>
#include <cstring>

inline Imf_3_0::DeepTiledOutputPart const & to_cpp_ref(
    Imf_DeepTiledOutputPart_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepTiledOutputPart const * >(rhs));
}

inline Imf_3_0::DeepTiledOutputPart & to_cpp_ref(
    Imf_DeepTiledOutputPart_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepTiledOutputPart * >(rhs));
}

inline Imf_3_0::DeepTiledOutputPart const * to_cpp(
    Imf_DeepTiledOutputPart_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepTiledOutputPart const * >(rhs);
}

inline Imf_3_0::DeepTiledOutputPart * to_cpp(
    Imf_DeepTiledOutputPart_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepTiledOutputPart * >(rhs);
}

inline void to_c(
    Imf_DeepTiledOutputPart_t const * * lhs
    , Imf_3_0::DeepTiledOutputPart const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledOutputPart_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepTiledOutputPart_t const * * lhs
    , Imf_3_0::DeepTiledOutputPart const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledOutputPart_t const * >(rhs);
}

inline void to_c(
    Imf_DeepTiledOutputPart_t * * lhs
    , Imf_3_0::DeepTiledOutputPart & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledOutputPart_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepTiledOutputPart_t * * lhs
    , Imf_3_0::DeepTiledOutputPart * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledOutputPart_t * >(rhs);
}

inline void to_c_copy(
    Imf_DeepTiledOutputPart_t * lhs
    , Imf_3_0::DeepTiledOutputPart const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


#pragma once
#include <imf_deeptiledinputpart.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepTiledInputPart.h>
#include <cstring>

inline Imf_3_0::DeepTiledInputPart const & to_cpp_ref(
    Imf_DeepTiledInputPart_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepTiledInputPart const * >(rhs));
}

inline Imf_3_0::DeepTiledInputPart & to_cpp_ref(
    Imf_DeepTiledInputPart_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepTiledInputPart * >(rhs));
}

inline Imf_3_0::DeepTiledInputPart const * to_cpp(
    Imf_DeepTiledInputPart_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepTiledInputPart const * >(rhs);
}

inline Imf_3_0::DeepTiledInputPart * to_cpp(
    Imf_DeepTiledInputPart_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepTiledInputPart * >(rhs);
}

inline void to_c(
    Imf_DeepTiledInputPart_t const * * lhs
    , Imf_3_0::DeepTiledInputPart const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledInputPart_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepTiledInputPart_t const * * lhs
    , Imf_3_0::DeepTiledInputPart const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledInputPart_t const * >(rhs);
}

inline void to_c(
    Imf_DeepTiledInputPart_t * * lhs
    , Imf_3_0::DeepTiledInputPart & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledInputPart_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepTiledInputPart_t * * lhs
    , Imf_3_0::DeepTiledInputPart * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledInputPart_t * >(rhs);
}

inline void to_c_copy(
    Imf_DeepTiledInputPart_t * lhs
    , Imf_3_0::DeepTiledInputPart const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


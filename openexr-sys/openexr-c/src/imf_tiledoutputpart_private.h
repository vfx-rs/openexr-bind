#pragma once
#include <imf_tiledoutputpart.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfTiledOutputPart.h>
#include <cstring>

inline Imf_3_0::TiledOutputPart const & to_cpp_ref(
    Imf_TiledOutputPart_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TiledOutputPart const * >(rhs));
}

inline Imf_3_0::TiledOutputPart & to_cpp_ref(
    Imf_TiledOutputPart_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TiledOutputPart * >(rhs));
}

inline Imf_3_0::TiledOutputPart const * to_cpp(
    Imf_TiledOutputPart_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TiledOutputPart const * >(rhs);
}

inline Imf_3_0::TiledOutputPart * to_cpp(
    Imf_TiledOutputPart_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TiledOutputPart * >(rhs);
}

inline void to_c(
    Imf_TiledOutputPart_t const * * lhs
    , Imf_3_0::TiledOutputPart const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledOutputPart_t const * >(&(rhs));
}

inline void to_c(
    Imf_TiledOutputPart_t const * * lhs
    , Imf_3_0::TiledOutputPart const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledOutputPart_t const * >(rhs);
}

inline void to_c(
    Imf_TiledOutputPart_t * * lhs
    , Imf_3_0::TiledOutputPart & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledOutputPart_t * >(&(rhs));
}

inline void to_c(
    Imf_TiledOutputPart_t * * lhs
    , Imf_3_0::TiledOutputPart * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledOutputPart_t * >(rhs);
}

inline void to_c_copy(
    Imf_TiledOutputPart_t * lhs
    , Imf_3_0::TiledOutputPart const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


#pragma once
#include <imf_tiledinputpart.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfTiledInputPart.h>
#include <cstring>

inline Imf_3_0::TiledInputPart const & to_cpp_ref(
    Imf_TiledInputPart_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TiledInputPart const * >(rhs));
}

inline Imf_3_0::TiledInputPart & to_cpp_ref(
    Imf_TiledInputPart_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TiledInputPart * >(rhs));
}

inline Imf_3_0::TiledInputPart const * to_cpp(
    Imf_TiledInputPart_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TiledInputPart const * >(rhs);
}

inline Imf_3_0::TiledInputPart * to_cpp(
    Imf_TiledInputPart_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TiledInputPart * >(rhs);
}

inline void to_c(
    Imf_TiledInputPart_t const * * lhs
    , Imf_3_0::TiledInputPart const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledInputPart_t const * >(&(rhs));
}

inline void to_c(
    Imf_TiledInputPart_t const * * lhs
    , Imf_3_0::TiledInputPart const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledInputPart_t const * >(rhs);
}

inline void to_c(
    Imf_TiledInputPart_t * * lhs
    , Imf_3_0::TiledInputPart & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledInputPart_t * >(&(rhs));
}

inline void to_c(
    Imf_TiledInputPart_t * * lhs
    , Imf_3_0::TiledInputPart * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledInputPart_t * >(rhs);
}

inline void to_c_copy(
    Imf_TiledInputPart_t * lhs
    , Imf_3_0::TiledInputPart const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


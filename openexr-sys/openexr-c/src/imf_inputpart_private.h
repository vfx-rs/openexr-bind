#pragma once
#include <imf_inputpart.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfInputPart.h>
#include <cstring>

inline Imf_3_0::InputPart const & to_cpp_ref(
    Imf_InputPart_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::InputPart const * >(rhs));
}

inline Imf_3_0::InputPart & to_cpp_ref(
    Imf_InputPart_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::InputPart * >(rhs));
}

inline Imf_3_0::InputPart const * to_cpp(
    Imf_InputPart_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::InputPart const * >(rhs);
}

inline Imf_3_0::InputPart * to_cpp(
    Imf_InputPart_t * rhs)
{
        return reinterpret_cast<Imf_3_0::InputPart * >(rhs);
}

inline void to_c(
    Imf_InputPart_t const * * lhs
    , Imf_3_0::InputPart const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_InputPart_t const * >(&(rhs));
}

inline void to_c(
    Imf_InputPart_t const * * lhs
    , Imf_3_0::InputPart const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_InputPart_t const * >(rhs);
}

inline void to_c(
    Imf_InputPart_t * * lhs
    , Imf_3_0::InputPart & rhs)
{
        *(lhs) = reinterpret_cast<Imf_InputPart_t * >(&(rhs));
}

inline void to_c(
    Imf_InputPart_t * * lhs
    , Imf_3_0::InputPart * rhs)
{
        *(lhs) = reinterpret_cast<Imf_InputPart_t * >(rhs);
}

inline void to_c_copy(
    Imf_InputPart_t * lhs
    , Imf_3_0::InputPart const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


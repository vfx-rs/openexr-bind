#pragma once
#include <imf_outputpart.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfOutputPart.h>
#include <cstring>

inline Imf_3_0::OutputPart const & to_cpp_ref(
    Imf_OutputPart_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::OutputPart const * >(rhs));
}

inline Imf_3_0::OutputPart & to_cpp_ref(
    Imf_OutputPart_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::OutputPart * >(rhs));
}

inline Imf_3_0::OutputPart const * to_cpp(
    Imf_OutputPart_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::OutputPart const * >(rhs);
}

inline Imf_3_0::OutputPart * to_cpp(
    Imf_OutputPart_t * rhs)
{
        return reinterpret_cast<Imf_3_0::OutputPart * >(rhs);
}

inline void to_c(
    Imf_OutputPart_t const * * lhs
    , Imf_3_0::OutputPart const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_OutputPart_t const * >(&(rhs));
}

inline void to_c(
    Imf_OutputPart_t const * * lhs
    , Imf_3_0::OutputPart const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_OutputPart_t const * >(rhs);
}

inline void to_c(
    Imf_OutputPart_t * * lhs
    , Imf_3_0::OutputPart & rhs)
{
        *(lhs) = reinterpret_cast<Imf_OutputPart_t * >(&(rhs));
}

inline void to_c(
    Imf_OutputPart_t * * lhs
    , Imf_3_0::OutputPart * rhs)
{
        *(lhs) = reinterpret_cast<Imf_OutputPart_t * >(rhs);
}

inline void to_c_copy(
    Imf_OutputPart_t * lhs
    , Imf_3_0::OutputPart const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


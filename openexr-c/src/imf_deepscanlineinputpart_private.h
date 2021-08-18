#pragma once
#include <imf_deepscanlineinputpart.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepScanLineInputPart.h>
#include <cstring>

inline Imf_3_0::DeepScanLineInputPart const & to_cpp_ref(
    Imf_DeepScanLineInputPart_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepScanLineInputPart const * >(rhs));
}

inline Imf_3_0::DeepScanLineInputPart & to_cpp_ref(
    Imf_DeepScanLineInputPart_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepScanLineInputPart * >(rhs));
}

inline Imf_3_0::DeepScanLineInputPart const * to_cpp(
    Imf_DeepScanLineInputPart_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepScanLineInputPart const * >(rhs);
}

inline Imf_3_0::DeepScanLineInputPart * to_cpp(
    Imf_DeepScanLineInputPart_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepScanLineInputPart * >(rhs);
}

inline void to_c(
    Imf_DeepScanLineInputPart_t const * * lhs
    , Imf_3_0::DeepScanLineInputPart const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineInputPart_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepScanLineInputPart_t const * * lhs
    , Imf_3_0::DeepScanLineInputPart const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineInputPart_t const * >(rhs);
}

inline void to_c(
    Imf_DeepScanLineInputPart_t * * lhs
    , Imf_3_0::DeepScanLineInputPart & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineInputPart_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepScanLineInputPart_t * * lhs
    , Imf_3_0::DeepScanLineInputPart * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineInputPart_t * >(rhs);
}

inline void to_c_copy(
    Imf_DeepScanLineInputPart_t * lhs
    , Imf_3_0::DeepScanLineInputPart const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


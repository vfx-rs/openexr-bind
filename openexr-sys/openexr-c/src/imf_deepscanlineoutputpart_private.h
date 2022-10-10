#pragma once
#include <imf_deepscanlineoutputpart.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepScanLineOutputPart.h>
#include <cstring>

inline Imf_3_0::DeepScanLineOutputPart const & to_cpp_ref(
    Imf_DeepScanLineOutputPart_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepScanLineOutputPart const * >(rhs));
}

inline Imf_3_0::DeepScanLineOutputPart & to_cpp_ref(
    Imf_DeepScanLineOutputPart_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepScanLineOutputPart * >(rhs));
}

inline Imf_3_0::DeepScanLineOutputPart const * to_cpp(
    Imf_DeepScanLineOutputPart_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepScanLineOutputPart const * >(rhs);
}

inline Imf_3_0::DeepScanLineOutputPart * to_cpp(
    Imf_DeepScanLineOutputPart_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepScanLineOutputPart * >(rhs);
}

inline void to_c(
    Imf_DeepScanLineOutputPart_t const * * lhs
    , Imf_3_0::DeepScanLineOutputPart const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineOutputPart_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepScanLineOutputPart_t const * * lhs
    , Imf_3_0::DeepScanLineOutputPart const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineOutputPart_t const * >(rhs);
}

inline void to_c(
    Imf_DeepScanLineOutputPart_t * * lhs
    , Imf_3_0::DeepScanLineOutputPart & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineOutputPart_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepScanLineOutputPart_t * * lhs
    , Imf_3_0::DeepScanLineOutputPart * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineOutputPart_t * >(rhs);
}

inline void to_c_copy(
    Imf_DeepScanLineOutputPart_t * lhs
    , Imf_3_0::DeepScanLineOutputPart const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


#pragma once
#include <imf_compositedeepscanline.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfCompositeDeepScanLine.h>
#include <cstring>

inline Imf_3_0::CompositeDeepScanLine const & to_cpp_ref(
    Imf_CompositeDeepScanLine_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::CompositeDeepScanLine const * >(rhs));
}

inline Imf_3_0::CompositeDeepScanLine & to_cpp_ref(
    Imf_CompositeDeepScanLine_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::CompositeDeepScanLine * >(rhs));
}

inline Imf_3_0::CompositeDeepScanLine const * to_cpp(
    Imf_CompositeDeepScanLine_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::CompositeDeepScanLine const * >(rhs);
}

inline Imf_3_0::CompositeDeepScanLine * to_cpp(
    Imf_CompositeDeepScanLine_t * rhs)
{
        return reinterpret_cast<Imf_3_0::CompositeDeepScanLine * >(rhs);
}

inline void to_c(
    Imf_CompositeDeepScanLine_t const * * lhs
    , Imf_3_0::CompositeDeepScanLine const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_CompositeDeepScanLine_t const * >(&(rhs));
}

inline void to_c(
    Imf_CompositeDeepScanLine_t const * * lhs
    , Imf_3_0::CompositeDeepScanLine const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_CompositeDeepScanLine_t const * >(rhs);
}

inline void to_c(
    Imf_CompositeDeepScanLine_t * * lhs
    , Imf_3_0::CompositeDeepScanLine & rhs)
{
        *(lhs) = reinterpret_cast<Imf_CompositeDeepScanLine_t * >(&(rhs));
}

inline void to_c(
    Imf_CompositeDeepScanLine_t * * lhs
    , Imf_3_0::CompositeDeepScanLine * rhs)
{
        *(lhs) = reinterpret_cast<Imf_CompositeDeepScanLine_t * >(rhs);
}


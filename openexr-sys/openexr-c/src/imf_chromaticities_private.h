#pragma once
#include <imf_chromaticities.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfChromaticities.h>
#include <cstring>

inline Imf_3_0::Chromaticities const & to_cpp_ref(
    Imf_Chromaticities_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Chromaticities const * >(rhs));
}

inline Imf_3_0::Chromaticities & to_cpp_ref(
    Imf_Chromaticities_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Chromaticities * >(rhs));
}

inline Imf_3_0::Chromaticities const * to_cpp(
    Imf_Chromaticities_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Chromaticities const * >(rhs);
}

inline Imf_3_0::Chromaticities * to_cpp(
    Imf_Chromaticities_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Chromaticities * >(rhs);
}

inline void to_c(
    Imf_Chromaticities_t const * * lhs
    , Imf_3_0::Chromaticities const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Chromaticities_t const * >(&(rhs));
}

inline void to_c(
    Imf_Chromaticities_t const * * lhs
    , Imf_3_0::Chromaticities const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Chromaticities_t const * >(rhs);
}

inline void to_c(
    Imf_Chromaticities_t * * lhs
    , Imf_3_0::Chromaticities & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Chromaticities_t * >(&(rhs));
}

inline void to_c(
    Imf_Chromaticities_t * * lhs
    , Imf_3_0::Chromaticities * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Chromaticities_t * >(rhs);
}

inline void to_c_copy(
    Imf_Chromaticities_t * lhs
    , Imf_3_0::Chromaticities const & rhs)
{
        Imf_3_0__Chromaticities_copy(lhs, reinterpret_cast<Imf_Chromaticities_t const * >(&(rhs)));
}


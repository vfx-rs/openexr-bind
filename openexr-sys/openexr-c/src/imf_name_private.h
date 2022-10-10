#pragma once
#include <imf_name.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfName.h>
#include <cstring>

inline Imf_3_0::Name const & to_cpp_ref(
    Imf_Name_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Name const * >(rhs));
}

inline Imf_3_0::Name & to_cpp_ref(
    Imf_Name_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Name * >(rhs));
}

inline Imf_3_0::Name const * to_cpp(
    Imf_Name_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Name const * >(rhs);
}

inline Imf_3_0::Name * to_cpp(
    Imf_Name_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Name * >(rhs);
}

inline void to_c(
    Imf_Name_t const * * lhs
    , Imf_3_0::Name const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Name_t const * >(&(rhs));
}

inline void to_c(
    Imf_Name_t const * * lhs
    , Imf_3_0::Name const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Name_t const * >(rhs);
}

inline void to_c(
    Imf_Name_t * * lhs
    , Imf_3_0::Name & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Name_t * >(&(rhs));
}

inline void to_c(
    Imf_Name_t * * lhs
    , Imf_3_0::Name * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Name_t * >(rhs);
}

inline void to_c_copy(
    Imf_Name_t * lhs
    , Imf_3_0::Name const & rhs)
{
        Imf_3_0__Name_copy(lhs, reinterpret_cast<Imf_Name_t const * >(&(rhs)));
}


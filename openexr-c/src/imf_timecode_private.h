#pragma once
#include <imf_timecode.h>


#include "openexr-errors-private.h"

#include <OpenEXR/IexBaseExc.h>
#include <OpenEXR/ImfTimeCode.h>
#include <cstring>

inline Imf_3_0::TimeCode::Packing const & Imf_TimeCode_Packing_to_cpp_ref(
    Imf_TimeCode_Packing const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TimeCode::Packing const * >(rhs));
}

inline Imf_3_0::TimeCode::Packing & Imf_TimeCode_Packing_to_cpp_ref(
    Imf_TimeCode_Packing * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TimeCode::Packing * >(rhs));
}

inline Imf_3_0::TimeCode::Packing const * Imf_TimeCode_Packing_to_cpp(
    Imf_TimeCode_Packing const * rhs)
{
        return reinterpret_cast<Imf_3_0::TimeCode::Packing const * >(rhs);
}

inline Imf_3_0::TimeCode::Packing * Imf_TimeCode_Packing_to_cpp(
    Imf_TimeCode_Packing * rhs)
{
        return reinterpret_cast<Imf_3_0::TimeCode::Packing * >(rhs);
}

inline void to_c(
    Imf_TimeCode_Packing const * * lhs
    , Imf_3_0::TimeCode::Packing const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TimeCode_Packing const * >(&(rhs));
}

inline void to_c(
    Imf_TimeCode_Packing const * * lhs
    , Imf_3_0::TimeCode::Packing const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TimeCode_Packing const * >(rhs);
}

inline void to_c(
    Imf_TimeCode_Packing * * lhs
    , Imf_3_0::TimeCode::Packing & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TimeCode_Packing * >(&(rhs));
}

inline void to_c(
    Imf_TimeCode_Packing * * lhs
    , Imf_3_0::TimeCode::Packing * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TimeCode_Packing * >(rhs);
}

inline void to_c_copy(
    Imf_TimeCode_Packing * lhs
    , Imf_3_0::TimeCode::Packing const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imf_3_0::TimeCode const & to_cpp_ref(
    Imf_TimeCode_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TimeCode const * >(rhs));
}

inline Imf_3_0::TimeCode & to_cpp_ref(
    Imf_TimeCode_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TimeCode * >(rhs));
}

inline Imf_3_0::TimeCode const * to_cpp(
    Imf_TimeCode_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TimeCode const * >(rhs);
}

inline Imf_3_0::TimeCode * to_cpp(
    Imf_TimeCode_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TimeCode * >(rhs);
}

inline void to_c(
    Imf_TimeCode_t const * * lhs
    , Imf_3_0::TimeCode const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TimeCode_t const * >(&(rhs));
}

inline void to_c(
    Imf_TimeCode_t const * * lhs
    , Imf_3_0::TimeCode const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TimeCode_t const * >(rhs);
}

inline void to_c(
    Imf_TimeCode_t * * lhs
    , Imf_3_0::TimeCode & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TimeCode_t * >(&(rhs));
}

inline void to_c(
    Imf_TimeCode_t * * lhs
    , Imf_3_0::TimeCode * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TimeCode_t * >(rhs);
}

inline void to_c_copy(
    Imf_TimeCode_t * lhs
    , Imf_3_0::TimeCode const & rhs)
{
        Imf_3_0__TimeCode_copy(lhs, reinterpret_cast<Imf_TimeCode_t const * >(&(rhs)));
}


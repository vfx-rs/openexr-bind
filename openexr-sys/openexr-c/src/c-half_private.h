#pragma once
#include <c-half.h>


#include "openexr-errors-private.h"

#include <Imath/half.h>
#include <cstring>

inline Imath_3_0::half::FromBitsTag const & Imath_half_FromBitsTag_to_cpp_ref(
    Imath_half_FromBitsTag const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::half::FromBitsTag const * >(rhs));
}

inline Imath_3_0::half::FromBitsTag & Imath_half_FromBitsTag_to_cpp_ref(
    Imath_half_FromBitsTag * rhs)
{
        return *(reinterpret_cast<Imath_3_0::half::FromBitsTag * >(rhs));
}

inline Imath_3_0::half::FromBitsTag const * Imath_half_FromBitsTag_to_cpp(
    Imath_half_FromBitsTag const * rhs)
{
        return reinterpret_cast<Imath_3_0::half::FromBitsTag const * >(rhs);
}

inline Imath_3_0::half::FromBitsTag * Imath_half_FromBitsTag_to_cpp(
    Imath_half_FromBitsTag * rhs)
{
        return reinterpret_cast<Imath_3_0::half::FromBitsTag * >(rhs);
}

inline void to_c(
    Imath_half_FromBitsTag const * * lhs
    , Imath_3_0::half::FromBitsTag const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_half_FromBitsTag const * >(&(rhs));
}

inline void to_c(
    Imath_half_FromBitsTag const * * lhs
    , Imath_3_0::half::FromBitsTag const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_half_FromBitsTag const * >(rhs);
}

inline void to_c(
    Imath_half_FromBitsTag * * lhs
    , Imath_3_0::half::FromBitsTag & rhs)
{
        *(lhs) = reinterpret_cast<Imath_half_FromBitsTag * >(&(rhs));
}

inline void to_c(
    Imath_half_FromBitsTag * * lhs
    , Imath_3_0::half::FromBitsTag * rhs)
{
        *(lhs) = reinterpret_cast<Imath_half_FromBitsTag * >(rhs);
}

inline void to_c_copy(
    Imath_half_FromBitsTag * lhs
    , Imath_3_0::half::FromBitsTag const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::half const & to_cpp_ref(
    Imath_half_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::half const * >(rhs));
}

inline Imath_3_0::half & to_cpp_ref(
    Imath_half_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::half * >(rhs));
}

inline Imath_3_0::half const * to_cpp(
    Imath_half_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::half const * >(rhs);
}

inline Imath_3_0::half * to_cpp(
    Imath_half_t * rhs)
{
        return reinterpret_cast<Imath_3_0::half * >(rhs);
}

inline void to_c(
    Imath_half_t const * * lhs
    , Imath_3_0::half const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_half_t const * >(&(rhs));
}

inline void to_c(
    Imath_half_t const * * lhs
    , Imath_3_0::half const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_half_t const * >(rhs);
}

inline void to_c(
    Imath_half_t * * lhs
    , Imath_3_0::half & rhs)
{
        *(lhs) = reinterpret_cast<Imath_half_t * >(&(rhs));
}

inline void to_c(
    Imath_half_t * * lhs
    , Imath_3_0::half * rhs)
{
        *(lhs) = reinterpret_cast<Imath_half_t * >(rhs);
}

inline void to_c_copy(
    Imath_half_t * lhs
    , Imath_3_0::half const & rhs)
{
        Imath_3_0__half_copy(lhs, reinterpret_cast<Imath_half_t const * >(&(rhs)));
}


#pragma once
#include <imf_flatimagelevel.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfFlatImageLevel.h>
#include <cstring>

inline Imf_3_0::FlatImageLevel const & to_cpp_ref(
    Imf_FlatImageLevel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FlatImageLevel const * >(rhs));
}

inline Imf_3_0::FlatImageLevel & to_cpp_ref(
    Imf_FlatImageLevel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FlatImageLevel * >(rhs));
}

inline Imf_3_0::FlatImageLevel const * to_cpp(
    Imf_FlatImageLevel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::FlatImageLevel const * >(rhs);
}

inline Imf_3_0::FlatImageLevel * to_cpp(
    Imf_FlatImageLevel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::FlatImageLevel * >(rhs);
}

inline void to_c(
    Imf_FlatImageLevel_t const * * lhs
    , Imf_3_0::FlatImageLevel const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageLevel_t const * >(&(rhs));
}

inline void to_c(
    Imf_FlatImageLevel_t const * * lhs
    , Imf_3_0::FlatImageLevel const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageLevel_t const * >(rhs);
}

inline void to_c(
    Imf_FlatImageLevel_t * * lhs
    , Imf_3_0::FlatImageLevel & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageLevel_t * >(&(rhs));
}

inline void to_c(
    Imf_FlatImageLevel_t * * lhs
    , Imf_3_0::FlatImageLevel * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageLevel_t * >(rhs);
}

inline Imf_3_0::FlatImageLevel::Iterator const & to_cpp_ref(
    Imf_FlatImageLevel_Iterator_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FlatImageLevel::Iterator const * >(rhs));
}

inline Imf_3_0::FlatImageLevel::Iterator & to_cpp_ref(
    Imf_FlatImageLevel_Iterator_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FlatImageLevel::Iterator * >(rhs));
}

inline Imf_3_0::FlatImageLevel::Iterator const * to_cpp(
    Imf_FlatImageLevel_Iterator_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::FlatImageLevel::Iterator const * >(rhs);
}

inline Imf_3_0::FlatImageLevel::Iterator * to_cpp(
    Imf_FlatImageLevel_Iterator_t * rhs)
{
        return reinterpret_cast<Imf_3_0::FlatImageLevel::Iterator * >(rhs);
}

inline void to_c(
    Imf_FlatImageLevel_Iterator_t const * * lhs
    , Imf_3_0::FlatImageLevel::Iterator const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageLevel_Iterator_t const * >(&(rhs));
}

inline void to_c(
    Imf_FlatImageLevel_Iterator_t const * * lhs
    , Imf_3_0::FlatImageLevel::Iterator const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageLevel_Iterator_t const * >(rhs);
}

inline void to_c(
    Imf_FlatImageLevel_Iterator_t * * lhs
    , Imf_3_0::FlatImageLevel::Iterator & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageLevel_Iterator_t * >(&(rhs));
}

inline void to_c(
    Imf_FlatImageLevel_Iterator_t * * lhs
    , Imf_3_0::FlatImageLevel::Iterator * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageLevel_Iterator_t * >(rhs);
}

inline void to_c_copy(
    Imf_FlatImageLevel_Iterator_t * lhs
    , Imf_3_0::FlatImageLevel::Iterator const & rhs)
{
        Imf_3_0__FlatImageLevel__Iterator_copy(lhs, reinterpret_cast<Imf_FlatImageLevel_Iterator_t const * >(&(rhs)));
}

inline Imf_3_0::FlatImageLevel::ConstIterator const & to_cpp_ref(
    Imf_FlatImageLevel_ConstIterator_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FlatImageLevel::ConstIterator const * >(rhs));
}

inline Imf_3_0::FlatImageLevel::ConstIterator & to_cpp_ref(
    Imf_FlatImageLevel_ConstIterator_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FlatImageLevel::ConstIterator * >(rhs));
}

inline Imf_3_0::FlatImageLevel::ConstIterator const * to_cpp(
    Imf_FlatImageLevel_ConstIterator_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::FlatImageLevel::ConstIterator const * >(rhs);
}

inline Imf_3_0::FlatImageLevel::ConstIterator * to_cpp(
    Imf_FlatImageLevel_ConstIterator_t * rhs)
{
        return reinterpret_cast<Imf_3_0::FlatImageLevel::ConstIterator * >(rhs);
}

inline void to_c(
    Imf_FlatImageLevel_ConstIterator_t const * * lhs
    , Imf_3_0::FlatImageLevel::ConstIterator const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageLevel_ConstIterator_t const * >(&(rhs));
}

inline void to_c(
    Imf_FlatImageLevel_ConstIterator_t const * * lhs
    , Imf_3_0::FlatImageLevel::ConstIterator const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageLevel_ConstIterator_t const * >(rhs);
}

inline void to_c(
    Imf_FlatImageLevel_ConstIterator_t * * lhs
    , Imf_3_0::FlatImageLevel::ConstIterator & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageLevel_ConstIterator_t * >(&(rhs));
}

inline void to_c(
    Imf_FlatImageLevel_ConstIterator_t * * lhs
    , Imf_3_0::FlatImageLevel::ConstIterator * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageLevel_ConstIterator_t * >(rhs);
}

inline void to_c_copy(
    Imf_FlatImageLevel_ConstIterator_t * lhs
    , Imf_3_0::FlatImageLevel::ConstIterator const & rhs)
{
        Imf_3_0__FlatImageLevel__ConstIterator_copy(lhs, reinterpret_cast<Imf_FlatImageLevel_ConstIterator_t const * >(&(rhs)));
}


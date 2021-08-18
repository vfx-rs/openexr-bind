#pragma once
#include <imf_deepimagelevel.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepImageLevel.h>
#include <cstring>

inline Imf_3_0::DeepImageLevel const & to_cpp_ref(
    Imf_DeepImageLevel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepImageLevel const * >(rhs));
}

inline Imf_3_0::DeepImageLevel & to_cpp_ref(
    Imf_DeepImageLevel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepImageLevel * >(rhs));
}

inline Imf_3_0::DeepImageLevel const * to_cpp(
    Imf_DeepImageLevel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepImageLevel const * >(rhs);
}

inline Imf_3_0::DeepImageLevel * to_cpp(
    Imf_DeepImageLevel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepImageLevel * >(rhs);
}

inline void to_c(
    Imf_DeepImageLevel_t const * * lhs
    , Imf_3_0::DeepImageLevel const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageLevel_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepImageLevel_t const * * lhs
    , Imf_3_0::DeepImageLevel const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageLevel_t const * >(rhs);
}

inline void to_c(
    Imf_DeepImageLevel_t * * lhs
    , Imf_3_0::DeepImageLevel & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageLevel_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepImageLevel_t * * lhs
    , Imf_3_0::DeepImageLevel * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageLevel_t * >(rhs);
}

inline Imf_3_0::DeepImageLevel::Iterator const & to_cpp_ref(
    Imf_DeepImageLevel_Iterator_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepImageLevel::Iterator const * >(rhs));
}

inline Imf_3_0::DeepImageLevel::Iterator & to_cpp_ref(
    Imf_DeepImageLevel_Iterator_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepImageLevel::Iterator * >(rhs));
}

inline Imf_3_0::DeepImageLevel::Iterator const * to_cpp(
    Imf_DeepImageLevel_Iterator_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepImageLevel::Iterator const * >(rhs);
}

inline Imf_3_0::DeepImageLevel::Iterator * to_cpp(
    Imf_DeepImageLevel_Iterator_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepImageLevel::Iterator * >(rhs);
}

inline void to_c(
    Imf_DeepImageLevel_Iterator_t const * * lhs
    , Imf_3_0::DeepImageLevel::Iterator const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageLevel_Iterator_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepImageLevel_Iterator_t const * * lhs
    , Imf_3_0::DeepImageLevel::Iterator const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageLevel_Iterator_t const * >(rhs);
}

inline void to_c(
    Imf_DeepImageLevel_Iterator_t * * lhs
    , Imf_3_0::DeepImageLevel::Iterator & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageLevel_Iterator_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepImageLevel_Iterator_t * * lhs
    , Imf_3_0::DeepImageLevel::Iterator * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageLevel_Iterator_t * >(rhs);
}

inline void to_c_copy(
    Imf_DeepImageLevel_Iterator_t * lhs
    , Imf_3_0::DeepImageLevel::Iterator const & rhs)
{
        Imf_3_0__DeepImageLevel__Iterator_copy(lhs, reinterpret_cast<Imf_DeepImageLevel_Iterator_t const * >(&(rhs)));
}

inline Imf_3_0::DeepImageLevel::ConstIterator const & to_cpp_ref(
    Imf_DeepImageLevel_ConstIterator_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepImageLevel::ConstIterator const * >(rhs));
}

inline Imf_3_0::DeepImageLevel::ConstIterator & to_cpp_ref(
    Imf_DeepImageLevel_ConstIterator_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepImageLevel::ConstIterator * >(rhs));
}

inline Imf_3_0::DeepImageLevel::ConstIterator const * to_cpp(
    Imf_DeepImageLevel_ConstIterator_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepImageLevel::ConstIterator const * >(rhs);
}

inline Imf_3_0::DeepImageLevel::ConstIterator * to_cpp(
    Imf_DeepImageLevel_ConstIterator_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepImageLevel::ConstIterator * >(rhs);
}

inline void to_c(
    Imf_DeepImageLevel_ConstIterator_t const * * lhs
    , Imf_3_0::DeepImageLevel::ConstIterator const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageLevel_ConstIterator_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepImageLevel_ConstIterator_t const * * lhs
    , Imf_3_0::DeepImageLevel::ConstIterator const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageLevel_ConstIterator_t const * >(rhs);
}

inline void to_c(
    Imf_DeepImageLevel_ConstIterator_t * * lhs
    , Imf_3_0::DeepImageLevel::ConstIterator & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageLevel_ConstIterator_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepImageLevel_ConstIterator_t * * lhs
    , Imf_3_0::DeepImageLevel::ConstIterator * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageLevel_ConstIterator_t * >(rhs);
}

inline void to_c_copy(
    Imf_DeepImageLevel_ConstIterator_t * lhs
    , Imf_3_0::DeepImageLevel::ConstIterator const & rhs)
{
        Imf_3_0__DeepImageLevel__ConstIterator_copy(lhs, reinterpret_cast<Imf_DeepImageLevel_ConstIterator_t const * >(&(rhs)));
}


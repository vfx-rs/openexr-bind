#pragma once
#include <imf_io.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfIO.h>
#include <cstring>

inline Imf_3_0::OStream const & to_cpp_ref(
    Imf_OStream_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::OStream const * >(rhs));
}

inline Imf_3_0::OStream & to_cpp_ref(
    Imf_OStream_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::OStream * >(rhs));
}

inline Imf_3_0::OStream const * to_cpp(
    Imf_OStream_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::OStream const * >(rhs);
}

inline Imf_3_0::OStream * to_cpp(
    Imf_OStream_t * rhs)
{
        return reinterpret_cast<Imf_3_0::OStream * >(rhs);
}

inline void to_c(
    Imf_OStream_t const * * lhs
    , Imf_3_0::OStream const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_OStream_t const * >(&(rhs));
}

inline void to_c(
    Imf_OStream_t const * * lhs
    , Imf_3_0::OStream const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_OStream_t const * >(rhs);
}

inline void to_c(
    Imf_OStream_t * * lhs
    , Imf_3_0::OStream & rhs)
{
        *(lhs) = reinterpret_cast<Imf_OStream_t * >(&(rhs));
}

inline void to_c(
    Imf_OStream_t * * lhs
    , Imf_3_0::OStream * rhs)
{
        *(lhs) = reinterpret_cast<Imf_OStream_t * >(rhs);
}

inline Imf_3_0::IStream const & to_cpp_ref(
    Imf_IStream_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::IStream const * >(rhs));
}

inline Imf_3_0::IStream & to_cpp_ref(
    Imf_IStream_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::IStream * >(rhs));
}

inline Imf_3_0::IStream const * to_cpp(
    Imf_IStream_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::IStream const * >(rhs);
}

inline Imf_3_0::IStream * to_cpp(
    Imf_IStream_t * rhs)
{
        return reinterpret_cast<Imf_3_0::IStream * >(rhs);
}

inline void to_c(
    Imf_IStream_t const * * lhs
    , Imf_3_0::IStream const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_IStream_t const * >(&(rhs));
}

inline void to_c(
    Imf_IStream_t const * * lhs
    , Imf_3_0::IStream const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_IStream_t const * >(rhs);
}

inline void to_c(
    Imf_IStream_t * * lhs
    , Imf_3_0::IStream & rhs)
{
        *(lhs) = reinterpret_cast<Imf_IStream_t * >(&(rhs));
}

inline void to_c(
    Imf_IStream_t * * lhs
    , Imf_3_0::IStream * rhs)
{
        *(lhs) = reinterpret_cast<Imf_IStream_t * >(rhs);
}


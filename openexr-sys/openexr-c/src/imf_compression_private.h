#pragma once
#include <imf_compression.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfCompression.h>
#include <cstring>

inline Imf_3_0::Compression const & Imf_Compression_to_cpp_ref(
    Imf_Compression const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Compression const * >(rhs));
}

inline Imf_3_0::Compression & Imf_Compression_to_cpp_ref(
    Imf_Compression * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Compression * >(rhs));
}

inline Imf_3_0::Compression const * Imf_Compression_to_cpp(
    Imf_Compression const * rhs)
{
        return reinterpret_cast<Imf_3_0::Compression const * >(rhs);
}

inline Imf_3_0::Compression * Imf_Compression_to_cpp(
    Imf_Compression * rhs)
{
        return reinterpret_cast<Imf_3_0::Compression * >(rhs);
}

inline void to_c(
    Imf_Compression const * * lhs
    , Imf_3_0::Compression const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Compression const * >(&(rhs));
}

inline void to_c(
    Imf_Compression const * * lhs
    , Imf_3_0::Compression const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Compression const * >(rhs);
}

inline void to_c(
    Imf_Compression * * lhs
    , Imf_3_0::Compression & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Compression * >(&(rhs));
}

inline void to_c(
    Imf_Compression * * lhs
    , Imf_3_0::Compression * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Compression * >(rhs);
}

inline void to_c_copy(
    Imf_Compression * lhs
    , Imf_3_0::Compression const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


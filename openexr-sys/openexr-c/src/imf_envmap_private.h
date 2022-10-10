#pragma once
#include <imf_envmap.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfEnvmap.h>
#include <cstring>

inline Imf_3_0::Envmap const & Imf_Envmap_to_cpp_ref(
    Imf_Envmap const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Envmap const * >(rhs));
}

inline Imf_3_0::Envmap & Imf_Envmap_to_cpp_ref(
    Imf_Envmap * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Envmap * >(rhs));
}

inline Imf_3_0::Envmap const * Imf_Envmap_to_cpp(
    Imf_Envmap const * rhs)
{
        return reinterpret_cast<Imf_3_0::Envmap const * >(rhs);
}

inline Imf_3_0::Envmap * Imf_Envmap_to_cpp(
    Imf_Envmap * rhs)
{
        return reinterpret_cast<Imf_3_0::Envmap * >(rhs);
}

inline void to_c(
    Imf_Envmap const * * lhs
    , Imf_3_0::Envmap const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Envmap const * >(&(rhs));
}

inline void to_c(
    Imf_Envmap const * * lhs
    , Imf_3_0::Envmap const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Envmap const * >(rhs);
}

inline void to_c(
    Imf_Envmap * * lhs
    , Imf_3_0::Envmap & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Envmap * >(&(rhs));
}

inline void to_c(
    Imf_Envmap * * lhs
    , Imf_3_0::Envmap * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Envmap * >(rhs);
}

inline void to_c_copy(
    Imf_Envmap * lhs
    , Imf_3_0::Envmap const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imf_3_0::CubeMapFace const & Imf_CubeMapFace_to_cpp_ref(
    Imf_CubeMapFace const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::CubeMapFace const * >(rhs));
}

inline Imf_3_0::CubeMapFace & Imf_CubeMapFace_to_cpp_ref(
    Imf_CubeMapFace * rhs)
{
        return *(reinterpret_cast<Imf_3_0::CubeMapFace * >(rhs));
}

inline Imf_3_0::CubeMapFace const * Imf_CubeMapFace_to_cpp(
    Imf_CubeMapFace const * rhs)
{
        return reinterpret_cast<Imf_3_0::CubeMapFace const * >(rhs);
}

inline Imf_3_0::CubeMapFace * Imf_CubeMapFace_to_cpp(
    Imf_CubeMapFace * rhs)
{
        return reinterpret_cast<Imf_3_0::CubeMapFace * >(rhs);
}

inline void to_c(
    Imf_CubeMapFace const * * lhs
    , Imf_3_0::CubeMapFace const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_CubeMapFace const * >(&(rhs));
}

inline void to_c(
    Imf_CubeMapFace const * * lhs
    , Imf_3_0::CubeMapFace const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_CubeMapFace const * >(rhs);
}

inline void to_c(
    Imf_CubeMapFace * * lhs
    , Imf_3_0::CubeMapFace & rhs)
{
        *(lhs) = reinterpret_cast<Imf_CubeMapFace * >(&(rhs));
}

inline void to_c(
    Imf_CubeMapFace * * lhs
    , Imf_3_0::CubeMapFace * rhs)
{
        *(lhs) = reinterpret_cast<Imf_CubeMapFace * >(rhs);
}

inline void to_c_copy(
    Imf_CubeMapFace * lhs
    , Imf_3_0::CubeMapFace const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


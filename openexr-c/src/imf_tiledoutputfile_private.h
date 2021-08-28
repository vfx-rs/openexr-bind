#pragma once
#include <imf_tiledoutputfile.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfTiledOutputFile.h>
#include <cstring>

inline Imf_3_0::TiledOutputFile const & to_cpp_ref(
    Imf_TiledOutputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TiledOutputFile const * >(rhs));
}

inline Imf_3_0::TiledOutputFile & to_cpp_ref(
    Imf_TiledOutputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TiledOutputFile * >(rhs));
}

inline Imf_3_0::TiledOutputFile const * to_cpp(
    Imf_TiledOutputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TiledOutputFile const * >(rhs);
}

inline Imf_3_0::TiledOutputFile * to_cpp(
    Imf_TiledOutputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TiledOutputFile * >(rhs);
}

inline void to_c(
    Imf_TiledOutputFile_t const * * lhs
    , Imf_3_0::TiledOutputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledOutputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_TiledOutputFile_t const * * lhs
    , Imf_3_0::TiledOutputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledOutputFile_t const * >(rhs);
}

inline void to_c(
    Imf_TiledOutputFile_t * * lhs
    , Imf_3_0::TiledOutputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledOutputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_TiledOutputFile_t * * lhs
    , Imf_3_0::TiledOutputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledOutputFile_t * >(rhs);
}


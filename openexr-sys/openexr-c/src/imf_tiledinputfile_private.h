#pragma once
#include <imf_tiledinputfile.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfTiledInputFile.h>
#include <cstring>

inline Imf_3_0::TiledInputFile const & to_cpp_ref(
    Imf_TiledInputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TiledInputFile const * >(rhs));
}

inline Imf_3_0::TiledInputFile & to_cpp_ref(
    Imf_TiledInputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TiledInputFile * >(rhs));
}

inline Imf_3_0::TiledInputFile const * to_cpp(
    Imf_TiledInputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TiledInputFile const * >(rhs);
}

inline Imf_3_0::TiledInputFile * to_cpp(
    Imf_TiledInputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TiledInputFile * >(rhs);
}

inline void to_c(
    Imf_TiledInputFile_t const * * lhs
    , Imf_3_0::TiledInputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledInputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_TiledInputFile_t const * * lhs
    , Imf_3_0::TiledInputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledInputFile_t const * >(rhs);
}

inline void to_c(
    Imf_TiledInputFile_t * * lhs
    , Imf_3_0::TiledInputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledInputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_TiledInputFile_t * * lhs
    , Imf_3_0::TiledInputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledInputFile_t * >(rhs);
}


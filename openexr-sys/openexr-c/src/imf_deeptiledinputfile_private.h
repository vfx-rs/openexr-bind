#pragma once
#include <imf_deeptiledinputfile.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepTiledInputFile.h>
#include <cstring>

inline Imf_3_0::DeepTiledInputFile const & to_cpp_ref(
    Imf_DeepTiledInputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepTiledInputFile const * >(rhs));
}

inline Imf_3_0::DeepTiledInputFile & to_cpp_ref(
    Imf_DeepTiledInputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepTiledInputFile * >(rhs));
}

inline Imf_3_0::DeepTiledInputFile const * to_cpp(
    Imf_DeepTiledInputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepTiledInputFile const * >(rhs);
}

inline Imf_3_0::DeepTiledInputFile * to_cpp(
    Imf_DeepTiledInputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepTiledInputFile * >(rhs);
}

inline void to_c(
    Imf_DeepTiledInputFile_t const * * lhs
    , Imf_3_0::DeepTiledInputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledInputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepTiledInputFile_t const * * lhs
    , Imf_3_0::DeepTiledInputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledInputFile_t const * >(rhs);
}

inline void to_c(
    Imf_DeepTiledInputFile_t * * lhs
    , Imf_3_0::DeepTiledInputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledInputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepTiledInputFile_t * * lhs
    , Imf_3_0::DeepTiledInputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledInputFile_t * >(rhs);
}


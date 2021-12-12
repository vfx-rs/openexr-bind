#pragma once
#include <imf_deeptiledoutputfile.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepTiledOutputFile.h>
#include <cstring>

inline Imf_3_0::DeepTiledOutputFile const & to_cpp_ref(
    Imf_DeepTiledOutputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepTiledOutputFile const * >(rhs));
}

inline Imf_3_0::DeepTiledOutputFile & to_cpp_ref(
    Imf_DeepTiledOutputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepTiledOutputFile * >(rhs));
}

inline Imf_3_0::DeepTiledOutputFile const * to_cpp(
    Imf_DeepTiledOutputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepTiledOutputFile const * >(rhs);
}

inline Imf_3_0::DeepTiledOutputFile * to_cpp(
    Imf_DeepTiledOutputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepTiledOutputFile * >(rhs);
}

inline void to_c(
    Imf_DeepTiledOutputFile_t const * * lhs
    , Imf_3_0::DeepTiledOutputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledOutputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepTiledOutputFile_t const * * lhs
    , Imf_3_0::DeepTiledOutputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledOutputFile_t const * >(rhs);
}

inline void to_c(
    Imf_DeepTiledOutputFile_t * * lhs
    , Imf_3_0::DeepTiledOutputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledOutputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepTiledOutputFile_t * * lhs
    , Imf_3_0::DeepTiledOutputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepTiledOutputFile_t * >(rhs);
}


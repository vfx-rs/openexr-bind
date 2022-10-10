#pragma once
#include <imf_deepscanlineinputfile.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepScanLineInputFile.h>
#include <cstring>

inline Imf_3_0::DeepScanLineInputFile const & to_cpp_ref(
    Imf_DeepScanLineInputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepScanLineInputFile const * >(rhs));
}

inline Imf_3_0::DeepScanLineInputFile & to_cpp_ref(
    Imf_DeepScanLineInputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepScanLineInputFile * >(rhs));
}

inline Imf_3_0::DeepScanLineInputFile const * to_cpp(
    Imf_DeepScanLineInputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepScanLineInputFile const * >(rhs);
}

inline Imf_3_0::DeepScanLineInputFile * to_cpp(
    Imf_DeepScanLineInputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepScanLineInputFile * >(rhs);
}

inline void to_c(
    Imf_DeepScanLineInputFile_t const * * lhs
    , Imf_3_0::DeepScanLineInputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineInputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepScanLineInputFile_t const * * lhs
    , Imf_3_0::DeepScanLineInputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineInputFile_t const * >(rhs);
}

inline void to_c(
    Imf_DeepScanLineInputFile_t * * lhs
    , Imf_3_0::DeepScanLineInputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineInputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepScanLineInputFile_t * * lhs
    , Imf_3_0::DeepScanLineInputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineInputFile_t * >(rhs);
}


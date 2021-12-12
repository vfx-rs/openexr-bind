#pragma once
#include <imf_deepscanlineoutputfile.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepScanLineOutputFile.h>
#include <cstring>

inline Imf_3_0::DeepScanLineOutputFile const & to_cpp_ref(
    Imf_DeepScanLineOutputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepScanLineOutputFile const * >(rhs));
}

inline Imf_3_0::DeepScanLineOutputFile & to_cpp_ref(
    Imf_DeepScanLineOutputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepScanLineOutputFile * >(rhs));
}

inline Imf_3_0::DeepScanLineOutputFile const * to_cpp(
    Imf_DeepScanLineOutputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepScanLineOutputFile const * >(rhs);
}

inline Imf_3_0::DeepScanLineOutputFile * to_cpp(
    Imf_DeepScanLineOutputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepScanLineOutputFile * >(rhs);
}

inline void to_c(
    Imf_DeepScanLineOutputFile_t const * * lhs
    , Imf_3_0::DeepScanLineOutputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineOutputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepScanLineOutputFile_t const * * lhs
    , Imf_3_0::DeepScanLineOutputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineOutputFile_t const * >(rhs);
}

inline void to_c(
    Imf_DeepScanLineOutputFile_t * * lhs
    , Imf_3_0::DeepScanLineOutputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineOutputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepScanLineOutputFile_t * * lhs
    , Imf_3_0::DeepScanLineOutputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepScanLineOutputFile_t * >(rhs);
}


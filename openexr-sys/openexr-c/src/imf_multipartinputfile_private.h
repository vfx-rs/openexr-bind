#pragma once
#include <imf_multipartinputfile.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfMultiPartInputFile.h>
#include <cstring>

inline Imf_3_0::MultiPartInputFile const & to_cpp_ref(
    Imf_MultiPartInputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::MultiPartInputFile const * >(rhs));
}

inline Imf_3_0::MultiPartInputFile & to_cpp_ref(
    Imf_MultiPartInputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::MultiPartInputFile * >(rhs));
}

inline Imf_3_0::MultiPartInputFile const * to_cpp(
    Imf_MultiPartInputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::MultiPartInputFile const * >(rhs);
}

inline Imf_3_0::MultiPartInputFile * to_cpp(
    Imf_MultiPartInputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::MultiPartInputFile * >(rhs);
}

inline void to_c(
    Imf_MultiPartInputFile_t const * * lhs
    , Imf_3_0::MultiPartInputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_MultiPartInputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_MultiPartInputFile_t const * * lhs
    , Imf_3_0::MultiPartInputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_MultiPartInputFile_t const * >(rhs);
}

inline void to_c(
    Imf_MultiPartInputFile_t * * lhs
    , Imf_3_0::MultiPartInputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_MultiPartInputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_MultiPartInputFile_t * * lhs
    , Imf_3_0::MultiPartInputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_MultiPartInputFile_t * >(rhs);
}


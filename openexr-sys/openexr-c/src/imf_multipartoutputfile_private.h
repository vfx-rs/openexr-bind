#pragma once
#include <imf_multipartoutputfile.h>


#include "openexr-errors-private.h"

#include <OpenEXR/IexBaseExc.h>
#include <OpenEXR/ImfMultiPartOutputFile.h>
#include <cstring>

inline Imf_3_0::MultiPartOutputFile const & to_cpp_ref(
    Imf_MultiPartOutputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::MultiPartOutputFile const * >(rhs));
}

inline Imf_3_0::MultiPartOutputFile & to_cpp_ref(
    Imf_MultiPartOutputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::MultiPartOutputFile * >(rhs));
}

inline Imf_3_0::MultiPartOutputFile const * to_cpp(
    Imf_MultiPartOutputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::MultiPartOutputFile const * >(rhs);
}

inline Imf_3_0::MultiPartOutputFile * to_cpp(
    Imf_MultiPartOutputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::MultiPartOutputFile * >(rhs);
}

inline void to_c(
    Imf_MultiPartOutputFile_t const * * lhs
    , Imf_3_0::MultiPartOutputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_MultiPartOutputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_MultiPartOutputFile_t const * * lhs
    , Imf_3_0::MultiPartOutputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_MultiPartOutputFile_t const * >(rhs);
}

inline void to_c(
    Imf_MultiPartOutputFile_t * * lhs
    , Imf_3_0::MultiPartOutputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_MultiPartOutputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_MultiPartOutputFile_t * * lhs
    , Imf_3_0::MultiPartOutputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_MultiPartOutputFile_t * >(rhs);
}


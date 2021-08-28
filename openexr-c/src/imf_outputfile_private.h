#pragma once
#include <imf_outputfile.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfOutputFile.h>
#include <cstring>

inline Imf_3_0::OutputFile const & to_cpp_ref(
    Imf_OutputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::OutputFile const * >(rhs));
}

inline Imf_3_0::OutputFile & to_cpp_ref(
    Imf_OutputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::OutputFile * >(rhs));
}

inline Imf_3_0::OutputFile const * to_cpp(
    Imf_OutputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::OutputFile const * >(rhs);
}

inline Imf_3_0::OutputFile * to_cpp(
    Imf_OutputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::OutputFile * >(rhs);
}

inline void to_c(
    Imf_OutputFile_t const * * lhs
    , Imf_3_0::OutputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_OutputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_OutputFile_t const * * lhs
    , Imf_3_0::OutputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_OutputFile_t const * >(rhs);
}

inline void to_c(
    Imf_OutputFile_t * * lhs
    , Imf_3_0::OutputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_OutputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_OutputFile_t * * lhs
    , Imf_3_0::OutputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_OutputFile_t * >(rhs);
}


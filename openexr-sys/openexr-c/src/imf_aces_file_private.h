#pragma once
#include <imf_aces_file.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfAcesFile.h>
#include <cstring>

inline Imf_3_0::AcesOutputFile const & to_cpp_ref(
    Imf_AcesOutputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::AcesOutputFile const * >(rhs));
}

inline Imf_3_0::AcesOutputFile & to_cpp_ref(
    Imf_AcesOutputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::AcesOutputFile * >(rhs));
}

inline Imf_3_0::AcesOutputFile const * to_cpp(
    Imf_AcesOutputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::AcesOutputFile const * >(rhs);
}

inline Imf_3_0::AcesOutputFile * to_cpp(
    Imf_AcesOutputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::AcesOutputFile * >(rhs);
}

inline void to_c(
    Imf_AcesOutputFile_t const * * lhs
    , Imf_3_0::AcesOutputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_AcesOutputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_AcesOutputFile_t const * * lhs
    , Imf_3_0::AcesOutputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_AcesOutputFile_t const * >(rhs);
}

inline void to_c(
    Imf_AcesOutputFile_t * * lhs
    , Imf_3_0::AcesOutputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_AcesOutputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_AcesOutputFile_t * * lhs
    , Imf_3_0::AcesOutputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_AcesOutputFile_t * >(rhs);
}

inline Imf_3_0::AcesInputFile const & to_cpp_ref(
    Imf_AcesInputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::AcesInputFile const * >(rhs));
}

inline Imf_3_0::AcesInputFile & to_cpp_ref(
    Imf_AcesInputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::AcesInputFile * >(rhs));
}

inline Imf_3_0::AcesInputFile const * to_cpp(
    Imf_AcesInputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::AcesInputFile const * >(rhs);
}

inline Imf_3_0::AcesInputFile * to_cpp(
    Imf_AcesInputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::AcesInputFile * >(rhs);
}

inline void to_c(
    Imf_AcesInputFile_t const * * lhs
    , Imf_3_0::AcesInputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_AcesInputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_AcesInputFile_t const * * lhs
    , Imf_3_0::AcesInputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_AcesInputFile_t const * >(rhs);
}

inline void to_c(
    Imf_AcesInputFile_t * * lhs
    , Imf_3_0::AcesInputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_AcesInputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_AcesInputFile_t * * lhs
    , Imf_3_0::AcesInputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_AcesInputFile_t * >(rhs);
}


#pragma once
#include <imf_rgbafile.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfRgbaFile.h>
#include <cstring>

inline Imf_3_0::RgbaOutputFile const & to_cpp_ref(
    Imf_RgbaOutputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::RgbaOutputFile const * >(rhs));
}

inline Imf_3_0::RgbaOutputFile & to_cpp_ref(
    Imf_RgbaOutputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::RgbaOutputFile * >(rhs));
}

inline Imf_3_0::RgbaOutputFile const * to_cpp(
    Imf_RgbaOutputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::RgbaOutputFile const * >(rhs);
}

inline Imf_3_0::RgbaOutputFile * to_cpp(
    Imf_RgbaOutputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::RgbaOutputFile * >(rhs);
}

inline void to_c(
    Imf_RgbaOutputFile_t const * * lhs
    , Imf_3_0::RgbaOutputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaOutputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_RgbaOutputFile_t const * * lhs
    , Imf_3_0::RgbaOutputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaOutputFile_t const * >(rhs);
}

inline void to_c(
    Imf_RgbaOutputFile_t * * lhs
    , Imf_3_0::RgbaOutputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaOutputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_RgbaOutputFile_t * * lhs
    , Imf_3_0::RgbaOutputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaOutputFile_t * >(rhs);
}

inline Imf_3_0::RgbaInputFile const & to_cpp_ref(
    Imf_RgbaInputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::RgbaInputFile const * >(rhs));
}

inline Imf_3_0::RgbaInputFile & to_cpp_ref(
    Imf_RgbaInputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::RgbaInputFile * >(rhs));
}

inline Imf_3_0::RgbaInputFile const * to_cpp(
    Imf_RgbaInputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::RgbaInputFile const * >(rhs);
}

inline Imf_3_0::RgbaInputFile * to_cpp(
    Imf_RgbaInputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::RgbaInputFile * >(rhs);
}

inline void to_c(
    Imf_RgbaInputFile_t const * * lhs
    , Imf_3_0::RgbaInputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaInputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_RgbaInputFile_t const * * lhs
    , Imf_3_0::RgbaInputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaInputFile_t const * >(rhs);
}

inline void to_c(
    Imf_RgbaInputFile_t * * lhs
    , Imf_3_0::RgbaInputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaInputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_RgbaInputFile_t * * lhs
    , Imf_3_0::RgbaInputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_RgbaInputFile_t * >(rhs);
}


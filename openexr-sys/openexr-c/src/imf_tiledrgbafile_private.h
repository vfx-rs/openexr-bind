#pragma once
#include <imf_tiledrgbafile.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfTiledRgbaFile.h>
#include <cstring>

inline Imf_3_0::TiledRgbaOutputFile const & to_cpp_ref(
    Imf_TiledRgbaOutputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TiledRgbaOutputFile const * >(rhs));
}

inline Imf_3_0::TiledRgbaOutputFile & to_cpp_ref(
    Imf_TiledRgbaOutputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TiledRgbaOutputFile * >(rhs));
}

inline Imf_3_0::TiledRgbaOutputFile const * to_cpp(
    Imf_TiledRgbaOutputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TiledRgbaOutputFile const * >(rhs);
}

inline Imf_3_0::TiledRgbaOutputFile * to_cpp(
    Imf_TiledRgbaOutputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TiledRgbaOutputFile * >(rhs);
}

inline void to_c(
    Imf_TiledRgbaOutputFile_t const * * lhs
    , Imf_3_0::TiledRgbaOutputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledRgbaOutputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_TiledRgbaOutputFile_t const * * lhs
    , Imf_3_0::TiledRgbaOutputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledRgbaOutputFile_t const * >(rhs);
}

inline void to_c(
    Imf_TiledRgbaOutputFile_t * * lhs
    , Imf_3_0::TiledRgbaOutputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledRgbaOutputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_TiledRgbaOutputFile_t * * lhs
    , Imf_3_0::TiledRgbaOutputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledRgbaOutputFile_t * >(rhs);
}

inline Imf_3_0::TiledRgbaInputFile const & to_cpp_ref(
    Imf_TiledRgbaInputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TiledRgbaInputFile const * >(rhs));
}

inline Imf_3_0::TiledRgbaInputFile & to_cpp_ref(
    Imf_TiledRgbaInputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TiledRgbaInputFile * >(rhs));
}

inline Imf_3_0::TiledRgbaInputFile const * to_cpp(
    Imf_TiledRgbaInputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TiledRgbaInputFile const * >(rhs);
}

inline Imf_3_0::TiledRgbaInputFile * to_cpp(
    Imf_TiledRgbaInputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TiledRgbaInputFile * >(rhs);
}

inline void to_c(
    Imf_TiledRgbaInputFile_t const * * lhs
    , Imf_3_0::TiledRgbaInputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledRgbaInputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_TiledRgbaInputFile_t const * * lhs
    , Imf_3_0::TiledRgbaInputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledRgbaInputFile_t const * >(rhs);
}

inline void to_c(
    Imf_TiledRgbaInputFile_t * * lhs
    , Imf_3_0::TiledRgbaInputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledRgbaInputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_TiledRgbaInputFile_t * * lhs
    , Imf_3_0::TiledRgbaInputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TiledRgbaInputFile_t * >(rhs);
}


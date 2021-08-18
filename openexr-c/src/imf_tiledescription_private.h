#pragma once
#include <imf_tiledescription.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfTileDescription.h>
#include <cstring>

inline Imf_3_0::LevelMode const & Imf_LevelMode_to_cpp_ref(
    Imf_LevelMode const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::LevelMode const * >(rhs));
}

inline Imf_3_0::LevelMode & Imf_LevelMode_to_cpp_ref(
    Imf_LevelMode * rhs)
{
        return *(reinterpret_cast<Imf_3_0::LevelMode * >(rhs));
}

inline Imf_3_0::LevelMode const * Imf_LevelMode_to_cpp(
    Imf_LevelMode const * rhs)
{
        return reinterpret_cast<Imf_3_0::LevelMode const * >(rhs);
}

inline Imf_3_0::LevelMode * Imf_LevelMode_to_cpp(
    Imf_LevelMode * rhs)
{
        return reinterpret_cast<Imf_3_0::LevelMode * >(rhs);
}

inline void to_c(
    Imf_LevelMode const * * lhs
    , Imf_3_0::LevelMode const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_LevelMode const * >(&(rhs));
}

inline void to_c(
    Imf_LevelMode const * * lhs
    , Imf_3_0::LevelMode const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_LevelMode const * >(rhs);
}

inline void to_c(
    Imf_LevelMode * * lhs
    , Imf_3_0::LevelMode & rhs)
{
        *(lhs) = reinterpret_cast<Imf_LevelMode * >(&(rhs));
}

inline void to_c(
    Imf_LevelMode * * lhs
    , Imf_3_0::LevelMode * rhs)
{
        *(lhs) = reinterpret_cast<Imf_LevelMode * >(rhs);
}

inline void to_c_copy(
    Imf_LevelMode * lhs
    , Imf_3_0::LevelMode const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imf_3_0::LevelRoundingMode const & Imf_LevelRoundingMode_to_cpp_ref(
    Imf_LevelRoundingMode const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::LevelRoundingMode const * >(rhs));
}

inline Imf_3_0::LevelRoundingMode & Imf_LevelRoundingMode_to_cpp_ref(
    Imf_LevelRoundingMode * rhs)
{
        return *(reinterpret_cast<Imf_3_0::LevelRoundingMode * >(rhs));
}

inline Imf_3_0::LevelRoundingMode const * Imf_LevelRoundingMode_to_cpp(
    Imf_LevelRoundingMode const * rhs)
{
        return reinterpret_cast<Imf_3_0::LevelRoundingMode const * >(rhs);
}

inline Imf_3_0::LevelRoundingMode * Imf_LevelRoundingMode_to_cpp(
    Imf_LevelRoundingMode * rhs)
{
        return reinterpret_cast<Imf_3_0::LevelRoundingMode * >(rhs);
}

inline void to_c(
    Imf_LevelRoundingMode const * * lhs
    , Imf_3_0::LevelRoundingMode const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_LevelRoundingMode const * >(&(rhs));
}

inline void to_c(
    Imf_LevelRoundingMode const * * lhs
    , Imf_3_0::LevelRoundingMode const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_LevelRoundingMode const * >(rhs);
}

inline void to_c(
    Imf_LevelRoundingMode * * lhs
    , Imf_3_0::LevelRoundingMode & rhs)
{
        *(lhs) = reinterpret_cast<Imf_LevelRoundingMode * >(&(rhs));
}

inline void to_c(
    Imf_LevelRoundingMode * * lhs
    , Imf_3_0::LevelRoundingMode * rhs)
{
        *(lhs) = reinterpret_cast<Imf_LevelRoundingMode * >(rhs);
}

inline void to_c_copy(
    Imf_LevelRoundingMode * lhs
    , Imf_3_0::LevelRoundingMode const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imf_3_0::TileDescription const & to_cpp_ref(
    Imf_TileDescription_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TileDescription const * >(rhs));
}

inline Imf_3_0::TileDescription & to_cpp_ref(
    Imf_TileDescription_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TileDescription * >(rhs));
}

inline Imf_3_0::TileDescription const * to_cpp(
    Imf_TileDescription_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TileDescription const * >(rhs);
}

inline Imf_3_0::TileDescription * to_cpp(
    Imf_TileDescription_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TileDescription * >(rhs);
}

inline void to_c(
    Imf_TileDescription_t const * * lhs
    , Imf_3_0::TileDescription const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TileDescription_t const * >(&(rhs));
}

inline void to_c(
    Imf_TileDescription_t const * * lhs
    , Imf_3_0::TileDescription const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TileDescription_t const * >(rhs);
}

inline void to_c(
    Imf_TileDescription_t * * lhs
    , Imf_3_0::TileDescription & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TileDescription_t * >(&(rhs));
}

inline void to_c(
    Imf_TileDescription_t * * lhs
    , Imf_3_0::TileDescription * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TileDescription_t * >(rhs);
}

inline void to_c_copy(
    Imf_TileDescription_t * lhs
    , Imf_3_0::TileDescription const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


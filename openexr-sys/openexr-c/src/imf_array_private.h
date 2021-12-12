#pragma once
#include <imf_array.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfArray.h>
#include <cstring>

inline Imf_3_0::Array<float> const & to_cpp_ref(
    Imf_ArrayFloat_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Array<float> const * >(rhs));
}

inline Imf_3_0::Array<float> & to_cpp_ref(
    Imf_ArrayFloat_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Array<float> * >(rhs));
}

inline Imf_3_0::Array<float> const * to_cpp(
    Imf_ArrayFloat_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Array<float> const * >(rhs);
}

inline Imf_3_0::Array<float> * to_cpp(
    Imf_ArrayFloat_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Array<float> * >(rhs);
}

inline void to_c(
    Imf_ArrayFloat_t const * * lhs
    , Imf_3_0::Array<float> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ArrayFloat_t const * >(&(rhs));
}

inline void to_c(
    Imf_ArrayFloat_t const * * lhs
    , Imf_3_0::Array<float> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ArrayFloat_t const * >(rhs);
}

inline void to_c(
    Imf_ArrayFloat_t * * lhs
    , Imf_3_0::Array<float> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ArrayFloat_t * >(&(rhs));
}

inline void to_c(
    Imf_ArrayFloat_t * * lhs
    , Imf_3_0::Array<float> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ArrayFloat_t * >(rhs);
}

inline Imf_3_0::Array<char> const & to_cpp_ref(
    Imf_ArrayChar_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Array<char> const * >(rhs));
}

inline Imf_3_0::Array<char> & to_cpp_ref(
    Imf_ArrayChar_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Array<char> * >(rhs));
}

inline Imf_3_0::Array<char> const * to_cpp(
    Imf_ArrayChar_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Array<char> const * >(rhs);
}

inline Imf_3_0::Array<char> * to_cpp(
    Imf_ArrayChar_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Array<char> * >(rhs);
}

inline void to_c(
    Imf_ArrayChar_t const * * lhs
    , Imf_3_0::Array<char> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ArrayChar_t const * >(&(rhs));
}

inline void to_c(
    Imf_ArrayChar_t const * * lhs
    , Imf_3_0::Array<char> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ArrayChar_t const * >(rhs);
}

inline void to_c(
    Imf_ArrayChar_t * * lhs
    , Imf_3_0::Array<char> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ArrayChar_t * >(&(rhs));
}

inline void to_c(
    Imf_ArrayChar_t * * lhs
    , Imf_3_0::Array<char> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ArrayChar_t * >(rhs);
}

inline Imf_3_0::Array2D<float> const & to_cpp_ref(
    Imf_Array2DFloat_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Array2D<float> const * >(rhs));
}

inline Imf_3_0::Array2D<float> & to_cpp_ref(
    Imf_Array2DFloat_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Array2D<float> * >(rhs));
}

inline Imf_3_0::Array2D<float> const * to_cpp(
    Imf_Array2DFloat_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Array2D<float> const * >(rhs);
}

inline Imf_3_0::Array2D<float> * to_cpp(
    Imf_Array2DFloat_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Array2D<float> * >(rhs);
}

inline void to_c(
    Imf_Array2DFloat_t const * * lhs
    , Imf_3_0::Array2D<float> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Array2DFloat_t const * >(&(rhs));
}

inline void to_c(
    Imf_Array2DFloat_t const * * lhs
    , Imf_3_0::Array2D<float> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Array2DFloat_t const * >(rhs);
}

inline void to_c(
    Imf_Array2DFloat_t * * lhs
    , Imf_3_0::Array2D<float> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Array2DFloat_t * >(&(rhs));
}

inline void to_c(
    Imf_Array2DFloat_t * * lhs
    , Imf_3_0::Array2D<float> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Array2DFloat_t * >(rhs);
}


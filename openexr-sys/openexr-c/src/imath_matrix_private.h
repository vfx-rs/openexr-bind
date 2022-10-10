#pragma once
#include <imath_matrix.h>


#include "openexr-errors-private.h"

#include <Imath/ImathMatrix.h>
#include <cstring>
#include <vector>

inline Imath_3_0::Uninitialized const & Imath_Uninitialized_to_cpp_ref(
    Imath_Uninitialized const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Uninitialized const * >(rhs));
}

inline Imath_3_0::Uninitialized & Imath_Uninitialized_to_cpp_ref(
    Imath_Uninitialized * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Uninitialized * >(rhs));
}

inline Imath_3_0::Uninitialized const * Imath_Uninitialized_to_cpp(
    Imath_Uninitialized const * rhs)
{
        return reinterpret_cast<Imath_3_0::Uninitialized const * >(rhs);
}

inline Imath_3_0::Uninitialized * Imath_Uninitialized_to_cpp(
    Imath_Uninitialized * rhs)
{
        return reinterpret_cast<Imath_3_0::Uninitialized * >(rhs);
}

inline void to_c(
    Imath_Uninitialized const * * lhs
    , Imath_3_0::Uninitialized const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Uninitialized const * >(&(rhs));
}

inline void to_c(
    Imath_Uninitialized const * * lhs
    , Imath_3_0::Uninitialized const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Uninitialized const * >(rhs);
}

inline void to_c(
    Imath_Uninitialized * * lhs
    , Imath_3_0::Uninitialized & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Uninitialized * >(&(rhs));
}

inline void to_c(
    Imath_Uninitialized * * lhs
    , Imath_3_0::Uninitialized * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Uninitialized * >(rhs);
}

inline void to_c_copy(
    Imath_Uninitialized * lhs
    , Imath_3_0::Uninitialized const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Matrix33<float> const & to_cpp_ref(
    Imath_M33f_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Matrix33<float> const * >(rhs));
}

inline Imath_3_0::Matrix33<float> & to_cpp_ref(
    Imath_M33f_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Matrix33<float> * >(rhs));
}

inline Imath_3_0::Matrix33<float> const * to_cpp(
    Imath_M33f_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Matrix33<float> const * >(rhs);
}

inline Imath_3_0::Matrix33<float> * to_cpp(
    Imath_M33f_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Matrix33<float> * >(rhs);
}

inline void to_c(
    Imath_M33f_t const * * lhs
    , Imath_3_0::Matrix33<float> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_M33f_t const * >(&(rhs));
}

inline void to_c(
    Imath_M33f_t const * * lhs
    , Imath_3_0::Matrix33<float> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_M33f_t const * >(rhs);
}

inline void to_c(
    Imath_M33f_t * * lhs
    , Imath_3_0::Matrix33<float> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_M33f_t * >(&(rhs));
}

inline void to_c(
    Imath_M33f_t * * lhs
    , Imath_3_0::Matrix33<float> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_M33f_t * >(rhs);
}

inline void to_c_copy(
    Imath_M33f_t * lhs
    , Imath_3_0::Matrix33<float> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Matrix33<double> const & to_cpp_ref(
    Imath_M33d_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Matrix33<double> const * >(rhs));
}

inline Imath_3_0::Matrix33<double> & to_cpp_ref(
    Imath_M33d_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Matrix33<double> * >(rhs));
}

inline Imath_3_0::Matrix33<double> const * to_cpp(
    Imath_M33d_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Matrix33<double> const * >(rhs);
}

inline Imath_3_0::Matrix33<double> * to_cpp(
    Imath_M33d_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Matrix33<double> * >(rhs);
}

inline void to_c(
    Imath_M33d_t const * * lhs
    , Imath_3_0::Matrix33<double> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_M33d_t const * >(&(rhs));
}

inline void to_c(
    Imath_M33d_t const * * lhs
    , Imath_3_0::Matrix33<double> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_M33d_t const * >(rhs);
}

inline void to_c(
    Imath_M33d_t * * lhs
    , Imath_3_0::Matrix33<double> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_M33d_t * >(&(rhs));
}

inline void to_c(
    Imath_M33d_t * * lhs
    , Imath_3_0::Matrix33<double> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_M33d_t * >(rhs);
}

inline void to_c_copy(
    Imath_M33d_t * lhs
    , Imath_3_0::Matrix33<double> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Matrix44<float> const & to_cpp_ref(
    Imath_M44f_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Matrix44<float> const * >(rhs));
}

inline Imath_3_0::Matrix44<float> & to_cpp_ref(
    Imath_M44f_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Matrix44<float> * >(rhs));
}

inline Imath_3_0::Matrix44<float> const * to_cpp(
    Imath_M44f_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Matrix44<float> const * >(rhs);
}

inline Imath_3_0::Matrix44<float> * to_cpp(
    Imath_M44f_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Matrix44<float> * >(rhs);
}

inline void to_c(
    Imath_M44f_t const * * lhs
    , Imath_3_0::Matrix44<float> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_M44f_t const * >(&(rhs));
}

inline void to_c(
    Imath_M44f_t const * * lhs
    , Imath_3_0::Matrix44<float> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_M44f_t const * >(rhs);
}

inline void to_c(
    Imath_M44f_t * * lhs
    , Imath_3_0::Matrix44<float> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_M44f_t * >(&(rhs));
}

inline void to_c(
    Imath_M44f_t * * lhs
    , Imath_3_0::Matrix44<float> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_M44f_t * >(rhs);
}

inline void to_c_copy(
    Imath_M44f_t * lhs
    , Imath_3_0::Matrix44<float> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Matrix44<double> const & to_cpp_ref(
    Imath_M44d_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Matrix44<double> const * >(rhs));
}

inline Imath_3_0::Matrix44<double> & to_cpp_ref(
    Imath_M44d_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Matrix44<double> * >(rhs));
}

inline Imath_3_0::Matrix44<double> const * to_cpp(
    Imath_M44d_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Matrix44<double> const * >(rhs);
}

inline Imath_3_0::Matrix44<double> * to_cpp(
    Imath_M44d_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Matrix44<double> * >(rhs);
}

inline void to_c(
    Imath_M44d_t const * * lhs
    , Imath_3_0::Matrix44<double> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_M44d_t const * >(&(rhs));
}

inline void to_c(
    Imath_M44d_t const * * lhs
    , Imath_3_0::Matrix44<double> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_M44d_t const * >(rhs);
}

inline void to_c(
    Imath_M44d_t * * lhs
    , Imath_3_0::Matrix44<double> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_M44d_t * >(&(rhs));
}

inline void to_c(
    Imath_M44d_t * * lhs
    , Imath_3_0::Matrix44<double> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_M44d_t * >(rhs);
}

inline void to_c_copy(
    Imath_M44d_t * lhs
    , Imath_3_0::Matrix44<double> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


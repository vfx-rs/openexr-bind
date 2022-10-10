#pragma once
#include <imath_vec.h>


#include "openexr-errors-private.h"

#include <Imath/ImathVec.h>
#include <cstring>
#include <vector>

inline Imath_3_0::InfException const & Imath_InfException_to_cpp_ref(
    Imath_InfException const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::InfException const * >(rhs));
}

inline Imath_3_0::InfException & Imath_InfException_to_cpp_ref(
    Imath_InfException * rhs)
{
        return *(reinterpret_cast<Imath_3_0::InfException * >(rhs));
}

inline Imath_3_0::InfException const * Imath_InfException_to_cpp(
    Imath_InfException const * rhs)
{
        return reinterpret_cast<Imath_3_0::InfException const * >(rhs);
}

inline Imath_3_0::InfException * Imath_InfException_to_cpp(
    Imath_InfException * rhs)
{
        return reinterpret_cast<Imath_3_0::InfException * >(rhs);
}

inline void to_c(
    Imath_InfException const * * lhs
    , Imath_3_0::InfException const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_InfException const * >(&(rhs));
}

inline void to_c(
    Imath_InfException const * * lhs
    , Imath_3_0::InfException const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_InfException const * >(rhs);
}

inline void to_c(
    Imath_InfException * * lhs
    , Imath_3_0::InfException & rhs)
{
        *(lhs) = reinterpret_cast<Imath_InfException * >(&(rhs));
}

inline void to_c(
    Imath_InfException * * lhs
    , Imath_3_0::InfException * rhs)
{
        *(lhs) = reinterpret_cast<Imath_InfException * >(rhs);
}

inline void to_c_copy(
    Imath_InfException * lhs
    , Imath_3_0::InfException const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Vec2<short> const & to_cpp_ref(
    Imath_V2s_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec2<short> const * >(rhs));
}

inline Imath_3_0::Vec2<short> & to_cpp_ref(
    Imath_V2s_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec2<short> * >(rhs));
}

inline Imath_3_0::Vec2<short> const * to_cpp(
    Imath_V2s_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec2<short> const * >(rhs);
}

inline Imath_3_0::Vec2<short> * to_cpp(
    Imath_V2s_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec2<short> * >(rhs);
}

inline void to_c(
    Imath_V2s_t const * * lhs
    , Imath_3_0::Vec2<short> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2s_t const * >(&(rhs));
}

inline void to_c(
    Imath_V2s_t const * * lhs
    , Imath_3_0::Vec2<short> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2s_t const * >(rhs);
}

inline void to_c(
    Imath_V2s_t * * lhs
    , Imath_3_0::Vec2<short> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2s_t * >(&(rhs));
}

inline void to_c(
    Imath_V2s_t * * lhs
    , Imath_3_0::Vec2<short> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2s_t * >(rhs);
}

inline void to_c_copy(
    Imath_V2s_t * lhs
    , Imath_3_0::Vec2<short> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Vec2<int> const & to_cpp_ref(
    Imath_V2i_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec2<int> const * >(rhs));
}

inline Imath_3_0::Vec2<int> & to_cpp_ref(
    Imath_V2i_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec2<int> * >(rhs));
}

inline Imath_3_0::Vec2<int> const * to_cpp(
    Imath_V2i_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec2<int> const * >(rhs);
}

inline Imath_3_0::Vec2<int> * to_cpp(
    Imath_V2i_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec2<int> * >(rhs);
}

inline void to_c(
    Imath_V2i_t const * * lhs
    , Imath_3_0::Vec2<int> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2i_t const * >(&(rhs));
}

inline void to_c(
    Imath_V2i_t const * * lhs
    , Imath_3_0::Vec2<int> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2i_t const * >(rhs);
}

inline void to_c(
    Imath_V2i_t * * lhs
    , Imath_3_0::Vec2<int> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2i_t * >(&(rhs));
}

inline void to_c(
    Imath_V2i_t * * lhs
    , Imath_3_0::Vec2<int> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2i_t * >(rhs);
}

inline void to_c_copy(
    Imath_V2i_t * lhs
    , Imath_3_0::Vec2<int> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Vec2<long> const & to_cpp_ref(
    Imath_V2i64_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec2<long> const * >(rhs));
}

inline Imath_3_0::Vec2<long> & to_cpp_ref(
    Imath_V2i64_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec2<long> * >(rhs));
}

inline Imath_3_0::Vec2<long> const * to_cpp(
    Imath_V2i64_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec2<long> const * >(rhs);
}

inline Imath_3_0::Vec2<long> * to_cpp(
    Imath_V2i64_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec2<long> * >(rhs);
}

inline void to_c(
    Imath_V2i64_t const * * lhs
    , Imath_3_0::Vec2<long> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2i64_t const * >(&(rhs));
}

inline void to_c(
    Imath_V2i64_t const * * lhs
    , Imath_3_0::Vec2<long> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2i64_t const * >(rhs);
}

inline void to_c(
    Imath_V2i64_t * * lhs
    , Imath_3_0::Vec2<long> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2i64_t * >(&(rhs));
}

inline void to_c(
    Imath_V2i64_t * * lhs
    , Imath_3_0::Vec2<long> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2i64_t * >(rhs);
}

inline void to_c_copy(
    Imath_V2i64_t * lhs
    , Imath_3_0::Vec2<long> const & rhs)
{
        Imath_3_0__Vec2_long__copy(lhs, reinterpret_cast<Imath_V2i64_t const * >(&(rhs)));
}

inline Imath_3_0::Vec2<float> const & to_cpp_ref(
    Imath_V2f_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec2<float> const * >(rhs));
}

inline Imath_3_0::Vec2<float> & to_cpp_ref(
    Imath_V2f_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec2<float> * >(rhs));
}

inline Imath_3_0::Vec2<float> const * to_cpp(
    Imath_V2f_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec2<float> const * >(rhs);
}

inline Imath_3_0::Vec2<float> * to_cpp(
    Imath_V2f_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec2<float> * >(rhs);
}

inline void to_c(
    Imath_V2f_t const * * lhs
    , Imath_3_0::Vec2<float> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2f_t const * >(&(rhs));
}

inline void to_c(
    Imath_V2f_t const * * lhs
    , Imath_3_0::Vec2<float> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2f_t const * >(rhs);
}

inline void to_c(
    Imath_V2f_t * * lhs
    , Imath_3_0::Vec2<float> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2f_t * >(&(rhs));
}

inline void to_c(
    Imath_V2f_t * * lhs
    , Imath_3_0::Vec2<float> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2f_t * >(rhs);
}

inline void to_c_copy(
    Imath_V2f_t * lhs
    , Imath_3_0::Vec2<float> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Vec2<double> const & to_cpp_ref(
    Imath_V2d_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec2<double> const * >(rhs));
}

inline Imath_3_0::Vec2<double> & to_cpp_ref(
    Imath_V2d_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec2<double> * >(rhs));
}

inline Imath_3_0::Vec2<double> const * to_cpp(
    Imath_V2d_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec2<double> const * >(rhs);
}

inline Imath_3_0::Vec2<double> * to_cpp(
    Imath_V2d_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec2<double> * >(rhs);
}

inline void to_c(
    Imath_V2d_t const * * lhs
    , Imath_3_0::Vec2<double> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2d_t const * >(&(rhs));
}

inline void to_c(
    Imath_V2d_t const * * lhs
    , Imath_3_0::Vec2<double> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2d_t const * >(rhs);
}

inline void to_c(
    Imath_V2d_t * * lhs
    , Imath_3_0::Vec2<double> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2d_t * >(&(rhs));
}

inline void to_c(
    Imath_V2d_t * * lhs
    , Imath_3_0::Vec2<double> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V2d_t * >(rhs);
}

inline void to_c_copy(
    Imath_V2d_t * lhs
    , Imath_3_0::Vec2<double> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Vec3<short> const & to_cpp_ref(
    Imath_V3s_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec3<short> const * >(rhs));
}

inline Imath_3_0::Vec3<short> & to_cpp_ref(
    Imath_V3s_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec3<short> * >(rhs));
}

inline Imath_3_0::Vec3<short> const * to_cpp(
    Imath_V3s_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec3<short> const * >(rhs);
}

inline Imath_3_0::Vec3<short> * to_cpp(
    Imath_V3s_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec3<short> * >(rhs);
}

inline void to_c(
    Imath_V3s_t const * * lhs
    , Imath_3_0::Vec3<short> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3s_t const * >(&(rhs));
}

inline void to_c(
    Imath_V3s_t const * * lhs
    , Imath_3_0::Vec3<short> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3s_t const * >(rhs);
}

inline void to_c(
    Imath_V3s_t * * lhs
    , Imath_3_0::Vec3<short> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3s_t * >(&(rhs));
}

inline void to_c(
    Imath_V3s_t * * lhs
    , Imath_3_0::Vec3<short> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3s_t * >(rhs);
}

inline void to_c_copy(
    Imath_V3s_t * lhs
    , Imath_3_0::Vec3<short> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Vec3<int> const & to_cpp_ref(
    Imath_V3i_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec3<int> const * >(rhs));
}

inline Imath_3_0::Vec3<int> & to_cpp_ref(
    Imath_V3i_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec3<int> * >(rhs));
}

inline Imath_3_0::Vec3<int> const * to_cpp(
    Imath_V3i_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec3<int> const * >(rhs);
}

inline Imath_3_0::Vec3<int> * to_cpp(
    Imath_V3i_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec3<int> * >(rhs);
}

inline void to_c(
    Imath_V3i_t const * * lhs
    , Imath_3_0::Vec3<int> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3i_t const * >(&(rhs));
}

inline void to_c(
    Imath_V3i_t const * * lhs
    , Imath_3_0::Vec3<int> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3i_t const * >(rhs);
}

inline void to_c(
    Imath_V3i_t * * lhs
    , Imath_3_0::Vec3<int> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3i_t * >(&(rhs));
}

inline void to_c(
    Imath_V3i_t * * lhs
    , Imath_3_0::Vec3<int> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3i_t * >(rhs);
}

inline void to_c_copy(
    Imath_V3i_t * lhs
    , Imath_3_0::Vec3<int> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Vec3<long> const & to_cpp_ref(
    Imath_V3i64_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec3<long> const * >(rhs));
}

inline Imath_3_0::Vec3<long> & to_cpp_ref(
    Imath_V3i64_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec3<long> * >(rhs));
}

inline Imath_3_0::Vec3<long> const * to_cpp(
    Imath_V3i64_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec3<long> const * >(rhs);
}

inline Imath_3_0::Vec3<long> * to_cpp(
    Imath_V3i64_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec3<long> * >(rhs);
}

inline void to_c(
    Imath_V3i64_t const * * lhs
    , Imath_3_0::Vec3<long> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3i64_t const * >(&(rhs));
}

inline void to_c(
    Imath_V3i64_t const * * lhs
    , Imath_3_0::Vec3<long> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3i64_t const * >(rhs);
}

inline void to_c(
    Imath_V3i64_t * * lhs
    , Imath_3_0::Vec3<long> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3i64_t * >(&(rhs));
}

inline void to_c(
    Imath_V3i64_t * * lhs
    , Imath_3_0::Vec3<long> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3i64_t * >(rhs);
}

inline void to_c_copy(
    Imath_V3i64_t * lhs
    , Imath_3_0::Vec3<long> const & rhs)
{
        Imath_3_0__Vec3_long__copy(lhs, reinterpret_cast<Imath_V3i64_t const * >(&(rhs)));
}

inline Imath_3_0::Vec3<float> const & to_cpp_ref(
    Imath_V3f_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec3<float> const * >(rhs));
}

inline Imath_3_0::Vec3<float> & to_cpp_ref(
    Imath_V3f_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec3<float> * >(rhs));
}

inline Imath_3_0::Vec3<float> const * to_cpp(
    Imath_V3f_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec3<float> const * >(rhs);
}

inline Imath_3_0::Vec3<float> * to_cpp(
    Imath_V3f_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec3<float> * >(rhs);
}

inline void to_c(
    Imath_V3f_t const * * lhs
    , Imath_3_0::Vec3<float> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3f_t const * >(&(rhs));
}

inline void to_c(
    Imath_V3f_t const * * lhs
    , Imath_3_0::Vec3<float> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3f_t const * >(rhs);
}

inline void to_c(
    Imath_V3f_t * * lhs
    , Imath_3_0::Vec3<float> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3f_t * >(&(rhs));
}

inline void to_c(
    Imath_V3f_t * * lhs
    , Imath_3_0::Vec3<float> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3f_t * >(rhs);
}

inline void to_c_copy(
    Imath_V3f_t * lhs
    , Imath_3_0::Vec3<float> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Vec3<double> const & to_cpp_ref(
    Imath_V3d_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec3<double> const * >(rhs));
}

inline Imath_3_0::Vec3<double> & to_cpp_ref(
    Imath_V3d_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec3<double> * >(rhs));
}

inline Imath_3_0::Vec3<double> const * to_cpp(
    Imath_V3d_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec3<double> const * >(rhs);
}

inline Imath_3_0::Vec3<double> * to_cpp(
    Imath_V3d_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec3<double> * >(rhs);
}

inline void to_c(
    Imath_V3d_t const * * lhs
    , Imath_3_0::Vec3<double> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3d_t const * >(&(rhs));
}

inline void to_c(
    Imath_V3d_t const * * lhs
    , Imath_3_0::Vec3<double> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3d_t const * >(rhs);
}

inline void to_c(
    Imath_V3d_t * * lhs
    , Imath_3_0::Vec3<double> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3d_t * >(&(rhs));
}

inline void to_c(
    Imath_V3d_t * * lhs
    , Imath_3_0::Vec3<double> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V3d_t * >(rhs);
}

inline void to_c_copy(
    Imath_V3d_t * lhs
    , Imath_3_0::Vec3<double> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Vec4<short> const & to_cpp_ref(
    Imath_V4s_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec4<short> const * >(rhs));
}

inline Imath_3_0::Vec4<short> & to_cpp_ref(
    Imath_V4s_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec4<short> * >(rhs));
}

inline Imath_3_0::Vec4<short> const * to_cpp(
    Imath_V4s_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec4<short> const * >(rhs);
}

inline Imath_3_0::Vec4<short> * to_cpp(
    Imath_V4s_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec4<short> * >(rhs);
}

inline void to_c(
    Imath_V4s_t const * * lhs
    , Imath_3_0::Vec4<short> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4s_t const * >(&(rhs));
}

inline void to_c(
    Imath_V4s_t const * * lhs
    , Imath_3_0::Vec4<short> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4s_t const * >(rhs);
}

inline void to_c(
    Imath_V4s_t * * lhs
    , Imath_3_0::Vec4<short> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4s_t * >(&(rhs));
}

inline void to_c(
    Imath_V4s_t * * lhs
    , Imath_3_0::Vec4<short> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4s_t * >(rhs);
}

inline void to_c_copy(
    Imath_V4s_t * lhs
    , Imath_3_0::Vec4<short> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Vec4<int> const & to_cpp_ref(
    Imath_Vec4_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec4<int> const * >(rhs));
}

inline Imath_3_0::Vec4<int> & to_cpp_ref(
    Imath_Vec4_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec4<int> * >(rhs));
}

inline Imath_3_0::Vec4<int> const * to_cpp(
    Imath_Vec4_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec4<int> const * >(rhs);
}

inline Imath_3_0::Vec4<int> * to_cpp(
    Imath_Vec4_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec4<int> * >(rhs);
}

inline void to_c(
    Imath_Vec4_t const * * lhs
    , Imath_3_0::Vec4<int> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Vec4_t const * >(&(rhs));
}

inline void to_c(
    Imath_Vec4_t const * * lhs
    , Imath_3_0::Vec4<int> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Vec4_t const * >(rhs);
}

inline void to_c(
    Imath_Vec4_t * * lhs
    , Imath_3_0::Vec4<int> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Vec4_t * >(&(rhs));
}

inline void to_c(
    Imath_Vec4_t * * lhs
    , Imath_3_0::Vec4<int> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Vec4_t * >(rhs);
}

inline void to_c_copy(
    Imath_Vec4_t * lhs
    , Imath_3_0::Vec4<int> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Vec4<long> const & to_cpp_ref(
    Imath_V4i64_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec4<long> const * >(rhs));
}

inline Imath_3_0::Vec4<long> & to_cpp_ref(
    Imath_V4i64_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec4<long> * >(rhs));
}

inline Imath_3_0::Vec4<long> const * to_cpp(
    Imath_V4i64_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec4<long> const * >(rhs);
}

inline Imath_3_0::Vec4<long> * to_cpp(
    Imath_V4i64_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec4<long> * >(rhs);
}

inline void to_c(
    Imath_V4i64_t const * * lhs
    , Imath_3_0::Vec4<long> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4i64_t const * >(&(rhs));
}

inline void to_c(
    Imath_V4i64_t const * * lhs
    , Imath_3_0::Vec4<long> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4i64_t const * >(rhs);
}

inline void to_c(
    Imath_V4i64_t * * lhs
    , Imath_3_0::Vec4<long> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4i64_t * >(&(rhs));
}

inline void to_c(
    Imath_V4i64_t * * lhs
    , Imath_3_0::Vec4<long> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4i64_t * >(rhs);
}

inline void to_c_copy(
    Imath_V4i64_t * lhs
    , Imath_3_0::Vec4<long> const & rhs)
{
        Imath_3_0__Vec4_long__copy(lhs, reinterpret_cast<Imath_V4i64_t const * >(&(rhs)));
}

inline Imath_3_0::Vec4<float> const & to_cpp_ref(
    Imath_V4f_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec4<float> const * >(rhs));
}

inline Imath_3_0::Vec4<float> & to_cpp_ref(
    Imath_V4f_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec4<float> * >(rhs));
}

inline Imath_3_0::Vec4<float> const * to_cpp(
    Imath_V4f_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec4<float> const * >(rhs);
}

inline Imath_3_0::Vec4<float> * to_cpp(
    Imath_V4f_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec4<float> * >(rhs);
}

inline void to_c(
    Imath_V4f_t const * * lhs
    , Imath_3_0::Vec4<float> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4f_t const * >(&(rhs));
}

inline void to_c(
    Imath_V4f_t const * * lhs
    , Imath_3_0::Vec4<float> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4f_t const * >(rhs);
}

inline void to_c(
    Imath_V4f_t * * lhs
    , Imath_3_0::Vec4<float> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4f_t * >(&(rhs));
}

inline void to_c(
    Imath_V4f_t * * lhs
    , Imath_3_0::Vec4<float> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4f_t * >(rhs);
}

inline void to_c_copy(
    Imath_V4f_t * lhs
    , Imath_3_0::Vec4<float> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imath_3_0::Vec4<double> const & to_cpp_ref(
    Imath_V4d_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec4<double> const * >(rhs));
}

inline Imath_3_0::Vec4<double> & to_cpp_ref(
    Imath_V4d_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Vec4<double> * >(rhs));
}

inline Imath_3_0::Vec4<double> const * to_cpp(
    Imath_V4d_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec4<double> const * >(rhs);
}

inline Imath_3_0::Vec4<double> * to_cpp(
    Imath_V4d_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Vec4<double> * >(rhs);
}

inline void to_c(
    Imath_V4d_t const * * lhs
    , Imath_3_0::Vec4<double> const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4d_t const * >(&(rhs));
}

inline void to_c(
    Imath_V4d_t const * * lhs
    , Imath_3_0::Vec4<double> const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4d_t const * >(rhs);
}

inline void to_c(
    Imath_V4d_t * * lhs
    , Imath_3_0::Vec4<double> & rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4d_t * >(&(rhs));
}

inline void to_c(
    Imath_V4d_t * * lhs
    , Imath_3_0::Vec4<double> * rhs)
{
        *(lhs) = reinterpret_cast<Imath_V4d_t * >(rhs);
}

inline void to_c_copy(
    Imath_V4d_t * lhs
    , Imath_3_0::Vec4<double> const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


#pragma once
#include <imath_box.h>


#include "openexr-errors-private.h"

#include <Imath/ImathBox.h>
#include <cstring>

inline Imath_3_0::Box<Imath_3_0::Vec2<short> > const & to_cpp_ref(
    Imath_Box2s_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<short> > const * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec2<short> > & to_cpp_ref(
    Imath_Box2s_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<short> > * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec2<short> > const * to_cpp(
    Imath_Box2s_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<short> > const * >(rhs);
}

inline Imath_3_0::Box<Imath_3_0::Vec2<short> > * to_cpp(
    Imath_Box2s_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<short> > * >(rhs);
}

inline void to_c(
    Imath_Box2s_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<short> > const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2s_t const * >(&(rhs));
}

inline void to_c(
    Imath_Box2s_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<short> > const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2s_t const * >(rhs);
}

inline void to_c(
    Imath_Box2s_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<short> > & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2s_t * >(&(rhs));
}

inline void to_c(
    Imath_Box2s_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<short> > * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2s_t * >(rhs);
}

inline void to_c_copy(
    Imath_Box2s_t * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<short> > const & rhs)
{
        Imath_3_0__Box_Imath_3_0__Vec2_short___copy(lhs, reinterpret_cast<Imath_Box2s_t const * >(&(rhs)));
}

inline Imath_3_0::Box<Imath_3_0::Vec2<int> > const & to_cpp_ref(
    Imath_Box2i_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<int> > const * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec2<int> > & to_cpp_ref(
    Imath_Box2i_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<int> > * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec2<int> > const * to_cpp(
    Imath_Box2i_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<int> > const * >(rhs);
}

inline Imath_3_0::Box<Imath_3_0::Vec2<int> > * to_cpp(
    Imath_Box2i_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<int> > * >(rhs);
}

inline void to_c(
    Imath_Box2i_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<int> > const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2i_t const * >(&(rhs));
}

inline void to_c(
    Imath_Box2i_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<int> > const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2i_t const * >(rhs);
}

inline void to_c(
    Imath_Box2i_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<int> > & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2i_t * >(&(rhs));
}

inline void to_c(
    Imath_Box2i_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<int> > * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2i_t * >(rhs);
}

inline void to_c_copy(
    Imath_Box2i_t * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<int> > const & rhs)
{
        Imath_3_0__Box_Imath_3_0__Vec2_int___copy(lhs, reinterpret_cast<Imath_Box2i_t const * >(&(rhs)));
}

inline Imath_3_0::Box<Imath_3_0::Vec2<float> > const & to_cpp_ref(
    Imath_Box2f_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<float> > const * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec2<float> > & to_cpp_ref(
    Imath_Box2f_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<float> > * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec2<float> > const * to_cpp(
    Imath_Box2f_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<float> > const * >(rhs);
}

inline Imath_3_0::Box<Imath_3_0::Vec2<float> > * to_cpp(
    Imath_Box2f_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<float> > * >(rhs);
}

inline void to_c(
    Imath_Box2f_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<float> > const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2f_t const * >(&(rhs));
}

inline void to_c(
    Imath_Box2f_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<float> > const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2f_t const * >(rhs);
}

inline void to_c(
    Imath_Box2f_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<float> > & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2f_t * >(&(rhs));
}

inline void to_c(
    Imath_Box2f_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<float> > * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2f_t * >(rhs);
}

inline void to_c_copy(
    Imath_Box2f_t * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<float> > const & rhs)
{
        Imath_3_0__Box_Imath_3_0__Vec2_float___copy(lhs, reinterpret_cast<Imath_Box2f_t const * >(&(rhs)));
}

inline Imath_3_0::Box<Imath_3_0::Vec2<double> > const & to_cpp_ref(
    Imath_Box2d_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<double> > const * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec2<double> > & to_cpp_ref(
    Imath_Box2d_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<double> > * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec2<double> > const * to_cpp(
    Imath_Box2d_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<double> > const * >(rhs);
}

inline Imath_3_0::Box<Imath_3_0::Vec2<double> > * to_cpp(
    Imath_Box2d_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec2<double> > * >(rhs);
}

inline void to_c(
    Imath_Box2d_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<double> > const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2d_t const * >(&(rhs));
}

inline void to_c(
    Imath_Box2d_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<double> > const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2d_t const * >(rhs);
}

inline void to_c(
    Imath_Box2d_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<double> > & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2d_t * >(&(rhs));
}

inline void to_c(
    Imath_Box2d_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<double> > * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box2d_t * >(rhs);
}

inline void to_c_copy(
    Imath_Box2d_t * lhs
    , Imath_3_0::Box<Imath_3_0::Vec2<double> > const & rhs)
{
        Imath_3_0__Box_Imath_3_0__Vec2_double___copy(lhs, reinterpret_cast<Imath_Box2d_t const * >(&(rhs)));
}

inline Imath_3_0::Box<Imath_3_0::Vec3<short> > const & to_cpp_ref(
    Imath_Box3s_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<short> > const * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec3<short> > & to_cpp_ref(
    Imath_Box3s_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<short> > * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec3<short> > const * to_cpp(
    Imath_Box3s_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<short> > const * >(rhs);
}

inline Imath_3_0::Box<Imath_3_0::Vec3<short> > * to_cpp(
    Imath_Box3s_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<short> > * >(rhs);
}

inline void to_c(
    Imath_Box3s_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<short> > const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3s_t const * >(&(rhs));
}

inline void to_c(
    Imath_Box3s_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<short> > const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3s_t const * >(rhs);
}

inline void to_c(
    Imath_Box3s_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<short> > & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3s_t * >(&(rhs));
}

inline void to_c(
    Imath_Box3s_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<short> > * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3s_t * >(rhs);
}

inline void to_c_copy(
    Imath_Box3s_t * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<short> > const & rhs)
{
        Imath_3_0__Box_Imath_3_0__Vec3_short___copy(lhs, reinterpret_cast<Imath_Box3s_t const * >(&(rhs)));
}

inline Imath_3_0::Box<Imath_3_0::Vec3<int> > const & to_cpp_ref(
    Imath_Box3i_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<int> > const * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec3<int> > & to_cpp_ref(
    Imath_Box3i_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<int> > * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec3<int> > const * to_cpp(
    Imath_Box3i_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<int> > const * >(rhs);
}

inline Imath_3_0::Box<Imath_3_0::Vec3<int> > * to_cpp(
    Imath_Box3i_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<int> > * >(rhs);
}

inline void to_c(
    Imath_Box3i_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<int> > const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3i_t const * >(&(rhs));
}

inline void to_c(
    Imath_Box3i_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<int> > const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3i_t const * >(rhs);
}

inline void to_c(
    Imath_Box3i_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<int> > & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3i_t * >(&(rhs));
}

inline void to_c(
    Imath_Box3i_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<int> > * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3i_t * >(rhs);
}

inline void to_c_copy(
    Imath_Box3i_t * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<int> > const & rhs)
{
        Imath_3_0__Box_Imath_3_0__Vec3_int___copy(lhs, reinterpret_cast<Imath_Box3i_t const * >(&(rhs)));
}

inline Imath_3_0::Box<Imath_3_0::Vec3<float> > const & to_cpp_ref(
    Imath_Box3f_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<float> > const * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec3<float> > & to_cpp_ref(
    Imath_Box3f_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<float> > * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec3<float> > const * to_cpp(
    Imath_Box3f_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<float> > const * >(rhs);
}

inline Imath_3_0::Box<Imath_3_0::Vec3<float> > * to_cpp(
    Imath_Box3f_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<float> > * >(rhs);
}

inline void to_c(
    Imath_Box3f_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<float> > const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3f_t const * >(&(rhs));
}

inline void to_c(
    Imath_Box3f_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<float> > const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3f_t const * >(rhs);
}

inline void to_c(
    Imath_Box3f_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<float> > & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3f_t * >(&(rhs));
}

inline void to_c(
    Imath_Box3f_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<float> > * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3f_t * >(rhs);
}

inline void to_c_copy(
    Imath_Box3f_t * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<float> > const & rhs)
{
        Imath_3_0__Box_Imath_3_0__Vec3_float___copy(lhs, reinterpret_cast<Imath_Box3f_t const * >(&(rhs)));
}

inline Imath_3_0::Box<Imath_3_0::Vec3<double> > const & to_cpp_ref(
    Imath_Box3d_t const * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<double> > const * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec3<double> > & to_cpp_ref(
    Imath_Box3d_t * rhs)
{
        return *(reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<double> > * >(rhs));
}

inline Imath_3_0::Box<Imath_3_0::Vec3<double> > const * to_cpp(
    Imath_Box3d_t const * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<double> > const * >(rhs);
}

inline Imath_3_0::Box<Imath_3_0::Vec3<double> > * to_cpp(
    Imath_Box3d_t * rhs)
{
        return reinterpret_cast<Imath_3_0::Box<Imath_3_0::Vec3<double> > * >(rhs);
}

inline void to_c(
    Imath_Box3d_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<double> > const & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3d_t const * >(&(rhs));
}

inline void to_c(
    Imath_Box3d_t const * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<double> > const * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3d_t const * >(rhs);
}

inline void to_c(
    Imath_Box3d_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<double> > & rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3d_t * >(&(rhs));
}

inline void to_c(
    Imath_Box3d_t * * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<double> > * rhs)
{
        *(lhs) = reinterpret_cast<Imath_Box3d_t * >(rhs);
}

inline void to_c_copy(
    Imath_Box3d_t * lhs
    , Imath_3_0::Box<Imath_3_0::Vec3<double> > const & rhs)
{
        Imath_3_0__Box_Imath_3_0__Vec3_double___copy(lhs, reinterpret_cast<Imath_Box3d_t const * >(&(rhs)));
}


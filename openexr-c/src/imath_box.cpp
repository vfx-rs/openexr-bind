#include "imath_box_private.h"

#include "imath_vec_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___ctor(
    Imath_Box2s_t * this_)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<short> >();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___ctor_1(
    Imath_Box2s_t * this_
    , Imath_V2s_t const * point)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<short> >(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___ctor_2(
    Imath_Box2s_t * this_
    , Imath_V2s_t const * minV
    , Imath_V2s_t const * maxV)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<short> >(to_cpp_ref(minV), to_cpp_ref(maxV));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short____eq(
    Imath_Box2s_t const * this_
    , _Bool * return_
    , Imath_Box2s_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short____ne(
    Imath_Box2s_t const * this_
    , _Bool * return_
    , Imath_Box2s_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___makeEmpty(
    Imath_Box2s_t * this_)
{
        (to_cpp(this_)) -> makeEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___extendBy(
    Imath_Box2s_t * this_
    , Imath_V2s_t const * point)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___extendBy_1(
    Imath_Box2s_t * this_
    , Imath_Box2s_t const * box)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___makeInfinite(
    Imath_Box2s_t * this_)
{
        (to_cpp(this_)) -> makeInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___size(
    Imath_Box2s_t const * this_
    , Imath_V2s_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> size());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___center(
    Imath_Box2s_t const * this_
    , Imath_V2s_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> center());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___intersects(
    Imath_Box2s_t const * this_
    , _Bool * return_
    , Imath_V2s_t const * point)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___intersects_1(
    Imath_Box2s_t const * this_
    , _Bool * return_
    , Imath_Box2s_t const * box)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___majorAxis(
    Imath_Box2s_t const * this_
    , unsigned int * return_)
{
        *(return_) = (to_cpp(this_)) -> majorAxis();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___isEmpty(
    Imath_Box2s_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___hasVolume(
    Imath_Box2s_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> hasVolume();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___isInfinite(
    Imath_Box2s_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___copy(
    Imath_Box2s_t * this_
    , Imath_Box2s_t const * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<short> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___move(
    Imath_Box2s_t * this_
    , Imath_Box2s_t * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<short> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___dtor(
    Imath_Box2s_t * this_)
{
    try {
        (to_cpp(this_)) -> Imath_3_0::Box<Imath_3_0::Vec2<short>>::~Box();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___ctor(
    Imath_Box2i_t * this_)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<int> >();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___ctor_1(
    Imath_Box2i_t * this_
    , Imath_V2i_t const * point)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<int> >(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___ctor_2(
    Imath_Box2i_t * this_
    , Imath_V2i_t const * minV
    , Imath_V2i_t const * maxV)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<int> >(to_cpp_ref(minV), to_cpp_ref(maxV));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int____eq(
    Imath_Box2i_t const * this_
    , _Bool * return_
    , Imath_Box2i_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int____ne(
    Imath_Box2i_t const * this_
    , _Bool * return_
    , Imath_Box2i_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___makeEmpty(
    Imath_Box2i_t * this_)
{
        (to_cpp(this_)) -> makeEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___extendBy(
    Imath_Box2i_t * this_
    , Imath_V2i_t const * point)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___extendBy_1(
    Imath_Box2i_t * this_
    , Imath_Box2i_t const * box)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___makeInfinite(
    Imath_Box2i_t * this_)
{
        (to_cpp(this_)) -> makeInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___size(
    Imath_Box2i_t const * this_
    , Imath_V2i_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> size());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___center(
    Imath_Box2i_t const * this_
    , Imath_V2i_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> center());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___intersects(
    Imath_Box2i_t const * this_
    , _Bool * return_
    , Imath_V2i_t const * point)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___intersects_1(
    Imath_Box2i_t const * this_
    , _Bool * return_
    , Imath_Box2i_t const * box)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___majorAxis(
    Imath_Box2i_t const * this_
    , unsigned int * return_)
{
        *(return_) = (to_cpp(this_)) -> majorAxis();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___isEmpty(
    Imath_Box2i_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___hasVolume(
    Imath_Box2i_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> hasVolume();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___isInfinite(
    Imath_Box2i_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___copy(
    Imath_Box2i_t * this_
    , Imath_Box2i_t const * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<int> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___move(
    Imath_Box2i_t * this_
    , Imath_Box2i_t * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<int> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___dtor(
    Imath_Box2i_t * this_)
{
    try {
        (to_cpp(this_)) -> Imath_3_0::Box<Imath_3_0::Vec2<int>>::~Box();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___ctor(
    Imath_Box2f_t * this_)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<float> >();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___ctor_1(
    Imath_Box2f_t * this_
    , Imath_V2f_t const * point)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<float> >(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___ctor_2(
    Imath_Box2f_t * this_
    , Imath_V2f_t const * minV
    , Imath_V2f_t const * maxV)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<float> >(to_cpp_ref(minV), to_cpp_ref(maxV));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float____eq(
    Imath_Box2f_t const * this_
    , _Bool * return_
    , Imath_Box2f_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float____ne(
    Imath_Box2f_t const * this_
    , _Bool * return_
    , Imath_Box2f_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___makeEmpty(
    Imath_Box2f_t * this_)
{
        (to_cpp(this_)) -> makeEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___extendBy(
    Imath_Box2f_t * this_
    , Imath_V2f_t const * point)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___extendBy_1(
    Imath_Box2f_t * this_
    , Imath_Box2f_t const * box)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___makeInfinite(
    Imath_Box2f_t * this_)
{
        (to_cpp(this_)) -> makeInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___size(
    Imath_Box2f_t const * this_
    , Imath_V2f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> size());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___center(
    Imath_Box2f_t const * this_
    , Imath_V2f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> center());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___intersects(
    Imath_Box2f_t const * this_
    , _Bool * return_
    , Imath_V2f_t const * point)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___intersects_1(
    Imath_Box2f_t const * this_
    , _Bool * return_
    , Imath_Box2f_t const * box)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___majorAxis(
    Imath_Box2f_t const * this_
    , unsigned int * return_)
{
        *(return_) = (to_cpp(this_)) -> majorAxis();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___isEmpty(
    Imath_Box2f_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___hasVolume(
    Imath_Box2f_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> hasVolume();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___isInfinite(
    Imath_Box2f_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___copy(
    Imath_Box2f_t * this_
    , Imath_Box2f_t const * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<float> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___move(
    Imath_Box2f_t * this_
    , Imath_Box2f_t * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<float> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___dtor(
    Imath_Box2f_t * this_)
{
    try {
        (to_cpp(this_)) -> Imath_3_0::Box<Imath_3_0::Vec2<float>>::~Box();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___ctor(
    Imath_Box2d_t * this_)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<double> >();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___ctor_1(
    Imath_Box2d_t * this_
    , Imath_V2d_t const * point)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<double> >(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___ctor_2(
    Imath_Box2d_t * this_
    , Imath_V2d_t const * minV
    , Imath_V2d_t const * maxV)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<double> >(to_cpp_ref(minV), to_cpp_ref(maxV));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double____eq(
    Imath_Box2d_t const * this_
    , _Bool * return_
    , Imath_Box2d_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double____ne(
    Imath_Box2d_t const * this_
    , _Bool * return_
    , Imath_Box2d_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___makeEmpty(
    Imath_Box2d_t * this_)
{
        (to_cpp(this_)) -> makeEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___extendBy(
    Imath_Box2d_t * this_
    , Imath_V2d_t const * point)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___extendBy_1(
    Imath_Box2d_t * this_
    , Imath_Box2d_t const * box)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___makeInfinite(
    Imath_Box2d_t * this_)
{
        (to_cpp(this_)) -> makeInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___size(
    Imath_Box2d_t const * this_
    , Imath_V2d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> size());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___center(
    Imath_Box2d_t const * this_
    , Imath_V2d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> center());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___intersects(
    Imath_Box2d_t const * this_
    , _Bool * return_
    , Imath_V2d_t const * point)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___intersects_1(
    Imath_Box2d_t const * this_
    , _Bool * return_
    , Imath_Box2d_t const * box)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___majorAxis(
    Imath_Box2d_t const * this_
    , unsigned int * return_)
{
        *(return_) = (to_cpp(this_)) -> majorAxis();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___isEmpty(
    Imath_Box2d_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___hasVolume(
    Imath_Box2d_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> hasVolume();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___isInfinite(
    Imath_Box2d_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___copy(
    Imath_Box2d_t * this_
    , Imath_Box2d_t const * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<double> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___move(
    Imath_Box2d_t * this_
    , Imath_Box2d_t * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec2<double> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___dtor(
    Imath_Box2d_t * this_)
{
    try {
        (to_cpp(this_)) -> Imath_3_0::Box<Imath_3_0::Vec2<double>>::~Box();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___ctor(
    Imath_Box3s_t * this_)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<short> >();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___ctor_1(
    Imath_Box3s_t * this_
    , Imath_V3s_t const * point)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<short> >(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___ctor_2(
    Imath_Box3s_t * this_
    , Imath_V3s_t const * minV
    , Imath_V3s_t const * maxV)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<short> >(to_cpp_ref(minV), to_cpp_ref(maxV));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short____eq(
    Imath_Box3s_t const * this_
    , _Bool * return_
    , Imath_Box3s_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short____ne(
    Imath_Box3s_t const * this_
    , _Bool * return_
    , Imath_Box3s_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___makeEmpty(
    Imath_Box3s_t * this_)
{
        (to_cpp(this_)) -> makeEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___extendBy(
    Imath_Box3s_t * this_
    , Imath_V3s_t const * point)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___extendBy_1(
    Imath_Box3s_t * this_
    , Imath_Box3s_t const * box)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___makeInfinite(
    Imath_Box3s_t * this_)
{
        (to_cpp(this_)) -> makeInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___size(
    Imath_Box3s_t const * this_
    , Imath_V3s_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> size());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___center(
    Imath_Box3s_t const * this_
    , Imath_V3s_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> center());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___intersects(
    Imath_Box3s_t const * this_
    , _Bool * return_
    , Imath_V3s_t const * point)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___intersects_1(
    Imath_Box3s_t const * this_
    , _Bool * return_
    , Imath_Box3s_t const * box)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___majorAxis(
    Imath_Box3s_t const * this_
    , unsigned int * return_)
{
        *(return_) = (to_cpp(this_)) -> majorAxis();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___isEmpty(
    Imath_Box3s_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___hasVolume(
    Imath_Box3s_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> hasVolume();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___isInfinite(
    Imath_Box3s_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___copy(
    Imath_Box3s_t * this_
    , Imath_Box3s_t const * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<short> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___move(
    Imath_Box3s_t * this_
    , Imath_Box3s_t * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<short> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___dtor(
    Imath_Box3s_t * this_)
{
    try {
        (to_cpp(this_)) -> Imath_3_0::Box<Imath_3_0::Vec3<short>>::~Box();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___ctor(
    Imath_Box3i_t * this_)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<int> >();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___ctor_1(
    Imath_Box3i_t * this_
    , Imath_V3i_t const * point)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<int> >(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___ctor_2(
    Imath_Box3i_t * this_
    , Imath_V3i_t const * minV
    , Imath_V3i_t const * maxV)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<int> >(to_cpp_ref(minV), to_cpp_ref(maxV));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int____eq(
    Imath_Box3i_t const * this_
    , _Bool * return_
    , Imath_Box3i_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int____ne(
    Imath_Box3i_t const * this_
    , _Bool * return_
    , Imath_Box3i_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___makeEmpty(
    Imath_Box3i_t * this_)
{
        (to_cpp(this_)) -> makeEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___extendBy(
    Imath_Box3i_t * this_
    , Imath_V3i_t const * point)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___extendBy_1(
    Imath_Box3i_t * this_
    , Imath_Box3i_t const * box)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___makeInfinite(
    Imath_Box3i_t * this_)
{
        (to_cpp(this_)) -> makeInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___size(
    Imath_Box3i_t const * this_
    , Imath_V3i_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> size());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___center(
    Imath_Box3i_t const * this_
    , Imath_V3i_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> center());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___intersects(
    Imath_Box3i_t const * this_
    , _Bool * return_
    , Imath_V3i_t const * point)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___intersects_1(
    Imath_Box3i_t const * this_
    , _Bool * return_
    , Imath_Box3i_t const * box)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___majorAxis(
    Imath_Box3i_t const * this_
    , unsigned int * return_)
{
        *(return_) = (to_cpp(this_)) -> majorAxis();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___isEmpty(
    Imath_Box3i_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___hasVolume(
    Imath_Box3i_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> hasVolume();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___isInfinite(
    Imath_Box3i_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___copy(
    Imath_Box3i_t * this_
    , Imath_Box3i_t const * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<int> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___move(
    Imath_Box3i_t * this_
    , Imath_Box3i_t * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<int> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___dtor(
    Imath_Box3i_t * this_)
{
    try {
        (to_cpp(this_)) -> Imath_3_0::Box<Imath_3_0::Vec3<int>>::~Box();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___ctor(
    Imath_Box3f_t * this_)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<float> >();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___ctor_1(
    Imath_Box3f_t * this_
    , Imath_V3f_t const * point)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<float> >(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___ctor_2(
    Imath_Box3f_t * this_
    , Imath_V3f_t const * minV
    , Imath_V3f_t const * maxV)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<float> >(to_cpp_ref(minV), to_cpp_ref(maxV));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float____eq(
    Imath_Box3f_t const * this_
    , _Bool * return_
    , Imath_Box3f_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float____ne(
    Imath_Box3f_t const * this_
    , _Bool * return_
    , Imath_Box3f_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___makeEmpty(
    Imath_Box3f_t * this_)
{
        (to_cpp(this_)) -> makeEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___extendBy(
    Imath_Box3f_t * this_
    , Imath_V3f_t const * point)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___extendBy_1(
    Imath_Box3f_t * this_
    , Imath_Box3f_t const * box)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___makeInfinite(
    Imath_Box3f_t * this_)
{
        (to_cpp(this_)) -> makeInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___size(
    Imath_Box3f_t const * this_
    , Imath_V3f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> size());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___center(
    Imath_Box3f_t const * this_
    , Imath_V3f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> center());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___intersects(
    Imath_Box3f_t const * this_
    , _Bool * return_
    , Imath_V3f_t const * point)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___intersects_1(
    Imath_Box3f_t const * this_
    , _Bool * return_
    , Imath_Box3f_t const * box)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___majorAxis(
    Imath_Box3f_t const * this_
    , unsigned int * return_)
{
        *(return_) = (to_cpp(this_)) -> majorAxis();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___isEmpty(
    Imath_Box3f_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___hasVolume(
    Imath_Box3f_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> hasVolume();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___isInfinite(
    Imath_Box3f_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___copy(
    Imath_Box3f_t * this_
    , Imath_Box3f_t const * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<float> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___move(
    Imath_Box3f_t * this_
    , Imath_Box3f_t * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<float> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___dtor(
    Imath_Box3f_t * this_)
{
    try {
        (to_cpp(this_)) -> Imath_3_0::Box<Imath_3_0::Vec3<float>>::~Box();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___ctor(
    Imath_Box3d_t * this_)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<double> >();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___ctor_1(
    Imath_Box3d_t * this_
    , Imath_V3d_t const * point)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<double> >(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___ctor_2(
    Imath_Box3d_t * this_
    , Imath_V3d_t const * minV
    , Imath_V3d_t const * maxV)
{
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<double> >(to_cpp_ref(minV), to_cpp_ref(maxV));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double____eq(
    Imath_Box3d_t const * this_
    , _Bool * return_
    , Imath_Box3d_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double____ne(
    Imath_Box3d_t const * this_
    , _Bool * return_
    , Imath_Box3d_t const * src)
{
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(src));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___makeEmpty(
    Imath_Box3d_t * this_)
{
        (to_cpp(this_)) -> makeEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___extendBy(
    Imath_Box3d_t * this_
    , Imath_V3d_t const * point)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___extendBy_1(
    Imath_Box3d_t * this_
    , Imath_Box3d_t const * box)
{
        (to_cpp(this_)) -> extendBy(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___makeInfinite(
    Imath_Box3d_t * this_)
{
        (to_cpp(this_)) -> makeInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___size(
    Imath_Box3d_t const * this_
    , Imath_V3d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> size());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___center(
    Imath_Box3d_t const * this_
    , Imath_V3d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> center());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___intersects(
    Imath_Box3d_t const * this_
    , _Bool * return_
    , Imath_V3d_t const * point)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(point));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___intersects_1(
    Imath_Box3d_t const * this_
    , _Bool * return_
    , Imath_Box3d_t const * box)
{
        *(return_) = (to_cpp(this_)) -> intersects(to_cpp_ref(box));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___majorAxis(
    Imath_Box3d_t const * this_
    , unsigned int * return_)
{
        *(return_) = (to_cpp(this_)) -> majorAxis();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___isEmpty(
    Imath_Box3d_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isEmpty();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___hasVolume(
    Imath_Box3d_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> hasVolume();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___isInfinite(
    Imath_Box3d_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isInfinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___copy(
    Imath_Box3d_t * this_
    , Imath_Box3d_t const * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<double> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___move(
    Imath_Box3d_t * this_
    , Imath_Box3d_t * rhs)
{
    try {
        new (this_) Imath_3_0::Box<Imath_3_0::Vec3<double> >(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___dtor(
    Imath_Box3d_t * this_)
{
    try {
        (to_cpp(this_)) -> Imath_3_0::Box<Imath_3_0::Vec3<double>>::~Box();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


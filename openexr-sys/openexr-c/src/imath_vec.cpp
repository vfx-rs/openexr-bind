#include "imath_vec_private.h"

#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__index(
    Imath_V2s_t * this_
    , short * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__index_const(
    Imath_V2s_t const * this_
    , short const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__broadcast(
    Imath_V2s_t * this_
    , short a)
{
        new (this_) Imath_3_0::Vec2<short>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__ctor(
    Imath_V2s_t * this_
    , short a
    , short b)
{
        new (this_) Imath_3_0::Vec2<short>(a, b);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__ctor_1(
    Imath_V2s_t * this_
    , Imath_V2s_t const * v)
{
        new (this_) Imath_3_0::Vec2<short>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___assign(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , Imath_V2s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__dtor(
    Imath_V2s_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec2<short>::~Vec2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__equalWithAbsError(
    Imath_V2s_t const * this_
    , _Bool * return_
    , Imath_V2s_t const * v
    , short e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__equalWithRelError(
    Imath_V2s_t const * this_
    , _Bool * return_
    , Imath_V2s_t const * v
    , short e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__dot(
    Imath_V2s_t const * this_
    , short * return_
    , Imath_V2s_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__cross(
    Imath_V2s_t const * this_
    , short * return_
    , Imath_V2s_t const * v)
{
        *(return_) = (to_cpp(this_)) -> cross(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___op_iadd(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , Imath_V2s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___op_add(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_
    , Imath_V2s_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___op_isub(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , Imath_V2s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___op_sub(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_
    , Imath_V2s_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___op_sub_1(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__negate(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___op_imul(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , Imath_V2s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___op_imul_1(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , short a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___op_mul(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_
    , Imath_V2s_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___op_mul_1(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_
    , short a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___op_idiv(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , Imath_V2s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___op_idiv_1(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , short a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___op_div(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_
    , Imath_V2s_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short___op_div_1(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_
    , short a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__length2(
    Imath_V2s_t const * this_
    , short * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__baseTypeLowest(
    short * return_)
{
        *(return_) = Imath_3_0::Vec2<short>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__baseTypeMax(
    short * return_)
{
        *(return_) = Imath_3_0::Vec2<short>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__baseTypeSmallest(
    short * return_)
{
        *(return_) = Imath_3_0::Vec2<short>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__baseTypeEpsilon(
    short * return_)
{
        *(return_) = Imath_3_0::Vec2<short>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_short__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec2<short>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__index(
    Imath_V2i_t * this_
    , int * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__index_const(
    Imath_V2i_t const * this_
    , int const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__broadcast(
    Imath_V2i_t * this_
    , int a)
{
        new (this_) Imath_3_0::Vec2<int>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__ctor(
    Imath_V2i_t * this_
    , int a
    , int b)
{
        new (this_) Imath_3_0::Vec2<int>(a, b);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__ctor_1(
    Imath_V2i_t * this_
    , Imath_V2i_t const * v)
{
        new (this_) Imath_3_0::Vec2<int>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___assign(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , Imath_V2i_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__dtor(
    Imath_V2i_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec2<int>::~Vec2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__equalWithAbsError(
    Imath_V2i_t const * this_
    , _Bool * return_
    , Imath_V2i_t const * v
    , int e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__equalWithRelError(
    Imath_V2i_t const * this_
    , _Bool * return_
    , Imath_V2i_t const * v
    , int e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__dot(
    Imath_V2i_t const * this_
    , int * return_
    , Imath_V2i_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__cross(
    Imath_V2i_t const * this_
    , int * return_
    , Imath_V2i_t const * v)
{
        *(return_) = (to_cpp(this_)) -> cross(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___op_iadd(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , Imath_V2i_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___op_add(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_
    , Imath_V2i_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___op_isub(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , Imath_V2i_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___op_sub(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_
    , Imath_V2i_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___op_sub_1(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__negate(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___op_imul(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , Imath_V2i_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___op_imul_1(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , int a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___op_mul(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_
    , Imath_V2i_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___op_mul_1(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_
    , int a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___op_idiv(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , Imath_V2i_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___op_idiv_1(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , int a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___op_div(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_
    , Imath_V2i_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int___op_div_1(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_
    , int a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__length2(
    Imath_V2i_t const * this_
    , int * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__baseTypeLowest(
    int * return_)
{
        *(return_) = Imath_3_0::Vec2<int>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__baseTypeMax(
    int * return_)
{
        *(return_) = Imath_3_0::Vec2<int>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__baseTypeSmallest(
    int * return_)
{
        *(return_) = Imath_3_0::Vec2<int>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__baseTypeEpsilon(
    int * return_)
{
        *(return_) = Imath_3_0::Vec2<int>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_int__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec2<int>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__index(
    Imath_V2i64_t * this_
    , long * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__index_const(
    Imath_V2i64_t const * this_
    , long const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__broadcast(
    Imath_V2i64_t * this_
    , long a)
{
        new (this_) Imath_3_0::Vec2<long>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__ctor(
    Imath_V2i64_t * this_
    , long a
    , long b)
{
        new (this_) Imath_3_0::Vec2<long>(a, b);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__copy(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * v)
{
        new (this_) Imath_3_0::Vec2<long>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___assign(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , Imath_V2i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__dtor(
    Imath_V2i64_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec2<long>::~Vec2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__equalWithAbsError(
    Imath_V2i64_t const * this_
    , _Bool * return_
    , Imath_V2i64_t const * v
    , long e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__equalWithRelError(
    Imath_V2i64_t const * this_
    , _Bool * return_
    , Imath_V2i64_t const * v
    , long e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__dot(
    Imath_V2i64_t const * this_
    , long * return_
    , Imath_V2i64_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__cross(
    Imath_V2i64_t const * this_
    , long * return_
    , Imath_V2i64_t const * v)
{
        *(return_) = (to_cpp(this_)) -> cross(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___op_iadd(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , Imath_V2i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___op_add(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_
    , Imath_V2i64_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___op_isub(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , Imath_V2i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___op_sub(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_
    , Imath_V2i64_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___op_sub_1(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__negate(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___op_imul(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , Imath_V2i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___op_imul_1(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , long a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___op_mul(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_
    , Imath_V2i64_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___op_mul_1(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_
    , long a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___op_idiv(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , Imath_V2i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___op_idiv_1(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , long a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___op_div(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_
    , Imath_V2i64_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long___op_div_1(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_
    , long a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__length2(
    Imath_V2i64_t const * this_
    , long * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__baseTypeLowest(
    long * return_)
{
        *(return_) = Imath_3_0::Vec2<long>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__baseTypeMax(
    long * return_)
{
        *(return_) = Imath_3_0::Vec2<long>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__baseTypeSmallest(
    long * return_)
{
        *(return_) = Imath_3_0::Vec2<long>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__baseTypeEpsilon(
    long * return_)
{
        *(return_) = Imath_3_0::Vec2<long>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_long__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec2<long>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__index(
    Imath_V2f_t * this_
    , float * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__index_const(
    Imath_V2f_t const * this_
    , float const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__broadcast(
    Imath_V2f_t * this_
    , float a)
{
        new (this_) Imath_3_0::Vec2<float>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__ctor(
    Imath_V2f_t * this_
    , float a
    , float b)
{
        new (this_) Imath_3_0::Vec2<float>(a, b);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__ctor_1(
    Imath_V2f_t * this_
    , Imath_V2f_t const * v)
{
        new (this_) Imath_3_0::Vec2<float>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___assign(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , Imath_V2f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__dtor(
    Imath_V2f_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec2<float>::~Vec2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__equalWithAbsError(
    Imath_V2f_t const * this_
    , _Bool * return_
    , Imath_V2f_t const * v
    , float e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__equalWithRelError(
    Imath_V2f_t const * this_
    , _Bool * return_
    , Imath_V2f_t const * v
    , float e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__dot(
    Imath_V2f_t const * this_
    , float * return_
    , Imath_V2f_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__cross(
    Imath_V2f_t const * this_
    , float * return_
    , Imath_V2f_t const * v)
{
        *(return_) = (to_cpp(this_)) -> cross(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___op_iadd(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , Imath_V2f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___op_add(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_
    , Imath_V2f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___op_isub(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , Imath_V2f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___op_sub(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_
    , Imath_V2f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___op_sub_1(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__negate(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___op_imul(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , Imath_V2f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___op_imul_1(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___op_mul(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_
    , Imath_V2f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___op_mul_1(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_
    , float a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___op_idiv(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , Imath_V2f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___op_idiv_1(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___op_div(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_
    , Imath_V2f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float___op_div_1(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_
    , float a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__length(
    Imath_V2f_t const * this_
    , float * return_)
{
        *(return_) = (to_cpp(this_)) -> length();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__length2(
    Imath_V2f_t const * this_
    , float * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__normalize(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> normalize());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__normalizeExc(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> normalizeExc());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__normalizeNonNull(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> normalizeNonNull());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__normalized(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> normalized());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__normalizedExc(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> normalizedExc());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__normalizedNonNull(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> normalizedNonNull());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__baseTypeLowest(
    float * return_)
{
        *(return_) = Imath_3_0::Vec2<float>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__baseTypeMax(
    float * return_)
{
        *(return_) = Imath_3_0::Vec2<float>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__baseTypeSmallest(
    float * return_)
{
        *(return_) = Imath_3_0::Vec2<float>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__baseTypeEpsilon(
    float * return_)
{
        *(return_) = Imath_3_0::Vec2<float>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_float__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec2<float>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__index(
    Imath_V2d_t * this_
    , double * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__index_const(
    Imath_V2d_t const * this_
    , double const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__broadcast(
    Imath_V2d_t * this_
    , double a)
{
        new (this_) Imath_3_0::Vec2<double>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__ctor(
    Imath_V2d_t * this_
    , double a
    , double b)
{
        new (this_) Imath_3_0::Vec2<double>(a, b);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__ctor_1(
    Imath_V2d_t * this_
    , Imath_V2d_t const * v)
{
        new (this_) Imath_3_0::Vec2<double>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___assign(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , Imath_V2d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__dtor(
    Imath_V2d_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec2<double>::~Vec2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__equalWithAbsError(
    Imath_V2d_t const * this_
    , _Bool * return_
    , Imath_V2d_t const * v
    , double e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__equalWithRelError(
    Imath_V2d_t const * this_
    , _Bool * return_
    , Imath_V2d_t const * v
    , double e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__dot(
    Imath_V2d_t const * this_
    , double * return_
    , Imath_V2d_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__cross(
    Imath_V2d_t const * this_
    , double * return_
    , Imath_V2d_t const * v)
{
        *(return_) = (to_cpp(this_)) -> cross(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___op_iadd(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , Imath_V2d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___op_add(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_
    , Imath_V2d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___op_isub(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , Imath_V2d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___op_sub(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_
    , Imath_V2d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___op_sub_1(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__negate(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___op_imul(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , Imath_V2d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___op_imul_1(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___op_mul(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_
    , Imath_V2d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___op_mul_1(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_
    , double a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___op_idiv(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , Imath_V2d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___op_idiv_1(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___op_div(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_
    , Imath_V2d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double___op_div_1(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_
    , double a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__length(
    Imath_V2d_t const * this_
    , double * return_)
{
        *(return_) = (to_cpp(this_)) -> length();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__length2(
    Imath_V2d_t const * this_
    , double * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__normalize(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> normalize());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__normalizeExc(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> normalizeExc());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__normalizeNonNull(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> normalizeNonNull());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__normalized(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> normalized());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__normalizedExc(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> normalizedExc());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__normalizedNonNull(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> normalizedNonNull());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__baseTypeLowest(
    double * return_)
{
        *(return_) = Imath_3_0::Vec2<double>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__baseTypeMax(
    double * return_)
{
        *(return_) = Imath_3_0::Vec2<double>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__baseTypeSmallest(
    double * return_)
{
        *(return_) = Imath_3_0::Vec2<double>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__baseTypeEpsilon(
    double * return_)
{
        *(return_) = Imath_3_0::Vec2<double>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec2_double__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec2<double>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__index(
    Imath_V3s_t * this_
    , short * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__index_const(
    Imath_V3s_t const * this_
    , short const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__ctor(
    Imath_V3s_t * this_)
{
        new (this_) Imath_3_0::Vec3<short>();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__ctor_1(
    Imath_V3s_t * this_
    , short a)
{
        new (this_) Imath_3_0::Vec3<short>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__ctor_2(
    Imath_V3s_t * this_
    , short a
    , short b
    , short c)
{
        new (this_) Imath_3_0::Vec3<short>(a, b, c);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__ctor_3(
    Imath_V3s_t * this_
    , Imath_V3s_t const * v)
{
        new (this_) Imath_3_0::Vec3<short>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___assign(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , Imath_V3s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__dtor(
    Imath_V3s_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec3<short>::~Vec3();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__getValue(
    Imath_V3s_t * this_
    , short * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__getValue_1(
    Imath_V3s_t const * this_
    , short const * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__equalWithAbsError(
    Imath_V3s_t const * this_
    , _Bool * return_
    , Imath_V3s_t const * v
    , short e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__equalWithRelError(
    Imath_V3s_t const * this_
    , _Bool * return_
    , Imath_V3s_t const * v
    , short e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__dot(
    Imath_V3s_t const * this_
    , short * return_
    , Imath_V3s_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__cross(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , Imath_V3s_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> cross(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___op_iadd(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , Imath_V3s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___op_add(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , Imath_V3s_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___op_isub(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , Imath_V3s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___op_sub(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , Imath_V3s_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___op_sub_1(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__negate(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___op_imul(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , Imath_V3s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___op_imul_1(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , short a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___op_mul(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , Imath_V3s_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___op_mul_1(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , short a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___op_idiv(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , Imath_V3s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___op_idiv_1(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , short a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___op_div(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , Imath_V3s_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short___op_div_1(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , short a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__length2(
    Imath_V3s_t const * this_
    , short * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__baseTypeLowest(
    short * return_)
{
        *(return_) = Imath_3_0::Vec3<short>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__baseTypeMax(
    short * return_)
{
        *(return_) = Imath_3_0::Vec3<short>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__baseTypeSmallest(
    short * return_)
{
        *(return_) = Imath_3_0::Vec3<short>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__baseTypeEpsilon(
    short * return_)
{
        *(return_) = Imath_3_0::Vec3<short>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_short__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec3<short>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__index(
    Imath_V3i_t * this_
    , int * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__index_const(
    Imath_V3i_t const * this_
    , int const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__ctor(
    Imath_V3i_t * this_)
{
        new (this_) Imath_3_0::Vec3<int>();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__ctor_1(
    Imath_V3i_t * this_
    , int a)
{
        new (this_) Imath_3_0::Vec3<int>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__ctor_2(
    Imath_V3i_t * this_
    , int a
    , int b
    , int c)
{
        new (this_) Imath_3_0::Vec3<int>(a, b, c);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__ctor_3(
    Imath_V3i_t * this_
    , Imath_V3i_t const * v)
{
        new (this_) Imath_3_0::Vec3<int>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___assign(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , Imath_V3i_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__dtor(
    Imath_V3i_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec3<int>::~Vec3();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__getValue(
    Imath_V3i_t * this_
    , int * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__getValue_1(
    Imath_V3i_t const * this_
    , int const * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__equalWithAbsError(
    Imath_V3i_t const * this_
    , _Bool * return_
    , Imath_V3i_t const * v
    , int e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__equalWithRelError(
    Imath_V3i_t const * this_
    , _Bool * return_
    , Imath_V3i_t const * v
    , int e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__dot(
    Imath_V3i_t const * this_
    , int * return_
    , Imath_V3i_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__cross(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , Imath_V3i_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> cross(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___op_iadd(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , Imath_V3i_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___op_add(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , Imath_V3i_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___op_isub(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , Imath_V3i_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___op_sub(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , Imath_V3i_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___op_sub_1(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__negate(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___op_imul(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , Imath_V3i_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___op_imul_1(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , int a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___op_mul(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , Imath_V3i_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___op_mul_1(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , int a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___op_idiv(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , Imath_V3i_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___op_idiv_1(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , int a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___op_div(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , Imath_V3i_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int___op_div_1(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , int a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__length2(
    Imath_V3i_t const * this_
    , int * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__baseTypeLowest(
    int * return_)
{
        *(return_) = Imath_3_0::Vec3<int>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__baseTypeMax(
    int * return_)
{
        *(return_) = Imath_3_0::Vec3<int>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__baseTypeSmallest(
    int * return_)
{
        *(return_) = Imath_3_0::Vec3<int>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__baseTypeEpsilon(
    int * return_)
{
        *(return_) = Imath_3_0::Vec3<int>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_int__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec3<int>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__index(
    Imath_V3i64_t * this_
    , long * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__index_const(
    Imath_V3i64_t const * this_
    , long const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__ctor(
    Imath_V3i64_t * this_)
{
        new (this_) Imath_3_0::Vec3<long>();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__ctor_1(
    Imath_V3i64_t * this_
    , long a)
{
        new (this_) Imath_3_0::Vec3<long>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__ctor_2(
    Imath_V3i64_t * this_
    , long a
    , long b
    , long c)
{
        new (this_) Imath_3_0::Vec3<long>(a, b, c);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__copy(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * v)
{
        new (this_) Imath_3_0::Vec3<long>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___assign(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , Imath_V3i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__dtor(
    Imath_V3i64_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec3<long>::~Vec3();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__getValue(
    Imath_V3i64_t * this_
    , long * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__getValue_1(
    Imath_V3i64_t const * this_
    , long const * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__equalWithAbsError(
    Imath_V3i64_t const * this_
    , _Bool * return_
    , Imath_V3i64_t const * v
    , long e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__equalWithRelError(
    Imath_V3i64_t const * this_
    , _Bool * return_
    , Imath_V3i64_t const * v
    , long e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__dot(
    Imath_V3i64_t const * this_
    , long * return_
    , Imath_V3i64_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__cross(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , Imath_V3i64_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> cross(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___op_iadd(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , Imath_V3i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___op_add(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , Imath_V3i64_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___op_isub(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , Imath_V3i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___op_sub(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , Imath_V3i64_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___op_sub_1(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__negate(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___op_imul(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , Imath_V3i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___op_imul_1(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , long a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___op_mul(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , Imath_V3i64_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___op_mul_1(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , long a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___op_idiv(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , Imath_V3i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___op_idiv_1(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , long a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___op_div(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , Imath_V3i64_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long___op_div_1(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , long a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__length2(
    Imath_V3i64_t const * this_
    , long * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__baseTypeLowest(
    long * return_)
{
        *(return_) = Imath_3_0::Vec3<long>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__baseTypeMax(
    long * return_)
{
        *(return_) = Imath_3_0::Vec3<long>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__baseTypeSmallest(
    long * return_)
{
        *(return_) = Imath_3_0::Vec3<long>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__baseTypeEpsilon(
    long * return_)
{
        *(return_) = Imath_3_0::Vec3<long>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_long__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec3<long>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__index(
    Imath_V3f_t * this_
    , float * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__index_const(
    Imath_V3f_t const * this_
    , float const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__ctor(
    Imath_V3f_t * this_)
{
        new (this_) Imath_3_0::Vec3<float>();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__ctor_1(
    Imath_V3f_t * this_
    , float a)
{
        new (this_) Imath_3_0::Vec3<float>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__ctor_2(
    Imath_V3f_t * this_
    , float a
    , float b
    , float c)
{
        new (this_) Imath_3_0::Vec3<float>(a, b, c);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__ctor_3(
    Imath_V3f_t * this_
    , Imath_V3f_t const * v)
{
        new (this_) Imath_3_0::Vec3<float>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___assign(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , Imath_V3f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__dtor(
    Imath_V3f_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec3<float>::~Vec3();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__getValue(
    Imath_V3f_t * this_
    , float * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__getValue_1(
    Imath_V3f_t const * this_
    , float const * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__equalWithAbsError(
    Imath_V3f_t const * this_
    , _Bool * return_
    , Imath_V3f_t const * v
    , float e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__equalWithRelError(
    Imath_V3f_t const * this_
    , _Bool * return_
    , Imath_V3f_t const * v
    , float e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__dot(
    Imath_V3f_t const * this_
    , float * return_
    , Imath_V3f_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__cross(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , Imath_V3f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> cross(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___op_iadd(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , Imath_V3f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___op_add(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , Imath_V3f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___op_isub(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , Imath_V3f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___op_sub(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , Imath_V3f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___op_sub_1(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__negate(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___op_imul(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , Imath_V3f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___op_imul_1(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___op_mul(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , Imath_V3f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___op_mul_1(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , float a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___op_idiv(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , Imath_V3f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___op_idiv_1(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___op_div(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , Imath_V3f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float___op_div_1(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , float a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__length(
    Imath_V3f_t const * this_
    , float * return_)
{
        *(return_) = (to_cpp(this_)) -> length();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__length2(
    Imath_V3f_t const * this_
    , float * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__normalize(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> normalize());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__normalizeNonNull(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> normalizeNonNull());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__normalized(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> normalized());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__normalizedNonNull(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> normalizedNonNull());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__baseTypeLowest(
    float * return_)
{
        *(return_) = Imath_3_0::Vec3<float>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__baseTypeMax(
    float * return_)
{
        *(return_) = Imath_3_0::Vec3<float>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__baseTypeSmallest(
    float * return_)
{
        *(return_) = Imath_3_0::Vec3<float>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__baseTypeEpsilon(
    float * return_)
{
        *(return_) = Imath_3_0::Vec3<float>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_float__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec3<float>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__index(
    Imath_V3d_t * this_
    , double * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__index_const(
    Imath_V3d_t const * this_
    , double const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__ctor(
    Imath_V3d_t * this_)
{
        new (this_) Imath_3_0::Vec3<double>();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__ctor_1(
    Imath_V3d_t * this_
    , double a)
{
        new (this_) Imath_3_0::Vec3<double>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__ctor_2(
    Imath_V3d_t * this_
    , double a
    , double b
    , double c)
{
        new (this_) Imath_3_0::Vec3<double>(a, b, c);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__ctor_3(
    Imath_V3d_t * this_
    , Imath_V3d_t const * v)
{
        new (this_) Imath_3_0::Vec3<double>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___assign(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , Imath_V3d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__dtor(
    Imath_V3d_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec3<double>::~Vec3();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__getValue(
    Imath_V3d_t * this_
    , double * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__getValue_1(
    Imath_V3d_t const * this_
    , double const * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__equalWithAbsError(
    Imath_V3d_t const * this_
    , _Bool * return_
    , Imath_V3d_t const * v
    , double e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__equalWithRelError(
    Imath_V3d_t const * this_
    , _Bool * return_
    , Imath_V3d_t const * v
    , double e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__dot(
    Imath_V3d_t const * this_
    , double * return_
    , Imath_V3d_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__cross(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , Imath_V3d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> cross(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___op_iadd(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , Imath_V3d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___op_add(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , Imath_V3d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___op_isub(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , Imath_V3d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___op_sub(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , Imath_V3d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___op_sub_1(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__negate(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___op_imul(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , Imath_V3d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___op_imul_1(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___op_mul(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , Imath_V3d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___op_mul_1(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , double a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___op_idiv(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , Imath_V3d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___op_idiv_1(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___op_div(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , Imath_V3d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double___op_div_1(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , double a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__length(
    Imath_V3d_t const * this_
    , double * return_)
{
        *(return_) = (to_cpp(this_)) -> length();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__length2(
    Imath_V3d_t const * this_
    , double * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__normalize(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> normalize());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__normalizeNonNull(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> normalizeNonNull());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__normalized(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> normalized());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__normalizedNonNull(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> normalizedNonNull());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__baseTypeLowest(
    double * return_)
{
        *(return_) = Imath_3_0::Vec3<double>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__baseTypeMax(
    double * return_)
{
        *(return_) = Imath_3_0::Vec3<double>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__baseTypeSmallest(
    double * return_)
{
        *(return_) = Imath_3_0::Vec3<double>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__baseTypeEpsilon(
    double * return_)
{
        *(return_) = Imath_3_0::Vec3<double>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec3_double__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec3<double>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__index(
    Imath_V4s_t * this_
    , short * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__index_const(
    Imath_V4s_t const * this_
    , short const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__ctor(
    Imath_V4s_t * this_)
{
        new (this_) Imath_3_0::Vec4<short>();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__ctor_1(
    Imath_V4s_t * this_
    , short a)
{
        new (this_) Imath_3_0::Vec4<short>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__ctor_2(
    Imath_V4s_t * this_
    , short a
    , short b
    , short c
    , short d)
{
        new (this_) Imath_3_0::Vec4<short>(a, b, c, d);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__ctor_3(
    Imath_V4s_t * this_
    , Imath_V4s_t const * v)
{
        new (this_) Imath_3_0::Vec4<short>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short___assign(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_
    , Imath_V4s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__dtor(
    Imath_V4s_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec4<short>::~Vec4();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__equalWithAbsError(
    Imath_V4s_t const * this_
    , _Bool * return_
    , Imath_V4s_t const * v
    , short e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__equalWithRelError(
    Imath_V4s_t const * this_
    , _Bool * return_
    , Imath_V4s_t const * v
    , short e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__dot(
    Imath_V4s_t const * this_
    , short * return_
    , Imath_V4s_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short___op_add(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_
    , Imath_V4s_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short___op_isub(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_
    , Imath_V4s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short___op_sub(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_
    , Imath_V4s_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short___op_sub_1(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__negate(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short___op_imul(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_
    , Imath_V4s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short___op_imul_1(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_
    , short a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short___op_mul(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_
    , Imath_V4s_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short___op_mul_1(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_
    , short a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short___op_idiv(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_
    , Imath_V4s_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short___op_idiv_1(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_
    , short a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short___op_div(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_
    , Imath_V4s_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short___op_div_1(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_
    , short a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__length2(
    Imath_V4s_t const * this_
    , short * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__baseTypeLowest(
    short * return_)
{
        *(return_) = Imath_3_0::Vec4<short>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__baseTypeMax(
    short * return_)
{
        *(return_) = Imath_3_0::Vec4<short>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__baseTypeSmallest(
    short * return_)
{
        *(return_) = Imath_3_0::Vec4<short>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__baseTypeEpsilon(
    short * return_)
{
        *(return_) = Imath_3_0::Vec4<short>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_short__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec4<short>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__index(
    Imath_Vec4_t * this_
    , int * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__index_const(
    Imath_Vec4_t const * this_
    , int const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__ctor(
    Imath_Vec4_t * this_)
{
        new (this_) Imath_3_0::Vec4<int>();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__ctor_1(
    Imath_Vec4_t * this_
    , int a)
{
        new (this_) Imath_3_0::Vec4<int>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__ctor_2(
    Imath_Vec4_t * this_
    , int a
    , int b
    , int c
    , int d)
{
        new (this_) Imath_3_0::Vec4<int>(a, b, c, d);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__ctor_3(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * v)
{
        new (this_) Imath_3_0::Vec4<int>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int___assign(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_
    , Imath_Vec4_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__dtor(
    Imath_Vec4_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec4<int>::~Vec4();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__equalWithAbsError(
    Imath_Vec4_t const * this_
    , _Bool * return_
    , Imath_Vec4_t const * v
    , int e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__equalWithRelError(
    Imath_Vec4_t const * this_
    , _Bool * return_
    , Imath_Vec4_t const * v
    , int e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__dot(
    Imath_Vec4_t const * this_
    , int * return_
    , Imath_Vec4_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int___op_add(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_
    , Imath_Vec4_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int___op_isub(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_
    , Imath_Vec4_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int___op_sub(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_
    , Imath_Vec4_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int___op_sub_1(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__negate(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int___op_imul(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_
    , Imath_Vec4_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int___op_imul_1(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_
    , int a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int___op_mul(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_
    , Imath_Vec4_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int___op_mul_1(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_
    , int a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int___op_idiv(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_
    , Imath_Vec4_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int___op_idiv_1(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_
    , int a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int___op_div(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_
    , Imath_Vec4_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int___op_div_1(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_
    , int a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__length2(
    Imath_Vec4_t const * this_
    , int * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__baseTypeLowest(
    int * return_)
{
        *(return_) = Imath_3_0::Vec4<int>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__baseTypeMax(
    int * return_)
{
        *(return_) = Imath_3_0::Vec4<int>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__baseTypeSmallest(
    int * return_)
{
        *(return_) = Imath_3_0::Vec4<int>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__baseTypeEpsilon(
    int * return_)
{
        *(return_) = Imath_3_0::Vec4<int>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_int__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec4<int>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__index(
    Imath_V4i64_t * this_
    , long * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__index_const(
    Imath_V4i64_t const * this_
    , long const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__ctor(
    Imath_V4i64_t * this_)
{
        new (this_) Imath_3_0::Vec4<long>();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__ctor_1(
    Imath_V4i64_t * this_
    , long a)
{
        new (this_) Imath_3_0::Vec4<long>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__ctor_2(
    Imath_V4i64_t * this_
    , long a
    , long b
    , long c
    , long d)
{
        new (this_) Imath_3_0::Vec4<long>(a, b, c, d);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__copy(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * v)
{
        new (this_) Imath_3_0::Vec4<long>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long___assign(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_
    , Imath_V4i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__dtor(
    Imath_V4i64_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec4<long>::~Vec4();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__equalWithAbsError(
    Imath_V4i64_t const * this_
    , _Bool * return_
    , Imath_V4i64_t const * v
    , long e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__equalWithRelError(
    Imath_V4i64_t const * this_
    , _Bool * return_
    , Imath_V4i64_t const * v
    , long e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__dot(
    Imath_V4i64_t const * this_
    , long * return_
    , Imath_V4i64_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long___op_add(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_
    , Imath_V4i64_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long___op_isub(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_
    , Imath_V4i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long___op_sub(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_
    , Imath_V4i64_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long___op_sub_1(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__negate(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long___op_imul(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_
    , Imath_V4i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long___op_imul_1(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_
    , long a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long___op_mul(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_
    , Imath_V4i64_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long___op_mul_1(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_
    , long a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long___op_idiv(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_
    , Imath_V4i64_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long___op_idiv_1(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_
    , long a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long___op_div(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_
    , Imath_V4i64_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long___op_div_1(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_
    , long a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__length2(
    Imath_V4i64_t const * this_
    , long * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__baseTypeLowest(
    long * return_)
{
        *(return_) = Imath_3_0::Vec4<long>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__baseTypeMax(
    long * return_)
{
        *(return_) = Imath_3_0::Vec4<long>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__baseTypeSmallest(
    long * return_)
{
        *(return_) = Imath_3_0::Vec4<long>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__baseTypeEpsilon(
    long * return_)
{
        *(return_) = Imath_3_0::Vec4<long>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_long__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec4<long>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__index(
    Imath_V4f_t * this_
    , float * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__index_const(
    Imath_V4f_t const * this_
    , float const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__ctor(
    Imath_V4f_t * this_)
{
        new (this_) Imath_3_0::Vec4<float>();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__ctor_1(
    Imath_V4f_t * this_
    , float a)
{
        new (this_) Imath_3_0::Vec4<float>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__ctor_2(
    Imath_V4f_t * this_
    , float a
    , float b
    , float c
    , float d)
{
        new (this_) Imath_3_0::Vec4<float>(a, b, c, d);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__ctor_3(
    Imath_V4f_t * this_
    , Imath_V4f_t const * v)
{
        new (this_) Imath_3_0::Vec4<float>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float___assign(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_
    , Imath_V4f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__dtor(
    Imath_V4f_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec4<float>::~Vec4();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__equalWithAbsError(
    Imath_V4f_t const * this_
    , _Bool * return_
    , Imath_V4f_t const * v
    , float e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__equalWithRelError(
    Imath_V4f_t const * this_
    , _Bool * return_
    , Imath_V4f_t const * v
    , float e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__dot(
    Imath_V4f_t const * this_
    , float * return_
    , Imath_V4f_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float___op_add(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_
    , Imath_V4f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float___op_isub(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_
    , Imath_V4f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float___op_sub(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_
    , Imath_V4f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float___op_sub_1(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__negate(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float___op_imul(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_
    , Imath_V4f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float___op_imul_1(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float___op_mul(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_
    , Imath_V4f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float___op_mul_1(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_
    , float a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float___op_idiv(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_
    , Imath_V4f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float___op_idiv_1(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float___op_div(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_
    , Imath_V4f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float___op_div_1(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_
    , float a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__length(
    Imath_V4f_t const * this_
    , float * return_)
{
        *(return_) = (to_cpp(this_)) -> length();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__length2(
    Imath_V4f_t const * this_
    , float * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__normalize(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> normalize());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__normalizeNonNull(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> normalizeNonNull());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__normalized(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> normalized());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__normalizedNonNull(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> normalizedNonNull());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__baseTypeLowest(
    float * return_)
{
        *(return_) = Imath_3_0::Vec4<float>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__baseTypeMax(
    float * return_)
{
        *(return_) = Imath_3_0::Vec4<float>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__baseTypeSmallest(
    float * return_)
{
        *(return_) = Imath_3_0::Vec4<float>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__baseTypeEpsilon(
    float * return_)
{
        *(return_) = Imath_3_0::Vec4<float>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_float__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec4<float>::dimensions();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__index(
    Imath_V4d_t * this_
    , double * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__index_const(
    Imath_V4d_t const * this_
    , double const * * return_
    , int i)
{
        *(return_) = &((to_cpp(this_)) -> operator[](i));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__ctor(
    Imath_V4d_t * this_)
{
        new (this_) Imath_3_0::Vec4<double>();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__ctor_1(
    Imath_V4d_t * this_
    , double a)
{
        new (this_) Imath_3_0::Vec4<double>(a);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__ctor_2(
    Imath_V4d_t * this_
    , double a
    , double b
    , double c
    , double d)
{
        new (this_) Imath_3_0::Vec4<double>(a, b, c, d);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__ctor_3(
    Imath_V4d_t * this_
    , Imath_V4d_t const * v)
{
        new (this_) Imath_3_0::Vec4<double>(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double___assign(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_
    , Imath_V4d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__dtor(
    Imath_V4d_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Vec4<double>::~Vec4();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__equalWithAbsError(
    Imath_V4d_t const * this_
    , _Bool * return_
    , Imath_V4d_t const * v
    , double e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__equalWithRelError(
    Imath_V4d_t const * this_
    , _Bool * return_
    , Imath_V4d_t const * v
    , double e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__dot(
    Imath_V4d_t const * this_
    , double * return_
    , Imath_V4d_t const * v)
{
        *(return_) = (to_cpp(this_)) -> dot(to_cpp_ref(v));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double___op_add(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_
    , Imath_V4d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double___op_isub(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_
    , Imath_V4d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double___op_sub(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_
    , Imath_V4d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double___op_sub_1(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__negate(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double___op_imul(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_
    , Imath_V4d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double___op_imul_1(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double___op_mul(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_
    , Imath_V4d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double___op_mul_1(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_
    , double a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double___op_idiv(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_
    , Imath_V4d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double___op_idiv_1(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double___op_div(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_
    , Imath_V4d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(to_cpp_ref(v)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double___op_div_1(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_
    , double a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__length(
    Imath_V4d_t const * this_
    , double * return_)
{
        *(return_) = (to_cpp(this_)) -> length();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__length2(
    Imath_V4d_t const * this_
    , double * return_)
{
        *(return_) = (to_cpp(this_)) -> length2();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__normalize(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> normalize());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__normalizeNonNull(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> normalizeNonNull());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__normalized(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> normalized());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__normalizedNonNull(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> normalizedNonNull());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__baseTypeLowest(
    double * return_)
{
        *(return_) = Imath_3_0::Vec4<double>::baseTypeLowest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__baseTypeMax(
    double * return_)
{
        *(return_) = Imath_3_0::Vec4<double>::baseTypeMax();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__baseTypeSmallest(
    double * return_)
{
        *(return_) = Imath_3_0::Vec4<double>::baseTypeSmallest();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__baseTypeEpsilon(
    double * return_)
{
        *(return_) = Imath_3_0::Vec4<double>::baseTypeEpsilon();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__Vec4_double__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Vec4<double>::dimensions();
        return 0;
}


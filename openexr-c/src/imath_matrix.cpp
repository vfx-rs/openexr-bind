#include "imath_matrix_private.h"

#include "imath_vec_private.h"
#include <new>

#include <stdexcept>

unsigned int Imath_3_0__Matrix33_float__row(
    Imath_M33f_t * this_
    , float * * return_
    , int i)
{
        *(return_) = (to_cpp(this_)) -> operator[](i);
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__row_const(
    Imath_M33f_t const * this_
    , float const * * return_
    , int i)
{
        *(return_) = (to_cpp(this_)) -> operator[](i);
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__uninitialized(
    Imath_M33f_t * this_
    , Imath_Uninitialized _unused)
{
        new (this_) Imath_3_0::Matrix33<float>(Imath_Uninitialized_to_cpp_ref(&(_unused)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__identity(
    Imath_M33f_t * this_)
{
        new (this_) Imath_3_0::Matrix33<float>();
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__broadcast(
    Imath_M33f_t * this_
    , float a)
{
        new (this_) Imath_3_0::Matrix33<float>(a);
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__from_array(
    Imath_M33f_t * this_
    , float const a[3][3])
{
        new (this_) Imath_3_0::Matrix33<float>(a);
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__ctor(
    Imath_M33f_t * this_
    , float a
    , float b
    , float c
    , float d
    , float e
    , float f
    , float g
    , float h
    , float i)
{
        new (this_) Imath_3_0::Matrix33<float>(a, b, c, d, e, f, g, h, i);
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__ctor_1(
    Imath_M33f_t * this_
    , Imath_M33f_t const * v)
{
    try {
        new (this_) Imath_3_0::Matrix33<float>(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imath_3_0__Matrix33_float___assign(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , Imath_M33f_t const * v)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<Imath_3_0::Matrix33<float>>(to_cpp_ref(v)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imath_3_0__Matrix33_float__dtor(
    Imath_M33f_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Matrix33<float>::~Matrix33();
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__getValue(
    Imath_M33f_t * this_
    , float * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__getValue_const(
    Imath_M33f_t const * this_
    , float const * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

unsigned int Imath_3_0__Matrix33_float___eq(
    Imath_M33f_t const * this_
    , _Bool * return_
    , Imath_M33f_t const * v)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(v));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float___ne(
    Imath_M33f_t const * this_
    , _Bool * return_
    , Imath_M33f_t const * v)
{
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(v));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__equalWithAbsError(
    Imath_M33f_t const * this_
    , _Bool * return_
    , Imath_M33f_t const * v
    , float e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__equalWithRelError(
    Imath_M33f_t const * this_
    , _Bool * return_
    , Imath_M33f_t const * v
    , float e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

unsigned int Imath_3_0__Matrix33_float___op_iadd(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , Imath_M33f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__add_assign_scalar(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float___op_add(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_
    , Imath_M33f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float___op_isub(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , Imath_M33f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__sub_assign_scalar(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float___op_sub(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_
    , Imath_M33f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float___op_sub_1(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__negate(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__mul_assign_scalar(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__mul_scalar(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_
    , float a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__div_assign_scalar(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__div_scalar(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_
    , float a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float___op_imul(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , Imath_M33f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float___op_mul(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_
    , Imath_M33f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__makeIdentity(
    Imath_M33f_t * this_)
{
        (to_cpp(this_)) -> makeIdentity();
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__transpose(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> transpose());
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__transposed(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> transposed());
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__invert(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> invert());
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__inverse(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> inverse());
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__gjInvert(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> gjInvert());
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__gjInverse(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> gjInverse());
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__minorOf(
    Imath_M33f_t const * this_
    , float * return_
    , int const r
    , int const c)
{
        *(return_) = (to_cpp(this_)) -> minorOf(r, c);
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__fastMinor(
    Imath_M33f_t const * this_
    , float * return_
    , int const r0
    , int const r1
    , int const c0
    , int const c1)
{
        *(return_) = (to_cpp(this_)) -> fastMinor(r0, r1, c0, c1);
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__determinant(
    Imath_M33f_t const * this_
    , float * return_)
{
        *(return_) = (to_cpp(this_)) -> determinant();
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__setScale(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , float s)
{
        to_c(return_, (to_cpp(this_)) -> setScale(s));
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__translation(
    Imath_M33f_t const * this_
    , Imath_V2f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> translation());
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__baseTypeLowest(
    float * return_)
{
        *(return_) = Imath_3_0::Matrix33<float>::baseTypeLowest();
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__baseTypeMax(
    float * return_)
{
        *(return_) = Imath_3_0::Matrix33<float>::baseTypeMax();
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__baseTypeSmallest(
    float * return_)
{
        *(return_) = Imath_3_0::Matrix33<float>::baseTypeSmallest();
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__baseTypeEpsilon(
    float * return_)
{
        *(return_) = Imath_3_0::Matrix33<float>::baseTypeEpsilon();
        return 0;
}

unsigned int Imath_3_0__Matrix33_float__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Matrix33<float>::dimensions();
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__row(
    Imath_M33d_t * this_
    , double * * return_
    , int i)
{
        *(return_) = (to_cpp(this_)) -> operator[](i);
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__row_const(
    Imath_M33d_t const * this_
    , double const * * return_
    , int i)
{
        *(return_) = (to_cpp(this_)) -> operator[](i);
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__uninitialized(
    Imath_M33d_t * this_
    , Imath_Uninitialized _unused)
{
        new (this_) Imath_3_0::Matrix33<double>(Imath_Uninitialized_to_cpp_ref(&(_unused)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__identity(
    Imath_M33d_t * this_)
{
        new (this_) Imath_3_0::Matrix33<double>();
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__broadcast(
    Imath_M33d_t * this_
    , double a)
{
        new (this_) Imath_3_0::Matrix33<double>(a);
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__from_array(
    Imath_M33d_t * this_
    , double const a[3][3])
{
        new (this_) Imath_3_0::Matrix33<double>(a);
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__ctor(
    Imath_M33d_t * this_
    , double a
    , double b
    , double c
    , double d
    , double e
    , double f
    , double g
    , double h
    , double i)
{
        new (this_) Imath_3_0::Matrix33<double>(a, b, c, d, e, f, g, h, i);
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__ctor_1(
    Imath_M33d_t * this_
    , Imath_M33d_t const * v)
{
    try {
        new (this_) Imath_3_0::Matrix33<double>(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imath_3_0__Matrix33_double___assign(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , Imath_M33d_t const * v)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<Imath_3_0::Matrix33<double>>(to_cpp_ref(v)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imath_3_0__Matrix33_double__dtor(
    Imath_M33d_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Matrix33<double>::~Matrix33();
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__getValue(
    Imath_M33d_t * this_
    , double * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__getValue_const(
    Imath_M33d_t const * this_
    , double const * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

unsigned int Imath_3_0__Matrix33_double___eq(
    Imath_M33d_t const * this_
    , _Bool * return_
    , Imath_M33d_t const * v)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(v));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double___ne(
    Imath_M33d_t const * this_
    , _Bool * return_
    , Imath_M33d_t const * v)
{
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(v));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__equalWithAbsError(
    Imath_M33d_t const * this_
    , _Bool * return_
    , Imath_M33d_t const * v
    , double e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__equalWithRelError(
    Imath_M33d_t const * this_
    , _Bool * return_
    , Imath_M33d_t const * v
    , double e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

unsigned int Imath_3_0__Matrix33_double___op_iadd(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , Imath_M33d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__add_assign_scalar(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double___op_add(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_
    , Imath_M33d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double___op_isub(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , Imath_M33d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__sub_assign_scalar(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double___op_sub(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_
    , Imath_M33d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double___op_sub_1(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__negate(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__mul_assign_scalar(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__mul_scalar(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_
    , double a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__div_assign_scalar(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__div_scalar(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_
    , double a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double___op_imul(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , Imath_M33d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double___op_mul(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_
    , Imath_M33d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__makeIdentity(
    Imath_M33d_t * this_)
{
        (to_cpp(this_)) -> makeIdentity();
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__transpose(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> transpose());
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__transposed(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> transposed());
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__invert(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> invert());
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__inverse(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> inverse());
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__gjInvert(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> gjInvert());
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__gjInverse(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> gjInverse());
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__minorOf(
    Imath_M33d_t const * this_
    , double * return_
    , int const r
    , int const c)
{
        *(return_) = (to_cpp(this_)) -> minorOf(r, c);
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__fastMinor(
    Imath_M33d_t const * this_
    , double * return_
    , int const r0
    , int const r1
    , int const c0
    , int const c1)
{
        *(return_) = (to_cpp(this_)) -> fastMinor(r0, r1, c0, c1);
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__determinant(
    Imath_M33d_t const * this_
    , double * return_)
{
        *(return_) = (to_cpp(this_)) -> determinant();
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__setScale(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , double s)
{
        to_c(return_, (to_cpp(this_)) -> setScale(s));
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__translation(
    Imath_M33d_t const * this_
    , Imath_V2d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> translation());
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__baseTypeLowest(
    double * return_)
{
        *(return_) = Imath_3_0::Matrix33<double>::baseTypeLowest();
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__baseTypeMax(
    double * return_)
{
        *(return_) = Imath_3_0::Matrix33<double>::baseTypeMax();
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__baseTypeSmallest(
    double * return_)
{
        *(return_) = Imath_3_0::Matrix33<double>::baseTypeSmallest();
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__baseTypeEpsilon(
    double * return_)
{
        *(return_) = Imath_3_0::Matrix33<double>::baseTypeEpsilon();
        return 0;
}

unsigned int Imath_3_0__Matrix33_double__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Matrix33<double>::dimensions();
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__row(
    Imath_M44f_t * this_
    , float * * return_
    , int i)
{
        *(return_) = (to_cpp(this_)) -> operator[](i);
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__row_const(
    Imath_M44f_t const * this_
    , float const * * return_
    , int i)
{
        *(return_) = (to_cpp(this_)) -> operator[](i);
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__uninitialized(
    Imath_M44f_t * this_
    , Imath_Uninitialized _unused)
{
        new (this_) Imath_3_0::Matrix44<float>(Imath_Uninitialized_to_cpp_ref(&(_unused)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__identity(
    Imath_M44f_t * this_)
{
        new (this_) Imath_3_0::Matrix44<float>();
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__broadcast(
    Imath_M44f_t * this_
    , float a)
{
        new (this_) Imath_3_0::Matrix44<float>(a);
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__from_array(
    Imath_M44f_t * this_
    , float const a[4][4])
{
        new (this_) Imath_3_0::Matrix44<float>(a);
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__ctor(
    Imath_M44f_t * this_
    , float a
    , float b
    , float c
    , float d
    , float e
    , float f
    , float g
    , float h
    , float i
    , float j
    , float k
    , float l
    , float m
    , float n
    , float o
    , float p)
{
        new (this_) Imath_3_0::Matrix44<float>(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__from_rotation_and_translation(
    Imath_M44f_t * this_
    , Imath_M33f_t r
    , Imath_V3f_t t)
{
        new (this_) Imath_3_0::Matrix44<float>(to_cpp_ref(&(r)), to_cpp_ref(&(t)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__ctor_1(
    Imath_M44f_t * this_
    , Imath_M44f_t const * v)
{
    try {
        new (this_) Imath_3_0::Matrix44<float>(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imath_3_0__Matrix44_float___assign(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , Imath_M44f_t const * v)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<Imath_3_0::Matrix44<float>>(to_cpp_ref(v)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imath_3_0__Matrix44_float__dtor(
    Imath_M44f_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Matrix44<float>::~Matrix44();
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__getValue(
    Imath_M44f_t * this_
    , float * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__getValue_1(
    Imath_M44f_t const * this_
    , float const * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

unsigned int Imath_3_0__Matrix44_float___eq(
    Imath_M44f_t const * this_
    , _Bool * return_
    , Imath_M44f_t const * v)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(v));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float___ne(
    Imath_M44f_t const * this_
    , _Bool * return_
    , Imath_M44f_t const * v)
{
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(v));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__equalWithAbsError(
    Imath_M44f_t const * this_
    , _Bool * return_
    , Imath_M44f_t const * v
    , float e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__equalWithRelError(
    Imath_M44f_t const * this_
    , _Bool * return_
    , Imath_M44f_t const * v
    , float e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

unsigned int Imath_3_0__Matrix44_float___op_iadd(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , Imath_M44f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__add_assign_scalar(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float___op_add(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_
    , Imath_M44f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float___op_isub(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , Imath_M44f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__sub_assign_scalar(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float___op_sub(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_
    , Imath_M44f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float___op_sub_1(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__negate(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__mul_assign_scalar(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__mul_scalar(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_
    , float a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__div_assign_scalar(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , float a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__div_scalar(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_
    , float a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float___op_imul(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , Imath_M44f_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float___op_mul(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_
    , Imath_M44f_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__multiply(
    Imath_M44f_t const * a
    , Imath_M44f_t const * b
    , Imath_M44f_t * c)
{
        Imath_3_0::Matrix44<float>::multiply(to_cpp_ref(a), to_cpp_ref(b), to_cpp_ref(c));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__makeIdentity(
    Imath_M44f_t * this_)
{
        (to_cpp(this_)) -> makeIdentity();
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__transpose(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> transpose());
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__transposed(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> transposed());
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__invert(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> invert());
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__inverse(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> inverse());
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__gjInvert(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> gjInvert());
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__gjInverse(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> gjInverse());
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__minorOf(
    Imath_M44f_t const * this_
    , float * return_
    , int const r
    , int const c)
{
        *(return_) = (to_cpp(this_)) -> minorOf(r, c);
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__fastMinor(
    Imath_M44f_t const * this_
    , float * return_
    , int const r0
    , int const r1
    , int const r2
    , int const c0
    , int const c1
    , int const c2)
{
        *(return_) = (to_cpp(this_)) -> fastMinor(r0, r1, r2, c0, c1, c2);
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__determinant(
    Imath_M44f_t const * this_
    , float * return_)
{
        *(return_) = (to_cpp(this_)) -> determinant();
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__setScale_uniform(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , float s)
{
        to_c(return_, (to_cpp(this_)) -> setScale(s));
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__translation(
    Imath_M44f_t const * this_
    , Imath_V3f_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> translation());
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__baseTypeLowest(
    float * return_)
{
        *(return_) = Imath_3_0::Matrix44<float>::baseTypeLowest();
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__baseTypeMax(
    float * return_)
{
        *(return_) = Imath_3_0::Matrix44<float>::baseTypeMax();
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__baseTypeSmallest(
    float * return_)
{
        *(return_) = Imath_3_0::Matrix44<float>::baseTypeSmallest();
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__baseTypeEpsilon(
    float * return_)
{
        *(return_) = Imath_3_0::Matrix44<float>::baseTypeEpsilon();
        return 0;
}

unsigned int Imath_3_0__Matrix44_float__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Matrix44<float>::dimensions();
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__row(
    Imath_M44d_t * this_
    , double * * return_
    , int i)
{
        *(return_) = (to_cpp(this_)) -> operator[](i);
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__row_const(
    Imath_M44d_t const * this_
    , double const * * return_
    , int i)
{
        *(return_) = (to_cpp(this_)) -> operator[](i);
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__uninitialized(
    Imath_M44d_t * this_
    , Imath_Uninitialized _unused)
{
        new (this_) Imath_3_0::Matrix44<double>(Imath_Uninitialized_to_cpp_ref(&(_unused)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__identity(
    Imath_M44d_t * this_)
{
        new (this_) Imath_3_0::Matrix44<double>();
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__broadcast(
    Imath_M44d_t * this_
    , double a)
{
        new (this_) Imath_3_0::Matrix44<double>(a);
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__from_array(
    Imath_M44d_t * this_
    , double const a[4][4])
{
        new (this_) Imath_3_0::Matrix44<double>(a);
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__ctor(
    Imath_M44d_t * this_
    , double a
    , double b
    , double c
    , double d
    , double e
    , double f
    , double g
    , double h
    , double i
    , double j
    , double k
    , double l
    , double m
    , double n
    , double o
    , double p)
{
        new (this_) Imath_3_0::Matrix44<double>(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__from_rotation_and_translation(
    Imath_M44d_t * this_
    , Imath_M33d_t r
    , Imath_V3d_t t)
{
        new (this_) Imath_3_0::Matrix44<double>(to_cpp_ref(&(r)), to_cpp_ref(&(t)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__ctor_1(
    Imath_M44d_t * this_
    , Imath_M44d_t const * v)
{
    try {
        new (this_) Imath_3_0::Matrix44<double>(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imath_3_0__Matrix44_double___assign(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , Imath_M44d_t const * v)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=<Imath_3_0::Matrix44<double>>(to_cpp_ref(v)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imath_3_0__Matrix44_double__dtor(
    Imath_M44d_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::Matrix44<double>::~Matrix44();
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__getValue(
    Imath_M44d_t * this_
    , double * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__getValue_1(
    Imath_M44d_t const * this_
    , double const * * return_)
{
        *(return_) = (to_cpp(this_)) -> getValue();
        return 0;
}

unsigned int Imath_3_0__Matrix44_double___eq(
    Imath_M44d_t const * this_
    , _Bool * return_
    , Imath_M44d_t const * v)
{
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(v));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double___ne(
    Imath_M44d_t const * this_
    , _Bool * return_
    , Imath_M44d_t const * v)
{
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(v));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__equalWithAbsError(
    Imath_M44d_t const * this_
    , _Bool * return_
    , Imath_M44d_t const * v
    , double e)
{
        *(return_) = (to_cpp(this_)) -> equalWithAbsError(to_cpp_ref(v), e);
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__equalWithRelError(
    Imath_M44d_t const * this_
    , _Bool * return_
    , Imath_M44d_t const * v
    , double e)
{
        *(return_) = (to_cpp(this_)) -> equalWithRelError(to_cpp_ref(v), e);
        return 0;
}

unsigned int Imath_3_0__Matrix44_double___op_iadd(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , Imath_M44d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__add_assign_scalar(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double___op_add(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_
    , Imath_M44d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator+(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double___op_isub(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , Imath_M44d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__sub_assign_scalar(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double___op_sub(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_
    , Imath_M44d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double___op_sub_1(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__negate(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> negate());
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__mul_assign_scalar(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__mul_scalar(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_
    , double a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(a));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__div_assign_scalar(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , double a)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(a));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__div_scalar(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_
    , double a)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator/(a));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double___op_imul(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , Imath_M44d_t const * v)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double___op_mul(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_
    , Imath_M44d_t const * v)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator*(to_cpp_ref(v)));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__multiply(
    Imath_M44d_t const * a
    , Imath_M44d_t const * b
    , Imath_M44d_t * c)
{
        Imath_3_0::Matrix44<double>::multiply(to_cpp_ref(a), to_cpp_ref(b), to_cpp_ref(c));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__makeIdentity(
    Imath_M44d_t * this_)
{
        (to_cpp(this_)) -> makeIdentity();
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__transpose(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> transpose());
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__transposed(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> transposed());
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__invert(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> invert());
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__inverse(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> inverse());
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__gjInvert(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> gjInvert());
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__gjInverse(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> gjInverse());
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__minorOf(
    Imath_M44d_t const * this_
    , double * return_
    , int const r
    , int const c)
{
        *(return_) = (to_cpp(this_)) -> minorOf(r, c);
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__fastMinor(
    Imath_M44d_t const * this_
    , double * return_
    , int const r0
    , int const r1
    , int const r2
    , int const c0
    , int const c1
    , int const c2)
{
        *(return_) = (to_cpp(this_)) -> fastMinor(r0, r1, r2, c0, c1, c2);
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__determinant(
    Imath_M44d_t const * this_
    , double * return_)
{
        *(return_) = (to_cpp(this_)) -> determinant();
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__setScale_uniform(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , double s)
{
        to_c(return_, (to_cpp(this_)) -> setScale(s));
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__translation(
    Imath_M44d_t const * this_
    , Imath_V3d_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> translation());
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__baseTypeLowest(
    double * return_)
{
        *(return_) = Imath_3_0::Matrix44<double>::baseTypeLowest();
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__baseTypeMax(
    double * return_)
{
        *(return_) = Imath_3_0::Matrix44<double>::baseTypeMax();
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__baseTypeSmallest(
    double * return_)
{
        *(return_) = Imath_3_0::Matrix44<double>::baseTypeSmallest();
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__baseTypeEpsilon(
    double * return_)
{
        *(return_) = Imath_3_0::Matrix44<double>::baseTypeEpsilon();
        return 0;
}

unsigned int Imath_3_0__Matrix44_double__dimensions(
    unsigned int * return_)
{
        *(return_) = Imath_3_0::Matrix44<double>::dimensions();
        return 0;
}


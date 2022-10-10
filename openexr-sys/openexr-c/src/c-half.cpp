#include "c-half_private.h"

#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_sizeof()
{
        return sizeof(Imath_3_0::half);
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_alignof()
{
        return alignof(Imath_3_0::half);
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_ctor(
    Imath_half_t * this_)
{
        new (this_) Imath_3_0::half();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_from_float(
    Imath_half_t * this_
    , float f)
{
        new (this_) Imath_3_0::half(f);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_ctor_1(
    Imath_half_t * this_
    , Imath_half_FromBitsTag tag
    , unsigned short bits)
{
        new (this_) Imath_3_0::half(Imath_half_FromBitsTag_to_cpp_ref(&(tag)), bits);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_copy(
    Imath_half_t * this_
    , Imath_half_t const * rhs)
{
        new (this_) Imath_3_0::half(to_cpp_ref(rhs));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_dtor(
    Imath_half_t * this_)
{
        (to_cpp(this_)) -> Imath_3_0::half::~half();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_operatorfloat(
    Imath_half_t const * this_
    , float * return_)
{
        *(return_) = (to_cpp(this_)) -> operator float();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half__op_sub(
    Imath_half_t const * this_
    , Imath_half_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> operator-());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half__assign(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , Imath_half_t const * h)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(h)));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half__assign_1(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , float f)
{
        to_c(return_, (to_cpp(this_)) -> operator=(f));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half__op_iadd(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , Imath_half_t h)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(to_cpp_ref(&(h))));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half__op_iadd_1(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , float f)
{
        to_c(return_, (to_cpp(this_)) -> operator+=(f));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half__op_isub(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , Imath_half_t h)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(to_cpp_ref(&(h))));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half__op_isub_1(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , float f)
{
        to_c(return_, (to_cpp(this_)) -> operator-=(f));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half__op_imul(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , Imath_half_t h)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(to_cpp_ref(&(h))));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half__op_imul_1(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , float f)
{
        to_c(return_, (to_cpp(this_)) -> operator*=(f));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half__op_idiv(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , Imath_half_t h)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(to_cpp_ref(&(h))));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half__op_idiv_1(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , float f)
{
        to_c(return_, (to_cpp(this_)) -> operator/=(f));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_round(
    Imath_half_t const * this_
    , Imath_half_t * return_
    , unsigned int n)
{
        to_c_copy(return_, (to_cpp(this_)) -> round(n));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_isFinite(
    Imath_half_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isFinite();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_isNormalized(
    Imath_half_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isNormalized();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_isDenormalized(
    Imath_half_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isDenormalized();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_isZero(
    Imath_half_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isZero();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_isNan(
    Imath_half_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isNan();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_isInfinity(
    Imath_half_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isInfinity();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_isNegative(
    Imath_half_t const * this_
    , _Bool * return_)
{
        *(return_) = (to_cpp(this_)) -> isNegative();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_posInf(
    Imath_half_t * return_)
{
        to_c_copy(return_, Imath_3_0::half::posInf());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_negInf(
    Imath_half_t * return_)
{
        to_c_copy(return_, Imath_3_0::half::negInf());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_qNan(
    Imath_half_t * return_)
{
        to_c_copy(return_, Imath_3_0::half::qNan());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_sNan(
    Imath_half_t * return_)
{
        to_c_copy(return_, Imath_3_0::half::sNan());
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_bits(
    Imath_half_t const * this_
    , unsigned short * return_)
{
        *(return_) = (to_cpp(this_)) -> bits();
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imath_3_0__half_setBits(
    Imath_half_t * this_
    , unsigned short bits)
{
        (to_cpp(this_)) -> setBits(bits);
        return 0;
}


#pragma once
#include "openexr-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/** A special tag that lets us initialize a half from the raw bits. */
enum Imath_3_0__half__FromBitsTag_e {
    Imath_half_FromBitsTag_FromBits = 0,
};
typedef unsigned int Imath_half_FromBitsTag;

/** 

 class half -- 16-bit floating point number

 Type half can represent positive and negative numbers whose
 magnitude is between roughly 6.1e-5 and 6.5e+4 with a relative
 error of 9.8e-4; numbers smaller than 6.1e-5 can be represented
 with an absolute error of 6.0e-8.  All integers from -2048 to
 +2048 can be represented exactly.

 Type half behaves (almost) like the built-in C++ floating point
 types.  In arithmetic expressions, half, float and double can be
 mixed freely.  Here are a few examples:

     half a (3.5);
     float b (a + sqrt (a));
     a += b;
     b += a;
     b = a + 7;

 Conversions from half to float are lossless; all half numbers
 are exactly representable as floats.

 Conversions from float to half may not preserve a float's value
 exactly.  If a float is not representable as a half, then the
 float value is rounded to the nearest representable half.  If a
 float value is exactly in the middle between the two closest
 representable half values, then the float value is rounded to
 the closest half whose least significant bit is zero.

 Overflows during float-to-half conversions cause arithmetic
 exceptions.  An overflow occurs when the float value to be
 converted is too large to be represented as a half, or if the
 float value is an infinity or a NAN.

 The implementation of type half makes the following assumptions
 about the implementation of the built-in C++ types:

 * float is an IEEE 754 single-precision number
 * sizeof (float) == 4
 * sizeof (unsigned int) == sizeof (float)
 * alignof (unsigned int) == alignof (float)
 * sizeof (unsigned short) == 2 */
typedef struct Imath_3_0__half_t_s {
    char data[2];
} OPENEXR_ALIGN(2) Imath_3_0__half_t;
typedef Imath_3_0__half_t Imath_half_t;


/** returns the size of this type in bytes */
OPENEXR_API unsigned int Imath_3_0__half_sizeof();
#define Imath_half_sizeof Imath_3_0__half_sizeof


/** returns the size of this type in bytes */
OPENEXR_API unsigned int Imath_3_0__half_alignof();
#define Imath_half_alignof Imath_3_0__half_alignof


/** Default construction provides no initialization (hence it is
not constexpr). */
OPENEXR_API unsigned int Imath_3_0__half_ctor(
    Imath_half_t * this_);
#define Imath_half_ctor Imath_3_0__half_ctor


/** Construct from float */
OPENEXR_API unsigned int Imath_3_0__half_from_float(
    Imath_half_t * this_
    , float f);
#define Imath_half_from_float Imath_3_0__half_from_float


/** Construct from bit-vector */
OPENEXR_API unsigned int Imath_3_0__half_ctor_1(
    Imath_half_t * this_
    , Imath_half_FromBitsTag tag
    , unsigned short bits);
#define Imath_half_ctor_1 Imath_3_0__half_ctor_1


/** Copy constructor */
OPENEXR_API unsigned int Imath_3_0__half_copy(
    Imath_half_t * this_
    , Imath_half_t const * rhs);
#define Imath_half_copy Imath_3_0__half_copy


/** Destructor */
OPENEXR_API unsigned int Imath_3_0__half_dtor(
    Imath_half_t * this_);
#define Imath_half_dtor Imath_3_0__half_dtor


/** Conversion to float */
OPENEXR_API unsigned int Imath_3_0__half_operatorfloat(
    Imath_half_t const * this_
    , float * return_);
#define Imath_half_operatorfloat Imath_3_0__half_operatorfloat


/** Unary minus */
OPENEXR_API unsigned int Imath_3_0__half__op_sub(
    Imath_half_t const * this_
    , Imath_half_t * return_);
#define Imath_half__op_sub Imath_3_0__half__op_sub


/** Assignment */
OPENEXR_API unsigned int Imath_3_0__half__assign(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , Imath_half_t const * h);
#define Imath_half__assign Imath_3_0__half__assign


/** Assignment from float */
OPENEXR_API unsigned int Imath_3_0__half__assign_1(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , float f);
#define Imath_half__assign_1 Imath_3_0__half__assign_1


/** Addition assignment */
OPENEXR_API unsigned int Imath_3_0__half__op_iadd(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , Imath_half_t h);
#define Imath_half__op_iadd Imath_3_0__half__op_iadd


/** Addition assignment from float */
OPENEXR_API unsigned int Imath_3_0__half__op_iadd_1(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , float f);
#define Imath_half__op_iadd_1 Imath_3_0__half__op_iadd_1


/** Subtraction assignment */
OPENEXR_API unsigned int Imath_3_0__half__op_isub(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , Imath_half_t h);
#define Imath_half__op_isub Imath_3_0__half__op_isub


/** Subtraction assignment from float */
OPENEXR_API unsigned int Imath_3_0__half__op_isub_1(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , float f);
#define Imath_half__op_isub_1 Imath_3_0__half__op_isub_1


/** Multiplication assignment */
OPENEXR_API unsigned int Imath_3_0__half__op_imul(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , Imath_half_t h);
#define Imath_half__op_imul Imath_3_0__half__op_imul


/** Multiplication assignment from float */
OPENEXR_API unsigned int Imath_3_0__half__op_imul_1(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , float f);
#define Imath_half__op_imul_1 Imath_3_0__half__op_imul_1


/** Division assignment */
OPENEXR_API unsigned int Imath_3_0__half__op_idiv(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , Imath_half_t h);
#define Imath_half__op_idiv Imath_3_0__half__op_idiv


/** Division assignment from float */
OPENEXR_API unsigned int Imath_3_0__half__op_idiv_1(
    Imath_half_t * this_
    , Imath_half_t * * return_
    , float f);
#define Imath_half__op_idiv_1 Imath_3_0__half__op_idiv_1


/** Round to n-bit precision (n should be between 0 and 10).
After rounding, the significand's 10-n least significant
bits will be zero. */
OPENEXR_API unsigned int Imath_3_0__half_round(
    Imath_half_t const * this_
    , Imath_half_t * return_
    , unsigned int n);
#define Imath_half_round Imath_3_0__half_round


/** Return true if a normalized number, a denormalized number, or
zero. */
OPENEXR_API unsigned int Imath_3_0__half_isFinite(
    Imath_half_t const * this_
    , _Bool * return_);
#define Imath_half_isFinite Imath_3_0__half_isFinite


/** Return true if a normalized number. */
OPENEXR_API unsigned int Imath_3_0__half_isNormalized(
    Imath_half_t const * this_
    , _Bool * return_);
#define Imath_half_isNormalized Imath_3_0__half_isNormalized


/** Return true if a denormalized number. */
OPENEXR_API unsigned int Imath_3_0__half_isDenormalized(
    Imath_half_t const * this_
    , _Bool * return_);
#define Imath_half_isDenormalized Imath_3_0__half_isDenormalized


/** Return true if zero. */
OPENEXR_API unsigned int Imath_3_0__half_isZero(
    Imath_half_t const * this_
    , _Bool * return_);
#define Imath_half_isZero Imath_3_0__half_isZero


/** Return true if NAN. */
OPENEXR_API unsigned int Imath_3_0__half_isNan(
    Imath_half_t const * this_
    , _Bool * return_);
#define Imath_half_isNan Imath_3_0__half_isNan


/** Return true if a positive or a negative infinity */
OPENEXR_API unsigned int Imath_3_0__half_isInfinity(
    Imath_half_t const * this_
    , _Bool * return_);
#define Imath_half_isInfinity Imath_3_0__half_isInfinity


/** Return true if the sign bit is set (negative) */
OPENEXR_API unsigned int Imath_3_0__half_isNegative(
    Imath_half_t const * this_
    , _Bool * return_);
#define Imath_half_isNegative Imath_3_0__half_isNegative


/** Return +infinity */
OPENEXR_API unsigned int Imath_3_0__half_posInf(
    Imath_half_t * return_);
#define Imath_half_posInf Imath_3_0__half_posInf


/** Return -infinity */
OPENEXR_API unsigned int Imath_3_0__half_negInf(
    Imath_half_t * return_);
#define Imath_half_negInf Imath_3_0__half_negInf


/** Returns a NAN with the bit pattern 0111111111111111 */
OPENEXR_API unsigned int Imath_3_0__half_qNan(
    Imath_half_t * return_);
#define Imath_half_qNan Imath_3_0__half_qNan


/** Return a NAN with the bit pattern 0111110111111111 */
OPENEXR_API unsigned int Imath_3_0__half_sNan(
    Imath_half_t * return_);
#define Imath_half_sNan Imath_3_0__half_sNan


/** Return the bit pattern */
OPENEXR_API unsigned int Imath_3_0__half_bits(
    Imath_half_t const * this_
    , unsigned short * return_);
#define Imath_half_bits Imath_3_0__half_bits


/** Set the bit pattern */
OPENEXR_API unsigned int Imath_3_0__half_setBits(
    Imath_half_t * this_
    , unsigned short bits);
#define Imath_half_setBits Imath_3_0__half_setBits


#ifdef __cplusplus
}
#endif

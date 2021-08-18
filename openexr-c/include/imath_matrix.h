#pragma once
#include <imath_vec.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Enum used to indicate uninitialized construction of Matrix22,
Matrix33, Matrix44 */
enum Imath_3_0__Uninitialized_e {
    Imath_Uninitialized_UNINITIALIZED = 0,
};
typedef unsigned int Imath_Uninitialized;

typedef struct Imath_3_0__Matrix33_float__t_s {
    float x[3][3];
} __attribute__((aligned(4))) Imath_3_0__Matrix33_float__t;
typedef Imath_3_0__Matrix33_float__t Imath_M33f_t;

typedef struct Imath_3_0__Matrix33_double__t_s {
    double x[3][3];
} __attribute__((aligned(8))) Imath_3_0__Matrix33_double__t;
typedef Imath_3_0__Matrix33_double__t Imath_M33d_t;

typedef struct Imath_3_0__Matrix44_float__t_s {
    float x[4][4];
} __attribute__((aligned(4))) Imath_3_0__Matrix44_float__t;
typedef Imath_3_0__Matrix44_float__t Imath_M44f_t;

typedef struct Imath_3_0__Matrix44_double__t_s {
    double x[4][4];
} __attribute__((aligned(8))) Imath_3_0__Matrix44_double__t;
typedef Imath_3_0__Matrix44_double__t Imath_M44d_t;


/** Row access */
unsigned int Imath_3_0__Matrix33_float__row(
    Imath_M33f_t * this_
    , float * * return_
    , int i);
#define Imath_M33f_row Imath_3_0__Matrix33_float__row


/** Row access */
unsigned int Imath_3_0__Matrix33_float__row_const(
    Imath_M33f_t const * this_
    , float const * * return_
    , int i);
#define Imath_M33f_row_const Imath_3_0__Matrix33_float__row_const


/** Uninitialized */
unsigned int Imath_3_0__Matrix33_float__uninitialized(
    Imath_M33f_t * this_
    , Imath_Uninitialized _unused);
#define Imath_M33f_uninitialized Imath_3_0__Matrix33_float__uninitialized


/** Default constructor: initialize to identity
  1 0 0
  0 1 0
  0 0 1 */
unsigned int Imath_3_0__Matrix33_float__identity(
    Imath_M33f_t * this_);
#define Imath_M33f_identity Imath_3_0__Matrix33_float__identity


/** Initialize to scalar constant
  a a a
  a a a
  a a a */
unsigned int Imath_3_0__Matrix33_float__broadcast(
    Imath_M33f_t * this_
    , float a);
#define Imath_M33f_broadcast Imath_3_0__Matrix33_float__broadcast


/** Construct from 3x3 array 
  a[0][0] a[0][1] a[0][2]
  a[1][0] a[1][1] a[1][2]
  a[2][0] a[2][1] a[2][2] */
unsigned int Imath_3_0__Matrix33_float__from_array(
    Imath_M33f_t * this_
    , float const a[3][3]);
#define Imath_M33f_from_array Imath_3_0__Matrix33_float__from_array


/** Construct from given scalar values
  a b c
  d e f
  g h i */
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
    , float i);
#define Imath_M33f_ctor Imath_3_0__Matrix33_float__ctor


unsigned int Imath_3_0__Matrix33_float__ctor_1(
    Imath_M33f_t * this_
    , Imath_M33f_t const * v);
#define Imath_M33f_ctor_1 Imath_3_0__Matrix33_float__ctor_1


unsigned int Imath_3_0__Matrix33_float___assign(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , Imath_M33f_t const * v);
#define Imath_M33f__assign Imath_3_0__Matrix33_float___assign


/** Destructor */
unsigned int Imath_3_0__Matrix33_float__dtor(
    Imath_M33f_t * this_);
#define Imath_M33f_dtor Imath_3_0__Matrix33_float__dtor


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Matrix33_float__getValue(
    Imath_M33f_t * this_
    , float * * return_);
#define Imath_M33f_getValue Imath_3_0__Matrix33_float__getValue


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Matrix33_float__getValue_const(
    Imath_M33f_t const * this_
    , float const * * return_);
#define Imath_M33f_getValue_const Imath_3_0__Matrix33_float__getValue_const


/** Equality */
unsigned int Imath_3_0__Matrix33_float___eq(
    Imath_M33f_t const * this_
    , _Bool * return_
    , Imath_M33f_t const * v);
#define Imath_M33f__eq Imath_3_0__Matrix33_float___eq


/** Inequality */
unsigned int Imath_3_0__Matrix33_float___ne(
    Imath_M33f_t const * this_
    , _Bool * return_
    , Imath_M33f_t const * v);
#define Imath_M33f__ne Imath_3_0__Matrix33_float___ne


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Matrix33_float__equalWithAbsError(
    Imath_M33f_t const * this_
    , _Bool * return_
    , Imath_M33f_t const * v
    , float e);
#define Imath_M33f_equalWithAbsError Imath_3_0__Matrix33_float__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Matrix33_float__equalWithRelError(
    Imath_M33f_t const * this_
    , _Bool * return_
    , Imath_M33f_t const * v
    , float e);
#define Imath_M33f_equalWithRelError Imath_3_0__Matrix33_float__equalWithRelError


/** Component-wise addition */
unsigned int Imath_3_0__Matrix33_float___op_iadd(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , Imath_M33f_t const * v);
#define Imath_M33f__op_iadd Imath_3_0__Matrix33_float___op_iadd


/** Component-wise addition */
unsigned int Imath_3_0__Matrix33_float__add_assign_scalar(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , float a);
#define Imath_M33f_add_assign_scalar Imath_3_0__Matrix33_float__add_assign_scalar


/** Component-wise addition */
unsigned int Imath_3_0__Matrix33_float___op_add(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_
    , Imath_M33f_t const * v);
#define Imath_M33f__op_add Imath_3_0__Matrix33_float___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Matrix33_float___op_isub(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , Imath_M33f_t const * v);
#define Imath_M33f__op_isub Imath_3_0__Matrix33_float___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Matrix33_float__sub_assign_scalar(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , float a);
#define Imath_M33f_sub_assign_scalar Imath_3_0__Matrix33_float__sub_assign_scalar


/** Component-wise subtraction */
unsigned int Imath_3_0__Matrix33_float___op_sub(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_
    , Imath_M33f_t const * v);
#define Imath_M33f__op_sub Imath_3_0__Matrix33_float___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Matrix33_float___op_sub_1(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_);
#define Imath_M33f__op_sub_1 Imath_3_0__Matrix33_float___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Matrix33_float__negate(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_);
#define Imath_M33f_negate Imath_3_0__Matrix33_float__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Matrix33_float__mul_assign_scalar(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , float a);
#define Imath_M33f_mul_assign_scalar Imath_3_0__Matrix33_float__mul_assign_scalar


/** Component-wise multiplication */
unsigned int Imath_3_0__Matrix33_float__mul_scalar(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_
    , float a);
#define Imath_M33f_mul_scalar Imath_3_0__Matrix33_float__mul_scalar


/** Component-wise division */
unsigned int Imath_3_0__Matrix33_float__div_assign_scalar(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , float a);
#define Imath_M33f_div_assign_scalar Imath_3_0__Matrix33_float__div_assign_scalar


/** Component-wise division */
unsigned int Imath_3_0__Matrix33_float__div_scalar(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_
    , float a);
#define Imath_M33f_div_scalar Imath_3_0__Matrix33_float__div_scalar


/** Matrix-matrix multiplication */
unsigned int Imath_3_0__Matrix33_float___op_imul(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , Imath_M33f_t const * v);
#define Imath_M33f__op_imul Imath_3_0__Matrix33_float___op_imul


/** Matrix-matrix multiplication */
unsigned int Imath_3_0__Matrix33_float___op_mul(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_
    , Imath_M33f_t const * v);
#define Imath_M33f__op_mul Imath_3_0__Matrix33_float___op_mul


/** Set to the identity matrix */
unsigned int Imath_3_0__Matrix33_float__makeIdentity(
    Imath_M33f_t * this_);
#define Imath_M33f_makeIdentity Imath_3_0__Matrix33_float__makeIdentity


/** Transpose */
unsigned int Imath_3_0__Matrix33_float__transpose(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_);
#define Imath_M33f_transpose Imath_3_0__Matrix33_float__transpose


/** Return the transpose */
unsigned int Imath_3_0__Matrix33_float__transposed(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_);
#define Imath_M33f_transposed Imath_3_0__Matrix33_float__transposed


/** Invert in place using the determinant.
@return const reference to this */
unsigned int Imath_3_0__Matrix33_float__invert(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_);
#define Imath_M33f_invert Imath_3_0__Matrix33_float__invert


/** Return the inverse using the determinant, leaving this unmodified. */
unsigned int Imath_3_0__Matrix33_float__inverse(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_);
#define Imath_M33f_inverse Imath_3_0__Matrix33_float__inverse


/** Invert in place using the Gauss-Jordan method. Significantly slower
but more accurate than invert().
@return const reference to this */
unsigned int Imath_3_0__Matrix33_float__gjInvert(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_);
#define Imath_M33f_gjInvert Imath_3_0__Matrix33_float__gjInvert


/** Return the inverse using the Gauss-Jordan method. Significantly slower,
leaving this unmodified. Slower but more accurate than inverse(). */
unsigned int Imath_3_0__Matrix33_float__gjInverse(
    Imath_M33f_t const * this_
    , Imath_M33f_t * return_);
#define Imath_M33f_gjInverse Imath_3_0__Matrix33_float__gjInverse


/** Calculate the matrix minor of the (r,c) element */
unsigned int Imath_3_0__Matrix33_float__minorOf(
    Imath_M33f_t const * this_
    , float * return_
    , int const r
    , int const c);
#define Imath_M33f_minorOf Imath_3_0__Matrix33_float__minorOf


/** Build a minor using the specified rows and columns */
unsigned int Imath_3_0__Matrix33_float__fastMinor(
    Imath_M33f_t const * this_
    , float * return_
    , int const r0
    , int const r1
    , int const c0
    , int const c1);
#define Imath_M33f_fastMinor Imath_3_0__Matrix33_float__fastMinor


/** Determinant */
unsigned int Imath_3_0__Matrix33_float__determinant(
    Imath_M33f_t const * this_
    , float * return_);
#define Imath_M33f_determinant Imath_3_0__Matrix33_float__determinant


/** Set matrix to scale by given uniform factor
@return const referenced to this */
unsigned int Imath_3_0__Matrix33_float__setScale(
    Imath_M33f_t * this_
    , Imath_M33f_t const * * return_
    , float s);
#define Imath_M33f_setScale Imath_3_0__Matrix33_float__setScale


/** Return the translation component */
unsigned int Imath_3_0__Matrix33_float__translation(
    Imath_M33f_t const * this_
    , Imath_V2f_t * return_);
#define Imath_M33f_translation Imath_3_0__Matrix33_float__translation


/** Largest possible negative value */
unsigned int Imath_3_0__Matrix33_float__baseTypeLowest(
    float * return_);
#define Imath_M33f_baseTypeLowest Imath_3_0__Matrix33_float__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Matrix33_float__baseTypeMax(
    float * return_);
#define Imath_M33f_baseTypeMax Imath_3_0__Matrix33_float__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Matrix33_float__baseTypeSmallest(
    float * return_);
#define Imath_M33f_baseTypeSmallest Imath_3_0__Matrix33_float__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Matrix33_float__baseTypeEpsilon(
    float * return_);
#define Imath_M33f_baseTypeEpsilon Imath_3_0__Matrix33_float__baseTypeEpsilon


/** Return the number of the row and column dimensions, i.e. 3. */
unsigned int Imath_3_0__Matrix33_float__dimensions(
    unsigned int * return_);
#define Imath_M33f_dimensions Imath_3_0__Matrix33_float__dimensions


/** Row access */
unsigned int Imath_3_0__Matrix33_double__row(
    Imath_M33d_t * this_
    , double * * return_
    , int i);
#define Imath_M33d_row Imath_3_0__Matrix33_double__row


/** Row access */
unsigned int Imath_3_0__Matrix33_double__row_const(
    Imath_M33d_t const * this_
    , double const * * return_
    , int i);
#define Imath_M33d_row_const Imath_3_0__Matrix33_double__row_const


/** Uninitialized */
unsigned int Imath_3_0__Matrix33_double__uninitialized(
    Imath_M33d_t * this_
    , Imath_Uninitialized _unused);
#define Imath_M33d_uninitialized Imath_3_0__Matrix33_double__uninitialized


/** Default constructor: initialize to identity
  1 0 0
  0 1 0
  0 0 1 */
unsigned int Imath_3_0__Matrix33_double__identity(
    Imath_M33d_t * this_);
#define Imath_M33d_identity Imath_3_0__Matrix33_double__identity


/** Initialize to scalar constant
  a a a
  a a a
  a a a */
unsigned int Imath_3_0__Matrix33_double__broadcast(
    Imath_M33d_t * this_
    , double a);
#define Imath_M33d_broadcast Imath_3_0__Matrix33_double__broadcast


/** Construct from 3x3 array 
  a[0][0] a[0][1] a[0][2]
  a[1][0] a[1][1] a[1][2]
  a[2][0] a[2][1] a[2][2] */
unsigned int Imath_3_0__Matrix33_double__from_array(
    Imath_M33d_t * this_
    , double const a[3][3]);
#define Imath_M33d_from_array Imath_3_0__Matrix33_double__from_array


/** Construct from given scalar values
  a b c
  d e f
  g h i */
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
    , double i);
#define Imath_M33d_ctor Imath_3_0__Matrix33_double__ctor


unsigned int Imath_3_0__Matrix33_double__ctor_1(
    Imath_M33d_t * this_
    , Imath_M33d_t const * v);
#define Imath_M33d_ctor_1 Imath_3_0__Matrix33_double__ctor_1


unsigned int Imath_3_0__Matrix33_double___assign(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , Imath_M33d_t const * v);
#define Imath_M33d__assign Imath_3_0__Matrix33_double___assign


/** Destructor */
unsigned int Imath_3_0__Matrix33_double__dtor(
    Imath_M33d_t * this_);
#define Imath_M33d_dtor Imath_3_0__Matrix33_double__dtor


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Matrix33_double__getValue(
    Imath_M33d_t * this_
    , double * * return_);
#define Imath_M33d_getValue Imath_3_0__Matrix33_double__getValue


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Matrix33_double__getValue_const(
    Imath_M33d_t const * this_
    , double const * * return_);
#define Imath_M33d_getValue_const Imath_3_0__Matrix33_double__getValue_const


/** Equality */
unsigned int Imath_3_0__Matrix33_double___eq(
    Imath_M33d_t const * this_
    , _Bool * return_
    , Imath_M33d_t const * v);
#define Imath_M33d__eq Imath_3_0__Matrix33_double___eq


/** Inequality */
unsigned int Imath_3_0__Matrix33_double___ne(
    Imath_M33d_t const * this_
    , _Bool * return_
    , Imath_M33d_t const * v);
#define Imath_M33d__ne Imath_3_0__Matrix33_double___ne


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Matrix33_double__equalWithAbsError(
    Imath_M33d_t const * this_
    , _Bool * return_
    , Imath_M33d_t const * v
    , double e);
#define Imath_M33d_equalWithAbsError Imath_3_0__Matrix33_double__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Matrix33_double__equalWithRelError(
    Imath_M33d_t const * this_
    , _Bool * return_
    , Imath_M33d_t const * v
    , double e);
#define Imath_M33d_equalWithRelError Imath_3_0__Matrix33_double__equalWithRelError


/** Component-wise addition */
unsigned int Imath_3_0__Matrix33_double___op_iadd(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , Imath_M33d_t const * v);
#define Imath_M33d__op_iadd Imath_3_0__Matrix33_double___op_iadd


/** Component-wise addition */
unsigned int Imath_3_0__Matrix33_double__add_assign_scalar(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , double a);
#define Imath_M33d_add_assign_scalar Imath_3_0__Matrix33_double__add_assign_scalar


/** Component-wise addition */
unsigned int Imath_3_0__Matrix33_double___op_add(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_
    , Imath_M33d_t const * v);
#define Imath_M33d__op_add Imath_3_0__Matrix33_double___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Matrix33_double___op_isub(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , Imath_M33d_t const * v);
#define Imath_M33d__op_isub Imath_3_0__Matrix33_double___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Matrix33_double__sub_assign_scalar(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , double a);
#define Imath_M33d_sub_assign_scalar Imath_3_0__Matrix33_double__sub_assign_scalar


/** Component-wise subtraction */
unsigned int Imath_3_0__Matrix33_double___op_sub(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_
    , Imath_M33d_t const * v);
#define Imath_M33d__op_sub Imath_3_0__Matrix33_double___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Matrix33_double___op_sub_1(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_);
#define Imath_M33d__op_sub_1 Imath_3_0__Matrix33_double___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Matrix33_double__negate(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_);
#define Imath_M33d_negate Imath_3_0__Matrix33_double__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Matrix33_double__mul_assign_scalar(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , double a);
#define Imath_M33d_mul_assign_scalar Imath_3_0__Matrix33_double__mul_assign_scalar


/** Component-wise multiplication */
unsigned int Imath_3_0__Matrix33_double__mul_scalar(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_
    , double a);
#define Imath_M33d_mul_scalar Imath_3_0__Matrix33_double__mul_scalar


/** Component-wise division */
unsigned int Imath_3_0__Matrix33_double__div_assign_scalar(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , double a);
#define Imath_M33d_div_assign_scalar Imath_3_0__Matrix33_double__div_assign_scalar


/** Component-wise division */
unsigned int Imath_3_0__Matrix33_double__div_scalar(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_
    , double a);
#define Imath_M33d_div_scalar Imath_3_0__Matrix33_double__div_scalar


/** Matrix-matrix multiplication */
unsigned int Imath_3_0__Matrix33_double___op_imul(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , Imath_M33d_t const * v);
#define Imath_M33d__op_imul Imath_3_0__Matrix33_double___op_imul


/** Matrix-matrix multiplication */
unsigned int Imath_3_0__Matrix33_double___op_mul(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_
    , Imath_M33d_t const * v);
#define Imath_M33d__op_mul Imath_3_0__Matrix33_double___op_mul


/** Set to the identity matrix */
unsigned int Imath_3_0__Matrix33_double__makeIdentity(
    Imath_M33d_t * this_);
#define Imath_M33d_makeIdentity Imath_3_0__Matrix33_double__makeIdentity


/** Transpose */
unsigned int Imath_3_0__Matrix33_double__transpose(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_);
#define Imath_M33d_transpose Imath_3_0__Matrix33_double__transpose


/** Return the transpose */
unsigned int Imath_3_0__Matrix33_double__transposed(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_);
#define Imath_M33d_transposed Imath_3_0__Matrix33_double__transposed


/** Invert in place using the determinant.
@return const reference to this */
unsigned int Imath_3_0__Matrix33_double__invert(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_);
#define Imath_M33d_invert Imath_3_0__Matrix33_double__invert


/** Return the inverse using the determinant, leaving this unmodified. */
unsigned int Imath_3_0__Matrix33_double__inverse(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_);
#define Imath_M33d_inverse Imath_3_0__Matrix33_double__inverse


/** Invert in place using the Gauss-Jordan method. Significantly slower
but more accurate than invert().
@return const reference to this */
unsigned int Imath_3_0__Matrix33_double__gjInvert(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_);
#define Imath_M33d_gjInvert Imath_3_0__Matrix33_double__gjInvert


/** Return the inverse using the Gauss-Jordan method. Significantly slower,
leaving this unmodified. Slower but more accurate than inverse(). */
unsigned int Imath_3_0__Matrix33_double__gjInverse(
    Imath_M33d_t const * this_
    , Imath_M33d_t * return_);
#define Imath_M33d_gjInverse Imath_3_0__Matrix33_double__gjInverse


/** Calculate the matrix minor of the (r,c) element */
unsigned int Imath_3_0__Matrix33_double__minorOf(
    Imath_M33d_t const * this_
    , double * return_
    , int const r
    , int const c);
#define Imath_M33d_minorOf Imath_3_0__Matrix33_double__minorOf


/** Build a minor using the specified rows and columns */
unsigned int Imath_3_0__Matrix33_double__fastMinor(
    Imath_M33d_t const * this_
    , double * return_
    , int const r0
    , int const r1
    , int const c0
    , int const c1);
#define Imath_M33d_fastMinor Imath_3_0__Matrix33_double__fastMinor


/** Determinant */
unsigned int Imath_3_0__Matrix33_double__determinant(
    Imath_M33d_t const * this_
    , double * return_);
#define Imath_M33d_determinant Imath_3_0__Matrix33_double__determinant


/** Set matrix to scale by given uniform factor
@return const referenced to this */
unsigned int Imath_3_0__Matrix33_double__setScale(
    Imath_M33d_t * this_
    , Imath_M33d_t const * * return_
    , double s);
#define Imath_M33d_setScale Imath_3_0__Matrix33_double__setScale


/** Return the translation component */
unsigned int Imath_3_0__Matrix33_double__translation(
    Imath_M33d_t const * this_
    , Imath_V2d_t * return_);
#define Imath_M33d_translation Imath_3_0__Matrix33_double__translation


/** Largest possible negative value */
unsigned int Imath_3_0__Matrix33_double__baseTypeLowest(
    double * return_);
#define Imath_M33d_baseTypeLowest Imath_3_0__Matrix33_double__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Matrix33_double__baseTypeMax(
    double * return_);
#define Imath_M33d_baseTypeMax Imath_3_0__Matrix33_double__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Matrix33_double__baseTypeSmallest(
    double * return_);
#define Imath_M33d_baseTypeSmallest Imath_3_0__Matrix33_double__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Matrix33_double__baseTypeEpsilon(
    double * return_);
#define Imath_M33d_baseTypeEpsilon Imath_3_0__Matrix33_double__baseTypeEpsilon


/** Return the number of the row and column dimensions, i.e. 3. */
unsigned int Imath_3_0__Matrix33_double__dimensions(
    unsigned int * return_);
#define Imath_M33d_dimensions Imath_3_0__Matrix33_double__dimensions


/** Row access */
unsigned int Imath_3_0__Matrix44_float__row(
    Imath_M44f_t * this_
    , float * * return_
    , int i);
#define Imath_M44f_row Imath_3_0__Matrix44_float__row


/** Row access */
unsigned int Imath_3_0__Matrix44_float__row_const(
    Imath_M44f_t const * this_
    , float const * * return_
    , int i);
#define Imath_M44f_row_const Imath_3_0__Matrix44_float__row_const


/** Uninitialized */
unsigned int Imath_3_0__Matrix44_float__uninitialized(
    Imath_M44f_t * this_
    , Imath_Uninitialized _unused);
#define Imath_M44f_uninitialized Imath_3_0__Matrix44_float__uninitialized


/** Default constructor: initialize to identity
  1 0 0 0
  0 1 0 0
  0 0 1 0
  0 0 0 1 */
unsigned int Imath_3_0__Matrix44_float__identity(
    Imath_M44f_t * this_);
#define Imath_M44f_identity Imath_3_0__Matrix44_float__identity


/** Initialize to scalar constant
  a a a a
  a a a a
  a a a a
  a a a a */
unsigned int Imath_3_0__Matrix44_float__broadcast(
    Imath_M44f_t * this_
    , float a);
#define Imath_M44f_broadcast Imath_3_0__Matrix44_float__broadcast


/** Construct from 4x4 array 
  a[0][0] a[0][1] a[0][2] a[0][3]
  a[1][0] a[1][1] a[1][2] a[1][3]
  a[2][0] a[2][1] a[2][2] a[2][3]
  a[3][0] a[3][1] a[3][2] a[3][3] */
unsigned int Imath_3_0__Matrix44_float__from_array(
    Imath_M44f_t * this_
    , float const a[4][4]);
#define Imath_M44f_from_array Imath_3_0__Matrix44_float__from_array


/** Construct from given scalar values
  a b c d
  e f g h
  i j k l
  m n o p */
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
    , float p);
#define Imath_M44f_ctor Imath_3_0__Matrix44_float__ctor


/** Construct from a 3x3 rotation matrix and a translation vector
  r r r 0
  r r r 0
  r r r 0
  t t t 1 */
unsigned int Imath_3_0__Matrix44_float__from_rotation_and_translation(
    Imath_M44f_t * this_
    , Imath_M33f_t r
    , Imath_V3f_t t);
#define Imath_M44f_from_rotation_and_translation Imath_3_0__Matrix44_float__from_rotation_and_translation


unsigned int Imath_3_0__Matrix44_float__ctor_1(
    Imath_M44f_t * this_
    , Imath_M44f_t const * v);
#define Imath_M44f_ctor_1 Imath_3_0__Matrix44_float__ctor_1


unsigned int Imath_3_0__Matrix44_float___assign(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , Imath_M44f_t const * v);
#define Imath_M44f__assign Imath_3_0__Matrix44_float___assign


/** Destructor */
unsigned int Imath_3_0__Matrix44_float__dtor(
    Imath_M44f_t * this_);
#define Imath_M44f_dtor Imath_3_0__Matrix44_float__dtor


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Matrix44_float__getValue(
    Imath_M44f_t * this_
    , float * * return_);
#define Imath_M44f_getValue Imath_3_0__Matrix44_float__getValue


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Matrix44_float__getValue_1(
    Imath_M44f_t const * this_
    , float const * * return_);
#define Imath_M44f_getValue_1 Imath_3_0__Matrix44_float__getValue_1


/** Equality */
unsigned int Imath_3_0__Matrix44_float___eq(
    Imath_M44f_t const * this_
    , _Bool * return_
    , Imath_M44f_t const * v);
#define Imath_M44f__eq Imath_3_0__Matrix44_float___eq


/** Inequality */
unsigned int Imath_3_0__Matrix44_float___ne(
    Imath_M44f_t const * this_
    , _Bool * return_
    , Imath_M44f_t const * v);
#define Imath_M44f__ne Imath_3_0__Matrix44_float___ne


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Matrix44_float__equalWithAbsError(
    Imath_M44f_t const * this_
    , _Bool * return_
    , Imath_M44f_t const * v
    , float e);
#define Imath_M44f_equalWithAbsError Imath_3_0__Matrix44_float__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Matrix44_float__equalWithRelError(
    Imath_M44f_t const * this_
    , _Bool * return_
    , Imath_M44f_t const * v
    , float e);
#define Imath_M44f_equalWithRelError Imath_3_0__Matrix44_float__equalWithRelError


/** Component-wise addition */
unsigned int Imath_3_0__Matrix44_float___op_iadd(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , Imath_M44f_t const * v);
#define Imath_M44f__op_iadd Imath_3_0__Matrix44_float___op_iadd


/** Component-wise addition */
unsigned int Imath_3_0__Matrix44_float__add_assign_scalar(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , float a);
#define Imath_M44f_add_assign_scalar Imath_3_0__Matrix44_float__add_assign_scalar


/** Component-wise addition */
unsigned int Imath_3_0__Matrix44_float___op_add(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_
    , Imath_M44f_t const * v);
#define Imath_M44f__op_add Imath_3_0__Matrix44_float___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Matrix44_float___op_isub(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , Imath_M44f_t const * v);
#define Imath_M44f__op_isub Imath_3_0__Matrix44_float___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Matrix44_float__sub_assign_scalar(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , float a);
#define Imath_M44f_sub_assign_scalar Imath_3_0__Matrix44_float__sub_assign_scalar


/** Component-wise subtraction */
unsigned int Imath_3_0__Matrix44_float___op_sub(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_
    , Imath_M44f_t const * v);
#define Imath_M44f__op_sub Imath_3_0__Matrix44_float___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Matrix44_float___op_sub_1(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_);
#define Imath_M44f__op_sub_1 Imath_3_0__Matrix44_float___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Matrix44_float__negate(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_);
#define Imath_M44f_negate Imath_3_0__Matrix44_float__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Matrix44_float__mul_assign_scalar(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , float a);
#define Imath_M44f_mul_assign_scalar Imath_3_0__Matrix44_float__mul_assign_scalar


/** Component-wise multiplication */
unsigned int Imath_3_0__Matrix44_float__mul_scalar(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_
    , float a);
#define Imath_M44f_mul_scalar Imath_3_0__Matrix44_float__mul_scalar


/** Component-wise division */
unsigned int Imath_3_0__Matrix44_float__div_assign_scalar(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , float a);
#define Imath_M44f_div_assign_scalar Imath_3_0__Matrix44_float__div_assign_scalar


/** Component-wise division */
unsigned int Imath_3_0__Matrix44_float__div_scalar(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_
    , float a);
#define Imath_M44f_div_scalar Imath_3_0__Matrix44_float__div_scalar


/** Matrix-matrix multiplication */
unsigned int Imath_3_0__Matrix44_float___op_imul(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , Imath_M44f_t const * v);
#define Imath_M44f__op_imul Imath_3_0__Matrix44_float___op_imul


/** Matrix-matrix multiplication */
unsigned int Imath_3_0__Matrix44_float___op_mul(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_
    , Imath_M44f_t const * v);
#define Imath_M44f__op_mul Imath_3_0__Matrix44_float___op_mul


/** Matrix-matrix multiplication: compute c = a * b */
unsigned int Imath_3_0__Matrix44_float__multiply(
    Imath_M44f_t const * a
    , Imath_M44f_t const * b
    , Imath_M44f_t * c);
#define Imath_M44f_multiply Imath_3_0__Matrix44_float__multiply


/** Set to the identity matrix */
unsigned int Imath_3_0__Matrix44_float__makeIdentity(
    Imath_M44f_t * this_);
#define Imath_M44f_makeIdentity Imath_3_0__Matrix44_float__makeIdentity


/** Transpose */
unsigned int Imath_3_0__Matrix44_float__transpose(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_);
#define Imath_M44f_transpose Imath_3_0__Matrix44_float__transpose


/** Return the transpose */
unsigned int Imath_3_0__Matrix44_float__transposed(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_);
#define Imath_M44f_transposed Imath_3_0__Matrix44_float__transposed


/** Invert in place using the determinant.
@return const reference to this */
unsigned int Imath_3_0__Matrix44_float__invert(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_);
#define Imath_M44f_invert Imath_3_0__Matrix44_float__invert


/** Return the inverse using the determinant, leaving this unmodified. */
unsigned int Imath_3_0__Matrix44_float__inverse(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_);
#define Imath_M44f_inverse Imath_3_0__Matrix44_float__inverse


/** Invert in place using the Gauss-Jordan method. Significantly slower
but more accurate than invert().
@return const reference to this */
unsigned int Imath_3_0__Matrix44_float__gjInvert(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_);
#define Imath_M44f_gjInvert Imath_3_0__Matrix44_float__gjInvert


/** Return the inverse using the Gauss-Jordan method, leaving this
unmodified Significantly slower but more accurate than inverse(). */
unsigned int Imath_3_0__Matrix44_float__gjInverse(
    Imath_M44f_t const * this_
    , Imath_M44f_t * return_);
#define Imath_M44f_gjInverse Imath_3_0__Matrix44_float__gjInverse


/** Calculate the matrix minor of the (r,c) element */
unsigned int Imath_3_0__Matrix44_float__minorOf(
    Imath_M44f_t const * this_
    , float * return_
    , int const r
    , int const c);
#define Imath_M44f_minorOf Imath_3_0__Matrix44_float__minorOf


/** Build a minor using the specified rows and columns */
unsigned int Imath_3_0__Matrix44_float__fastMinor(
    Imath_M44f_t const * this_
    , float * return_
    , int const r0
    , int const r1
    , int const r2
    , int const c0
    , int const c1
    , int const c2);
#define Imath_M44f_fastMinor Imath_3_0__Matrix44_float__fastMinor


/** Determinant */
unsigned int Imath_3_0__Matrix44_float__determinant(
    Imath_M44f_t const * this_
    , float * return_);
#define Imath_M44f_determinant Imath_3_0__Matrix44_float__determinant


/** Set matrix to scale by given uniform factor
@return const referenced to this */
unsigned int Imath_3_0__Matrix44_float__setScale_uniform(
    Imath_M44f_t * this_
    , Imath_M44f_t const * * return_
    , float s);
#define Imath_M44f_setScale_uniform Imath_3_0__Matrix44_float__setScale_uniform


/** Return translation component */
unsigned int Imath_3_0__Matrix44_float__translation(
    Imath_M44f_t const * this_
    , Imath_V3f_t * return_);
#define Imath_M44f_translation Imath_3_0__Matrix44_float__translation


/** Largest possible negative value */
unsigned int Imath_3_0__Matrix44_float__baseTypeLowest(
    float * return_);
#define Imath_M44f_baseTypeLowest Imath_3_0__Matrix44_float__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Matrix44_float__baseTypeMax(
    float * return_);
#define Imath_M44f_baseTypeMax Imath_3_0__Matrix44_float__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Matrix44_float__baseTypeSmallest(
    float * return_);
#define Imath_M44f_baseTypeSmallest Imath_3_0__Matrix44_float__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Matrix44_float__baseTypeEpsilon(
    float * return_);
#define Imath_M44f_baseTypeEpsilon Imath_3_0__Matrix44_float__baseTypeEpsilon


/** Return the number of the row and column dimensions, i.e. 4 */
unsigned int Imath_3_0__Matrix44_float__dimensions(
    unsigned int * return_);
#define Imath_M44f_dimensions Imath_3_0__Matrix44_float__dimensions


/** Row access */
unsigned int Imath_3_0__Matrix44_double__row(
    Imath_M44d_t * this_
    , double * * return_
    , int i);
#define Imath_M44d_row Imath_3_0__Matrix44_double__row


/** Row access */
unsigned int Imath_3_0__Matrix44_double__row_const(
    Imath_M44d_t const * this_
    , double const * * return_
    , int i);
#define Imath_M44d_row_const Imath_3_0__Matrix44_double__row_const


/** Uninitialized */
unsigned int Imath_3_0__Matrix44_double__uninitialized(
    Imath_M44d_t * this_
    , Imath_Uninitialized _unused);
#define Imath_M44d_uninitialized Imath_3_0__Matrix44_double__uninitialized


/** Default constructor: initialize to identity
  1 0 0 0
  0 1 0 0
  0 0 1 0
  0 0 0 1 */
unsigned int Imath_3_0__Matrix44_double__identity(
    Imath_M44d_t * this_);
#define Imath_M44d_identity Imath_3_0__Matrix44_double__identity


/** Initialize to scalar constant
  a a a a
  a a a a
  a a a a
  a a a a */
unsigned int Imath_3_0__Matrix44_double__broadcast(
    Imath_M44d_t * this_
    , double a);
#define Imath_M44d_broadcast Imath_3_0__Matrix44_double__broadcast


/** Construct from 4x4 array 
  a[0][0] a[0][1] a[0][2] a[0][3]
  a[1][0] a[1][1] a[1][2] a[1][3]
  a[2][0] a[2][1] a[2][2] a[2][3]
  a[3][0] a[3][1] a[3][2] a[3][3] */
unsigned int Imath_3_0__Matrix44_double__from_array(
    Imath_M44d_t * this_
    , double const a[4][4]);
#define Imath_M44d_from_array Imath_3_0__Matrix44_double__from_array


/** Construct from given scalar values
  a b c d
  e f g h
  i j k l
  m n o p */
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
    , double p);
#define Imath_M44d_ctor Imath_3_0__Matrix44_double__ctor


/** Construct from a 3x3 rotation matrix and a translation vector
  r r r 0
  r r r 0
  r r r 0
  t t t 1 */
unsigned int Imath_3_0__Matrix44_double__from_rotation_and_translation(
    Imath_M44d_t * this_
    , Imath_M33d_t r
    , Imath_V3d_t t);
#define Imath_M44d_from_rotation_and_translation Imath_3_0__Matrix44_double__from_rotation_and_translation


unsigned int Imath_3_0__Matrix44_double__ctor_1(
    Imath_M44d_t * this_
    , Imath_M44d_t const * v);
#define Imath_M44d_ctor_1 Imath_3_0__Matrix44_double__ctor_1


unsigned int Imath_3_0__Matrix44_double___assign(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , Imath_M44d_t const * v);
#define Imath_M44d__assign Imath_3_0__Matrix44_double___assign


/** Destructor */
unsigned int Imath_3_0__Matrix44_double__dtor(
    Imath_M44d_t * this_);
#define Imath_M44d_dtor Imath_3_0__Matrix44_double__dtor


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Matrix44_double__getValue(
    Imath_M44d_t * this_
    , double * * return_);
#define Imath_M44d_getValue Imath_3_0__Matrix44_double__getValue


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Matrix44_double__getValue_1(
    Imath_M44d_t const * this_
    , double const * * return_);
#define Imath_M44d_getValue_1 Imath_3_0__Matrix44_double__getValue_1


/** Equality */
unsigned int Imath_3_0__Matrix44_double___eq(
    Imath_M44d_t const * this_
    , _Bool * return_
    , Imath_M44d_t const * v);
#define Imath_M44d__eq Imath_3_0__Matrix44_double___eq


/** Inequality */
unsigned int Imath_3_0__Matrix44_double___ne(
    Imath_M44d_t const * this_
    , _Bool * return_
    , Imath_M44d_t const * v);
#define Imath_M44d__ne Imath_3_0__Matrix44_double___ne


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Matrix44_double__equalWithAbsError(
    Imath_M44d_t const * this_
    , _Bool * return_
    , Imath_M44d_t const * v
    , double e);
#define Imath_M44d_equalWithAbsError Imath_3_0__Matrix44_double__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Matrix44_double__equalWithRelError(
    Imath_M44d_t const * this_
    , _Bool * return_
    , Imath_M44d_t const * v
    , double e);
#define Imath_M44d_equalWithRelError Imath_3_0__Matrix44_double__equalWithRelError


/** Component-wise addition */
unsigned int Imath_3_0__Matrix44_double___op_iadd(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , Imath_M44d_t const * v);
#define Imath_M44d__op_iadd Imath_3_0__Matrix44_double___op_iadd


/** Component-wise addition */
unsigned int Imath_3_0__Matrix44_double__add_assign_scalar(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , double a);
#define Imath_M44d_add_assign_scalar Imath_3_0__Matrix44_double__add_assign_scalar


/** Component-wise addition */
unsigned int Imath_3_0__Matrix44_double___op_add(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_
    , Imath_M44d_t const * v);
#define Imath_M44d__op_add Imath_3_0__Matrix44_double___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Matrix44_double___op_isub(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , Imath_M44d_t const * v);
#define Imath_M44d__op_isub Imath_3_0__Matrix44_double___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Matrix44_double__sub_assign_scalar(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , double a);
#define Imath_M44d_sub_assign_scalar Imath_3_0__Matrix44_double__sub_assign_scalar


/** Component-wise subtraction */
unsigned int Imath_3_0__Matrix44_double___op_sub(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_
    , Imath_M44d_t const * v);
#define Imath_M44d__op_sub Imath_3_0__Matrix44_double___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Matrix44_double___op_sub_1(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_);
#define Imath_M44d__op_sub_1 Imath_3_0__Matrix44_double___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Matrix44_double__negate(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_);
#define Imath_M44d_negate Imath_3_0__Matrix44_double__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Matrix44_double__mul_assign_scalar(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , double a);
#define Imath_M44d_mul_assign_scalar Imath_3_0__Matrix44_double__mul_assign_scalar


/** Component-wise multiplication */
unsigned int Imath_3_0__Matrix44_double__mul_scalar(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_
    , double a);
#define Imath_M44d_mul_scalar Imath_3_0__Matrix44_double__mul_scalar


/** Component-wise division */
unsigned int Imath_3_0__Matrix44_double__div_assign_scalar(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , double a);
#define Imath_M44d_div_assign_scalar Imath_3_0__Matrix44_double__div_assign_scalar


/** Component-wise division */
unsigned int Imath_3_0__Matrix44_double__div_scalar(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_
    , double a);
#define Imath_M44d_div_scalar Imath_3_0__Matrix44_double__div_scalar


/** Matrix-matrix multiplication */
unsigned int Imath_3_0__Matrix44_double___op_imul(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , Imath_M44d_t const * v);
#define Imath_M44d__op_imul Imath_3_0__Matrix44_double___op_imul


/** Matrix-matrix multiplication */
unsigned int Imath_3_0__Matrix44_double___op_mul(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_
    , Imath_M44d_t const * v);
#define Imath_M44d__op_mul Imath_3_0__Matrix44_double___op_mul


/** Matrix-matrix multiplication: compute c = a * b */
unsigned int Imath_3_0__Matrix44_double__multiply(
    Imath_M44d_t const * a
    , Imath_M44d_t const * b
    , Imath_M44d_t * c);
#define Imath_M44d_multiply Imath_3_0__Matrix44_double__multiply


/** Set to the identity matrix */
unsigned int Imath_3_0__Matrix44_double__makeIdentity(
    Imath_M44d_t * this_);
#define Imath_M44d_makeIdentity Imath_3_0__Matrix44_double__makeIdentity


/** Transpose */
unsigned int Imath_3_0__Matrix44_double__transpose(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_);
#define Imath_M44d_transpose Imath_3_0__Matrix44_double__transpose


/** Return the transpose */
unsigned int Imath_3_0__Matrix44_double__transposed(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_);
#define Imath_M44d_transposed Imath_3_0__Matrix44_double__transposed


/** Invert in place using the determinant.
@return const reference to this */
unsigned int Imath_3_0__Matrix44_double__invert(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_);
#define Imath_M44d_invert Imath_3_0__Matrix44_double__invert


/** Return the inverse using the determinant, leaving this unmodified. */
unsigned int Imath_3_0__Matrix44_double__inverse(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_);
#define Imath_M44d_inverse Imath_3_0__Matrix44_double__inverse


/** Invert in place using the Gauss-Jordan method. Significantly slower
but more accurate than invert().
@return const reference to this */
unsigned int Imath_3_0__Matrix44_double__gjInvert(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_);
#define Imath_M44d_gjInvert Imath_3_0__Matrix44_double__gjInvert


/** Return the inverse using the Gauss-Jordan method, leaving this
unmodified Significantly slower but more accurate than inverse(). */
unsigned int Imath_3_0__Matrix44_double__gjInverse(
    Imath_M44d_t const * this_
    , Imath_M44d_t * return_);
#define Imath_M44d_gjInverse Imath_3_0__Matrix44_double__gjInverse


/** Calculate the matrix minor of the (r,c) element */
unsigned int Imath_3_0__Matrix44_double__minorOf(
    Imath_M44d_t const * this_
    , double * return_
    , int const r
    , int const c);
#define Imath_M44d_minorOf Imath_3_0__Matrix44_double__minorOf


/** Build a minor using the specified rows and columns */
unsigned int Imath_3_0__Matrix44_double__fastMinor(
    Imath_M44d_t const * this_
    , double * return_
    , int const r0
    , int const r1
    , int const r2
    , int const c0
    , int const c1
    , int const c2);
#define Imath_M44d_fastMinor Imath_3_0__Matrix44_double__fastMinor


/** Determinant */
unsigned int Imath_3_0__Matrix44_double__determinant(
    Imath_M44d_t const * this_
    , double * return_);
#define Imath_M44d_determinant Imath_3_0__Matrix44_double__determinant


/** Set matrix to scale by given uniform factor
@return const referenced to this */
unsigned int Imath_3_0__Matrix44_double__setScale_uniform(
    Imath_M44d_t * this_
    , Imath_M44d_t const * * return_
    , double s);
#define Imath_M44d_setScale_uniform Imath_3_0__Matrix44_double__setScale_uniform


/** Return translation component */
unsigned int Imath_3_0__Matrix44_double__translation(
    Imath_M44d_t const * this_
    , Imath_V3d_t * return_);
#define Imath_M44d_translation Imath_3_0__Matrix44_double__translation


/** Largest possible negative value */
unsigned int Imath_3_0__Matrix44_double__baseTypeLowest(
    double * return_);
#define Imath_M44d_baseTypeLowest Imath_3_0__Matrix44_double__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Matrix44_double__baseTypeMax(
    double * return_);
#define Imath_M44d_baseTypeMax Imath_3_0__Matrix44_double__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Matrix44_double__baseTypeSmallest(
    double * return_);
#define Imath_M44d_baseTypeSmallest Imath_3_0__Matrix44_double__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Matrix44_double__baseTypeEpsilon(
    double * return_);
#define Imath_M44d_baseTypeEpsilon Imath_3_0__Matrix44_double__baseTypeEpsilon


/** Return the number of the row and column dimensions, i.e. 4 */
unsigned int Imath_3_0__Matrix44_double__dimensions(
    unsigned int * return_);
#define Imath_M44d_dimensions Imath_3_0__Matrix44_double__dimensions


#ifdef __cplusplus
}
#endif

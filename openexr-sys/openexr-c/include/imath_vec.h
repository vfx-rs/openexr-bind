#pragma once
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Enum for the Vec4 to Vec3 conversion constructor */
enum Imath_3_0__InfException_e {
    Imath_InfException_INF_EXCEPTION = 0,
};
typedef unsigned int Imath_InfException;

typedef struct Imath_3_0__Vec2_short__t_s {
    short x;
    short y;
} __attribute__((aligned(2))) Imath_3_0__Vec2_short__t;
typedef Imath_3_0__Vec2_short__t Imath_V2s_t;

typedef struct Imath_3_0__Vec2_int__t_s {
    int x;
    int y;
} __attribute__((aligned(4))) Imath_3_0__Vec2_int__t;
typedef Imath_3_0__Vec2_int__t Imath_V2i_t;

typedef struct Imath_3_0__Vec2_long__t_s {
    long x;
    long y;
} __attribute__((aligned(8))) Imath_3_0__Vec2_long__t;
typedef Imath_3_0__Vec2_long__t Imath_V2i64_t;

typedef struct Imath_3_0__Vec2_float__t_s {
    float x;
    float y;
} __attribute__((aligned(4))) Imath_3_0__Vec2_float__t;
typedef Imath_3_0__Vec2_float__t Imath_V2f_t;

typedef struct Imath_3_0__Vec2_double__t_s {
    double x;
    double y;
} __attribute__((aligned(8))) Imath_3_0__Vec2_double__t;
typedef Imath_3_0__Vec2_double__t Imath_V2d_t;

typedef struct Imath_3_0__Vec3_short__t_s {
    short x;
    short y;
    short z;
} __attribute__((aligned(2))) Imath_3_0__Vec3_short__t;
typedef Imath_3_0__Vec3_short__t Imath_V3s_t;

typedef struct Imath_3_0__Vec3_int__t_s {
    int x;
    int y;
    int z;
} __attribute__((aligned(4))) Imath_3_0__Vec3_int__t;
typedef Imath_3_0__Vec3_int__t Imath_V3i_t;

typedef struct Imath_3_0__Vec3_long__t_s {
    long x;
    long y;
    long z;
} __attribute__((aligned(8))) Imath_3_0__Vec3_long__t;
typedef Imath_3_0__Vec3_long__t Imath_V3i64_t;

typedef struct Imath_3_0__Vec3_float__t_s {
    float x;
    float y;
    float z;
} __attribute__((aligned(4))) Imath_3_0__Vec3_float__t;
typedef Imath_3_0__Vec3_float__t Imath_V3f_t;

typedef struct Imath_3_0__Vec3_double__t_s {
    double x;
    double y;
    double z;
} __attribute__((aligned(8))) Imath_3_0__Vec3_double__t;
typedef Imath_3_0__Vec3_double__t Imath_V3d_t;

typedef struct Imath_3_0__Vec4_short__t_s {
    short x;
    short y;
    short z;
    short w;
} __attribute__((aligned(2))) Imath_3_0__Vec4_short__t;
typedef Imath_3_0__Vec4_short__t Imath_V4s_t;

typedef struct Imath_3_0__Vec4_int__t_s {
    int x;
    int y;
    int z;
    int w;
} __attribute__((aligned(4))) Imath_3_0__Vec4_int__t;
typedef Imath_3_0__Vec4_int__t Imath_Vec4_t;

typedef struct Imath_3_0__Vec4_long__t_s {
    long x;
    long y;
    long z;
    long w;
} __attribute__((aligned(8))) Imath_3_0__Vec4_long__t;
typedef Imath_3_0__Vec4_long__t Imath_V4i64_t;

typedef struct Imath_3_0__Vec4_float__t_s {
    float x;
    float y;
    float z;
    float w;
} __attribute__((aligned(4))) Imath_3_0__Vec4_float__t;
typedef Imath_3_0__Vec4_float__t Imath_V4f_t;

typedef struct Imath_3_0__Vec4_double__t_s {
    double x;
    double y;
    double z;
    double w;
} __attribute__((aligned(8))) Imath_3_0__Vec4_double__t;
typedef Imath_3_0__Vec4_double__t Imath_V4d_t;


/** Element access by index.   */
unsigned int Imath_3_0__Vec2_short__index(
    Imath_V2s_t * this_
    , short * * return_
    , int i);
#define Imath_V2s_index Imath_3_0__Vec2_short__index


/** Element access by index.   */
unsigned int Imath_3_0__Vec2_short__index_const(
    Imath_V2s_t const * this_
    , short const * * return_
    , int i);
#define Imath_V2s_index_const Imath_3_0__Vec2_short__index_const


/** Initialize to a scalar `(a,a)` */
unsigned int Imath_3_0__Vec2_short__broadcast(
    Imath_V2s_t * this_
    , short a);
#define Imath_V2s_broadcast Imath_3_0__Vec2_short__broadcast


/** Initialize to given elements `(a,b)` */
unsigned int Imath_3_0__Vec2_short__ctor(
    Imath_V2s_t * this_
    , short a
    , short b);
#define Imath_V2s_ctor Imath_3_0__Vec2_short__ctor


unsigned int Imath_3_0__Vec2_short__ctor_1(
    Imath_V2s_t * this_
    , Imath_V2s_t const * v);
#define Imath_V2s_ctor_1 Imath_3_0__Vec2_short__ctor_1


/** Assignment */
unsigned int Imath_3_0__Vec2_short___assign(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , Imath_V2s_t const * v);
#define Imath_V2s__assign Imath_3_0__Vec2_short___assign


/** Destructor */
unsigned int Imath_3_0__Vec2_short__dtor(
    Imath_V2s_t * this_);
#define Imath_V2s_dtor Imath_3_0__Vec2_short__dtor


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Vec2_short__equalWithAbsError(
    Imath_V2s_t const * this_
    , _Bool * return_
    , Imath_V2s_t const * v
    , short e);
#define Imath_V2s_equalWithAbsError Imath_3_0__Vec2_short__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Vec2_short__equalWithRelError(
    Imath_V2s_t const * this_
    , _Bool * return_
    , Imath_V2s_t const * v
    , short e);
#define Imath_V2s_equalWithRelError Imath_3_0__Vec2_short__equalWithRelError


/** Dot product */
unsigned int Imath_3_0__Vec2_short__dot(
    Imath_V2s_t const * this_
    , short * return_
    , Imath_V2s_t const * v);
#define Imath_V2s_dot Imath_3_0__Vec2_short__dot


/** Right-handed cross product, i.e. z component of
Vec3 (this->x, this->y, 0) % Vec3 (v.x, v.y, 0) */
unsigned int Imath_3_0__Vec2_short__cross(
    Imath_V2s_t const * this_
    , short * return_
    , Imath_V2s_t const * v);
#define Imath_V2s_cross Imath_3_0__Vec2_short__cross


/** Component-wise addition */
unsigned int Imath_3_0__Vec2_short___op_iadd(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , Imath_V2s_t const * v);
#define Imath_V2s__op_iadd Imath_3_0__Vec2_short___op_iadd


/** Component-wise addition */
unsigned int Imath_3_0__Vec2_short___op_add(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_
    , Imath_V2s_t const * v);
#define Imath_V2s__op_add Imath_3_0__Vec2_short___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec2_short___op_isub(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , Imath_V2s_t const * v);
#define Imath_V2s__op_isub Imath_3_0__Vec2_short___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec2_short___op_sub(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_
    , Imath_V2s_t const * v);
#define Imath_V2s__op_sub Imath_3_0__Vec2_short___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec2_short___op_sub_1(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_);
#define Imath_V2s__op_sub_1 Imath_3_0__Vec2_short___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec2_short__negate(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_);
#define Imath_V2s_negate Imath_3_0__Vec2_short__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_short___op_imul(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , Imath_V2s_t const * v);
#define Imath_V2s__op_imul Imath_3_0__Vec2_short___op_imul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_short___op_imul_1(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , short a);
#define Imath_V2s__op_imul_1 Imath_3_0__Vec2_short___op_imul_1


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_short___op_mul(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_
    , Imath_V2s_t const * v);
#define Imath_V2s__op_mul Imath_3_0__Vec2_short___op_mul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_short___op_mul_1(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_
    , short a);
#define Imath_V2s__op_mul_1 Imath_3_0__Vec2_short___op_mul_1


/** Component-wise division */
unsigned int Imath_3_0__Vec2_short___op_idiv(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , Imath_V2s_t const * v);
#define Imath_V2s__op_idiv Imath_3_0__Vec2_short___op_idiv


/** Component-wise division */
unsigned int Imath_3_0__Vec2_short___op_idiv_1(
    Imath_V2s_t * this_
    , Imath_V2s_t const * * return_
    , short a);
#define Imath_V2s__op_idiv_1 Imath_3_0__Vec2_short___op_idiv_1


/** Component-wise division */
unsigned int Imath_3_0__Vec2_short___op_div(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_
    , Imath_V2s_t const * v);
#define Imath_V2s__op_div Imath_3_0__Vec2_short___op_div


/** Component-wise division */
unsigned int Imath_3_0__Vec2_short___op_div_1(
    Imath_V2s_t const * this_
    , Imath_V2s_t * return_
    , short a);
#define Imath_V2s__op_div_1 Imath_3_0__Vec2_short___op_div_1


/** Return the square of the Euclidean norm, i.e. the dot product
with itself. */
unsigned int Imath_3_0__Vec2_short__length2(
    Imath_V2s_t const * this_
    , short * return_);
#define Imath_V2s_length2 Imath_3_0__Vec2_short__length2


/** Largest possible negative value */
unsigned int Imath_3_0__Vec2_short__baseTypeLowest(
    short * return_);
#define Imath_V2s_baseTypeLowest Imath_3_0__Vec2_short__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Vec2_short__baseTypeMax(
    short * return_);
#define Imath_V2s_baseTypeMax Imath_3_0__Vec2_short__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Vec2_short__baseTypeSmallest(
    short * return_);
#define Imath_V2s_baseTypeSmallest Imath_3_0__Vec2_short__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Vec2_short__baseTypeEpsilon(
    short * return_);
#define Imath_V2s_baseTypeEpsilon Imath_3_0__Vec2_short__baseTypeEpsilon


/** Return the number of dimensions, i.e. 2 */
unsigned int Imath_3_0__Vec2_short__dimensions(
    unsigned int * return_);
#define Imath_V2s_dimensions Imath_3_0__Vec2_short__dimensions


/** Element access by index.   */
unsigned int Imath_3_0__Vec2_int__index(
    Imath_V2i_t * this_
    , int * * return_
    , int i);
#define Imath_V2i_index Imath_3_0__Vec2_int__index


/** Element access by index.   */
unsigned int Imath_3_0__Vec2_int__index_const(
    Imath_V2i_t const * this_
    , int const * * return_
    , int i);
#define Imath_V2i_index_const Imath_3_0__Vec2_int__index_const


/** Initialize to a scalar `(a,a)` */
unsigned int Imath_3_0__Vec2_int__broadcast(
    Imath_V2i_t * this_
    , int a);
#define Imath_V2i_broadcast Imath_3_0__Vec2_int__broadcast


/** Initialize to given elements `(a,b)` */
unsigned int Imath_3_0__Vec2_int__ctor(
    Imath_V2i_t * this_
    , int a
    , int b);
#define Imath_V2i_ctor Imath_3_0__Vec2_int__ctor


unsigned int Imath_3_0__Vec2_int__ctor_1(
    Imath_V2i_t * this_
    , Imath_V2i_t const * v);
#define Imath_V2i_ctor_1 Imath_3_0__Vec2_int__ctor_1


/** Assignment */
unsigned int Imath_3_0__Vec2_int___assign(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , Imath_V2i_t const * v);
#define Imath_V2i__assign Imath_3_0__Vec2_int___assign


/** Destructor */
unsigned int Imath_3_0__Vec2_int__dtor(
    Imath_V2i_t * this_);
#define Imath_V2i_dtor Imath_3_0__Vec2_int__dtor


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Vec2_int__equalWithAbsError(
    Imath_V2i_t const * this_
    , _Bool * return_
    , Imath_V2i_t const * v
    , int e);
#define Imath_V2i_equalWithAbsError Imath_3_0__Vec2_int__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Vec2_int__equalWithRelError(
    Imath_V2i_t const * this_
    , _Bool * return_
    , Imath_V2i_t const * v
    , int e);
#define Imath_V2i_equalWithRelError Imath_3_0__Vec2_int__equalWithRelError


/** Dot product */
unsigned int Imath_3_0__Vec2_int__dot(
    Imath_V2i_t const * this_
    , int * return_
    , Imath_V2i_t const * v);
#define Imath_V2i_dot Imath_3_0__Vec2_int__dot


/** Right-handed cross product, i.e. z component of
Vec3 (this->x, this->y, 0) % Vec3 (v.x, v.y, 0) */
unsigned int Imath_3_0__Vec2_int__cross(
    Imath_V2i_t const * this_
    , int * return_
    , Imath_V2i_t const * v);
#define Imath_V2i_cross Imath_3_0__Vec2_int__cross


/** Component-wise addition */
unsigned int Imath_3_0__Vec2_int___op_iadd(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , Imath_V2i_t const * v);
#define Imath_V2i__op_iadd Imath_3_0__Vec2_int___op_iadd


/** Component-wise addition */
unsigned int Imath_3_0__Vec2_int___op_add(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_
    , Imath_V2i_t const * v);
#define Imath_V2i__op_add Imath_3_0__Vec2_int___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec2_int___op_isub(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , Imath_V2i_t const * v);
#define Imath_V2i__op_isub Imath_3_0__Vec2_int___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec2_int___op_sub(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_
    , Imath_V2i_t const * v);
#define Imath_V2i__op_sub Imath_3_0__Vec2_int___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec2_int___op_sub_1(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_);
#define Imath_V2i__op_sub_1 Imath_3_0__Vec2_int___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec2_int__negate(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_);
#define Imath_V2i_negate Imath_3_0__Vec2_int__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_int___op_imul(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , Imath_V2i_t const * v);
#define Imath_V2i__op_imul Imath_3_0__Vec2_int___op_imul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_int___op_imul_1(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , int a);
#define Imath_V2i__op_imul_1 Imath_3_0__Vec2_int___op_imul_1


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_int___op_mul(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_
    , Imath_V2i_t const * v);
#define Imath_V2i__op_mul Imath_3_0__Vec2_int___op_mul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_int___op_mul_1(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_
    , int a);
#define Imath_V2i__op_mul_1 Imath_3_0__Vec2_int___op_mul_1


/** Component-wise division */
unsigned int Imath_3_0__Vec2_int___op_idiv(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , Imath_V2i_t const * v);
#define Imath_V2i__op_idiv Imath_3_0__Vec2_int___op_idiv


/** Component-wise division */
unsigned int Imath_3_0__Vec2_int___op_idiv_1(
    Imath_V2i_t * this_
    , Imath_V2i_t const * * return_
    , int a);
#define Imath_V2i__op_idiv_1 Imath_3_0__Vec2_int___op_idiv_1


/** Component-wise division */
unsigned int Imath_3_0__Vec2_int___op_div(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_
    , Imath_V2i_t const * v);
#define Imath_V2i__op_div Imath_3_0__Vec2_int___op_div


/** Component-wise division */
unsigned int Imath_3_0__Vec2_int___op_div_1(
    Imath_V2i_t const * this_
    , Imath_V2i_t * return_
    , int a);
#define Imath_V2i__op_div_1 Imath_3_0__Vec2_int___op_div_1


/** Return the square of the Euclidean norm, i.e. the dot product
with itself. */
unsigned int Imath_3_0__Vec2_int__length2(
    Imath_V2i_t const * this_
    , int * return_);
#define Imath_V2i_length2 Imath_3_0__Vec2_int__length2


/** Largest possible negative value */
unsigned int Imath_3_0__Vec2_int__baseTypeLowest(
    int * return_);
#define Imath_V2i_baseTypeLowest Imath_3_0__Vec2_int__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Vec2_int__baseTypeMax(
    int * return_);
#define Imath_V2i_baseTypeMax Imath_3_0__Vec2_int__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Vec2_int__baseTypeSmallest(
    int * return_);
#define Imath_V2i_baseTypeSmallest Imath_3_0__Vec2_int__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Vec2_int__baseTypeEpsilon(
    int * return_);
#define Imath_V2i_baseTypeEpsilon Imath_3_0__Vec2_int__baseTypeEpsilon


/** Return the number of dimensions, i.e. 2 */
unsigned int Imath_3_0__Vec2_int__dimensions(
    unsigned int * return_);
#define Imath_V2i_dimensions Imath_3_0__Vec2_int__dimensions


unsigned int Imath_3_0__Vec2_long__index(
    Imath_V2i64_t * this_
    , long * * return_
    , int i);
#define Imath_V2i64_index Imath_3_0__Vec2_long__index


unsigned int Imath_3_0__Vec2_long__index_const(
    Imath_V2i64_t const * this_
    , long const * * return_
    , int i);
#define Imath_V2i64_index_const Imath_3_0__Vec2_long__index_const


unsigned int Imath_3_0__Vec2_long__broadcast(
    Imath_V2i64_t * this_
    , long a);
#define Imath_V2i64_broadcast Imath_3_0__Vec2_long__broadcast


unsigned int Imath_3_0__Vec2_long__ctor(
    Imath_V2i64_t * this_
    , long a
    , long b);
#define Imath_V2i64_ctor Imath_3_0__Vec2_long__ctor


unsigned int Imath_3_0__Vec2_long__copy(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * v);
#define Imath_V2i64_copy Imath_3_0__Vec2_long__copy


unsigned int Imath_3_0__Vec2_long___assign(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , Imath_V2i64_t const * v);
#define Imath_V2i64__assign Imath_3_0__Vec2_long___assign


unsigned int Imath_3_0__Vec2_long__dtor(
    Imath_V2i64_t * this_);
#define Imath_V2i64_dtor Imath_3_0__Vec2_long__dtor


unsigned int Imath_3_0__Vec2_long__equalWithAbsError(
    Imath_V2i64_t const * this_
    , _Bool * return_
    , Imath_V2i64_t const * v
    , long e);
#define Imath_V2i64_equalWithAbsError Imath_3_0__Vec2_long__equalWithAbsError


unsigned int Imath_3_0__Vec2_long__equalWithRelError(
    Imath_V2i64_t const * this_
    , _Bool * return_
    , Imath_V2i64_t const * v
    , long e);
#define Imath_V2i64_equalWithRelError Imath_3_0__Vec2_long__equalWithRelError


unsigned int Imath_3_0__Vec2_long__dot(
    Imath_V2i64_t const * this_
    , long * return_
    , Imath_V2i64_t const * v);
#define Imath_V2i64_dot Imath_3_0__Vec2_long__dot


unsigned int Imath_3_0__Vec2_long__cross(
    Imath_V2i64_t const * this_
    , long * return_
    , Imath_V2i64_t const * v);
#define Imath_V2i64_cross Imath_3_0__Vec2_long__cross


unsigned int Imath_3_0__Vec2_long___op_iadd(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , Imath_V2i64_t const * v);
#define Imath_V2i64__op_iadd Imath_3_0__Vec2_long___op_iadd


unsigned int Imath_3_0__Vec2_long___op_add(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_
    , Imath_V2i64_t const * v);
#define Imath_V2i64__op_add Imath_3_0__Vec2_long___op_add


unsigned int Imath_3_0__Vec2_long___op_isub(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , Imath_V2i64_t const * v);
#define Imath_V2i64__op_isub Imath_3_0__Vec2_long___op_isub


unsigned int Imath_3_0__Vec2_long___op_sub(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_
    , Imath_V2i64_t const * v);
#define Imath_V2i64__op_sub Imath_3_0__Vec2_long___op_sub


unsigned int Imath_3_0__Vec2_long___op_sub_1(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_);
#define Imath_V2i64__op_sub_1 Imath_3_0__Vec2_long___op_sub_1


unsigned int Imath_3_0__Vec2_long__negate(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_);
#define Imath_V2i64_negate Imath_3_0__Vec2_long__negate


unsigned int Imath_3_0__Vec2_long___op_imul(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , Imath_V2i64_t const * v);
#define Imath_V2i64__op_imul Imath_3_0__Vec2_long___op_imul


unsigned int Imath_3_0__Vec2_long___op_imul_1(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , long a);
#define Imath_V2i64__op_imul_1 Imath_3_0__Vec2_long___op_imul_1


unsigned int Imath_3_0__Vec2_long___op_mul(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_
    , Imath_V2i64_t const * v);
#define Imath_V2i64__op_mul Imath_3_0__Vec2_long___op_mul


unsigned int Imath_3_0__Vec2_long___op_mul_1(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_
    , long a);
#define Imath_V2i64__op_mul_1 Imath_3_0__Vec2_long___op_mul_1


unsigned int Imath_3_0__Vec2_long___op_idiv(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , Imath_V2i64_t const * v);
#define Imath_V2i64__op_idiv Imath_3_0__Vec2_long___op_idiv


unsigned int Imath_3_0__Vec2_long___op_idiv_1(
    Imath_V2i64_t * this_
    , Imath_V2i64_t const * * return_
    , long a);
#define Imath_V2i64__op_idiv_1 Imath_3_0__Vec2_long___op_idiv_1


unsigned int Imath_3_0__Vec2_long___op_div(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_
    , Imath_V2i64_t const * v);
#define Imath_V2i64__op_div Imath_3_0__Vec2_long___op_div


unsigned int Imath_3_0__Vec2_long___op_div_1(
    Imath_V2i64_t const * this_
    , Imath_V2i64_t * return_
    , long a);
#define Imath_V2i64__op_div_1 Imath_3_0__Vec2_long___op_div_1


unsigned int Imath_3_0__Vec2_long__length2(
    Imath_V2i64_t const * this_
    , long * return_);
#define Imath_V2i64_length2 Imath_3_0__Vec2_long__length2


unsigned int Imath_3_0__Vec2_long__baseTypeLowest(
    long * return_);
#define Imath_V2i64_baseTypeLowest Imath_3_0__Vec2_long__baseTypeLowest


unsigned int Imath_3_0__Vec2_long__baseTypeMax(
    long * return_);
#define Imath_V2i64_baseTypeMax Imath_3_0__Vec2_long__baseTypeMax


unsigned int Imath_3_0__Vec2_long__baseTypeSmallest(
    long * return_);
#define Imath_V2i64_baseTypeSmallest Imath_3_0__Vec2_long__baseTypeSmallest


unsigned int Imath_3_0__Vec2_long__baseTypeEpsilon(
    long * return_);
#define Imath_V2i64_baseTypeEpsilon Imath_3_0__Vec2_long__baseTypeEpsilon


unsigned int Imath_3_0__Vec2_long__dimensions(
    unsigned int * return_);
#define Imath_V2i64_dimensions Imath_3_0__Vec2_long__dimensions


/** Element access by index.   */
unsigned int Imath_3_0__Vec2_float__index(
    Imath_V2f_t * this_
    , float * * return_
    , int i);
#define Imath_V2f_index Imath_3_0__Vec2_float__index


/** Element access by index.   */
unsigned int Imath_3_0__Vec2_float__index_const(
    Imath_V2f_t const * this_
    , float const * * return_
    , int i);
#define Imath_V2f_index_const Imath_3_0__Vec2_float__index_const


/** Initialize to a scalar `(a,a)` */
unsigned int Imath_3_0__Vec2_float__broadcast(
    Imath_V2f_t * this_
    , float a);
#define Imath_V2f_broadcast Imath_3_0__Vec2_float__broadcast


/** Initialize to given elements `(a,b)` */
unsigned int Imath_3_0__Vec2_float__ctor(
    Imath_V2f_t * this_
    , float a
    , float b);
#define Imath_V2f_ctor Imath_3_0__Vec2_float__ctor


unsigned int Imath_3_0__Vec2_float__ctor_1(
    Imath_V2f_t * this_
    , Imath_V2f_t const * v);
#define Imath_V2f_ctor_1 Imath_3_0__Vec2_float__ctor_1


/** Assignment */
unsigned int Imath_3_0__Vec2_float___assign(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , Imath_V2f_t const * v);
#define Imath_V2f__assign Imath_3_0__Vec2_float___assign


/** Destructor */
unsigned int Imath_3_0__Vec2_float__dtor(
    Imath_V2f_t * this_);
#define Imath_V2f_dtor Imath_3_0__Vec2_float__dtor


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Vec2_float__equalWithAbsError(
    Imath_V2f_t const * this_
    , _Bool * return_
    , Imath_V2f_t const * v
    , float e);
#define Imath_V2f_equalWithAbsError Imath_3_0__Vec2_float__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Vec2_float__equalWithRelError(
    Imath_V2f_t const * this_
    , _Bool * return_
    , Imath_V2f_t const * v
    , float e);
#define Imath_V2f_equalWithRelError Imath_3_0__Vec2_float__equalWithRelError


/** Dot product */
unsigned int Imath_3_0__Vec2_float__dot(
    Imath_V2f_t const * this_
    , float * return_
    , Imath_V2f_t const * v);
#define Imath_V2f_dot Imath_3_0__Vec2_float__dot


/** Right-handed cross product, i.e. z component of
Vec3 (this->x, this->y, 0) % Vec3 (v.x, v.y, 0) */
unsigned int Imath_3_0__Vec2_float__cross(
    Imath_V2f_t const * this_
    , float * return_
    , Imath_V2f_t const * v);
#define Imath_V2f_cross Imath_3_0__Vec2_float__cross


/** Component-wise addition */
unsigned int Imath_3_0__Vec2_float___op_iadd(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , Imath_V2f_t const * v);
#define Imath_V2f__op_iadd Imath_3_0__Vec2_float___op_iadd


/** Component-wise addition */
unsigned int Imath_3_0__Vec2_float___op_add(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_
    , Imath_V2f_t const * v);
#define Imath_V2f__op_add Imath_3_0__Vec2_float___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec2_float___op_isub(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , Imath_V2f_t const * v);
#define Imath_V2f__op_isub Imath_3_0__Vec2_float___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec2_float___op_sub(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_
    , Imath_V2f_t const * v);
#define Imath_V2f__op_sub Imath_3_0__Vec2_float___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec2_float___op_sub_1(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_);
#define Imath_V2f__op_sub_1 Imath_3_0__Vec2_float___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec2_float__negate(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_);
#define Imath_V2f_negate Imath_3_0__Vec2_float__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_float___op_imul(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , Imath_V2f_t const * v);
#define Imath_V2f__op_imul Imath_3_0__Vec2_float___op_imul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_float___op_imul_1(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , float a);
#define Imath_V2f__op_imul_1 Imath_3_0__Vec2_float___op_imul_1


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_float___op_mul(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_
    , Imath_V2f_t const * v);
#define Imath_V2f__op_mul Imath_3_0__Vec2_float___op_mul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_float___op_mul_1(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_
    , float a);
#define Imath_V2f__op_mul_1 Imath_3_0__Vec2_float___op_mul_1


/** Component-wise division */
unsigned int Imath_3_0__Vec2_float___op_idiv(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , Imath_V2f_t const * v);
#define Imath_V2f__op_idiv Imath_3_0__Vec2_float___op_idiv


/** Component-wise division */
unsigned int Imath_3_0__Vec2_float___op_idiv_1(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_
    , float a);
#define Imath_V2f__op_idiv_1 Imath_3_0__Vec2_float___op_idiv_1


/** Component-wise division */
unsigned int Imath_3_0__Vec2_float___op_div(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_
    , Imath_V2f_t const * v);
#define Imath_V2f__op_div Imath_3_0__Vec2_float___op_div


/** Component-wise division */
unsigned int Imath_3_0__Vec2_float___op_div_1(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_
    , float a);
#define Imath_V2f__op_div_1 Imath_3_0__Vec2_float___op_div_1


/** Return the Euclidean norm */
unsigned int Imath_3_0__Vec2_float__length(
    Imath_V2f_t const * this_
    , float * return_);
#define Imath_V2f_length Imath_3_0__Vec2_float__length


/** Return the square of the Euclidean norm, i.e. the dot product
with itself. */
unsigned int Imath_3_0__Vec2_float__length2(
    Imath_V2f_t const * this_
    , float * return_);
#define Imath_V2f_length2 Imath_3_0__Vec2_float__length2


/** Normalize in place. If length()==0, return a null vector. */
unsigned int Imath_3_0__Vec2_float__normalize(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_);
#define Imath_V2f_normalize Imath_3_0__Vec2_float__normalize


/** Normalize in place. If length()==0, throw an exception. */
unsigned int Imath_3_0__Vec2_float__normalizeExc(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_);
#define Imath_V2f_normalizeExc Imath_3_0__Vec2_float__normalizeExc


/** Normalize without any checks for length()==0. Slightly faster
than the other normalization routines, but if v.length() is
0.0, the result is undefined. */
unsigned int Imath_3_0__Vec2_float__normalizeNonNull(
    Imath_V2f_t * this_
    , Imath_V2f_t const * * return_);
#define Imath_V2f_normalizeNonNull Imath_3_0__Vec2_float__normalizeNonNull


/** Return a normalized vector. Does not modify *this. */
unsigned int Imath_3_0__Vec2_float__normalized(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_);
#define Imath_V2f_normalized Imath_3_0__Vec2_float__normalized


/** Return a normalized vector. Does not modify *this. Throw an
exception if length()==0. */
unsigned int Imath_3_0__Vec2_float__normalizedExc(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_);
#define Imath_V2f_normalizedExc Imath_3_0__Vec2_float__normalizedExc


/** Return a normalized vector. Does not modify *this, and does
not check for length()==0. Slightly faster than the other
normalization routines, but if v.length() is 0.0, the result
is undefined. */
unsigned int Imath_3_0__Vec2_float__normalizedNonNull(
    Imath_V2f_t const * this_
    , Imath_V2f_t * return_);
#define Imath_V2f_normalizedNonNull Imath_3_0__Vec2_float__normalizedNonNull


/** Largest possible negative value */
unsigned int Imath_3_0__Vec2_float__baseTypeLowest(
    float * return_);
#define Imath_V2f_baseTypeLowest Imath_3_0__Vec2_float__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Vec2_float__baseTypeMax(
    float * return_);
#define Imath_V2f_baseTypeMax Imath_3_0__Vec2_float__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Vec2_float__baseTypeSmallest(
    float * return_);
#define Imath_V2f_baseTypeSmallest Imath_3_0__Vec2_float__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Vec2_float__baseTypeEpsilon(
    float * return_);
#define Imath_V2f_baseTypeEpsilon Imath_3_0__Vec2_float__baseTypeEpsilon


/** Return the number of dimensions, i.e. 2 */
unsigned int Imath_3_0__Vec2_float__dimensions(
    unsigned int * return_);
#define Imath_V2f_dimensions Imath_3_0__Vec2_float__dimensions


/** Element access by index.   */
unsigned int Imath_3_0__Vec2_double__index(
    Imath_V2d_t * this_
    , double * * return_
    , int i);
#define Imath_V2d_index Imath_3_0__Vec2_double__index


/** Element access by index.   */
unsigned int Imath_3_0__Vec2_double__index_const(
    Imath_V2d_t const * this_
    , double const * * return_
    , int i);
#define Imath_V2d_index_const Imath_3_0__Vec2_double__index_const


/** Initialize to a scalar `(a,a)` */
unsigned int Imath_3_0__Vec2_double__broadcast(
    Imath_V2d_t * this_
    , double a);
#define Imath_V2d_broadcast Imath_3_0__Vec2_double__broadcast


/** Initialize to given elements `(a,b)` */
unsigned int Imath_3_0__Vec2_double__ctor(
    Imath_V2d_t * this_
    , double a
    , double b);
#define Imath_V2d_ctor Imath_3_0__Vec2_double__ctor


unsigned int Imath_3_0__Vec2_double__ctor_1(
    Imath_V2d_t * this_
    , Imath_V2d_t const * v);
#define Imath_V2d_ctor_1 Imath_3_0__Vec2_double__ctor_1


/** Assignment */
unsigned int Imath_3_0__Vec2_double___assign(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , Imath_V2d_t const * v);
#define Imath_V2d__assign Imath_3_0__Vec2_double___assign


/** Destructor */
unsigned int Imath_3_0__Vec2_double__dtor(
    Imath_V2d_t * this_);
#define Imath_V2d_dtor Imath_3_0__Vec2_double__dtor


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Vec2_double__equalWithAbsError(
    Imath_V2d_t const * this_
    , _Bool * return_
    , Imath_V2d_t const * v
    , double e);
#define Imath_V2d_equalWithAbsError Imath_3_0__Vec2_double__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Vec2_double__equalWithRelError(
    Imath_V2d_t const * this_
    , _Bool * return_
    , Imath_V2d_t const * v
    , double e);
#define Imath_V2d_equalWithRelError Imath_3_0__Vec2_double__equalWithRelError


/** Dot product */
unsigned int Imath_3_0__Vec2_double__dot(
    Imath_V2d_t const * this_
    , double * return_
    , Imath_V2d_t const * v);
#define Imath_V2d_dot Imath_3_0__Vec2_double__dot


/** Right-handed cross product, i.e. z component of
Vec3 (this->x, this->y, 0) % Vec3 (v.x, v.y, 0) */
unsigned int Imath_3_0__Vec2_double__cross(
    Imath_V2d_t const * this_
    , double * return_
    , Imath_V2d_t const * v);
#define Imath_V2d_cross Imath_3_0__Vec2_double__cross


/** Component-wise addition */
unsigned int Imath_3_0__Vec2_double___op_iadd(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , Imath_V2d_t const * v);
#define Imath_V2d__op_iadd Imath_3_0__Vec2_double___op_iadd


/** Component-wise addition */
unsigned int Imath_3_0__Vec2_double___op_add(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_
    , Imath_V2d_t const * v);
#define Imath_V2d__op_add Imath_3_0__Vec2_double___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec2_double___op_isub(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , Imath_V2d_t const * v);
#define Imath_V2d__op_isub Imath_3_0__Vec2_double___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec2_double___op_sub(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_
    , Imath_V2d_t const * v);
#define Imath_V2d__op_sub Imath_3_0__Vec2_double___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec2_double___op_sub_1(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_);
#define Imath_V2d__op_sub_1 Imath_3_0__Vec2_double___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec2_double__negate(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_);
#define Imath_V2d_negate Imath_3_0__Vec2_double__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_double___op_imul(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , Imath_V2d_t const * v);
#define Imath_V2d__op_imul Imath_3_0__Vec2_double___op_imul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_double___op_imul_1(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , double a);
#define Imath_V2d__op_imul_1 Imath_3_0__Vec2_double___op_imul_1


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_double___op_mul(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_
    , Imath_V2d_t const * v);
#define Imath_V2d__op_mul Imath_3_0__Vec2_double___op_mul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec2_double___op_mul_1(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_
    , double a);
#define Imath_V2d__op_mul_1 Imath_3_0__Vec2_double___op_mul_1


/** Component-wise division */
unsigned int Imath_3_0__Vec2_double___op_idiv(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , Imath_V2d_t const * v);
#define Imath_V2d__op_idiv Imath_3_0__Vec2_double___op_idiv


/** Component-wise division */
unsigned int Imath_3_0__Vec2_double___op_idiv_1(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_
    , double a);
#define Imath_V2d__op_idiv_1 Imath_3_0__Vec2_double___op_idiv_1


/** Component-wise division */
unsigned int Imath_3_0__Vec2_double___op_div(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_
    , Imath_V2d_t const * v);
#define Imath_V2d__op_div Imath_3_0__Vec2_double___op_div


/** Component-wise division */
unsigned int Imath_3_0__Vec2_double___op_div_1(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_
    , double a);
#define Imath_V2d__op_div_1 Imath_3_0__Vec2_double___op_div_1


/** Return the Euclidean norm */
unsigned int Imath_3_0__Vec2_double__length(
    Imath_V2d_t const * this_
    , double * return_);
#define Imath_V2d_length Imath_3_0__Vec2_double__length


/** Return the square of the Euclidean norm, i.e. the dot product
with itself. */
unsigned int Imath_3_0__Vec2_double__length2(
    Imath_V2d_t const * this_
    , double * return_);
#define Imath_V2d_length2 Imath_3_0__Vec2_double__length2


/** Normalize in place. If length()==0, return a null vector. */
unsigned int Imath_3_0__Vec2_double__normalize(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_);
#define Imath_V2d_normalize Imath_3_0__Vec2_double__normalize


/** Normalize in place. If length()==0, throw an exception. */
unsigned int Imath_3_0__Vec2_double__normalizeExc(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_);
#define Imath_V2d_normalizeExc Imath_3_0__Vec2_double__normalizeExc


/** Normalize without any checks for length()==0. Slightly faster
than the other normalization routines, but if v.length() is
0.0, the result is undefined. */
unsigned int Imath_3_0__Vec2_double__normalizeNonNull(
    Imath_V2d_t * this_
    , Imath_V2d_t const * * return_);
#define Imath_V2d_normalizeNonNull Imath_3_0__Vec2_double__normalizeNonNull


/** Return a normalized vector. Does not modify *this. */
unsigned int Imath_3_0__Vec2_double__normalized(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_);
#define Imath_V2d_normalized Imath_3_0__Vec2_double__normalized


/** Return a normalized vector. Does not modify *this. Throw an
exception if length()==0. */
unsigned int Imath_3_0__Vec2_double__normalizedExc(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_);
#define Imath_V2d_normalizedExc Imath_3_0__Vec2_double__normalizedExc


/** Return a normalized vector. Does not modify *this, and does
not check for length()==0. Slightly faster than the other
normalization routines, but if v.length() is 0.0, the result
is undefined. */
unsigned int Imath_3_0__Vec2_double__normalizedNonNull(
    Imath_V2d_t const * this_
    , Imath_V2d_t * return_);
#define Imath_V2d_normalizedNonNull Imath_3_0__Vec2_double__normalizedNonNull


/** Largest possible negative value */
unsigned int Imath_3_0__Vec2_double__baseTypeLowest(
    double * return_);
#define Imath_V2d_baseTypeLowest Imath_3_0__Vec2_double__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Vec2_double__baseTypeMax(
    double * return_);
#define Imath_V2d_baseTypeMax Imath_3_0__Vec2_double__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Vec2_double__baseTypeSmallest(
    double * return_);
#define Imath_V2d_baseTypeSmallest Imath_3_0__Vec2_double__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Vec2_double__baseTypeEpsilon(
    double * return_);
#define Imath_V2d_baseTypeEpsilon Imath_3_0__Vec2_double__baseTypeEpsilon


/** Return the number of dimensions, i.e. 2 */
unsigned int Imath_3_0__Vec2_double__dimensions(
    unsigned int * return_);
#define Imath_V2d_dimensions Imath_3_0__Vec2_double__dimensions


/** Element access by index.   */
unsigned int Imath_3_0__Vec3_short__index(
    Imath_V3s_t * this_
    , short * * return_
    , int i);
#define Imath_V3s_index Imath_3_0__Vec3_short__index


/** Element access by index.   */
unsigned int Imath_3_0__Vec3_short__index_const(
    Imath_V3s_t const * this_
    , short const * * return_
    , int i);
#define Imath_V3s_index_const Imath_3_0__Vec3_short__index_const


/** Uninitialized by default */
unsigned int Imath_3_0__Vec3_short__ctor(
    Imath_V3s_t * this_);
#define Imath_V3s_ctor Imath_3_0__Vec3_short__ctor


/** Initialize to a scalar `(a,a,a)` */
unsigned int Imath_3_0__Vec3_short__ctor_1(
    Imath_V3s_t * this_
    , short a);
#define Imath_V3s_ctor_1 Imath_3_0__Vec3_short__ctor_1


/** Initialize to given elements `(a,b,c)` */
unsigned int Imath_3_0__Vec3_short__ctor_2(
    Imath_V3s_t * this_
    , short a
    , short b
    , short c);
#define Imath_V3s_ctor_2 Imath_3_0__Vec3_short__ctor_2


unsigned int Imath_3_0__Vec3_short__ctor_3(
    Imath_V3s_t * this_
    , Imath_V3s_t const * v);
#define Imath_V3s_ctor_3 Imath_3_0__Vec3_short__ctor_3


/** Assignment */
unsigned int Imath_3_0__Vec3_short___assign(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , Imath_V3s_t const * v);
#define Imath_V3s__assign Imath_3_0__Vec3_short___assign


/** Destructor */
unsigned int Imath_3_0__Vec3_short__dtor(
    Imath_V3s_t * this_);
#define Imath_V3s_dtor Imath_3_0__Vec3_short__dtor


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Vec3_short__getValue(
    Imath_V3s_t * this_
    , short * * return_);
#define Imath_V3s_getValue Imath_3_0__Vec3_short__getValue


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Vec3_short__getValue_1(
    Imath_V3s_t const * this_
    , short const * * return_);
#define Imath_V3s_getValue_1 Imath_3_0__Vec3_short__getValue_1


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Vec3_short__equalWithAbsError(
    Imath_V3s_t const * this_
    , _Bool * return_
    , Imath_V3s_t const * v
    , short e);
#define Imath_V3s_equalWithAbsError Imath_3_0__Vec3_short__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Vec3_short__equalWithRelError(
    Imath_V3s_t const * this_
    , _Bool * return_
    , Imath_V3s_t const * v
    , short e);
#define Imath_V3s_equalWithRelError Imath_3_0__Vec3_short__equalWithRelError


/** Dot product */
unsigned int Imath_3_0__Vec3_short__dot(
    Imath_V3s_t const * this_
    , short * return_
    , Imath_V3s_t const * v);
#define Imath_V3s_dot Imath_3_0__Vec3_short__dot


/** Right-handed cross product */
unsigned int Imath_3_0__Vec3_short__cross(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , Imath_V3s_t const * v);
#define Imath_V3s_cross Imath_3_0__Vec3_short__cross


/** Component-wise addition */
unsigned int Imath_3_0__Vec3_short___op_iadd(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , Imath_V3s_t const * v);
#define Imath_V3s__op_iadd Imath_3_0__Vec3_short___op_iadd


/** Component-wise addition */
unsigned int Imath_3_0__Vec3_short___op_add(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , Imath_V3s_t const * v);
#define Imath_V3s__op_add Imath_3_0__Vec3_short___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec3_short___op_isub(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , Imath_V3s_t const * v);
#define Imath_V3s__op_isub Imath_3_0__Vec3_short___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec3_short___op_sub(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , Imath_V3s_t const * v);
#define Imath_V3s__op_sub Imath_3_0__Vec3_short___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec3_short___op_sub_1(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_);
#define Imath_V3s__op_sub_1 Imath_3_0__Vec3_short___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec3_short__negate(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_);
#define Imath_V3s_negate Imath_3_0__Vec3_short__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_short___op_imul(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , Imath_V3s_t const * v);
#define Imath_V3s__op_imul Imath_3_0__Vec3_short___op_imul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_short___op_imul_1(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , short a);
#define Imath_V3s__op_imul_1 Imath_3_0__Vec3_short___op_imul_1


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_short___op_mul(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , Imath_V3s_t const * v);
#define Imath_V3s__op_mul Imath_3_0__Vec3_short___op_mul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_short___op_mul_1(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , short a);
#define Imath_V3s__op_mul_1 Imath_3_0__Vec3_short___op_mul_1


/** Component-wise division */
unsigned int Imath_3_0__Vec3_short___op_idiv(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , Imath_V3s_t const * v);
#define Imath_V3s__op_idiv Imath_3_0__Vec3_short___op_idiv


/** Component-wise division */
unsigned int Imath_3_0__Vec3_short___op_idiv_1(
    Imath_V3s_t * this_
    , Imath_V3s_t const * * return_
    , short a);
#define Imath_V3s__op_idiv_1 Imath_3_0__Vec3_short___op_idiv_1


/** Component-wise division */
unsigned int Imath_3_0__Vec3_short___op_div(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , Imath_V3s_t const * v);
#define Imath_V3s__op_div Imath_3_0__Vec3_short___op_div


/** Component-wise division */
unsigned int Imath_3_0__Vec3_short___op_div_1(
    Imath_V3s_t const * this_
    , Imath_V3s_t * return_
    , short a);
#define Imath_V3s__op_div_1 Imath_3_0__Vec3_short___op_div_1


/** Return the square of the Euclidean norm, i.e. the dot product
with itself. */
unsigned int Imath_3_0__Vec3_short__length2(
    Imath_V3s_t const * this_
    , short * return_);
#define Imath_V3s_length2 Imath_3_0__Vec3_short__length2


/** Largest possible negative value */
unsigned int Imath_3_0__Vec3_short__baseTypeLowest(
    short * return_);
#define Imath_V3s_baseTypeLowest Imath_3_0__Vec3_short__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Vec3_short__baseTypeMax(
    short * return_);
#define Imath_V3s_baseTypeMax Imath_3_0__Vec3_short__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Vec3_short__baseTypeSmallest(
    short * return_);
#define Imath_V3s_baseTypeSmallest Imath_3_0__Vec3_short__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Vec3_short__baseTypeEpsilon(
    short * return_);
#define Imath_V3s_baseTypeEpsilon Imath_3_0__Vec3_short__baseTypeEpsilon


/** Return the number of dimensions, i.e. 3 */
unsigned int Imath_3_0__Vec3_short__dimensions(
    unsigned int * return_);
#define Imath_V3s_dimensions Imath_3_0__Vec3_short__dimensions


/** Element access by index.   */
unsigned int Imath_3_0__Vec3_int__index(
    Imath_V3i_t * this_
    , int * * return_
    , int i);
#define Imath_V3i_index Imath_3_0__Vec3_int__index


/** Element access by index.   */
unsigned int Imath_3_0__Vec3_int__index_const(
    Imath_V3i_t const * this_
    , int const * * return_
    , int i);
#define Imath_V3i_index_const Imath_3_0__Vec3_int__index_const


/** Uninitialized by default */
unsigned int Imath_3_0__Vec3_int__ctor(
    Imath_V3i_t * this_);
#define Imath_V3i_ctor Imath_3_0__Vec3_int__ctor


/** Initialize to a scalar `(a,a,a)` */
unsigned int Imath_3_0__Vec3_int__ctor_1(
    Imath_V3i_t * this_
    , int a);
#define Imath_V3i_ctor_1 Imath_3_0__Vec3_int__ctor_1


/** Initialize to given elements `(a,b,c)` */
unsigned int Imath_3_0__Vec3_int__ctor_2(
    Imath_V3i_t * this_
    , int a
    , int b
    , int c);
#define Imath_V3i_ctor_2 Imath_3_0__Vec3_int__ctor_2


unsigned int Imath_3_0__Vec3_int__ctor_3(
    Imath_V3i_t * this_
    , Imath_V3i_t const * v);
#define Imath_V3i_ctor_3 Imath_3_0__Vec3_int__ctor_3


/** Assignment */
unsigned int Imath_3_0__Vec3_int___assign(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , Imath_V3i_t const * v);
#define Imath_V3i__assign Imath_3_0__Vec3_int___assign


/** Destructor */
unsigned int Imath_3_0__Vec3_int__dtor(
    Imath_V3i_t * this_);
#define Imath_V3i_dtor Imath_3_0__Vec3_int__dtor


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Vec3_int__getValue(
    Imath_V3i_t * this_
    , int * * return_);
#define Imath_V3i_getValue Imath_3_0__Vec3_int__getValue


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Vec3_int__getValue_1(
    Imath_V3i_t const * this_
    , int const * * return_);
#define Imath_V3i_getValue_1 Imath_3_0__Vec3_int__getValue_1


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Vec3_int__equalWithAbsError(
    Imath_V3i_t const * this_
    , _Bool * return_
    , Imath_V3i_t const * v
    , int e);
#define Imath_V3i_equalWithAbsError Imath_3_0__Vec3_int__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Vec3_int__equalWithRelError(
    Imath_V3i_t const * this_
    , _Bool * return_
    , Imath_V3i_t const * v
    , int e);
#define Imath_V3i_equalWithRelError Imath_3_0__Vec3_int__equalWithRelError


/** Dot product */
unsigned int Imath_3_0__Vec3_int__dot(
    Imath_V3i_t const * this_
    , int * return_
    , Imath_V3i_t const * v);
#define Imath_V3i_dot Imath_3_0__Vec3_int__dot


/** Right-handed cross product */
unsigned int Imath_3_0__Vec3_int__cross(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , Imath_V3i_t const * v);
#define Imath_V3i_cross Imath_3_0__Vec3_int__cross


/** Component-wise addition */
unsigned int Imath_3_0__Vec3_int___op_iadd(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , Imath_V3i_t const * v);
#define Imath_V3i__op_iadd Imath_3_0__Vec3_int___op_iadd


/** Component-wise addition */
unsigned int Imath_3_0__Vec3_int___op_add(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , Imath_V3i_t const * v);
#define Imath_V3i__op_add Imath_3_0__Vec3_int___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec3_int___op_isub(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , Imath_V3i_t const * v);
#define Imath_V3i__op_isub Imath_3_0__Vec3_int___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec3_int___op_sub(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , Imath_V3i_t const * v);
#define Imath_V3i__op_sub Imath_3_0__Vec3_int___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec3_int___op_sub_1(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_);
#define Imath_V3i__op_sub_1 Imath_3_0__Vec3_int___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec3_int__negate(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_);
#define Imath_V3i_negate Imath_3_0__Vec3_int__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_int___op_imul(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , Imath_V3i_t const * v);
#define Imath_V3i__op_imul Imath_3_0__Vec3_int___op_imul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_int___op_imul_1(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , int a);
#define Imath_V3i__op_imul_1 Imath_3_0__Vec3_int___op_imul_1


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_int___op_mul(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , Imath_V3i_t const * v);
#define Imath_V3i__op_mul Imath_3_0__Vec3_int___op_mul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_int___op_mul_1(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , int a);
#define Imath_V3i__op_mul_1 Imath_3_0__Vec3_int___op_mul_1


/** Component-wise division */
unsigned int Imath_3_0__Vec3_int___op_idiv(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , Imath_V3i_t const * v);
#define Imath_V3i__op_idiv Imath_3_0__Vec3_int___op_idiv


/** Component-wise division */
unsigned int Imath_3_0__Vec3_int___op_idiv_1(
    Imath_V3i_t * this_
    , Imath_V3i_t const * * return_
    , int a);
#define Imath_V3i__op_idiv_1 Imath_3_0__Vec3_int___op_idiv_1


/** Component-wise division */
unsigned int Imath_3_0__Vec3_int___op_div(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , Imath_V3i_t const * v);
#define Imath_V3i__op_div Imath_3_0__Vec3_int___op_div


/** Component-wise division */
unsigned int Imath_3_0__Vec3_int___op_div_1(
    Imath_V3i_t const * this_
    , Imath_V3i_t * return_
    , int a);
#define Imath_V3i__op_div_1 Imath_3_0__Vec3_int___op_div_1


/** Return the square of the Euclidean norm, i.e. the dot product
with itself. */
unsigned int Imath_3_0__Vec3_int__length2(
    Imath_V3i_t const * this_
    , int * return_);
#define Imath_V3i_length2 Imath_3_0__Vec3_int__length2


/** Largest possible negative value */
unsigned int Imath_3_0__Vec3_int__baseTypeLowest(
    int * return_);
#define Imath_V3i_baseTypeLowest Imath_3_0__Vec3_int__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Vec3_int__baseTypeMax(
    int * return_);
#define Imath_V3i_baseTypeMax Imath_3_0__Vec3_int__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Vec3_int__baseTypeSmallest(
    int * return_);
#define Imath_V3i_baseTypeSmallest Imath_3_0__Vec3_int__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Vec3_int__baseTypeEpsilon(
    int * return_);
#define Imath_V3i_baseTypeEpsilon Imath_3_0__Vec3_int__baseTypeEpsilon


/** Return the number of dimensions, i.e. 3 */
unsigned int Imath_3_0__Vec3_int__dimensions(
    unsigned int * return_);
#define Imath_V3i_dimensions Imath_3_0__Vec3_int__dimensions


unsigned int Imath_3_0__Vec3_long__index(
    Imath_V3i64_t * this_
    , long * * return_
    , int i);
#define Imath_V3i64_index Imath_3_0__Vec3_long__index


unsigned int Imath_3_0__Vec3_long__index_const(
    Imath_V3i64_t const * this_
    , long const * * return_
    , int i);
#define Imath_V3i64_index_const Imath_3_0__Vec3_long__index_const


unsigned int Imath_3_0__Vec3_long__ctor(
    Imath_V3i64_t * this_);
#define Imath_V3i64_ctor Imath_3_0__Vec3_long__ctor


unsigned int Imath_3_0__Vec3_long__ctor_1(
    Imath_V3i64_t * this_
    , long a);
#define Imath_V3i64_ctor_1 Imath_3_0__Vec3_long__ctor_1


unsigned int Imath_3_0__Vec3_long__ctor_2(
    Imath_V3i64_t * this_
    , long a
    , long b
    , long c);
#define Imath_V3i64_ctor_2 Imath_3_0__Vec3_long__ctor_2


unsigned int Imath_3_0__Vec3_long__copy(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * v);
#define Imath_V3i64_copy Imath_3_0__Vec3_long__copy


unsigned int Imath_3_0__Vec3_long___assign(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , Imath_V3i64_t const * v);
#define Imath_V3i64__assign Imath_3_0__Vec3_long___assign


unsigned int Imath_3_0__Vec3_long__dtor(
    Imath_V3i64_t * this_);
#define Imath_V3i64_dtor Imath_3_0__Vec3_long__dtor


unsigned int Imath_3_0__Vec3_long__getValue(
    Imath_V3i64_t * this_
    , long * * return_);
#define Imath_V3i64_getValue Imath_3_0__Vec3_long__getValue


unsigned int Imath_3_0__Vec3_long__getValue_1(
    Imath_V3i64_t const * this_
    , long const * * return_);
#define Imath_V3i64_getValue_1 Imath_3_0__Vec3_long__getValue_1


unsigned int Imath_3_0__Vec3_long__equalWithAbsError(
    Imath_V3i64_t const * this_
    , _Bool * return_
    , Imath_V3i64_t const * v
    , long e);
#define Imath_V3i64_equalWithAbsError Imath_3_0__Vec3_long__equalWithAbsError


unsigned int Imath_3_0__Vec3_long__equalWithRelError(
    Imath_V3i64_t const * this_
    , _Bool * return_
    , Imath_V3i64_t const * v
    , long e);
#define Imath_V3i64_equalWithRelError Imath_3_0__Vec3_long__equalWithRelError


unsigned int Imath_3_0__Vec3_long__dot(
    Imath_V3i64_t const * this_
    , long * return_
    , Imath_V3i64_t const * v);
#define Imath_V3i64_dot Imath_3_0__Vec3_long__dot


unsigned int Imath_3_0__Vec3_long__cross(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , Imath_V3i64_t const * v);
#define Imath_V3i64_cross Imath_3_0__Vec3_long__cross


unsigned int Imath_3_0__Vec3_long___op_iadd(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , Imath_V3i64_t const * v);
#define Imath_V3i64__op_iadd Imath_3_0__Vec3_long___op_iadd


unsigned int Imath_3_0__Vec3_long___op_add(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , Imath_V3i64_t const * v);
#define Imath_V3i64__op_add Imath_3_0__Vec3_long___op_add


unsigned int Imath_3_0__Vec3_long___op_isub(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , Imath_V3i64_t const * v);
#define Imath_V3i64__op_isub Imath_3_0__Vec3_long___op_isub


unsigned int Imath_3_0__Vec3_long___op_sub(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , Imath_V3i64_t const * v);
#define Imath_V3i64__op_sub Imath_3_0__Vec3_long___op_sub


unsigned int Imath_3_0__Vec3_long___op_sub_1(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_);
#define Imath_V3i64__op_sub_1 Imath_3_0__Vec3_long___op_sub_1


unsigned int Imath_3_0__Vec3_long__negate(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_);
#define Imath_V3i64_negate Imath_3_0__Vec3_long__negate


unsigned int Imath_3_0__Vec3_long___op_imul(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , Imath_V3i64_t const * v);
#define Imath_V3i64__op_imul Imath_3_0__Vec3_long___op_imul


unsigned int Imath_3_0__Vec3_long___op_imul_1(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , long a);
#define Imath_V3i64__op_imul_1 Imath_3_0__Vec3_long___op_imul_1


unsigned int Imath_3_0__Vec3_long___op_mul(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , Imath_V3i64_t const * v);
#define Imath_V3i64__op_mul Imath_3_0__Vec3_long___op_mul


unsigned int Imath_3_0__Vec3_long___op_mul_1(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , long a);
#define Imath_V3i64__op_mul_1 Imath_3_0__Vec3_long___op_mul_1


unsigned int Imath_3_0__Vec3_long___op_idiv(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , Imath_V3i64_t const * v);
#define Imath_V3i64__op_idiv Imath_3_0__Vec3_long___op_idiv


unsigned int Imath_3_0__Vec3_long___op_idiv_1(
    Imath_V3i64_t * this_
    , Imath_V3i64_t const * * return_
    , long a);
#define Imath_V3i64__op_idiv_1 Imath_3_0__Vec3_long___op_idiv_1


unsigned int Imath_3_0__Vec3_long___op_div(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , Imath_V3i64_t const * v);
#define Imath_V3i64__op_div Imath_3_0__Vec3_long___op_div


unsigned int Imath_3_0__Vec3_long___op_div_1(
    Imath_V3i64_t const * this_
    , Imath_V3i64_t * return_
    , long a);
#define Imath_V3i64__op_div_1 Imath_3_0__Vec3_long___op_div_1


unsigned int Imath_3_0__Vec3_long__length2(
    Imath_V3i64_t const * this_
    , long * return_);
#define Imath_V3i64_length2 Imath_3_0__Vec3_long__length2


unsigned int Imath_3_0__Vec3_long__baseTypeLowest(
    long * return_);
#define Imath_V3i64_baseTypeLowest Imath_3_0__Vec3_long__baseTypeLowest


unsigned int Imath_3_0__Vec3_long__baseTypeMax(
    long * return_);
#define Imath_V3i64_baseTypeMax Imath_3_0__Vec3_long__baseTypeMax


unsigned int Imath_3_0__Vec3_long__baseTypeSmallest(
    long * return_);
#define Imath_V3i64_baseTypeSmallest Imath_3_0__Vec3_long__baseTypeSmallest


unsigned int Imath_3_0__Vec3_long__baseTypeEpsilon(
    long * return_);
#define Imath_V3i64_baseTypeEpsilon Imath_3_0__Vec3_long__baseTypeEpsilon


unsigned int Imath_3_0__Vec3_long__dimensions(
    unsigned int * return_);
#define Imath_V3i64_dimensions Imath_3_0__Vec3_long__dimensions


/** Element access by index.   */
unsigned int Imath_3_0__Vec3_float__index(
    Imath_V3f_t * this_
    , float * * return_
    , int i);
#define Imath_V3f_index Imath_3_0__Vec3_float__index


/** Element access by index.   */
unsigned int Imath_3_0__Vec3_float__index_const(
    Imath_V3f_t const * this_
    , float const * * return_
    , int i);
#define Imath_V3f_index_const Imath_3_0__Vec3_float__index_const


/** Uninitialized by default */
unsigned int Imath_3_0__Vec3_float__ctor(
    Imath_V3f_t * this_);
#define Imath_V3f_ctor Imath_3_0__Vec3_float__ctor


/** Initialize to a scalar `(a,a,a)` */
unsigned int Imath_3_0__Vec3_float__ctor_1(
    Imath_V3f_t * this_
    , float a);
#define Imath_V3f_ctor_1 Imath_3_0__Vec3_float__ctor_1


/** Initialize to given elements `(a,b,c)` */
unsigned int Imath_3_0__Vec3_float__ctor_2(
    Imath_V3f_t * this_
    , float a
    , float b
    , float c);
#define Imath_V3f_ctor_2 Imath_3_0__Vec3_float__ctor_2


unsigned int Imath_3_0__Vec3_float__ctor_3(
    Imath_V3f_t * this_
    , Imath_V3f_t const * v);
#define Imath_V3f_ctor_3 Imath_3_0__Vec3_float__ctor_3


/** Assignment */
unsigned int Imath_3_0__Vec3_float___assign(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , Imath_V3f_t const * v);
#define Imath_V3f__assign Imath_3_0__Vec3_float___assign


/** Destructor */
unsigned int Imath_3_0__Vec3_float__dtor(
    Imath_V3f_t * this_);
#define Imath_V3f_dtor Imath_3_0__Vec3_float__dtor


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Vec3_float__getValue(
    Imath_V3f_t * this_
    , float * * return_);
#define Imath_V3f_getValue Imath_3_0__Vec3_float__getValue


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Vec3_float__getValue_1(
    Imath_V3f_t const * this_
    , float const * * return_);
#define Imath_V3f_getValue_1 Imath_3_0__Vec3_float__getValue_1


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Vec3_float__equalWithAbsError(
    Imath_V3f_t const * this_
    , _Bool * return_
    , Imath_V3f_t const * v
    , float e);
#define Imath_V3f_equalWithAbsError Imath_3_0__Vec3_float__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Vec3_float__equalWithRelError(
    Imath_V3f_t const * this_
    , _Bool * return_
    , Imath_V3f_t const * v
    , float e);
#define Imath_V3f_equalWithRelError Imath_3_0__Vec3_float__equalWithRelError


/** Dot product */
unsigned int Imath_3_0__Vec3_float__dot(
    Imath_V3f_t const * this_
    , float * return_
    , Imath_V3f_t const * v);
#define Imath_V3f_dot Imath_3_0__Vec3_float__dot


/** Right-handed cross product */
unsigned int Imath_3_0__Vec3_float__cross(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , Imath_V3f_t const * v);
#define Imath_V3f_cross Imath_3_0__Vec3_float__cross


/** Component-wise addition */
unsigned int Imath_3_0__Vec3_float___op_iadd(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , Imath_V3f_t const * v);
#define Imath_V3f__op_iadd Imath_3_0__Vec3_float___op_iadd


/** Component-wise addition */
unsigned int Imath_3_0__Vec3_float___op_add(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , Imath_V3f_t const * v);
#define Imath_V3f__op_add Imath_3_0__Vec3_float___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec3_float___op_isub(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , Imath_V3f_t const * v);
#define Imath_V3f__op_isub Imath_3_0__Vec3_float___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec3_float___op_sub(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , Imath_V3f_t const * v);
#define Imath_V3f__op_sub Imath_3_0__Vec3_float___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec3_float___op_sub_1(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_);
#define Imath_V3f__op_sub_1 Imath_3_0__Vec3_float___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec3_float__negate(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_);
#define Imath_V3f_negate Imath_3_0__Vec3_float__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_float___op_imul(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , Imath_V3f_t const * v);
#define Imath_V3f__op_imul Imath_3_0__Vec3_float___op_imul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_float___op_imul_1(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , float a);
#define Imath_V3f__op_imul_1 Imath_3_0__Vec3_float___op_imul_1


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_float___op_mul(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , Imath_V3f_t const * v);
#define Imath_V3f__op_mul Imath_3_0__Vec3_float___op_mul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_float___op_mul_1(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , float a);
#define Imath_V3f__op_mul_1 Imath_3_0__Vec3_float___op_mul_1


/** Component-wise division */
unsigned int Imath_3_0__Vec3_float___op_idiv(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , Imath_V3f_t const * v);
#define Imath_V3f__op_idiv Imath_3_0__Vec3_float___op_idiv


/** Component-wise division */
unsigned int Imath_3_0__Vec3_float___op_idiv_1(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_
    , float a);
#define Imath_V3f__op_idiv_1 Imath_3_0__Vec3_float___op_idiv_1


/** Component-wise division */
unsigned int Imath_3_0__Vec3_float___op_div(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , Imath_V3f_t const * v);
#define Imath_V3f__op_div Imath_3_0__Vec3_float___op_div


/** Component-wise division */
unsigned int Imath_3_0__Vec3_float___op_div_1(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_
    , float a);
#define Imath_V3f__op_div_1 Imath_3_0__Vec3_float___op_div_1


/** Return the Euclidean norm */
unsigned int Imath_3_0__Vec3_float__length(
    Imath_V3f_t const * this_
    , float * return_);
#define Imath_V3f_length Imath_3_0__Vec3_float__length


/** Return the square of the Euclidean norm, i.e. the dot product
with itself. */
unsigned int Imath_3_0__Vec3_float__length2(
    Imath_V3f_t const * this_
    , float * return_);
#define Imath_V3f_length2 Imath_3_0__Vec3_float__length2


/** Normalize in place. If length()==0, return a null vector. */
unsigned int Imath_3_0__Vec3_float__normalize(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_);
#define Imath_V3f_normalize Imath_3_0__Vec3_float__normalize


/** Normalize without any checks for length()==0. Slightly faster
than the other normalization routines, but if v.length() is
0.0, the result is undefined. */
unsigned int Imath_3_0__Vec3_float__normalizeNonNull(
    Imath_V3f_t * this_
    , Imath_V3f_t const * * return_);
#define Imath_V3f_normalizeNonNull Imath_3_0__Vec3_float__normalizeNonNull


/** Return a normalized vector. Does not modify *this. */
unsigned int Imath_3_0__Vec3_float__normalized(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_);
#define Imath_V3f_normalized Imath_3_0__Vec3_float__normalized


/** Return a normalized vector. Does not modify *this, and does
not check for length()==0. Slightly faster than the other
normalization routines, but if v.length() is 0.0, the result
is undefined. */
unsigned int Imath_3_0__Vec3_float__normalizedNonNull(
    Imath_V3f_t const * this_
    , Imath_V3f_t * return_);
#define Imath_V3f_normalizedNonNull Imath_3_0__Vec3_float__normalizedNonNull


/** Largest possible negative value */
unsigned int Imath_3_0__Vec3_float__baseTypeLowest(
    float * return_);
#define Imath_V3f_baseTypeLowest Imath_3_0__Vec3_float__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Vec3_float__baseTypeMax(
    float * return_);
#define Imath_V3f_baseTypeMax Imath_3_0__Vec3_float__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Vec3_float__baseTypeSmallest(
    float * return_);
#define Imath_V3f_baseTypeSmallest Imath_3_0__Vec3_float__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Vec3_float__baseTypeEpsilon(
    float * return_);
#define Imath_V3f_baseTypeEpsilon Imath_3_0__Vec3_float__baseTypeEpsilon


/** Return the number of dimensions, i.e. 3 */
unsigned int Imath_3_0__Vec3_float__dimensions(
    unsigned int * return_);
#define Imath_V3f_dimensions Imath_3_0__Vec3_float__dimensions


/** Element access by index.   */
unsigned int Imath_3_0__Vec3_double__index(
    Imath_V3d_t * this_
    , double * * return_
    , int i);
#define Imath_V3d_index Imath_3_0__Vec3_double__index


/** Element access by index.   */
unsigned int Imath_3_0__Vec3_double__index_const(
    Imath_V3d_t const * this_
    , double const * * return_
    , int i);
#define Imath_V3d_index_const Imath_3_0__Vec3_double__index_const


/** Uninitialized by default */
unsigned int Imath_3_0__Vec3_double__ctor(
    Imath_V3d_t * this_);
#define Imath_V3d_ctor Imath_3_0__Vec3_double__ctor


/** Initialize to a scalar `(a,a,a)` */
unsigned int Imath_3_0__Vec3_double__ctor_1(
    Imath_V3d_t * this_
    , double a);
#define Imath_V3d_ctor_1 Imath_3_0__Vec3_double__ctor_1


/** Initialize to given elements `(a,b,c)` */
unsigned int Imath_3_0__Vec3_double__ctor_2(
    Imath_V3d_t * this_
    , double a
    , double b
    , double c);
#define Imath_V3d_ctor_2 Imath_3_0__Vec3_double__ctor_2


unsigned int Imath_3_0__Vec3_double__ctor_3(
    Imath_V3d_t * this_
    , Imath_V3d_t const * v);
#define Imath_V3d_ctor_3 Imath_3_0__Vec3_double__ctor_3


/** Assignment */
unsigned int Imath_3_0__Vec3_double___assign(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , Imath_V3d_t const * v);
#define Imath_V3d__assign Imath_3_0__Vec3_double___assign


/** Destructor */
unsigned int Imath_3_0__Vec3_double__dtor(
    Imath_V3d_t * this_);
#define Imath_V3d_dtor Imath_3_0__Vec3_double__dtor


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Vec3_double__getValue(
    Imath_V3d_t * this_
    , double * * return_);
#define Imath_V3d_getValue Imath_3_0__Vec3_double__getValue


/** Return a raw pointer to the array of values */
unsigned int Imath_3_0__Vec3_double__getValue_1(
    Imath_V3d_t const * this_
    , double const * * return_);
#define Imath_V3d_getValue_1 Imath_3_0__Vec3_double__getValue_1


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Vec3_double__equalWithAbsError(
    Imath_V3d_t const * this_
    , _Bool * return_
    , Imath_V3d_t const * v
    , double e);
#define Imath_V3d_equalWithAbsError Imath_3_0__Vec3_double__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Vec3_double__equalWithRelError(
    Imath_V3d_t const * this_
    , _Bool * return_
    , Imath_V3d_t const * v
    , double e);
#define Imath_V3d_equalWithRelError Imath_3_0__Vec3_double__equalWithRelError


/** Dot product */
unsigned int Imath_3_0__Vec3_double__dot(
    Imath_V3d_t const * this_
    , double * return_
    , Imath_V3d_t const * v);
#define Imath_V3d_dot Imath_3_0__Vec3_double__dot


/** Right-handed cross product */
unsigned int Imath_3_0__Vec3_double__cross(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , Imath_V3d_t const * v);
#define Imath_V3d_cross Imath_3_0__Vec3_double__cross


/** Component-wise addition */
unsigned int Imath_3_0__Vec3_double___op_iadd(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , Imath_V3d_t const * v);
#define Imath_V3d__op_iadd Imath_3_0__Vec3_double___op_iadd


/** Component-wise addition */
unsigned int Imath_3_0__Vec3_double___op_add(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , Imath_V3d_t const * v);
#define Imath_V3d__op_add Imath_3_0__Vec3_double___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec3_double___op_isub(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , Imath_V3d_t const * v);
#define Imath_V3d__op_isub Imath_3_0__Vec3_double___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec3_double___op_sub(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , Imath_V3d_t const * v);
#define Imath_V3d__op_sub Imath_3_0__Vec3_double___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec3_double___op_sub_1(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_);
#define Imath_V3d__op_sub_1 Imath_3_0__Vec3_double___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec3_double__negate(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_);
#define Imath_V3d_negate Imath_3_0__Vec3_double__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_double___op_imul(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , Imath_V3d_t const * v);
#define Imath_V3d__op_imul Imath_3_0__Vec3_double___op_imul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_double___op_imul_1(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , double a);
#define Imath_V3d__op_imul_1 Imath_3_0__Vec3_double___op_imul_1


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_double___op_mul(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , Imath_V3d_t const * v);
#define Imath_V3d__op_mul Imath_3_0__Vec3_double___op_mul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec3_double___op_mul_1(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , double a);
#define Imath_V3d__op_mul_1 Imath_3_0__Vec3_double___op_mul_1


/** Component-wise division */
unsigned int Imath_3_0__Vec3_double___op_idiv(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , Imath_V3d_t const * v);
#define Imath_V3d__op_idiv Imath_3_0__Vec3_double___op_idiv


/** Component-wise division */
unsigned int Imath_3_0__Vec3_double___op_idiv_1(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_
    , double a);
#define Imath_V3d__op_idiv_1 Imath_3_0__Vec3_double___op_idiv_1


/** Component-wise division */
unsigned int Imath_3_0__Vec3_double___op_div(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , Imath_V3d_t const * v);
#define Imath_V3d__op_div Imath_3_0__Vec3_double___op_div


/** Component-wise division */
unsigned int Imath_3_0__Vec3_double___op_div_1(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_
    , double a);
#define Imath_V3d__op_div_1 Imath_3_0__Vec3_double___op_div_1


/** Return the Euclidean norm */
unsigned int Imath_3_0__Vec3_double__length(
    Imath_V3d_t const * this_
    , double * return_);
#define Imath_V3d_length Imath_3_0__Vec3_double__length


/** Return the square of the Euclidean norm, i.e. the dot product
with itself. */
unsigned int Imath_3_0__Vec3_double__length2(
    Imath_V3d_t const * this_
    , double * return_);
#define Imath_V3d_length2 Imath_3_0__Vec3_double__length2


/** Normalize in place. If length()==0, return a null vector. */
unsigned int Imath_3_0__Vec3_double__normalize(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_);
#define Imath_V3d_normalize Imath_3_0__Vec3_double__normalize


/** Normalize without any checks for length()==0. Slightly faster
than the other normalization routines, but if v.length() is
0.0, the result is undefined. */
unsigned int Imath_3_0__Vec3_double__normalizeNonNull(
    Imath_V3d_t * this_
    , Imath_V3d_t const * * return_);
#define Imath_V3d_normalizeNonNull Imath_3_0__Vec3_double__normalizeNonNull


/** Return a normalized vector. Does not modify *this. */
unsigned int Imath_3_0__Vec3_double__normalized(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_);
#define Imath_V3d_normalized Imath_3_0__Vec3_double__normalized


/** Return a normalized vector. Does not modify *this, and does
not check for length()==0. Slightly faster than the other
normalization routines, but if v.length() is 0.0, the result
is undefined. */
unsigned int Imath_3_0__Vec3_double__normalizedNonNull(
    Imath_V3d_t const * this_
    , Imath_V3d_t * return_);
#define Imath_V3d_normalizedNonNull Imath_3_0__Vec3_double__normalizedNonNull


/** Largest possible negative value */
unsigned int Imath_3_0__Vec3_double__baseTypeLowest(
    double * return_);
#define Imath_V3d_baseTypeLowest Imath_3_0__Vec3_double__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Vec3_double__baseTypeMax(
    double * return_);
#define Imath_V3d_baseTypeMax Imath_3_0__Vec3_double__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Vec3_double__baseTypeSmallest(
    double * return_);
#define Imath_V3d_baseTypeSmallest Imath_3_0__Vec3_double__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Vec3_double__baseTypeEpsilon(
    double * return_);
#define Imath_V3d_baseTypeEpsilon Imath_3_0__Vec3_double__baseTypeEpsilon


/** Return the number of dimensions, i.e. 3 */
unsigned int Imath_3_0__Vec3_double__dimensions(
    unsigned int * return_);
#define Imath_V3d_dimensions Imath_3_0__Vec3_double__dimensions


/** Element access by index.   */
unsigned int Imath_3_0__Vec4_short__index(
    Imath_V4s_t * this_
    , short * * return_
    , int i);
#define Imath_V4s_index Imath_3_0__Vec4_short__index


/** Element access by index.   */
unsigned int Imath_3_0__Vec4_short__index_const(
    Imath_V4s_t const * this_
    , short const * * return_
    , int i);
#define Imath_V4s_index_const Imath_3_0__Vec4_short__index_const


/** Uninitialized by default */
unsigned int Imath_3_0__Vec4_short__ctor(
    Imath_V4s_t * this_);
#define Imath_V4s_ctor Imath_3_0__Vec4_short__ctor


/** Initialize to a scalar `(a,a,a,a)` */
unsigned int Imath_3_0__Vec4_short__ctor_1(
    Imath_V4s_t * this_
    , short a);
#define Imath_V4s_ctor_1 Imath_3_0__Vec4_short__ctor_1


/** Initialize to given elements `(a,b,c,d)` */
unsigned int Imath_3_0__Vec4_short__ctor_2(
    Imath_V4s_t * this_
    , short a
    , short b
    , short c
    , short d);
#define Imath_V4s_ctor_2 Imath_3_0__Vec4_short__ctor_2


unsigned int Imath_3_0__Vec4_short__ctor_3(
    Imath_V4s_t * this_
    , Imath_V4s_t const * v);
#define Imath_V4s_ctor_3 Imath_3_0__Vec4_short__ctor_3


/** Assignment */
unsigned int Imath_3_0__Vec4_short___assign(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_
    , Imath_V4s_t const * v);
#define Imath_V4s__assign Imath_3_0__Vec4_short___assign


/** Destructor */
unsigned int Imath_3_0__Vec4_short__dtor(
    Imath_V4s_t * this_);
#define Imath_V4s_dtor Imath_3_0__Vec4_short__dtor


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Vec4_short__equalWithAbsError(
    Imath_V4s_t const * this_
    , _Bool * return_
    , Imath_V4s_t const * v
    , short e);
#define Imath_V4s_equalWithAbsError Imath_3_0__Vec4_short__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Vec4_short__equalWithRelError(
    Imath_V4s_t const * this_
    , _Bool * return_
    , Imath_V4s_t const * v
    , short e);
#define Imath_V4s_equalWithRelError Imath_3_0__Vec4_short__equalWithRelError


/** Dot product */
unsigned int Imath_3_0__Vec4_short__dot(
    Imath_V4s_t const * this_
    , short * return_
    , Imath_V4s_t const * v);
#define Imath_V4s_dot Imath_3_0__Vec4_short__dot


/** Component-wise addition */
unsigned int Imath_3_0__Vec4_short___op_add(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_
    , Imath_V4s_t const * v);
#define Imath_V4s__op_add Imath_3_0__Vec4_short___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec4_short___op_isub(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_
    , Imath_V4s_t const * v);
#define Imath_V4s__op_isub Imath_3_0__Vec4_short___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec4_short___op_sub(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_
    , Imath_V4s_t const * v);
#define Imath_V4s__op_sub Imath_3_0__Vec4_short___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec4_short___op_sub_1(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_);
#define Imath_V4s__op_sub_1 Imath_3_0__Vec4_short___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec4_short__negate(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_);
#define Imath_V4s_negate Imath_3_0__Vec4_short__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_short___op_imul(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_
    , Imath_V4s_t const * v);
#define Imath_V4s__op_imul Imath_3_0__Vec4_short___op_imul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_short___op_imul_1(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_
    , short a);
#define Imath_V4s__op_imul_1 Imath_3_0__Vec4_short___op_imul_1


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_short___op_mul(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_
    , Imath_V4s_t const * v);
#define Imath_V4s__op_mul Imath_3_0__Vec4_short___op_mul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_short___op_mul_1(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_
    , short a);
#define Imath_V4s__op_mul_1 Imath_3_0__Vec4_short___op_mul_1


/** Component-wise division */
unsigned int Imath_3_0__Vec4_short___op_idiv(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_
    , Imath_V4s_t const * v);
#define Imath_V4s__op_idiv Imath_3_0__Vec4_short___op_idiv


/** Component-wise division */
unsigned int Imath_3_0__Vec4_short___op_idiv_1(
    Imath_V4s_t * this_
    , Imath_V4s_t const * * return_
    , short a);
#define Imath_V4s__op_idiv_1 Imath_3_0__Vec4_short___op_idiv_1


/** Component-wise division */
unsigned int Imath_3_0__Vec4_short___op_div(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_
    , Imath_V4s_t const * v);
#define Imath_V4s__op_div Imath_3_0__Vec4_short___op_div


/** Component-wise division */
unsigned int Imath_3_0__Vec4_short___op_div_1(
    Imath_V4s_t const * this_
    , Imath_V4s_t * return_
    , short a);
#define Imath_V4s__op_div_1 Imath_3_0__Vec4_short___op_div_1


/** Return the square of the Euclidean norm, i.e. the dot product
with itself. */
unsigned int Imath_3_0__Vec4_short__length2(
    Imath_V4s_t const * this_
    , short * return_);
#define Imath_V4s_length2 Imath_3_0__Vec4_short__length2


/** Largest possible negative value */
unsigned int Imath_3_0__Vec4_short__baseTypeLowest(
    short * return_);
#define Imath_V4s_baseTypeLowest Imath_3_0__Vec4_short__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Vec4_short__baseTypeMax(
    short * return_);
#define Imath_V4s_baseTypeMax Imath_3_0__Vec4_short__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Vec4_short__baseTypeSmallest(
    short * return_);
#define Imath_V4s_baseTypeSmallest Imath_3_0__Vec4_short__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Vec4_short__baseTypeEpsilon(
    short * return_);
#define Imath_V4s_baseTypeEpsilon Imath_3_0__Vec4_short__baseTypeEpsilon


/** Return the number of dimensions, i.e. 4 */
unsigned int Imath_3_0__Vec4_short__dimensions(
    unsigned int * return_);
#define Imath_V4s_dimensions Imath_3_0__Vec4_short__dimensions


/** Element access by index.   */
unsigned int Imath_3_0__Vec4_int__index(
    Imath_Vec4_t * this_
    , int * * return_
    , int i);
#define Imath_Vec4_index Imath_3_0__Vec4_int__index


/** Element access by index.   */
unsigned int Imath_3_0__Vec4_int__index_const(
    Imath_Vec4_t const * this_
    , int const * * return_
    , int i);
#define Imath_Vec4_index_const Imath_3_0__Vec4_int__index_const


/** Uninitialized by default */
unsigned int Imath_3_0__Vec4_int__ctor(
    Imath_Vec4_t * this_);
#define Imath_Vec4_ctor Imath_3_0__Vec4_int__ctor


/** Initialize to a scalar `(a,a,a,a)` */
unsigned int Imath_3_0__Vec4_int__ctor_1(
    Imath_Vec4_t * this_
    , int a);
#define Imath_Vec4_ctor_1 Imath_3_0__Vec4_int__ctor_1


/** Initialize to given elements `(a,b,c,d)` */
unsigned int Imath_3_0__Vec4_int__ctor_2(
    Imath_Vec4_t * this_
    , int a
    , int b
    , int c
    , int d);
#define Imath_Vec4_ctor_2 Imath_3_0__Vec4_int__ctor_2


unsigned int Imath_3_0__Vec4_int__ctor_3(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * v);
#define Imath_Vec4_ctor_3 Imath_3_0__Vec4_int__ctor_3


/** Assignment */
unsigned int Imath_3_0__Vec4_int___assign(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_
    , Imath_Vec4_t const * v);
#define Imath_Vec4__assign Imath_3_0__Vec4_int___assign


/** Destructor */
unsigned int Imath_3_0__Vec4_int__dtor(
    Imath_Vec4_t * this_);
#define Imath_Vec4_dtor Imath_3_0__Vec4_int__dtor


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Vec4_int__equalWithAbsError(
    Imath_Vec4_t const * this_
    , _Bool * return_
    , Imath_Vec4_t const * v
    , int e);
#define Imath_Vec4_equalWithAbsError Imath_3_0__Vec4_int__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Vec4_int__equalWithRelError(
    Imath_Vec4_t const * this_
    , _Bool * return_
    , Imath_Vec4_t const * v
    , int e);
#define Imath_Vec4_equalWithRelError Imath_3_0__Vec4_int__equalWithRelError


/** Dot product */
unsigned int Imath_3_0__Vec4_int__dot(
    Imath_Vec4_t const * this_
    , int * return_
    , Imath_Vec4_t const * v);
#define Imath_Vec4_dot Imath_3_0__Vec4_int__dot


/** Component-wise addition */
unsigned int Imath_3_0__Vec4_int___op_add(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_
    , Imath_Vec4_t const * v);
#define Imath_Vec4__op_add Imath_3_0__Vec4_int___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec4_int___op_isub(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_
    , Imath_Vec4_t const * v);
#define Imath_Vec4__op_isub Imath_3_0__Vec4_int___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec4_int___op_sub(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_
    , Imath_Vec4_t const * v);
#define Imath_Vec4__op_sub Imath_3_0__Vec4_int___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec4_int___op_sub_1(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_);
#define Imath_Vec4__op_sub_1 Imath_3_0__Vec4_int___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec4_int__negate(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_);
#define Imath_Vec4_negate Imath_3_0__Vec4_int__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_int___op_imul(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_
    , Imath_Vec4_t const * v);
#define Imath_Vec4__op_imul Imath_3_0__Vec4_int___op_imul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_int___op_imul_1(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_
    , int a);
#define Imath_Vec4__op_imul_1 Imath_3_0__Vec4_int___op_imul_1


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_int___op_mul(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_
    , Imath_Vec4_t const * v);
#define Imath_Vec4__op_mul Imath_3_0__Vec4_int___op_mul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_int___op_mul_1(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_
    , int a);
#define Imath_Vec4__op_mul_1 Imath_3_0__Vec4_int___op_mul_1


/** Component-wise division */
unsigned int Imath_3_0__Vec4_int___op_idiv(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_
    , Imath_Vec4_t const * v);
#define Imath_Vec4__op_idiv Imath_3_0__Vec4_int___op_idiv


/** Component-wise division */
unsigned int Imath_3_0__Vec4_int___op_idiv_1(
    Imath_Vec4_t * this_
    , Imath_Vec4_t const * * return_
    , int a);
#define Imath_Vec4__op_idiv_1 Imath_3_0__Vec4_int___op_idiv_1


/** Component-wise division */
unsigned int Imath_3_0__Vec4_int___op_div(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_
    , Imath_Vec4_t const * v);
#define Imath_Vec4__op_div Imath_3_0__Vec4_int___op_div


/** Component-wise division */
unsigned int Imath_3_0__Vec4_int___op_div_1(
    Imath_Vec4_t const * this_
    , Imath_Vec4_t * return_
    , int a);
#define Imath_Vec4__op_div_1 Imath_3_0__Vec4_int___op_div_1


/** Return the square of the Euclidean norm, i.e. the dot product
with itself. */
unsigned int Imath_3_0__Vec4_int__length2(
    Imath_Vec4_t const * this_
    , int * return_);
#define Imath_Vec4_length2 Imath_3_0__Vec4_int__length2


/** Largest possible negative value */
unsigned int Imath_3_0__Vec4_int__baseTypeLowest(
    int * return_);
#define Imath_Vec4_baseTypeLowest Imath_3_0__Vec4_int__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Vec4_int__baseTypeMax(
    int * return_);
#define Imath_Vec4_baseTypeMax Imath_3_0__Vec4_int__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Vec4_int__baseTypeSmallest(
    int * return_);
#define Imath_Vec4_baseTypeSmallest Imath_3_0__Vec4_int__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Vec4_int__baseTypeEpsilon(
    int * return_);
#define Imath_Vec4_baseTypeEpsilon Imath_3_0__Vec4_int__baseTypeEpsilon


/** Return the number of dimensions, i.e. 4 */
unsigned int Imath_3_0__Vec4_int__dimensions(
    unsigned int * return_);
#define Imath_Vec4_dimensions Imath_3_0__Vec4_int__dimensions


unsigned int Imath_3_0__Vec4_long__index(
    Imath_V4i64_t * this_
    , long * * return_
    , int i);
#define Imath_V4i64_index Imath_3_0__Vec4_long__index


unsigned int Imath_3_0__Vec4_long__index_const(
    Imath_V4i64_t const * this_
    , long const * * return_
    , int i);
#define Imath_V4i64_index_const Imath_3_0__Vec4_long__index_const


unsigned int Imath_3_0__Vec4_long__ctor(
    Imath_V4i64_t * this_);
#define Imath_V4i64_ctor Imath_3_0__Vec4_long__ctor


unsigned int Imath_3_0__Vec4_long__ctor_1(
    Imath_V4i64_t * this_
    , long a);
#define Imath_V4i64_ctor_1 Imath_3_0__Vec4_long__ctor_1


unsigned int Imath_3_0__Vec4_long__ctor_2(
    Imath_V4i64_t * this_
    , long a
    , long b
    , long c
    , long d);
#define Imath_V4i64_ctor_2 Imath_3_0__Vec4_long__ctor_2


unsigned int Imath_3_0__Vec4_long__copy(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * v);
#define Imath_V4i64_copy Imath_3_0__Vec4_long__copy


unsigned int Imath_3_0__Vec4_long___assign(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_
    , Imath_V4i64_t const * v);
#define Imath_V4i64__assign Imath_3_0__Vec4_long___assign


unsigned int Imath_3_0__Vec4_long__dtor(
    Imath_V4i64_t * this_);
#define Imath_V4i64_dtor Imath_3_0__Vec4_long__dtor


unsigned int Imath_3_0__Vec4_long__equalWithAbsError(
    Imath_V4i64_t const * this_
    , _Bool * return_
    , Imath_V4i64_t const * v
    , long e);
#define Imath_V4i64_equalWithAbsError Imath_3_0__Vec4_long__equalWithAbsError


unsigned int Imath_3_0__Vec4_long__equalWithRelError(
    Imath_V4i64_t const * this_
    , _Bool * return_
    , Imath_V4i64_t const * v
    , long e);
#define Imath_V4i64_equalWithRelError Imath_3_0__Vec4_long__equalWithRelError


unsigned int Imath_3_0__Vec4_long__dot(
    Imath_V4i64_t const * this_
    , long * return_
    , Imath_V4i64_t const * v);
#define Imath_V4i64_dot Imath_3_0__Vec4_long__dot


unsigned int Imath_3_0__Vec4_long___op_add(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_
    , Imath_V4i64_t const * v);
#define Imath_V4i64__op_add Imath_3_0__Vec4_long___op_add


unsigned int Imath_3_0__Vec4_long___op_isub(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_
    , Imath_V4i64_t const * v);
#define Imath_V4i64__op_isub Imath_3_0__Vec4_long___op_isub


unsigned int Imath_3_0__Vec4_long___op_sub(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_
    , Imath_V4i64_t const * v);
#define Imath_V4i64__op_sub Imath_3_0__Vec4_long___op_sub


unsigned int Imath_3_0__Vec4_long___op_sub_1(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_);
#define Imath_V4i64__op_sub_1 Imath_3_0__Vec4_long___op_sub_1


unsigned int Imath_3_0__Vec4_long__negate(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_);
#define Imath_V4i64_negate Imath_3_0__Vec4_long__negate


unsigned int Imath_3_0__Vec4_long___op_imul(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_
    , Imath_V4i64_t const * v);
#define Imath_V4i64__op_imul Imath_3_0__Vec4_long___op_imul


unsigned int Imath_3_0__Vec4_long___op_imul_1(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_
    , long a);
#define Imath_V4i64__op_imul_1 Imath_3_0__Vec4_long___op_imul_1


unsigned int Imath_3_0__Vec4_long___op_mul(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_
    , Imath_V4i64_t const * v);
#define Imath_V4i64__op_mul Imath_3_0__Vec4_long___op_mul


unsigned int Imath_3_0__Vec4_long___op_mul_1(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_
    , long a);
#define Imath_V4i64__op_mul_1 Imath_3_0__Vec4_long___op_mul_1


unsigned int Imath_3_0__Vec4_long___op_idiv(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_
    , Imath_V4i64_t const * v);
#define Imath_V4i64__op_idiv Imath_3_0__Vec4_long___op_idiv


unsigned int Imath_3_0__Vec4_long___op_idiv_1(
    Imath_V4i64_t * this_
    , Imath_V4i64_t const * * return_
    , long a);
#define Imath_V4i64__op_idiv_1 Imath_3_0__Vec4_long___op_idiv_1


unsigned int Imath_3_0__Vec4_long___op_div(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_
    , Imath_V4i64_t const * v);
#define Imath_V4i64__op_div Imath_3_0__Vec4_long___op_div


unsigned int Imath_3_0__Vec4_long___op_div_1(
    Imath_V4i64_t const * this_
    , Imath_V4i64_t * return_
    , long a);
#define Imath_V4i64__op_div_1 Imath_3_0__Vec4_long___op_div_1


unsigned int Imath_3_0__Vec4_long__length2(
    Imath_V4i64_t const * this_
    , long * return_);
#define Imath_V4i64_length2 Imath_3_0__Vec4_long__length2


unsigned int Imath_3_0__Vec4_long__baseTypeLowest(
    long * return_);
#define Imath_V4i64_baseTypeLowest Imath_3_0__Vec4_long__baseTypeLowest


unsigned int Imath_3_0__Vec4_long__baseTypeMax(
    long * return_);
#define Imath_V4i64_baseTypeMax Imath_3_0__Vec4_long__baseTypeMax


unsigned int Imath_3_0__Vec4_long__baseTypeSmallest(
    long * return_);
#define Imath_V4i64_baseTypeSmallest Imath_3_0__Vec4_long__baseTypeSmallest


unsigned int Imath_3_0__Vec4_long__baseTypeEpsilon(
    long * return_);
#define Imath_V4i64_baseTypeEpsilon Imath_3_0__Vec4_long__baseTypeEpsilon


unsigned int Imath_3_0__Vec4_long__dimensions(
    unsigned int * return_);
#define Imath_V4i64_dimensions Imath_3_0__Vec4_long__dimensions


/** Element access by index.   */
unsigned int Imath_3_0__Vec4_float__index(
    Imath_V4f_t * this_
    , float * * return_
    , int i);
#define Imath_V4f_index Imath_3_0__Vec4_float__index


/** Element access by index.   */
unsigned int Imath_3_0__Vec4_float__index_const(
    Imath_V4f_t const * this_
    , float const * * return_
    , int i);
#define Imath_V4f_index_const Imath_3_0__Vec4_float__index_const


/** Uninitialized by default */
unsigned int Imath_3_0__Vec4_float__ctor(
    Imath_V4f_t * this_);
#define Imath_V4f_ctor Imath_3_0__Vec4_float__ctor


/** Initialize to a scalar `(a,a,a,a)` */
unsigned int Imath_3_0__Vec4_float__ctor_1(
    Imath_V4f_t * this_
    , float a);
#define Imath_V4f_ctor_1 Imath_3_0__Vec4_float__ctor_1


/** Initialize to given elements `(a,b,c,d)` */
unsigned int Imath_3_0__Vec4_float__ctor_2(
    Imath_V4f_t * this_
    , float a
    , float b
    , float c
    , float d);
#define Imath_V4f_ctor_2 Imath_3_0__Vec4_float__ctor_2


unsigned int Imath_3_0__Vec4_float__ctor_3(
    Imath_V4f_t * this_
    , Imath_V4f_t const * v);
#define Imath_V4f_ctor_3 Imath_3_0__Vec4_float__ctor_3


/** Assignment */
unsigned int Imath_3_0__Vec4_float___assign(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_
    , Imath_V4f_t const * v);
#define Imath_V4f__assign Imath_3_0__Vec4_float___assign


/** Destructor */
unsigned int Imath_3_0__Vec4_float__dtor(
    Imath_V4f_t * this_);
#define Imath_V4f_dtor Imath_3_0__Vec4_float__dtor


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Vec4_float__equalWithAbsError(
    Imath_V4f_t const * this_
    , _Bool * return_
    , Imath_V4f_t const * v
    , float e);
#define Imath_V4f_equalWithAbsError Imath_3_0__Vec4_float__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Vec4_float__equalWithRelError(
    Imath_V4f_t const * this_
    , _Bool * return_
    , Imath_V4f_t const * v
    , float e);
#define Imath_V4f_equalWithRelError Imath_3_0__Vec4_float__equalWithRelError


/** Dot product */
unsigned int Imath_3_0__Vec4_float__dot(
    Imath_V4f_t const * this_
    , float * return_
    , Imath_V4f_t const * v);
#define Imath_V4f_dot Imath_3_0__Vec4_float__dot


/** Component-wise addition */
unsigned int Imath_3_0__Vec4_float___op_add(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_
    , Imath_V4f_t const * v);
#define Imath_V4f__op_add Imath_3_0__Vec4_float___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec4_float___op_isub(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_
    , Imath_V4f_t const * v);
#define Imath_V4f__op_isub Imath_3_0__Vec4_float___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec4_float___op_sub(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_
    , Imath_V4f_t const * v);
#define Imath_V4f__op_sub Imath_3_0__Vec4_float___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec4_float___op_sub_1(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_);
#define Imath_V4f__op_sub_1 Imath_3_0__Vec4_float___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec4_float__negate(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_);
#define Imath_V4f_negate Imath_3_0__Vec4_float__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_float___op_imul(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_
    , Imath_V4f_t const * v);
#define Imath_V4f__op_imul Imath_3_0__Vec4_float___op_imul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_float___op_imul_1(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_
    , float a);
#define Imath_V4f__op_imul_1 Imath_3_0__Vec4_float___op_imul_1


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_float___op_mul(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_
    , Imath_V4f_t const * v);
#define Imath_V4f__op_mul Imath_3_0__Vec4_float___op_mul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_float___op_mul_1(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_
    , float a);
#define Imath_V4f__op_mul_1 Imath_3_0__Vec4_float___op_mul_1


/** Component-wise division */
unsigned int Imath_3_0__Vec4_float___op_idiv(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_
    , Imath_V4f_t const * v);
#define Imath_V4f__op_idiv Imath_3_0__Vec4_float___op_idiv


/** Component-wise division */
unsigned int Imath_3_0__Vec4_float___op_idiv_1(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_
    , float a);
#define Imath_V4f__op_idiv_1 Imath_3_0__Vec4_float___op_idiv_1


/** Component-wise division */
unsigned int Imath_3_0__Vec4_float___op_div(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_
    , Imath_V4f_t const * v);
#define Imath_V4f__op_div Imath_3_0__Vec4_float___op_div


/** Component-wise division */
unsigned int Imath_3_0__Vec4_float___op_div_1(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_
    , float a);
#define Imath_V4f__op_div_1 Imath_3_0__Vec4_float___op_div_1


/** Return the Euclidean norm */
unsigned int Imath_3_0__Vec4_float__length(
    Imath_V4f_t const * this_
    , float * return_);
#define Imath_V4f_length Imath_3_0__Vec4_float__length


/** Return the square of the Euclidean norm, i.e. the dot product
with itself. */
unsigned int Imath_3_0__Vec4_float__length2(
    Imath_V4f_t const * this_
    , float * return_);
#define Imath_V4f_length2 Imath_3_0__Vec4_float__length2


/** Normalize in place. If length()==0, return a null vector. */
unsigned int Imath_3_0__Vec4_float__normalize(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_);
#define Imath_V4f_normalize Imath_3_0__Vec4_float__normalize


/** Normalize without any checks for length()==0. Slightly faster
than the other normalization routines, but if v.length() is
0.0, the result is undefined. */
unsigned int Imath_3_0__Vec4_float__normalizeNonNull(
    Imath_V4f_t * this_
    , Imath_V4f_t const * * return_);
#define Imath_V4f_normalizeNonNull Imath_3_0__Vec4_float__normalizeNonNull


/** Return a normalized vector. Does not modify *this. */
unsigned int Imath_3_0__Vec4_float__normalized(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_);
#define Imath_V4f_normalized Imath_3_0__Vec4_float__normalized


/** Return a normalized vector. Does not modify *this, and does
not check for length()==0. Slightly faster than the other
normalization routines, but if v.length() is 0.0, the result
is undefined. */
unsigned int Imath_3_0__Vec4_float__normalizedNonNull(
    Imath_V4f_t const * this_
    , Imath_V4f_t * return_);
#define Imath_V4f_normalizedNonNull Imath_3_0__Vec4_float__normalizedNonNull


/** Largest possible negative value */
unsigned int Imath_3_0__Vec4_float__baseTypeLowest(
    float * return_);
#define Imath_V4f_baseTypeLowest Imath_3_0__Vec4_float__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Vec4_float__baseTypeMax(
    float * return_);
#define Imath_V4f_baseTypeMax Imath_3_0__Vec4_float__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Vec4_float__baseTypeSmallest(
    float * return_);
#define Imath_V4f_baseTypeSmallest Imath_3_0__Vec4_float__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Vec4_float__baseTypeEpsilon(
    float * return_);
#define Imath_V4f_baseTypeEpsilon Imath_3_0__Vec4_float__baseTypeEpsilon


/** Return the number of dimensions, i.e. 4 */
unsigned int Imath_3_0__Vec4_float__dimensions(
    unsigned int * return_);
#define Imath_V4f_dimensions Imath_3_0__Vec4_float__dimensions


/** Element access by index.   */
unsigned int Imath_3_0__Vec4_double__index(
    Imath_V4d_t * this_
    , double * * return_
    , int i);
#define Imath_V4d_index Imath_3_0__Vec4_double__index


/** Element access by index.   */
unsigned int Imath_3_0__Vec4_double__index_const(
    Imath_V4d_t const * this_
    , double const * * return_
    , int i);
#define Imath_V4d_index_const Imath_3_0__Vec4_double__index_const


/** Uninitialized by default */
unsigned int Imath_3_0__Vec4_double__ctor(
    Imath_V4d_t * this_);
#define Imath_V4d_ctor Imath_3_0__Vec4_double__ctor


/** Initialize to a scalar `(a,a,a,a)` */
unsigned int Imath_3_0__Vec4_double__ctor_1(
    Imath_V4d_t * this_
    , double a);
#define Imath_V4d_ctor_1 Imath_3_0__Vec4_double__ctor_1


/** Initialize to given elements `(a,b,c,d)` */
unsigned int Imath_3_0__Vec4_double__ctor_2(
    Imath_V4d_t * this_
    , double a
    , double b
    , double c
    , double d);
#define Imath_V4d_ctor_2 Imath_3_0__Vec4_double__ctor_2


unsigned int Imath_3_0__Vec4_double__ctor_3(
    Imath_V4d_t * this_
    , Imath_V4d_t const * v);
#define Imath_V4d_ctor_3 Imath_3_0__Vec4_double__ctor_3


/** Assignment */
unsigned int Imath_3_0__Vec4_double___assign(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_
    , Imath_V4d_t const * v);
#define Imath_V4d__assign Imath_3_0__Vec4_double___assign


/** Destructor */
unsigned int Imath_3_0__Vec4_double__dtor(
    Imath_V4d_t * this_);
#define Imath_V4d_dtor Imath_3_0__Vec4_double__dtor


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and `m` are the same
with an absolute error of no more than e, i.e., for all i, j:

  abs (this[i][j] - m[i][j]) <= e */
unsigned int Imath_3_0__Vec4_double__equalWithAbsError(
    Imath_V4d_t const * this_
    , _Bool * return_
    , Imath_V4d_t const * v
    , double e);
#define Imath_V4d_equalWithAbsError Imath_3_0__Vec4_double__equalWithAbsError


/** Compare two matrices and test if they are "approximately equal":
@return True if the coefficients of this and m are the same with
a relative error of no more than e, i.e., for all i, j:

  abs (this[i] - v[i][j]) <= e * abs (this[i][j]) */
unsigned int Imath_3_0__Vec4_double__equalWithRelError(
    Imath_V4d_t const * this_
    , _Bool * return_
    , Imath_V4d_t const * v
    , double e);
#define Imath_V4d_equalWithRelError Imath_3_0__Vec4_double__equalWithRelError


/** Dot product */
unsigned int Imath_3_0__Vec4_double__dot(
    Imath_V4d_t const * this_
    , double * return_
    , Imath_V4d_t const * v);
#define Imath_V4d_dot Imath_3_0__Vec4_double__dot


/** Component-wise addition */
unsigned int Imath_3_0__Vec4_double___op_add(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_
    , Imath_V4d_t const * v);
#define Imath_V4d__op_add Imath_3_0__Vec4_double___op_add


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec4_double___op_isub(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_
    , Imath_V4d_t const * v);
#define Imath_V4d__op_isub Imath_3_0__Vec4_double___op_isub


/** Component-wise subtraction */
unsigned int Imath_3_0__Vec4_double___op_sub(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_
    , Imath_V4d_t const * v);
#define Imath_V4d__op_sub Imath_3_0__Vec4_double___op_sub


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec4_double___op_sub_1(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_);
#define Imath_V4d__op_sub_1 Imath_3_0__Vec4_double___op_sub_1


/** Component-wise multiplication by -1 */
unsigned int Imath_3_0__Vec4_double__negate(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_);
#define Imath_V4d_negate Imath_3_0__Vec4_double__negate


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_double___op_imul(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_
    , Imath_V4d_t const * v);
#define Imath_V4d__op_imul Imath_3_0__Vec4_double___op_imul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_double___op_imul_1(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_
    , double a);
#define Imath_V4d__op_imul_1 Imath_3_0__Vec4_double___op_imul_1


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_double___op_mul(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_
    , Imath_V4d_t const * v);
#define Imath_V4d__op_mul Imath_3_0__Vec4_double___op_mul


/** Component-wise multiplication */
unsigned int Imath_3_0__Vec4_double___op_mul_1(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_
    , double a);
#define Imath_V4d__op_mul_1 Imath_3_0__Vec4_double___op_mul_1


/** Component-wise division */
unsigned int Imath_3_0__Vec4_double___op_idiv(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_
    , Imath_V4d_t const * v);
#define Imath_V4d__op_idiv Imath_3_0__Vec4_double___op_idiv


/** Component-wise division */
unsigned int Imath_3_0__Vec4_double___op_idiv_1(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_
    , double a);
#define Imath_V4d__op_idiv_1 Imath_3_0__Vec4_double___op_idiv_1


/** Component-wise division */
unsigned int Imath_3_0__Vec4_double___op_div(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_
    , Imath_V4d_t const * v);
#define Imath_V4d__op_div Imath_3_0__Vec4_double___op_div


/** Component-wise division */
unsigned int Imath_3_0__Vec4_double___op_div_1(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_
    , double a);
#define Imath_V4d__op_div_1 Imath_3_0__Vec4_double___op_div_1


/** Return the Euclidean norm */
unsigned int Imath_3_0__Vec4_double__length(
    Imath_V4d_t const * this_
    , double * return_);
#define Imath_V4d_length Imath_3_0__Vec4_double__length


/** Return the square of the Euclidean norm, i.e. the dot product
with itself. */
unsigned int Imath_3_0__Vec4_double__length2(
    Imath_V4d_t const * this_
    , double * return_);
#define Imath_V4d_length2 Imath_3_0__Vec4_double__length2


/** Normalize in place. If length()==0, return a null vector. */
unsigned int Imath_3_0__Vec4_double__normalize(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_);
#define Imath_V4d_normalize Imath_3_0__Vec4_double__normalize


/** Normalize without any checks for length()==0. Slightly faster
than the other normalization routines, but if v.length() is
0.0, the result is undefined. */
unsigned int Imath_3_0__Vec4_double__normalizeNonNull(
    Imath_V4d_t * this_
    , Imath_V4d_t const * * return_);
#define Imath_V4d_normalizeNonNull Imath_3_0__Vec4_double__normalizeNonNull


/** Return a normalized vector. Does not modify *this. */
unsigned int Imath_3_0__Vec4_double__normalized(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_);
#define Imath_V4d_normalized Imath_3_0__Vec4_double__normalized


/** Return a normalized vector. Does not modify *this, and does
not check for length()==0. Slightly faster than the other
normalization routines, but if v.length() is 0.0, the result
is undefined. */
unsigned int Imath_3_0__Vec4_double__normalizedNonNull(
    Imath_V4d_t const * this_
    , Imath_V4d_t * return_);
#define Imath_V4d_normalizedNonNull Imath_3_0__Vec4_double__normalizedNonNull


/** Largest possible negative value */
unsigned int Imath_3_0__Vec4_double__baseTypeLowest(
    double * return_);
#define Imath_V4d_baseTypeLowest Imath_3_0__Vec4_double__baseTypeLowest


/** Largest possible positive value */
unsigned int Imath_3_0__Vec4_double__baseTypeMax(
    double * return_);
#define Imath_V4d_baseTypeMax Imath_3_0__Vec4_double__baseTypeMax


/** Smallest possible positive value */
unsigned int Imath_3_0__Vec4_double__baseTypeSmallest(
    double * return_);
#define Imath_V4d_baseTypeSmallest Imath_3_0__Vec4_double__baseTypeSmallest


/** Smallest possible e for which 1+e != 1 */
unsigned int Imath_3_0__Vec4_double__baseTypeEpsilon(
    double * return_);
#define Imath_V4d_baseTypeEpsilon Imath_3_0__Vec4_double__baseTypeEpsilon


/** Return the number of dimensions, i.e. 4 */
unsigned int Imath_3_0__Vec4_double__dimensions(
    unsigned int * return_);
#define Imath_V4d_dimensions Imath_3_0__Vec4_double__dimensions


#ifdef __cplusplus
}
#endif

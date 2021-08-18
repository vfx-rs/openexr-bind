#pragma once
#include "openexr-api-export.h"

#include <imath_vec.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imath_3_0__Vec2_short__t_s Imath_3_0__Vec2_short__t;
typedef Imath_3_0__Vec2_short__t Imath_V2s_t;
typedef struct Imath_3_0__Vec2_int__t_s Imath_3_0__Vec2_int__t;
typedef Imath_3_0__Vec2_int__t Imath_V2i_t;
typedef struct Imath_3_0__Vec2_float__t_s Imath_3_0__Vec2_float__t;
typedef Imath_3_0__Vec2_float__t Imath_V2f_t;
typedef struct Imath_3_0__Vec2_double__t_s Imath_3_0__Vec2_double__t;
typedef Imath_3_0__Vec2_double__t Imath_V2d_t;
typedef struct Imath_3_0__Vec3_short__t_s Imath_3_0__Vec3_short__t;
typedef Imath_3_0__Vec3_short__t Imath_V3s_t;
typedef struct Imath_3_0__Vec3_int__t_s Imath_3_0__Vec3_int__t;
typedef Imath_3_0__Vec3_int__t Imath_V3i_t;
typedef struct Imath_3_0__Vec3_float__t_s Imath_3_0__Vec3_float__t;
typedef Imath_3_0__Vec3_float__t Imath_V3f_t;
typedef struct Imath_3_0__Vec3_double__t_s Imath_3_0__Vec3_double__t;
typedef Imath_3_0__Vec3_double__t Imath_V3d_t;

typedef struct Imath_3_0__Box_Imath_3_0__Vec2_short___t_s {
    Imath_V2s_t min;
    Imath_V2s_t max;
} OPENEXR_ALIGN(2) Imath_3_0__Box_Imath_3_0__Vec2_short___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_short___t Imath_Box2s_t;

typedef struct Imath_3_0__Box_Imath_3_0__Vec2_int___t_s {
    Imath_V2i_t min;
    Imath_V2i_t max;
} OPENEXR_ALIGN(4) Imath_3_0__Box_Imath_3_0__Vec2_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_int___t Imath_Box2i_t;

typedef struct Imath_3_0__Box_Imath_3_0__Vec2_float___t_s {
    Imath_V2f_t min;
    Imath_V2f_t max;
} OPENEXR_ALIGN(4) Imath_3_0__Box_Imath_3_0__Vec2_float___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_float___t Imath_Box2f_t;

typedef struct Imath_3_0__Box_Imath_3_0__Vec2_double___t_s {
    Imath_V2d_t min;
    Imath_V2d_t max;
} OPENEXR_ALIGN(8) Imath_3_0__Box_Imath_3_0__Vec2_double___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_double___t Imath_Box2d_t;

typedef struct Imath_3_0__Box_Imath_3_0__Vec3_short___t_s {
    Imath_V3s_t min;
    Imath_V3s_t max;
} OPENEXR_ALIGN(2) Imath_3_0__Box_Imath_3_0__Vec3_short___t;
typedef Imath_3_0__Box_Imath_3_0__Vec3_short___t Imath_Box3s_t;

typedef struct Imath_3_0__Box_Imath_3_0__Vec3_int___t_s {
    Imath_V3i_t min;
    Imath_V3i_t max;
} OPENEXR_ALIGN(4) Imath_3_0__Box_Imath_3_0__Vec3_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec3_int___t Imath_Box3i_t;

typedef struct Imath_3_0__Box_Imath_3_0__Vec3_float___t_s {
    Imath_V3f_t min;
    Imath_V3f_t max;
} OPENEXR_ALIGN(4) Imath_3_0__Box_Imath_3_0__Vec3_float___t;
typedef Imath_3_0__Box_Imath_3_0__Vec3_float___t Imath_Box3f_t;

typedef struct Imath_3_0__Box_Imath_3_0__Vec3_double___t_s {
    Imath_V3d_t min;
    Imath_V3d_t max;
} OPENEXR_ALIGN(8) Imath_3_0__Box_Imath_3_0__Vec3_double___t;
typedef Imath_3_0__Box_Imath_3_0__Vec3_double___t Imath_Box3d_t;


/** Empty by default */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___ctor(
    Imath_Box2s_t * this_);
#define Imath_Box2s_ctor Imath_3_0__Box_Imath_3_0__Vec2_short___ctor


/** Construct a bounding box that contains a single point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___ctor_1(
    Imath_Box2s_t * this_
    , Imath_V2s_t const * point);
#define Imath_Box2s_ctor_1 Imath_3_0__Box_Imath_3_0__Vec2_short___ctor_1


/** Construct a bounding box with the given minimum and maximum points */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___ctor_2(
    Imath_Box2s_t * this_
    , Imath_V2s_t const * minV
    , Imath_V2s_t const * maxV);
#define Imath_Box2s_ctor_2 Imath_3_0__Box_Imath_3_0__Vec2_short___ctor_2


/** Equality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short____eq(
    Imath_Box2s_t const * this_
    , _Bool * return_
    , Imath_Box2s_t const * src);
#define Imath_Box2s__eq Imath_3_0__Box_Imath_3_0__Vec2_short____eq


/** Inequality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short____ne(
    Imath_Box2s_t const * this_
    , _Bool * return_
    , Imath_Box2s_t const * src);
#define Imath_Box2s__ne Imath_3_0__Box_Imath_3_0__Vec2_short____ne


/** Set the Box to be empty. A Box is empty if the mimimum is
greater than the maximum. makeEmpty() sets the mimimum to
`numeric_limits<T>::max()' and the maximum to
`numeric_limits<T>::lowest()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___makeEmpty(
    Imath_Box2s_t * this_);
#define Imath_Box2s_makeEmpty Imath_3_0__Box_Imath_3_0__Vec2_short___makeEmpty


/** Extend the Box to include the given point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___extendBy(
    Imath_Box2s_t * this_
    , Imath_V2s_t const * point);
#define Imath_Box2s_extendBy Imath_3_0__Box_Imath_3_0__Vec2_short___extendBy


/** Extend the Box to include the given box. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___extendBy_1(
    Imath_Box2s_t * this_
    , Imath_Box2s_t const * box);
#define Imath_Box2s_extendBy_1 Imath_3_0__Box_Imath_3_0__Vec2_short___extendBy_1


/** Make the box include the entire range of T. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___makeInfinite(
    Imath_Box2s_t * this_);
#define Imath_Box2s_makeInfinite Imath_3_0__Box_Imath_3_0__Vec2_short___makeInfinite


/** Return the size of the box. The size is of type `V`, defined as
`(max-min)`. An empty box has a size of `V(0)`, i.e. 0 in each dimension. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___size(
    Imath_Box2s_t const * this_
    , Imath_V2s_t * return_);
#define Imath_Box2s_size Imath_3_0__Box_Imath_3_0__Vec2_short___size


/** Return the center of the box. The center is defined as
`(max+min)/2`. The center of an empty box is undefined. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___center(
    Imath_Box2s_t const * this_
    , Imath_V2s_t * return_);
#define Imath_Box2s_center Imath_3_0__Box_Imath_3_0__Vec2_short___center


/** Return true if the given point is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___intersects(
    Imath_Box2s_t const * this_
    , _Bool * return_
    , Imath_V2s_t const * point);
#define Imath_Box2s_intersects Imath_3_0__Box_Imath_3_0__Vec2_short___intersects


/** Return true if the given box is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___intersects_1(
    Imath_Box2s_t const * this_
    , _Bool * return_
    , Imath_Box2s_t const * box);
#define Imath_Box2s_intersects_1 Imath_3_0__Box_Imath_3_0__Vec2_short___intersects_1


/** Return the major axis of the box. The major axis is the dimension with
the greatest difference between maximum and minimum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___majorAxis(
    Imath_Box2s_t const * this_
    , unsigned int * return_);
#define Imath_Box2s_majorAxis Imath_3_0__Box_Imath_3_0__Vec2_short___majorAxis


/** Return true if the box is empty, false otherwise. An empty box's
minimum is greater than its maximum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___isEmpty(
    Imath_Box2s_t const * this_
    , _Bool * return_);
#define Imath_Box2s_isEmpty Imath_3_0__Box_Imath_3_0__Vec2_short___isEmpty


/** Return true if the box is larger than a single point, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___hasVolume(
    Imath_Box2s_t const * this_
    , _Bool * return_);
#define Imath_Box2s_hasVolume Imath_3_0__Box_Imath_3_0__Vec2_short___hasVolume


/** Return true if the box contains all points, false otherwise.
An infinite box has a mimimum of `V::baseTypeMin()`
and a maximum of `V::baseTypeMax()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___isInfinite(
    Imath_Box2s_t const * this_
    , _Bool * return_);
#define Imath_Box2s_isInfinite Imath_3_0__Box_Imath_3_0__Vec2_short___isInfinite


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___copy(
    Imath_Box2s_t * this_
    , Imath_Box2s_t const * rhs);
#define Imath_Box2s_copy Imath_3_0__Box_Imath_3_0__Vec2_short___copy


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___move(
    Imath_Box2s_t * this_
    , Imath_Box2s_t * rhs);
#define Imath_Box2s_move Imath_3_0__Box_Imath_3_0__Vec2_short___move


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_short___dtor(
    Imath_Box2s_t * this_);
#define Imath_Box2s_dtor Imath_3_0__Box_Imath_3_0__Vec2_short___dtor


/** Empty by default */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___ctor(
    Imath_Box2i_t * this_);
#define Imath_Box2i_ctor Imath_3_0__Box_Imath_3_0__Vec2_int___ctor


/** Construct a bounding box that contains a single point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___ctor_1(
    Imath_Box2i_t * this_
    , Imath_V2i_t const * point);
#define Imath_Box2i_ctor_1 Imath_3_0__Box_Imath_3_0__Vec2_int___ctor_1


/** Construct a bounding box with the given minimum and maximum points */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___ctor_2(
    Imath_Box2i_t * this_
    , Imath_V2i_t const * minV
    , Imath_V2i_t const * maxV);
#define Imath_Box2i_ctor_2 Imath_3_0__Box_Imath_3_0__Vec2_int___ctor_2


/** Equality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int____eq(
    Imath_Box2i_t const * this_
    , _Bool * return_
    , Imath_Box2i_t const * src);
#define Imath_Box2i__eq Imath_3_0__Box_Imath_3_0__Vec2_int____eq


/** Inequality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int____ne(
    Imath_Box2i_t const * this_
    , _Bool * return_
    , Imath_Box2i_t const * src);
#define Imath_Box2i__ne Imath_3_0__Box_Imath_3_0__Vec2_int____ne


/** Set the Box to be empty. A Box is empty if the mimimum is
greater than the maximum. makeEmpty() sets the mimimum to
`numeric_limits<T>::max()' and the maximum to
`numeric_limits<T>::lowest()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___makeEmpty(
    Imath_Box2i_t * this_);
#define Imath_Box2i_makeEmpty Imath_3_0__Box_Imath_3_0__Vec2_int___makeEmpty


/** Extend the Box to include the given point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___extendBy(
    Imath_Box2i_t * this_
    , Imath_V2i_t const * point);
#define Imath_Box2i_extendBy Imath_3_0__Box_Imath_3_0__Vec2_int___extendBy


/** Extend the Box to include the given box. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___extendBy_1(
    Imath_Box2i_t * this_
    , Imath_Box2i_t const * box);
#define Imath_Box2i_extendBy_1 Imath_3_0__Box_Imath_3_0__Vec2_int___extendBy_1


/** Make the box include the entire range of T. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___makeInfinite(
    Imath_Box2i_t * this_);
#define Imath_Box2i_makeInfinite Imath_3_0__Box_Imath_3_0__Vec2_int___makeInfinite


/** Return the size of the box. The size is of type `V`, defined as
`(max-min)`. An empty box has a size of `V(0)`, i.e. 0 in each dimension. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___size(
    Imath_Box2i_t const * this_
    , Imath_V2i_t * return_);
#define Imath_Box2i_size Imath_3_0__Box_Imath_3_0__Vec2_int___size


/** Return the center of the box. The center is defined as
`(max+min)/2`. The center of an empty box is undefined. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___center(
    Imath_Box2i_t const * this_
    , Imath_V2i_t * return_);
#define Imath_Box2i_center Imath_3_0__Box_Imath_3_0__Vec2_int___center


/** Return true if the given point is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___intersects(
    Imath_Box2i_t const * this_
    , _Bool * return_
    , Imath_V2i_t const * point);
#define Imath_Box2i_intersects Imath_3_0__Box_Imath_3_0__Vec2_int___intersects


/** Return true if the given box is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___intersects_1(
    Imath_Box2i_t const * this_
    , _Bool * return_
    , Imath_Box2i_t const * box);
#define Imath_Box2i_intersects_1 Imath_3_0__Box_Imath_3_0__Vec2_int___intersects_1


/** Return the major axis of the box. The major axis is the dimension with
the greatest difference between maximum and minimum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___majorAxis(
    Imath_Box2i_t const * this_
    , unsigned int * return_);
#define Imath_Box2i_majorAxis Imath_3_0__Box_Imath_3_0__Vec2_int___majorAxis


/** Return true if the box is empty, false otherwise. An empty box's
minimum is greater than its maximum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___isEmpty(
    Imath_Box2i_t const * this_
    , _Bool * return_);
#define Imath_Box2i_isEmpty Imath_3_0__Box_Imath_3_0__Vec2_int___isEmpty


/** Return true if the box is larger than a single point, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___hasVolume(
    Imath_Box2i_t const * this_
    , _Bool * return_);
#define Imath_Box2i_hasVolume Imath_3_0__Box_Imath_3_0__Vec2_int___hasVolume


/** Return true if the box contains all points, false otherwise.
An infinite box has a mimimum of `V::baseTypeMin()`
and a maximum of `V::baseTypeMax()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___isInfinite(
    Imath_Box2i_t const * this_
    , _Bool * return_);
#define Imath_Box2i_isInfinite Imath_3_0__Box_Imath_3_0__Vec2_int___isInfinite


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___copy(
    Imath_Box2i_t * this_
    , Imath_Box2i_t const * rhs);
#define Imath_Box2i_copy Imath_3_0__Box_Imath_3_0__Vec2_int___copy


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___move(
    Imath_Box2i_t * this_
    , Imath_Box2i_t * rhs);
#define Imath_Box2i_move Imath_3_0__Box_Imath_3_0__Vec2_int___move


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_int___dtor(
    Imath_Box2i_t * this_);
#define Imath_Box2i_dtor Imath_3_0__Box_Imath_3_0__Vec2_int___dtor


/** Empty by default */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___ctor(
    Imath_Box2f_t * this_);
#define Imath_Box2f_ctor Imath_3_0__Box_Imath_3_0__Vec2_float___ctor


/** Construct a bounding box that contains a single point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___ctor_1(
    Imath_Box2f_t * this_
    , Imath_V2f_t const * point);
#define Imath_Box2f_ctor_1 Imath_3_0__Box_Imath_3_0__Vec2_float___ctor_1


/** Construct a bounding box with the given minimum and maximum points */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___ctor_2(
    Imath_Box2f_t * this_
    , Imath_V2f_t const * minV
    , Imath_V2f_t const * maxV);
#define Imath_Box2f_ctor_2 Imath_3_0__Box_Imath_3_0__Vec2_float___ctor_2


/** Equality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float____eq(
    Imath_Box2f_t const * this_
    , _Bool * return_
    , Imath_Box2f_t const * src);
#define Imath_Box2f__eq Imath_3_0__Box_Imath_3_0__Vec2_float____eq


/** Inequality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float____ne(
    Imath_Box2f_t const * this_
    , _Bool * return_
    , Imath_Box2f_t const * src);
#define Imath_Box2f__ne Imath_3_0__Box_Imath_3_0__Vec2_float____ne


/** Set the Box to be empty. A Box is empty if the mimimum is
greater than the maximum. makeEmpty() sets the mimimum to
`numeric_limits<T>::max()' and the maximum to
`numeric_limits<T>::lowest()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___makeEmpty(
    Imath_Box2f_t * this_);
#define Imath_Box2f_makeEmpty Imath_3_0__Box_Imath_3_0__Vec2_float___makeEmpty


/** Extend the Box to include the given point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___extendBy(
    Imath_Box2f_t * this_
    , Imath_V2f_t const * point);
#define Imath_Box2f_extendBy Imath_3_0__Box_Imath_3_0__Vec2_float___extendBy


/** Extend the Box to include the given box. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___extendBy_1(
    Imath_Box2f_t * this_
    , Imath_Box2f_t const * box);
#define Imath_Box2f_extendBy_1 Imath_3_0__Box_Imath_3_0__Vec2_float___extendBy_1


/** Make the box include the entire range of T. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___makeInfinite(
    Imath_Box2f_t * this_);
#define Imath_Box2f_makeInfinite Imath_3_0__Box_Imath_3_0__Vec2_float___makeInfinite


/** Return the size of the box. The size is of type `V`, defined as
`(max-min)`. An empty box has a size of `V(0)`, i.e. 0 in each dimension. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___size(
    Imath_Box2f_t const * this_
    , Imath_V2f_t * return_);
#define Imath_Box2f_size Imath_3_0__Box_Imath_3_0__Vec2_float___size


/** Return the center of the box. The center is defined as
`(max+min)/2`. The center of an empty box is undefined. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___center(
    Imath_Box2f_t const * this_
    , Imath_V2f_t * return_);
#define Imath_Box2f_center Imath_3_0__Box_Imath_3_0__Vec2_float___center


/** Return true if the given point is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___intersects(
    Imath_Box2f_t const * this_
    , _Bool * return_
    , Imath_V2f_t const * point);
#define Imath_Box2f_intersects Imath_3_0__Box_Imath_3_0__Vec2_float___intersects


/** Return true if the given box is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___intersects_1(
    Imath_Box2f_t const * this_
    , _Bool * return_
    , Imath_Box2f_t const * box);
#define Imath_Box2f_intersects_1 Imath_3_0__Box_Imath_3_0__Vec2_float___intersects_1


/** Return the major axis of the box. The major axis is the dimension with
the greatest difference between maximum and minimum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___majorAxis(
    Imath_Box2f_t const * this_
    , unsigned int * return_);
#define Imath_Box2f_majorAxis Imath_3_0__Box_Imath_3_0__Vec2_float___majorAxis


/** Return true if the box is empty, false otherwise. An empty box's
minimum is greater than its maximum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___isEmpty(
    Imath_Box2f_t const * this_
    , _Bool * return_);
#define Imath_Box2f_isEmpty Imath_3_0__Box_Imath_3_0__Vec2_float___isEmpty


/** Return true if the box is larger than a single point, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___hasVolume(
    Imath_Box2f_t const * this_
    , _Bool * return_);
#define Imath_Box2f_hasVolume Imath_3_0__Box_Imath_3_0__Vec2_float___hasVolume


/** Return true if the box contains all points, false otherwise.
An infinite box has a mimimum of `V::baseTypeMin()`
and a maximum of `V::baseTypeMax()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___isInfinite(
    Imath_Box2f_t const * this_
    , _Bool * return_);
#define Imath_Box2f_isInfinite Imath_3_0__Box_Imath_3_0__Vec2_float___isInfinite


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___copy(
    Imath_Box2f_t * this_
    , Imath_Box2f_t const * rhs);
#define Imath_Box2f_copy Imath_3_0__Box_Imath_3_0__Vec2_float___copy


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___move(
    Imath_Box2f_t * this_
    , Imath_Box2f_t * rhs);
#define Imath_Box2f_move Imath_3_0__Box_Imath_3_0__Vec2_float___move


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_float___dtor(
    Imath_Box2f_t * this_);
#define Imath_Box2f_dtor Imath_3_0__Box_Imath_3_0__Vec2_float___dtor


/** Empty by default */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___ctor(
    Imath_Box2d_t * this_);
#define Imath_Box2d_ctor Imath_3_0__Box_Imath_3_0__Vec2_double___ctor


/** Construct a bounding box that contains a single point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___ctor_1(
    Imath_Box2d_t * this_
    , Imath_V2d_t const * point);
#define Imath_Box2d_ctor_1 Imath_3_0__Box_Imath_3_0__Vec2_double___ctor_1


/** Construct a bounding box with the given minimum and maximum points */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___ctor_2(
    Imath_Box2d_t * this_
    , Imath_V2d_t const * minV
    , Imath_V2d_t const * maxV);
#define Imath_Box2d_ctor_2 Imath_3_0__Box_Imath_3_0__Vec2_double___ctor_2


/** Equality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double____eq(
    Imath_Box2d_t const * this_
    , _Bool * return_
    , Imath_Box2d_t const * src);
#define Imath_Box2d__eq Imath_3_0__Box_Imath_3_0__Vec2_double____eq


/** Inequality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double____ne(
    Imath_Box2d_t const * this_
    , _Bool * return_
    , Imath_Box2d_t const * src);
#define Imath_Box2d__ne Imath_3_0__Box_Imath_3_0__Vec2_double____ne


/** Set the Box to be empty. A Box is empty if the mimimum is
greater than the maximum. makeEmpty() sets the mimimum to
`numeric_limits<T>::max()' and the maximum to
`numeric_limits<T>::lowest()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___makeEmpty(
    Imath_Box2d_t * this_);
#define Imath_Box2d_makeEmpty Imath_3_0__Box_Imath_3_0__Vec2_double___makeEmpty


/** Extend the Box to include the given point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___extendBy(
    Imath_Box2d_t * this_
    , Imath_V2d_t const * point);
#define Imath_Box2d_extendBy Imath_3_0__Box_Imath_3_0__Vec2_double___extendBy


/** Extend the Box to include the given box. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___extendBy_1(
    Imath_Box2d_t * this_
    , Imath_Box2d_t const * box);
#define Imath_Box2d_extendBy_1 Imath_3_0__Box_Imath_3_0__Vec2_double___extendBy_1


/** Make the box include the entire range of T. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___makeInfinite(
    Imath_Box2d_t * this_);
#define Imath_Box2d_makeInfinite Imath_3_0__Box_Imath_3_0__Vec2_double___makeInfinite


/** Return the size of the box. The size is of type `V`, defined as
`(max-min)`. An empty box has a size of `V(0)`, i.e. 0 in each dimension. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___size(
    Imath_Box2d_t const * this_
    , Imath_V2d_t * return_);
#define Imath_Box2d_size Imath_3_0__Box_Imath_3_0__Vec2_double___size


/** Return the center of the box. The center is defined as
`(max+min)/2`. The center of an empty box is undefined. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___center(
    Imath_Box2d_t const * this_
    , Imath_V2d_t * return_);
#define Imath_Box2d_center Imath_3_0__Box_Imath_3_0__Vec2_double___center


/** Return true if the given point is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___intersects(
    Imath_Box2d_t const * this_
    , _Bool * return_
    , Imath_V2d_t const * point);
#define Imath_Box2d_intersects Imath_3_0__Box_Imath_3_0__Vec2_double___intersects


/** Return true if the given box is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___intersects_1(
    Imath_Box2d_t const * this_
    , _Bool * return_
    , Imath_Box2d_t const * box);
#define Imath_Box2d_intersects_1 Imath_3_0__Box_Imath_3_0__Vec2_double___intersects_1


/** Return the major axis of the box. The major axis is the dimension with
the greatest difference between maximum and minimum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___majorAxis(
    Imath_Box2d_t const * this_
    , unsigned int * return_);
#define Imath_Box2d_majorAxis Imath_3_0__Box_Imath_3_0__Vec2_double___majorAxis


/** Return true if the box is empty, false otherwise. An empty box's
minimum is greater than its maximum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___isEmpty(
    Imath_Box2d_t const * this_
    , _Bool * return_);
#define Imath_Box2d_isEmpty Imath_3_0__Box_Imath_3_0__Vec2_double___isEmpty


/** Return true if the box is larger than a single point, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___hasVolume(
    Imath_Box2d_t const * this_
    , _Bool * return_);
#define Imath_Box2d_hasVolume Imath_3_0__Box_Imath_3_0__Vec2_double___hasVolume


/** Return true if the box contains all points, false otherwise.
An infinite box has a mimimum of `V::baseTypeMin()`
and a maximum of `V::baseTypeMax()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___isInfinite(
    Imath_Box2d_t const * this_
    , _Bool * return_);
#define Imath_Box2d_isInfinite Imath_3_0__Box_Imath_3_0__Vec2_double___isInfinite


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___copy(
    Imath_Box2d_t * this_
    , Imath_Box2d_t const * rhs);
#define Imath_Box2d_copy Imath_3_0__Box_Imath_3_0__Vec2_double___copy


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___move(
    Imath_Box2d_t * this_
    , Imath_Box2d_t * rhs);
#define Imath_Box2d_move Imath_3_0__Box_Imath_3_0__Vec2_double___move


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec2_double___dtor(
    Imath_Box2d_t * this_);
#define Imath_Box2d_dtor Imath_3_0__Box_Imath_3_0__Vec2_double___dtor


/** Empty by default */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___ctor(
    Imath_Box3s_t * this_);
#define Imath_Box3s_ctor Imath_3_0__Box_Imath_3_0__Vec3_short___ctor


/** Construct a bounding box that contains a single point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___ctor_1(
    Imath_Box3s_t * this_
    , Imath_V3s_t const * point);
#define Imath_Box3s_ctor_1 Imath_3_0__Box_Imath_3_0__Vec3_short___ctor_1


/** Construct a bounding box with the given minimum and maximum points */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___ctor_2(
    Imath_Box3s_t * this_
    , Imath_V3s_t const * minV
    , Imath_V3s_t const * maxV);
#define Imath_Box3s_ctor_2 Imath_3_0__Box_Imath_3_0__Vec3_short___ctor_2


/** Equality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short____eq(
    Imath_Box3s_t const * this_
    , _Bool * return_
    , Imath_Box3s_t const * src);
#define Imath_Box3s__eq Imath_3_0__Box_Imath_3_0__Vec3_short____eq


/** Inequality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short____ne(
    Imath_Box3s_t const * this_
    , _Bool * return_
    , Imath_Box3s_t const * src);
#define Imath_Box3s__ne Imath_3_0__Box_Imath_3_0__Vec3_short____ne


/** Set the Box to be empty. A Box is empty if the mimimum is
greater than the maximum. makeEmpty() sets the mimimum to
`numeric_limits<T>::max()` and the maximum to
`numeric_limits<T>::lowest()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___makeEmpty(
    Imath_Box3s_t * this_);
#define Imath_Box3s_makeEmpty Imath_3_0__Box_Imath_3_0__Vec3_short___makeEmpty


/** Extend the Box to include the given point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___extendBy(
    Imath_Box3s_t * this_
    , Imath_V3s_t const * point);
#define Imath_Box3s_extendBy Imath_3_0__Box_Imath_3_0__Vec3_short___extendBy


/** Extend the Box to include the given box. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___extendBy_1(
    Imath_Box3s_t * this_
    , Imath_Box3s_t const * box);
#define Imath_Box3s_extendBy_1 Imath_3_0__Box_Imath_3_0__Vec3_short___extendBy_1


/** Make the box include the entire range of T. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___makeInfinite(
    Imath_Box3s_t * this_);
#define Imath_Box3s_makeInfinite Imath_3_0__Box_Imath_3_0__Vec3_short___makeInfinite


/** Return the size of the box. The size is of type `V`, defined as
(max-min). An empty box has a size of V(0), i.e. 0 in each dimension. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___size(
    Imath_Box3s_t const * this_
    , Imath_V3s_t * return_);
#define Imath_Box3s_size Imath_3_0__Box_Imath_3_0__Vec3_short___size


/** Return the center of the box. The center is defined as
(max+min)/2. The center of an empty box is undefined. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___center(
    Imath_Box3s_t const * this_
    , Imath_V3s_t * return_);
#define Imath_Box3s_center Imath_3_0__Box_Imath_3_0__Vec3_short___center


/** Return true if the given point is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___intersects(
    Imath_Box3s_t const * this_
    , _Bool * return_
    , Imath_V3s_t const * point);
#define Imath_Box3s_intersects Imath_3_0__Box_Imath_3_0__Vec3_short___intersects


/** Return true if the given box is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___intersects_1(
    Imath_Box3s_t const * this_
    , _Bool * return_
    , Imath_Box3s_t const * box);
#define Imath_Box3s_intersects_1 Imath_3_0__Box_Imath_3_0__Vec3_short___intersects_1


/** Return the major axis of the box. The major axis is the dimension with
the greatest difference between maximum and minimum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___majorAxis(
    Imath_Box3s_t const * this_
    , unsigned int * return_);
#define Imath_Box3s_majorAxis Imath_3_0__Box_Imath_3_0__Vec3_short___majorAxis


/** Return true if the box is empty, false otherwise. An empty box's
minimum is greater than its maximum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___isEmpty(
    Imath_Box3s_t const * this_
    , _Bool * return_);
#define Imath_Box3s_isEmpty Imath_3_0__Box_Imath_3_0__Vec3_short___isEmpty


/** Return true if the box is larger than a single point, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___hasVolume(
    Imath_Box3s_t const * this_
    , _Bool * return_);
#define Imath_Box3s_hasVolume Imath_3_0__Box_Imath_3_0__Vec3_short___hasVolume


/** Return true if the box contains all points, false otherwise.
An infinite box has a mimimum of`V::baseTypeMin()`
and a maximum of `V::baseTypeMax()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___isInfinite(
    Imath_Box3s_t const * this_
    , _Bool * return_);
#define Imath_Box3s_isInfinite Imath_3_0__Box_Imath_3_0__Vec3_short___isInfinite


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___copy(
    Imath_Box3s_t * this_
    , Imath_Box3s_t const * rhs);
#define Imath_Box3s_copy Imath_3_0__Box_Imath_3_0__Vec3_short___copy


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___move(
    Imath_Box3s_t * this_
    , Imath_Box3s_t * rhs);
#define Imath_Box3s_move Imath_3_0__Box_Imath_3_0__Vec3_short___move


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_short___dtor(
    Imath_Box3s_t * this_);
#define Imath_Box3s_dtor Imath_3_0__Box_Imath_3_0__Vec3_short___dtor


/** Empty by default */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___ctor(
    Imath_Box3i_t * this_);
#define Imath_Box3i_ctor Imath_3_0__Box_Imath_3_0__Vec3_int___ctor


/** Construct a bounding box that contains a single point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___ctor_1(
    Imath_Box3i_t * this_
    , Imath_V3i_t const * point);
#define Imath_Box3i_ctor_1 Imath_3_0__Box_Imath_3_0__Vec3_int___ctor_1


/** Construct a bounding box with the given minimum and maximum points */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___ctor_2(
    Imath_Box3i_t * this_
    , Imath_V3i_t const * minV
    , Imath_V3i_t const * maxV);
#define Imath_Box3i_ctor_2 Imath_3_0__Box_Imath_3_0__Vec3_int___ctor_2


/** Equality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int____eq(
    Imath_Box3i_t const * this_
    , _Bool * return_
    , Imath_Box3i_t const * src);
#define Imath_Box3i__eq Imath_3_0__Box_Imath_3_0__Vec3_int____eq


/** Inequality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int____ne(
    Imath_Box3i_t const * this_
    , _Bool * return_
    , Imath_Box3i_t const * src);
#define Imath_Box3i__ne Imath_3_0__Box_Imath_3_0__Vec3_int____ne


/** Set the Box to be empty. A Box is empty if the mimimum is
greater than the maximum. makeEmpty() sets the mimimum to
`numeric_limits<T>::max()` and the maximum to
`numeric_limits<T>::lowest()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___makeEmpty(
    Imath_Box3i_t * this_);
#define Imath_Box3i_makeEmpty Imath_3_0__Box_Imath_3_0__Vec3_int___makeEmpty


/** Extend the Box to include the given point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___extendBy(
    Imath_Box3i_t * this_
    , Imath_V3i_t const * point);
#define Imath_Box3i_extendBy Imath_3_0__Box_Imath_3_0__Vec3_int___extendBy


/** Extend the Box to include the given box. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___extendBy_1(
    Imath_Box3i_t * this_
    , Imath_Box3i_t const * box);
#define Imath_Box3i_extendBy_1 Imath_3_0__Box_Imath_3_0__Vec3_int___extendBy_1


/** Make the box include the entire range of T. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___makeInfinite(
    Imath_Box3i_t * this_);
#define Imath_Box3i_makeInfinite Imath_3_0__Box_Imath_3_0__Vec3_int___makeInfinite


/** Return the size of the box. The size is of type `V`, defined as
(max-min). An empty box has a size of V(0), i.e. 0 in each dimension. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___size(
    Imath_Box3i_t const * this_
    , Imath_V3i_t * return_);
#define Imath_Box3i_size Imath_3_0__Box_Imath_3_0__Vec3_int___size


/** Return the center of the box. The center is defined as
(max+min)/2. The center of an empty box is undefined. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___center(
    Imath_Box3i_t const * this_
    , Imath_V3i_t * return_);
#define Imath_Box3i_center Imath_3_0__Box_Imath_3_0__Vec3_int___center


/** Return true if the given point is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___intersects(
    Imath_Box3i_t const * this_
    , _Bool * return_
    , Imath_V3i_t const * point);
#define Imath_Box3i_intersects Imath_3_0__Box_Imath_3_0__Vec3_int___intersects


/** Return true if the given box is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___intersects_1(
    Imath_Box3i_t const * this_
    , _Bool * return_
    , Imath_Box3i_t const * box);
#define Imath_Box3i_intersects_1 Imath_3_0__Box_Imath_3_0__Vec3_int___intersects_1


/** Return the major axis of the box. The major axis is the dimension with
the greatest difference between maximum and minimum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___majorAxis(
    Imath_Box3i_t const * this_
    , unsigned int * return_);
#define Imath_Box3i_majorAxis Imath_3_0__Box_Imath_3_0__Vec3_int___majorAxis


/** Return true if the box is empty, false otherwise. An empty box's
minimum is greater than its maximum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___isEmpty(
    Imath_Box3i_t const * this_
    , _Bool * return_);
#define Imath_Box3i_isEmpty Imath_3_0__Box_Imath_3_0__Vec3_int___isEmpty


/** Return true if the box is larger than a single point, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___hasVolume(
    Imath_Box3i_t const * this_
    , _Bool * return_);
#define Imath_Box3i_hasVolume Imath_3_0__Box_Imath_3_0__Vec3_int___hasVolume


/** Return true if the box contains all points, false otherwise.
An infinite box has a mimimum of`V::baseTypeMin()`
and a maximum of `V::baseTypeMax()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___isInfinite(
    Imath_Box3i_t const * this_
    , _Bool * return_);
#define Imath_Box3i_isInfinite Imath_3_0__Box_Imath_3_0__Vec3_int___isInfinite


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___copy(
    Imath_Box3i_t * this_
    , Imath_Box3i_t const * rhs);
#define Imath_Box3i_copy Imath_3_0__Box_Imath_3_0__Vec3_int___copy


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___move(
    Imath_Box3i_t * this_
    , Imath_Box3i_t * rhs);
#define Imath_Box3i_move Imath_3_0__Box_Imath_3_0__Vec3_int___move


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_int___dtor(
    Imath_Box3i_t * this_);
#define Imath_Box3i_dtor Imath_3_0__Box_Imath_3_0__Vec3_int___dtor


/** Empty by default */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___ctor(
    Imath_Box3f_t * this_);
#define Imath_Box3f_ctor Imath_3_0__Box_Imath_3_0__Vec3_float___ctor


/** Construct a bounding box that contains a single point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___ctor_1(
    Imath_Box3f_t * this_
    , Imath_V3f_t const * point);
#define Imath_Box3f_ctor_1 Imath_3_0__Box_Imath_3_0__Vec3_float___ctor_1


/** Construct a bounding box with the given minimum and maximum points */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___ctor_2(
    Imath_Box3f_t * this_
    , Imath_V3f_t const * minV
    , Imath_V3f_t const * maxV);
#define Imath_Box3f_ctor_2 Imath_3_0__Box_Imath_3_0__Vec3_float___ctor_2


/** Equality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float____eq(
    Imath_Box3f_t const * this_
    , _Bool * return_
    , Imath_Box3f_t const * src);
#define Imath_Box3f__eq Imath_3_0__Box_Imath_3_0__Vec3_float____eq


/** Inequality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float____ne(
    Imath_Box3f_t const * this_
    , _Bool * return_
    , Imath_Box3f_t const * src);
#define Imath_Box3f__ne Imath_3_0__Box_Imath_3_0__Vec3_float____ne


/** Set the Box to be empty. A Box is empty if the mimimum is
greater than the maximum. makeEmpty() sets the mimimum to
`numeric_limits<T>::max()` and the maximum to
`numeric_limits<T>::lowest()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___makeEmpty(
    Imath_Box3f_t * this_);
#define Imath_Box3f_makeEmpty Imath_3_0__Box_Imath_3_0__Vec3_float___makeEmpty


/** Extend the Box to include the given point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___extendBy(
    Imath_Box3f_t * this_
    , Imath_V3f_t const * point);
#define Imath_Box3f_extendBy Imath_3_0__Box_Imath_3_0__Vec3_float___extendBy


/** Extend the Box to include the given box. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___extendBy_1(
    Imath_Box3f_t * this_
    , Imath_Box3f_t const * box);
#define Imath_Box3f_extendBy_1 Imath_3_0__Box_Imath_3_0__Vec3_float___extendBy_1


/** Make the box include the entire range of T. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___makeInfinite(
    Imath_Box3f_t * this_);
#define Imath_Box3f_makeInfinite Imath_3_0__Box_Imath_3_0__Vec3_float___makeInfinite


/** Return the size of the box. The size is of type `V`, defined as
(max-min). An empty box has a size of V(0), i.e. 0 in each dimension. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___size(
    Imath_Box3f_t const * this_
    , Imath_V3f_t * return_);
#define Imath_Box3f_size Imath_3_0__Box_Imath_3_0__Vec3_float___size


/** Return the center of the box. The center is defined as
(max+min)/2. The center of an empty box is undefined. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___center(
    Imath_Box3f_t const * this_
    , Imath_V3f_t * return_);
#define Imath_Box3f_center Imath_3_0__Box_Imath_3_0__Vec3_float___center


/** Return true if the given point is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___intersects(
    Imath_Box3f_t const * this_
    , _Bool * return_
    , Imath_V3f_t const * point);
#define Imath_Box3f_intersects Imath_3_0__Box_Imath_3_0__Vec3_float___intersects


/** Return true if the given box is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___intersects_1(
    Imath_Box3f_t const * this_
    , _Bool * return_
    , Imath_Box3f_t const * box);
#define Imath_Box3f_intersects_1 Imath_3_0__Box_Imath_3_0__Vec3_float___intersects_1


/** Return the major axis of the box. The major axis is the dimension with
the greatest difference between maximum and minimum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___majorAxis(
    Imath_Box3f_t const * this_
    , unsigned int * return_);
#define Imath_Box3f_majorAxis Imath_3_0__Box_Imath_3_0__Vec3_float___majorAxis


/** Return true if the box is empty, false otherwise. An empty box's
minimum is greater than its maximum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___isEmpty(
    Imath_Box3f_t const * this_
    , _Bool * return_);
#define Imath_Box3f_isEmpty Imath_3_0__Box_Imath_3_0__Vec3_float___isEmpty


/** Return true if the box is larger than a single point, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___hasVolume(
    Imath_Box3f_t const * this_
    , _Bool * return_);
#define Imath_Box3f_hasVolume Imath_3_0__Box_Imath_3_0__Vec3_float___hasVolume


/** Return true if the box contains all points, false otherwise.
An infinite box has a mimimum of`V::baseTypeMin()`
and a maximum of `V::baseTypeMax()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___isInfinite(
    Imath_Box3f_t const * this_
    , _Bool * return_);
#define Imath_Box3f_isInfinite Imath_3_0__Box_Imath_3_0__Vec3_float___isInfinite


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___copy(
    Imath_Box3f_t * this_
    , Imath_Box3f_t const * rhs);
#define Imath_Box3f_copy Imath_3_0__Box_Imath_3_0__Vec3_float___copy


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___move(
    Imath_Box3f_t * this_
    , Imath_Box3f_t * rhs);
#define Imath_Box3f_move Imath_3_0__Box_Imath_3_0__Vec3_float___move


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_float___dtor(
    Imath_Box3f_t * this_);
#define Imath_Box3f_dtor Imath_3_0__Box_Imath_3_0__Vec3_float___dtor


/** Empty by default */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___ctor(
    Imath_Box3d_t * this_);
#define Imath_Box3d_ctor Imath_3_0__Box_Imath_3_0__Vec3_double___ctor


/** Construct a bounding box that contains a single point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___ctor_1(
    Imath_Box3d_t * this_
    , Imath_V3d_t const * point);
#define Imath_Box3d_ctor_1 Imath_3_0__Box_Imath_3_0__Vec3_double___ctor_1


/** Construct a bounding box with the given minimum and maximum points */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___ctor_2(
    Imath_Box3d_t * this_
    , Imath_V3d_t const * minV
    , Imath_V3d_t const * maxV);
#define Imath_Box3d_ctor_2 Imath_3_0__Box_Imath_3_0__Vec3_double___ctor_2


/** Equality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double____eq(
    Imath_Box3d_t const * this_
    , _Bool * return_
    , Imath_Box3d_t const * src);
#define Imath_Box3d__eq Imath_3_0__Box_Imath_3_0__Vec3_double____eq


/** Inequality */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double____ne(
    Imath_Box3d_t const * this_
    , _Bool * return_
    , Imath_Box3d_t const * src);
#define Imath_Box3d__ne Imath_3_0__Box_Imath_3_0__Vec3_double____ne


/** Set the Box to be empty. A Box is empty if the mimimum is
greater than the maximum. makeEmpty() sets the mimimum to
`numeric_limits<T>::max()` and the maximum to
`numeric_limits<T>::lowest()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___makeEmpty(
    Imath_Box3d_t * this_);
#define Imath_Box3d_makeEmpty Imath_3_0__Box_Imath_3_0__Vec3_double___makeEmpty


/** Extend the Box to include the given point. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___extendBy(
    Imath_Box3d_t * this_
    , Imath_V3d_t const * point);
#define Imath_Box3d_extendBy Imath_3_0__Box_Imath_3_0__Vec3_double___extendBy


/** Extend the Box to include the given box. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___extendBy_1(
    Imath_Box3d_t * this_
    , Imath_Box3d_t const * box);
#define Imath_Box3d_extendBy_1 Imath_3_0__Box_Imath_3_0__Vec3_double___extendBy_1


/** Make the box include the entire range of T. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___makeInfinite(
    Imath_Box3d_t * this_);
#define Imath_Box3d_makeInfinite Imath_3_0__Box_Imath_3_0__Vec3_double___makeInfinite


/** Return the size of the box. The size is of type `V`, defined as
(max-min). An empty box has a size of V(0), i.e. 0 in each dimension. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___size(
    Imath_Box3d_t const * this_
    , Imath_V3d_t * return_);
#define Imath_Box3d_size Imath_3_0__Box_Imath_3_0__Vec3_double___size


/** Return the center of the box. The center is defined as
(max+min)/2. The center of an empty box is undefined. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___center(
    Imath_Box3d_t const * this_
    , Imath_V3d_t * return_);
#define Imath_Box3d_center Imath_3_0__Box_Imath_3_0__Vec3_double___center


/** Return true if the given point is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___intersects(
    Imath_Box3d_t const * this_
    , _Bool * return_
    , Imath_V3d_t const * point);
#define Imath_Box3d_intersects Imath_3_0__Box_Imath_3_0__Vec3_double___intersects


/** Return true if the given box is inside the box, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___intersects_1(
    Imath_Box3d_t const * this_
    , _Bool * return_
    , Imath_Box3d_t const * box);
#define Imath_Box3d_intersects_1 Imath_3_0__Box_Imath_3_0__Vec3_double___intersects_1


/** Return the major axis of the box. The major axis is the dimension with
the greatest difference between maximum and minimum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___majorAxis(
    Imath_Box3d_t const * this_
    , unsigned int * return_);
#define Imath_Box3d_majorAxis Imath_3_0__Box_Imath_3_0__Vec3_double___majorAxis


/** Return true if the box is empty, false otherwise. An empty box's
minimum is greater than its maximum. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___isEmpty(
    Imath_Box3d_t const * this_
    , _Bool * return_);
#define Imath_Box3d_isEmpty Imath_3_0__Box_Imath_3_0__Vec3_double___isEmpty


/** Return true if the box is larger than a single point, false otherwise. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___hasVolume(
    Imath_Box3d_t const * this_
    , _Bool * return_);
#define Imath_Box3d_hasVolume Imath_3_0__Box_Imath_3_0__Vec3_double___hasVolume


/** Return true if the box contains all points, false otherwise.
An infinite box has a mimimum of`V::baseTypeMin()`
and a maximum of `V::baseTypeMax()`. */
OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___isInfinite(
    Imath_Box3d_t const * this_
    , _Bool * return_);
#define Imath_Box3d_isInfinite Imath_3_0__Box_Imath_3_0__Vec3_double___isInfinite


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___copy(
    Imath_Box3d_t * this_
    , Imath_Box3d_t const * rhs);
#define Imath_Box3d_copy Imath_3_0__Box_Imath_3_0__Vec3_double___copy


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___move(
    Imath_Box3d_t * this_
    , Imath_Box3d_t * rhs);
#define Imath_Box3d_move Imath_3_0__Box_Imath_3_0__Vec3_double___move


OPENEXR_API unsigned int Imath_3_0__Box_Imath_3_0__Vec3_double___dtor(
    Imath_Box3d_t * this_);
#define Imath_Box3d_dtor Imath_3_0__Box_Imath_3_0__Vec3_double___dtor


#ifdef __cplusplus
}
#endif

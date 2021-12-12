#pragma once
#include "openexr-api-export.h"

#include <imf_pixeltype.h>
#include <imf_tiledescription.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imath_3_0__Box_Imath_3_0__Vec2_int___t_s Imath_3_0__Box_Imath_3_0__Vec2_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_int___t Imath_Box2i_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct Imf_3_0__FlatImageLevel_t_s Imf_3_0__FlatImageLevel_t;
typedef Imf_3_0__FlatImageLevel_t Imf_FlatImageLevel_t;

typedef struct Imf_3_0__FlatImage_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__FlatImage_t;
typedef Imf_3_0__FlatImage_t Imf_FlatImage_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_levelMode(
    Imf_FlatImage_t const * this_
    , Imf_LevelMode * return_);
#define Imf_FlatImage_levelMode Imf_3_0__FlatImage_levelMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_levelRoundingMode(
    Imf_FlatImage_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_FlatImage_levelRoundingMode Imf_3_0__FlatImage_levelRoundingMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_numLevels(
    Imf_FlatImage_t const * this_
    , int * return_);
#define Imf_FlatImage_numLevels Imf_3_0__FlatImage_numLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_numXLevels(
    Imf_FlatImage_t const * this_
    , int * return_);
#define Imf_FlatImage_numXLevels Imf_3_0__FlatImage_numXLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_numYLevels(
    Imf_FlatImage_t const * this_
    , int * return_);
#define Imf_FlatImage_numYLevels Imf_3_0__FlatImage_numYLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_dataWindow(
    Imf_FlatImage_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_FlatImage_dataWindow Imf_3_0__FlatImage_dataWindow


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_dataWindowForLevel(
    Imf_FlatImage_t const * this_
    , Imath_Box2i_t const * * return_
    , int lx
    , int ly);
#define Imf_FlatImage_dataWindowForLevel Imf_3_0__FlatImage_dataWindowForLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_levelWidth(
    Imf_FlatImage_t const * this_
    , int * return_
    , int lx);
#define Imf_FlatImage_levelWidth Imf_3_0__FlatImage_levelWidth


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_levelHeight(
    Imf_FlatImage_t const * this_
    , int * return_
    , int ly);
#define Imf_FlatImage_levelHeight Imf_3_0__FlatImage_levelHeight


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_resize(
    Imf_FlatImage_t * this_
    , Imath_Box2i_t const * dataWindow
    , Imf_LevelMode levelMode
    , Imf_LevelRoundingMode levelRoundingMode);
#define Imf_FlatImage_resize Imf_3_0__FlatImage_resize


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_shiftPixels(
    Imf_FlatImage_t * this_
    , int dx
    , int dy);
#define Imf_FlatImage_shiftPixels Imf_3_0__FlatImage_shiftPixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_insertChannel(
    Imf_FlatImage_t * this_
    , std_string_t const * name
    , Imf_PixelType type
    , int xSampling
    , int ySampling
    , _Bool pLinear);
#define Imf_FlatImage_insertChannel Imf_3_0__FlatImage_insertChannel


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_eraseChannel(
    Imf_FlatImage_t * this_
    , std_string_t const * name);
#define Imf_FlatImage_eraseChannel Imf_3_0__FlatImage_eraseChannel


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_clearChannels(
    Imf_FlatImage_t * this_);
#define Imf_FlatImage_clearChannels Imf_3_0__FlatImage_clearChannels


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_renameChannel(
    Imf_FlatImage_t * this_
    , std_string_t const * oldName
    , std_string_t const * newName);
#define Imf_FlatImage_renameChannel Imf_3_0__FlatImage_renameChannel


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_default(
    Imf_FlatImage_t * * this_);
#define Imf_FlatImage_default Imf_3_0__FlatImage_default


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_ctor(
    Imf_FlatImage_t * * this_
    , Imath_Box2i_t const * dataWindow
    , Imf_LevelMode levelMode
    , Imf_LevelRoundingMode levelRoundingMode);
#define Imf_FlatImage_ctor Imf_3_0__FlatImage_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_dtor(
    Imf_FlatImage_t * this_);
#define Imf_FlatImage_dtor Imf_3_0__FlatImage_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_level(
    Imf_FlatImage_t * this_
    , Imf_FlatImageLevel_t * * return_
    , int lx
    , int ly);
#define Imf_FlatImage_level Imf_3_0__FlatImage_level


OPENEXR_CPPMM_API unsigned int Imf_3_0__FlatImage_level_const(
    Imf_FlatImage_t const * this_
    , Imf_FlatImageLevel_t const * * return_
    , int lx
    , int ly);
#define Imf_FlatImage_level_const Imf_3_0__FlatImage_level_const


#ifdef __cplusplus
}
#endif

#pragma once
#include "openexr-api-export.h"

#include <imf_pixeltype.h>
#include <imf_tiledescription.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__map_std__string_std__string__t_s std__map_std__string_std__string__t;
typedef std__map_std__string_std__string__t std_map_string_string_t;
typedef struct Imath_3_0__Box_Imath_3_0__Vec2_int___t_s Imath_3_0__Box_Imath_3_0__Vec2_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_int___t Imath_Box2i_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct Imf_3_0__DeepImageLevel_t_s Imf_3_0__DeepImageLevel_t;
typedef Imf_3_0__DeepImageLevel_t Imf_DeepImageLevel_t;

typedef struct Imf_3_0__DeepImage_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__DeepImage_t;
typedef Imf_3_0__DeepImage_t Imf_DeepImage_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_levelMode(
    Imf_DeepImage_t const * this_
    , Imf_LevelMode * return_);
#define Imf_DeepImage_levelMode Imf_3_0__DeepImage_levelMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_levelRoundingMode(
    Imf_DeepImage_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_DeepImage_levelRoundingMode Imf_3_0__DeepImage_levelRoundingMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_numLevels(
    Imf_DeepImage_t const * this_
    , int * return_);
#define Imf_DeepImage_numLevels Imf_3_0__DeepImage_numLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_numXLevels(
    Imf_DeepImage_t const * this_
    , int * return_);
#define Imf_DeepImage_numXLevels Imf_3_0__DeepImage_numXLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_numYLevels(
    Imf_DeepImage_t const * this_
    , int * return_);
#define Imf_DeepImage_numYLevels Imf_3_0__DeepImage_numYLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_dataWindow(
    Imf_DeepImage_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_DeepImage_dataWindow Imf_3_0__DeepImage_dataWindow


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_dataWindowForLevel(
    Imf_DeepImage_t const * this_
    , Imath_Box2i_t const * * return_
    , int lx
    , int ly);
#define Imf_DeepImage_dataWindowForLevel Imf_3_0__DeepImage_dataWindowForLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_levelWidth(
    Imf_DeepImage_t const * this_
    , int * return_
    , int lx);
#define Imf_DeepImage_levelWidth Imf_3_0__DeepImage_levelWidth


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_levelHeight(
    Imf_DeepImage_t const * this_
    , int * return_
    , int ly);
#define Imf_DeepImage_levelHeight Imf_3_0__DeepImage_levelHeight


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_resize(
    Imf_DeepImage_t * this_
    , Imath_Box2i_t const * dataWindow
    , Imf_LevelMode levelMode
    , Imf_LevelRoundingMode levelRoundingMode);
#define Imf_DeepImage_resize Imf_3_0__DeepImage_resize


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_shiftPixels(
    Imf_DeepImage_t * this_
    , int dx
    , int dy);
#define Imf_DeepImage_shiftPixels Imf_3_0__DeepImage_shiftPixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_insertChannel(
    Imf_DeepImage_t * this_
    , std_string_t const * name
    , Imf_PixelType type
    , int xSamplingt
    , int ySampling
    , _Bool pLinear);
#define Imf_DeepImage_insertChannel Imf_3_0__DeepImage_insertChannel


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_eraseChannel(
    Imf_DeepImage_t * this_
    , std_string_t const * name);
#define Imf_DeepImage_eraseChannel Imf_3_0__DeepImage_eraseChannel


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_clearChannels(
    Imf_DeepImage_t * this_);
#define Imf_DeepImage_clearChannels Imf_3_0__DeepImage_clearChannels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_renameChannel(
    Imf_DeepImage_t * this_
    , std_string_t const * oldName
    , std_string_t const * newName);
#define Imf_DeepImage_renameChannel Imf_3_0__DeepImage_renameChannel


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_renameChannels(
    Imf_DeepImage_t * this_
    , std_map_string_string_t const * oldToNewNames);
#define Imf_DeepImage_renameChannels Imf_3_0__DeepImage_renameChannels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_default(
    Imf_DeepImage_t * * this_);
#define Imf_DeepImage_default Imf_3_0__DeepImage_default


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_ctor(
    Imf_DeepImage_t * * this_
    , Imath_Box2i_t const * dataWindow
    , Imf_LevelMode levelMode
    , Imf_LevelRoundingMode levelRoundingMode);
#define Imf_DeepImage_ctor Imf_3_0__DeepImage_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_dtor(
    Imf_DeepImage_t * this_);
#define Imf_DeepImage_dtor Imf_3_0__DeepImage_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_level(
    Imf_DeepImage_t * this_
    , Imf_DeepImageLevel_t * * return_
    , int lx
    , int ly);
#define Imf_DeepImage_level Imf_3_0__DeepImage_level


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepImage_level_const(
    Imf_DeepImage_t const * this_
    , Imf_DeepImageLevel_t const * * return_
    , int lx
    , int ly);
#define Imf_DeepImage_level_const Imf_3_0__DeepImage_level_const


#ifdef __cplusplus
}
#endif

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
typedef struct std__map_std__string_std__string__t_s std__map_std__string_std__string__t;
typedef std__map_std__string_std__string__t std_map_string_string_t;
typedef struct Imf_3_0__ImageLevel_t_s Imf_3_0__ImageLevel_t;
typedef Imf_3_0__ImageLevel_t Imf_ImageLevel_t;
typedef struct Imf_3_0__Channel_t_s Imf_3_0__Channel_t;
typedef Imf_3_0__Channel_t Imf_Channel_t;

typedef struct Imf_3_0__Image_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__Image_t;
typedef Imf_3_0__Image_t Imf_Image_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_dtor(
    Imf_Image_t * this_);
#define Imf_Image_dtor Imf_3_0__Image_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_levelMode(
    Imf_Image_t const * this_
    , Imf_LevelMode * return_);
#define Imf_Image_levelMode Imf_3_0__Image_levelMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_levelRoundingMode(
    Imf_Image_t const * this_
    , Imf_LevelRoundingMode * return_);
#define Imf_Image_levelRoundingMode Imf_3_0__Image_levelRoundingMode


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_numLevels(
    Imf_Image_t const * this_
    , int * return_);
#define Imf_Image_numLevels Imf_3_0__Image_numLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_numXLevels(
    Imf_Image_t const * this_
    , int * return_);
#define Imf_Image_numXLevels Imf_3_0__Image_numXLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_numYLevels(
    Imf_Image_t const * this_
    , int * return_);
#define Imf_Image_numYLevels Imf_3_0__Image_numYLevels


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_dataWindow(
    Imf_Image_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_Image_dataWindow Imf_3_0__Image_dataWindow


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_dataWindowForLevel(
    Imf_Image_t const * this_
    , Imath_Box2i_t const * * return_
    , int lx
    , int ly);
#define Imf_Image_dataWindowForLevel Imf_3_0__Image_dataWindowForLevel


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_levelWidth(
    Imf_Image_t const * this_
    , int * return_
    , int lx);
#define Imf_Image_levelWidth Imf_3_0__Image_levelWidth


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_levelHeight(
    Imf_Image_t const * this_
    , int * return_
    , int ly);
#define Imf_Image_levelHeight Imf_3_0__Image_levelHeight


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_resize(
    Imf_Image_t * this_
    , Imath_Box2i_t const * dataWindow);
#define Imf_Image_resize Imf_3_0__Image_resize


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_resize_1(
    Imf_Image_t * this_
    , Imath_Box2i_t const * dataWindow
    , Imf_LevelMode levelMode
    , Imf_LevelRoundingMode levelRoundingMode);
#define Imf_Image_resize_1 Imf_3_0__Image_resize_1


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_shiftPixels(
    Imf_Image_t * this_
    , int dx
    , int dy);
#define Imf_Image_shiftPixels Imf_3_0__Image_shiftPixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_insertChannel(
    Imf_Image_t * this_
    , std_string_t const * name
    , Imf_PixelType type
    , int xSampling
    , int ySampling
    , _Bool pLinear);
#define Imf_Image_insertChannel Imf_3_0__Image_insertChannel


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_insertChannel_1(
    Imf_Image_t * this_
    , std_string_t const * name
    , Imf_Channel_t const * channel);
#define Imf_Image_insertChannel_1 Imf_3_0__Image_insertChannel_1


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_eraseChannel(
    Imf_Image_t * this_
    , std_string_t const * name);
#define Imf_Image_eraseChannel Imf_3_0__Image_eraseChannel


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_clearChannels(
    Imf_Image_t * this_);
#define Imf_Image_clearChannels Imf_3_0__Image_clearChannels


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_renameChannel(
    Imf_Image_t * this_
    , std_string_t const * oldName
    , std_string_t const * newName);
#define Imf_Image_renameChannel Imf_3_0__Image_renameChannel


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_renameChannels(
    Imf_Image_t * this_
    , std_map_string_string_t const * oldToNewNames);
#define Imf_Image_renameChannels Imf_3_0__Image_renameChannels


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_level(
    Imf_Image_t * this_
    , Imf_ImageLevel_t * * return_
    , int lx
    , int ly);
#define Imf_Image_level Imf_3_0__Image_level


OPENEXR_CPPMM_API unsigned int Imf_3_0__Image_level_const(
    Imf_Image_t const * this_
    , Imf_ImageLevel_t const * * return_
    , int lx
    , int ly);
#define Imf_Image_level_const Imf_3_0__Image_level_const


#ifdef __cplusplus
}
#endif

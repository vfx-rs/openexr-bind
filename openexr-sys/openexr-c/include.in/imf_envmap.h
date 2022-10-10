#pragma once
#include "openexr-api-export.h"

#include <imath_box.h>
#include <imath_vec.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imath_3_0__Vec2_float__t_s Imath_3_0__Vec2_float__t;
typedef Imath_3_0__Vec2_float__t Imath_V2f_t;
typedef struct Imath_3_0__Vec3_float__t_s Imath_3_0__Vec3_float__t;
typedef Imath_3_0__Vec3_float__t Imath_V3f_t;
typedef struct Imath_3_0__Box_Imath_3_0__Vec2_int___t_s Imath_3_0__Box_Imath_3_0__Vec2_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_int___t Imath_Box2i_t;

enum Imf_3_0__Envmap_e {
    Imf_Envmap_ENVMAP_LATLONG = 0,
    Imf_Envmap_ENVMAP_CUBE = 1,
    Imf_Envmap_NUM_ENVMAPTYPES = 2,
};
typedef unsigned int Imf_Envmap;
enum Imf_3_0__CubeMapFace_e {
    Imf_CubeMapFace_CUBEFACE_POS_X = 0,
    Imf_CubeMapFace_CUBEFACE_NEG_X = 1,
    Imf_CubeMapFace_CUBEFACE_POS_Y = 2,
    Imf_CubeMapFace_CUBEFACE_NEG_Y = 3,
    Imf_CubeMapFace_CUBEFACE_POS_Z = 4,
    Imf_CubeMapFace_CUBEFACE_NEG_Z = 5,
};
typedef unsigned int Imf_CubeMapFace;

OPENEXR_CPPMM_API unsigned int Imf_3_0_LatLongMap_latlong_from_direction(
    Imath_V2f_t * return_
    , Imath_V3f_t const * direction);
#define Imf_LatLongMap_latlong_from_direction Imf_3_0_LatLongMap_latlong_from_direction


OPENEXR_CPPMM_API unsigned int Imf_3_0_LatLongMap_latlong_from_pixel_position(
    Imath_V2f_t * return_
    , Imath_Box2i_t const * dataWindow
    , Imath_V2f_t const * pixelPosition);
#define Imf_LatLongMap_latlong_from_pixel_position Imf_3_0_LatLongMap_latlong_from_pixel_position


OPENEXR_CPPMM_API unsigned int Imf_3_0_LatLongMap_pixelPosition_from_latlong(
    Imath_V2f_t * return_
    , Imath_Box2i_t const * dataWindow
    , Imath_V2f_t const * latLong);
#define Imf_LatLongMap_pixelPosition_from_latlong Imf_3_0_LatLongMap_pixelPosition_from_latlong


OPENEXR_CPPMM_API unsigned int Imf_3_0_LatLongMap_pixelPosition_from_direction(
    Imath_V2f_t * return_
    , Imath_Box2i_t const * dataWindow
    , Imath_V3f_t const * direction);
#define Imf_LatLongMap_pixelPosition_from_direction Imf_3_0_LatLongMap_pixelPosition_from_direction


OPENEXR_CPPMM_API unsigned int Imf_3_0_LatLongMap_direction_from_pixel_position(
    Imath_V3f_t * return_
    , Imath_Box2i_t const * dataWindow
    , Imath_V2f_t const * pixelPosition);
#define Imf_LatLongMap_direction_from_pixel_position Imf_3_0_LatLongMap_direction_from_pixel_position


OPENEXR_CPPMM_API unsigned int Imf_3_0_CubeMap_sizeOfFace(
    int * return_
    , Imath_Box2i_t const * dataWindow);
#define Imf_CubeMap_sizeOfFace Imf_3_0_CubeMap_sizeOfFace


OPENEXR_CPPMM_API unsigned int Imf_3_0_CubeMap_dataWindowForFace(
    Imath_Box2i_t * return_
    , Imf_CubeMapFace face
    , Imath_Box2i_t const * dataWindow);
#define Imf_CubeMap_dataWindowForFace Imf_3_0_CubeMap_dataWindowForFace


OPENEXR_CPPMM_API unsigned int Imf_3_0_CubeMap_pixelPosition_from_position_in_face(
    Imath_V2f_t * return_
    , Imf_CubeMapFace face
    , Imath_Box2i_t const * dataWindow
    , Imath_V2f_t positionInFace);
#define Imf_CubeMap_pixelPosition_from_position_in_face Imf_3_0_CubeMap_pixelPosition_from_position_in_face


OPENEXR_CPPMM_API unsigned int Imf_3_0_CubeMap_faceAndPixelPosition_from_direction(
    Imath_V3f_t const * direction
    , Imath_Box2i_t const * dataWindow
    , Imf_CubeMapFace * face
    , Imath_V2f_t * positionInFace);
#define Imf_CubeMap_faceAndPixelPosition_from_direction Imf_3_0_CubeMap_faceAndPixelPosition_from_direction


OPENEXR_CPPMM_API unsigned int Imf_3_0_CubeMap_direction_from_position_in_face(
    Imath_V3f_t * return_
    , Imf_CubeMapFace face
    , Imath_Box2i_t const * dataWindow
    , Imath_V2f_t const * positionInFace);
#define Imf_CubeMap_direction_from_position_in_face Imf_3_0_CubeMap_direction_from_position_in_face


#ifdef __cplusplus
}
#endif

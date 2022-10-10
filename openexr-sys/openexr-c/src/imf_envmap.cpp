#include "imf_envmap_private.h"

#include "imath_box_private.h"
#include "imath_vec_private.h"

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0_LatLongMap_latlong_from_direction(
    Imath_V2f_t * return_
    , Imath_V3f_t const * direction)
{
    try {
        to_c_copy(return_, Imf_3_0::LatLongMap::latLong(to_cpp_ref(direction)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_LatLongMap_latlong_from_pixel_position(
    Imath_V2f_t * return_
    , Imath_Box2i_t const * dataWindow
    , Imath_V2f_t const * pixelPosition)
{
    try {
        to_c_copy(return_, Imf_3_0::LatLongMap::latLong(to_cpp_ref(dataWindow), to_cpp_ref(pixelPosition)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_LatLongMap_pixelPosition_from_latlong(
    Imath_V2f_t * return_
    , Imath_Box2i_t const * dataWindow
    , Imath_V2f_t const * latLong)
{
    try {
        to_c_copy(return_, Imf_3_0::LatLongMap::pixelPosition(to_cpp_ref(dataWindow), to_cpp_ref(latLong)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_LatLongMap_pixelPosition_from_direction(
    Imath_V2f_t * return_
    , Imath_Box2i_t const * dataWindow
    , Imath_V3f_t const * direction)
{
    try {
        to_c_copy(return_, Imf_3_0::LatLongMap::pixelPosition(to_cpp_ref(dataWindow), to_cpp_ref(direction)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_LatLongMap_direction_from_pixel_position(
    Imath_V3f_t * return_
    , Imath_Box2i_t const * dataWindow
    , Imath_V2f_t const * pixelPosition)
{
    try {
        to_c_copy(return_, Imf_3_0::LatLongMap::direction(to_cpp_ref(dataWindow), to_cpp_ref(pixelPosition)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_CubeMap_sizeOfFace(
    int * return_
    , Imath_Box2i_t const * dataWindow)
{
    try {
        *(return_) = Imf_3_0::CubeMap::sizeOfFace(to_cpp_ref(dataWindow));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_CubeMap_dataWindowForFace(
    Imath_Box2i_t * return_
    , Imf_CubeMapFace face
    , Imath_Box2i_t const * dataWindow)
{
    try {
        to_c_copy(return_, Imf_3_0::CubeMap::dataWindowForFace(Imf_CubeMapFace_to_cpp_ref(&(face)), to_cpp_ref(dataWindow)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_CubeMap_pixelPosition_from_position_in_face(
    Imath_V2f_t * return_
    , Imf_CubeMapFace face
    , Imath_Box2i_t const * dataWindow
    , Imath_V2f_t positionInFace)
{
    try {
        to_c_copy(return_, Imf_3_0::CubeMap::pixelPosition(Imf_CubeMapFace_to_cpp_ref(&(face)), to_cpp_ref(dataWindow), to_cpp_ref(&(positionInFace))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_CubeMap_faceAndPixelPosition_from_direction(
    Imath_V3f_t const * direction
    , Imath_Box2i_t const * dataWindow
    , Imf_CubeMapFace * face
    , Imath_V2f_t * positionInFace)
{
    try {
        Imf_3_0::CubeMap::faceAndPixelPosition(to_cpp_ref(direction), to_cpp_ref(dataWindow), Imf_CubeMapFace_to_cpp_ref(face), to_cpp_ref(positionInFace));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_CubeMap_direction_from_position_in_face(
    Imath_V3f_t * return_
    , Imf_CubeMapFace face
    , Imath_Box2i_t const * dataWindow
    , Imath_V2f_t const * positionInFace)
{
    try {
        to_c_copy(return_, Imf_3_0::CubeMap::direction(Imf_CubeMapFace_to_cpp_ref(&(face)), to_cpp_ref(dataWindow), to_cpp_ref(positionInFace)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


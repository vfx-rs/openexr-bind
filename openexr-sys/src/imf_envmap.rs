#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
use std::os::raw::*;


#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imf_3_0__Envmap_e(pub u32);
pub const Imf_Envmap_ENVMAP_LATLONG: Imf_3_0__Envmap_e = Imf_3_0__Envmap_e(0);
pub const Imf_Envmap_ENVMAP_CUBE: Imf_3_0__Envmap_e = Imf_3_0__Envmap_e(1);
pub const Imf_Envmap_NUM_ENVMAPTYPES: Imf_3_0__Envmap_e = Imf_3_0__Envmap_e(2);

#[repr(u32)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum Envmap {
    Latlong = 0,
    Cube = 1,
    NumEnvmaptypes = 2,
}

impl From<Imf_3_0__Envmap_e> for Envmap {
    fn from(e: Imf_3_0__Envmap_e) -> Envmap {
        match e {
            Imf_Envmap_ENVMAP_LATLONG => Envmap::Latlong,
            Imf_Envmap_ENVMAP_CUBE => Envmap::Cube,
            Imf_Envmap_NUM_ENVMAPTYPES => Envmap::NumEnvmaptypes,
            _ => panic!("Invalid value {:?} for Envmap in conversion", e),
        }
    }
}

impl From<Envmap> for Imf_3_0__Envmap_e {
    fn from(e: Envmap) -> Imf_3_0__Envmap_e {
        match e {
            Envmap::Latlong => Imf_Envmap_ENVMAP_LATLONG,
            Envmap::Cube => Imf_Envmap_ENVMAP_CUBE,
            Envmap::NumEnvmaptypes => Imf_Envmap_NUM_ENVMAPTYPES,
        }
    }
}

#[repr(transparent)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Imf_3_0__CubeMapFace_e(pub u32);
pub const Imf_CubeMapFace_CUBEFACE_POS_X: Imf_3_0__CubeMapFace_e = Imf_3_0__CubeMapFace_e(0);
pub const Imf_CubeMapFace_CUBEFACE_NEG_X: Imf_3_0__CubeMapFace_e = Imf_3_0__CubeMapFace_e(1);
pub const Imf_CubeMapFace_CUBEFACE_POS_Y: Imf_3_0__CubeMapFace_e = Imf_3_0__CubeMapFace_e(2);
pub const Imf_CubeMapFace_CUBEFACE_NEG_Y: Imf_3_0__CubeMapFace_e = Imf_3_0__CubeMapFace_e(3);
pub const Imf_CubeMapFace_CUBEFACE_POS_Z: Imf_3_0__CubeMapFace_e = Imf_3_0__CubeMapFace_e(4);
pub const Imf_CubeMapFace_CUBEFACE_NEG_Z: Imf_3_0__CubeMapFace_e = Imf_3_0__CubeMapFace_e(5);

#[repr(u32)]
#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub enum CubeMapFace {
    PosX = 0,
    NegX = 1,
    PosY = 2,
    NegY = 3,
    PosZ = 4,
    NegZ = 5,
}

impl From<Imf_3_0__CubeMapFace_e> for CubeMapFace {
    fn from(e: Imf_3_0__CubeMapFace_e) -> CubeMapFace {
        match e {
            Imf_CubeMapFace_CUBEFACE_POS_X => CubeMapFace::PosX,
            Imf_CubeMapFace_CUBEFACE_NEG_X => CubeMapFace::NegX,
            Imf_CubeMapFace_CUBEFACE_POS_Y => CubeMapFace::PosY,
            Imf_CubeMapFace_CUBEFACE_NEG_Y => CubeMapFace::NegY,
            Imf_CubeMapFace_CUBEFACE_POS_Z => CubeMapFace::PosZ,
            Imf_CubeMapFace_CUBEFACE_NEG_Z => CubeMapFace::NegZ,
            _ => panic!("Invalid value {:?} for CubeMapFace in conversion", e),
        }
    }
}

impl From<CubeMapFace> for Imf_3_0__CubeMapFace_e {
    fn from(e: CubeMapFace) -> Imf_3_0__CubeMapFace_e {
        match e {
            CubeMapFace::PosX => Imf_CubeMapFace_CUBEFACE_POS_X,
            CubeMapFace::NegX => Imf_CubeMapFace_CUBEFACE_NEG_X,
            CubeMapFace::PosY => Imf_CubeMapFace_CUBEFACE_POS_Y,
            CubeMapFace::NegY => Imf_CubeMapFace_CUBEFACE_NEG_Y,
            CubeMapFace::PosZ => Imf_CubeMapFace_CUBEFACE_POS_Z,
            CubeMapFace::NegZ => Imf_CubeMapFace_CUBEFACE_NEG_Z,
        }
    }
}


extern "C" {

pub fn Imf_3_0_LatLongMap_latlong_from_direction(return_: *mut Imath_V2f_t, direction: *const Imath_V3f_t) -> Exception;

pub fn Imf_3_0_LatLongMap_latlong_from_pixel_position(return_: *mut Imath_V2f_t, data_window: *const Imath_Box2i_t, pixel_position: *const Imath_V2f_t) -> Exception;

pub fn Imf_3_0_LatLongMap_pixelPosition_from_latlong(return_: *mut Imath_V2f_t, data_window: *const Imath_Box2i_t, lat_long: *const Imath_V2f_t) -> Exception;

pub fn Imf_3_0_LatLongMap_pixelPosition_from_direction(return_: *mut Imath_V2f_t, data_window: *const Imath_Box2i_t, direction: *const Imath_V3f_t) -> Exception;

pub fn Imf_3_0_LatLongMap_direction_from_pixel_position(return_: *mut Imath_V3f_t, data_window: *const Imath_Box2i_t, pixel_position: *const Imath_V2f_t) -> Exception;

pub fn Imf_3_0_CubeMap_sizeOfFace(return_: *mut c_int, data_window: *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0_CubeMap_dataWindowForFace(return_: *mut Imath_Box2i_t, face: Imf_CubeMapFace, data_window: *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0_CubeMap_pixelPosition_from_position_in_face(return_: *mut Imath_V2f_t, face: Imf_CubeMapFace, data_window: *const Imath_Box2i_t, position_in_face: Imath_V2f_t) -> Exception;

pub fn Imf_3_0_CubeMap_faceAndPixelPosition_from_direction(direction: *const Imath_V3f_t, data_window: *const Imath_Box2i_t, face: *mut Imf_CubeMapFace, position_in_face: *mut Imath_V2f_t) -> Exception;

pub fn Imf_3_0_CubeMap_direction_from_position_in_face(return_: *mut Imath_V3f_t, face: Imf_CubeMapFace, data_window: *const Imath_Box2i_t, position_in_face: *const Imath_V2f_t) -> Exception;


} // extern "C"

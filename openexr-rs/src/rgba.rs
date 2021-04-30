use crate::imath::f16;
use openexr_sys as sys;
pub use sys::RgbaChannels;

#[derive(Copy, Clone, Debug, PartialEq)]
pub struct Rgba {
    pub r: f16,
    pub g: f16,
    pub b: f16,
    pub a: f16,
}

impl Rgba {
    pub fn from_f32(r: f32, g: f32, b: f32, a: f32) -> Rgba {
        Rgba {
            r: f16::from_f32(r),
            g: f16::from_f32(g),
            b: f16::from_f32(b),
            a: f16::from_f32(a),
        }
    }

    pub fn zero() -> Rgba {
        Rgba::from_f32(0.0f32, 0.0f32, 0.0f32, 0.0f32)
    }
}

use openexr_sys as sys;

use crate::core::refptr::{OpaquePtr, Ref, RefMut};

#[repr(transparent)]
pub struct PreviewImage(pub(crate) *mut sys::Imf_PreviewImage_t);

unsafe impl OpaquePtr for PreviewImage {
    type SysPointee = sys::Imf_PreviewImage_t;
    type Pointee = PreviewImage;
}

pub type PreviewImageRef<'a, P = PreviewImage> = Ref<'a, P>;
pub type PreviewImageRefMut<'a, P = PreviewImage> = RefMut<'a, P>;

#[repr(C)]
#[derive(Debug, Copy, Clone, PartialEq)]
pub struct PreviewRgba {
    r: u8,
    g: u8,
    b: u8,
    a: u8,
}

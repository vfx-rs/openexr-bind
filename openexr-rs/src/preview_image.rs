use openexr_sys as sys;

#[repr(transparent)]
pub struct PreviewImage(pub(crate) *mut sys::Imf_PreviewImage_t);

#[repr(C)]
#[derive(Debug, Copy, Clone, PartialEq)]
pub struct PreviewRgba {
    r: u8,
    g: u8,
    b: u8,
    a: u8,
}

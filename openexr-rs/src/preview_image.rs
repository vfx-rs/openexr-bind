use openexr_sys as sys;

#[repr(transparent)]
pub struct PreviewImage(pub(crate) *mut sys::Imf_PreviewImage_t);

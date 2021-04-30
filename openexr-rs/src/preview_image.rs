use openexr_sys as sys;

#[repr(transparent)]
pub struct PreviewImage(pub(crate) sys::Imf_PreviewImage_t);

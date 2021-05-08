use openexr_sys as sys;

#[repr(transparent)]
pub struct InputPart(pub(crate) *mut sys::Imf_InputPart_t);

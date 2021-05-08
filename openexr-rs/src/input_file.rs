use openexr_sys as sys;

#[repr(transparent)]
pub struct InputFile(pub(crate) *mut sys::Imf_InputFile_t);

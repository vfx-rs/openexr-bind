use openexr_sys as sys;

#[repr(transparent)]
pub struct MultiPartInputFile(pub(crate) *mut sys::Imf_MultiPartInputFile_t);

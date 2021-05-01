use openexr_sys as sys;

#[repr(transparent)]
pub struct DeepScanLineInputFile(
    pub(crate) *mut sys::Imf_DeepScanLineInputFile_t,
);

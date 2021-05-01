use openexr_sys as sys;

#[repr(transparent)]
pub struct DeepScanLineInputPart(
    pub(crate) *mut sys::Imf_DeepScanLineInputPart_t,
);

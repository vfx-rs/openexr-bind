use openexr_sys as sys;

#[repr(transparent)]
pub struct FrameBuffer(pub(crate) *mut sys::Imf_FrameBuffer_t);

pub use sys::Imf_Slice_t as Slice;

use openexr_sys as sys;

#[repr(transparent)]
pub struct ChannelList(pub(crate) *mut sys::Imf_ChannelList_t);

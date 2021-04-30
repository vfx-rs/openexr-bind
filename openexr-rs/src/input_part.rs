use openexr_sys as sys;

pub trait InputPart {
    fn as_sys_ptr(&self) -> *const sys::Imf_InputPart_t;
}

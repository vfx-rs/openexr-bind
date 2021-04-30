use openexr_sys as sys;

pub trait InputFile {
    fn as_sys_ptr(&self) -> *const sys::Imf_InputFile_t;
}

use openexr_sys as sys;
use std::ffi::CString;

use crate::refptr::{OpaquePtr, Ref, RefMut};

#[repr(transparent)]
pub(crate) struct CppString(pub(crate) *mut sys::std_string_t);

impl CppString {
    pub fn new(string: &str) -> CppString {
        let cstring = CString::new(string).expect("Inner NUL bytes in string");
        // FIXME:
        // this is quite the dance we have to do for std::string
        // the issue is that all the overloads of std::string() that take
        // a const char* also take an implicit allocator, which we don't
        // want to bind.
        // We can get around this by implementing ignored parameters in
        // cppmm
        let mut s = std::ptr::null_mut();
        unsafe {
            sys::std_string_ctor(&mut s);
            let mut dummy = std::ptr::null_mut();
            sys::std_string_assign(
                s,
                &mut dummy,
                cstring.as_ptr(),
                cstring.as_bytes().len() as u64,
            );
        }

        CppString(s)
    }
}

impl Drop for CppString {
    fn drop(&mut self) {
        unsafe {
            sys::std_string_dtor(self.0);
        }
    }
}

#[repr(transparent)]
pub(crate) struct CppVectorFloat(pub(crate) *mut sys::std_vector_float_t);

unsafe impl crate::refptr::OpaquePtr for CppVectorFloat {
    type SysPointee = sys::std_vector_float_t;
    type Pointee = CppVectorFloat;
}

pub type CppVectorFloatRef<'a, P = CppVectorFloat> = Ref<'a, P>;
pub type CppVectorFloatRefMut<'a, P = CppVectorFloat> = RefMut<'a, P>;

impl CppVectorFloat {
    pub fn new() -> CppVectorFloat {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::std_vector_float_ctor(&mut ptr).into_result().unwrap();
        }
        CppVectorFloat(ptr)
    }

    pub fn as_slice(&self) -> &[f32] {
        let mut size = 0;
        let mut ptr = std::ptr::null();
        unsafe {
            sys::std_vector_float_size(self.0, &mut size);
            sys::std_vector_float_data_const(self.0, &mut ptr);
            std::slice::from_raw_parts(ptr, size as usize)
        }
    }

    pub fn as_slice_mut(&mut self) -> &mut [f32] {
        let mut size = 0;
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::std_vector_float_size(self.0, &mut size);
            sys::std_vector_float_data(self.0, &mut ptr);
            std::slice::from_raw_parts(ptr, size as usize)
        }
    }
}

use openexr_sys as sys;
use std::ffi::{CStr, CString};
use std::marker::PhantomPinned;
use std::pin::Pin;

use crate::refptr::{OpaquePtr, Ref, RefMut};

#[repr(transparent)]
pub(crate) struct CppString {
    pub(crate) inner: sys::std_string_t,
    _p: PhantomPinned,
}

impl CppString {
    pub fn new() -> CppString {
        let lay = sys::std_string_t::layout();
        assert_eq!(lay.size(), std::mem::size_of::<sys::std_string_t>());
        assert_eq!(lay.align(), std::mem::align_of::<sys::std_string_t>());

        CppString {
            inner: sys::std_string_t::default(),
            _p: PhantomPinned,
        }
    }

    pub fn init<'a>(self: Pin<&'a mut Self>, string: &str) {
        let cstring = CString::new(string).expect("Inner NUL bytes in string");
        // FIXME:
        // this is quite the dance we have to do for std::string
        // the issue is that all the overloads of std::string() that take
        // a const char* also take an implicit allocator, which we don't
        // want to bind.
        // We can get around this by implementing ignored parameters in
        // cppmm
        unsafe {
            let ptr = Self::as_ptr_mut(self);
            sys::std_string_ctor(ptr);
            let mut dummy = std::ptr::null_mut();
            sys::std_string_assign(
                ptr,
                &mut dummy,
                cstring.as_ptr(),
                cstring.as_bytes().len() as u64,
            );
        }
    }

    pub fn _as_str<'a>(self: &'a CppString) -> &'a str {
        let mut cptr = std::ptr::null();
        unsafe {
            sys::std_string_c_str(&self.inner, &mut cptr);
            CStr::from_ptr(cptr).to_str().unwrap()
        }
    }

    pub fn as_str<'a>(self: Pin<&'a Self>) -> &'a str {
        let mut cptr = std::ptr::null();
        unsafe {
            sys::std_string_c_str(&self.inner, &mut cptr);
            CStr::from_ptr(cptr).to_str().unwrap()
        }
    }

    pub fn as_ptr<'a>(self: Pin<&'a Self>) -> *const sys::std_string_t {
        &self.inner as *const sys::std_string_t
    }

    pub fn as_ptr_mut<'a>(self: Pin<&'a mut Self>) -> *mut sys::std_string_t {
        unsafe { &mut self.get_unchecked_mut().inner as *mut _ }
    }
}

impl Drop for CppString {
    fn drop(&mut self) {
        unsafe {
            sys::std_string_dtor(&mut self.inner);
        }
    }
}

#[repr(transparent)]
pub(crate) struct CppVectorFloat(pub(crate) *mut sys::std_vector_float_t);

unsafe impl OpaquePtr for CppVectorFloat {
    type SysPointee = sys::std_vector_float_t;
    type Pointee = CppVectorFloat;
}

pub(crate) type CppVectorFloatRef<'a, P = CppVectorFloat> = Ref<'a, P>;
pub(crate) type CppVectorFloatRefMut<'a, P = CppVectorFloat> = RefMut<'a, P>;

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
            std::slice::from_raw_parts_mut(ptr, size as usize)
        }
    }
}

#[repr(transparent)]
pub(crate) struct CppVectorString(pub(crate) *mut sys::std_vector_string_t);

unsafe impl OpaquePtr for CppVectorString {
    type SysPointee = sys::std_vector_string_t;
    type Pointee = CppVectorString;
}

pub(crate) type CppVectorStringRef<'a, P = CppVectorString> = Ref<'a, P>;
pub(crate) type CppVectorStringRefMut<'a, P = CppVectorString> = RefMut<'a, P>;

impl CppVectorString {
    pub fn new() -> CppVectorString {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::std_vector_string_ctor(&mut ptr).into_result().unwrap();
        }
        CppVectorString(ptr)
    }

    pub fn as_slice(&self) -> Pin<&[CppString]> {
        let mut size = 0;
        let mut ptr = std::ptr::null();
        unsafe {
            sys::std_vector_string_size(self.0, &mut size);
            sys::std_vector_string_data_const(self.0, &mut ptr);
            Pin::new_unchecked(std::slice::from_raw_parts(
                ptr as *const CppString,
                size as usize,
            ))
        }
    }

    pub fn as_slice_mut(&mut self) -> Pin<&mut [CppString]> {
        let mut size = 0;
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::std_vector_string_size(self.0, &mut size);
            sys::std_vector_string_data(self.0, &mut ptr);
            Pin::new_unchecked(std::slice::from_raw_parts_mut(
                ptr as *mut CppString,
                size as usize,
            ))
        }
    }

    pub fn to_vec(&self) -> Vec<String> {
        self.as_slice()
            .iter()
            .map(|cs| cs._as_str().to_string())
            .collect::<Vec<String>>()
    }
}

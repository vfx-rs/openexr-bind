use crate::imath::Box2;
use crate::{
    flat_image_channel::{
        FlatChannelF16Ref, FlatChannelF16RefMut, FlatChannelF32Ref,
        FlatChannelF32RefMut, FlatChannelU32Ref, FlatChannelU32RefMut,
    },
    refptr::{Ref, RefMut},
    Error, FlatImageRef, FlatImageRefMut,
};

use std::ffi::CString;

use openexr_sys as sys;

type Result<T, E = Error> = std::result::Result<T, E>;

#[repr(transparent)]
pub struct FlatImageLevel(pub(crate) *mut sys::Imf_FlatImageLevel_t);

unsafe impl crate::refptr::OpaquePtr for FlatImageLevel {
    type SysPointee = sys::Imf_FlatImageLevel_t;
    type Pointee = FlatImageLevel;
}

pub type FlatImageLevelRef<'a, P = FlatImageLevel> = Ref<'a, P>;
pub type FlatImageLevelRefMut<'a, P = FlatImageLevel> = RefMut<'a, P>;

impl FlatImageLevel {
    /// Get the level number of this level in the `x` direction
    ///
    pub fn x_level_number(&self) -> i32 {
        let mut v = 0;
        unsafe {
            sys::Imf_FlatImageLevel_xLevelNumber(self.0, &mut v);
        }
        v
    }

    /// Get the level number of this level in the `y` direction
    ///
    pub fn y_level_number(&self) -> i32 {
        let mut v = 0;
        unsafe {
            sys::Imf_FlatImageLevel_yLevelNumber(self.0, &mut v);
        }
        v
    }

    /// Get the data window for this levels
    ///
    pub fn data_window<B: Box2<i32>>(&self) -> &B {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_FlatImageLevel_dataWindow(self.0, &mut ptr);
            &*(ptr as *const B)
        }
    }

    /// Get the [`FlatImage`] to which this level belongs   
    ///
    pub fn flat_image<'a>(&'a self) -> FlatImageRef<'a> {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_FlatImageLevel_flatImage_const(self.0, &mut ptr);
            FlatImageRef::new(ptr)
        }
    }

    /// Get a mutable reference to the [`FlatImage`] to which this level belongs   
    ///
    pub fn flat_image_mut<'a>(&'a mut self) -> FlatImageRefMut<'a> {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_FlatImageLevel_flatImage(self.0, &mut ptr);
            FlatImageRefMut::new(ptr)
        }
    }

    /// Find a [`FlatChannelF16`] with the given name
    ///
    pub fn find_channel_f16(&self, name: &str) -> Option<FlatChannelF16Ref> {
        let mut ptr = std::ptr::null();
        unsafe {
            let cname = CString::new(name).expect("Inner NUL bytes in name");
            let mut s = std::ptr::null_mut();
            sys::std_string_ctor(&mut s);
            let mut dummy = std::ptr::null_mut();
            sys::std_string_assign(
                s,
                &mut dummy,
                cname.as_ptr(),
                cname.as_bytes().len() as u64,
            );
            sys::Imf_FlatImageLevel_findTypedChannel_half_const(
                self.0, &mut ptr, s,
            );
            sys::std_string_dtor(s);

            if ptr.is_null() {
                None
            } else {
                Some(FlatChannelF16Ref::new(ptr))
            }
        }
    }

    /// Find a [`FlatChannelF16`] with the given name and get a mutable reference
    /// to it
    ///
    pub fn find_channel_f16_mut(
        &self,
        name: &str,
    ) -> Option<FlatChannelF16RefMut> {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            let cname = CString::new(name).expect("Inner NUL bytes in name");
            let mut s = std::ptr::null_mut();
            sys::std_string_ctor(&mut s);
            let mut dummy = std::ptr::null_mut();
            sys::std_string_assign(
                s,
                &mut dummy,
                cname.as_ptr(),
                cname.as_bytes().len() as u64,
            );
            sys::Imf_FlatImageLevel_findTypedChannel_half(self.0, &mut ptr, s);
            sys::std_string_dtor(s);

            if ptr.is_null() {
                None
            } else {
                Some(FlatChannelF16RefMut::new(ptr))
            }
        }
    }

    /// Find a [`FlatChannelF32`] with the given name
    ///
    pub fn find_channel_f32(&self, name: &str) -> Option<FlatChannelF32Ref> {
        let mut ptr = std::ptr::null();
        unsafe {
            let cname = CString::new(name).expect("Inner NUL bytes in name");
            let mut s = std::ptr::null_mut();
            sys::std_string_ctor(&mut s);
            let mut dummy = std::ptr::null_mut();
            sys::std_string_assign(
                s,
                &mut dummy,
                cname.as_ptr(),
                cname.as_bytes().len() as u64,
            );
            sys::Imf_FlatImageLevel_findTypedChannel_float_const(
                self.0, &mut ptr, s,
            );
            sys::std_string_dtor(s);

            if ptr.is_null() {
                None
            } else {
                Some(FlatChannelF32Ref::new(ptr))
            }
        }
    }

    /// Find a [`FlatChannelF32`] with the given name and get a mutable reference
    /// to it
    ///
    pub fn find_channel_f32_mut(
        &self,
        name: &str,
    ) -> Option<FlatChannelF32RefMut> {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            let cname = CString::new(name).expect("Inner NUL bytes in name");
            let mut s = std::ptr::null_mut();
            sys::std_string_ctor(&mut s);
            let mut dummy = std::ptr::null_mut();
            sys::std_string_assign(
                s,
                &mut dummy,
                cname.as_ptr(),
                cname.as_bytes().len() as u64,
            );
            sys::Imf_FlatImageLevel_findTypedChannel_float(self.0, &mut ptr, s);
            sys::std_string_dtor(s);

            if ptr.is_null() {
                None
            } else {
                Some(FlatChannelF32RefMut::new(ptr))
            }
        }
    }

    /// Find a [`FlatChannelU32`] with the given name
    ///
    pub fn find_channel_u32(&self, name: &str) -> Option<FlatChannelU32Ref> {
        let mut ptr = std::ptr::null();
        unsafe {
            let cname = CString::new(name).expect("Inner NUL bytes in name");
            let mut s = std::ptr::null_mut();
            sys::std_string_ctor(&mut s);
            let mut dummy = std::ptr::null_mut();
            sys::std_string_assign(
                s,
                &mut dummy,
                cname.as_ptr(),
                cname.as_bytes().len() as u64,
            );
            sys::Imf_FlatImageLevel_findTypedChannel_uint_const(
                self.0, &mut ptr, s,
            );
            sys::std_string_dtor(s);

            if ptr.is_null() {
                None
            } else {
                Some(FlatChannelU32Ref::new(ptr))
            }
        }
    }

    /// Find a [`FlatChannelU32`] with the given name and get a mutable reference
    /// to it
    ///
    pub fn find_channel_u32_mut(
        &self,
        name: &str,
    ) -> Option<FlatChannelU32RefMut> {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            let cname = CString::new(name).expect("Inner NUL bytes in name");
            let mut s = std::ptr::null_mut();
            sys::std_string_ctor(&mut s);
            let mut dummy = std::ptr::null_mut();
            sys::std_string_assign(
                s,
                &mut dummy,
                cname.as_ptr(),
                cname.as_bytes().len() as u64,
            );
            sys::Imf_FlatImageLevel_findTypedChannel_uint(self.0, &mut ptr, s);
            sys::std_string_dtor(s);

            if ptr.is_null() {
                None
            } else {
                Some(FlatChannelU32RefMut::new(ptr))
            }
        }
    }
}

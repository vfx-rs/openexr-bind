use openexr_sys as sys;

use crate::imath::Box2;

#[repr(transparent)]
pub struct Attribute(pub(crate) *mut sys::Imf_Attribute_t);

#[repr(transparent)]
pub struct Box2iAttribute(pub(crate) *mut sys::Imf_Box2iAttribute_t);

pub trait TypedAttribute {
    fn as_attribute_ptr(&self) -> *const sys::Imf_Attribute_t;
}

impl Box2iAttribute {
    /// Create a new attribute wrapping the given value
    pub fn from_value<T>(value: &T) -> Box2iAttribute
    where
        T: Box2<i32>,
    {
        let mut inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_Box2iAttribute_from_value(
                &mut inner,
                value as *const T as *const sys::Imath_Box2i_t,
            )
            .into_result()
            .unwrap();
        }

        Box2iAttribute(inner)
    }

    /// Access to the contained value
    pub fn value<T>(&self) -> &T
    where
        T: Box2<i32>,
    {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_Box2iAttribute_value_const(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &*(ptr as *const sys::Imath_Box2i_t as *const T)
        }
    }

    /// Mutable access to the contained value
    pub fn value_mut<T>(&mut self) -> &mut T
    where
        T: Box2<i32>,
    {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_Box2iAttribute_value(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &mut *(ptr as *mut sys::Imath_Box2i_t as *mut T)
        }
    }

    /// Get this attribute's type name
    pub fn type_name(&self) -> &str {
        unsafe {
            let mut ptr = std::ptr::null();
            sys::Imf_Box2iAttribute_typeName(self.0, &mut ptr)
                .into_result()
                .unwrap();
            std::ffi::CStr::from_ptr(ptr)
                .to_str()
                .expect("Invalid UTF-8")
        }
    }
}

impl TypedAttribute for Box2iAttribute {
    fn as_attribute_ptr(&self) -> *const sys::Imf_Attribute_t {
        self.0 as *const sys::Imf_Box2iAttribute_t
            as *const sys::Imf_Attribute_t
    }
}

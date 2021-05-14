use openexr_sys as sys;

use crate::imath::Box2;
use crate::{
    ChannelList, ChannelListRef, ChannelListRefMut, Chromaticities,
    Compression, DeepImageState, Envmap,
};

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

#[repr(transparent)]
pub struct Box2fAttribute(pub(crate) *mut sys::Imf_Box2fAttribute_t);

impl Box2fAttribute {
    /// Create a new attribute wrapping the given value
    pub fn from_value<T>(value: &T) -> Box2fAttribute
    where
        T: Box2<f32>,
    {
        let mut inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_Box2fAttribute_from_value(
                &mut inner,
                value as *const T as *const sys::Imath_Box2f_t,
            )
            .into_result()
            .unwrap();
        }

        Box2fAttribute(inner)
    }

    /// Access to the contained value
    pub fn value<T>(&self) -> &T
    where
        T: Box2<i32>,
    {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_Box2fAttribute_value_const(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &*(ptr as *const sys::Imath_Box2f_t as *const T)
        }
    }

    /// Mutable access to the contained value
    pub fn value_mut<T>(&mut self) -> &mut T
    where
        T: Box2<i32>,
    {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_Box2fAttribute_value(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &mut *(ptr as *mut sys::Imath_Box2f_t as *mut T)
        }
    }

    /// Get this attribute's type name
    pub fn type_name(&self) -> &str {
        unsafe {
            let mut ptr = std::ptr::null();
            sys::Imf_Box2fAttribute_typeName(self.0, &mut ptr)
                .into_result()
                .unwrap();
            std::ffi::CStr::from_ptr(ptr)
                .to_str()
                .expect("Invalid UTF-8")
        }
    }
}

impl TypedAttribute for Box2fAttribute {
    fn as_attribute_ptr(&self) -> *const sys::Imf_Attribute_t {
        self.0 as *const sys::Imf_Box2fAttribute_t
            as *const sys::Imf_Attribute_t
    }
}

// ----------------------------------------------------------------------------
// IntAttribute
#[repr(transparent)]
pub struct I32Attribute(pub(crate) *mut sys::Imf_IntAttribute_t);

impl I32Attribute {
    /// Create a new attribute wrapping the given value
    pub fn from_value(value: i32) -> I32Attribute {
        let mut inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_IntAttribute_from_value(&mut inner, &value)
                .into_result()
                .unwrap();
        }

        I32Attribute(inner)
    }

    /// Access to the contained value
    pub fn value(&self) -> &i32 {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_IntAttribute_value_const(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &*(ptr as *const i32)
        }
    }

    /// Mutable access to the contained value
    pub fn value_mut(&mut self) -> &mut i32 {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_IntAttribute_value(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &mut *(ptr as *mut i32)
        }
    }

    /// Get this attribute's type name
    pub fn type_name(&self) -> &str {
        unsafe {
            let mut ptr = std::ptr::null();
            sys::Imf_IntAttribute_typeName(self.0, &mut ptr)
                .into_result()
                .unwrap();
            std::ffi::CStr::from_ptr(ptr)
                .to_str()
                .expect("Invalid UTF-8")
        }
    }
}

impl TypedAttribute for I32Attribute {
    fn as_attribute_ptr(&self) -> *const sys::Imf_Attribute_t {
        self.0 as *const sys::Imf_IntAttribute_t as *const sys::Imf_Attribute_t
    }
}

// ----------------------------------------------------------------------------
// FloatAttribute
#[repr(transparent)]
pub struct F32Attribute(pub(crate) *mut sys::Imf_FloatAttribute_t);

impl F32Attribute {
    /// Create a new attribute wrapping the given value
    pub fn from_value(value: f32) -> F32Attribute {
        let mut inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_FloatAttribute_from_value(&mut inner, &value)
                .into_result()
                .unwrap();
        }

        F32Attribute(inner)
    }

    /// Access to the contained value
    pub fn value(&self) -> &f32 {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_FloatAttribute_value_const(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &*(ptr as *const f32)
        }
    }

    /// Mutable access to the contained value
    pub fn value_mut(&mut self) -> &mut f32 {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_FloatAttribute_value(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &mut *(ptr as *mut f32)
        }
    }

    /// Get this attribute's type name
    pub fn type_name(&self) -> &str {
        unsafe {
            let mut ptr = std::ptr::null();
            sys::Imf_FloatAttribute_typeName(self.0, &mut ptr)
                .into_result()
                .unwrap();
            std::ffi::CStr::from_ptr(ptr)
                .to_str()
                .expect("Invalid UTF-8")
        }
    }
}

impl TypedAttribute for F32Attribute {
    fn as_attribute_ptr(&self) -> *const sys::Imf_Attribute_t {
        self.0 as *const sys::Imf_FloatAttribute_t
            as *const sys::Imf_Attribute_t
    }
}

// ----------------------------------------------------------------------------
// DoubleAttribute
#[repr(transparent)]
pub struct F64Attribute(pub(crate) *mut sys::Imf_DoubleAttribute_t);

impl F64Attribute {
    /// Create a new attribute wrapping the given value
    pub fn from_value(value: f64) -> F64Attribute {
        let mut inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_DoubleAttribute_from_value(&mut inner, &value)
                .into_result()
                .unwrap();
        }

        F64Attribute(inner)
    }

    /// Access to the contained value
    pub fn value(&self) -> &f64 {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_DoubleAttribute_value_const(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &*(ptr as *const f64)
        }
    }

    /// Mutable access to the contained value
    pub fn value_mut(&mut self) -> &mut f64 {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_DoubleAttribute_value(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &mut *(ptr as *mut f64)
        }
    }

    /// Get this attribute's type name
    pub fn type_name(&self) -> &str {
        unsafe {
            let mut ptr = std::ptr::null();
            sys::Imf_DoubleAttribute_typeName(self.0, &mut ptr)
                .into_result()
                .unwrap();
            std::ffi::CStr::from_ptr(ptr)
                .to_str()
                .expect("Invalid UTF-8")
        }
    }
}

impl TypedAttribute for F64Attribute {
    fn as_attribute_ptr(&self) -> *const sys::Imf_Attribute_t {
        self.0 as *const sys::Imf_DoubleAttribute_t
            as *const sys::Imf_Attribute_t
    }
}

// ----------------------------------------------------------------------------
// ChromaticitiesAttribute
#[repr(transparent)]
pub struct ChromaticitiesAttribute(
    pub(crate) *mut sys::Imf_ChromaticitiesAttribute_t,
);

impl ChromaticitiesAttribute {
    /// Create a new attribute wrapping the given value
    pub fn from_value(value: &Chromaticities) -> ChromaticitiesAttribute {
        let mut inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_ChromaticitiesAttribute_from_value(&mut inner, value)
                .into_result()
                .unwrap();
        }

        ChromaticitiesAttribute(inner)
    }

    /// Access to the contained value
    pub fn value(&self) -> &Chromaticities {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_ChromaticitiesAttribute_value_const(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &*(ptr as *const Chromaticities)
        }
    }

    /// Mutable access to the contained value
    pub fn value_mut(&mut self) -> &mut Chromaticities {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_ChromaticitiesAttribute_value(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &mut *(ptr as *mut Chromaticities)
        }
    }

    /// Get this attribute's type name
    pub fn type_name(&self) -> &str {
        unsafe {
            let mut ptr = std::ptr::null();
            sys::Imf_ChromaticitiesAttribute_typeName(self.0, &mut ptr)
                .into_result()
                .unwrap();
            std::ffi::CStr::from_ptr(ptr)
                .to_str()
                .expect("Invalid UTF-8")
        }
    }
}

impl TypedAttribute for ChromaticitiesAttribute {
    fn as_attribute_ptr(&self) -> *const sys::Imf_Attribute_t {
        self.0 as *const sys::Imf_ChromaticitiesAttribute_t
            as *const sys::Imf_Attribute_t
    }
}

// ----------------------------------------------------------------------------
// CompressionAttribute
#[repr(transparent)]
pub struct CompressionAttribute(
    pub(crate) *mut sys::Imf_CompressionAttribute_t,
);

impl CompressionAttribute {
    /// Create a new attribute wrapping the given value
    pub fn from_value(value: &Compression) -> CompressionAttribute {
        let mut inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_CompressionAttribute_from_value(
                &mut inner,
                value as *const Compression as *const sys::Imf_Compression,
            )
            .into_result()
            .unwrap();
        }

        CompressionAttribute(inner)
    }

    /// Access to the contained value
    pub fn value(&self) -> Compression {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_CompressionAttribute_value_const(self.0, &mut ptr)
                .into_result()
                .unwrap();
            *(ptr as *const Compression)
        }
    }

    /// Mutable access to the contained value
    pub fn value_mut(&mut self) -> &mut Compression {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_CompressionAttribute_value(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &mut *(ptr as *mut Compression)
        }
    }

    /// Get this attribute's type name
    pub fn type_name(&self) -> &str {
        unsafe {
            let mut ptr = std::ptr::null();
            sys::Imf_CompressionAttribute_typeName(self.0, &mut ptr)
                .into_result()
                .unwrap();
            std::ffi::CStr::from_ptr(ptr)
                .to_str()
                .expect("Invalid UTF-8")
        }
    }
}

impl TypedAttribute for CompressionAttribute {
    fn as_attribute_ptr(&self) -> *const sys::Imf_Attribute_t {
        self.0 as *const sys::Imf_CompressionAttribute_t
            as *const sys::Imf_Attribute_t
    }
}

// ----------------------------------------------------------------------------
// DeepImageStateAttribute
#[repr(transparent)]
pub struct DeepImageStateAttribute(
    pub(crate) *mut sys::Imf_DeepImageStateAttribute_t,
);

impl DeepImageStateAttribute {
    /// Create a new attribute wrapping the given value
    pub fn from_value(value: &DeepImageState) -> DeepImageStateAttribute {
        let mut inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_DeepImageStateAttribute_from_value(
                &mut inner,
                value as *const DeepImageState
                    as *const sys::Imf_DeepImageState,
            )
            .into_result()
            .unwrap();
        }

        DeepImageStateAttribute(inner)
    }

    /// Access to the contained value
    pub fn value(&self) -> DeepImageState {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_DeepImageStateAttribute_value_const(self.0, &mut ptr)
                .into_result()
                .unwrap();
            *(ptr as *const DeepImageState)
        }
    }

    /// Mutable access to the contained value
    pub fn value_mut(&mut self) -> &mut DeepImageState {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_DeepImageStateAttribute_value(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &mut *(ptr as *mut DeepImageState)
        }
    }

    /// Get this attribute's type name
    pub fn type_name(&self) -> &str {
        unsafe {
            let mut ptr = std::ptr::null();
            sys::Imf_DeepImageStateAttribute_typeName(self.0, &mut ptr)
                .into_result()
                .unwrap();
            std::ffi::CStr::from_ptr(ptr)
                .to_str()
                .expect("Invalid UTF-8")
        }
    }
}

impl TypedAttribute for DeepImageStateAttribute {
    fn as_attribute_ptr(&self) -> *const sys::Imf_Attribute_t {
        self.0 as *const sys::Imf_DeepImageStateAttribute_t
            as *const sys::Imf_Attribute_t
    }
}

// ----------------------------------------------------------------------------
// EnvmapAttribute
#[repr(transparent)]
pub struct EnvmapAttribute(pub(crate) *mut sys::Imf_EnvmapAttribute_t);

impl EnvmapAttribute {
    /// Create a new attribute wrapping the given value
    pub fn from_value(value: &Envmap) -> EnvmapAttribute {
        let mut inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_EnvmapAttribute_from_value(
                &mut inner,
                value as *const Envmap as *const sys::Imf_Envmap,
            )
            .into_result()
            .unwrap();
        }

        EnvmapAttribute(inner)
    }

    /// Access to the contained value
    pub fn value(&self) -> Envmap {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_EnvmapAttribute_value_const(self.0, &mut ptr)
                .into_result()
                .unwrap();
            *(ptr as *const Envmap)
        }
    }

    /// Mutable access to the contained value
    pub fn value_mut(&mut self) -> &mut Envmap {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_EnvmapAttribute_value(self.0, &mut ptr)
                .into_result()
                .unwrap();
            &mut *(ptr as *mut Envmap)
        }
    }

    /// Get this attribute's type name
    pub fn type_name(&self) -> &str {
        unsafe {
            let mut ptr = std::ptr::null();
            sys::Imf_EnvmapAttribute_typeName(self.0, &mut ptr)
                .into_result()
                .unwrap();
            std::ffi::CStr::from_ptr(ptr)
                .to_str()
                .expect("Invalid UTF-8")
        }
    }
}

impl TypedAttribute for EnvmapAttribute {
    fn as_attribute_ptr(&self) -> *const sys::Imf_Attribute_t {
        self.0 as *const sys::Imf_EnvmapAttribute_t
            as *const sys::Imf_Attribute_t
    }
}

// ----------------------------------------------------------------------------
// ChannelListAttribute
#[repr(transparent)]
pub struct ChanneListAttribute(pub(crate) *mut sys::Imf_ChannelListAttribute_t);

impl ChanneListAttribute {
    /// Create a new attribute wrapping the given value
    pub fn from_value(value: &ChannelList) -> ChanneListAttribute {
        let mut inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_ChannelListAttribute_from_value(&mut inner, value.0)
                .into_result()
                .unwrap();
        }

        ChanneListAttribute(inner)
    }

    /// Access to the contained value
    pub fn value<'a>(&'a self) -> ChannelListRef<'a> {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_ChannelListAttribute_value_const(self.0, &mut ptr)
                .into_result()
                .unwrap();
            ChannelListRef::new(ptr)
        }
    }

    /// Mutable access to the contained value
    pub fn value_mut<'a>(&'a mut self) -> ChannelListRefMut<'a> {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_ChannelListAttribute_value(self.0, &mut ptr)
                .into_result()
                .unwrap();
            ChannelListRefMut::new(ptr)
        }
    }

    /// Get this attribute's type name
    pub fn type_name(&self) -> &str {
        unsafe {
            let mut ptr = std::ptr::null();
            sys::Imf_ChannelListAttribute_typeName(self.0, &mut ptr)
                .into_result()
                .unwrap();
            std::ffi::CStr::from_ptr(ptr)
                .to_str()
                .expect("Invalid UTF-8")
        }
    }
}

impl TypedAttribute for ChanneListAttribute {
    fn as_attribute_ptr(&self) -> *const sys::Imf_Attribute_t {
        self.0 as *const sys::Imf_ChannelListAttribute_t
            as *const sys::Imf_Attribute_t
    }
}

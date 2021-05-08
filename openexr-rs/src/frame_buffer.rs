use openexr_sys as sys;

pub use crate::imath::{Box2, Vec2};
pub use crate::refptr::{Ref, RefMut};
pub use crate::{Error, PixelType};
use std::marker::PhantomData;

use std::ffi::{CStr, CString};

type Result<T, E = Error> = std::result::Result<T, E>;

#[repr(transparent)]
pub struct FrameBuffer(pub(crate) *mut sys::Imf_FrameBuffer_t);

unsafe impl crate::refptr::OpaquePtr for FrameBuffer {
    type SysPointee = sys::Imf_FrameBuffer_t;
    type Pointee = FrameBuffer;
}

pub type FrameBufferRef<'a, Owner, P = FrameBuffer> = Ref<'a, Owner, P>;

impl FrameBuffer {
    /// Create a new `FrameBuffer`.
    pub fn new() -> FrameBuffer {
        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_FrameBuffer_ctor(&mut ptr);
        }
        FrameBuffer(ptr)
    }

    /// Insert a [`Slice`] into the `FrameBuffer`.
    ///
    /// # Errors
    /// * [`Error::InvalidArgument`] - if name is the empty string
    ///
    pub fn insert(&mut self, name: &str, slice: &Slice) -> Result<()> {
        let c_name =
            CString::new(name).expect("Internal null bytes in filename");

        unsafe {
            sys::Imf_FrameBuffer_insert(self.0, c_name.as_ptr(), &slice.0)
                .into_result()?;
        }

        Ok(())
    }

    /// Find the [`Slice`] with the given `name` in the `FrameBuffer`
    ///
    /// # Returns
    /// * `Some([`SliceRef`])` - if the [`Slice`] is found
    /// * `None` - otherwise
    ///
    pub fn get_slice<'a>(&'a self, name: &str) -> Option<SliceRef<'a, Self>> {
        let c_name =
            CString::new(name).expect("Internal null bytes in filename");

        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_FrameBuffer_findSlice_const(
                self.0,
                &mut ptr,
                c_name.as_ptr(),
            );
        }

        if ptr.is_null() {
            None
        } else {
            Some(SliceRef::new(ptr))
        }
    }

    /// Find the [`Slice`] with the given `name` in the `FrameBuffer` and get a
    /// mutable Ref to it
    ///
    /// # Returns
    /// * `Some([`SliceRefMut`])` - if the [`Slice`] is found
    /// * `None` - otherwise
    ///
    pub fn get_slice_mut<'a>(
        &'a mut self,
        name: &str,
    ) -> Option<SliceRefMut<'a, Self>> {
        let c_name =
            CString::new(name).expect("Internal null bytes in filename");

        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_FrameBuffer_findSlice(self.0, &mut ptr, c_name.as_ptr());
        }

        if ptr.is_null() {
            None
        } else {
            Some(SliceRefMut::new(ptr))
        }
    }

    /// Get an iterator over the [`Slice`]s in this `FrameBuffer`
    ///
    pub fn iter(&self) -> FrameBufferIter {
        unsafe {
            let mut ptr = sys::Imf_FrameBuffer_ConstIterator_t::default();
            sys::Imf_FrameBuffer_begin_const(self.0, &mut ptr)
                .into_result()
                .unwrap();
            let ptr = FrameBufferConstIterator(ptr);

            let mut end = sys::Imf_FrameBuffer_ConstIterator_t::default();
            sys::Imf_FrameBuffer_end_const(self.0, &mut end)
                .into_result()
                .unwrap();
            let end = FrameBufferConstIterator(end);

            FrameBufferIter {
                ptr,
                end,
                _p: PhantomData,
            }
        }
    }
}

impl Drop for FrameBuffer {
    fn drop(&mut self) {
        unsafe {
            sys::Imf_FrameBuffer_dtor(self.0);
        }
    }
}

#[repr(transparent)]
#[derive(Clone)]
pub(crate) struct FrameBufferConstIterator(
    pub(crate) sys::Imf_FrameBuffer_ConstIterator_t,
);

#[repr(transparent)]
pub(crate) struct FrameBufferIterator(
    pub(crate) sys::Imf_FrameBuffer_Iterator_t,
);

pub struct FrameBufferIter<'a> {
    ptr: FrameBufferConstIterator,
    end: FrameBufferConstIterator,
    _p: PhantomData<&'a FrameBuffer>,
}

impl<'a> Iterator for FrameBufferIter<'a> {
    type Item = (&'a str, SliceRef<'a, FrameBuffer>);

    fn next(&mut self) -> Option<(&'a str, SliceRef<'a, FrameBuffer>)> {
        let ptr_curr = self.ptr.clone();
        let mut ptr_next = self.ptr.clone();
        unsafe {
            let mut dummy = std::ptr::null_mut();
            sys::Imf_FrameBuffer_ConstIterator__op_inc(
                &mut ptr_next.0,
                &mut dummy,
            )
            .into_result()
            .unwrap();
        }

        if ptr_curr == self.end {
            None
        } else {
            self.ptr = ptr_next;
            unsafe {
                let mut nameptr = std::ptr::null();
                sys::Imf_FrameBuffer_ConstIterator_name(
                    &ptr_curr.0,
                    &mut nameptr,
                )
                .into_result()
                .unwrap();

                if nameptr.is_null() {
                    panic!("FrameBuffer::ConstIterator::name() returned NULL");
                }

                let mut sliceptr = std::ptr::null();
                sys::Imf_FrameBuffer_ConstIterator_slice(
                    &ptr_curr.0,
                    &mut sliceptr,
                )
                .into_result()
                .unwrap();

                Some((
                    CStr::from_ptr(nameptr)
                        .to_str()
                        .expect("NUL bytes in channel name"),
                    SliceRef::new(sliceptr),
                ))
            }
        }
    }
}

impl PartialEq for FrameBufferConstIterator {
    fn eq(&self, rhs: &FrameBufferConstIterator) -> bool {
        unsafe {
            let mut result = false;
            sys::Imf_frame_buffer_const_iter_eq(&mut result, &self.0, &rhs.0)
                .into_result()
                .unwrap();

            result
        }
    }
}

#[repr(transparent)]
pub struct Slice(pub(crate) sys::Imf_Slice_t);
pub type SliceRef<'a, Owner, P = Slice> = Ref<'a, Owner, P>;
pub type SliceRefMut<'a, Owner, P = Slice> = RefMut<'a, Owner, P>;

unsafe impl crate::refptr::OpaquePtr for Slice {
    type SysPointee = sys::Imf_Slice_t;
    type Pointee = Slice;
}

pub struct SliceBuilder {
    pixel_type: PixelType,
    data: *const u8,
    origin: [i32; 2],
    w: i64,
    h: i64,
    x_stride: usize,
    y_stride: usize,
    x_sampling: i32,
    y_sampling: i32,
    fill_value: f64,
    x_tile_coords: bool,
    y_tile_coords: bool,
}

impl SliceBuilder {
    pub fn build(self) -> Result<Slice> {
        let mut slice = sys::Imf_Slice_t::default();
        unsafe {
            sys::Imf_3_0__Slice_with_origin(
                &mut slice,
                self.pixel_type.into(),
                self.data as *const std::os::raw::c_void,
                self.origin.as_ptr() as *const sys::Imath_V2i_t,
                self.w,
                self.h,
                self.x_stride as u64,
                self.y_stride as u64,
                self.x_sampling,
                self.y_sampling,
                self.fill_value,
                self.x_tile_coords,
                self.y_tile_coords,
            )
            .into_result()?;
        }

        Ok(Slice(slice))
    }

    /// Set the data window origin.
    ///
    pub fn origin<V>(mut self, o: V) -> Self
    where
        V: Vec2<i32>,
    {
        let o = o.as_slice();
        self.origin = *o;
        self
    }

    pub fn fill_value(mut self, v: f64) -> Self {
        self.fill_value = v;
        self
    }

    pub fn x_stride(mut self, x: usize) -> Self {
        self.x_stride = x;
        self
    }

    pub fn y_stride(mut self, y: usize) -> Self {
        self.y_stride = y;
        self
    }

    pub fn x_sampling(mut self, x: i32) -> Self {
        self.x_sampling = x;
        self
    }

    pub fn y_sampling(mut self, y: i32) -> Self {
        self.y_sampling = y;
        self
    }

    pub fn x_tile_coords(mut self, x: bool) -> Self {
        self.x_tile_coords = x;
        self
    }

    pub fn y_tile_coords(mut self, y: bool) -> Self {
        self.y_tile_coords = y;
        self
    }
}

impl Slice {
    pub fn new(
        pixel_type: PixelType,
        data: *const u8,
        w: i64,
        h: i64,
    ) -> SliceBuilder {
        SliceBuilder {
            pixel_type,
            data,
            origin: [0i32; 2],
            w,
            h,
            x_stride: 0,
            y_stride: 0,
            x_sampling: 1,
            y_sampling: 1,
            fill_value: 0.0,
            x_tile_coords: false,
            y_tile_coords: false,
        }
    }

    pub fn with_origin(
        pixel_type: PixelType,
        data: *const u8,
        origin: [i32; 2],
        w: i64,
        h: i64,
    ) -> SliceBuilder {
        SliceBuilder {
            pixel_type,
            data,
            origin,
            w,
            h,
            x_stride: 0,
            y_stride: 0,
            x_sampling: 1,
            y_sampling: 1,
            fill_value: 0.0,
            x_tile_coords: false,
            y_tile_coords: false,
        }
    }

    pub fn with_data_window<B>(
        pixel_type: PixelType,
        data: *const u8,
        data_window: B,
    ) -> SliceBuilder
    where
        B: Box2<i32>,
    {
        let b = data_window.as_slice();

        SliceBuilder {
            pixel_type,
            data,
            origin: [b[0], b[1]],
            w: b[2] as i64 + 1,
            h: b[3] as i64 + 1,
            x_stride: 0,
            y_stride: 0,
            x_sampling: 1,
            y_sampling: 1,
            fill_value: 0.0,
            x_tile_coords: false,
            y_tile_coords: false,
        }
    }
}

impl Drop for Slice {
    fn drop(&mut self) {
        unsafe {
            sys::Imf_Slice_dtor(&mut self.0);
        }
    }
}

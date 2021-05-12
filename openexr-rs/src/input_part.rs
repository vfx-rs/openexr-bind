use openexr_sys as sys;

use std::ffi::{CStr, CString};
use std::path::Path;

use crate::{
    Error, FrameBuffer, FrameBufferRef, Header, HeaderRef, MultiPartInputFile,
};

type Result<T, E = Error> = std::result::Result<T, E>;

#[repr(transparent)]
pub struct InputPart(pub(crate) sys::Imf_InputPart_t);

impl InputPart {
    /// Get an interface to the part `part_number` of the [`MultiPartInputFile`]
    /// `multi_part_file`.
    ///
    pub fn new(
        multi_part_file: &MultiPartInputFile,
        part_number: i32,
    ) -> Result<InputPart> {
        let mut part = sys::Imf_InputPart_t::default();
        unsafe {
            sys::Imf_InputPart_ctor(&mut part, multi_part_file.0, part_number)
                .into_result()?;
        }

        Ok(InputPart(part))
    }

    /// Access to the file [`Header`]
    ///
    pub fn header<'a>(&'a self) -> HeaderRef<'a> {
        unsafe {
            let mut ptr = std::ptr::null();
            sys::Imf_InputPart_header(&self.0, &mut ptr);
            if ptr.is_null() {
                panic!("Received null ptr from sys::Imf_InputPart_header");
            }

            HeaderRef::new(ptr)
        }
    }

    /// Access to the file format version
    ///
    pub fn version(&self) -> i32 {
        let mut v = 0;
        unsafe {
            sys::Imf_InputPart_version(&self.0, &mut v);
        }
        v
    }

    /// Set the current frame buffer -- copies the FrameBuffer
    /// object into the InputPart object.
    ///
    /// The current frame buffer is the destination for the pixel
    /// data read from the file.  The current frame buffer must be
    /// set at least once before `read_pixels()` is called.
    /// The current frame buffer can be changed after each call
    /// to `read_pixels()`.
    ///
    /// # Errors
    /// * [`Error::InvalidArgument`] - if the sampling factors do not match or
    /// if the frame buffer does not have a sample count slice.
    ///
    pub fn set_frame_buffer(
        &mut self,
        frame_buffer: &FrameBuffer,
    ) -> Result<()> {
        unsafe {
            sys::Imf_InputPart_setFrameBuffer(&mut self.0, frame_buffer.ptr)
                .into_result()?;
        }

        Ok(())
    }

    /// Access to the current frame buffer
    ///
    pub fn frame_buffer<'a>(&'a self) -> FrameBufferRef<'a> {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_InputPart_frameBuffer(&self.0, &mut ptr);
        }

        FrameBufferRef::new(ptr)
    }

    /// Check if all pixels in the data window are present in the input file
    ///
    pub fn is_complete(&self) -> bool {
        let mut v = false;
        unsafe {
            sys::Imf_InputPart_isComplete(&self.0, &mut v);
        }

        v
    }

    /// Check if SSE optimization is enabled
    ///
    /// Call after `set_frame_buffer()` to query whether optimized file decoding
    /// is available - decode times will be faster if returns true
    ///
    /// Optimization depends on:
    ///   the file type (only scanline data is supported),
    ///   the framebuffer channels (RGB/RGBA mono or stereo)
    ///   the framebuffer channel types (all channels half-float format only)
    ///   the file channels (RGB/RGBA mono or stereo)
    ///   the file channel types (all channel half-float format only)
    ///   whether SSE2 instruction support was detected at compile time
    ///
    /// # Errors
    /// * [`Error::InvalidArgument`] - if no frame buffer has been set
    ///
    pub fn is_optimization_enabled(&self) -> bool {
        let mut v = false;
        unsafe {
            sys::Imf_InputPart_isOptimizationEnabled(&self.0, &mut v);
        }

        v
    }

    /// Read all scanlines in the range [s1, s2] and put them in the current
    /// frame buffer.
    ///
    /// `read_pixel_sample_counts()` must be called before calling this method.
    ///
    /// # Errors
    /// * [`Error::InvalidArgument`] - if no frame buffer has been set, if `s1`
    /// or `s2` are outside the data window, or if the sample counts have not been
    /// read yet
    /// * [`Error::Base`] - if any other error occurs
    ///
    pub fn read_pixels(&mut self, s1: i32, s2: i32) -> Result<()> {
        unsafe {
            sys::Imf_InputPart_readPixels(&mut self.0, s1, s2).into_result()?;
        }
        Ok(())
    }
}

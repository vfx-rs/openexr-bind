use openexr_sys as sys;

use std::ffi::{CStr, CString};
use std::path::Path;

use crate::{Error, FrameBuffer, FrameBufferRef, Header, HeaderRef};

type Result<T, E = Error> = std::result::Result<T, E>;

#[repr(transparent)]
pub struct InputFile(pub(crate) *mut sys::Imf_InputFile_t);

impl InputFile {
    /// Open the file at path `filename` and read the header.
    ///
    /// # Errors
    /// * [`Error::Base`] - if the file cannot be opened
    ///
    pub fn new<P: AsRef<Path>>(
        filename: P,
        num_threads: i32,
    ) -> Result<InputFile> {
        let c_filename = CString::new(
            filename
                .as_ref()
                .to_str()
                .expect("Invalid bytes in filename"),
        )
        .expect("Internal null bytes in filename");

        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_InputFile_ctor(&mut ptr, c_filename.as_ptr(), num_threads)
                .into_result()?;
        }

        Ok(InputFile(ptr))
    }

    /// Access to the file [`Header`]
    ///
    pub fn header<'a>(&'a self) -> HeaderRef<'a> {
        unsafe {
            let mut ptr = std::ptr::null();
            sys::Imf_InputFile_header(self.0, &mut ptr);
            if ptr.is_null() {
                panic!("Received null ptr from sys::Imf_InputFile_header");
            }

            HeaderRef::new(ptr)
        }
    }

    /// Access to the file format version
    ///
    pub fn version(&self) -> i32 {
        let mut v = 0;
        unsafe {
            sys::Imf_InputFile_version(self.0, &mut v);
        }
        v
    }

    /// Set the current frame buffer -- copies the FrameBuffer
    /// object into the InputFile object.
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
            sys::Imf_InputFile_setFrameBuffer(self.0, frame_buffer.ptr)
                .into_result()?;
        }

        Ok(())
    }

    /// Access to the current frame buffer
    ///
    pub fn frame_buffer<'a>(&'a self) -> FrameBufferRef<'a> {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_InputFile_frameBuffer(self.0, &mut ptr);
        }

        FrameBufferRef::new(ptr)
    }

    /// Check if all pixels in the data window are present in the input file
    ///
    pub fn is_complete(&self) -> bool {
        let mut v = false;
        unsafe {
            sys::Imf_InputFile_isComplete(self.0, &mut v);
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
            sys::Imf_InputFile_isOptimizationEnabled(self.0, &mut v);
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
            sys::Imf_InputFile_readPixels(self.0, s1, s2).into_result()?;
        }
        Ok(())
    }
}

#[cfg(test)]
#[test]
fn read_input1() {
    use crate::{imath::f16, Frame, Rgba, Slice};
    use itertools::izip;
    use std::alloc::{GlobalAlloc, Layout, System};
    use std::path::PathBuf;

    let path = PathBuf::from(
        std::env::var("CARGO_MANIFEST_DIR")
            .expect("CARGO_MANIFEST_DIR not set"),
    )
    .join("images")
    .join("window.exr");

    let mut file = InputFile::new(&path, 4).unwrap();
    let header = file.header();

    let data_window = *header.data_window::<[i32; 4]>();
    let display_window = *header.display_window::<[i32; 4]>();

    let data_width = data_window[2] - data_window[0] + 1;
    let data_height = data_window[3] - data_window[1] + 1;

    let mut frame_buffer = FrameBuffer::new();

    let frame_rgba = Frame::new_multi::<Rgba, _, _>(
        &["R", "G", "B", "A"],
        data_window,
        display_window,
    )
    .unwrap();

    frame_buffer.insert_frame(frame_rgba).unwrap();
    file.set_frame_buffer(&frame_buffer).unwrap();
    file.read_pixels(data_window[1], data_window[3]).unwrap();
}

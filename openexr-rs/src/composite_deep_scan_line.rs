use crate::{
    imath::Box2, DeepScanLineInputFile, DeepScanLineInputPart, Error,
    FrameBuffer,
};
use openexr_sys as sys;

type Result<T, E = Error> = std::result::Result<T, E>;

/// Allows to composite multiple deep parts/files together into a single
/// frame_buffer
pub struct CompositeDeepScanLine<'a> {
    pub(crate) ptr: *mut sys::Imf_CompositeDeepScanLine_t,
    parts: Vec<&'a DeepScanLineInputPart>,
    files: Vec<&'a DeepScanLineInputFile>,
    frame_buffer: Option<&'a FrameBuffer>,
}

impl<'a> CompositeDeepScanLine<'a> {
    /// Creates a Default CompositeDeepScanLine
    ///
    pub fn new() -> CompositeDeepScanLine<'a> {
        CompositeDeepScanLine::default()
    }

    /// Add a source part
    ///
    /// ## Errors
    /// * [`Error::InvalidArgument`] - If the part is missing deep Z or alpha
    /// channels, or if the display window does not match previously added sources
    ///
    pub fn add_source_part(
        &mut self,
        part: &'a DeepScanLineInputPart,
    ) -> Result<()> {
        unsafe {
            sys::Imf_CompositeDeepScanLine_addSource_part(self.ptr, part.0)
                .into_result()?;
        }
        // keep a reference to enforce that the part must live at least as long
        // as we do
        self.parts.push(part);

        Ok(())
    }

    /// Add a source file
    ///
    /// ## Errors
    /// * [`Error::InvalidArgument`] - If the file is missing deep Z or alpha
    /// channels, or if the display window does not match previously added sources
    ///
    pub fn add_source_file(
        &mut self,
        file: &'a DeepScanLineInputFile,
    ) -> Result<()> {
        unsafe {
            sys::Imf_CompositeDeepScanLine_addSource_file(self.ptr, file.0)
                .into_result()?;
        }
        // keep a reference to enforce that the file must live at least as long
        // as we do
        self.files.push(file);

        Ok(())
    }

    /// Set the frame buffer to composite into. The buffer specified must be
    /// large enough to handle the unifed data window of all sources
    ///
    pub fn set_frame_buffer(&mut self, frame_buffer: &'a FrameBuffer) {
        unsafe {
            sys::Imf_CompositeDeepScanLine_setFrameBuffer(
                self.ptr,
                frame_buffer.ptr,
            )
            .into_result()
            .unwrap();
        }
        self.frame_buffer = Some(frame_buffer);
    }

    /// Retrieve the frame buffer
    ///
    pub fn frame_buffer(&self) -> Option<&'a FrameBuffer> {
        self.frame_buffer
    }

    /// Read scanlines from the sources from `start` to `end`, compositing them
    /// and storing them in the previously provided frame buffer
    ///
    /// ## Errors
    /// * [`Error::OutOfRange`] - If the start or end scanlines are outside
    /// of the data window.
    ///
    pub fn read_pixels(&mut self, start: i32, end: i32) -> Result<()> {
        let dw = self.data_window::<[i32; 4]>().clone();
        if start < dw[1] || end > dw[3] {
            Err(Error::OutOfRange)
        } else {
            unsafe {
                sys::Imf_CompositeDeepScanLine_readPixels(self.ptr, start, end);
            }

            Ok(())
        }
    }

    /// The number of sources added
    ///
    pub fn num_sources(&self) -> i32 {
        let mut num = 0;
        unsafe {
            sys::Imf_CompositeDeepScanLine_sources(self.ptr, &mut num)
                .into_result()
                .unwrap();
        }
        num
    }

    /// Get the data window
    ///
    /// If multiple parts are specified, this will be the union of each of their
    /// data windows.
    ///
    pub fn data_window<B>(&self) -> &B
    where
        B: Box2<i32>,
    {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_CompositeDeepScanLine_dataWindow(self.ptr, &mut ptr);
            &*(ptr as *const B)
        }
    }

    // TODO: implement set_compositing()
}

impl<'a> Default for CompositeDeepScanLine<'a> {
    fn default() -> CompositeDeepScanLine<'a> {
        unsafe {
            let mut ptr = std::ptr::null_mut();
            sys::Imf_CompositeDeepScanLine_ctor(&mut ptr);

            CompositeDeepScanLine {
                ptr,
                parts: Vec::new(),
                files: Vec::new(),
                frame_buffer: None,
            }
        }
    }
}

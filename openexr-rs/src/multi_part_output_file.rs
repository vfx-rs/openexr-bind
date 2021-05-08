use openexr_sys as sys;

use std::ffi::{CStr, CString};
use std::path::Path;

use crate::{Error, Header, HeaderRef, HeaderSlice};

type Result<T, E = Error> = std::result::Result<T, E>;

/// Manages writing multi-part images.
///
/// Multi-part images are essentially just containers around multiple
/// [`OutputImage`]s.
///
/// Certain attributes are shared between all parts:
/// * `displayWindow`
/// * `pixelAspectRatio`
/// * `timeCode`
/// * `chromaticities`
///
#[repr(transparent)]
pub struct MultiPartOutputFile(pub(crate) *mut sys::Imf_MultiPartOutputFile_t);

impl MultiPartOutputFile {
    /// Creates a new multi-part output file from a slice of slice of headers
    /// with the given filename. If `override_shared_attributes` is `true`, then
    /// mismatching attributes between headers will be overriden with the value
    /// from the first header. If `false` then [`Error::InvalidArgument`] is
    /// returned instead.
    ///
    /// # Errors
    /// * [`Error::InvalidArgument`] - if `override_shared_attributes` is `false`
    /// and there is a mismatch between headers' common attributes, or if each
    /// header does not have a unique name.
    /// * [`Error::Base`] - if the file cannot be opened.
    ///
    pub fn new<P: AsRef<Path>>(
        filename: P,
        headers: &HeaderSlice,
        override_shared_attributes: bool,
        num_threads: i32,
    ) -> Result<MultiPartOutputFile> {
        let c_filename = CString::new(
            filename
                .as_ref()
                .to_str()
                .expect("Invalid bytes in filename"),
        )
        .expect("Internal null bytes in filename");

        let mut ptr = std::ptr::null_mut();
        unsafe {
            sys::Imf_MultiPartOutputFile_ctor(
                &mut ptr,
                c_filename.as_ptr(),
                headers.0.as_ptr(),
                headers.0.len() as i32,
                override_shared_attributes,
                num_threads,
            )
            .into_result()?;
        }

        Ok(MultiPartOutputFile(ptr))
    }

    /// The number of parts in the file
    ///
    pub fn parts(&self) -> i32 {
        let mut v = 0;
        unsafe {
            sys::Imf_MultiPartOutputFile_parts(self.0, &mut v);
        }
        v
    }

    /// Return a [`Header`] for part `n`.
    ///
    /// Due to enforcing attribute sharing, the attributes of the returned
    /// [`Header`] may be different from the matching one passed in to the
    /// constructor.
    ///
    /// # Errors
    /// * [`Error::InvalidArgument`] - if `n` does not correspond to a part in
    /// the file.
    ///
    pub fn header<'a>(&'a self, n: i32) -> Result<HeaderRef<'a, ()>> {
        let mut ptr = std::ptr::null();
        unsafe {
            sys::Imf_MultiPartOutputFile_header(self.0, &mut ptr, n)
                .into_result()?;
        }
        Ok(HeaderRef::new(ptr))
    }
}

impl Drop for MultiPartOutputFile {
    fn drop(&mut self) {
        unsafe {
            sys::Imf_MultiPartOutputFile_dtor(self.0);
        }
    }
}

use crate::Error;
use openexr_sys as sys;

use crate::refptr::{OpaquePtr, Ref, RefMut};

type Result<T, E = Error> = std::result::Result<T, E>;

/// A usually small, low-dynamic range image,
/// that is intended to be stored in an image file's header
#[repr(transparent)]
pub struct PreviewImage(pub(crate) *mut sys::Imf_PreviewImage_t);

unsafe impl OpaquePtr for PreviewImage {
    type SysPointee = sys::Imf_PreviewImage_t;
    type Pointee = PreviewImage;
}

pub type PreviewImageRef<'a, P = PreviewImage> = Ref<'a, P>;
pub type PreviewImageRefMut<'a, P = PreviewImage> = RefMut<'a, P>;

impl PreviewImage {
    /// Creates a new `PreviewImage` with dimensions width = 0 and height = 0
    ///
    /// ## Errors
    /// * [`Error::Base`] - If an error occurs
    ///
    pub fn empty() -> Result<PreviewImage> {
        PreviewImage::with_dimensions(0, 0)
    }

    /// Creates a new `PreviewImage` with the provided dimensions
    ///
    /// ## Errors
    /// * [`Error::Overflow`] - If the size of the image is bigger than the supported size
    /// * [`Error::Base`] - If an error occurs
    ///
    pub fn with_dimensions(width: u32, height: u32) -> Result<PreviewImage> {
        let mut _inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_PreviewImage_ctor(
                &mut _inner,
                width,
                height,
                std::ptr::null(),
            )
            .into_result()?;
        }

        Ok(PreviewImage(_inner))
    }

    /// Creates a new `PreviewImage` with the provided dimensions and pixels
    ///
    /// ## Errors
    /// * [`Error::Overflow`] - If the size of the image is bigger than the supported size
    /// * [`Error::Base`] - If an error occurs
    ///
    pub fn with_pixels(
        width: u32,
        height: u32,
        pixels: &[PreviewRgba],
    ) -> Result<PreviewImage> {
        let mut _inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_PreviewImage_ctor(
                &mut _inner,
                width,
                height,
                pixels.as_ptr() as *const sys::Imf_PreviewRgba_t,
            )
            .into_result()?;
        }

        Ok(PreviewImage(_inner))
    }

    /// Returns the 'width' of the 'PreviewImage'
    ///
    fn width(&self) -> u32 {
        let mut value = 0;

        unsafe {
            sys::Imf_PreviewImage_width(self.0, &mut value)
                .into_result()
                .expect("Error getting 'width' property");
        }

        value
    }

    /// Returns the 'height' of the 'PreviewImage'
    ///
    fn height(&self) -> u32 {
        let mut value = 0;

        unsafe {
            sys::Imf_PreviewImage_height(self.0, &mut value)
                .into_result()
                .expect("Error getting 'height' property");
        }

        value
    }

    /// Get the image pixels as a slice
    ///
    fn pixels<'a>(&'a self) -> &'a [PreviewRgba] {
        let mut pixels = std::ptr::null();

        unsafe {
            sys::Imf_PreviewImage_pixels_const(self.0, &mut pixels)
                .into_result()
                .expect("Error getting 'height' property");

            let pixel_count = (self.width() * self.height()) as usize;

            std::slice::from_raw_parts(
                pixels as *const PreviewRgba,
                pixel_count,
            )
        }
    }

    /// Get the image pixels as a mutable slice
    ///
    fn mut_pixels<'a>(&'a self) -> &'a mut [PreviewRgba] {
        let mut pixels = std::ptr::null_mut();

        unsafe {
            sys::Imf_PreviewImage_pixels(self.0, &mut pixels)
                .into_result()
                .expect("Error getting mutable pixels");

            let pixel_count = (self.width() * self.height()) as usize;

            std::slice::from_raw_parts_mut(
                pixels as *mut PreviewRgba,
                pixel_count,
            )
        }
    }

    /// Sets the pixel value at the specified coordinates
    ///
    /// ## Errors
    /// * [`Error::OutOfRange`] - If the coordinates are outside of the image size
    /// * [`Error::Base`] - If an error occurs
    ///
    fn set_pixel(&mut self, x: u32, y: u32, value: PreviewRgba) -> Result<()> {
        unsafe {
            let mut pixel = std::ptr::null_mut();

            if x >= self.width() || y >= self.height() {
                return Err(Error::OutOfRange);
            }

            sys::Imf_PreviewImage_pixel(self.0, &mut pixel, x, y)
                .into_result()?;

            *(pixel as *mut PreviewRgba) = value
        }

        Ok(())
    }

    /// Gets the pixel value at the specified coordinates
    ///
    /// Returns `None` if the coordinates are outside of the image size,
    /// or some other error ocurred
    ///
    fn get_pixel(&self, x: u32, y: u32) -> Option<PreviewRgba> {
        unsafe {
            let pixel = std::ptr::null_mut();

            match sys::Imf_PreviewImage_pixel_const(self.0, pixel, x, y)
                .into_result()
            {
                Ok(_) => Some(*(pixel as *const PreviewRgba)),
                Err(_) => None,
            }
        }
    }
}

impl Clone for PreviewImage {
    fn clone(&self) -> Self {
        let mut _inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_PreviewImage_copy(&mut _inner, self.0)
                .into_result()
                .expect("Error invoking copy ctor");
        }

        PreviewImage(_inner)
    }
}

impl Drop for PreviewImage {
    fn drop(&mut self) {
        unsafe {
            sys::Imf_PreviewImage_dtor(self.0);
        }
    }
}

/// Holds the value of a PreviewImage pixel
///
/// Intensity is proportional to pow(x/255, 2.2) for r, g, and b components.
#[repr(C)]
#[derive(Debug, Copy, Clone, PartialEq)]
pub struct PreviewRgba {
    /// Red component of the pixel's color.
    /// Intensity is proportional to pow(x/255, 2.2).
    r: u8,

    /// Green component of the pixel's color.
    /// Intensity is proportional to pow(x/255, 2.2).
    g: u8,

    /// Blue component of the pixel's color.
    /// Intensity is proportional to pow(x/255, 2.2).
    b: u8,

    /// The pixel's alpha.
    /// 0 == transparent, 255 == opaque.
    a: u8,
}

impl PreviewRgba {
    /// Creates a `PreviewRgba` from RGB and Alpha `u8` values
    ///
    pub fn from_u8(r: u8, g: u8, b: u8, a: u8) -> PreviewRgba {
        PreviewRgba { r, g, b, a }
    }

    /// Creates a `PreviewRgba` where all components have value 0 (zero)
    ///
    pub fn zero() -> PreviewRgba {
        PreviewRgba::from_u8(0u8, 0u8, 0u8, 0u8)
    }
}

impl Default for PreviewRgba {
    fn default() -> PreviewRgba {
        PreviewRgba::from_u8(0u8, 0u8, 0u8, 255u8)
    }
}

#[cfg(test)]
mod tests {
    use super::Result;
    use crate::*;
    use std::path::PathBuf;

    #[test]
    fn test_empty_preview_image() -> Result<()> {
        PreviewImage::empty()?;
        Ok(())
    }

    #[test]
    fn test_preview_image_with_ok_dimensions() -> Result<()> {
        PreviewImage::with_dimensions(0, 0)?;

        PreviewImage::with_dimensions(1, 1)?;
        PreviewImage::with_dimensions(1, 0)?;
        PreviewImage::with_dimensions(0, 1)?;

        PreviewImage::with_dimensions(8, 1)?;

        PreviewImage::with_dimensions(1024, 1024)?;

        PreviewImage::with_dimensions(4096, 4096)?;

        Ok(())
    }

    #[test]
    fn test_preview_image_with_unsupported_dimensions() {
        assert!(PreviewImage::with_dimensions(std::u32::MAX, std::u32::MAX)
            .is_err());
    }

    #[test]
    fn test_preview_image_with_pixels() -> Result<()> {
        const PREVIEW_WIDTH: u32 = 128;
        const PREVIEW_HEIGHT: u32 = 64;

        let pixels =
            [PreviewRgba::zero(); (PREVIEW_WIDTH * PREVIEW_HEIGHT) as usize];

        PreviewImage::with_pixels(PREVIEW_WIDTH, PREVIEW_HEIGHT, &pixels)?;

        Ok(())
    }

    #[test]
    fn test_clone_preview_image() -> Result<()> {
        const PREVIEW_WIDTH: u32 = 128;
        const PREVIEW_HEIGHT: u32 = 64;

        let pixels =
            [PreviewRgba::zero(); (PREVIEW_WIDTH * PREVIEW_HEIGHT) as usize];

        let preview_image =
            PreviewImage::with_pixels(PREVIEW_WIDTH, PREVIEW_HEIGHT, &pixels)?;

        let _ = preview_image.clone();

        Ok(())
    }

    #[test]
    fn test_read_file_without_preview() -> Result<()> {
        let path = PathBuf::from(
            std::env::var("CARGO_MANIFEST_DIR")
                .expect("CARGO_MANIFEST_DIR not set"),
        )
        .join("imf_preview1.exr");

        let mut file = crate::RgbaInputFile::new(&path, 1).unwrap();

        assert_eq!(file.header().has_preview_image(), false);

        Ok(())
    }

    #[test]
    fn test_read_empty_file() -> Result<()> {
        const PREVIEW_WIDTH: u32 = 128;
        const PREVIEW_HEIGHT: u32 = 64;

        let path = PathBuf::from(
            std::env::var("CARGO_MANIFEST_DIR")
                .expect("CARGO_MANIFEST_DIR not set"),
        )
        .join("imf_preview1.exr");

        let file1 = RgbaInputFile::new(&path, 1).unwrap();

        let header1 = file1.header();

        let preview_image = PreviewImage::with_dimensions(PREVIEW_WIDTH, PREVIEW_HEIGHT)?;

        todo!();

        // header1.set_preview_image(&preview_image);

        // Ok(())
    }
}

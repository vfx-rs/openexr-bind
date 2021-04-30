use crate::{
    imath::Vec2, Compression, Header, HeaderRef, LineOrder, Rgba, RgbaChannels,
};
use openexr_sys as sys;
use std::ffi::CString;
use std::marker::PhantomData;
use std::path::Path;

/// A simplified interface for writing an RGBA EXR file
#[repr(transparent)]
pub struct RgbaOutputFile(pub(crate) *mut sys::Imf_RgbaOutputFile_t);

impl RgbaOutputFile {
    /// Create a new [`RgbaOutputFile`] with the given parameters.
    ///
    /// Display window and data window will both be set to [0, width) and
    /// [0, height).
    ///
    /// # Arguments
    /// * `filename` - The path to which the resulting file will be written
    /// * `width` - The width of the image.
    /// * `height` - The height of the image.
    /// * `channels` - Which channels the pixel data will contain.
    /// * `pixel_aspect_ratio` - The width/height ratio of each pixel
    /// * `screen_window_center` - Center of the screen window.
    /// * `screen_window_width` - Width of the screen window.
    /// * `line_order` - Whether the scanlines are stored top-to-bottom.
    /// * `compression` - Which compression scheme to use
    /// * `num_threads` - The number of threads to use to write the image
    ///
    pub fn with_dimensions<P: AsRef<Path>, V>(
        filename: P,
        width: i32,
        height: i32,
        channels: RgbaChannels,
        pixel_aspect_ratio: f32,
        screen_window_center: V,
        screen_window_width: f32,
        line_order: LineOrder,
        compression: Compression,
        num_threads: i32,
    ) -> RgbaOutputFile
    where
        V: Vec2<f32>,
    {
        let c_filename = CString::new(
            filename
                .as_ref()
                .to_str()
                .expect("Invalid bytes in filename"),
        )
        .expect("Internal null bytes in filename");

        let s = sys::Imath_V2f_t {
            x: screen_window_center.as_slice()[0],
            y: screen_window_center.as_slice()[1],
        };

        let mut _inner = std::ptr::null_mut();
        unsafe {
            sys::Imf_RgbaOutputFile_with_dimensions(
                &mut _inner,
                c_filename.as_ptr(),
                width,
                height,
                channels.into(),
                pixel_aspect_ratio,
                s,
                screen_window_width,
                line_order.into(),
                compression.into(),
                num_threads,
            );
        }

        RgbaOutputFile(_inner)
    }

    /// Define a frame buffer as the pixel data source.
    ///
    /// Pixel (x, y) is at offset x * x_stride + y * y_stride
    ///
    pub fn set_frame_buffer(
        &mut self,
        data: &[Rgba],
        x_stride: usize,
        y_stride: usize,
    ) {
        unsafe {
            sys::Imf_RgbaOutputFile_setFrameBuffer(
                self.0,
                data.as_ptr() as *const sys::Imf_Rgba_t,
                x_stride as u64,
                y_stride as u64,
            );
        }
    }

    /// Write the pixel data to the output file
    ///
    /// Retrieves the next n scan lines worth of data from
    /// the current frame buffer, starting with the scan line indicated by
    /// [`RgbaOutputFile::current_scan_line`], and stores the data in the output file, and
    /// progressing in the direction indicated by [`RgbaOutputFile::line_order`].
    ///
    /// To produce a complete and correct file, exactly `m` scan lines must
    /// be written, where `m` is equal to
    /// data_window().max.y - data_window().min.y + 1.
    ///
    pub fn write_pixels(&mut self, num_scan_lines: i32) {
        unsafe {
            sys::Imf_RgbaOutputFile_writePixels(self.0, num_scan_lines);
        }
    }

    /// Access to the current scan line:
    ///
    /// Returns the y coordinate of the first scan line
    /// that will be read from the current frame buffer during the next
    /// call to write_pixels().
    ///
    /// If `line_order() == INCREASING_Y`:
    ///
    ///	The current scan line before the first call to write_pixels()
    /// is header().data_window().min.y.  After writing each scan line,
    /// the current scan line is incremented by 1.
    ///
    /// If `line_order() == DECREASING_Y`:
    ///
    ///	The current scan line before the first call to write_pixels()
    /// is header().data_window().max.y.  After writing each scan line,
    /// the current scan line is decremented by 1.
    ///
    pub fn current_scan_line(&self) -> i32 {
        unsafe { sys::Imf_RgbaOutputFile_currentScanLine(self.0) }
    }

    /// Access to the file [`Header`]
    ///
    pub fn header<'a>(&'a self) -> HeaderRef<'a, Self> {
        unsafe {
            let ptr = sys::Imf_RgbaOutputFile_header(self.0);
            if ptr.is_null() {
                panic!("Received null ptr from sys::Imf_RgbaOutputFile_header");
            }

            HeaderRef {
                header: std::mem::ManuallyDrop::<Header>::new(Header(
                    ptr as *mut sys::Imf_Header_t,
                )),
                _p: PhantomData,
            }
        }
    }

    /// Rounding control for luminance/chroma images
    ///
    /// If the output file contains luminance and chroma channels (WriteYc
    /// or WriteYca), then the the significands of the luminance and
    /// chroma values are rounded to `round_y` and `round_c` bits respectively
    /// (see function [`imath::half::round()`].  Rounding improves compression
    /// with minimal image degradation, usually much less than the degradation
    /// caused by chroma subsampling.  By default, `round_y` is 7, and `round_c`
    /// is 5.
    ///
    /// If the output file contains RGB channels or a luminance channel,
    /// without chroma, then no rounding is performed.
    ///
    pub fn set_yc_rounding(&mut self, round_y: u32, round_c: u32) {
        unsafe {
            sys::Imf_RgbaOutputFile_setYCRounding(self.0, round_y, round_c);
        }
    }

    /*
    /// Copy all pixels from `input_file` to this file without uncompressing
    /// and recompressing.
    ///
    /// This file's header must be compatible with the InputFile's
    /// header:  The two headers' `"dataWindow"`, `"compression"`,
    /// `"lineOrder"` and `"channels"` attributes must be the same.
    ///
    pub fn copy_pixels_from_file<F>(&mut self, input_file: F)
    where
        F: InputFile,
    {
        unsafe {
            sys::Imf_RgbaOutputFile_copyPixels_from_file(
                &mut self.0,
                input_file.as_sys_ptr(),
            );
        }
    }

    /// Copy all pixels from `input_part` to this file without uncompressing
    /// and recompressing.
    ///
    /// This part's header must be compatible with the InputFile's
    /// header:  The two headers' `"dataWindow"`, `"compression"`,
    /// `"lineOrder"` and `"channels"` attributes must be the same.
    ///
    pub fn copy_pixels_from_part<P>(&mut self, input_part: P)
    where
        P: InputPart,
    {
        unsafe {
            sys::Imf_RgbaOutputFile_copyPixels_from_part(
                &mut self.0,
                input_part.as_sys_ptr(),
            );
        }
    }
    */
}

impl Drop for RgbaOutputFile {
    fn drop(&mut self) {
        unsafe {
            sys::Imf_RgbaOutputFile_dtor(self.0);
        }
    }
}

/// Simplified interface for reading RGBA files.
#[repr(transparent)]
pub struct RgbaInputFile(pub(crate) *mut sys::Imf_RgbaInputFile_t);

impl RgbaInputFile {
    /// Open the file at path `filename`, using `num_threads` threads to do the
    /// reading.
    ///
    pub fn new<P: AsRef<Path>>(filename: P, num_threads: i32) -> RgbaInputFile {
        let mut inner = std::ptr::null_mut();

        let c_filename = CString::new(
            filename
                .as_ref()
                .to_str()
                .expect("Invalid bytes in filename"),
        )
        .expect("Internal null bytes in filename");

        unsafe {
            sys::Imf_RgbaInputFile_ctor(
                &mut inner,
                c_filename.as_ptr(),
                num_threads,
            );
        }

        RgbaInputFile(inner)
    }

    /// Set a frame buffer as the destination for the decoded pixels
    ///
    /// Pixel (x, y) is at offset x * x_stride + y * y_stride
    ///
    pub fn set_frame_buffer(
        &mut self,
        pixels: &mut [Rgba],
        x_stride: usize,
        y_stride: usize,
    ) {
        unsafe {
            sys::Imf_RgbaInputFile_setFrameBuffer(
                self.0,
                pixels.as_mut_ptr() as *mut sys::Imf_Rgba_t,
                x_stride as u64,
                y_stride as u64,
            );
        }
    }

    /// Sets the layer that subsequent [`RgbaInputFile::read_pixels`] calls will
    /// read from.
    ///
    /// e.g. calling this with `"layername"` will read channels `"layername.R"`,
    /// `"layername.G"` etc.
    ///
    /// Each call to [`RgbaInputFile::set_layer_name`] must be followed by a
    /// call to [`RgbaInputFile::set_frame_buffer`] before reading.
    pub fn set_layer_name(&mut self, name: &str) {
        unsafe {
            let cname = CString::new(name).expect("Inner NUL bytes in name");
            // FIXME:
            // this is quite the dance we have to do for std::string
            // the issue is that all the overloads of std::string() that take
            // a const char* also take an implicit allocator, which we don't
            // want to bind.
            // We can get around this by implementing ignored parameters in
            // cppmm
            let mut s = std::ptr::null_mut();
            sys::std___cxx11_string_ctor(&mut s);
            sys::std___cxx11_string_assign(
                s,
                cname.as_ptr(),
                cname.as_bytes().len() as u64,
            );
            sys::Imf_RgbaInputFile_setLayerName(self.0, s);
            sys::std___cxx11_string_dtor(s);
        }
    }

    /// Read pixel data.
    ///
    /// `read_pixels(s1,s2)` reads all scan lines with y coordinates
    /// in the interval `[min(s1, s2), max(s1, s2)]` from the file,
    /// and stores them in the current frame buffer.
    ///
    /// Both s1 and s2 must be within the interval
    /// `[header().data_window().min.y, header().data_window().max.y]`
    ///
    /// The scan lines can be read from the file in random order, and
    /// individual scan lines may be skipped or read multiple times.
    /// For maximum efficiency, the scan lines should be read in the
    /// order in which they were written to the file.
    ///
    pub fn read_pixels(&mut self, scanline1: i32, scanline2: i32) {
        unsafe {
            sys::Imf_RgbaInputFile_readPixels(self.0, scanline1, scanline2);
        }
    }

    /// Access to the file [`Header`]
    ///
    pub fn header<'a>(&'a self) -> HeaderRef<'a, Self> {
        unsafe {
            let ptr = sys::Imf_RgbaInputFile_header(self.0);
            if ptr.is_null() {
                panic!("Received null ptr from sys::Imf_RgbaInputFile_header");
            }

            HeaderRef {
                header: std::mem::ManuallyDrop::<Header>::new(Header(
                    ptr as *mut sys::Imf_Header_t,
                )),
                _p: PhantomData,
            }
        }
    }

    /// Check if the file is complete.
    ///
    /// Returns true if all pixels in the data window are
    /// present in the input file, or false if any pixels are missing.
    /// (Another program may still be busy writing the file, or file
    /// writing may have been aborted prematurely.)
    pub fn is_complete(&self) -> bool {
        unsafe { sys::Imf_RgbaInputFile_isComplete(self.0) }
    }
}

impl Drop for RgbaInputFile {
    fn drop(&mut self) {
        unsafe {
            sys::Imf_RgbaInputFile_dtor(self.0);
        }
    }
}

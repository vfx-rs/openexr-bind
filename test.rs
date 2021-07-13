use crate::*;

use std::ffi::CString;

#[test]
fn write_rgba1() {
    let mut file = std::ptr::null_mut();

    let filename = CString::new("out.exr").unwrap();

    unsafe {
        Imf_RgbaOutputFile_with_dimensions(
            &mut file,
            filename.as_ptr(),
            256,
            128,
            Imf_RgbaChannels_WRITE_RGBA,
            1.0,
            Imath_V2f_t { x: 1.0, y: 1.0 },
            1.0,
            Imf_LineOrder_INCREASING_Y,
            Imf_Compression_ZIP_COMPRESSION,
            1,
        );
    }
}

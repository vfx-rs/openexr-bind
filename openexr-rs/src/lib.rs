//! # OpenEXR
//!
//! The openexr crate provides high-level bindings for the [ASWF OpenEXR library](https://github.com/AcademySoftwareFoundation/openexr),
//! which allows reading and writing files in the OpenEXR format (EXR standing
//! for **EX**tended **R**ange). The OpenEXR format is the de-facto standard
//! image storage format of the motion-picture industry.
//!
//! The purpose of EXR format is to accurately and efficiently represent high-dynamic-range scene-linear image data and associated metadata, with strong support for multi-part, multi-channel use cases.
//!
//! OpenEXR is widely used in host application software where accuracy is critical, such as photorealistic rendering, texture access, image compositing, deep compositing, and DI.
//! OpenEXR is a project of the [Academy Software Foundation](https://www.aswf.io/). The format and library were originally developed by Industrial Light & Magic and first released in 2003. Weta Digital, Walt Disney Animation Studios, Sony Pictures Imageworks, Pixar Animation Studios, DreamWorks, and other studios, companies, and individuals have made contributions to the code base.
//!
//! OpenEXR is included in the [VFX Reference Platform](https://vfxplatform.com/).
//!
//! The openexr crate is maintained by [the vfx-rs project](https://github.com/vfx-rs).
//!
//!
//! # Features
//! * High dynamic range and color precision.
//! * Support for 16-bit floating-point, 32-bit floating-point, and 32-bit integer pixels.
//! * Multiple image compression algorithms, both lossless and lossy. Some of the included codecs can achieve 2:1 lossless compression ratios on images with film grain. The lossy codecs have been tuned for visual quality and decoding performance.
//! * Extensibility. New image attributes (strings, vectors, integers, etc.) can be added to OpenEXR image headers without affecting backward compatibility with existing OpenEXR applications.
//! * Support for stereoscopic image workflows and a generalization to multi-views.
//! * Flexible support for deep data: pixels can store a variable-length list of samples and, thus, it is possible to store multiple values at different depths for each pixel. Hard surfaces and volumetric data representations are accommodated.
//! * Multipart: ability to encode separate, but related, images in one file. This allows for access to individual parts without the need to read other parts in the file.
//!
//!
//! # Building OpenEXR
//!
//! By default, the openexr crate will build the C++ OpenEXR and Imath libraries from a submodule.
//! If you have existing installations of OpenEXR and Imath you would like to use instead, you can
//! provide their paths to cargo with environment variables, e.g.:
//! ```bash
//! IMATH_ROOT=/path/to/imath OPENEXR_ROOT=/path/to/openexr cargo build
//! ```
//! Note that when you are doing this, *you* are responsible for ensuring that your C++ library
//! versions are compatible with the crate version.
//!
#![allow(dead_code)]

pub mod rgba_file;
pub use rgba_file::{RgbaInputFile, RgbaOutputFile};
pub mod rgba;
pub use rgba::{Rgba, RgbaChannels};

pub use openexr_sys::Compression;
pub use openexr_sys::CubeMapFace;
pub use openexr_sys::DataWindowSource;
pub use openexr_sys::DeepImageState;
pub use openexr_sys::Envmap;
pub use openexr_sys::Imf_Chromaticities_t as Chromaticities;
pub use openexr_sys::LevelMode;
pub use openexr_sys::LevelRoundingMode;
pub use openexr_sys::LineOrder;
pub use openexr_sys::PixelType;

pub mod frame_buffer;
pub use frame_buffer::{
    Frame, FrameBuffer, FrameBufferRef, FrameHandle, Slice,
};
pub mod header;
pub use header::{Header, HeaderRef, HeaderSlice};
pub mod attribute;
pub use attribute::{Attribute, Box2iAttribute, TypedAttribute};
pub mod channel_list;
pub use channel_list::{
    Channel, ChannelList, ChannelListRef, ChannelListRefMut, CHANNEL_FLOAT,
    CHANNEL_HALF, CHANNEL_UINT,
};
pub mod tile_description;
pub use tile_description::TileDescription;
pub mod preview_image;
pub use preview_image::{
    PreviewImage, PreviewImageRef, PreviewImageRefMut, PreviewRgba,
};
pub mod input_file;
pub use input_file::InputFile;
pub mod output_file;
pub use output_file::OutputFile;
pub mod output_part;
pub use output_part::OutputPart;
pub mod input_part;
pub use input_part::InputPart;
pub mod composite_deep_scan_line;
pub mod refptr;
pub use composite_deep_scan_line::CompositeDeepScanLine;
pub mod deep_scan_line_input_part;
pub use deep_scan_line_input_part::DeepScanLineInputPart;
pub mod deep_scan_line_input_file;
pub use deep_scan_line_input_file::DeepScanLineInputFile;
pub mod deep_scan_line_output_file;
pub mod deep_scan_line_output_part;
pub mod deep_tiled_input_file;
pub mod deep_tiled_input_part;
pub mod deep_tiled_output_file;
pub mod deep_tiled_output_part;
pub mod error;
pub use error::Error;
pub mod multi_part_input_file;
pub use multi_part_input_file::MultiPartInputFile;
pub mod multi_part_output_file;
pub use multi_part_output_file::MultiPartOutputFile;
pub mod deep_frame_buffer;
pub use deep_frame_buffer::{DeepFrameBuffer, DeepSlice};
pub mod flat_image;
pub use flat_image::{FlatImage, FlatImageRef, FlatImageRefMut};
pub mod flat_image_level;
pub use flat_image_level::{
    FlatImageLevel, FlatImageLevelRef, FlatImageLevelRefMut,
};
pub mod flat_image_channel;
pub use flat_image_channel::{FlatChannelF16, FlatChannelF32, FlatChannelU32};

pub mod deep_image;
pub use deep_image::{DeepImage, DeepImageRef, DeepImageRefMut};
pub mod deep_image_channel;
pub mod deep_image_io;
pub use deep_image_channel::{DeepChannelF16, DeepChannelF32, DeepChannelU32};
pub mod deep_image_level;
pub use deep_image_level::{
    DeepImageLevel, DeepImageLevelRef, DeepImageLevelRefMut,
};
pub mod sample_count_channel;
pub use sample_count_channel::{
    SampleCountChannel, SampleCountChannelRef, SampleCountChannelRefMut,
};

pub mod version;
pub use version::{Version, VersionFlags};
pub mod flat_image_io;
pub mod tiled_input_file;
pub use tiled_input_file::TiledInputFile;
pub mod tiled_input_part;
pub use tiled_input_part::TiledInputPart;
pub mod tiled_output_file;
pub use tiled_output_file::TiledOutputFile;
pub mod tiled_output_part;
pub use tiled_output_part::TiledOutputPart;
pub mod timecode;
pub use timecode::{TimeCode, TimeCodePacking};

pub mod envmap;
pub mod frames_per_second;
pub mod keycode;
pub mod multi_view;
pub mod rational;
pub mod test_file;

pub mod tiled_rgba_file;

pub mod cppstd;

#[cfg(test)]
mod tests {
    use crate::*;
    use std::path::PathBuf;

    use half::f16;

    pub(crate) fn deep_testpattern(
        width: i32,
        height: i32,
    ) -> (Vec<Vec<f32>>, Vec<Vec<f16>>) {
        let mut z_pixels = Vec::<Vec<f32>>::new();
        let mut a_pixels = Vec::<Vec<f16>>::new();

        for y in 0..height {
            let v = y as f32 / height as f32 * 8.0;
            for x in 0..width {
                let u = (x as f32) / (width as f32) * 8.0;

                let z_v = vec![((u.sin() * v.sin()) + 1.0)];
                let a_v = vec![f16::from_f32(1.0f32)];

                z_pixels.push(z_v);
                a_pixels.push(a_v);
            }
        }

        (z_pixels, a_pixels)
    }

    pub(crate) fn load_ferris() -> (Vec<Rgba>, i32, i32) {
        let path = PathBuf::from(
            std::env::var("CARGO_MANIFEST_DIR")
                .expect("CARGO_MANIFEST_DIR not set"),
        )
        .join("images")
        .join("ferris.png");

        let mut decoder = png::Decoder::new(
            std::fs::File::open(&path).expect("Couldn't open file"),
        );
        decoder.set_transformations(png::Transformations::EXPAND);

        let (info, mut reader) =
            decoder.read_info().expect("Couldn't read info from file");

        let mut buf = vec![0u8; info.buffer_size()];
        reader.next_frame(&mut buf).expect("Coulnd't read frame");

        let pixels: Vec<Rgba> = buf
            .chunks_exact(4)
            .map(|p| {
                Rgba::from_f32(
                    p[0] as f32 / 255.0f32,
                    p[1] as f32 / 255.0f32,
                    p[2] as f32 / 255.0f32,
                    p[3] as f32 / 255.0f32,
                )
            })
            .collect();

        (pixels, info.width as i32, info.height as i32)
    }

    type Result<T, E = Error> = std::result::Result<T, E>;

    fn write_rgba(
        filename: &str,
        pixels: &[Rgba],
        width: i32,
        height: i32,
    ) -> Result<()> {
        let header = Header::from_dimensions(width, height);
        let mut file =
            RgbaOutputFile::new(filename, &header, RgbaChannels::WriteRgba, 4)?;
        file.set_frame_buffer(&pixels, 1, width as usize)?;
        file.write_pixels(height)?;

        Ok(())
    }

    #[test]
    fn write_rgba1() {
        let (pixels, width, height) = load_ferris();

        let header = Header::from_dimensions(width, height);

        let mut file = RgbaOutputFile::new(
            "write_rgba1.exr",
            &header,
            RgbaChannels::WriteRgba,
            1,
        )
        .unwrap();

        file.set_frame_buffer(&pixels, 1, width as usize).unwrap();
        file.write_pixels(height).unwrap();
    }

    #[test]
    fn read_rgba1() {
        use imath_traits::Zero;
        let path = PathBuf::from(
            std::env::var("CARGO_MANIFEST_DIR")
                .expect("CARGO_MANIFEST_DIR not set"),
        )
        .join("images")
        .join("ferris.exr");

        let mut file = RgbaInputFile::new(&path, 1).unwrap();
        let data_window = file.header().data_window::<[i32; 4]>().clone();
        let width = data_window[2] - data_window[0] + 1;
        let height = data_window[3] - data_window[1] + 1;

        let mut pixels = vec![Rgba::zero(); (width * height) as usize];
        file.set_frame_buffer(&mut pixels, 1, width as usize)
            .unwrap();
        file.read_pixels(0, height - 1).unwrap();

        let mut ofile = RgbaOutputFile::with_dimensions(
            "read_rgba1.exr",
            width,
            height,
            RgbaChannels::WriteRgba,
            1.0f32,
            [0.0f32, 0.0f32],
            1.0f32,
            LineOrder::IncreasingY,
            Compression::Piz,
            1,
        )
        .unwrap();

        ofile.set_frame_buffer(&pixels, 1, width as usize).unwrap();
        ofile.write_pixels(height).unwrap();
    }
}

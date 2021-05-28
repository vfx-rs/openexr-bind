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

pub mod cppstd;

#[cfg(test)]
mod tests {
    use crate::*;
    use std::path::PathBuf;

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
    fn write_multipartoutputfile1() {
        let (pixels, width, height) = load_ferris();

        let channel = Channel {
            type_: PixelType::Half.into(),
            x_sampling: 1,
            y_sampling: 1,
            p_linear: true,
        };

        let mut header_array = Header::new_array(2);
        let mut i = 0;
        for mut header in header_array.iter_mut() {
            header.set_compression(Compression::Zip);

            header.channels_mut().insert("R", &channel);
            header.channels_mut().insert("G", &channel);
            header.channels_mut().insert("B", &channel);
            header.channels_mut().insert("A", &channel);

            header.set_image_type("scanlineimage");

            header.set_dimensions(width, height);

            if i == 0 {
                header.set_name("left");
                i += 1;
            } else {
                header.set_name("right");
            }
        }

        let mut frame_buffer_left = FrameBuffer::new();

        frame_buffer_left
            .insert(
                "R",
                &Slice::new(
                    PixelType::Half,
                    &pixels[0].r as *const _ as *const u8,
                    width as i64,
                    height as i64,
                )
                .x_stride(std::mem::size_of::<Rgba>())
                .build()
                .unwrap(),
            )
            .unwrap();

        frame_buffer_left
            .insert(
                "G",
                &Slice::new(
                    PixelType::Half,
                    &pixels[0].g as *const _ as *const u8,
                    width as i64,
                    height as i64,
                )
                .x_stride(std::mem::size_of::<Rgba>())
                .build()
                .unwrap(),
            )
            .unwrap();

        frame_buffer_left
            .insert(
                "B",
                &Slice::new(
                    PixelType::Half,
                    &pixels[0].b as *const _ as *const u8,
                    width as i64,
                    height as i64,
                )
                .x_stride(std::mem::size_of::<Rgba>())
                .build()
                .unwrap(),
            )
            .unwrap();

        frame_buffer_left
            .insert(
                "A",
                &Slice::new(
                    PixelType::Half,
                    &pixels[0].a as *const _ as *const u8,
                    width as i64,
                    height as i64,
                )
                .x_stride(std::mem::size_of::<Rgba>())
                .build()
                .unwrap(),
            )
            .unwrap();

        let mut frame_buffer_right = FrameBuffer::new();

        frame_buffer_right
            .insert(
                "B",
                &Slice::new(
                    PixelType::Half,
                    &pixels[0].r as *const _ as *const u8,
                    width as i64,
                    height as i64,
                )
                .x_stride(std::mem::size_of::<Rgba>())
                .build()
                .unwrap(),
            )
            .unwrap();

        frame_buffer_right
            .insert(
                "G",
                &Slice::new(
                    PixelType::Half,
                    &pixels[0].g as *const _ as *const u8,
                    width as i64,
                    height as i64,
                )
                .x_stride(std::mem::size_of::<Rgba>())
                .build()
                .unwrap(),
            )
            .unwrap();

        frame_buffer_right
            .insert(
                "R",
                &Slice::new(
                    PixelType::Half,
                    &pixels[0].b as *const _ as *const u8,
                    width as i64,
                    height as i64,
                )
                .x_stride(std::mem::size_of::<Rgba>())
                .build()
                .unwrap(),
            )
            .unwrap();

        frame_buffer_right
            .insert(
                "A",
                &Slice::new(
                    PixelType::Half,
                    &pixels[0].a as *const _ as *const u8,
                    width as i64,
                    height as i64,
                )
                .x_stride(std::mem::size_of::<Rgba>())
                .build()
                .unwrap(),
            )
            .unwrap();

        let file = MultiPartOutputFile::new(
            "write_multipartoutputfile1.exr",
            &header_array,
            true,
            4,
        )
        .unwrap();

        let mut part_left = OutputPart::new(&file, 0).unwrap();
        let mut part_right = OutputPart::new(&file, 1).unwrap();

        part_left.set_frame_buffer(&frame_buffer_left).unwrap();
        part_right.set_frame_buffer(&frame_buffer_right).unwrap();

        unsafe {
            part_left.write_pixels(height).unwrap();
            part_right.write_pixels(height).unwrap();
        }
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

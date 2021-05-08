pub mod rgba_file;
pub use rgba_file::{RgbaInputFile, RgbaOutputFile};
pub mod rgba;
pub use rgba::{Rgba, RgbaChannels};

pub use openexr_sys::Compression;
pub use openexr_sys::Imf_Chromaticities_t as Chromaticities;
pub use openexr_sys::LineOrder;
pub use openexr_sys::PixelType;

pub mod frame_buffer;
pub use frame_buffer::{FrameBuffer, FrameBufferRef, Slice};
pub mod header;
pub use header::{Header, HeaderRef, HeaderSlice};
pub mod attribute;
pub use attribute::{Attribute, Box2iAttribute, TypedAttribute};
pub mod channel_list;
pub use channel_list::{Channel, ChannelList};
pub mod tile_description;
pub use tile_description::TileDescription;
pub mod preview_image;
pub use preview_image::{PreviewImage, PreviewRgba};
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

pub mod imath;

#[cfg(test)]
mod tests {
    use crate::*;
    use std::path::PathBuf;

    fn load_ferris() -> (Vec<Rgba>, i32, i32) {
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

    #[test]
    fn write_rgba1() {
        let (pixels, width, height) = load_ferris();

        let mut header = Header::from_dimensions(width, height);
        header.set_compression(Compression::Piz);

        let mut file = RgbaOutputFile::new(
            "write_rgba1.exr",
            &header,
            RgbaChannels::WriteRgba,
            1,
        )
        .unwrap();

        file.set_frame_buffer(&pixels, 1, width as usize).unwrap();
        file.write_pixels(height).unwrap();
        std::mem::drop(file);
    }

    #[test]
    fn write_outputfile1() {
        let (pixels, width, height) = load_ferris();

        let mut header = Header::from_dimensions(width, height);
        header.set_compression(Compression::Piz);

        let channel = Channel {
            type_: PixelType::Half.into(),
            x_sampling: 1,
            y_sampling: 1,
            p_linear: true,
        };

        header.channels_mut().insert("R", &channel);
        header.channels_mut().insert("G", &channel);
        header.channels_mut().insert("B", &channel);
        header.channels_mut().insert("A", &channel);

        let mut frame_buffer = FrameBuffer::new();

        frame_buffer
            .insert(
                "R",
                &Slice::new(
                    PixelType::Half,
                    &pixels[0].r as *const _ as *const u8,
                    width as i64,
                    height as i64,
                )
                .x_stride(std::mem::size_of::<Rgba>())
                .y_stride(std::mem::size_of::<Rgba>() * width as usize)
                .build()
                .unwrap(),
            )
            .unwrap();

        frame_buffer
            .insert(
                "G",
                &Slice::new(
                    PixelType::Half,
                    &pixels[0].g as *const _ as *const u8,
                    width as i64,
                    height as i64,
                )
                .x_stride(std::mem::size_of::<Rgba>())
                .y_stride(std::mem::size_of::<Rgba>() * width as usize)
                .build()
                .unwrap(),
            )
            .unwrap();

        frame_buffer
            .insert(
                "B",
                &Slice::new(
                    PixelType::Half,
                    &pixels[0].b as *const _ as *const u8,
                    width as i64,
                    height as i64,
                )
                .x_stride(std::mem::size_of::<Rgba>())
                .y_stride(std::mem::size_of::<Rgba>() * width as usize)
                .build()
                .unwrap(),
            )
            .unwrap();

        frame_buffer
            .insert(
                "A",
                &Slice::new(
                    PixelType::Half,
                    &pixels[0].a as *const _ as *const u8,
                    width as i64,
                    height as i64,
                )
                .x_stride(std::mem::size_of::<Rgba>())
                .y_stride(std::mem::size_of::<Rgba>() * width as usize)
                .build()
                .unwrap(),
            )
            .unwrap();

        let mut file =
            OutputFile::new("write_outputfile1.exr", &header, 1).unwrap();
        file.set_frame_buffer(&frame_buffer).unwrap();
        unsafe { file.write_pixels(height).unwrap() };
    }

    #[test]
    fn read_rgba1() {
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

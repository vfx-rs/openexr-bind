pub mod rgba_file;
pub use rgba_file::{RgbaInputFile, RgbaOutputFile};
pub mod rgba;
pub use rgba::{Rgba, RgbaChannels};

pub use openexr_sys::Compression;
pub use openexr_sys::LineOrder;

pub mod frame_buffer;
pub use frame_buffer::{FrameBuffer, Slice};
pub mod header;
pub use header::{Header, HeaderRef};
pub mod attribute;
pub use attribute::{Attribute, Box2iAttribute, TypedAttribute};
pub mod channel_list;
pub use channel_list::ChannelList;
pub mod tile_description;
pub use tile_description::TileDescription;
pub mod preview_image;
pub use preview_image::PreviewImage;
pub mod input_file;
pub use input_file::InputFile;
pub mod input_part;
pub use input_part::InputPart;
pub mod pixel_type;
pub mod refptr;
pub use pixel_type::PixelType;

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
        );

        file.set_frame_buffer(&pixels, 1, width as usize);
        file.write_pixels(height);
    }

    #[test]
    fn read_rgba1() {
        let path = PathBuf::from(
            std::env::var("CARGO_MANIFEST_DIR")
                .expect("CARGO_MANIFEST_DIR not set"),
        )
        .join("images")
        .join("ferris.exr");

        let mut file = RgbaInputFile::new(&path, 1);
        let data_window = file.header().data_window::<[i32; 4]>().clone();
        let width = data_window[2] - data_window[0] + 1;
        let height = data_window[3] - data_window[1] + 1;

        let mut pixels = vec![Rgba::zero(); (width * height) as usize];
        file.set_frame_buffer(&mut pixels, 1, width as usize);
        file.read_pixels(0, height - 1);

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
        );

        ofile.set_frame_buffer(&pixels, 1, width as usize);
        ofile.write_pixels(height);
    }
}

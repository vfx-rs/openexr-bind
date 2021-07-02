use crate::{
    Error, FrameBuffer, FrameBufferRef, HeaderRef, LevelMode,
    LevelRoundingMode, MultiPartInputFile,
};
use imath_traits::Bound2;
use openexr_sys as sys;
use std::ffi::CStr;
use std::fmt::Debug;
use std::path::PathBuf;

pub struct TiledInputPart<'a> {
    inner: sys::Imf_TiledInputPart_t,
    // The MultiPartInputFile is borrowed in the TiledInputPart, so we need to
    // make sure that its lifetime is longer than the TiledInputPart.
    phantom: std::marker::PhantomData<&'a MultiPartInputFile>,
}

impl<'a> Debug for TiledInputPart<'a> {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.debug_struct("TiledInputPart")
            .field("file_name", &self.file_name())
            .finish()
    }
}

impl<'a> TiledInputPart<'a> {
    pub fn new(multi_part_file: &'a MultiPartInputFile, part_number: i32) -> Self {
        let mut inner = std::mem::MaybeUninit::uninit();

        unsafe {
            sys::Imf_TiledInputPart_ctor(
                inner.as_mut_ptr(),
                multi_part_file.0,
                part_number,
            )
            .into_result()
            .unwrap();

            Self {
                inner: inner.assume_init(),
                phantom: std::marker::PhantomData,
            }
        }
    }

    pub fn file_name(&self) -> PathBuf {
        let mut ptr = std::ptr::null();

        unsafe {
            sys::Imf_TiledInputPart_fileName(&self.inner, &mut ptr)
                .into_result()
                .unwrap();

            // TODO: Validate if OpenEXR will always return a valid string, or
            // if we need to return a Result<PathBuf, Error>.
            if ptr.is_null() {
                panic!(
                    "Received null ptr from sys::Imf_TiledInputPart_fileName"
                );
            }

            let file_name = CStr::from_ptr(ptr);

            PathBuf::from(
                file_name.to_str().expect("Invalid bytes in filename"),
            )
        }
    }

    pub fn header(&'a self) -> HeaderRef<'a> {
        let mut ptr = std::ptr::null();

        unsafe {
            sys::Imf_TiledInputPart_header(&self.inner, &mut ptr)
                .into_result()
                .unwrap();

            // TODO: Validate if OpenEXR will always return a valid header, or
            // if we need to return a Result<Header, Error>.
            if ptr.is_null() {
                panic!("Received null ptr from sys::Imf_TiledInputPart_header");
            }
        }

        HeaderRef::new(ptr)
    }

    pub fn version(&self) -> crate::Version {
        let mut version = 0;

        unsafe {
            sys::Imf_TiledInputPart_version(&self.inner, &mut version)
                .into_result()
                .unwrap();
        }

        crate::Version::from_c_int(version)
    }

    pub fn set_frame_buffer(
        &mut self,
        frame_buffer: &FrameBuffer,
    ) -> Result<(), Error> {
        unsafe {
            // Assume that the frame buffer is valid, since it is coming from
            // Rust.
            sys::Imf_TiledInputPart_setFrameBuffer(
                &mut self.inner,
                frame_buffer.ptr,
            )
            .into_result()?;
        }

        Ok(())
    }

    pub fn frame_buffer(&'a self) -> FrameBufferRef<'a> {
        let mut ptr = std::ptr::null();

        unsafe {
            sys::Imf_TiledInputPart_frameBuffer(&self.inner, &mut ptr)
                .into_result()
                .unwrap();

            // TODO: Validate if OpenEXR will always return a valid frame
            // buffer, or if we need to return a Result<FrameBufferRef, Error>.
            if ptr.is_null() {
                panic!("Received null ptr from sys::Imf_TiledInputPart_frameBuffer");
            }
        }

        FrameBufferRef::new(ptr)
    }

    pub fn is_complete(&self) -> bool {
        let mut is_complete = false;

        unsafe {
            sys::Imf_TiledInputPart_isComplete(&self.inner, &mut is_complete)
                .into_result()
                .unwrap();
        }

        is_complete
    }

    pub fn tile_x_size(&self) -> u32 {
        let mut tile_x_size = 0;

        unsafe {
            sys::Imf_TiledInputPart_tileXSize(&self.inner, &mut tile_x_size)
                .into_result()
                .unwrap();
        }

        tile_x_size
    }

    pub fn tile_y_size(&self) -> u32 {
        let mut tile_y_size = 0;

        unsafe {
            sys::Imf_TiledInputPart_tileYSize(&self.inner, &mut tile_y_size)
                .into_result()
                .unwrap();
        }

        tile_y_size
    }

    pub fn level_mode(&self) -> LevelMode {
        let mut level_mode = sys::Imf_LevelMode(0);

        unsafe {
            sys::Imf_TiledInputPart_levelMode(&self.inner, &mut level_mode);
        }

        LevelMode::from(level_mode)
    }

    pub fn level_rounding_mode(&self) -> LevelRoundingMode {
        let mut level_round_mode = sys::Imf_LevelRoundingMode(0);

        unsafe {
            sys::Imf_TiledInputPart_levelRoundingMode(
                &self.inner,
                &mut level_round_mode,
            )
            .into_result()
            .unwrap();
        }

        LevelRoundingMode::from(level_round_mode)
    }

    pub fn num_levels(&self) -> Result<i32, Error> {
        let mut num_levels = 0;

        unsafe {
            sys::Imf_TiledInputPart_numLevels(&self.inner, &mut num_levels)
                .into_result()?;
        }

        Ok(num_levels)
    }

    pub fn num_x_levels(&self) -> i32 {
        let mut num_x_levels = 0;

        unsafe {
            sys::Imf_TiledInputPart_numXLevels(&self.inner, &mut num_x_levels)
                .into_result()
                .unwrap();
        }

        num_x_levels
    }

    pub fn num_y_levels(&self) -> i32 {
        let mut num_y_levels = 0;

        unsafe {
            sys::Imf_TiledInputPart_numYLevels(&self.inner, &mut num_y_levels)
                .into_result()
                .unwrap();
        }

        num_y_levels
    }

    pub fn is_valid_level(&self, lx: i32, ly: i32) -> bool {
        let mut is_valid_level = false;

        unsafe {
            sys::Imf_TiledInputPart_isValidLevel(
                &self.inner,
                &mut is_valid_level,
                lx,
                ly,
            )
            .into_result()
            .unwrap();
        }

        is_valid_level
    }

    pub fn level_width(&self, lx: i32) -> Result<i32, Error> {
        let mut level_width = 0;

        unsafe {
            sys::Imf_TiledInputPart_levelWidth(
                &self.inner,
                &mut level_width,
                lx,
            )
            .into_result()?;
        }

        Ok(level_width)
    }

    pub fn level_height(&self, ly: i32) -> Result<i32, Error> {
        let mut level_height = 0;

        unsafe {
            sys::Imf_TiledInputPart_levelHeight(
                &self.inner,
                &mut level_height,
                ly,
            )
            .into_result()?;
        }

        Ok(level_height)
    }

    pub fn num_x_tiles(&self, lx: i32) -> Result<i32, Error> {
        let mut num_x_tiles = 0;

        unsafe {
            sys::Imf_TiledInputPart_numXTiles(
                &self.inner,
                &mut num_x_tiles,
                lx,
            )
            .into_result()?;
        }

        Ok(num_x_tiles)
    }

    pub fn num_y_tiles(&self, ly: i32) -> Result<i32, Error> {
        let mut num_y_tiles = 0;

        unsafe {
            sys::Imf_TiledInputPart_numYTiles(
                &self.inner,
                &mut num_y_tiles,
                ly,
            )
            .into_result()?;
        }

        Ok(num_y_tiles)
    }

    pub fn data_window_for_level<T>(&self, lx: i32, ly: i32) -> Result<T, Error>
    where
        T: Bound2<i32>,
    {
        let mut data_window =
            std::mem::MaybeUninit::<sys::Imath_Box2i_t>::uninit();

        unsafe {
            sys::Imf_TiledInputPart_dataWindowForLevel(
                &self.inner,
                data_window.as_mut_ptr(),
                lx,
                ly,
            )
            .into_result()?;

            let data_window: [i32; 4] =
                std::mem::transmute(data_window.assume_init());
            Ok(T::from_slice(&data_window))
        }
    }

    pub fn data_window_for_tile<T: Bound2<i32>>(
        &self,
        dx: i32,
        dy: i32,
        lx: i32,
        ly: i32,
    ) -> Result<T, Error> {
        let mut data_window =
            std::mem::MaybeUninit::<sys::Imath_Box2i_t>::uninit();

        unsafe {
            sys::Imf_TiledInputPart_dataWindowForTile(
                &self.inner,
                data_window.as_mut_ptr(),
                dx,
                dy,
                lx,
                ly,
            )
            .into_result()?;

            let data_window: [i32; 4] =
                std::mem::transmute(data_window.assume_init());
            Ok(T::from_slice(&data_window))
        }
    }

    pub fn read_tile(
        &mut self,
        dx: i32,
        dy: i32,
        lx: i32,
        ly: i32,
    ) -> Result<(), Error> {
        unsafe {
            sys::Imf_TiledInputPart_readTile(&mut self.inner, dx, dy, lx, ly)
                .into_result()?;
        }

        Ok(())
    }

    pub fn read_tiles(
        &mut self,
        dx1: i32,
        dx2: i32,
        dy1: i32,
        dy2: i32,
        lx: i32,
        ly: i32,
    ) -> Result<(), Error> {
        unsafe {
            sys::Imf_TiledInputPart_readTiles(
                &mut self.inner,
                dx1,
                dx2,
                dy1,
                dy2,
                lx,
                ly,
            )
            .into_result()?;
        }

        Ok(())
    }
}

#[cfg(test)]
mod tests {
    use std::path::PathBuf;

    lazy_static::lazy_static! {
        static ref SRC_IMAGE_PATH: PathBuf = {
            PathBuf::from(
                std::env::var("CARGO_MANIFEST_DIR")
                    .expect("CARGO_MANIFEST_DIR not set"),
            )
            .join("images")
            .join("ferris-tiled.exr")
        };
    }

    #[test]
    fn test_tiledinputpart_file_name_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let result = tiled_input_part.file_name();

        assert_eq!(&*SRC_IMAGE_PATH, &result);
    }

    #[test]
    fn test_tiledinputpart_header_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let header = tiled_input_part.header();

        header.sanity_check(true, false).unwrap();
    }

    #[test]
    fn test_tiledinputpart_version_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let version = tiled_input_part.version();

        assert_eq!(version.is_tiled(), true);
    }

    #[test]
    fn test_tiledinputpart_set_frame_buffer_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let mut tiled_input_part = super::TiledInputPart::new(&input, 0);
        let frame_buffer = crate::FrameBuffer::new();
        tiled_input_part.set_frame_buffer(&frame_buffer).unwrap();
    }

    #[test]
    fn test_tiledinputpart_frame_buffer_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let _ = tiled_input_part.frame_buffer();
    }

    #[test]
    fn test_tiledinputpart_is_complete_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let is_complete = tiled_input_part.is_complete();

        assert_eq!(is_complete, true);
    }

    #[test]
    fn test_tiledinputpart_tile_x_size_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let tile_x_size = tiled_input_part.tile_x_size();

        assert_eq!(tile_x_size, 64);
    }

    #[test]
    fn test_tiledinputpart_tile_y_size_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let tile_y_size = tiled_input_part.tile_y_size();

        assert_eq!(tile_y_size, 64);
    }

    #[test]
    fn test_tiledinputpart_level_mode_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let level_mode = tiled_input_part.level_mode();

        assert_eq!(level_mode, crate::LevelMode::OneLevel);
    }

    #[test]
    fn test_tiledinputpart_level_rounding_mode_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let level_rounding_mode = tiled_input_part.level_rounding_mode();

        assert_eq!(level_rounding_mode, crate::LevelRoundingMode::RoundDown);
    }

    #[test]
    fn test_tiledinputpart_num_levels_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let num_levels = tiled_input_part.num_levels().unwrap();

        assert_eq!(num_levels, 1);
    }

    #[test]
    fn test_tiledinputpart_num_x_levels_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let num_x_levels = tiled_input_part.num_x_levels();

        assert_eq!(num_x_levels, 1);
    }

    #[test]
    fn test_tiledinputpart_num_y_levels_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let num_y_levels = tiled_input_part.num_y_levels();

        assert_eq!(num_y_levels, 1);
    }

    #[test]
    fn test_tiledinputpart_is_valid_level_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let is_valid_level = tiled_input_part.is_valid_level(0, 0);

        assert_eq!(is_valid_level, true);
    }

    #[test]
    fn test_tiledinputpart_is_valid_level_failure_invalid_level() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let is_valid_level = tiled_input_part.is_valid_level(100, 100);

        assert_eq!(is_valid_level, false);
    }

    #[test]
    fn test_tiledinputpart_level_width_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let level_width = tiled_input_part.level_width(0).unwrap();

        assert_eq!(level_width, 1200);
    }

    #[test]
    #[should_panic]
    fn test_tiledinputpart_level_width_failure_invalid_level() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        tiled_input_part.level_width(i32::MIN).unwrap();
    }

    #[test]
    fn test_tiledinputpart_level_height_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let level_height = tiled_input_part.level_height(0).unwrap();

        assert_eq!(level_height, 800);
    }

    #[test]
    #[should_panic]
    fn test_tiledinputpart_level_height_failure_invalid_level() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        tiled_input_part.level_height(i32::MIN).unwrap();
    }

    #[test]
    fn test_tiledinputpart_num_x_tiles_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let num_x_tiles = tiled_input_part.num_x_tiles(0).unwrap();

        assert_eq!(num_x_tiles, 19);
    }

    #[test]
    #[should_panic]
    fn test_tiledinputpart_num_x_tiles_failed_invalid_level() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        tiled_input_part.num_x_tiles(i32::MIN).unwrap();
    }

    #[test]
    fn test_tiledinputpart_num_y_tiles_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let num_y_tiles = tiled_input_part.num_y_tiles(0).unwrap();

        assert_eq!(num_y_tiles, 13);
    }

    #[test]
    #[should_panic]
    fn test_tiledinputpart_num_y_tiles_failed_invalid_level() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        tiled_input_part.num_y_tiles(i32::MIN).unwrap();
    }

    #[test]
    fn test_tiledinputpart_data_window_for_level_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let data_window_for_level: [i32; 4] =
            tiled_input_part.data_window_for_level(0, 0).unwrap();

        assert_eq!(data_window_for_level, [0, 0, 1199, 799]);
    }

    #[test]
    #[should_panic]
    fn test_tiledinputpart_data_window_for_level_failure_invalid_level() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        tiled_input_part
            .data_window_for_level::<[i32; 4]>(i32::MIN, i32::MIN)
            .unwrap();
    }

    #[test]
    fn test_tiledinputpart_data_window_for_tile_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        let data_window_for_tile: [i32; 4] =
            tiled_input_part.data_window_for_tile(0, 0, 0, 0).unwrap();

        assert_eq!(data_window_for_tile, [0, 0, 63, 63]);
    }

    #[test]
    #[should_panic]
    fn test_tiledinputpart_data_window_for_tile_failure_invalid_level() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let tiled_input_part = super::TiledInputPart::new(&input, 0);
        tiled_input_part
            .data_window_for_tile::<[i32; 4]>(
                i32::MIN,
                i32::MIN,
                i32::MIN,
                i32::MIN,
            )
            .unwrap();
    }

    #[test]
    fn test_tiledinputpart_read_tile_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let mut tiled_input_part = super::TiledInputPart::new(&input, 0);
        let frame_buffer = crate::FrameBuffer::new();
        tiled_input_part.set_frame_buffer(&frame_buffer).unwrap();
        tiled_input_part.read_tile(0, 0, 0, 0).unwrap();
    }

    #[test]
    #[should_panic]
    fn test_tiledinputpart_read_tile_failure_invalid_level_and_frame_buffer() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let mut tiled_input_part = super::TiledInputPart::new(&input, 0);
        tiled_input_part
            .read_tile(i32::MIN, i32::MIN, i32::MIN, i32::MIN)
            .unwrap();
    }

    #[test]
    fn test_tiledinputpart_read_tiles_success() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let mut tiled_input_part = super::TiledInputPart::new(&input, 0);
        let frame_buffer = crate::FrameBuffer::new();
        tiled_input_part.set_frame_buffer(&frame_buffer).unwrap();
        tiled_input_part.read_tiles(0, 0, 0, 0, 0, 0).unwrap();
    }

    #[test]
    #[should_panic]
    fn test_tiledinputpart_read_tiles_failure_invalid_level_and_frame_buffer() {
        let input = crate::MultiPartInputFile::new(&*SRC_IMAGE_PATH, 0, true).unwrap();
        let mut tiled_input_part = super::TiledInputPart::new(&input, 0);
        tiled_input_part
            .read_tiles(
                i32::MIN,
                i32::MIN,
                i32::MIN,
                i32::MIN,
                i32::MIN,
                i32::MIN,
            )
            .unwrap();
    }
}

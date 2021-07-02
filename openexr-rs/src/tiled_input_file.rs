use crate::{
    Error, FrameBuffer, FrameBufferRef, HeaderRef, LevelMode, LevelRoundingMode,
};
use imath_traits::Bound2;
use openexr_sys as sys;
use std::ffi::{CStr, CString};
use std::fmt::Debug;
use std::os::raw::c_char;
use std::path::{Path, PathBuf};

/// RawTileData represents a raw tile from an EXR.
///
#[derive(Debug, Clone)]
pub struct RawTileData<'a> {
    dx: i32,
    dy: i32,
    lx: i32,
    ly: i32,
    pixel_data: &'a [c_char],
}

impl<'a> RawTileData<'a> {
    /// The pixel coordinates on the x axis.
    ///
    pub fn dx(&self) -> i32 {
        self.dx
    }

    /// The pixel coordinates on the y axis.
    ///
    pub fn dy(&self) -> i32 {
        self.dy
    }

    /// The level coordinates on the x axis.
    ///
    pub fn lx(&self) -> i32 {
        self.lx
    }

    /// The level coordinates on the y axis.
    ///
    pub fn ly(&self) -> i32 {
        self.ly
    }

    /// The raw pixel data from the tile.
    ///
    pub fn pixel_data(&self) -> &[c_char] {
        // TODO: Should this return a u8 vs i8? Or, would it be better to return
        // a f16 or f32?
        self.pixel_data
    }
}

/// A TiledInputFile represents reading a tiled EXR file from disk.
///
pub struct TiledInputFile {
    inner: *mut sys::Imf_TiledInputFile_t,
}

impl Debug for TiledInputFile {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        f.debug_struct("TiledInputFile")
            .field("file_name", &self.file_name())
            .finish()
    }
}

impl Drop for TiledInputFile {
    fn drop(&mut self) {
        unsafe {
            sys::Imf_TiledInputFile_dtor(self.inner)
                .into_result()
                .unwrap();
        }
    }
}

impl TiledInputFile {
    /// A constructor that opens the file with the specified name, and reads the
    /// file header. The num_threads parameter specifies how many worker threads
    /// this file will try to keep busy when decompressing individual tiles.
    /// Destroying TiledInputFile objects constructed with this constructor
    /// automatically closes the corresponding files.
    ///
    /// # Errors
    ///
    /// This will return an error if the file is not tiled.
    ///
    pub fn new<P: AsRef<Path>>(
        file_name: P,
        num_threads: i32,
    ) -> Result<Self, Error> {
        let mut ptr = std::ptr::null_mut();
        let c_file_name = CString::new(
            file_name
                .as_ref()
                .to_str()
                .expect("Invalid bytes in filename"),
        )
        .expect("Internal null bytes in filename");

        unsafe {
            sys::Imf_TiledInputFile_ctor(
                &mut ptr,
                c_file_name.as_ptr(),
                num_threads,
            )
            .into_result()?;

            // TODO: Validate if OpenEXR will always return a valid tiled input
            // file.
            if ptr.is_null() {
                panic!("Received null ptr from sys::Imf_TiledInputFile_ctor");
            }
        }

        Ok(Self { inner: ptr })
    }

    /// Access to the file path
    ///
    pub fn file_name(&self) -> PathBuf {
        let mut ptr = std::ptr::null();

        unsafe {
            sys::Imf_TiledInputFile_fileName(self.inner, &mut ptr)
                .into_result()
                .unwrap();

            // TODO: Validate if OpenEXR will always return a valid string, or
            // if we need to return a Result<PathBuf, Error>.
            if ptr.is_null() {
                panic!(
                    "Received null ptr from sys::Imf_TiledInputFile_fileName"
                );
            }

            let file_name = CStr::from_ptr(ptr);

            PathBuf::from(
                file_name.to_str().expect("Invalid bytes in filename"),
            )
        }
    }

    /// Access to the file header
    ///
    pub fn header<'a>(&'a self) -> HeaderRef<'a> {
        let mut ptr = std::ptr::null();

        unsafe {
            sys::Imf_TiledInputFile_header(self.inner, &mut ptr)
                .into_result()
                .unwrap();

            // TODO: Validate if OpenEXR will always return a valid header, or
            // if we need to return a Result<Header, Error>.
            if ptr.is_null() {
                panic!("Received null ptr from sys::Imf_TiledInputFile_header");
            }
        }

        HeaderRef::new(ptr)
    }

    /// Access to the file format version
    ///
    pub fn version(&self) -> crate::Version {
        let mut version = 0;

        unsafe {
            sys::Imf_TiledInputFile_version(self.inner, &mut version)
                .into_result()
                .unwrap();
        }

        crate::Version::from_c_int(version)
    }

    /// Set the current frame buffer -- copies the FrameBuffer
    /// object into the TiledInputFile object.
    ///
    /// The current frame buffer is the destination for the pixel
    /// data read from the file.  The current frame buffer must be
    /// set at least once before read_tile() is called.
    /// The current frame buffer can be changed after each call
    /// to read_tile().
    ///
    /// # Errors
    ///
    /// Returns an error if the sub-sampling factors of the input file
    /// are not compatible with the FrameBuffer's sub-sampling factors.
    ///
    pub fn set_frame_buffer(
        &mut self,
        frame_buffer: &FrameBuffer,
    ) -> Result<(), Error> {
        unsafe {
            // Assume that the frame buffer is valid, since it is coming from
            // Rust.
            sys::Imf_TiledInputFile_setFrameBuffer(
                self.inner,
                frame_buffer.ptr,
            )
            .into_result()?;
        }

        Ok(())
    }

    /// Access to the current frame buffer
    ///
    pub fn frame_buffer<'a>(&'a self) -> FrameBufferRef<'a> {
        let mut ptr = std::ptr::null();

        unsafe {
            sys::Imf_TiledInputFile_frameBuffer(self.inner, &mut ptr)
                .into_result()
                .unwrap();

            // TODO: Validate if OpenEXR will always return a valid frame
            // buffer, or if we need to return a Result<FrameBufferRef, Error>.
            if ptr.is_null() {
                panic!("Received null ptr from sys::Imf_TiledInputFile_frameBuffer");
            }
        }

        FrameBufferRef::new(ptr)
    }

    /// Returns true if all pixels in the data window
    /// (in all levels) are present in the input file, or false if
    /// any pixels are missing.  (Another program may still be busy
    /// writing the file, or file writing may have been aborted
    /// prematurely.)
    ///
    pub fn is_complete(&self) -> bool {
        let mut is_complete = false;

        unsafe {
            sys::Imf_TiledInputFile_isComplete(self.inner, &mut is_complete)
                .into_result()
                .unwrap();
        }

        is_complete
    }

    /// Return the x size field from the file header's TileDescriptionAttribute.
    ///
    pub fn tile_x_size(&self) -> u32 {
        let mut tile_x_size = 0;

        unsafe {
            sys::Imf_TiledInputFile_tileXSize(self.inner, &mut tile_x_size)
                .into_result()
                .unwrap();
        }

        tile_x_size
    }

    /// Return the y size field from the file header's TileDescriptionAttribute.
    ///
    pub fn tile_y_size(&self) -> u32 {
        let mut tile_y_size = 0;

        unsafe {
            sys::Imf_TiledInputFile_tileYSize(self.inner, &mut tile_y_size)
                .into_result()
                .unwrap();
        }

        tile_y_size
    }

    /// Return the level mode field from the file header's
    /// TileDescriptionAttribute.
    ///
    pub fn level_mode(&self) -> LevelMode {
        let mut level_mode = sys::Imf_LevelMode(0);

        unsafe {
            sys::Imf_TiledInputFile_levelMode(self.inner, &mut level_mode);
        }

        LevelMode::from(level_mode)
    }

    /// Return the level rounding mode field from the file header's
    /// TileDescriptionAttribute.
    ///
    pub fn level_rounding_mode(&self) -> LevelRoundingMode {
        let mut level_round_mode = sys::Imf_LevelRoundingMode(0);

        unsafe {
            sys::Imf_TiledInputFile_levelRoundingMode(
                self.inner,
                &mut level_round_mode,
            )
            .into_result()
            .unwrap();
        }

        LevelRoundingMode::from(level_round_mode)
    }

    /// A convenience function for use with `LevelMode::MIPMAP_LEVELS` files.
    ///
    ///	If `TiledInputFile::level_mode() == LevelMode::ONE_LEVEL` or
    /// `TiledInputFile::level_mode() == MIPMAP_LEVELS`, then the return value
    /// is the same as for `TiledInputFile::num_x_levels()`.
    ///
    /// # Errors
    ///
    ///	If `TiledInputFile::level_mode() == LevelMode::RIPMAP_LEVELS`, then a
    /// LogicExc error is returned.
    ///
    pub fn num_levels(&self) -> Result<i32, Error> {
        let mut num_levels = 0;

        unsafe {
            sys::Imf_TiledInputFile_numLevels(self.inner, &mut num_levels)
                .into_result()?;
        }

        Ok(num_levels)
    }

    /// Returns the file's number of levels in the x direction.
    ///
    ///	If `TiledInputFile::level_mode() == LevelRoundingMode::ONE_LEVEL`,
    /// then the return value is `1`.
    ///
    ///	If `TiledInputFile::level_mode() == LevelRoundingMode::MIPMAP_LEVELS`,
    ///	then the return value is `rfunc (log (max (w, h)) / log (2)) + 1`.
    ///
    ///	If `TiledInputFile::level_mode() == LevelRoundingMode::RIPMAP_LEVELS`,
    ///	then the return value is `rfunc (log (w) / log (2)) + 1`.
    ///
    ///	Where...
    ///
    ///	- w is the width of the image's data window, `max.x - min.x + 1`
    ///	- y is the height of the image's data window, `max.y - min.y + 1`
    ///	- `rfunc(x)` is either `floor(x)`, or `ceil(x)`, depending on whether
    ///   `TiledInputFile::level_rounding_mode()` returns
    ///   `LevelRoundingMode::ROUND_DOWN` or `LevelRoundingMode::ROUND_UP`.
    ///
    pub fn num_x_levels(&self) -> i32 {
        let mut num_x_levels = 0;

        unsafe {
            sys::Imf_TiledInputFile_numXLevels(self.inner, &mut num_x_levels)
                .into_result()
                .unwrap();
        }

        num_x_levels
    }

    /// Returns the file's number of levels in the y direction.
    ///
    ///	If `TiledInputFile::level_mode() == LevelMode::ONE_LEVEL` or
    /// `TiledInputFile::level_mode() == LevelMode::MIPMAP_LEVELS`, then the
    /// return value is the same as for `TiledInputFile::num_x_levels()`.
    ///
    ///	If `TiledInputFile::level_mode() == RIPMAP_LEVELS` then the return value
    /// is `rfunc (log (h) / log (2)) + 1`.
    ///
    pub fn num_y_levels(&self) -> i32 {
        let mut num_y_levels = 0;

        unsafe {
            sys::Imf_TiledInputFile_numYLevels(self.inner, &mut num_y_levels)
                .into_result()
                .unwrap();
        }

        num_y_levels
    }

    /// Returns true if the file contains a level with level number `(lx, ly)`,
    /// false if not.
    ///
    pub fn is_valid_level(&self, lx: i32, ly: i32) -> bool {
        let mut is_valid_level = false;

        unsafe {
            sys::Imf_TiledInputFile_isValidLevel(
                self.inner,
                &mut is_valid_level,
                lx,
                ly,
            )
            .into_result()
            .unwrap();
        }

        is_valid_level
    }

    /// Return the width of a level with a level number `(lx, *)`, where `*` is
    /// any number.
    ///
    /// Return value is `max (1, rfunc (w / pow (2, lx)))`
    ///
    /// # Errors
    ///
    /// May return error if wrapped OpenEXR library throws an exception.
    ///
    pub fn level_width(&self, lx: i32) -> Result<i32, Error> {
        let mut level_width = 0;

        unsafe {
            sys::Imf_TiledInputFile_levelWidth(
                self.inner,
                &mut level_width,
                lx,
            )
            .into_result()?;
        }

        Ok(level_width)
    }

    /// Return the height of a level with a level number `(*, ly)`, where `*` is
    /// any number.
    ///
    /// Return value is `max (1, rfunc (h / pow (2, ly)))`
    ///
    /// # Errors
    ///
    /// May return error if wrapped OpenEXR library throws an exception.
    ///
    pub fn level_height(&self, ly: i32) -> Result<i32, Error> {
        let mut level_height = 0;

        unsafe {
            sys::Imf_TiledInputFile_levelHeight(
                self.inner,
                &mut level_height,
                ly,
            )
            .into_result()?;
        }

        Ok(level_height)
    }

    /// Returns the number of tiles in x direction that cover a level with level
    /// number `(lx, *)`, where `*` is any number.
    ///
    ///	Return value is `(TiledInputFile::level_width(lx) + TiledInputFile::tile_x_size() - 1) / TiledInputFile::tile_x_size()`
    ///
    pub fn num_x_tiles(&self, lx: i32) -> Result<i32, Error> {
        let mut num_x_tiles = 0;

        unsafe {
            sys::Imf_TiledInputFile_numXTiles(self.inner, &mut num_x_tiles, lx)
                .into_result()?;
        }

        Ok(num_x_tiles)
    }

    /// Returns the number of tiles in y direction that cover a level with level
    /// number `(*, ly)`, where `*` is any number.
    ///
    ///	Return value is `(TiledInputFile::level_height(ly) + TiledInputFile::tile_x_size() - 1) / TiledInputFile::tile_x_size()`
    ///
    pub fn num_y_tiles(&self, ly: i32) -> Result<i32, Error> {
        let mut num_y_tiles = 0;

        unsafe {
            sys::Imf_TiledInputFile_numYTiles(self.inner, &mut num_y_tiles, ly)
                .into_result()?;
        }

        Ok(num_y_tiles)
    }

    /// returns a 2-dimensional region of valid pixel coordinates for a level
    /// with level number `(lx, ly)`.
    ///
    /// Return value is a Box2i (imath) with the min value
    /// `(data_window.min.x, data_window.min.y)` and max value
    /// `(data_window.min.x + TiledInputFile::level_width(lx) - 1, data_window.min.y + TiledInputFile::level_height(ly) - 1)`
    ///
    pub fn data_window_for_level<T>(&self, lx: i32, ly: i32) -> Result<T, Error>
    where
        T: Bound2<i32>,
    {
        let mut data_window =
            std::mem::MaybeUninit::<sys::Imath_Box2i_t>::uninit();

        unsafe {
            sys::Imf_TiledInputFile_dataWindowForLevel(
                self.inner,
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

    /// Returns a 2-dimensional region of valid pixel coordinates for a tile
    /// with tile coordinates `(dx,dy)` and level number `(lx, ly)`.
    ///
    /// Return value is a Box2i (imath) with the min value
    /// `(data_window.min.x + dx * TiledInputFile::tile_x_size(), data_window.min.y + dy * TiledInputFile::tile_y_size())`
    /// and max value
    /// `(data_window.min.x + (dx + 1) * TiledInputFile::tile_x_size() - 1, data_window.min.y + (dy + 1) * TiledInputFile::tile_y_size() - 1)`
    ///
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
            sys::Imf_TiledInputFile_dataWindowForTile(
                self.inner,
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

    /// Reads the tile with tile coordinates `(dx, dy)`, and level number
    /// `(lx, ly)`, and stores it in the current frame buffer.
    ///
    /// # Errors
    ///
    /// Read tile will return an error if the following rules are not followed:
    ///
    /// - dx must lie in the interval `[0, TiledInputFile::num_x_tiles(lx)-1]`
    /// - dy must lie in the interval `[0, TiledInputFile::num_y_tiles(ly)-1]`
    /// - lx must lie in the interval `[0, TiledInputFile::num_x_levels()-1]`
    /// - ly must lie in the interval `[0, TiledInputFile::num_y_levels()()-1]`
    ///
    pub fn read_tile(
        &mut self,
        dx: i32,
        dy: i32,
        lx: i32,
        ly: i32,
    ) -> Result<(), Error> {
        unsafe {
            sys::Imf_TiledInputFile_readTile(self.inner, dx, dy, lx, ly)
                .into_result()?;
        }

        Ok(())
    }

    /// This allows reading multiple tiles at once. If multi-threading is used
    /// the multiple tiles are read concurrently.
    ///
    /// Pixels that are outside the pixel coordinate range for the
    /// tile's level, are never accessed by the read tile.
    ///
    /// # Errors
    ///
    /// Attempting to access a tile that is not present in the file
    /// returns an InputExc error.
    ///
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
            sys::Imf_TiledInputFile_readTiles(
                self.inner, dx1, dx2, dy1, dy2, lx, ly,
            )
            .into_result()?;
        }

        Ok(())
    }

    /// Read a tile of raw pixel data from the file, without uncompressing it
    /// (this function is used to implement TiledOutputFile::copy_pixels()).
    ///
    /// For single part files, reads the next tile in the file
    ///
    /// For multipart files, reads the tile specified by dx,dy,lx,ly
    ///
    pub fn raw_tile_data<'a>(
        &mut self,
        dx: i32,
        dy: i32,
        lx: i32,
        ly: i32,
    ) -> Result<RawTileData<'a>, Error> {
        let mut new_dx = dx;
        let mut new_dy = dy;
        let mut new_lx = lx;
        let mut new_ly = ly;
        let mut pixel_data_ptr = std::ptr::null();
        let mut pixel_data_size = 0;

        unsafe {
            sys::Imf_TiledInputFile_rawTileData(
                self.inner,
                &mut new_dx,
                &mut new_dy,
                &mut new_lx,
                &mut new_ly,
                &mut pixel_data_ptr,
                &mut pixel_data_size,
            )
            .into_result()?;

            // TODO: Validate if OpenEXR will always return a valid pixel data
            // array.
            if pixel_data_ptr.is_null() {
                panic!(
                    "Received null ptr from sys::Imf_TiledInputFile_rawTileData"
                );
            }

            let pixel_data_slice = std::slice::from_raw_parts(
                pixel_data_ptr,
                pixel_data_size as usize,
            );

            Ok(RawTileData {
                dx: new_dx,
                dy: new_dy,
                lx: new_lx,
                ly: new_ly,
                pixel_data: pixel_data_slice,
            })
        }
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

    fn get_tiled_input_file() -> super::TiledInputFile {
        super::TiledInputFile::new(&*SRC_IMAGE_PATH, 0).unwrap()
    }

    #[test]
    fn test_tiledinputfile_new_0_threads_success() {
        super::TiledInputFile::new(&*SRC_IMAGE_PATH, 0).unwrap();
    }

    #[test]
    fn test_tiledinputfile_new_1_threads_success() {
        super::TiledInputFile::new(&*SRC_IMAGE_PATH, 1).unwrap();
    }

    #[test]
    #[should_panic]
    fn test_tiledinputfile_new_failure_invalid_file_path() {
        let path = PathBuf::from("/this/does/not/exist.exr");
        super::TiledInputFile::new(&path, 1).unwrap();
    }

    #[test]
    fn test_tiledinputfile_file_name_success() {
        let tiled_input_file = get_tiled_input_file();
        let result = tiled_input_file.file_name();

        assert_eq!(&*SRC_IMAGE_PATH, &result);
    }

    #[test]
    fn test_tiledinputfile_header_success() {
        let tiled_input_file = get_tiled_input_file();
        let header = tiled_input_file.header();

        header.sanity_check(true, false).unwrap();
    }

    #[test]
    fn test_tiledinputfile_version_success() {
        let tiled_input_file = get_tiled_input_file();
        let version = tiled_input_file.version();

        assert_eq!(version.is_tiled(), true);
    }

    #[test]
    fn test_tiledinputfile_set_frame_buffer_success() {
        let mut tiled_input_file = get_tiled_input_file();
        let frame_buffer = crate::FrameBuffer::new();
        tiled_input_file.set_frame_buffer(&frame_buffer).unwrap();
    }

    #[test]
    fn test_tiledinputfile_frame_buffer_success() {
        let tiled_input_file = get_tiled_input_file();
        let _ = tiled_input_file.frame_buffer();
    }

    #[test]
    fn test_tiledinputfile_is_complete_success() {
        let tiled_input_file = get_tiled_input_file();
        let is_complete = tiled_input_file.is_complete();

        assert_eq!(is_complete, true);
    }

    #[test]
    fn test_tiledinputfile_tile_x_size_success() {
        let tiled_input_file = get_tiled_input_file();
        let tile_x_size = tiled_input_file.tile_x_size();

        assert_eq!(tile_x_size, 64);
    }

    #[test]
    fn test_tiledinputfile_tile_y_size_success() {
        let tiled_input_file = get_tiled_input_file();
        let tile_y_size = tiled_input_file.tile_y_size();

        assert_eq!(tile_y_size, 64);
    }

    #[test]
    fn test_tiledinputfile_level_mode_success() {
        let tiled_input_file = get_tiled_input_file();
        let level_mode = tiled_input_file.level_mode();

        assert_eq!(level_mode, crate::LevelMode::OneLevel);
    }

    #[test]
    fn test_tiledinputfile_level_rounding_mode_success() {
        let tiled_input_file = get_tiled_input_file();
        let level_rounding_mode = tiled_input_file.level_rounding_mode();

        assert_eq!(level_rounding_mode, crate::LevelRoundingMode::RoundDown);
    }

    #[test]
    fn test_tiledinputfile_num_levels_success() {
        let tiled_input_file = get_tiled_input_file();
        let num_levels = tiled_input_file.num_levels().unwrap();

        assert_eq!(num_levels, 1);
    }

    #[test]
    fn test_tiledinputfile_num_x_levels_success() {
        let tiled_input_file = get_tiled_input_file();
        let num_x_levels = tiled_input_file.num_x_levels();

        assert_eq!(num_x_levels, 1);
    }

    #[test]
    fn test_tiledinputfile_num_y_levels_success() {
        let tiled_input_file = get_tiled_input_file();
        let num_y_levels = tiled_input_file.num_y_levels();

        assert_eq!(num_y_levels, 1);
    }

    #[test]
    fn test_tiledinputfile_is_valid_level_success() {
        let tiled_input_file = get_tiled_input_file();
        let is_valid_level = tiled_input_file.is_valid_level(0, 0);

        assert_eq!(is_valid_level, true);
    }

    #[test]
    fn test_tiledinputfile_is_valid_level_failure_invalid_level() {
        let tiled_input_file = get_tiled_input_file();
        let is_valid_level = tiled_input_file.is_valid_level(100, 100);

        assert_eq!(is_valid_level, false);
    }

    #[test]
    fn test_tiledinputfile_level_width_success() {
        let tiled_input_file = get_tiled_input_file();
        let level_width = tiled_input_file.level_width(0).unwrap();

        assert_eq!(level_width, 1200);
    }

    #[test]
    #[should_panic]
    fn test_tiledinputfile_level_width_failure_invalid_level() {
        let tiled_input_file = get_tiled_input_file();
        tiled_input_file.level_width(i32::MIN).unwrap();
    }

    #[test]
    fn test_tiledinputfile_level_height_success() {
        let tiled_input_file = get_tiled_input_file();
        let level_height = tiled_input_file.level_height(0).unwrap();

        assert_eq!(level_height, 800);
    }

    #[test]
    #[should_panic]
    fn test_tiledinputfile_level_height_failure_invalid_level() {
        let tiled_input_file = get_tiled_input_file();
        tiled_input_file.level_height(i32::MIN).unwrap();
    }

    #[test]
    fn test_tiledinputfile_num_x_tiles_success() {
        let tiled_input_file = get_tiled_input_file();
        let num_x_tiles = tiled_input_file.num_x_tiles(0).unwrap();

        assert_eq!(num_x_tiles, 19);
    }

    #[test]
    #[should_panic]
    fn test_tiledinputfile_num_x_tiles_failed_invalid_level() {
        let tiled_input_file = get_tiled_input_file();
        tiled_input_file.num_x_tiles(i32::MIN).unwrap();
    }

    #[test]
    fn test_tiledinputfile_num_y_tiles_success() {
        let tiled_input_file = get_tiled_input_file();
        let num_y_tiles = tiled_input_file.num_y_tiles(0).unwrap();

        assert_eq!(num_y_tiles, 13);
    }

    #[test]
    #[should_panic]
    fn test_tiledinputfile_num_y_tiles_failed_invalid_level() {
        let tiled_input_file = get_tiled_input_file();
        tiled_input_file.num_y_tiles(i32::MIN).unwrap();
    }

    #[test]
    fn test_tiledinputfile_data_window_for_level_success() {
        let tiled_input_file = get_tiled_input_file();
        let data_window_for_level: [i32; 4] =
            tiled_input_file.data_window_for_level(0, 0).unwrap();

        assert_eq!(data_window_for_level, [0, 0, 1199, 799]);
    }

    #[test]
    #[should_panic]
    fn test_tiledinputfile_data_window_for_level_failure_invalid_level() {
        let tiled_input_file = get_tiled_input_file();
        tiled_input_file
            .data_window_for_level::<[i32; 4]>(i32::MIN, i32::MIN)
            .unwrap();
    }

    #[test]
    fn test_tiledinputfile_data_window_for_tile_success() {
        let tiled_input_file = get_tiled_input_file();
        let data_window_for_tile: [i32; 4] =
            tiled_input_file.data_window_for_tile(0, 0, 0, 0).unwrap();

        assert_eq!(data_window_for_tile, [0, 0, 63, 63]);
    }

    #[test]
    #[should_panic]
    fn test_tiledinputfile_data_window_for_tile_failure_invalid_level() {
        let tiled_input_file = get_tiled_input_file();
        tiled_input_file
            .data_window_for_tile::<[i32; 4]>(
                i32::MIN,
                i32::MIN,
                i32::MIN,
                i32::MIN,
            )
            .unwrap();
    }

    #[test]
    fn test_tiledinputfile_read_tile_success() {
        let mut tiled_input_file = get_tiled_input_file();
        let frame_buffer = crate::FrameBuffer::new();
        tiled_input_file.set_frame_buffer(&frame_buffer).unwrap();
        tiled_input_file.read_tile(0, 0, 0, 0).unwrap();
    }

    #[test]
    #[should_panic]
    fn test_tiledinputfile_read_tile_failure_invalid_level_and_frame_buffer() {
        let mut tiled_input_file = get_tiled_input_file();
        tiled_input_file
            .read_tile(i32::MIN, i32::MIN, i32::MIN, i32::MIN)
            .unwrap();
    }

    #[test]
    fn test_tiledinputfile_read_tiles_success() {
        let mut tiled_input_file = get_tiled_input_file();
        let frame_buffer = crate::FrameBuffer::new();
        tiled_input_file.set_frame_buffer(&frame_buffer).unwrap();
        tiled_input_file.read_tiles(0, 0, 0, 0, 0, 0).unwrap();
    }

    #[test]
    #[should_panic]
    fn test_tiledinputfile_read_tiles_failure_invalid_level_and_frame_buffer() {
        let mut tiled_input_file = get_tiled_input_file();
        tiled_input_file
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

    #[test]
    fn test_tiledinputfile_raw_tile_data_success() {
        let mut tiled_input_file = get_tiled_input_file();
        let raw_tile_data = tiled_input_file.raw_tile_data(0, 0, 0, 0).unwrap();

        assert_eq!(raw_tile_data.dx(), 0);
        assert_eq!(raw_tile_data.dy(), 0);
        assert_eq!(raw_tile_data.lx(), 0);
        assert_eq!(raw_tile_data.ly(), 0);
        assert_eq!(raw_tile_data.pixel_data().len(), 110);
    }
}

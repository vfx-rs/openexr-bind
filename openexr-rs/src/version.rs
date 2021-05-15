use openexr_sys as sys;
use std::ops::{BitAnd, BitAndAssign, BitOr, BitOrAssign, BitXor, BitXorAssign};
use std::os::raw::{c_char, c_int};

#[derive(Debug, Copy, Clone, PartialEq, Eq)]
pub struct Flag(c_int);

impl BitAnd for Flag {
    type Output = Self;

    fn bitand(self, rhs: Self) -> Self::Output {
        Self(self.0.bitand(rhs.0))
    }
}

impl BitAndAssign for Flag {
    fn bitand_assign(&mut self, rhs: Self) {
        self.0.bitand_assign(rhs.0)
    }
}

impl BitOr for Flag {
    type Output = Self;

    fn bitor(self, rhs: Self) -> Self::Output {
        Self(self.0.bitor(rhs.0))
    }
}

impl BitOrAssign for Flag {
    fn bitor_assign(&mut self, rhs: Self) {
        self.0.bitor_assign(rhs.0)
    }
}

impl BitXor for Flag {
    type Output = Self;

    fn bitxor(self, rhs: Self) -> Self::Output {
        Self(self.0.bitxor(rhs.0))
    }
}

impl BitXorAssign for Flag {
    fn bitxor_assign(&mut self, rhs: Self) {
        self.0.bitxor_assign(rhs.0)
    }
}

impl Flag {
    /// The flag object is supported by the bound OpenEXR library.
    pub fn supports_flags(&self) -> bool {
        let mut result: bool = false;

        unsafe {
            // NOTE: This will not raise an error, so error checking is skipped.
            sys::Imf_supportsFlags(&mut result, self.0);
        }

        result
    }
}

/// File is tiled
pub static TILED_FLAG: Flag = Flag(0x00000200);
/// File contains long attribute or channel names
pub static LONG_NAMES_FLAG: Flag = Flag(0x00000400);
/// File has at least one part which is not a regular scanline image or regular tiled image (that is, it is a deep format)
pub static NON_IMAGE_FLAG: Flag = Flag(0x00000800);
/// File has multiple parts
pub static MULTI_PART_FILE_FLAG: Flag = Flag(0x00001000);

/// Bitwise OR of all known flags.
pub static ALL_FLAGS: Flag =
    Flag(TILED_FLAG.0 | LONG_NAMES_FLAG.0 | NON_IMAGE_FLAG.0 | MULTI_PART_FILE_FLAG.0);

/// The version represents a version number and the flags that are enabled for the file. For example,
#[derive(Debug)]
pub struct Version {
    inner: c_int,
}

// NOTE: All of the functions below will not raise errors, so error checking is skipped.

impl Version {
    /// Create a version from a given version number and flag.
    ///
    /// # Panics
    ///
    /// The version number must be between 0 and 255, otherwise this will panic.
    pub fn new(version: i32, flags: Flag) -> Self {
        assert!(version <= 0x000000ff && version >= 0, "Version must be between 0 and 255");
        Self {
            inner: version | flags.0,
        }
    }

    /// Create a version from the wrapped OpenEXR API.
    pub fn from_c_int(version: c_int) -> Self {
        Self { inner: version }
    }

    /// File is tiled
    pub fn is_tiled(&self) -> bool {
        let mut result = false;

        unsafe {
            sys::Imf_isTiled_1(&mut result, self.inner);
        }

        result
    }

    /// File has multiple parts
    pub fn is_multi_part(&self) -> bool {
        let mut result = false;

        unsafe {
            sys::Imf_isMultiPart(&mut result, self.inner);
        }

        result
    }

    /// File has at least one part which is not a regular scanline image or regular tiled image (that is, it is a deep format)
    pub fn is_non_image(&self) -> bool {
        let mut result = false;

        unsafe {
            sys::Imf_isNonImage(&mut result, self.inner);
        }

        result
    }

    // Return the version as a tiled version
    pub fn make_tiled(&self) -> Self {
        let mut result: c_int = 0;

        unsafe {
            sys::Imf_makeTiled(&mut result, self.inner);
        }

        Self { inner: result }
    }

    // Return the version as a non-tiled version
    pub fn make_non_tiled(&self) -> Self {
        let mut result: c_int = 0;

        unsafe {
            sys::Imf_makeNotTiled(&mut result, self.inner);
        }

        Self { inner: result }
    }

    // Get the version number portion of encoded version.
    pub fn version(&self) -> i32 {
        let mut result: c_int = 0;

        unsafe {
            sys::Imf_getVersion(&mut result, self.inner);
        }

        result
    }

    // Get the flags portion of encoded version.
    pub fn flags(&self) -> Flag {
        let mut result: c_int = 0;

        unsafe {
            sys::Imf_getFlags(&mut result, self.inner);
        }

        Flag(result)
    }
}

// Return if the byte array represents the OpenEXR magic number.
pub fn is_imf_magic(bytes: &[c_char; 4]) -> bool {
    let mut result: bool = false;

    unsafe {
        sys::Imf_isImfMagic(&mut result, bytes.as_ptr());
    }

    result
}

#[cfg(test)]
mod tests {
    #[test]
    fn test_version_new_success() {
        super::Version::new(0, super::Flag(0));
        super::Version::new(1, super::Flag(0));
        super::Version::new(255, super::Flag(0));
    }

    #[test]
    #[should_panic]
    fn test_version_new_failure_version_less_than_0() {
        super::Version::new(-1, super::Flag(0));
    }

    #[test]
    #[should_panic]
    fn test_version_new_failure_version_greater_than_255() {
        super::Version::new(256, super::Flag(0));
    }

    #[test]
    fn test_is_tiled_true() {
        let version = super::Version::new(1, super::TILED_FLAG);
        let result = version.is_tiled();
        assert_eq!(result, true);
    }

    #[test]
    fn test_is_tiled_false() {
        let version = super::Version::new(1, super::Flag(0));
        let result = version.is_tiled();
        assert_eq!(result, false);
    }

    #[test]
    fn test_is_multi_part_true() {
        let version = super::Version::new(1, super::MULTI_PART_FILE_FLAG);
        let result = version.is_multi_part();
        assert_eq!(result, true);
    }

    #[test]
    fn test_is_multi_part_false() {
        let version = super::Version::new(1, super::Flag(0));
        let result = version.is_multi_part();
        assert_eq!(result, false);
    }

    #[test]
    fn test_is_non_image_true() {
        let version = super::Version::new(1, super::NON_IMAGE_FLAG);
        let result = version.is_non_image();
        assert_eq!(result, true);
    }

    #[test]
    fn test_is_non_image_false() {
        let version = super::Version::new(1, super::Flag(0));
        let result = version.is_non_image();
        assert_eq!(result, false);
    }

    #[test]
    fn test_make_tiled_success() {
        let version = super::Version::new(1, super::Flag(0)).make_tiled();
        assert_eq!(version.is_tiled(), true);
    }

    #[test]
    fn test_make_non_tiled_success() {
        let version = super::Version::new(1, super::TILED_FLAG).make_non_tiled();
        assert_eq!(version.is_tiled(), false);
    }

    #[test]
    fn test_get_version_success() {
        #[allow(overflowing_literals)]
        let version = super::Version::from_c_int(0xffffffff);
        let result = version.version();

        assert_eq!(result, 0x000000ff);
    }

    #[test]
    fn test_get_flags_success() {
        #[allow(overflowing_literals)]
        let version = super::Version::from_c_int(0xffffffff);
        let result = version.flags();

        #[allow(overflowing_literals)]
        let expected = super::Flag(0xffffff00);
        assert_eq!(result, expected);
    }

    #[test]
    fn test_supports_flags_true() {
        let result = super::ALL_FLAGS.supports_flags();
        assert_eq!(result, true);
    }

    #[test]
    fn test_supports_flags_false() {
        let result = super::Flag(0x10000000).supports_flags();
        assert_eq!(result, false);
    }

    #[test]
    fn test_is_imf_magic_true() {
        let result = super::is_imf_magic(&[118, 47, 49, 1]);
        assert_eq!(result, true);
    }

    #[test]
    fn test_is_imf_magic_false() {
        let result = super::is_imf_magic(&[0, 0, 0, 0]);
        assert_eq!(result, false);
    }
}

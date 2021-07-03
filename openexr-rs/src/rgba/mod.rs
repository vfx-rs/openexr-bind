#[allow(clippy::module_inception)]
pub mod rgba;
pub use rgba::{Rgba, RgbaChannels};

pub mod rgba_file;
pub use rgba_file::{RgbaInputFile, RgbaOutputFile};

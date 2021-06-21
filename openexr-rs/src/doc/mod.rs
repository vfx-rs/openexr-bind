#[cfg(feature = "long-form-docs")]
use embed_doc_image::embed_doc_image;

cfg_if::cfg_if! {
if #[cfg(feature = "long-form-docs")] {
    #[doc = include_str!("reading_and_writing_image_files.md")]
    pub mod reading_and_writing_image_files {}

    pub mod technical_introduction {}

    pub mod open_exr_file_layout {}

    #[doc = include_str!("interpreting_deep_pixels.md")]
    #[embed_doc_image("point_sample", "src/doc/images/idi_point_sample.png")]
    #[embed_doc_image("volume_sample", "src/doc/images/idi_volume_sample.png")]
    #[embed_doc_image(
        "alpha_and_colour",
        "src/doc/images/idi_alpha_and_colour.png"
    )]
    #[embed_doc_image(
        "opaque_volume_samples",
        "src/doc/images/idi_opaque_volume_samples.png"
    )]
    #[embed_doc_image("tidy1a", "src/doc/images/idi_tidy1a.png")]
    #[embed_doc_image("tidy1b", "src/doc/images/idi_tidy1b.png")]
    #[embed_doc_image("tidy2a", "src/doc/images/idi_tidy2a.png")]
    #[embed_doc_image("tidy3", "src/doc/images/idi_tidy3.png")]
    #[embed_doc_image("whole_pixel", "src/doc/images/idi_whole_pixel.png")]
    pub mod interpreting_deep_pixels {}

    pub mod multi_view_open_exr;
}
}

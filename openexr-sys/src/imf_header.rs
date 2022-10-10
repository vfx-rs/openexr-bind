#![allow(non_snake_case)]
#![allow(non_camel_case_types)]
#![allow(non_upper_case_globals)]
#![allow(unused_imports)]
use crate::*;
pub use crate::cppmmabi::*;
use std::os::raw::*;


impl Imf_3_0__Header_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__Header_sizeof(),
                Imf_3_0__Header_alignof(),
            ).unwrap()
        }
    }
}


impl Imf_3_0__Header__Iterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__Header__Iterator_sizeof(),
                Imf_3_0__Header__Iterator_alignof(),
            ).unwrap()
        }
    }
}


impl Imf_3_0__Header__ConstIterator_t {
    pub fn layout() -> std::alloc::Layout {
        unsafe {
            std::alloc::Layout::from_size_align(
                Imf_3_0__Header__ConstIterator_sizeof(),
                Imf_3_0__Header__ConstIterator_alignof(),
            ).unwrap()
        }
    }
}



extern "C" {

pub fn Imf_3_0__Header_sizeof() -> usize;

pub fn Imf_3_0__Header_alignof() -> usize;

pub fn Imf_3_0__Header_with_dimensions(this_: *mut Imf_Header_t, width: c_int, height: c_int, pixel_aspect_ratio: c_float, screen_window_center: *const Imath_V2f_t, screen_window_width: c_float, line_order: Imf_LineOrder, compression: Imf_Compression) -> Exception;

pub fn Imf_3_0__Header_ctor(this_: *mut Imf_Header_t, display_window: *const Imath_Box2i_t, data_window: *const Imath_Box2i_t, pixel_aspect_ratio: c_float, screen_window_center: *const Imath_V2f_t, screen_window_width: c_float, line_order: Imf_LineOrder, compression: Imf_Compression) -> Exception;

pub fn Imf_3_0__Header_copy(this_: *mut Imf_Header_t, rhs: *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__Header_dtor(this_: *mut Imf_Header_t) -> Exception;

pub fn Imf_3_0__Header__assign(this_: *mut Imf_Header_t, return_: *mut *mut Imf_Header_t, rhs: *const Imf_Header_t) -> Exception;

pub fn Imf_3_0__Header_insert(this_: *mut Imf_Header_t, name: *const c_char, attribute: *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__Header_erase(this_: *mut Imf_Header_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_index(this_: *mut Imf_Header_t, return_: *mut *mut Imf_Attribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_index_const(this_: *const Imf_Header_t, return_: *mut *const Imf_Attribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Int(this_: *mut Imf_Header_t, return_: *mut *mut Imf_IntAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Float(this_: *mut Imf_Header_t, return_: *mut *mut Imf_FloatAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Double(this_: *mut Imf_Header_t, return_: *mut *mut Imf_DoubleAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Box2i(this_: *mut Imf_Header_t, return_: *mut *mut Imf_Box2iAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Box2f(this_: *mut Imf_Header_t, return_: *mut *mut Imf_Box2fAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_ChannelList(this_: *mut Imf_Header_t, return_: *mut *mut Imf_ChannelListAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Chromaticities(this_: *mut Imf_Header_t, return_: *mut *mut Imf_ChromaticitiesAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Compression(this_: *mut Imf_Header_t, return_: *mut *mut Imf_CompressionAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_DeepImageState(this_: *mut Imf_Header_t, return_: *mut *mut Imf_DeepImageStateAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Envmap(this_: *mut Imf_Header_t, return_: *mut *mut Imf_EnvmapAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_CppVectorFloat(this_: *mut Imf_Header_t, return_: *mut *mut Imf_CppVectorFloatAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_CppVectorString(this_: *mut Imf_Header_t, return_: *mut *mut Imf_CppVectorStringAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_CppString(this_: *mut Imf_Header_t, return_: *mut *mut Imf_CppStringAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_KeyCode(this_: *mut Imf_Header_t, return_: *mut *mut Imf_KeyCodeAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_LineOrder(this_: *mut Imf_Header_t, return_: *mut *mut Imf_LineOrderAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_M33f(this_: *mut Imf_Header_t, return_: *mut *mut Imf_M33fAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_M33d(this_: *mut Imf_Header_t, return_: *mut *mut Imf_M33dAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_M44f(this_: *mut Imf_Header_t, return_: *mut *mut Imf_M44fAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_M44d(this_: *mut Imf_Header_t, return_: *mut *mut Imf_M44dAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_PreviewImage(this_: *mut Imf_Header_t, return_: *mut *mut Imf_PreviewImageAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Rational(this_: *mut Imf_Header_t, return_: *mut *mut Imf_RationalAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_TileDescription(this_: *mut Imf_Header_t, return_: *mut *mut Imf_TileDescriptionAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_TimeCode(this_: *mut Imf_Header_t, return_: *mut *mut Imf_TimeCodeAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_V2i(this_: *mut Imf_Header_t, return_: *mut *mut Imf_V2iAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_V2f(this_: *mut Imf_Header_t, return_: *mut *mut Imf_V2fAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_V2d(this_: *mut Imf_Header_t, return_: *mut *mut Imf_V2dAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_V3i(this_: *mut Imf_Header_t, return_: *mut *mut Imf_V3iAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_V3f(this_: *mut Imf_Header_t, return_: *mut *mut Imf_V3fAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_V3d(this_: *mut Imf_Header_t, return_: *mut *mut Imf_V3dAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Int_const(this_: *const Imf_Header_t, return_: *mut *const Imf_IntAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Float_const(this_: *const Imf_Header_t, return_: *mut *const Imf_FloatAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Double_const(this_: *const Imf_Header_t, return_: *mut *const Imf_DoubleAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Box2i_const(this_: *const Imf_Header_t, return_: *mut *const Imf_Box2iAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Box2f_const(this_: *const Imf_Header_t, return_: *mut *const Imf_Box2fAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_ChannelList_const(this_: *const Imf_Header_t, return_: *mut *const Imf_ChannelListAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Chromaticities_const(this_: *const Imf_Header_t, return_: *mut *const Imf_ChromaticitiesAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Compression_const(this_: *const Imf_Header_t, return_: *mut *const Imf_CompressionAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_DeepImageState_const(this_: *const Imf_Header_t, return_: *mut *const Imf_DeepImageStateAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Envmap_const(this_: *const Imf_Header_t, return_: *mut *const Imf_EnvmapAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_CppVectorFloat_const(this_: *const Imf_Header_t, return_: *mut *const Imf_CppVectorFloatAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_CppVectorString_const(this_: *const Imf_Header_t, return_: *mut *const Imf_CppVectorStringAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_CppString_const(this_: *const Imf_Header_t, return_: *mut *const Imf_CppStringAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_KeyCode_const(this_: *const Imf_Header_t, return_: *mut *const Imf_KeyCodeAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_LineOrder_const(this_: *const Imf_Header_t, return_: *mut *const Imf_LineOrderAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_M33f_const(this_: *const Imf_Header_t, return_: *mut *const Imf_M33fAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_M33d_const(this_: *const Imf_Header_t, return_: *mut *const Imf_M33dAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_M44f_const(this_: *const Imf_Header_t, return_: *mut *const Imf_M44fAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_M44d_const(this_: *const Imf_Header_t, return_: *mut *const Imf_M44dAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_PreviewImage_const(this_: *const Imf_Header_t, return_: *mut *const Imf_PreviewImageAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_Rational_const(this_: *const Imf_Header_t, return_: *mut *const Imf_RationalAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_TileDescription_const(this_: *const Imf_Header_t, return_: *mut *const Imf_TileDescriptionAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_TimeCode_const(this_: *const Imf_Header_t, return_: *mut *const Imf_TimeCodeAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_V2i_const(this_: *const Imf_Header_t, return_: *mut *const Imf_V2iAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_V2f_const(this_: *const Imf_Header_t, return_: *mut *const Imf_V2fAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_V2d_const(this_: *const Imf_Header_t, return_: *mut *const Imf_V2dAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_V3i_const(this_: *const Imf_Header_t, return_: *mut *const Imf_V3iAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_V3f_const(this_: *const Imf_Header_t, return_: *mut *const Imf_V3fAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_findTypedAttribute_V3d_const(this_: *const Imf_Header_t, return_: *mut *const Imf_V3dAttribute_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_begin(this_: *mut Imf_Header_t, return_: *mut Imf_Header_Iterator_t) -> Exception;

pub fn Imf_3_0__Header_begin_const(this_: *const Imf_Header_t, return_: *mut Imf_Header_ConstIterator_t) -> Exception;

pub fn Imf_3_0__Header_end(this_: *mut Imf_Header_t, return_: *mut Imf_Header_Iterator_t) -> Exception;

pub fn Imf_3_0__Header_end_const(this_: *const Imf_Header_t, return_: *mut Imf_Header_ConstIterator_t) -> Exception;

pub fn Imf_3_0__Header_find(this_: *mut Imf_Header_t, return_: *mut Imf_Header_Iterator_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_find_const(this_: *const Imf_Header_t, return_: *mut Imf_Header_ConstIterator_t, name: *const c_char) -> Exception;

pub fn Imf_3_0__Header_displayWindow(this_: *mut Imf_Header_t, return_: *mut *mut Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__Header_displayWindow_const(this_: *const Imf_Header_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__Header_dataWindow(this_: *mut Imf_Header_t, return_: *mut *mut Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__Header_dataWindow_const(this_: *const Imf_Header_t, return_: *mut *const Imath_Box2i_t) -> Exception;

pub fn Imf_3_0__Header_pixelAspectRatio(this_: *mut Imf_Header_t, return_: *mut *mut c_float) -> Exception;

pub fn Imf_3_0__Header_pixelAspectRatio_const(this_: *const Imf_Header_t, return_: *mut *const c_float) -> Exception;

pub fn Imf_3_0__Header_screenWindowCenter(this_: *mut Imf_Header_t, return_: *mut *mut Imath_V2f_t) -> Exception;

pub fn Imf_3_0__Header_screenWindowCenter_const(this_: *const Imf_Header_t, return_: *mut *const Imath_V2f_t) -> Exception;

pub fn Imf_3_0__Header_screenWindowWidth(this_: *mut Imf_Header_t, return_: *mut *mut c_float) -> Exception;

pub fn Imf_3_0__Header_screenWindowWidth_const(this_: *const Imf_Header_t, return_: *mut *const c_float) -> Exception;

pub fn Imf_3_0__Header_channels(this_: *mut Imf_Header_t, return_: *mut *mut Imf_ChannelList_t) -> Exception;

pub fn Imf_3_0__Header_channels_const(this_: *const Imf_Header_t, return_: *mut *const Imf_ChannelList_t) -> Exception;

pub fn Imf_3_0__Header_lineOrder(this_: *mut Imf_Header_t, return_: *mut *mut Imf_LineOrder) -> Exception;

pub fn Imf_3_0__Header_lineOrder_const(this_: *const Imf_Header_t, return_: *mut *const Imf_LineOrder) -> Exception;

pub fn Imf_3_0__Header_compression(this_: *mut Imf_Header_t, return_: *mut *mut Imf_Compression) -> Exception;

pub fn Imf_3_0__Header_compression_const(this_: *const Imf_Header_t, return_: *mut *const Imf_Compression) -> Exception;

pub fn Imf_3_0__Header_setName(this_: *mut Imf_Header_t, name: *const std_string_t) -> Exception;

pub fn Imf_3_0__Header_name(this_: *mut Imf_Header_t, return_: *mut *mut std_string_t) -> Exception;

pub fn Imf_3_0__Header_name_const(this_: *const Imf_Header_t, return_: *mut *const std_string_t) -> Exception;

pub fn Imf_3_0__Header_hasName(this_: *const Imf_Header_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__Header_setType(this_: *mut Imf_Header_t, type_: *const std_string_t) -> Exception;

pub fn Imf_3_0__Header_type(this_: *mut Imf_Header_t, return_: *mut *mut std_string_t) -> Exception;

pub fn Imf_3_0__Header_type_const(this_: *const Imf_Header_t, return_: *mut *const std_string_t) -> Exception;

pub fn Imf_3_0__Header_hasType(this_: *const Imf_Header_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__Header_setVersion(this_: *mut Imf_Header_t, version: c_int) -> Exception;

pub fn Imf_3_0__Header_version(this_: *mut Imf_Header_t, return_: *mut *mut c_int) -> Exception;

pub fn Imf_3_0__Header_version_const(this_: *const Imf_Header_t, return_: *mut *const c_int) -> Exception;

pub fn Imf_3_0__Header_hasVersion(this_: *const Imf_Header_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__Header_setChunkCount(this_: *mut Imf_Header_t, chunks: c_int) -> Exception;

pub fn Imf_3_0__Header_hasChunkCount(this_: *const Imf_Header_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__Header_chunkCount_const(this_: *const Imf_Header_t, return_: *mut *const c_int) -> Exception;

pub fn Imf_3_0__Header_setView(this_: *mut Imf_Header_t, view: *const std_string_t) -> Exception;

pub fn Imf_3_0__Header_hasView(this_: *const Imf_Header_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__Header_view(this_: *mut Imf_Header_t, return_: *mut *mut std_string_t) -> Exception;

pub fn Imf_3_0__Header_view_const(this_: *const Imf_Header_t, return_: *mut *const std_string_t) -> Exception;

pub fn Imf_3_0__Header_setTileDescription(this_: *mut Imf_Header_t, td: *const Imf_TileDescription_t) -> Exception;

pub fn Imf_3_0__Header_tileDescription(this_: *mut Imf_Header_t, return_: *mut *mut Imf_TileDescription_t) -> Exception;

pub fn Imf_3_0__Header_tileDescription_const(this_: *const Imf_Header_t, return_: *mut *const Imf_TileDescription_t) -> Exception;

pub fn Imf_3_0__Header_hasTileDescription(this_: *const Imf_Header_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__Header_setPreviewImage(this_: *mut Imf_Header_t, p: *const Imf_PreviewImage_t) -> Exception;

pub fn Imf_3_0__Header_previewImage(this_: *mut Imf_Header_t, return_: *mut *mut Imf_PreviewImage_t) -> Exception;

pub fn Imf_3_0__Header_previewImage_const(this_: *const Imf_Header_t, return_: *mut *const Imf_PreviewImage_t) -> Exception;

pub fn Imf_3_0__Header_hasPreviewImage(this_: *const Imf_Header_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__Header_sanityCheck(this_: *const Imf_Header_t, is_tiled: bool, is_multipart_file: bool) -> Exception;

pub fn Imf_3_0__Header_setMaxImageSize(max_width: c_int, max_height: c_int) -> Exception;

pub fn Imf_3_0__Header_setMaxTileSize(max_width: c_int, max_height: c_int) -> Exception;

pub fn Imf_3_0__Header_readsNothing(this_: *mut Imf_Header_t, return_: *mut bool) -> Exception;

pub fn Imf_3_0__Header_writeTo(this_: *const Imf_Header_t, return_: *mut u64, os: *mut Imf_OStream_t, is_tiled: bool) -> Exception;

pub fn Imf_3_0__Header_readFrom(this_: *mut Imf_Header_t, is: *mut Imf_IStream_t, version: *mut c_int) -> Exception;

pub fn Imf_3_0__Header__Iterator_sizeof() -> usize;

pub fn Imf_3_0__Header__Iterator_alignof() -> usize;

pub fn Imf_3_0__Header__Iterator_ctor(this_: *mut Imf_Header_Iterator_t) -> Exception;

pub fn Imf_3_0__Header__Iterator_inc(this_: *mut Imf_Header_Iterator_t, return_: *mut *mut Imf_Header_Iterator_t) -> Exception;

pub fn Imf_3_0__Header__Iterator_name(this_: *const Imf_Header_Iterator_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__Header__Iterator_attribute(this_: *const Imf_Header_Iterator_t, return_: *mut *mut Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__Header__Iterator_copy(this_: *mut Imf_Header_Iterator_t, rhs: *const Imf_Header_Iterator_t) -> Exception;

pub fn Imf_3_0__Header__Iterator_move(this_: *mut Imf_Header_Iterator_t, rhs: *mut Imf_Header_Iterator_t) -> Exception;

pub fn Imf_3_0__Header__ConstIterator_sizeof() -> usize;

pub fn Imf_3_0__Header__ConstIterator_alignof() -> usize;

pub fn Imf_3_0__Header__ConstIterator_ctor(this_: *mut Imf_Header_ConstIterator_t) -> Exception;

pub fn Imf_3_0__Header__ConstIterator_from_mut(this_: *mut Imf_Header_ConstIterator_t, rhs: *const Imf_Header_Iterator_t) -> Exception;

pub fn Imf_3_0__Header__ConstIterator_inc(this_: *mut Imf_Header_ConstIterator_t, return_: *mut *mut Imf_Header_ConstIterator_t) -> Exception;

pub fn Imf_3_0__Header__ConstIterator_name(this_: *const Imf_Header_ConstIterator_t, return_: *mut *const c_char) -> Exception;

pub fn Imf_3_0__Header__ConstIterator_attribute(this_: *const Imf_Header_ConstIterator_t, return_: *mut *const Imf_Attribute_t) -> Exception;

pub fn Imf_3_0__Header__ConstIterator_copy(this_: *mut Imf_Header_ConstIterator_t, rhs: *const Imf_Header_ConstIterator_t) -> Exception;

pub fn Imf_3_0__Header__ConstIterator_move(this_: *mut Imf_Header_ConstIterator_t, rhs: *mut Imf_Header_ConstIterator_t) -> Exception;


} // extern "C"

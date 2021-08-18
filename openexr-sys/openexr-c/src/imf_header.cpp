#include "imf_header_private.h"

#include "imath_box_private.h"
#include "imath_vec_private.h"
#include "imf_attribute_private.h"
#include "imf_channellist_private.h"
#include "imf_compression_private.h"
#include "imf_io_private.h"
#include "imf_lineorder_private.h"
#include "imf_previewimage_private.h"
#include "imf_tiledescription_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_sizeof()
{
        return sizeof(Imf_3_0::Header);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_alignof()
{
        return alignof(Imf_3_0::Header);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_with_dimensions(
    Imf_Header_t * this_
    , int width
    , int height
    , float pixelAspectRatio
    , Imath_V2f_t const * screenWindowCenter
    , float screenWindowWidth
    , Imf_LineOrder lineOrder
    , Imf_Compression compression)
{
    try {
        new (this_) Imf_3_0::Header(width, height, pixelAspectRatio, to_cpp_ref(screenWindowCenter), screenWindowWidth, Imf_LineOrder_to_cpp_ref(&(lineOrder)), Imf_Compression_to_cpp_ref(&(compression)));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_ctor(
    Imf_Header_t * this_
    , Imath_Box2i_t const * displayWindow
    , Imath_Box2i_t const * dataWindow
    , float pixelAspectRatio
    , Imath_V2f_t const * screenWindowCenter
    , float screenWindowWidth
    , Imf_LineOrder lineOrder
    , Imf_Compression compression)
{
    try {
        new (this_) Imf_3_0::Header(to_cpp_ref(displayWindow), to_cpp_ref(dataWindow), pixelAspectRatio, to_cpp_ref(screenWindowCenter), screenWindowWidth, Imf_LineOrder_to_cpp_ref(&(lineOrder)), Imf_Compression_to_cpp_ref(&(compression)));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_copy(
    Imf_Header_t * this_
    , Imf_Header_t const * rhs)
{
    try {
        new (this_) Imf_3_0::Header(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_dtor(
    Imf_Header_t * this_)
{
    try {
        (to_cpp(this_)) -> Imf_3_0::Header::~Header();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__assign(
    Imf_Header_t * this_
    , Imf_Header_t * * return_
    , Imf_Header_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_insert(
    Imf_Header_t * this_
    , char const * name
    , Imf_Attribute_t const * attribute)
{
    try {
        (to_cpp(this_)) -> insert(name, to_cpp_ref(attribute));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_erase(
    Imf_Header_t * this_
    , char const * name)
{
    try {
        (to_cpp(this_)) -> erase(name);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_index(
    Imf_Header_t * this_
    , Imf_Attribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_index_const(
    Imf_Header_t const * this_
    , Imf_Attribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator[](name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Int(
    Imf_Header_t * this_
    , Imf_IntAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<int>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Float(
    Imf_Header_t * this_
    , Imf_FloatAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<float>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Double(
    Imf_Header_t * this_
    , Imf_DoubleAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<double>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Box2i(
    Imf_Header_t * this_
    , Imf_Box2iAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<int> > >>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Box2f(
    Imf_Header_t * this_
    , Imf_Box2fAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<float> > >>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_ChannelList(
    Imf_Header_t * this_
    , Imf_ChannelListAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::ChannelList>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Chromaticities(
    Imf_Header_t * this_
    , Imf_ChromaticitiesAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Compression(
    Imf_Header_t * this_
    , Imf_CompressionAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::Compression>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_DeepImageState(
    Imf_Header_t * this_
    , Imf_DeepImageStateAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Envmap(
    Imf_Header_t * this_
    , Imf_EnvmapAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::Envmap>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_CppVectorFloat(
    Imf_Header_t * this_
    , Imf_CppVectorFloatAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::FloatVector>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_CppVectorString(
    Imf_Header_t * this_
    , Imf_CppVectorStringAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::StringVector>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_CppString(
    Imf_Header_t * this_
    , Imf_CppStringAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<std::string>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_KeyCode(
    Imf_Header_t * this_
    , Imf_KeyCodeAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::KeyCode>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_LineOrder(
    Imf_Header_t * this_
    , Imf_LineOrderAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::LineOrder>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M33f(
    Imf_Header_t * this_
    , Imf_M33fAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::M33f>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M33d(
    Imf_Header_t * this_
    , Imf_M33dAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::M33d>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M44f(
    Imf_Header_t * this_
    , Imf_M44fAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::M44f>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M44d(
    Imf_Header_t * this_
    , Imf_M44dAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::M44d>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_PreviewImage(
    Imf_Header_t * this_
    , Imf_PreviewImageAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Rational(
    Imf_Header_t * this_
    , Imf_RationalAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::Rational>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_TileDescription(
    Imf_Header_t * this_
    , Imf_TileDescriptionAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::TileDescription>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_TimeCode(
    Imf_Header_t * this_
    , Imf_TimeCodeAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::TimeCode>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V2i(
    Imf_Header_t * this_
    , Imf_V2iAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::V2i>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V2f(
    Imf_Header_t * this_
    , Imf_V2fAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::V2f>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V2d(
    Imf_Header_t * this_
    , Imf_V2dAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::V2d>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V3i(
    Imf_Header_t * this_
    , Imf_V3iAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::V3i>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V3f(
    Imf_Header_t * this_
    , Imf_V3fAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::V3f>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V3d(
    Imf_Header_t * this_
    , Imf_V3dAttribute_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::V3d>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Int_const(
    Imf_Header_t const * this_
    , Imf_IntAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<int>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Float_const(
    Imf_Header_t const * this_
    , Imf_FloatAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<float>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Double_const(
    Imf_Header_t const * this_
    , Imf_DoubleAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<double>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Box2i_const(
    Imf_Header_t const * this_
    , Imf_Box2iAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<int> > >>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Box2f_const(
    Imf_Header_t const * this_
    , Imf_Box2fAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<float> > >>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_ChannelList_const(
    Imf_Header_t const * this_
    , Imf_ChannelListAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::ChannelList>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Chromaticities_const(
    Imf_Header_t const * this_
    , Imf_ChromaticitiesAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Compression_const(
    Imf_Header_t const * this_
    , Imf_CompressionAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::Compression>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_DeepImageState_const(
    Imf_Header_t const * this_
    , Imf_DeepImageStateAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Envmap_const(
    Imf_Header_t const * this_
    , Imf_EnvmapAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::Envmap>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_CppVectorFloat_const(
    Imf_Header_t const * this_
    , Imf_CppVectorFloatAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::FloatVector>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_CppVectorString_const(
    Imf_Header_t const * this_
    , Imf_CppVectorStringAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::StringVector>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_CppString_const(
    Imf_Header_t const * this_
    , Imf_CppStringAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<std::string>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_KeyCode_const(
    Imf_Header_t const * this_
    , Imf_KeyCodeAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::KeyCode>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_LineOrder_const(
    Imf_Header_t const * this_
    , Imf_LineOrderAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::LineOrder>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M33f_const(
    Imf_Header_t const * this_
    , Imf_M33fAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::M33f>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M33d_const(
    Imf_Header_t const * this_
    , Imf_M33dAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::M33d>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M44f_const(
    Imf_Header_t const * this_
    , Imf_M44fAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::M44f>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_M44d_const(
    Imf_Header_t const * this_
    , Imf_M44dAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::M44d>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_PreviewImage_const(
    Imf_Header_t const * this_
    , Imf_PreviewImageAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_Rational_const(
    Imf_Header_t const * this_
    , Imf_RationalAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::Rational>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_TileDescription_const(
    Imf_Header_t const * this_
    , Imf_TileDescriptionAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::TileDescription>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_TimeCode_const(
    Imf_Header_t const * this_
    , Imf_TimeCodeAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imf_3_0::TimeCode>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V2i_const(
    Imf_Header_t const * this_
    , Imf_V2iAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::V2i>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V2f_const(
    Imf_Header_t const * this_
    , Imf_V2fAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::V2f>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V2d_const(
    Imf_Header_t const * this_
    , Imf_V2dAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::V2d>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V3i_const(
    Imf_Header_t const * this_
    , Imf_V3iAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::V3i>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V3f_const(
    Imf_Header_t const * this_
    , Imf_V3fAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::V3f>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_findTypedAttribute_V3d_const(
    Imf_Header_t const * this_
    , Imf_V3dAttribute_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedAttribute<Imf_3_0::TypedAttribute<Imath::V3d>>(name));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_begin(
    Imf_Header_t * this_
    , Imf_Header_Iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_begin_const(
    Imf_Header_t const * this_
    , Imf_Header_ConstIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_end(
    Imf_Header_t * this_
    , Imf_Header_Iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_end_const(
    Imf_Header_t const * this_
    , Imf_Header_ConstIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_find(
    Imf_Header_t * this_
    , Imf_Header_Iterator_t * return_
    , char const * name)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> find(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_find_const(
    Imf_Header_t const * this_
    , Imf_Header_ConstIterator_t * return_
    , char const * name)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> find(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_displayWindow(
    Imf_Header_t * this_
    , Imath_Box2i_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> displayWindow());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_displayWindow_const(
    Imf_Header_t const * this_
    , Imath_Box2i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> displayWindow());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_dataWindow(
    Imf_Header_t * this_
    , Imath_Box2i_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> dataWindow());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_dataWindow_const(
    Imf_Header_t const * this_
    , Imath_Box2i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> dataWindow());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_pixelAspectRatio(
    Imf_Header_t * this_
    , float * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> pixelAspectRatio());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_pixelAspectRatio_const(
    Imf_Header_t const * this_
    , float const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> pixelAspectRatio());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_screenWindowCenter(
    Imf_Header_t * this_
    , Imath_V2f_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> screenWindowCenter());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_screenWindowCenter_const(
    Imf_Header_t const * this_
    , Imath_V2f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> screenWindowCenter());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_screenWindowWidth(
    Imf_Header_t * this_
    , float * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> screenWindowWidth());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_screenWindowWidth_const(
    Imf_Header_t const * this_
    , float const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> screenWindowWidth());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_channels(
    Imf_Header_t * this_
    , Imf_ChannelList_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> channels());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_channels_const(
    Imf_Header_t const * this_
    , Imf_ChannelList_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> channels());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_lineOrder(
    Imf_Header_t * this_
    , Imf_LineOrder * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> lineOrder());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_lineOrder_const(
    Imf_Header_t const * this_
    , Imf_LineOrder const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> lineOrder());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_compression(
    Imf_Header_t * this_
    , Imf_Compression * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> compression());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_compression_const(
    Imf_Header_t const * this_
    , Imf_Compression const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> compression());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setName(
    Imf_Header_t * this_
    , std_string_t const * name)
{
    try {
        (to_cpp(this_)) -> setName(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_name(
    Imf_Header_t * this_
    , std_string_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> name());
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_name_const(
    Imf_Header_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> name());
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasName(
    Imf_Header_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> hasName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setType(
    Imf_Header_t * this_
    , std_string_t const * Type)
{
    try {
        (to_cpp(this_)) -> setType(to_cpp_ref(Type));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_type(
    Imf_Header_t * this_
    , std_string_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> type());
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_type_const(
    Imf_Header_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> type());
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasType(
    Imf_Header_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> hasType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setVersion(
    Imf_Header_t * this_
    , int const version)
{
    try {
        (to_cpp(this_)) -> setVersion(version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_version(
    Imf_Header_t * this_
    , int * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> version());
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_version_const(
    Imf_Header_t const * this_
    , int const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> version());
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasVersion(
    Imf_Header_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> hasVersion();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setChunkCount(
    Imf_Header_t * this_
    , int chunks)
{
    try {
        (to_cpp(this_)) -> setChunkCount(chunks);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasChunkCount(
    Imf_Header_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> hasChunkCount();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_chunkCount_const(
    Imf_Header_t const * this_
    , int const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> chunkCount());
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setView(
    Imf_Header_t * this_
    , std_string_t const * view)
{
    try {
        (to_cpp(this_)) -> setView(to_cpp_ref(view));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasView(
    Imf_Header_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> hasView();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_view(
    Imf_Header_t * this_
    , std_string_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> view());
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_view_const(
    Imf_Header_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> view());
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setTileDescription(
    Imf_Header_t * this_
    , Imf_TileDescription_t const * td)
{
    try {
        (to_cpp(this_)) -> setTileDescription(to_cpp_ref(td));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_tileDescription(
    Imf_Header_t * this_
    , Imf_TileDescription_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> tileDescription());
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_tileDescription_const(
    Imf_Header_t const * this_
    , Imf_TileDescription_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> tileDescription());
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasTileDescription(
    Imf_Header_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> hasTileDescription();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setPreviewImage(
    Imf_Header_t * this_
    , Imf_PreviewImage_t const * p)
{
    try {
        (to_cpp(this_)) -> setPreviewImage(to_cpp_ref(p));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_previewImage(
    Imf_Header_t * this_
    , Imf_PreviewImage_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> previewImage());
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_previewImage_const(
    Imf_Header_t const * this_
    , Imf_PreviewImage_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> previewImage());
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_hasPreviewImage(
    Imf_Header_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> hasPreviewImage();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_sanityCheck(
    Imf_Header_t const * this_
    , _Bool isTiled
    , _Bool isMultipartFile)
{
    try {
        (to_cpp(this_)) -> sanityCheck(isTiled, isMultipartFile);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setMaxImageSize(
    int maxWidth
    , int maxHeight)
{
    try {
        Imf_3_0::Header::setMaxImageSize(maxWidth, maxHeight);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_setMaxTileSize(
    int maxWidth
    , int maxHeight)
{
    try {
        Imf_3_0::Header::setMaxTileSize(maxWidth, maxHeight);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_readsNothing(
    Imf_Header_t * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> readsNothing();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_writeTo(
    Imf_Header_t const * this_
    , uint64_t * return_
    , Imf_OStream_t * os
    , _Bool isTiled)
{
    try {
        *(return_) = (to_cpp(this_)) -> writeTo(to_cpp_ref(os), isTiled);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header_readFrom(
    Imf_Header_t * this_
    , Imf_IStream_t * is
    , int * version)
{
    try {
        (to_cpp(this_)) -> readFrom(to_cpp_ref(is), *(version));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_sizeof()
{
        return sizeof(Imf_3_0::Header::Iterator);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_alignof()
{
        return alignof(Imf_3_0::Header::Iterator);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_ctor(
    Imf_Header_Iterator_t * this_)
{
    try {
        new (this_) Imf_3_0::Header::Iterator();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_inc(
    Imf_Header_Iterator_t * this_
    , Imf_Header_Iterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_name(
    Imf_Header_Iterator_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> name();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_attribute(
    Imf_Header_Iterator_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> attribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_copy(
    Imf_Header_Iterator_t * this_
    , Imf_Header_Iterator_t const * rhs)
{
        new (this_) Imf_3_0::Header::Iterator(to_cpp_ref(rhs));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__Iterator_move(
    Imf_Header_Iterator_t * this_
    , Imf_Header_Iterator_t * rhs)
{
        new (this_) Imf_3_0::Header::Iterator(to_cpp_ref(rhs));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_sizeof()
{
        return sizeof(Imf_3_0::Header::ConstIterator);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_alignof()
{
        return alignof(Imf_3_0::Header::ConstIterator);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_ctor(
    Imf_Header_ConstIterator_t * this_)
{
    try {
        new (this_) Imf_3_0::Header::ConstIterator();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_from_mut(
    Imf_Header_ConstIterator_t * this_
    , Imf_Header_Iterator_t const * rhs)
{
    try {
        new (this_) Imf_3_0::Header::ConstIterator(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_inc(
    Imf_Header_ConstIterator_t * this_
    , Imf_Header_ConstIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_name(
    Imf_Header_ConstIterator_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> name();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_attribute(
    Imf_Header_ConstIterator_t const * this_
    , Imf_Attribute_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> attribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_copy(
    Imf_Header_ConstIterator_t * this_
    , Imf_Header_ConstIterator_t const * rhs)
{
        new (this_) Imf_3_0::Header::ConstIterator(to_cpp_ref(rhs));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Header__ConstIterator_move(
    Imf_Header_ConstIterator_t * this_
    , Imf_Header_ConstIterator_t * rhs)
{
        new (this_) Imf_3_0::Header::ConstIterator(to_cpp_ref(rhs));
        return 0;
}


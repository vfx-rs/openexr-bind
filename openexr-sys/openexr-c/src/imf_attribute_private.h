#pragma once
#include <imf_attribute.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfAttribute.h>
#include <OpenEXR/ImfBoxAttribute.h>
#include <OpenEXR/ImfChannelListAttribute.h>
#include <OpenEXR/ImfChromaticitiesAttribute.h>
#include <OpenEXR/ImfCompressionAttribute.h>
#include <OpenEXR/ImfDeepImageStateAttribute.h>
#include <OpenEXR/ImfEnvmapAttribute.h>
#include <OpenEXR/ImfFloatVectorAttribute.h>
#include <OpenEXR/ImfKeyCodeAttribute.h>
#include <OpenEXR/ImfLineOrderAttribute.h>
#include <OpenEXR/ImfMatrixAttribute.h>
#include <OpenEXR/ImfOpaqueAttribute.h>
#include <OpenEXR/ImfPreviewImageAttribute.h>
#include <OpenEXR/ImfRationalAttribute.h>
#include <OpenEXR/ImfStringAttribute.h>
#include <OpenEXR/ImfStringVectorAttribute.h>
#include <OpenEXR/ImfTileDescriptionAttribute.h>
#include <OpenEXR/ImfTimeCodeAttribute.h>
#include <OpenEXR/ImfVecAttribute.h>
#include <cstring>
#include <vector>

inline Imf_3_0::Attribute const & to_cpp_ref(
    Imf_Attribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Attribute const * >(rhs));
}

inline Imf_3_0::Attribute & to_cpp_ref(
    Imf_Attribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Attribute * >(rhs));
}

inline Imf_3_0::Attribute const * to_cpp(
    Imf_Attribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Attribute const * >(rhs);
}

inline Imf_3_0::Attribute * to_cpp(
    Imf_Attribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Attribute * >(rhs);
}

inline void to_c(
    Imf_Attribute_t const * * lhs
    , Imf_3_0::Attribute const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Attribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_Attribute_t const * * lhs
    , Imf_3_0::Attribute const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Attribute_t const * >(rhs);
}

inline void to_c(
    Imf_Attribute_t * * lhs
    , Imf_3_0::Attribute & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Attribute_t * >(&(rhs));
}

inline void to_c(
    Imf_Attribute_t * * lhs
    , Imf_3_0::Attribute * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Attribute_t * >(rhs);
}

inline Imf_3_0::OpaqueAttribute const & to_cpp_ref(
    Imf_OpaqueAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::OpaqueAttribute const * >(rhs));
}

inline Imf_3_0::OpaqueAttribute & to_cpp_ref(
    Imf_OpaqueAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::OpaqueAttribute * >(rhs));
}

inline Imf_3_0::OpaqueAttribute const * to_cpp(
    Imf_OpaqueAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::OpaqueAttribute const * >(rhs);
}

inline Imf_3_0::OpaqueAttribute * to_cpp(
    Imf_OpaqueAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::OpaqueAttribute * >(rhs);
}

inline void to_c(
    Imf_OpaqueAttribute_t const * * lhs
    , Imf_3_0::OpaqueAttribute const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_OpaqueAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_OpaqueAttribute_t const * * lhs
    , Imf_3_0::OpaqueAttribute const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_OpaqueAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_OpaqueAttribute_t * * lhs
    , Imf_3_0::OpaqueAttribute & rhs)
{
        *(lhs) = reinterpret_cast<Imf_OpaqueAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_OpaqueAttribute_t * * lhs
    , Imf_3_0::OpaqueAttribute * rhs)
{
        *(lhs) = reinterpret_cast<Imf_OpaqueAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_OpaqueAttribute_t * * lhs
    , Imf_3_0::OpaqueAttribute const & rhs)
{
        Imf_3_0__OpaqueAttribute_copy_1(lhs, reinterpret_cast<Imf_OpaqueAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<int> const & to_cpp_ref(
    Imf_IntAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<int> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<int> & to_cpp_ref(
    Imf_IntAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<int> * >(rhs));
}

inline Imf_3_0::TypedAttribute<int> const * to_cpp(
    Imf_IntAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<int> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<int> * to_cpp(
    Imf_IntAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<int> * >(rhs);
}

inline void to_c(
    Imf_IntAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<int> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_IntAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_IntAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<int> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_IntAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_IntAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<int> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_IntAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_IntAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<int> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_IntAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_IntAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<int> const & rhs)
{
        Imf_3_0__TypedAttribute_int__ctor_copy(lhs, reinterpret_cast<Imf_IntAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<float> const & to_cpp_ref(
    Imf_FloatAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<float> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<float> & to_cpp_ref(
    Imf_FloatAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<float> * >(rhs));
}

inline Imf_3_0::TypedAttribute<float> const * to_cpp(
    Imf_FloatAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<float> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<float> * to_cpp(
    Imf_FloatAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<float> * >(rhs);
}

inline void to_c(
    Imf_FloatAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<float> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FloatAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_FloatAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<float> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FloatAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_FloatAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<float> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FloatAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_FloatAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<float> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FloatAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_FloatAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<float> const & rhs)
{
        Imf_3_0__TypedAttribute_float__ctor_copy(lhs, reinterpret_cast<Imf_FloatAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<double> const & to_cpp_ref(
    Imf_DoubleAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<double> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<double> & to_cpp_ref(
    Imf_DoubleAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<double> * >(rhs));
}

inline Imf_3_0::TypedAttribute<double> const * to_cpp(
    Imf_DoubleAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<double> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<double> * to_cpp(
    Imf_DoubleAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<double> * >(rhs);
}

inline void to_c(
    Imf_DoubleAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<double> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DoubleAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_DoubleAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<double> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DoubleAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_DoubleAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<double> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DoubleAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_DoubleAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<double> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DoubleAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_DoubleAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<double> const & rhs)
{
        Imf_3_0__TypedAttribute_double__ctor_copy(lhs, reinterpret_cast<Imf_DoubleAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imath::Box2i> const & to_cpp_ref(
    Imf_Box2iAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::Box2i> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::Box2i> & to_cpp_ref(
    Imf_Box2iAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::Box2i> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::Box2i> const * to_cpp(
    Imf_Box2iAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::Box2i> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imath::Box2i> * to_cpp(
    Imf_Box2iAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::Box2i> * >(rhs);
}

inline void to_c(
    Imf_Box2iAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::Box2i> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Box2iAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_Box2iAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::Box2i> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Box2iAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_Box2iAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::Box2i> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Box2iAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_Box2iAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::Box2i> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Box2iAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_Box2iAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::Box2i> const & rhs)
{
        Imf_3_0__TypedAttribute_Imath__Box2i__ctor_copy(lhs, reinterpret_cast<Imf_Box2iAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imath::Box2f> const & to_cpp_ref(
    Imf_Box2fAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::Box2f> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::Box2f> & to_cpp_ref(
    Imf_Box2fAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::Box2f> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::Box2f> const * to_cpp(
    Imf_Box2fAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::Box2f> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imath::Box2f> * to_cpp(
    Imf_Box2fAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::Box2f> * >(rhs);
}

inline void to_c(
    Imf_Box2fAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::Box2f> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Box2fAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_Box2fAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::Box2f> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Box2fAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_Box2fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::Box2f> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Box2fAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_Box2fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::Box2f> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Box2fAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_Box2fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::Box2f> const & rhs)
{
        Imf_3_0__TypedAttribute_Imath__Box2f__ctor_copy(lhs, reinterpret_cast<Imf_Box2fAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::ChannelList> const & to_cpp_ref(
    Imf_ChannelListAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::ChannelList> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::ChannelList> & to_cpp_ref(
    Imf_ChannelListAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::ChannelList> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::ChannelList> const * to_cpp(
    Imf_ChannelListAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::ChannelList> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imf_3_0::ChannelList> * to_cpp(
    Imf_ChannelListAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::ChannelList> * >(rhs);
}

inline void to_c(
    Imf_ChannelListAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::ChannelList> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelListAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_ChannelListAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::ChannelList> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelListAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_ChannelListAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::ChannelList> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelListAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_ChannelListAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::ChannelList> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelListAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_ChannelListAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::ChannelList> const & rhs)
{
        Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__ctor_copy(lhs, reinterpret_cast<Imf_ChannelListAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities> const & to_cpp_ref(
    Imf_ChromaticitiesAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities> & to_cpp_ref(
    Imf_ChromaticitiesAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities> const * to_cpp(
    Imf_ChromaticitiesAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities> * to_cpp(
    Imf_ChromaticitiesAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities> * >(rhs);
}

inline void to_c(
    Imf_ChromaticitiesAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChromaticitiesAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_ChromaticitiesAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChromaticitiesAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_ChromaticitiesAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChromaticitiesAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_ChromaticitiesAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChromaticitiesAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_ChromaticitiesAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities> const & rhs)
{
        Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__ctor_copy(lhs, reinterpret_cast<Imf_ChromaticitiesAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Compression> const & to_cpp_ref(
    Imf_CompressionAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Compression> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Compression> & to_cpp_ref(
    Imf_CompressionAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Compression> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Compression> const * to_cpp(
    Imf_CompressionAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Compression> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Compression> * to_cpp(
    Imf_CompressionAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Compression> * >(rhs);
}

inline void to_c(
    Imf_CompressionAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Compression> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_CompressionAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_CompressionAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Compression> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_CompressionAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_CompressionAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Compression> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_CompressionAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_CompressionAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Compression> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_CompressionAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_CompressionAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Compression> const & rhs)
{
        Imf_3_0__TypedAttribute_Imf_3_0__Compression__ctor_copy(lhs, reinterpret_cast<Imf_CompressionAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState> const & to_cpp_ref(
    Imf_DeepImageStateAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState> & to_cpp_ref(
    Imf_DeepImageStateAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState> const * to_cpp(
    Imf_DeepImageStateAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState> * to_cpp(
    Imf_DeepImageStateAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState> * >(rhs);
}

inline void to_c(
    Imf_DeepImageStateAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageStateAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepImageStateAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageStateAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_DeepImageStateAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageStateAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepImageStateAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageStateAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_DeepImageStateAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState> const & rhs)
{
        Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__ctor_copy(lhs, reinterpret_cast<Imf_DeepImageStateAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Envmap> const & to_cpp_ref(
    Imf_EnvmapAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Envmap> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Envmap> & to_cpp_ref(
    Imf_EnvmapAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Envmap> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Envmap> const * to_cpp(
    Imf_EnvmapAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Envmap> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Envmap> * to_cpp(
    Imf_EnvmapAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Envmap> * >(rhs);
}

inline void to_c(
    Imf_EnvmapAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Envmap> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_EnvmapAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_EnvmapAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Envmap> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_EnvmapAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_EnvmapAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Envmap> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_EnvmapAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_EnvmapAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Envmap> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_EnvmapAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_EnvmapAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Envmap> const & rhs)
{
        Imf_3_0__TypedAttribute_Imf_3_0__Envmap__ctor_copy(lhs, reinterpret_cast<Imf_EnvmapAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::FloatVector> const & to_cpp_ref(
    Imf_CppVectorFloatAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::FloatVector> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::FloatVector> & to_cpp_ref(
    Imf_CppVectorFloatAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::FloatVector> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::FloatVector> const * to_cpp(
    Imf_CppVectorFloatAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::FloatVector> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imf_3_0::FloatVector> * to_cpp(
    Imf_CppVectorFloatAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::FloatVector> * >(rhs);
}

inline void to_c(
    Imf_CppVectorFloatAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::FloatVector> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_CppVectorFloatAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_CppVectorFloatAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::FloatVector> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_CppVectorFloatAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_CppVectorFloatAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::FloatVector> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_CppVectorFloatAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_CppVectorFloatAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::FloatVector> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_CppVectorFloatAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_CppVectorFloatAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::FloatVector> const & rhs)
{
        Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__ctor_copy(lhs, reinterpret_cast<Imf_CppVectorFloatAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::StringVector> const & to_cpp_ref(
    Imf_CppVectorStringAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::StringVector> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::StringVector> & to_cpp_ref(
    Imf_CppVectorStringAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::StringVector> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::StringVector> const * to_cpp(
    Imf_CppVectorStringAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::StringVector> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imf_3_0::StringVector> * to_cpp(
    Imf_CppVectorStringAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::StringVector> * >(rhs);
}

inline void to_c(
    Imf_CppVectorStringAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::StringVector> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_CppVectorStringAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_CppVectorStringAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::StringVector> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_CppVectorStringAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_CppVectorStringAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::StringVector> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_CppVectorStringAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_CppVectorStringAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::StringVector> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_CppVectorStringAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_CppVectorStringAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::StringVector> const & rhs)
{
        Imf_3_0__TypedAttribute_Imf_3_0__StringVector__ctor_copy(lhs, reinterpret_cast<Imf_CppVectorStringAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<std::string> const & to_cpp_ref(
    Imf_CppStringAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<std::string> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<std::string> & to_cpp_ref(
    Imf_CppStringAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<std::string> * >(rhs));
}

inline Imf_3_0::TypedAttribute<std::string> const * to_cpp(
    Imf_CppStringAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<std::string> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<std::string> * to_cpp(
    Imf_CppStringAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<std::string> * >(rhs);
}

inline void to_c(
    Imf_CppStringAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<std::string> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_CppStringAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_CppStringAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<std::string> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_CppStringAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_CppStringAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<std::string> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_CppStringAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_CppStringAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<std::string> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_CppStringAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_CppStringAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<std::string> const & rhs)
{
        Imf_3_0__TypedAttribute_std__string__ctor_copy(lhs, reinterpret_cast<Imf_CppStringAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::KeyCode> const & to_cpp_ref(
    Imf_KeyCodeAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::KeyCode> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::KeyCode> & to_cpp_ref(
    Imf_KeyCodeAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::KeyCode> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::KeyCode> const * to_cpp(
    Imf_KeyCodeAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::KeyCode> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imf_3_0::KeyCode> * to_cpp(
    Imf_KeyCodeAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::KeyCode> * >(rhs);
}

inline void to_c(
    Imf_KeyCodeAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::KeyCode> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_KeyCodeAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_KeyCodeAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::KeyCode> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_KeyCodeAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_KeyCodeAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::KeyCode> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_KeyCodeAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_KeyCodeAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::KeyCode> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_KeyCodeAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_KeyCodeAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::KeyCode> const & rhs)
{
        Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__ctor_copy(lhs, reinterpret_cast<Imf_KeyCodeAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::LineOrder> const & to_cpp_ref(
    Imf_LineOrderAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::LineOrder> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::LineOrder> & to_cpp_ref(
    Imf_LineOrderAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::LineOrder> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::LineOrder> const * to_cpp(
    Imf_LineOrderAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::LineOrder> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imf_3_0::LineOrder> * to_cpp(
    Imf_LineOrderAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::LineOrder> * >(rhs);
}

inline void to_c(
    Imf_LineOrderAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::LineOrder> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_LineOrderAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_LineOrderAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::LineOrder> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_LineOrderAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_LineOrderAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::LineOrder> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_LineOrderAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_LineOrderAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::LineOrder> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_LineOrderAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_LineOrderAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::LineOrder> const & rhs)
{
        Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__ctor_copy(lhs, reinterpret_cast<Imf_LineOrderAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imath::M33f> const & to_cpp_ref(
    Imf_M33fAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M33f> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::M33f> & to_cpp_ref(
    Imf_M33fAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M33f> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::M33f> const * to_cpp(
    Imf_M33fAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M33f> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imath::M33f> * to_cpp(
    Imf_M33fAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M33f> * >(rhs);
}

inline void to_c(
    Imf_M33fAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::M33f> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_M33fAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_M33fAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::M33f> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_M33fAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_M33fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::M33f> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_M33fAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_M33fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::M33f> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_M33fAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_M33fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::M33f> const & rhs)
{
        Imf_3_0__TypedAttribute_Imath__M33f__ctor_copy(lhs, reinterpret_cast<Imf_M33fAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imath::M33d> const & to_cpp_ref(
    Imf_M33dAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M33d> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::M33d> & to_cpp_ref(
    Imf_M33dAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M33d> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::M33d> const * to_cpp(
    Imf_M33dAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M33d> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imath::M33d> * to_cpp(
    Imf_M33dAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M33d> * >(rhs);
}

inline void to_c(
    Imf_M33dAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::M33d> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_M33dAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_M33dAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::M33d> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_M33dAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_M33dAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::M33d> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_M33dAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_M33dAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::M33d> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_M33dAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_M33dAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::M33d> const & rhs)
{
        Imf_3_0__TypedAttribute_Imath__M33d__ctor_copy(lhs, reinterpret_cast<Imf_M33dAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imath::M44f> const & to_cpp_ref(
    Imf_M44fAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M44f> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::M44f> & to_cpp_ref(
    Imf_M44fAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M44f> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::M44f> const * to_cpp(
    Imf_M44fAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M44f> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imath::M44f> * to_cpp(
    Imf_M44fAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M44f> * >(rhs);
}

inline void to_c(
    Imf_M44fAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::M44f> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_M44fAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_M44fAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::M44f> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_M44fAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_M44fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::M44f> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_M44fAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_M44fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::M44f> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_M44fAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_M44fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::M44f> const & rhs)
{
        Imf_3_0__TypedAttribute_Imath__M44f__ctor_copy(lhs, reinterpret_cast<Imf_M44fAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imath::M44d> const & to_cpp_ref(
    Imf_M44dAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M44d> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::M44d> & to_cpp_ref(
    Imf_M44dAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M44d> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::M44d> const * to_cpp(
    Imf_M44dAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M44d> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imath::M44d> * to_cpp(
    Imf_M44dAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::M44d> * >(rhs);
}

inline void to_c(
    Imf_M44dAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::M44d> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_M44dAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_M44dAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::M44d> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_M44dAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_M44dAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::M44d> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_M44dAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_M44dAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::M44d> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_M44dAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_M44dAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::M44d> const & rhs)
{
        Imf_3_0__TypedAttribute_Imath__M44d__ctor_copy(lhs, reinterpret_cast<Imf_M44dAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage> const & to_cpp_ref(
    Imf_PreviewImageAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage> & to_cpp_ref(
    Imf_PreviewImageAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage> const * to_cpp(
    Imf_PreviewImageAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage> * to_cpp(
    Imf_PreviewImageAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage> * >(rhs);
}

inline void to_c(
    Imf_PreviewImageAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_PreviewImageAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_PreviewImageAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_PreviewImageAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_PreviewImageAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_PreviewImageAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_PreviewImageAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_PreviewImageAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_PreviewImageAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage> const & rhs)
{
        Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__ctor_copy(lhs, reinterpret_cast<Imf_PreviewImageAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Rational> const & to_cpp_ref(
    Imf_RationalAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Rational> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Rational> & to_cpp_ref(
    Imf_RationalAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Rational> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Rational> const * to_cpp(
    Imf_RationalAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Rational> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imf_3_0::Rational> * to_cpp(
    Imf_RationalAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::Rational> * >(rhs);
}

inline void to_c(
    Imf_RationalAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Rational> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_RationalAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_RationalAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Rational> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_RationalAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_RationalAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Rational> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_RationalAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_RationalAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Rational> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_RationalAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_RationalAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::Rational> const & rhs)
{
        Imf_3_0__TypedAttribute_Imf_3_0__Rational__ctor_copy(lhs, reinterpret_cast<Imf_RationalAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::TileDescription> const & to_cpp_ref(
    Imf_TileDescriptionAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::TileDescription> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::TileDescription> & to_cpp_ref(
    Imf_TileDescriptionAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::TileDescription> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::TileDescription> const * to_cpp(
    Imf_TileDescriptionAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::TileDescription> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imf_3_0::TileDescription> * to_cpp(
    Imf_TileDescriptionAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::TileDescription> * >(rhs);
}

inline void to_c(
    Imf_TileDescriptionAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::TileDescription> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TileDescriptionAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_TileDescriptionAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::TileDescription> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TileDescriptionAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_TileDescriptionAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::TileDescription> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TileDescriptionAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_TileDescriptionAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::TileDescription> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TileDescriptionAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_TileDescriptionAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::TileDescription> const & rhs)
{
        Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__ctor_copy(lhs, reinterpret_cast<Imf_TileDescriptionAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::TimeCode> const & to_cpp_ref(
    Imf_TimeCodeAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::TimeCode> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::TimeCode> & to_cpp_ref(
    Imf_TimeCodeAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::TimeCode> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imf_3_0::TimeCode> const * to_cpp(
    Imf_TimeCodeAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::TimeCode> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imf_3_0::TimeCode> * to_cpp(
    Imf_TimeCodeAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imf_3_0::TimeCode> * >(rhs);
}

inline void to_c(
    Imf_TimeCodeAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::TimeCode> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TimeCodeAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_TimeCodeAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::TimeCode> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TimeCodeAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_TimeCodeAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::TimeCode> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_TimeCodeAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_TimeCodeAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::TimeCode> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_TimeCodeAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_TimeCodeAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imf_3_0::TimeCode> const & rhs)
{
        Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__ctor_copy(lhs, reinterpret_cast<Imf_TimeCodeAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imath::V2i> const & to_cpp_ref(
    Imf_V2iAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V2i> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::V2i> & to_cpp_ref(
    Imf_V2iAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V2i> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::V2i> const * to_cpp(
    Imf_V2iAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V2i> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imath::V2i> * to_cpp(
    Imf_V2iAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V2i> * >(rhs);
}

inline void to_c(
    Imf_V2iAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2i> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_V2iAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_V2iAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2i> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_V2iAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_V2iAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2i> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_V2iAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_V2iAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2i> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_V2iAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_V2iAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2i> const & rhs)
{
        Imf_3_0__TypedAttribute_Imath__V2i__ctor_copy(lhs, reinterpret_cast<Imf_V2iAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imath::V2f> const & to_cpp_ref(
    Imf_V2fAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V2f> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::V2f> & to_cpp_ref(
    Imf_V2fAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V2f> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::V2f> const * to_cpp(
    Imf_V2fAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V2f> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imath::V2f> * to_cpp(
    Imf_V2fAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V2f> * >(rhs);
}

inline void to_c(
    Imf_V2fAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2f> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_V2fAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_V2fAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2f> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_V2fAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_V2fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2f> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_V2fAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_V2fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2f> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_V2fAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_V2fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2f> const & rhs)
{
        Imf_3_0__TypedAttribute_Imath__V2f__ctor_copy(lhs, reinterpret_cast<Imf_V2fAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imath::V2d> const & to_cpp_ref(
    Imf_V2dAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V2d> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::V2d> & to_cpp_ref(
    Imf_V2dAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V2d> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::V2d> const * to_cpp(
    Imf_V2dAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V2d> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imath::V2d> * to_cpp(
    Imf_V2dAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V2d> * >(rhs);
}

inline void to_c(
    Imf_V2dAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2d> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_V2dAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_V2dAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2d> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_V2dAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_V2dAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2d> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_V2dAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_V2dAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2d> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_V2dAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_V2dAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V2d> const & rhs)
{
        Imf_3_0__TypedAttribute_Imath__V2d__ctor_copy(lhs, reinterpret_cast<Imf_V2dAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imath::V3i> const & to_cpp_ref(
    Imf_V3iAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V3i> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::V3i> & to_cpp_ref(
    Imf_V3iAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V3i> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::V3i> const * to_cpp(
    Imf_V3iAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V3i> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imath::V3i> * to_cpp(
    Imf_V3iAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V3i> * >(rhs);
}

inline void to_c(
    Imf_V3iAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3i> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_V3iAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_V3iAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3i> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_V3iAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_V3iAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3i> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_V3iAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_V3iAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3i> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_V3iAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_V3iAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3i> const & rhs)
{
        Imf_3_0__TypedAttribute_Imath__V3i__ctor_copy(lhs, reinterpret_cast<Imf_V3iAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imath::V3f> const & to_cpp_ref(
    Imf_V3fAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V3f> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::V3f> & to_cpp_ref(
    Imf_V3fAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V3f> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::V3f> const * to_cpp(
    Imf_V3fAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V3f> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imath::V3f> * to_cpp(
    Imf_V3fAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V3f> * >(rhs);
}

inline void to_c(
    Imf_V3fAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3f> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_V3fAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_V3fAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3f> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_V3fAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_V3fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3f> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_V3fAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_V3fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3f> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_V3fAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_V3fAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3f> const & rhs)
{
        Imf_3_0__TypedAttribute_Imath__V3f__ctor_copy(lhs, reinterpret_cast<Imf_V3fAttribute_t const * >(&(rhs)));
}

inline Imf_3_0::TypedAttribute<Imath::V3d> const & to_cpp_ref(
    Imf_V3dAttribute_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V3d> const * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::V3d> & to_cpp_ref(
    Imf_V3dAttribute_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V3d> * >(rhs));
}

inline Imf_3_0::TypedAttribute<Imath::V3d> const * to_cpp(
    Imf_V3dAttribute_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V3d> const * >(rhs);
}

inline Imf_3_0::TypedAttribute<Imath::V3d> * to_cpp(
    Imf_V3dAttribute_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedAttribute<Imath::V3d> * >(rhs);
}

inline void to_c(
    Imf_V3dAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3d> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_V3dAttribute_t const * >(&(rhs));
}

inline void to_c(
    Imf_V3dAttribute_t const * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3d> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_V3dAttribute_t const * >(rhs);
}

inline void to_c(
    Imf_V3dAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3d> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_V3dAttribute_t * >(&(rhs));
}

inline void to_c(
    Imf_V3dAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3d> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_V3dAttribute_t * >(rhs);
}

inline void to_c_copy(
    Imf_V3dAttribute_t * * lhs
    , Imf_3_0::TypedAttribute<Imath::V3d> const & rhs)
{
        Imf_3_0__TypedAttribute_Imath__V3d__ctor_copy(lhs, reinterpret_cast<Imf_V3dAttribute_t const * >(&(rhs)));
}


#include "imf_attribute_private.h"

#include "imath_box_private.h"
#include "imath_matrix_private.h"
#include "imath_vec_private.h"
#include "imf_array_private.h"
#include "imf_channellist_private.h"
#include "imf_chromaticities_private.h"
#include "imf_compression_private.h"
#include "imf_deepimagestate_private.h"
#include "imf_envmap_private.h"
#include "imf_io_private.h"
#include "imf_keycode_private.h"
#include "imf_lineorder_private.h"
#include "imf_previewimage_private.h"
#include "imf_rational_private.h"
#include "imf_tiledescription_private.h"
#include "imf_timecode_private.h"
#include "std_string_private.h"
#include "std_vector_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__Attribute_dtor(
    Imf_Attribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Attribute_typeName(
    Imf_Attribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Attribute_copy(
    Imf_Attribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Attribute_writeValueTo(
    Imf_Attribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Attribute_readValueFrom(
    Imf_Attribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Attribute_copyValueFrom(
    Imf_Attribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Attribute_newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Attribute_knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Attribute__assign(
    Imf_Attribute_t * this_
    , Imf_Attribute_t * * return_
    , Imf_Attribute_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OpaqueAttribute_typeName(
    Imf_OpaqueAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OpaqueAttribute_copy(
    Imf_OpaqueAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OpaqueAttribute_writeValueTo(
    Imf_OpaqueAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OpaqueAttribute_readValueFrom(
    Imf_OpaqueAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OpaqueAttribute_copyValueFrom(
    Imf_OpaqueAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OpaqueAttribute_newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OpaqueAttribute_knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OpaqueAttribute_from_typeName(
    Imf_OpaqueAttribute_t * * this_
    , char const * typeName)
{
    try {
        to_c(this_, new Imf_3_0::OpaqueAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OpaqueAttribute_copy_1(
    Imf_OpaqueAttribute_t * * this_
    , Imf_OpaqueAttribute_t const * rhs)
{
    try {
        to_c(this_, new Imf_3_0::OpaqueAttribute(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OpaqueAttribute_dtor(
    Imf_OpaqueAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OpaqueAttribute_dataSize(
    Imf_OpaqueAttribute_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> dataSize();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__OpaqueAttribute_data(
    Imf_OpaqueAttribute_t const * this_
    , Imf_ArrayChar_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__typeName(
    Imf_IntAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__copy(
    Imf_IntAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__writeValueTo(
    Imf_IntAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__readValueFrom(
    Imf_IntAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__copyValueFrom(
    Imf_IntAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__ctor(
    Imf_IntAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<int>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__from_value(
    Imf_IntAttribute_t * * this_
    , int const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<int>(*(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__ctor_copy(
    Imf_IntAttribute_t * * this_
    , Imf_IntAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<int>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__dtor(
    Imf_IntAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__assign(
    Imf_IntAttribute_t * this_
    , Imf_IntAttribute_t * * return_
    , Imf_IntAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__value(
    Imf_IntAttribute_t * this_
    , int * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__value_const(
    Imf_IntAttribute_t const * this_
    , int const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<int>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<int>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__cast_ptr(
    Imf_IntAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<int>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__cast_ptr_const(
    Imf_IntAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<int>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__cast(
    Imf_IntAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<int>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__cast_const(
    Imf_IntAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<int>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<int>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_int__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<int>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__typeName(
    Imf_FloatAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__copy(
    Imf_FloatAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__writeValueTo(
    Imf_FloatAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__readValueFrom(
    Imf_FloatAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__copyValueFrom(
    Imf_FloatAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__ctor(
    Imf_FloatAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<float>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__from_value(
    Imf_FloatAttribute_t * * this_
    , float const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<float>(*(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__ctor_copy(
    Imf_FloatAttribute_t * * this_
    , Imf_FloatAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<float>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__dtor(
    Imf_FloatAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__assign(
    Imf_FloatAttribute_t * this_
    , Imf_FloatAttribute_t * * return_
    , Imf_FloatAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__value(
    Imf_FloatAttribute_t * this_
    , float * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__value_const(
    Imf_FloatAttribute_t const * this_
    , float const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<float>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<float>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__cast_ptr(
    Imf_FloatAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<float>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__cast_ptr_const(
    Imf_FloatAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<float>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__cast(
    Imf_FloatAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<float>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__cast_const(
    Imf_FloatAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<float>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<float>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_float__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<float>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__typeName(
    Imf_DoubleAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__copy(
    Imf_DoubleAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__writeValueTo(
    Imf_DoubleAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__readValueFrom(
    Imf_DoubleAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__copyValueFrom(
    Imf_DoubleAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__ctor(
    Imf_DoubleAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<double>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__from_value(
    Imf_DoubleAttribute_t * * this_
    , double const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<double>(*(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__ctor_copy(
    Imf_DoubleAttribute_t * * this_
    , Imf_DoubleAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<double>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__dtor(
    Imf_DoubleAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__assign(
    Imf_DoubleAttribute_t * this_
    , Imf_DoubleAttribute_t * * return_
    , Imf_DoubleAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__value(
    Imf_DoubleAttribute_t * this_
    , double * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__value_const(
    Imf_DoubleAttribute_t const * this_
    , double const * * return_)
{
    try {
        *(return_) = &((to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<double>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<double>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__cast_ptr(
    Imf_DoubleAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<double>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__cast_ptr_const(
    Imf_DoubleAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<double>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__cast(
    Imf_DoubleAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<double>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__cast_const(
    Imf_DoubleAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<double>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<double>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_double__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<double>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__typeName(
    Imf_Box2iAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__copy(
    Imf_Box2iAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__writeValueTo(
    Imf_Box2iAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__readValueFrom(
    Imf_Box2iAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__copyValueFrom(
    Imf_Box2iAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__ctor(
    Imf_Box2iAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::Box2i>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__from_value(
    Imf_Box2iAttribute_t * * this_
    , Imath_Box2i_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::Box2i>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__ctor_copy(
    Imf_Box2iAttribute_t * * this_
    , Imf_Box2iAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::Box2i>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__dtor(
    Imf_Box2iAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__assign(
    Imf_Box2iAttribute_t * this_
    , Imf_Box2iAttribute_t * * return_
    , Imf_Box2iAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__value(
    Imf_Box2iAttribute_t * this_
    , Imath_Box2i_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__value_const(
    Imf_Box2iAttribute_t const * this_
    , Imath_Box2i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<int>>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<int>>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__cast_ptr(
    Imf_Box2iAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<int>>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__cast_ptr_const(
    Imf_Box2iAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<int>>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__cast(
    Imf_Box2iAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<int>>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__cast_const(
    Imf_Box2iAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<int>>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<int>>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2i__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<int>>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__typeName(
    Imf_Box2fAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__copy(
    Imf_Box2fAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__writeValueTo(
    Imf_Box2fAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__readValueFrom(
    Imf_Box2fAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__copyValueFrom(
    Imf_Box2fAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__ctor(
    Imf_Box2fAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::Box2f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__from_value(
    Imf_Box2fAttribute_t * * this_
    , Imath_Box2f_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::Box2f>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__ctor_copy(
    Imf_Box2fAttribute_t * * this_
    , Imf_Box2fAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::Box2f>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__dtor(
    Imf_Box2fAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__assign(
    Imf_Box2fAttribute_t * this_
    , Imf_Box2fAttribute_t * * return_
    , Imf_Box2fAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__value(
    Imf_Box2fAttribute_t * this_
    , Imath_Box2f_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__value_const(
    Imf_Box2fAttribute_t const * this_
    , Imath_Box2f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<float>>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<float>>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__cast_ptr(
    Imf_Box2fAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<float>>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__cast_ptr_const(
    Imf_Box2fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<float>>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__cast(
    Imf_Box2fAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<float>>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__cast_const(
    Imf_Box2fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<float>>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<float>>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__Box2f__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Box<Imath_3_0::Vec2<float>>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__typeName(
    Imf_ChannelListAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__copy(
    Imf_ChannelListAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__writeValueTo(
    Imf_ChannelListAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__readValueFrom(
    Imf_ChannelListAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__copyValueFrom(
    Imf_ChannelListAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__ctor(
    Imf_ChannelListAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::ChannelList>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__from_value(
    Imf_ChannelListAttribute_t * * this_
    , Imf_ChannelList_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::ChannelList>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__ctor_copy(
    Imf_ChannelListAttribute_t * * this_
    , Imf_ChannelListAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::ChannelList>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__dtor(
    Imf_ChannelListAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__assign(
    Imf_ChannelListAttribute_t * this_
    , Imf_ChannelListAttribute_t * * return_
    , Imf_ChannelListAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__value(
    Imf_ChannelListAttribute_t * this_
    , Imf_ChannelList_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__value_const(
    Imf_ChannelListAttribute_t const * this_
    , Imf_ChannelList_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imf_3_0::ChannelList>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::ChannelList>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast_ptr(
    Imf_ChannelListAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::ChannelList>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast_ptr_const(
    Imf_ChannelListAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::ChannelList>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast(
    Imf_ChannelListAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::ChannelList>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__cast_const(
    Imf_ChannelListAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::ChannelList>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::ChannelList>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__ChannelList__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::ChannelList>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__typeName(
    Imf_ChromaticitiesAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__copy(
    Imf_ChromaticitiesAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__writeValueTo(
    Imf_ChromaticitiesAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__readValueFrom(
    Imf_ChromaticitiesAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__copyValueFrom(
    Imf_ChromaticitiesAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__ctor(
    Imf_ChromaticitiesAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__from_value(
    Imf_ChromaticitiesAttribute_t * * this_
    , Imf_Chromaticities_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__ctor_copy(
    Imf_ChromaticitiesAttribute_t * * this_
    , Imf_ChromaticitiesAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__dtor(
    Imf_ChromaticitiesAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__assign(
    Imf_ChromaticitiesAttribute_t * this_
    , Imf_ChromaticitiesAttribute_t * * return_
    , Imf_ChromaticitiesAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__value(
    Imf_ChromaticitiesAttribute_t * this_
    , Imf_Chromaticities_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__value_const(
    Imf_ChromaticitiesAttribute_t const * this_
    , Imf_Chromaticities_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast_ptr(
    Imf_ChromaticitiesAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast_ptr_const(
    Imf_ChromaticitiesAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast(
    Imf_ChromaticitiesAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__cast_const(
    Imf_ChromaticitiesAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Chromaticities__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::Chromaticities>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__typeName(
    Imf_CompressionAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__copy(
    Imf_CompressionAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__writeValueTo(
    Imf_CompressionAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__readValueFrom(
    Imf_CompressionAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__copyValueFrom(
    Imf_CompressionAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__ctor(
    Imf_CompressionAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::Compression>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__from_value(
    Imf_CompressionAttribute_t * * this_
    , Imf_Compression const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::Compression>(Imf_Compression_to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__ctor_copy(
    Imf_CompressionAttribute_t * * this_
    , Imf_CompressionAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::Compression>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__dtor(
    Imf_CompressionAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__assign(
    Imf_CompressionAttribute_t * this_
    , Imf_CompressionAttribute_t * * return_
    , Imf_CompressionAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__value(
    Imf_CompressionAttribute_t * this_
    , Imf_Compression * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__value_const(
    Imf_CompressionAttribute_t const * this_
    , Imf_Compression const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imf_3_0::Compression>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Compression>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast_ptr(
    Imf_CompressionAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Compression>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast_ptr_const(
    Imf_CompressionAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Compression>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast(
    Imf_CompressionAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Compression>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__cast_const(
    Imf_CompressionAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Compression>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::Compression>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Compression__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::Compression>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__typeName(
    Imf_DeepImageStateAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__copy(
    Imf_DeepImageStateAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__writeValueTo(
    Imf_DeepImageStateAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__readValueFrom(
    Imf_DeepImageStateAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__copyValueFrom(
    Imf_DeepImageStateAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__ctor(
    Imf_DeepImageStateAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__from_value(
    Imf_DeepImageStateAttribute_t * * this_
    , Imf_DeepImageState const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState>(Imf_DeepImageState_to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__ctor_copy(
    Imf_DeepImageStateAttribute_t * * this_
    , Imf_DeepImageStateAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__dtor(
    Imf_DeepImageStateAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__assign(
    Imf_DeepImageStateAttribute_t * this_
    , Imf_DeepImageStateAttribute_t * * return_
    , Imf_DeepImageStateAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__value(
    Imf_DeepImageStateAttribute_t * this_
    , Imf_DeepImageState * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__value_const(
    Imf_DeepImageStateAttribute_t const * this_
    , Imf_DeepImageState const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast_ptr(
    Imf_DeepImageStateAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast_ptr_const(
    Imf_DeepImageStateAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast(
    Imf_DeepImageStateAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__cast_const(
    Imf_DeepImageStateAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__DeepImageState__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::DeepImageState>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__typeName(
    Imf_EnvmapAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__copy(
    Imf_EnvmapAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__writeValueTo(
    Imf_EnvmapAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__readValueFrom(
    Imf_EnvmapAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__copyValueFrom(
    Imf_EnvmapAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__ctor(
    Imf_EnvmapAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::Envmap>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__from_value(
    Imf_EnvmapAttribute_t * * this_
    , Imf_Envmap const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::Envmap>(Imf_Envmap_to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__ctor_copy(
    Imf_EnvmapAttribute_t * * this_
    , Imf_EnvmapAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::Envmap>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__dtor(
    Imf_EnvmapAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__assign(
    Imf_EnvmapAttribute_t * this_
    , Imf_EnvmapAttribute_t * * return_
    , Imf_EnvmapAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__value(
    Imf_EnvmapAttribute_t * this_
    , Imf_Envmap * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__value_const(
    Imf_EnvmapAttribute_t const * this_
    , Imf_Envmap const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imf_3_0::Envmap>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Envmap>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast_ptr(
    Imf_EnvmapAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Envmap>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast_ptr_const(
    Imf_EnvmapAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Envmap>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast(
    Imf_EnvmapAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Envmap>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__cast_const(
    Imf_EnvmapAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Envmap>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::Envmap>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Envmap__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::Envmap>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__typeName(
    Imf_CppVectorFloatAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__copy(
    Imf_CppVectorFloatAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__writeValueTo(
    Imf_CppVectorFloatAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__readValueFrom(
    Imf_CppVectorFloatAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__copyValueFrom(
    Imf_CppVectorFloatAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__ctor(
    Imf_CppVectorFloatAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::FloatVector>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__from_value(
    Imf_CppVectorFloatAttribute_t * * this_
    , std_vector_float_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::FloatVector>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__ctor_copy(
    Imf_CppVectorFloatAttribute_t * * this_
    , Imf_CppVectorFloatAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::FloatVector>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__dtor(
    Imf_CppVectorFloatAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__assign(
    Imf_CppVectorFloatAttribute_t * this_
    , Imf_CppVectorFloatAttribute_t * * return_
    , Imf_CppVectorFloatAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__value(
    Imf_CppVectorFloatAttribute_t * this_
    , std_vector_float_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__value_const(
    Imf_CppVectorFloatAttribute_t const * this_
    , std_vector_float_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<std::vector<float, std::allocator<float>>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::vector<float, std::allocator<float>>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast_ptr(
    Imf_CppVectorFloatAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::vector<float, std::allocator<float>>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast_ptr_const(
    Imf_CppVectorFloatAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::vector<float, std::allocator<float>>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast(
    Imf_CppVectorFloatAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::vector<float, std::allocator<float>>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__cast_const(
    Imf_CppVectorFloatAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::vector<float, std::allocator<float>>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<std::vector<float, std::allocator<float>>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__FloatVector__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<std::vector<float, std::allocator<float>>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__typeName(
    Imf_CppVectorStringAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__copy(
    Imf_CppVectorStringAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__writeValueTo(
    Imf_CppVectorStringAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__readValueFrom(
    Imf_CppVectorStringAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__copyValueFrom(
    Imf_CppVectorStringAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__ctor(
    Imf_CppVectorStringAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::StringVector>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__from_value(
    Imf_CppVectorStringAttribute_t * * this_
    , std_vector_string_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::StringVector>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__ctor_copy(
    Imf_CppVectorStringAttribute_t * * this_
    , Imf_CppVectorStringAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::StringVector>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__dtor(
    Imf_CppVectorStringAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__assign(
    Imf_CppVectorStringAttribute_t * this_
    , Imf_CppVectorStringAttribute_t * * return_
    , Imf_CppVectorStringAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__value(
    Imf_CppVectorStringAttribute_t * this_
    , std_vector_string_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__value_const(
    Imf_CppVectorStringAttribute_t const * this_
    , std_vector_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char>>>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char>>>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast_ptr(
    Imf_CppVectorStringAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char>>>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast_ptr_const(
    Imf_CppVectorStringAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char>>>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast(
    Imf_CppVectorStringAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char>>>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__cast_const(
    Imf_CppVectorStringAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char>>>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char>>>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__StringVector__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char>>>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__typeName(
    Imf_CppStringAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__copy(
    Imf_CppStringAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__writeValueTo(
    Imf_CppStringAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__readValueFrom(
    Imf_CppStringAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__copyValueFrom(
    Imf_CppStringAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__ctor(
    Imf_CppStringAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<std::string>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__from_value(
    Imf_CppStringAttribute_t * * this_
    , std_string_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<std::string>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__ctor_copy(
    Imf_CppStringAttribute_t * * this_
    , Imf_CppStringAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<std::string>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__dtor(
    Imf_CppStringAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__assign(
    Imf_CppStringAttribute_t * this_
    , Imf_CppStringAttribute_t * * return_
    , Imf_CppStringAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__value(
    Imf_CppStringAttribute_t * this_
    , std_string_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__value_const(
    Imf_CppStringAttribute_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<std::__cxx11::basic_string<char>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::__cxx11::basic_string<char>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__cast_ptr(
    Imf_CppStringAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::__cxx11::basic_string<char>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__cast_ptr_const(
    Imf_CppStringAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::__cxx11::basic_string<char>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__cast(
    Imf_CppStringAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::__cxx11::basic_string<char>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__cast_const(
    Imf_CppStringAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<std::__cxx11::basic_string<char>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<std::__cxx11::basic_string<char>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_std__string__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<std::__cxx11::basic_string<char>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__typeName(
    Imf_KeyCodeAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__copy(
    Imf_KeyCodeAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__writeValueTo(
    Imf_KeyCodeAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__readValueFrom(
    Imf_KeyCodeAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__copyValueFrom(
    Imf_KeyCodeAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__ctor(
    Imf_KeyCodeAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::KeyCode>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__from_value(
    Imf_KeyCodeAttribute_t * * this_
    , Imf_KeyCode_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::KeyCode>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__ctor_copy(
    Imf_KeyCodeAttribute_t * * this_
    , Imf_KeyCodeAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::KeyCode>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__dtor(
    Imf_KeyCodeAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__assign(
    Imf_KeyCodeAttribute_t * this_
    , Imf_KeyCodeAttribute_t * * return_
    , Imf_KeyCodeAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__value(
    Imf_KeyCodeAttribute_t * this_
    , Imf_KeyCode_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__value_const(
    Imf_KeyCodeAttribute_t const * this_
    , Imf_KeyCode_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imf_3_0::KeyCode>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::KeyCode>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast_ptr(
    Imf_KeyCodeAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::KeyCode>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast_ptr_const(
    Imf_KeyCodeAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::KeyCode>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast(
    Imf_KeyCodeAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::KeyCode>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__cast_const(
    Imf_KeyCodeAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::KeyCode>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::KeyCode>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__KeyCode__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::KeyCode>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__typeName(
    Imf_LineOrderAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__copy(
    Imf_LineOrderAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__writeValueTo(
    Imf_LineOrderAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__readValueFrom(
    Imf_LineOrderAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__copyValueFrom(
    Imf_LineOrderAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__ctor(
    Imf_LineOrderAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::LineOrder>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__from_value(
    Imf_LineOrderAttribute_t * * this_
    , Imf_LineOrder const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::LineOrder>(Imf_LineOrder_to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__ctor_copy(
    Imf_LineOrderAttribute_t * * this_
    , Imf_LineOrderAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::LineOrder>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__dtor(
    Imf_LineOrderAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__assign(
    Imf_LineOrderAttribute_t * this_
    , Imf_LineOrderAttribute_t * * return_
    , Imf_LineOrderAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__value(
    Imf_LineOrderAttribute_t * this_
    , Imf_LineOrder * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__value_const(
    Imf_LineOrderAttribute_t const * this_
    , Imf_LineOrder const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imf_3_0::LineOrder>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::LineOrder>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast_ptr(
    Imf_LineOrderAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::LineOrder>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast_ptr_const(
    Imf_LineOrderAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::LineOrder>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast(
    Imf_LineOrderAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::LineOrder>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__cast_const(
    Imf_LineOrderAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::LineOrder>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::LineOrder>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__LineOrder__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::LineOrder>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__typeName(
    Imf_M33fAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__copy(
    Imf_M33fAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__writeValueTo(
    Imf_M33fAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__readValueFrom(
    Imf_M33fAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__copyValueFrom(
    Imf_M33fAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__ctor(
    Imf_M33fAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::M33f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__from_value(
    Imf_M33fAttribute_t * * this_
    , Imath_M33f_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::M33f>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__ctor_copy(
    Imf_M33fAttribute_t * * this_
    , Imf_M33fAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::M33f>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__dtor(
    Imf_M33fAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__assign(
    Imf_M33fAttribute_t * this_
    , Imf_M33fAttribute_t * * return_
    , Imf_M33fAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__value(
    Imf_M33fAttribute_t * this_
    , Imath_M33f_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__value_const(
    Imf_M33fAttribute_t const * this_
    , Imath_M33f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<float>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<float>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__cast_ptr(
    Imf_M33fAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<float>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__cast_ptr_const(
    Imf_M33fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<float>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__cast(
    Imf_M33fAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<float>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__cast_const(
    Imf_M33fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<float>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<float>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33f__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<float>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__typeName(
    Imf_M33dAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__copy(
    Imf_M33dAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__writeValueTo(
    Imf_M33dAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__readValueFrom(
    Imf_M33dAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__copyValueFrom(
    Imf_M33dAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__ctor(
    Imf_M33dAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::M33d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__from_value(
    Imf_M33dAttribute_t * * this_
    , Imath_M33d_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::M33d>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__ctor_copy(
    Imf_M33dAttribute_t * * this_
    , Imf_M33dAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::M33d>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__dtor(
    Imf_M33dAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__assign(
    Imf_M33dAttribute_t * this_
    , Imf_M33dAttribute_t * * return_
    , Imf_M33dAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__value(
    Imf_M33dAttribute_t * this_
    , Imath_M33d_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__value_const(
    Imf_M33dAttribute_t const * this_
    , Imath_M33d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<double>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<double>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__cast_ptr(
    Imf_M33dAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<double>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__cast_ptr_const(
    Imf_M33dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<double>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__cast(
    Imf_M33dAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<double>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__cast_const(
    Imf_M33dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<double>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<double>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M33d__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Matrix33<double>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__typeName(
    Imf_M44fAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__copy(
    Imf_M44fAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__writeValueTo(
    Imf_M44fAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__readValueFrom(
    Imf_M44fAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__copyValueFrom(
    Imf_M44fAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__ctor(
    Imf_M44fAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::M44f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__from_value(
    Imf_M44fAttribute_t * * this_
    , Imath_M44f_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::M44f>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__ctor_copy(
    Imf_M44fAttribute_t * * this_
    , Imf_M44fAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::M44f>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__dtor(
    Imf_M44fAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__assign(
    Imf_M44fAttribute_t * this_
    , Imf_M44fAttribute_t * * return_
    , Imf_M44fAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__value(
    Imf_M44fAttribute_t * this_
    , Imath_M44f_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__value_const(
    Imf_M44fAttribute_t const * this_
    , Imath_M44f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<float>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<float>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__cast_ptr(
    Imf_M44fAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<float>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__cast_ptr_const(
    Imf_M44fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<float>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__cast(
    Imf_M44fAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<float>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__cast_const(
    Imf_M44fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<float>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<float>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44f__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<float>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__typeName(
    Imf_M44dAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__copy(
    Imf_M44dAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__writeValueTo(
    Imf_M44dAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__readValueFrom(
    Imf_M44dAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__copyValueFrom(
    Imf_M44dAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__ctor(
    Imf_M44dAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::M44d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__from_value(
    Imf_M44dAttribute_t * * this_
    , Imath_M44d_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::M44d>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__ctor_copy(
    Imf_M44dAttribute_t * * this_
    , Imf_M44dAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::M44d>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__dtor(
    Imf_M44dAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__assign(
    Imf_M44dAttribute_t * this_
    , Imf_M44dAttribute_t * * return_
    , Imf_M44dAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__value(
    Imf_M44dAttribute_t * this_
    , Imath_M44d_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__value_const(
    Imf_M44dAttribute_t const * this_
    , Imath_M44d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<double>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<double>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__cast_ptr(
    Imf_M44dAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<double>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__cast_ptr_const(
    Imf_M44dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<double>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__cast(
    Imf_M44dAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<double>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__cast_const(
    Imf_M44dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<double>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<double>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__M44d__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Matrix44<double>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__typeName(
    Imf_PreviewImageAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__copy(
    Imf_PreviewImageAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__writeValueTo(
    Imf_PreviewImageAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__readValueFrom(
    Imf_PreviewImageAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__copyValueFrom(
    Imf_PreviewImageAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__ctor(
    Imf_PreviewImageAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__from_value(
    Imf_PreviewImageAttribute_t * * this_
    , Imf_PreviewImage_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__ctor_copy(
    Imf_PreviewImageAttribute_t * * this_
    , Imf_PreviewImageAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__dtor(
    Imf_PreviewImageAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__assign(
    Imf_PreviewImageAttribute_t * this_
    , Imf_PreviewImageAttribute_t * * return_
    , Imf_PreviewImageAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__value(
    Imf_PreviewImageAttribute_t * this_
    , Imf_PreviewImage_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__value_const(
    Imf_PreviewImageAttribute_t const * this_
    , Imf_PreviewImage_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast_ptr(
    Imf_PreviewImageAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast_ptr_const(
    Imf_PreviewImageAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast(
    Imf_PreviewImageAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__cast_const(
    Imf_PreviewImageAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__PreviewImage__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::PreviewImage>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__typeName(
    Imf_RationalAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__copy(
    Imf_RationalAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__writeValueTo(
    Imf_RationalAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__readValueFrom(
    Imf_RationalAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__copyValueFrom(
    Imf_RationalAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__ctor(
    Imf_RationalAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::Rational>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__from_value(
    Imf_RationalAttribute_t * * this_
    , Imf_Rational_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::Rational>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__ctor_copy(
    Imf_RationalAttribute_t * * this_
    , Imf_RationalAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::Rational>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__dtor(
    Imf_RationalAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__assign(
    Imf_RationalAttribute_t * this_
    , Imf_RationalAttribute_t * * return_
    , Imf_RationalAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__value(
    Imf_RationalAttribute_t * this_
    , Imf_Rational_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__value_const(
    Imf_RationalAttribute_t const * this_
    , Imf_Rational_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imf_3_0::Rational>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Rational>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast_ptr(
    Imf_RationalAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Rational>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast_ptr_const(
    Imf_RationalAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Rational>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast(
    Imf_RationalAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Rational>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__cast_const(
    Imf_RationalAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::Rational>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::Rational>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__Rational__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::Rational>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__typeName(
    Imf_TileDescriptionAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__copy(
    Imf_TileDescriptionAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__writeValueTo(
    Imf_TileDescriptionAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__readValueFrom(
    Imf_TileDescriptionAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__copyValueFrom(
    Imf_TileDescriptionAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__ctor(
    Imf_TileDescriptionAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::TileDescription>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__from_value(
    Imf_TileDescriptionAttribute_t * * this_
    , Imf_TileDescription_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::TileDescription>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__ctor_copy(
    Imf_TileDescriptionAttribute_t * * this_
    , Imf_TileDescriptionAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::TileDescription>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__dtor(
    Imf_TileDescriptionAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__assign(
    Imf_TileDescriptionAttribute_t * this_
    , Imf_TileDescriptionAttribute_t * * return_
    , Imf_TileDescriptionAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__value(
    Imf_TileDescriptionAttribute_t * this_
    , Imf_TileDescription_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__value_const(
    Imf_TileDescriptionAttribute_t const * this_
    , Imf_TileDescription_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imf_3_0::TileDescription>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::TileDescription>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast_ptr(
    Imf_TileDescriptionAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::TileDescription>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast_ptr_const(
    Imf_TileDescriptionAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::TileDescription>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast(
    Imf_TileDescriptionAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::TileDescription>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__cast_const(
    Imf_TileDescriptionAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::TileDescription>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::TileDescription>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TileDescription__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::TileDescription>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__typeName(
    Imf_TimeCodeAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__copy(
    Imf_TimeCodeAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__writeValueTo(
    Imf_TimeCodeAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__readValueFrom(
    Imf_TimeCodeAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__copyValueFrom(
    Imf_TimeCodeAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__ctor(
    Imf_TimeCodeAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::TimeCode>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__from_value(
    Imf_TimeCodeAttribute_t * * this_
    , Imf_TimeCode_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::TimeCode>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__ctor_copy(
    Imf_TimeCodeAttribute_t * * this_
    , Imf_TimeCodeAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imf_3_0::TimeCode>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__dtor(
    Imf_TimeCodeAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__assign(
    Imf_TimeCodeAttribute_t * this_
    , Imf_TimeCodeAttribute_t * * return_
    , Imf_TimeCodeAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__value(
    Imf_TimeCodeAttribute_t * this_
    , Imf_TimeCode_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__value_const(
    Imf_TimeCodeAttribute_t const * this_
    , Imf_TimeCode_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imf_3_0::TimeCode>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::TimeCode>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast_ptr(
    Imf_TimeCodeAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::TimeCode>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast_ptr_const(
    Imf_TimeCodeAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::TimeCode>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast(
    Imf_TimeCodeAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::TimeCode>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__cast_const(
    Imf_TimeCodeAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imf_3_0::TimeCode>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::TimeCode>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imf_3_0__TimeCode__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imf_3_0::TimeCode>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__typeName(
    Imf_V2iAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__copy(
    Imf_V2iAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__writeValueTo(
    Imf_V2iAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__readValueFrom(
    Imf_V2iAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__copyValueFrom(
    Imf_V2iAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__ctor(
    Imf_V2iAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V2i>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__from_value(
    Imf_V2iAttribute_t * * this_
    , Imath_V2i_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V2i>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__ctor_copy(
    Imf_V2iAttribute_t * * this_
    , Imf_V2iAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V2i>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__dtor(
    Imf_V2iAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__assign(
    Imf_V2iAttribute_t * this_
    , Imf_V2iAttribute_t * * return_
    , Imf_V2iAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__value(
    Imf_V2iAttribute_t * this_
    , Imath_V2i_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__value_const(
    Imf_V2iAttribute_t const * this_
    , Imath_V2i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imath_3_0::Vec2<int>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<int>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__cast_ptr(
    Imf_V2iAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<int>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__cast_ptr_const(
    Imf_V2iAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<int>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__cast(
    Imf_V2iAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<int>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__cast_const(
    Imf_V2iAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<int>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Vec2<int>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2i__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Vec2<int>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__typeName(
    Imf_V2fAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__copy(
    Imf_V2fAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__writeValueTo(
    Imf_V2fAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__readValueFrom(
    Imf_V2fAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__copyValueFrom(
    Imf_V2fAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__ctor(
    Imf_V2fAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V2f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__from_value(
    Imf_V2fAttribute_t * * this_
    , Imath_V2f_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V2f>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__ctor_copy(
    Imf_V2fAttribute_t * * this_
    , Imf_V2fAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V2f>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__dtor(
    Imf_V2fAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__assign(
    Imf_V2fAttribute_t * this_
    , Imf_V2fAttribute_t * * return_
    , Imf_V2fAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__value(
    Imf_V2fAttribute_t * this_
    , Imath_V2f_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__value_const(
    Imf_V2fAttribute_t const * this_
    , Imath_V2f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imath_3_0::Vec2<float>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<float>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__cast_ptr(
    Imf_V2fAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<float>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__cast_ptr_const(
    Imf_V2fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<float>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__cast(
    Imf_V2fAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<float>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__cast_const(
    Imf_V2fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<float>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Vec2<float>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2f__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Vec2<float>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__typeName(
    Imf_V2dAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__copy(
    Imf_V2dAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__writeValueTo(
    Imf_V2dAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__readValueFrom(
    Imf_V2dAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__copyValueFrom(
    Imf_V2dAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__ctor(
    Imf_V2dAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V2d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__from_value(
    Imf_V2dAttribute_t * * this_
    , Imath_V2d_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V2d>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__ctor_copy(
    Imf_V2dAttribute_t * * this_
    , Imf_V2dAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V2d>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__dtor(
    Imf_V2dAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__assign(
    Imf_V2dAttribute_t * this_
    , Imf_V2dAttribute_t * * return_
    , Imf_V2dAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__value(
    Imf_V2dAttribute_t * this_
    , Imath_V2d_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__value_const(
    Imf_V2dAttribute_t const * this_
    , Imath_V2d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imath_3_0::Vec2<double>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<double>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__cast_ptr(
    Imf_V2dAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<double>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__cast_ptr_const(
    Imf_V2dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<double>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__cast(
    Imf_V2dAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<double>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__cast_const(
    Imf_V2dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec2<double>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Vec2<double>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V2d__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Vec2<double>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__typeName(
    Imf_V3iAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__copy(
    Imf_V3iAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__writeValueTo(
    Imf_V3iAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__readValueFrom(
    Imf_V3iAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__copyValueFrom(
    Imf_V3iAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__ctor(
    Imf_V3iAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V3i>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__from_value(
    Imf_V3iAttribute_t * * this_
    , Imath_V3i_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V3i>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__ctor_copy(
    Imf_V3iAttribute_t * * this_
    , Imf_V3iAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V3i>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__dtor(
    Imf_V3iAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__assign(
    Imf_V3iAttribute_t * this_
    , Imf_V3iAttribute_t * * return_
    , Imf_V3iAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__value(
    Imf_V3iAttribute_t * this_
    , Imath_V3i_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__value_const(
    Imf_V3iAttribute_t const * this_
    , Imath_V3i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imath_3_0::Vec3<int>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<int>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__cast_ptr(
    Imf_V3iAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<int>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__cast_ptr_const(
    Imf_V3iAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<int>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__cast(
    Imf_V3iAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<int>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__cast_const(
    Imf_V3iAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<int>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Vec3<int>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3i__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Vec3<int>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__typeName(
    Imf_V3fAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__copy(
    Imf_V3fAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__writeValueTo(
    Imf_V3fAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__readValueFrom(
    Imf_V3fAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__copyValueFrom(
    Imf_V3fAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__ctor(
    Imf_V3fAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V3f>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__from_value(
    Imf_V3fAttribute_t * * this_
    , Imath_V3f_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V3f>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__ctor_copy(
    Imf_V3fAttribute_t * * this_
    , Imf_V3fAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V3f>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__dtor(
    Imf_V3fAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__assign(
    Imf_V3fAttribute_t * this_
    , Imf_V3fAttribute_t * * return_
    , Imf_V3fAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__value(
    Imf_V3fAttribute_t * this_
    , Imath_V3f_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__value_const(
    Imf_V3fAttribute_t const * this_
    , Imath_V3f_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imath_3_0::Vec3<float>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<float>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__cast_ptr(
    Imf_V3fAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<float>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__cast_ptr_const(
    Imf_V3fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<float>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__cast(
    Imf_V3fAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<float>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__cast_const(
    Imf_V3fAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<float>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Vec3<float>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3f__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Vec3<float>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__typeName(
    Imf_V3dAttribute_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> typeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__copy(
    Imf_V3dAttribute_t const * this_
    , Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> copy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__writeValueTo(
    Imf_V3dAttribute_t const * this_
    , Imf_OStream_t * os
    , int version)
{
    try {
        (to_cpp(this_)) -> writeValueTo(to_cpp_ref(os), version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__readValueFrom(
    Imf_V3dAttribute_t * this_
    , Imf_IStream_t * is
    , int size
    , int version)
{
    try {
        (to_cpp(this_)) -> readValueFrom(to_cpp_ref(is), size, version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__copyValueFrom(
    Imf_V3dAttribute_t * this_
    , Imf_Attribute_t const * other)
{
    try {
        (to_cpp(this_)) -> copyValueFrom(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__newAttribute(
    Imf_Attribute_t * * return_
    , char const * typeName)
{
    try {
        to_c(return_, Imf_3_0::Attribute::newAttribute(typeName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__knownType(
    _Bool * return_
    , char const * typeName)
{
    try {
        *(return_) = Imf_3_0::Attribute::knownType(typeName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__ctor(
    Imf_V3dAttribute_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V3d>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__from_value(
    Imf_V3dAttribute_t * * this_
    , Imath_V3d_t const * value)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V3d>(to_cpp_ref(value)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__ctor_copy(
    Imf_V3dAttribute_t * * this_
    , Imf_V3dAttribute_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::TypedAttribute<Imath::V3d>(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__dtor(
    Imf_V3dAttribute_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__assign(
    Imf_V3dAttribute_t * this_
    , Imf_V3dAttribute_t * * return_
    , Imf_V3dAttribute_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__value(
    Imf_V3dAttribute_t * this_
    , Imath_V3d_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__value_const(
    Imf_V3dAttribute_t const * this_
    , Imath_V3d_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> value());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__staticTypeName(
    char const * * return_)
{
    try {
        *(return_) = Imf_3_0::TypedAttribute<Imath_3_0::Vec3<double>>::staticTypeName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__makeNewAttribute(
    Imf_Attribute_t * * return_)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<double>>::makeNewAttribute());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__cast_ptr(
    Imf_V3dAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<double>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__cast_ptr_const(
    Imf_V3dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<double>>::cast(to_cpp(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__cast(
    Imf_V3dAttribute_t * * return_
    , Imf_Attribute_t * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<double>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__cast_const(
    Imf_V3dAttribute_t const * * return_
    , Imf_Attribute_t const * attribute)
{
    try {
        to_c(return_, Imf_3_0::TypedAttribute<Imath_3_0::Vec3<double>>::cast(to_cpp_ref(attribute)));
        return 0;
    } catch (Iex::TypeExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 8;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__registerAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Vec3<double>>::registerAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__TypedAttribute_Imath__V3d__unRegisterAttributeType()
{
    try {
        Imf_3_0::TypedAttribute<Imath_3_0::Vec3<double>>::unRegisterAttributeType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


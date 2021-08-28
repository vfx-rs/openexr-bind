#pragma once
#include <imf_header.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfChannelListAttribute.h>
#include <OpenEXR/ImfChromaticitiesAttribute.h>
#include <OpenEXR/ImfDeepImageStateAttribute.h>
#include <OpenEXR/ImfEnvmapAttribute.h>
#include <OpenEXR/ImfFloatVectorAttribute.h>
#include <OpenEXR/ImfHeader.h>
#include <OpenEXR/ImfKeyCodeAttribute.h>
#include <OpenEXR/ImfLineOrderAttribute.h>
#include <OpenEXR/ImfMatrixAttribute.h>
#include <OpenEXR/ImfPreviewImageAttribute.h>
#include <OpenEXR/ImfRationalAttribute.h>
#include <OpenEXR/ImfStringAttribute.h>
#include <OpenEXR/ImfStringVectorAttribute.h>
#include <OpenEXR/ImfTileDescriptionAttribute.h>
#include <OpenEXR/ImfTimeCodeAttribute.h>
#include <OpenEXR/ImfVecAttribute.h>
#include <cstring>

inline Imf_3_0::Header const & to_cpp_ref(
    Imf_Header_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Header const * >(rhs));
}

inline Imf_3_0::Header & to_cpp_ref(
    Imf_Header_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Header * >(rhs));
}

inline Imf_3_0::Header const * to_cpp(
    Imf_Header_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Header const * >(rhs);
}

inline Imf_3_0::Header * to_cpp(
    Imf_Header_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Header * >(rhs);
}

inline void to_c(
    Imf_Header_t const * * lhs
    , Imf_3_0::Header const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Header_t const * >(&(rhs));
}

inline void to_c(
    Imf_Header_t const * * lhs
    , Imf_3_0::Header const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Header_t const * >(rhs);
}

inline void to_c(
    Imf_Header_t * * lhs
    , Imf_3_0::Header & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Header_t * >(&(rhs));
}

inline void to_c(
    Imf_Header_t * * lhs
    , Imf_3_0::Header * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Header_t * >(rhs);
}

inline void to_c_copy(
    Imf_Header_t * lhs
    , Imf_3_0::Header const & rhs)
{
        Imf_3_0__Header_copy(lhs, reinterpret_cast<Imf_Header_t const * >(&(rhs)));
}

inline Imf_3_0::Header::Iterator const & to_cpp_ref(
    Imf_Header_Iterator_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Header::Iterator const * >(rhs));
}

inline Imf_3_0::Header::Iterator & to_cpp_ref(
    Imf_Header_Iterator_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Header::Iterator * >(rhs));
}

inline Imf_3_0::Header::Iterator const * to_cpp(
    Imf_Header_Iterator_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Header::Iterator const * >(rhs);
}

inline Imf_3_0::Header::Iterator * to_cpp(
    Imf_Header_Iterator_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Header::Iterator * >(rhs);
}

inline void to_c(
    Imf_Header_Iterator_t const * * lhs
    , Imf_3_0::Header::Iterator const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Header_Iterator_t const * >(&(rhs));
}

inline void to_c(
    Imf_Header_Iterator_t const * * lhs
    , Imf_3_0::Header::Iterator const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Header_Iterator_t const * >(rhs);
}

inline void to_c(
    Imf_Header_Iterator_t * * lhs
    , Imf_3_0::Header::Iterator & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Header_Iterator_t * >(&(rhs));
}

inline void to_c(
    Imf_Header_Iterator_t * * lhs
    , Imf_3_0::Header::Iterator * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Header_Iterator_t * >(rhs);
}

inline void to_c_copy(
    Imf_Header_Iterator_t * lhs
    , Imf_3_0::Header::Iterator const & rhs)
{
        Imf_3_0__Header__Iterator_copy(lhs, reinterpret_cast<Imf_Header_Iterator_t const * >(&(rhs)));
}

inline Imf_3_0::Header::ConstIterator const & to_cpp_ref(
    Imf_Header_ConstIterator_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Header::ConstIterator const * >(rhs));
}

inline Imf_3_0::Header::ConstIterator & to_cpp_ref(
    Imf_Header_ConstIterator_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Header::ConstIterator * >(rhs));
}

inline Imf_3_0::Header::ConstIterator const * to_cpp(
    Imf_Header_ConstIterator_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Header::ConstIterator const * >(rhs);
}

inline Imf_3_0::Header::ConstIterator * to_cpp(
    Imf_Header_ConstIterator_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Header::ConstIterator * >(rhs);
}

inline void to_c(
    Imf_Header_ConstIterator_t const * * lhs
    , Imf_3_0::Header::ConstIterator const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Header_ConstIterator_t const * >(&(rhs));
}

inline void to_c(
    Imf_Header_ConstIterator_t const * * lhs
    , Imf_3_0::Header::ConstIterator const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Header_ConstIterator_t const * >(rhs);
}

inline void to_c(
    Imf_Header_ConstIterator_t * * lhs
    , Imf_3_0::Header::ConstIterator & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Header_ConstIterator_t * >(&(rhs));
}

inline void to_c(
    Imf_Header_ConstIterator_t * * lhs
    , Imf_3_0::Header::ConstIterator * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Header_ConstIterator_t * >(rhs);
}

inline void to_c_copy(
    Imf_Header_ConstIterator_t * lhs
    , Imf_3_0::Header::ConstIterator const & rhs)
{
        Imf_3_0__Header__ConstIterator_copy(lhs, reinterpret_cast<Imf_Header_ConstIterator_t const * >(&(rhs)));
}


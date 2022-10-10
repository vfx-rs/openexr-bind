#pragma once
#include <imf_previewimage.h>


#include "openexr-errors-private.h"

#include <OpenEXR/IexMathExc.h>
#include <OpenEXR/ImfPreviewImage.h>
#include <cstring>

inline Imf_3_0::PreviewRgba const & to_cpp_ref(
    Imf_PreviewRgba_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::PreviewRgba const * >(rhs));
}

inline Imf_3_0::PreviewRgba & to_cpp_ref(
    Imf_PreviewRgba_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::PreviewRgba * >(rhs));
}

inline Imf_3_0::PreviewRgba const * to_cpp(
    Imf_PreviewRgba_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::PreviewRgba const * >(rhs);
}

inline Imf_3_0::PreviewRgba * to_cpp(
    Imf_PreviewRgba_t * rhs)
{
        return reinterpret_cast<Imf_3_0::PreviewRgba * >(rhs);
}

inline void to_c(
    Imf_PreviewRgba_t const * * lhs
    , Imf_3_0::PreviewRgba const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_PreviewRgba_t const * >(&(rhs));
}

inline void to_c(
    Imf_PreviewRgba_t const * * lhs
    , Imf_3_0::PreviewRgba const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_PreviewRgba_t const * >(rhs);
}

inline void to_c(
    Imf_PreviewRgba_t * * lhs
    , Imf_3_0::PreviewRgba & rhs)
{
        *(lhs) = reinterpret_cast<Imf_PreviewRgba_t * >(&(rhs));
}

inline void to_c(
    Imf_PreviewRgba_t * * lhs
    , Imf_3_0::PreviewRgba * rhs)
{
        *(lhs) = reinterpret_cast<Imf_PreviewRgba_t * >(rhs);
}

inline void to_c_copy(
    Imf_PreviewRgba_t * lhs
    , Imf_3_0::PreviewRgba const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline Imf_3_0::PreviewImage const & to_cpp_ref(
    Imf_PreviewImage_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::PreviewImage const * >(rhs));
}

inline Imf_3_0::PreviewImage & to_cpp_ref(
    Imf_PreviewImage_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::PreviewImage * >(rhs));
}

inline Imf_3_0::PreviewImage const * to_cpp(
    Imf_PreviewImage_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::PreviewImage const * >(rhs);
}

inline Imf_3_0::PreviewImage * to_cpp(
    Imf_PreviewImage_t * rhs)
{
        return reinterpret_cast<Imf_3_0::PreviewImage * >(rhs);
}

inline void to_c(
    Imf_PreviewImage_t const * * lhs
    , Imf_3_0::PreviewImage const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_PreviewImage_t const * >(&(rhs));
}

inline void to_c(
    Imf_PreviewImage_t const * * lhs
    , Imf_3_0::PreviewImage const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_PreviewImage_t const * >(rhs);
}

inline void to_c(
    Imf_PreviewImage_t * * lhs
    , Imf_3_0::PreviewImage & rhs)
{
        *(lhs) = reinterpret_cast<Imf_PreviewImage_t * >(&(rhs));
}

inline void to_c(
    Imf_PreviewImage_t * * lhs
    , Imf_3_0::PreviewImage * rhs)
{
        *(lhs) = reinterpret_cast<Imf_PreviewImage_t * >(rhs);
}

inline void to_c_copy(
    Imf_PreviewImage_t * * lhs
    , Imf_3_0::PreviewImage const & rhs)
{
        Imf_3_0__PreviewImage_copy(lhs, reinterpret_cast<Imf_PreviewImage_t const * >(&(rhs)));
}


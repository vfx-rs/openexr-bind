#pragma once
#include <imf_imagedatawindow.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfImageDataWindow.h>
#include <cstring>

inline Imf_3_0::DataWindowSource const & Imf_DataWindowSource_to_cpp_ref(
    Imf_DataWindowSource const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DataWindowSource const * >(rhs));
}

inline Imf_3_0::DataWindowSource & Imf_DataWindowSource_to_cpp_ref(
    Imf_DataWindowSource * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DataWindowSource * >(rhs));
}

inline Imf_3_0::DataWindowSource const * Imf_DataWindowSource_to_cpp(
    Imf_DataWindowSource const * rhs)
{
        return reinterpret_cast<Imf_3_0::DataWindowSource const * >(rhs);
}

inline Imf_3_0::DataWindowSource * Imf_DataWindowSource_to_cpp(
    Imf_DataWindowSource * rhs)
{
        return reinterpret_cast<Imf_3_0::DataWindowSource * >(rhs);
}

inline void to_c(
    Imf_DataWindowSource const * * lhs
    , Imf_3_0::DataWindowSource const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DataWindowSource const * >(&(rhs));
}

inline void to_c(
    Imf_DataWindowSource const * * lhs
    , Imf_3_0::DataWindowSource const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DataWindowSource const * >(rhs);
}

inline void to_c(
    Imf_DataWindowSource * * lhs
    , Imf_3_0::DataWindowSource & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DataWindowSource * >(&(rhs));
}

inline void to_c(
    Imf_DataWindowSource * * lhs
    , Imf_3_0::DataWindowSource * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DataWindowSource * >(rhs);
}

inline void to_c_copy(
    Imf_DataWindowSource * lhs
    , Imf_3_0::DataWindowSource const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


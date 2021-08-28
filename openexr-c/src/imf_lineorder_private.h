#pragma once
#include <imf_lineorder.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfLineOrder.h>
#include <cstring>

inline Imf_3_0::LineOrder const & Imf_LineOrder_to_cpp_ref(
    Imf_LineOrder const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::LineOrder const * >(rhs));
}

inline Imf_3_0::LineOrder & Imf_LineOrder_to_cpp_ref(
    Imf_LineOrder * rhs)
{
        return *(reinterpret_cast<Imf_3_0::LineOrder * >(rhs));
}

inline Imf_3_0::LineOrder const * Imf_LineOrder_to_cpp(
    Imf_LineOrder const * rhs)
{
        return reinterpret_cast<Imf_3_0::LineOrder const * >(rhs);
}

inline Imf_3_0::LineOrder * Imf_LineOrder_to_cpp(
    Imf_LineOrder * rhs)
{
        return reinterpret_cast<Imf_3_0::LineOrder * >(rhs);
}

inline void to_c(
    Imf_LineOrder const * * lhs
    , Imf_3_0::LineOrder const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_LineOrder const * >(&(rhs));
}

inline void to_c(
    Imf_LineOrder const * * lhs
    , Imf_3_0::LineOrder const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_LineOrder const * >(rhs);
}

inline void to_c(
    Imf_LineOrder * * lhs
    , Imf_3_0::LineOrder & rhs)
{
        *(lhs) = reinterpret_cast<Imf_LineOrder * >(&(rhs));
}

inline void to_c(
    Imf_LineOrder * * lhs
    , Imf_3_0::LineOrder * rhs)
{
        *(lhs) = reinterpret_cast<Imf_LineOrder * >(rhs);
}

inline void to_c_copy(
    Imf_LineOrder * lhs
    , Imf_3_0::LineOrder const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


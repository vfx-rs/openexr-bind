#pragma once
#include <imf_keycode.h>


#include "openexr-errors-private.h"

#include <OpenEXR/IexBaseExc.h>
#include <OpenEXR/ImfKeyCode.h>
#include <cstring>

inline Imf_3_0::KeyCode const & to_cpp_ref(
    Imf_KeyCode_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::KeyCode const * >(rhs));
}

inline Imf_3_0::KeyCode & to_cpp_ref(
    Imf_KeyCode_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::KeyCode * >(rhs));
}

inline Imf_3_0::KeyCode const * to_cpp(
    Imf_KeyCode_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::KeyCode const * >(rhs);
}

inline Imf_3_0::KeyCode * to_cpp(
    Imf_KeyCode_t * rhs)
{
        return reinterpret_cast<Imf_3_0::KeyCode * >(rhs);
}

inline void to_c(
    Imf_KeyCode_t const * * lhs
    , Imf_3_0::KeyCode const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_KeyCode_t const * >(&(rhs));
}

inline void to_c(
    Imf_KeyCode_t const * * lhs
    , Imf_3_0::KeyCode const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_KeyCode_t const * >(rhs);
}

inline void to_c(
    Imf_KeyCode_t * * lhs
    , Imf_3_0::KeyCode & rhs)
{
        *(lhs) = reinterpret_cast<Imf_KeyCode_t * >(&(rhs));
}

inline void to_c(
    Imf_KeyCode_t * * lhs
    , Imf_3_0::KeyCode * rhs)
{
        *(lhs) = reinterpret_cast<Imf_KeyCode_t * >(rhs);
}

inline void to_c_copy(
    Imf_KeyCode_t * lhs
    , Imf_3_0::KeyCode const & rhs)
{
        Imf_3_0__KeyCode_copy(lhs, reinterpret_cast<Imf_KeyCode_t const * >(&(rhs)));
}


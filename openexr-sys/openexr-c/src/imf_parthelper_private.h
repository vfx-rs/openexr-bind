#pragma once
#include <imf_parthelper.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfPartHelper.h>
#include <cstring>

inline Imf_3_0::MultiViewChannelName const & to_cpp_ref(
    Imf_MultiViewChannelName_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::MultiViewChannelName const * >(rhs));
}

inline Imf_3_0::MultiViewChannelName & to_cpp_ref(
    Imf_MultiViewChannelName_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::MultiViewChannelName * >(rhs));
}

inline Imf_3_0::MultiViewChannelName const * to_cpp(
    Imf_MultiViewChannelName_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::MultiViewChannelName const * >(rhs);
}

inline Imf_3_0::MultiViewChannelName * to_cpp(
    Imf_MultiViewChannelName_t * rhs)
{
        return reinterpret_cast<Imf_3_0::MultiViewChannelName * >(rhs);
}

inline void to_c(
    Imf_MultiViewChannelName_t const * * lhs
    , Imf_3_0::MultiViewChannelName const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_MultiViewChannelName_t const * >(&(rhs));
}

inline void to_c(
    Imf_MultiViewChannelName_t const * * lhs
    , Imf_3_0::MultiViewChannelName const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_MultiViewChannelName_t const * >(rhs);
}

inline void to_c(
    Imf_MultiViewChannelName_t * * lhs
    , Imf_3_0::MultiViewChannelName & rhs)
{
        *(lhs) = reinterpret_cast<Imf_MultiViewChannelName_t * >(&(rhs));
}

inline void to_c(
    Imf_MultiViewChannelName_t * * lhs
    , Imf_3_0::MultiViewChannelName * rhs)
{
        *(lhs) = reinterpret_cast<Imf_MultiViewChannelName_t * >(rhs);
}

inline void to_c_copy(
    Imf_MultiViewChannelName_t * * lhs
    , Imf_3_0::MultiViewChannelName const & rhs)
{
        Imf_3_0__MultiViewChannelName_copy(lhs, reinterpret_cast<Imf_MultiViewChannelName_t const * >(&(rhs)));
}


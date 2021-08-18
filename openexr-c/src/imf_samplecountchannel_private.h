#pragma once
#include <imf_samplecountchannel.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfSampleCountChannel.h>
#include <cstring>

inline Imf_3_0::SampleCountChannel const & to_cpp_ref(
    Imf_SampleCountChannel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::SampleCountChannel const * >(rhs));
}

inline Imf_3_0::SampleCountChannel & to_cpp_ref(
    Imf_SampleCountChannel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::SampleCountChannel * >(rhs));
}

inline Imf_3_0::SampleCountChannel const * to_cpp(
    Imf_SampleCountChannel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::SampleCountChannel const * >(rhs);
}

inline Imf_3_0::SampleCountChannel * to_cpp(
    Imf_SampleCountChannel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::SampleCountChannel * >(rhs);
}

inline void to_c(
    Imf_SampleCountChannel_t const * * lhs
    , Imf_3_0::SampleCountChannel const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_SampleCountChannel_t const * >(&(rhs));
}

inline void to_c(
    Imf_SampleCountChannel_t const * * lhs
    , Imf_3_0::SampleCountChannel const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_SampleCountChannel_t const * >(rhs);
}

inline void to_c(
    Imf_SampleCountChannel_t * * lhs
    , Imf_3_0::SampleCountChannel & rhs)
{
        *(lhs) = reinterpret_cast<Imf_SampleCountChannel_t * >(&(rhs));
}

inline void to_c(
    Imf_SampleCountChannel_t * * lhs
    , Imf_3_0::SampleCountChannel * rhs)
{
        *(lhs) = reinterpret_cast<Imf_SampleCountChannel_t * >(rhs);
}

inline Imf_3_0::SampleCountChannel::Edit const & to_cpp_ref(
    Imf_SampleCountChannel_Edit_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::SampleCountChannel::Edit const * >(rhs));
}

inline Imf_3_0::SampleCountChannel::Edit & to_cpp_ref(
    Imf_SampleCountChannel_Edit_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::SampleCountChannel::Edit * >(rhs));
}

inline Imf_3_0::SampleCountChannel::Edit const * to_cpp(
    Imf_SampleCountChannel_Edit_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::SampleCountChannel::Edit const * >(rhs);
}

inline Imf_3_0::SampleCountChannel::Edit * to_cpp(
    Imf_SampleCountChannel_Edit_t * rhs)
{
        return reinterpret_cast<Imf_3_0::SampleCountChannel::Edit * >(rhs);
}

inline void to_c(
    Imf_SampleCountChannel_Edit_t const * * lhs
    , Imf_3_0::SampleCountChannel::Edit const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_SampleCountChannel_Edit_t const * >(&(rhs));
}

inline void to_c(
    Imf_SampleCountChannel_Edit_t const * * lhs
    , Imf_3_0::SampleCountChannel::Edit const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_SampleCountChannel_Edit_t const * >(rhs);
}

inline void to_c(
    Imf_SampleCountChannel_Edit_t * * lhs
    , Imf_3_0::SampleCountChannel::Edit & rhs)
{
        *(lhs) = reinterpret_cast<Imf_SampleCountChannel_Edit_t * >(&(rhs));
}

inline void to_c(
    Imf_SampleCountChannel_Edit_t * * lhs
    , Imf_3_0::SampleCountChannel::Edit * rhs)
{
        *(lhs) = reinterpret_cast<Imf_SampleCountChannel_Edit_t * >(rhs);
}


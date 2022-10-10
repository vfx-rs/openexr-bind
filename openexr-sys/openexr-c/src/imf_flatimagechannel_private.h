#pragma once
#include <imf_flatimagechannel.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfFlatImageChannel.h>
#include <cstring>

inline Imf_3_0::FlatImageChannel const & to_cpp_ref(
    Imf_FlatImageChannel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FlatImageChannel const * >(rhs));
}

inline Imf_3_0::FlatImageChannel & to_cpp_ref(
    Imf_FlatImageChannel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FlatImageChannel * >(rhs));
}

inline Imf_3_0::FlatImageChannel const * to_cpp(
    Imf_FlatImageChannel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::FlatImageChannel const * >(rhs);
}

inline Imf_3_0::FlatImageChannel * to_cpp(
    Imf_FlatImageChannel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::FlatImageChannel * >(rhs);
}

inline void to_c(
    Imf_FlatImageChannel_t const * * lhs
    , Imf_3_0::FlatImageChannel const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageChannel_t const * >(&(rhs));
}

inline void to_c(
    Imf_FlatImageChannel_t const * * lhs
    , Imf_3_0::FlatImageChannel const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageChannel_t const * >(rhs);
}

inline void to_c(
    Imf_FlatImageChannel_t * * lhs
    , Imf_3_0::FlatImageChannel & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageChannel_t * >(&(rhs));
}

inline void to_c(
    Imf_FlatImageChannel_t * * lhs
    , Imf_3_0::FlatImageChannel * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatImageChannel_t * >(rhs);
}

inline Imf_3_0::TypedFlatImageChannel<half> const & to_cpp_ref(
    Imf_FlatHalfChannel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedFlatImageChannel<half> const * >(rhs));
}

inline Imf_3_0::TypedFlatImageChannel<half> & to_cpp_ref(
    Imf_FlatHalfChannel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedFlatImageChannel<half> * >(rhs));
}

inline Imf_3_0::TypedFlatImageChannel<half> const * to_cpp(
    Imf_FlatHalfChannel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedFlatImageChannel<half> const * >(rhs);
}

inline Imf_3_0::TypedFlatImageChannel<half> * to_cpp(
    Imf_FlatHalfChannel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedFlatImageChannel<half> * >(rhs);
}

inline void to_c(
    Imf_FlatHalfChannel_t const * * lhs
    , Imf_3_0::TypedFlatImageChannel<half> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatHalfChannel_t const * >(&(rhs));
}

inline void to_c(
    Imf_FlatHalfChannel_t const * * lhs
    , Imf_3_0::TypedFlatImageChannel<half> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatHalfChannel_t const * >(rhs);
}

inline void to_c(
    Imf_FlatHalfChannel_t * * lhs
    , Imf_3_0::TypedFlatImageChannel<half> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatHalfChannel_t * >(&(rhs));
}

inline void to_c(
    Imf_FlatHalfChannel_t * * lhs
    , Imf_3_0::TypedFlatImageChannel<half> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatHalfChannel_t * >(rhs);
}

inline Imf_3_0::TypedFlatImageChannel<float> const & to_cpp_ref(
    Imf_FlatFloatChannel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedFlatImageChannel<float> const * >(rhs));
}

inline Imf_3_0::TypedFlatImageChannel<float> & to_cpp_ref(
    Imf_FlatFloatChannel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedFlatImageChannel<float> * >(rhs));
}

inline Imf_3_0::TypedFlatImageChannel<float> const * to_cpp(
    Imf_FlatFloatChannel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedFlatImageChannel<float> const * >(rhs);
}

inline Imf_3_0::TypedFlatImageChannel<float> * to_cpp(
    Imf_FlatFloatChannel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedFlatImageChannel<float> * >(rhs);
}

inline void to_c(
    Imf_FlatFloatChannel_t const * * lhs
    , Imf_3_0::TypedFlatImageChannel<float> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatFloatChannel_t const * >(&(rhs));
}

inline void to_c(
    Imf_FlatFloatChannel_t const * * lhs
    , Imf_3_0::TypedFlatImageChannel<float> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatFloatChannel_t const * >(rhs);
}

inline void to_c(
    Imf_FlatFloatChannel_t * * lhs
    , Imf_3_0::TypedFlatImageChannel<float> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatFloatChannel_t * >(&(rhs));
}

inline void to_c(
    Imf_FlatFloatChannel_t * * lhs
    , Imf_3_0::TypedFlatImageChannel<float> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatFloatChannel_t * >(rhs);
}

inline Imf_3_0::TypedFlatImageChannel<unsigned int> const & to_cpp_ref(
    Imf_FlatUIntChannel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedFlatImageChannel<unsigned int> const * >(rhs));
}

inline Imf_3_0::TypedFlatImageChannel<unsigned int> & to_cpp_ref(
    Imf_FlatUIntChannel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedFlatImageChannel<unsigned int> * >(rhs));
}

inline Imf_3_0::TypedFlatImageChannel<unsigned int> const * to_cpp(
    Imf_FlatUIntChannel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedFlatImageChannel<unsigned int> const * >(rhs);
}

inline Imf_3_0::TypedFlatImageChannel<unsigned int> * to_cpp(
    Imf_FlatUIntChannel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedFlatImageChannel<unsigned int> * >(rhs);
}

inline void to_c(
    Imf_FlatUIntChannel_t const * * lhs
    , Imf_3_0::TypedFlatImageChannel<unsigned int> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatUIntChannel_t const * >(&(rhs));
}

inline void to_c(
    Imf_FlatUIntChannel_t const * * lhs
    , Imf_3_0::TypedFlatImageChannel<unsigned int> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatUIntChannel_t const * >(rhs);
}

inline void to_c(
    Imf_FlatUIntChannel_t * * lhs
    , Imf_3_0::TypedFlatImageChannel<unsigned int> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatUIntChannel_t * >(&(rhs));
}

inline void to_c(
    Imf_FlatUIntChannel_t * * lhs
    , Imf_3_0::TypedFlatImageChannel<unsigned int> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FlatUIntChannel_t * >(rhs);
}


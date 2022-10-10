#pragma once
#include <imf_deepimagechannel.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepImageChannel.h>
#include <cstring>

inline Imf_3_0::DeepImageChannel const & to_cpp_ref(
    Imf_DeepImageChannel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepImageChannel const * >(rhs));
}

inline Imf_3_0::DeepImageChannel & to_cpp_ref(
    Imf_DeepImageChannel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepImageChannel * >(rhs));
}

inline Imf_3_0::DeepImageChannel const * to_cpp(
    Imf_DeepImageChannel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepImageChannel const * >(rhs);
}

inline Imf_3_0::DeepImageChannel * to_cpp(
    Imf_DeepImageChannel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepImageChannel * >(rhs);
}

inline void to_c(
    Imf_DeepImageChannel_t const * * lhs
    , Imf_3_0::DeepImageChannel const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageChannel_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepImageChannel_t const * * lhs
    , Imf_3_0::DeepImageChannel const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageChannel_t const * >(rhs);
}

inline void to_c(
    Imf_DeepImageChannel_t * * lhs
    , Imf_3_0::DeepImageChannel & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageChannel_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepImageChannel_t * * lhs
    , Imf_3_0::DeepImageChannel * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageChannel_t * >(rhs);
}

inline Imf_3_0::TypedDeepImageChannel<half> const & to_cpp_ref(
    Imf_DeepHalfChannel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedDeepImageChannel<half> const * >(rhs));
}

inline Imf_3_0::TypedDeepImageChannel<half> & to_cpp_ref(
    Imf_DeepHalfChannel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedDeepImageChannel<half> * >(rhs));
}

inline Imf_3_0::TypedDeepImageChannel<half> const * to_cpp(
    Imf_DeepHalfChannel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedDeepImageChannel<half> const * >(rhs);
}

inline Imf_3_0::TypedDeepImageChannel<half> * to_cpp(
    Imf_DeepHalfChannel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedDeepImageChannel<half> * >(rhs);
}

inline void to_c(
    Imf_DeepHalfChannel_t const * * lhs
    , Imf_3_0::TypedDeepImageChannel<half> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepHalfChannel_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepHalfChannel_t const * * lhs
    , Imf_3_0::TypedDeepImageChannel<half> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepHalfChannel_t const * >(rhs);
}

inline void to_c(
    Imf_DeepHalfChannel_t * * lhs
    , Imf_3_0::TypedDeepImageChannel<half> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepHalfChannel_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepHalfChannel_t * * lhs
    , Imf_3_0::TypedDeepImageChannel<half> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepHalfChannel_t * >(rhs);
}

inline Imf_3_0::TypedDeepImageChannel<float> const & to_cpp_ref(
    Imf_DeepFloatChannel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedDeepImageChannel<float> const * >(rhs));
}

inline Imf_3_0::TypedDeepImageChannel<float> & to_cpp_ref(
    Imf_DeepFloatChannel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedDeepImageChannel<float> * >(rhs));
}

inline Imf_3_0::TypedDeepImageChannel<float> const * to_cpp(
    Imf_DeepFloatChannel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedDeepImageChannel<float> const * >(rhs);
}

inline Imf_3_0::TypedDeepImageChannel<float> * to_cpp(
    Imf_DeepFloatChannel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedDeepImageChannel<float> * >(rhs);
}

inline void to_c(
    Imf_DeepFloatChannel_t const * * lhs
    , Imf_3_0::TypedDeepImageChannel<float> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFloatChannel_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepFloatChannel_t const * * lhs
    , Imf_3_0::TypedDeepImageChannel<float> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFloatChannel_t const * >(rhs);
}

inline void to_c(
    Imf_DeepFloatChannel_t * * lhs
    , Imf_3_0::TypedDeepImageChannel<float> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFloatChannel_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepFloatChannel_t * * lhs
    , Imf_3_0::TypedDeepImageChannel<float> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFloatChannel_t * >(rhs);
}

inline Imf_3_0::TypedDeepImageChannel<unsigned int> const & to_cpp_ref(
    Imf_DeepUIntChannel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedDeepImageChannel<unsigned int> const * >(rhs));
}

inline Imf_3_0::TypedDeepImageChannel<unsigned int> & to_cpp_ref(
    Imf_DeepUIntChannel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::TypedDeepImageChannel<unsigned int> * >(rhs));
}

inline Imf_3_0::TypedDeepImageChannel<unsigned int> const * to_cpp(
    Imf_DeepUIntChannel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedDeepImageChannel<unsigned int> const * >(rhs);
}

inline Imf_3_0::TypedDeepImageChannel<unsigned int> * to_cpp(
    Imf_DeepUIntChannel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::TypedDeepImageChannel<unsigned int> * >(rhs);
}

inline void to_c(
    Imf_DeepUIntChannel_t const * * lhs
    , Imf_3_0::TypedDeepImageChannel<unsigned int> const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepUIntChannel_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepUIntChannel_t const * * lhs
    , Imf_3_0::TypedDeepImageChannel<unsigned int> const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepUIntChannel_t const * >(rhs);
}

inline void to_c(
    Imf_DeepUIntChannel_t * * lhs
    , Imf_3_0::TypedDeepImageChannel<unsigned int> & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepUIntChannel_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepUIntChannel_t * * lhs
    , Imf_3_0::TypedDeepImageChannel<unsigned int> * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepUIntChannel_t * >(rhs);
}


#pragma once
#include <imf_deepimagestate.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepImageState.h>
#include <cstring>

inline Imf_3_0::DeepImageState const & Imf_DeepImageState_to_cpp_ref(
    Imf_DeepImageState const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepImageState const * >(rhs));
}

inline Imf_3_0::DeepImageState & Imf_DeepImageState_to_cpp_ref(
    Imf_DeepImageState * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepImageState * >(rhs));
}

inline Imf_3_0::DeepImageState const * Imf_DeepImageState_to_cpp(
    Imf_DeepImageState const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepImageState const * >(rhs);
}

inline Imf_3_0::DeepImageState * Imf_DeepImageState_to_cpp(
    Imf_DeepImageState * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepImageState * >(rhs);
}

inline void to_c(
    Imf_DeepImageState const * * lhs
    , Imf_3_0::DeepImageState const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageState const * >(&(rhs));
}

inline void to_c(
    Imf_DeepImageState const * * lhs
    , Imf_3_0::DeepImageState const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageState const * >(rhs);
}

inline void to_c(
    Imf_DeepImageState * * lhs
    , Imf_3_0::DeepImageState & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageState * >(&(rhs));
}

inline void to_c(
    Imf_DeepImageState * * lhs
    , Imf_3_0::DeepImageState * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepImageState * >(rhs);
}

inline void to_c_copy(
    Imf_DeepImageState * lhs
    , Imf_3_0::DeepImageState const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}


#pragma once
#include <imf_deepframebuffer.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfDeepFrameBuffer.h>
#include <cstring>

inline Imf_3_0::DeepSlice const & to_cpp_ref(
    Imf_DeepSlice_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepSlice const * >(rhs));
}

inline Imf_3_0::DeepSlice & to_cpp_ref(
    Imf_DeepSlice_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepSlice * >(rhs));
}

inline Imf_3_0::DeepSlice const * to_cpp(
    Imf_DeepSlice_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepSlice const * >(rhs);
}

inline Imf_3_0::DeepSlice * to_cpp(
    Imf_DeepSlice_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepSlice * >(rhs);
}

inline void to_c(
    Imf_DeepSlice_t const * * lhs
    , Imf_3_0::DeepSlice const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepSlice_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepSlice_t const * * lhs
    , Imf_3_0::DeepSlice const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepSlice_t const * >(rhs);
}

inline void to_c(
    Imf_DeepSlice_t * * lhs
    , Imf_3_0::DeepSlice & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepSlice_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepSlice_t * * lhs
    , Imf_3_0::DeepSlice * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepSlice_t * >(rhs);
}

inline void to_c_copy(
    Imf_DeepSlice_t * lhs
    , Imf_3_0::DeepSlice const & rhs)
{
        Imf_3_0__DeepSlice_copy(lhs, reinterpret_cast<Imf_DeepSlice_t const * >(&(rhs)));
}

inline Imf_3_0::DeepFrameBuffer const & to_cpp_ref(
    Imf_DeepFrameBuffer_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepFrameBuffer const * >(rhs));
}

inline Imf_3_0::DeepFrameBuffer & to_cpp_ref(
    Imf_DeepFrameBuffer_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepFrameBuffer * >(rhs));
}

inline Imf_3_0::DeepFrameBuffer const * to_cpp(
    Imf_DeepFrameBuffer_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepFrameBuffer const * >(rhs);
}

inline Imf_3_0::DeepFrameBuffer * to_cpp(
    Imf_DeepFrameBuffer_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepFrameBuffer * >(rhs);
}

inline void to_c(
    Imf_DeepFrameBuffer_t const * * lhs
    , Imf_3_0::DeepFrameBuffer const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFrameBuffer_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepFrameBuffer_t const * * lhs
    , Imf_3_0::DeepFrameBuffer const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFrameBuffer_t const * >(rhs);
}

inline void to_c(
    Imf_DeepFrameBuffer_t * * lhs
    , Imf_3_0::DeepFrameBuffer & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFrameBuffer_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepFrameBuffer_t * * lhs
    , Imf_3_0::DeepFrameBuffer * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFrameBuffer_t * >(rhs);
}

inline void to_c_copy(
    Imf_DeepFrameBuffer_t * * lhs
    , Imf_3_0::DeepFrameBuffer const & rhs)
{
        Imf_3_0__DeepFrameBuffer_copy(lhs, reinterpret_cast<Imf_DeepFrameBuffer_t const * >(&(rhs)));
}

inline Imf_3_0::DeepFrameBuffer::Iterator const & to_cpp_ref(
    Imf_DeepFrameBuffer_Iterator_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepFrameBuffer::Iterator const * >(rhs));
}

inline Imf_3_0::DeepFrameBuffer::Iterator & to_cpp_ref(
    Imf_DeepFrameBuffer_Iterator_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepFrameBuffer::Iterator * >(rhs));
}

inline Imf_3_0::DeepFrameBuffer::Iterator const * to_cpp(
    Imf_DeepFrameBuffer_Iterator_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepFrameBuffer::Iterator const * >(rhs);
}

inline Imf_3_0::DeepFrameBuffer::Iterator * to_cpp(
    Imf_DeepFrameBuffer_Iterator_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepFrameBuffer::Iterator * >(rhs);
}

inline void to_c(
    Imf_DeepFrameBuffer_Iterator_t const * * lhs
    , Imf_3_0::DeepFrameBuffer::Iterator const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFrameBuffer_Iterator_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepFrameBuffer_Iterator_t const * * lhs
    , Imf_3_0::DeepFrameBuffer::Iterator const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFrameBuffer_Iterator_t const * >(rhs);
}

inline void to_c(
    Imf_DeepFrameBuffer_Iterator_t * * lhs
    , Imf_3_0::DeepFrameBuffer::Iterator & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFrameBuffer_Iterator_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepFrameBuffer_Iterator_t * * lhs
    , Imf_3_0::DeepFrameBuffer::Iterator * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFrameBuffer_Iterator_t * >(rhs);
}

inline void to_c_copy(
    Imf_DeepFrameBuffer_Iterator_t * lhs
    , Imf_3_0::DeepFrameBuffer::Iterator const & rhs)
{
        Imf_3_0__DeepFrameBuffer__Iterator_copy(lhs, reinterpret_cast<Imf_DeepFrameBuffer_Iterator_t const * >(&(rhs)));
}

inline Imf_3_0::DeepFrameBuffer::ConstIterator const & to_cpp_ref(
    Imf_DeepFrameBuffer_ConstIterator_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepFrameBuffer::ConstIterator const * >(rhs));
}

inline Imf_3_0::DeepFrameBuffer::ConstIterator & to_cpp_ref(
    Imf_DeepFrameBuffer_ConstIterator_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::DeepFrameBuffer::ConstIterator * >(rhs));
}

inline Imf_3_0::DeepFrameBuffer::ConstIterator const * to_cpp(
    Imf_DeepFrameBuffer_ConstIterator_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepFrameBuffer::ConstIterator const * >(rhs);
}

inline Imf_3_0::DeepFrameBuffer::ConstIterator * to_cpp(
    Imf_DeepFrameBuffer_ConstIterator_t * rhs)
{
        return reinterpret_cast<Imf_3_0::DeepFrameBuffer::ConstIterator * >(rhs);
}

inline void to_c(
    Imf_DeepFrameBuffer_ConstIterator_t const * * lhs
    , Imf_3_0::DeepFrameBuffer::ConstIterator const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFrameBuffer_ConstIterator_t const * >(&(rhs));
}

inline void to_c(
    Imf_DeepFrameBuffer_ConstIterator_t const * * lhs
    , Imf_3_0::DeepFrameBuffer::ConstIterator const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFrameBuffer_ConstIterator_t const * >(rhs);
}

inline void to_c(
    Imf_DeepFrameBuffer_ConstIterator_t * * lhs
    , Imf_3_0::DeepFrameBuffer::ConstIterator & rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFrameBuffer_ConstIterator_t * >(&(rhs));
}

inline void to_c(
    Imf_DeepFrameBuffer_ConstIterator_t * * lhs
    , Imf_3_0::DeepFrameBuffer::ConstIterator * rhs)
{
        *(lhs) = reinterpret_cast<Imf_DeepFrameBuffer_ConstIterator_t * >(rhs);
}

inline void to_c_copy(
    Imf_DeepFrameBuffer_ConstIterator_t * lhs
    , Imf_3_0::DeepFrameBuffer::ConstIterator const & rhs)
{
        Imf_3_0__DeepFrameBuffer__ConstIterator_copy(lhs, reinterpret_cast<Imf_DeepFrameBuffer_ConstIterator_t const * >(&(rhs)));
}


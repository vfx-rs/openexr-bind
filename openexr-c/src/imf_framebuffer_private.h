#pragma once
#include <imf_framebuffer.h>


#include "openexr-errors-private.h"

#include <OpenEXR/IexBaseExc.h>
#include <OpenEXR/ImfFrameBuffer.h>
#include <cstring>

inline Imf_3_0::Slice const & to_cpp_ref(
    Imf_Slice_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Slice const * >(rhs));
}

inline Imf_3_0::Slice & to_cpp_ref(
    Imf_Slice_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Slice * >(rhs));
}

inline Imf_3_0::Slice const * to_cpp(
    Imf_Slice_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Slice const * >(rhs);
}

inline Imf_3_0::Slice * to_cpp(
    Imf_Slice_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Slice * >(rhs);
}

inline void to_c(
    Imf_Slice_t const * * lhs
    , Imf_3_0::Slice const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Slice_t const * >(&(rhs));
}

inline void to_c(
    Imf_Slice_t const * * lhs
    , Imf_3_0::Slice const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Slice_t const * >(rhs);
}

inline void to_c(
    Imf_Slice_t * * lhs
    , Imf_3_0::Slice & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Slice_t * >(&(rhs));
}

inline void to_c(
    Imf_Slice_t * * lhs
    , Imf_3_0::Slice * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Slice_t * >(rhs);
}

inline void to_c_copy(
    Imf_Slice_t * lhs
    , Imf_3_0::Slice const & rhs)
{
        Imf_3_0__Slice_copy(lhs, reinterpret_cast<Imf_Slice_t const * >(&(rhs)));
}

inline Imf_3_0::FrameBuffer const & to_cpp_ref(
    Imf_FrameBuffer_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FrameBuffer const * >(rhs));
}

inline Imf_3_0::FrameBuffer & to_cpp_ref(
    Imf_FrameBuffer_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FrameBuffer * >(rhs));
}

inline Imf_3_0::FrameBuffer const * to_cpp(
    Imf_FrameBuffer_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::FrameBuffer const * >(rhs);
}

inline Imf_3_0::FrameBuffer * to_cpp(
    Imf_FrameBuffer_t * rhs)
{
        return reinterpret_cast<Imf_3_0::FrameBuffer * >(rhs);
}

inline void to_c(
    Imf_FrameBuffer_t const * * lhs
    , Imf_3_0::FrameBuffer const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FrameBuffer_t const * >(&(rhs));
}

inline void to_c(
    Imf_FrameBuffer_t const * * lhs
    , Imf_3_0::FrameBuffer const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FrameBuffer_t const * >(rhs);
}

inline void to_c(
    Imf_FrameBuffer_t * * lhs
    , Imf_3_0::FrameBuffer & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FrameBuffer_t * >(&(rhs));
}

inline void to_c(
    Imf_FrameBuffer_t * * lhs
    , Imf_3_0::FrameBuffer * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FrameBuffer_t * >(rhs);
}

inline void to_c_copy(
    Imf_FrameBuffer_t * * lhs
    , Imf_3_0::FrameBuffer const & rhs)
{
        Imf_3_0__FrameBuffer_copy(lhs, reinterpret_cast<Imf_FrameBuffer_t const * >(&(rhs)));
}

inline Imf_3_0::FrameBuffer::Iterator const & to_cpp_ref(
    Imf_FrameBuffer_Iterator_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FrameBuffer::Iterator const * >(rhs));
}

inline Imf_3_0::FrameBuffer::Iterator & to_cpp_ref(
    Imf_FrameBuffer_Iterator_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FrameBuffer::Iterator * >(rhs));
}

inline Imf_3_0::FrameBuffer::Iterator const * to_cpp(
    Imf_FrameBuffer_Iterator_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::FrameBuffer::Iterator const * >(rhs);
}

inline Imf_3_0::FrameBuffer::Iterator * to_cpp(
    Imf_FrameBuffer_Iterator_t * rhs)
{
        return reinterpret_cast<Imf_3_0::FrameBuffer::Iterator * >(rhs);
}

inline void to_c(
    Imf_FrameBuffer_Iterator_t const * * lhs
    , Imf_3_0::FrameBuffer::Iterator const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FrameBuffer_Iterator_t const * >(&(rhs));
}

inline void to_c(
    Imf_FrameBuffer_Iterator_t const * * lhs
    , Imf_3_0::FrameBuffer::Iterator const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FrameBuffer_Iterator_t const * >(rhs);
}

inline void to_c(
    Imf_FrameBuffer_Iterator_t * * lhs
    , Imf_3_0::FrameBuffer::Iterator & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FrameBuffer_Iterator_t * >(&(rhs));
}

inline void to_c(
    Imf_FrameBuffer_Iterator_t * * lhs
    , Imf_3_0::FrameBuffer::Iterator * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FrameBuffer_Iterator_t * >(rhs);
}

inline void to_c_copy(
    Imf_FrameBuffer_Iterator_t * lhs
    , Imf_3_0::FrameBuffer::Iterator const & rhs)
{
        Imf_3_0__FrameBuffer__Iterator_copy(lhs, reinterpret_cast<Imf_FrameBuffer_Iterator_t const * >(&(rhs)));
}

inline Imf_3_0::FrameBuffer::ConstIterator const & to_cpp_ref(
    Imf_FrameBuffer_ConstIterator_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FrameBuffer::ConstIterator const * >(rhs));
}

inline Imf_3_0::FrameBuffer::ConstIterator & to_cpp_ref(
    Imf_FrameBuffer_ConstIterator_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::FrameBuffer::ConstIterator * >(rhs));
}

inline Imf_3_0::FrameBuffer::ConstIterator const * to_cpp(
    Imf_FrameBuffer_ConstIterator_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::FrameBuffer::ConstIterator const * >(rhs);
}

inline Imf_3_0::FrameBuffer::ConstIterator * to_cpp(
    Imf_FrameBuffer_ConstIterator_t * rhs)
{
        return reinterpret_cast<Imf_3_0::FrameBuffer::ConstIterator * >(rhs);
}

inline void to_c(
    Imf_FrameBuffer_ConstIterator_t const * * lhs
    , Imf_3_0::FrameBuffer::ConstIterator const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FrameBuffer_ConstIterator_t const * >(&(rhs));
}

inline void to_c(
    Imf_FrameBuffer_ConstIterator_t const * * lhs
    , Imf_3_0::FrameBuffer::ConstIterator const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FrameBuffer_ConstIterator_t const * >(rhs);
}

inline void to_c(
    Imf_FrameBuffer_ConstIterator_t * * lhs
    , Imf_3_0::FrameBuffer::ConstIterator & rhs)
{
        *(lhs) = reinterpret_cast<Imf_FrameBuffer_ConstIterator_t * >(&(rhs));
}

inline void to_c(
    Imf_FrameBuffer_ConstIterator_t * * lhs
    , Imf_3_0::FrameBuffer::ConstIterator * rhs)
{
        *(lhs) = reinterpret_cast<Imf_FrameBuffer_ConstIterator_t * >(rhs);
}

inline void to_c_copy(
    Imf_FrameBuffer_ConstIterator_t * lhs
    , Imf_3_0::FrameBuffer::ConstIterator const & rhs)
{
        Imf_3_0__FrameBuffer__ConstIterator_copy(lhs, reinterpret_cast<Imf_FrameBuffer_ConstIterator_t const * >(&(rhs)));
}


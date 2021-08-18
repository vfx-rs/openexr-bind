#pragma once
#include <imf_channellist.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfChannelList.h>
#include <cstring>

inline Imf_3_0::Channel const & to_cpp_ref(
    Imf_Channel_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Channel const * >(rhs));
}

inline Imf_3_0::Channel & to_cpp_ref(
    Imf_Channel_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::Channel * >(rhs));
}

inline Imf_3_0::Channel const * to_cpp(
    Imf_Channel_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::Channel const * >(rhs);
}

inline Imf_3_0::Channel * to_cpp(
    Imf_Channel_t * rhs)
{
        return reinterpret_cast<Imf_3_0::Channel * >(rhs);
}

inline void to_c(
    Imf_Channel_t const * * lhs
    , Imf_3_0::Channel const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Channel_t const * >(&(rhs));
}

inline void to_c(
    Imf_Channel_t const * * lhs
    , Imf_3_0::Channel const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Channel_t const * >(rhs);
}

inline void to_c(
    Imf_Channel_t * * lhs
    , Imf_3_0::Channel & rhs)
{
        *(lhs) = reinterpret_cast<Imf_Channel_t * >(&(rhs));
}

inline void to_c(
    Imf_Channel_t * * lhs
    , Imf_3_0::Channel * rhs)
{
        *(lhs) = reinterpret_cast<Imf_Channel_t * >(rhs);
}

inline void to_c_copy(
    Imf_Channel_t * lhs
    , Imf_3_0::Channel const & rhs)
{
        Imf_3_0__Channel_copy(lhs, reinterpret_cast<Imf_Channel_t const * >(&(rhs)));
}

inline Imf_3_0::ChannelList const & to_cpp_ref(
    Imf_ChannelList_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::ChannelList const * >(rhs));
}

inline Imf_3_0::ChannelList & to_cpp_ref(
    Imf_ChannelList_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::ChannelList * >(rhs));
}

inline Imf_3_0::ChannelList const * to_cpp(
    Imf_ChannelList_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::ChannelList const * >(rhs);
}

inline Imf_3_0::ChannelList * to_cpp(
    Imf_ChannelList_t * rhs)
{
        return reinterpret_cast<Imf_3_0::ChannelList * >(rhs);
}

inline void to_c(
    Imf_ChannelList_t const * * lhs
    , Imf_3_0::ChannelList const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelList_t const * >(&(rhs));
}

inline void to_c(
    Imf_ChannelList_t const * * lhs
    , Imf_3_0::ChannelList const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelList_t const * >(rhs);
}

inline void to_c(
    Imf_ChannelList_t * * lhs
    , Imf_3_0::ChannelList & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelList_t * >(&(rhs));
}

inline void to_c(
    Imf_ChannelList_t * * lhs
    , Imf_3_0::ChannelList * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelList_t * >(rhs);
}

inline void to_c_copy(
    Imf_ChannelList_t * * lhs
    , Imf_3_0::ChannelList const & rhs)
{
        Imf_3_0__ChannelList_copy(lhs, reinterpret_cast<Imf_ChannelList_t const * >(&(rhs)));
}

inline Imf_3_0::ChannelList::Iterator const & to_cpp_ref(
    Imf_ChannelList_Iterator_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::ChannelList::Iterator const * >(rhs));
}

inline Imf_3_0::ChannelList::Iterator & to_cpp_ref(
    Imf_ChannelList_Iterator_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::ChannelList::Iterator * >(rhs));
}

inline Imf_3_0::ChannelList::Iterator const * to_cpp(
    Imf_ChannelList_Iterator_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::ChannelList::Iterator const * >(rhs);
}

inline Imf_3_0::ChannelList::Iterator * to_cpp(
    Imf_ChannelList_Iterator_t * rhs)
{
        return reinterpret_cast<Imf_3_0::ChannelList::Iterator * >(rhs);
}

inline void to_c(
    Imf_ChannelList_Iterator_t const * * lhs
    , Imf_3_0::ChannelList::Iterator const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelList_Iterator_t const * >(&(rhs));
}

inline void to_c(
    Imf_ChannelList_Iterator_t const * * lhs
    , Imf_3_0::ChannelList::Iterator const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelList_Iterator_t const * >(rhs);
}

inline void to_c(
    Imf_ChannelList_Iterator_t * * lhs
    , Imf_3_0::ChannelList::Iterator & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelList_Iterator_t * >(&(rhs));
}

inline void to_c(
    Imf_ChannelList_Iterator_t * * lhs
    , Imf_3_0::ChannelList::Iterator * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelList_Iterator_t * >(rhs);
}

inline void to_c_copy(
    Imf_ChannelList_Iterator_t * lhs
    , Imf_3_0::ChannelList::Iterator const & rhs)
{
        Imf_3_0__ChannelList__Iterator_copy(lhs, reinterpret_cast<Imf_ChannelList_Iterator_t const * >(&(rhs)));
}

inline Imf_3_0::ChannelList::ConstIterator const & to_cpp_ref(
    Imf_ChannelList_ConstIterator_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::ChannelList::ConstIterator const * >(rhs));
}

inline Imf_3_0::ChannelList::ConstIterator & to_cpp_ref(
    Imf_ChannelList_ConstIterator_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::ChannelList::ConstIterator * >(rhs));
}

inline Imf_3_0::ChannelList::ConstIterator const * to_cpp(
    Imf_ChannelList_ConstIterator_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::ChannelList::ConstIterator const * >(rhs);
}

inline Imf_3_0::ChannelList::ConstIterator * to_cpp(
    Imf_ChannelList_ConstIterator_t * rhs)
{
        return reinterpret_cast<Imf_3_0::ChannelList::ConstIterator * >(rhs);
}

inline void to_c(
    Imf_ChannelList_ConstIterator_t const * * lhs
    , Imf_3_0::ChannelList::ConstIterator const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelList_ConstIterator_t const * >(&(rhs));
}

inline void to_c(
    Imf_ChannelList_ConstIterator_t const * * lhs
    , Imf_3_0::ChannelList::ConstIterator const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelList_ConstIterator_t const * >(rhs);
}

inline void to_c(
    Imf_ChannelList_ConstIterator_t * * lhs
    , Imf_3_0::ChannelList::ConstIterator & rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelList_ConstIterator_t * >(&(rhs));
}

inline void to_c(
    Imf_ChannelList_ConstIterator_t * * lhs
    , Imf_3_0::ChannelList::ConstIterator * rhs)
{
        *(lhs) = reinterpret_cast<Imf_ChannelList_ConstIterator_t * >(rhs);
}

inline void to_c_copy(
    Imf_ChannelList_ConstIterator_t * lhs
    , Imf_3_0::ChannelList::ConstIterator const & rhs)
{
        Imf_3_0__ChannelList__ConstIterator_copy(lhs, reinterpret_cast<Imf_ChannelList_ConstIterator_t const * >(&(rhs)));
}


#include "imf_channellist_private.h"

#include "imf_pixeltype_private.h"
#include "std_set_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__Channel_ctor(
    Imf_Channel_t * this_
    , Imf_PixelType type
    , int xSampling
    , int ySampling
    , _Bool pLinear)
{
    try {
        new (this_) Imf_3_0::Channel(Imf_PixelType_to_cpp_ref(&(type)), xSampling, ySampling, pLinear);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Channel__eq(
    Imf_Channel_t const * this_
    , _Bool * return_
    , Imf_Channel_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Channel_dtor(
    Imf_Channel_t * this_)
{
    try {
        (to_cpp(this_)) -> Imf_3_0::Channel::~Channel();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Channel_copy(
    Imf_Channel_t * this_
    , Imf_Channel_t const * rhs)
{
    try {
        new (this_) Imf_3_0::Channel(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Channel_move(
    Imf_Channel_t * this_
    , Imf_Channel_t * rhs)
{
    try {
        new (this_) Imf_3_0::Channel(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_insert(
    Imf_ChannelList_t * this_
    , char const * name
    , Imf_Channel_t const * channel)
{
    try {
        (to_cpp(this_)) -> insert(name, to_cpp_ref(channel));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_findChannel(
    Imf_ChannelList_t * this_
    , Imf_Channel_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findChannel(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_findChannel_const(
    Imf_ChannelList_t const * this_
    , Imf_Channel_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findChannel(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_begin(
    Imf_ChannelList_t * this_
    , Imf_ChannelList_Iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_begin_const(
    Imf_ChannelList_t const * this_
    , Imf_ChannelList_ConstIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_end(
    Imf_ChannelList_t * this_
    , Imf_ChannelList_Iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_end_const(
    Imf_ChannelList_t const * this_
    , Imf_ChannelList_ConstIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_find(
    Imf_ChannelList_t * this_
    , Imf_ChannelList_Iterator_t * return_
    , char const * name)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> find(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_find_const(
    Imf_ChannelList_t const * this_
    , Imf_ChannelList_ConstIterator_t * return_
    , char const * name)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> find(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_layers(
    Imf_ChannelList_t const * this_
    , std_set_string_t * layerNames)
{
    try {
        (to_cpp(this_)) -> layers(to_cpp_ref(layerNames));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_channelsInLayer(
    Imf_ChannelList_t * this_
    , std_string_t const * layerName
    , Imf_ChannelList_Iterator_t * first
    , Imf_ChannelList_Iterator_t * last)
{
    try {
        (to_cpp(this_)) -> channelsInLayer(to_cpp_ref(layerName), to_cpp_ref(first), to_cpp_ref(last));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_channelsInLayer_const(
    Imf_ChannelList_t const * this_
    , std_string_t const * layerName
    , Imf_ChannelList_ConstIterator_t * first
    , Imf_ChannelList_ConstIterator_t * last)
{
    try {
        (to_cpp(this_)) -> channelsInLayer(to_cpp_ref(layerName), to_cpp_ref(first), to_cpp_ref(last));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_channelsWithPrefix(
    Imf_ChannelList_t * this_
    , char const * prefix
    , Imf_ChannelList_Iterator_t * first
    , Imf_ChannelList_Iterator_t * last)
{
    try {
        (to_cpp(this_)) -> channelsWithPrefix(prefix, to_cpp_ref(first), to_cpp_ref(last));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_channelsWithPrefix_const(
    Imf_ChannelList_t const * this_
    , char const * prefix
    , Imf_ChannelList_ConstIterator_t * first
    , Imf_ChannelList_ConstIterator_t * last)
{
    try {
        (to_cpp(this_)) -> channelsWithPrefix(prefix, to_cpp_ref(first), to_cpp_ref(last));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__eq(
    Imf_ChannelList_t const * this_
    , _Bool * return_
    , Imf_ChannelList_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_copy(
    Imf_ChannelList_t * * this_
    , Imf_ChannelList_t const * rhs)
{
    try {
        to_c(this_, new Imf_3_0::ChannelList(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_dtor(
    Imf_ChannelList_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList_ctor(
    Imf_ChannelList_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::ChannelList());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__Iterator_sizeof()
{
        return sizeof(Imf_3_0::ChannelList::Iterator);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__Iterator_alignof()
{
        return alignof(Imf_3_0::ChannelList::Iterator);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__Iterator_ctor(
    Imf_ChannelList_Iterator_t * this_)
{
    try {
        new (this_) Imf_3_0::ChannelList::Iterator();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__Iterator__op_inc(
    Imf_ChannelList_Iterator_t * this_
    , Imf_ChannelList_Iterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__Iterator_name(
    Imf_ChannelList_Iterator_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> name();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__Iterator_channel(
    Imf_ChannelList_Iterator_t const * this_
    , Imf_Channel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> channel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__Iterator_copy(
    Imf_ChannelList_Iterator_t * this_
    , Imf_ChannelList_Iterator_t const * rhs)
{
        new (this_) Imf_3_0::ChannelList::Iterator(to_cpp_ref(rhs));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__Iterator_move(
    Imf_ChannelList_Iterator_t * this_
    , Imf_ChannelList_Iterator_t * rhs)
{
        new (this_) Imf_3_0::ChannelList::Iterator(to_cpp_ref(rhs));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__ConstIterator_sizeof()
{
        return sizeof(Imf_3_0::ChannelList::ConstIterator);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__ConstIterator_alignof()
{
        return alignof(Imf_3_0::ChannelList::ConstIterator);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__ConstIterator_ctor(
    Imf_ChannelList_ConstIterator_t * this_)
{
    try {
        new (this_) Imf_3_0::ChannelList::ConstIterator();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__ConstIterator_from_mut(
    Imf_ChannelList_ConstIterator_t * this_
    , Imf_ChannelList_Iterator_t const * rhs)
{
    try {
        new (this_) Imf_3_0::ChannelList::ConstIterator(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__ConstIterator__op_inc(
    Imf_ChannelList_ConstIterator_t * this_
    , Imf_ChannelList_ConstIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__ConstIterator_name(
    Imf_ChannelList_ConstIterator_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> name();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__ConstIterator_channel(
    Imf_ChannelList_ConstIterator_t const * this_
    , Imf_Channel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> channel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__ConstIterator_copy(
    Imf_ChannelList_ConstIterator_t * this_
    , Imf_ChannelList_ConstIterator_t const * rhs)
{
        new (this_) Imf_3_0::ChannelList::ConstIterator(to_cpp_ref(rhs));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__ChannelList__ConstIterator_move(
    Imf_ChannelList_ConstIterator_t * this_
    , Imf_ChannelList_ConstIterator_t * rhs)
{
        new (this_) Imf_3_0::ChannelList::ConstIterator(to_cpp_ref(rhs));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_channel_list_const_iter_eq(
    _Bool * return_
    , Imf_ChannelList_ConstIterator_t const * _param0
    , Imf_ChannelList_ConstIterator_t const * _param1)
{
    try {
        *(return_) = (to_cpp_ref(_param0) == to_cpp_ref(_param1));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


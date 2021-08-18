#pragma once
#include <imf_pixeltype.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__set_std__string__t_s std__set_std__string__t;
typedef std__set_std__string__t std_set_string_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

typedef struct Imf_3_0__Channel_t_s {
    Imf_PixelType type;
    int xSampling;
    int ySampling;
    _Bool pLinear;
} __attribute__((aligned(4))) Imf_3_0__Channel_t;
typedef Imf_3_0__Channel_t Imf_Channel_t;

typedef struct Imf_3_0__ChannelList_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__ChannelList_t;
typedef Imf_3_0__ChannelList_t Imf_ChannelList_t;

typedef struct Imf_3_0__ChannelList__Iterator_t_s {
    char data[8];
} __attribute__((aligned(8))) Imf_3_0__ChannelList__Iterator_t;
typedef Imf_3_0__ChannelList__Iterator_t Imf_ChannelList_Iterator_t;

typedef struct Imf_3_0__ChannelList__ConstIterator_t_s {
    char data[8];
} __attribute__((aligned(8))) Imf_3_0__ChannelList__ConstIterator_t;
typedef Imf_3_0__ChannelList__ConstIterator_t Imf_ChannelList_ConstIterator_t;


unsigned int Imf_3_0__Channel_ctor(
    Imf_Channel_t * this_
    , Imf_PixelType type
    , int xSampling
    , int ySampling
    , _Bool pLinear);
#define Imf_Channel_ctor Imf_3_0__Channel_ctor


unsigned int Imf_3_0__Channel__eq(
    Imf_Channel_t const * this_
    , _Bool * return_
    , Imf_Channel_t const * other);
#define Imf_Channel__eq Imf_3_0__Channel__eq


unsigned int Imf_3_0__Channel_dtor(
    Imf_Channel_t * this_);
#define Imf_Channel_dtor Imf_3_0__Channel_dtor


unsigned int Imf_3_0__Channel_copy(
    Imf_Channel_t * this_
    , Imf_Channel_t const * rhs);
#define Imf_Channel_copy Imf_3_0__Channel_copy


unsigned int Imf_3_0__Channel_move(
    Imf_Channel_t * this_
    , Imf_Channel_t * rhs);
#define Imf_Channel_move Imf_3_0__Channel_move


unsigned int Imf_3_0__ChannelList_insert(
    Imf_ChannelList_t * this_
    , char const * name
    , Imf_Channel_t const * channel);
#define Imf_ChannelList_insert Imf_3_0__ChannelList_insert


unsigned int Imf_3_0__ChannelList_findChannel(
    Imf_ChannelList_t * this_
    , Imf_Channel_t * * return_
    , char const * name);
#define Imf_ChannelList_findChannel Imf_3_0__ChannelList_findChannel


unsigned int Imf_3_0__ChannelList_findChannel_const(
    Imf_ChannelList_t const * this_
    , Imf_Channel_t const * * return_
    , char const * name);
#define Imf_ChannelList_findChannel_const Imf_3_0__ChannelList_findChannel_const


unsigned int Imf_3_0__ChannelList_begin(
    Imf_ChannelList_t * this_
    , Imf_ChannelList_Iterator_t * return_);
#define Imf_ChannelList_begin Imf_3_0__ChannelList_begin


unsigned int Imf_3_0__ChannelList_begin_const(
    Imf_ChannelList_t const * this_
    , Imf_ChannelList_ConstIterator_t * return_);
#define Imf_ChannelList_begin_const Imf_3_0__ChannelList_begin_const


unsigned int Imf_3_0__ChannelList_end(
    Imf_ChannelList_t * this_
    , Imf_ChannelList_Iterator_t * return_);
#define Imf_ChannelList_end Imf_3_0__ChannelList_end


unsigned int Imf_3_0__ChannelList_end_const(
    Imf_ChannelList_t const * this_
    , Imf_ChannelList_ConstIterator_t * return_);
#define Imf_ChannelList_end_const Imf_3_0__ChannelList_end_const


unsigned int Imf_3_0__ChannelList_find(
    Imf_ChannelList_t * this_
    , Imf_ChannelList_Iterator_t * return_
    , char const * name);
#define Imf_ChannelList_find Imf_3_0__ChannelList_find


unsigned int Imf_3_0__ChannelList_find_const(
    Imf_ChannelList_t const * this_
    , Imf_ChannelList_ConstIterator_t * return_
    , char const * name);
#define Imf_ChannelList_find_const Imf_3_0__ChannelList_find_const


unsigned int Imf_3_0__ChannelList_layers(
    Imf_ChannelList_t const * this_
    , std_set_string_t * layerNames);
#define Imf_ChannelList_layers Imf_3_0__ChannelList_layers


unsigned int Imf_3_0__ChannelList_channelsInLayer(
    Imf_ChannelList_t * this_
    , std_string_t const * layerName
    , Imf_ChannelList_Iterator_t * first
    , Imf_ChannelList_Iterator_t * last);
#define Imf_ChannelList_channelsInLayer Imf_3_0__ChannelList_channelsInLayer


unsigned int Imf_3_0__ChannelList_channelsInLayer_const(
    Imf_ChannelList_t const * this_
    , std_string_t const * layerName
    , Imf_ChannelList_ConstIterator_t * first
    , Imf_ChannelList_ConstIterator_t * last);
#define Imf_ChannelList_channelsInLayer_const Imf_3_0__ChannelList_channelsInLayer_const


unsigned int Imf_3_0__ChannelList_channelsWithPrefix(
    Imf_ChannelList_t * this_
    , char const * prefix
    , Imf_ChannelList_Iterator_t * first
    , Imf_ChannelList_Iterator_t * last);
#define Imf_ChannelList_channelsWithPrefix Imf_3_0__ChannelList_channelsWithPrefix


unsigned int Imf_3_0__ChannelList_channelsWithPrefix_const(
    Imf_ChannelList_t const * this_
    , char const * prefix
    , Imf_ChannelList_ConstIterator_t * first
    , Imf_ChannelList_ConstIterator_t * last);
#define Imf_ChannelList_channelsWithPrefix_const Imf_3_0__ChannelList_channelsWithPrefix_const


unsigned int Imf_3_0__ChannelList__eq(
    Imf_ChannelList_t const * this_
    , _Bool * return_
    , Imf_ChannelList_t const * other);
#define Imf_ChannelList__eq Imf_3_0__ChannelList__eq


unsigned int Imf_3_0__ChannelList_copy(
    Imf_ChannelList_t * * this_
    , Imf_ChannelList_t const * rhs);
#define Imf_ChannelList_copy Imf_3_0__ChannelList_copy


unsigned int Imf_3_0__ChannelList_dtor(
    Imf_ChannelList_t * this_);
#define Imf_ChannelList_dtor Imf_3_0__ChannelList_dtor


unsigned int Imf_3_0__ChannelList_ctor(
    Imf_ChannelList_t * * this_);
#define Imf_ChannelList_ctor Imf_3_0__ChannelList_ctor


/** returns the size of this type in bytes */
unsigned int Imf_3_0__ChannelList__Iterator_sizeof();
#define Imf_ChannelList_Iterator_sizeof Imf_3_0__ChannelList__Iterator_sizeof


/** returns the size of this type in bytes */
unsigned int Imf_3_0__ChannelList__Iterator_alignof();
#define Imf_ChannelList_Iterator_alignof Imf_3_0__ChannelList__Iterator_alignof


unsigned int Imf_3_0__ChannelList__Iterator_ctor(
    Imf_ChannelList_Iterator_t * this_);
#define Imf_ChannelList_Iterator_ctor Imf_3_0__ChannelList__Iterator_ctor


unsigned int Imf_3_0__ChannelList__Iterator__op_inc(
    Imf_ChannelList_Iterator_t * this_
    , Imf_ChannelList_Iterator_t * * return_);
#define Imf_ChannelList_Iterator__op_inc Imf_3_0__ChannelList__Iterator__op_inc


unsigned int Imf_3_0__ChannelList__Iterator_name(
    Imf_ChannelList_Iterator_t const * this_
    , char const * * return_);
#define Imf_ChannelList_Iterator_name Imf_3_0__ChannelList__Iterator_name


unsigned int Imf_3_0__ChannelList__Iterator_channel(
    Imf_ChannelList_Iterator_t const * this_
    , Imf_Channel_t * * return_);
#define Imf_ChannelList_Iterator_channel Imf_3_0__ChannelList__Iterator_channel


unsigned int Imf_3_0__ChannelList__Iterator_copy(
    Imf_ChannelList_Iterator_t * this_
    , Imf_ChannelList_Iterator_t const * rhs);
#define Imf_ChannelList_Iterator_copy Imf_3_0__ChannelList__Iterator_copy


unsigned int Imf_3_0__ChannelList__Iterator_move(
    Imf_ChannelList_Iterator_t * this_
    , Imf_ChannelList_Iterator_t * rhs);
#define Imf_ChannelList_Iterator_move Imf_3_0__ChannelList__Iterator_move


/** returns the size of this type in bytes */
unsigned int Imf_3_0__ChannelList__ConstIterator_sizeof();
#define Imf_ChannelList_ConstIterator_sizeof Imf_3_0__ChannelList__ConstIterator_sizeof


/** returns the size of this type in bytes */
unsigned int Imf_3_0__ChannelList__ConstIterator_alignof();
#define Imf_ChannelList_ConstIterator_alignof Imf_3_0__ChannelList__ConstIterator_alignof


unsigned int Imf_3_0__ChannelList__ConstIterator_ctor(
    Imf_ChannelList_ConstIterator_t * this_);
#define Imf_ChannelList_ConstIterator_ctor Imf_3_0__ChannelList__ConstIterator_ctor


unsigned int Imf_3_0__ChannelList__ConstIterator_from_mut(
    Imf_ChannelList_ConstIterator_t * this_
    , Imf_ChannelList_Iterator_t const * rhs);
#define Imf_ChannelList_ConstIterator_from_mut Imf_3_0__ChannelList__ConstIterator_from_mut


unsigned int Imf_3_0__ChannelList__ConstIterator__op_inc(
    Imf_ChannelList_ConstIterator_t * this_
    , Imf_ChannelList_ConstIterator_t * * return_);
#define Imf_ChannelList_ConstIterator__op_inc Imf_3_0__ChannelList__ConstIterator__op_inc


unsigned int Imf_3_0__ChannelList__ConstIterator_name(
    Imf_ChannelList_ConstIterator_t const * this_
    , char const * * return_);
#define Imf_ChannelList_ConstIterator_name Imf_3_0__ChannelList__ConstIterator_name


unsigned int Imf_3_0__ChannelList__ConstIterator_channel(
    Imf_ChannelList_ConstIterator_t const * this_
    , Imf_Channel_t const * * return_);
#define Imf_ChannelList_ConstIterator_channel Imf_3_0__ChannelList__ConstIterator_channel


unsigned int Imf_3_0__ChannelList__ConstIterator_copy(
    Imf_ChannelList_ConstIterator_t * this_
    , Imf_ChannelList_ConstIterator_t const * rhs);
#define Imf_ChannelList_ConstIterator_copy Imf_3_0__ChannelList__ConstIterator_copy


unsigned int Imf_3_0__ChannelList__ConstIterator_move(
    Imf_ChannelList_ConstIterator_t * this_
    , Imf_ChannelList_ConstIterator_t * rhs);
#define Imf_ChannelList_ConstIterator_move Imf_3_0__ChannelList__ConstIterator_move


unsigned int Imf_3_0_channel_list_const_iter_eq(
    _Bool * return_
    , Imf_ChannelList_ConstIterator_t const * _param0
    , Imf_ChannelList_ConstIterator_t const * _param1);
#define Imf_channel_list_const_iter_eq Imf_3_0_channel_list_const_iter_eq


#ifdef __cplusplus
}
#endif

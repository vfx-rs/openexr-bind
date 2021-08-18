#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__MultiViewChannelName_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__MultiViewChannelName_t;
typedef Imf_3_0__MultiViewChannelName_t Imf_MultiViewChannelName_t;


unsigned int Imf_3_0__MultiViewChannelName_copy(
    Imf_MultiViewChannelName_t * * this_
    , Imf_MultiViewChannelName_t const * rhs);
#define Imf_MultiViewChannelName_copy Imf_3_0__MultiViewChannelName_copy


unsigned int Imf_3_0__MultiViewChannelName_move(
    Imf_MultiViewChannelName_t * * this_
    , Imf_MultiViewChannelName_t * rhs);
#define Imf_MultiViewChannelName_move Imf_3_0__MultiViewChannelName_move


unsigned int Imf_3_0__MultiViewChannelName_dtor(
    Imf_MultiViewChannelName_t * this_);
#define Imf_MultiViewChannelName_dtor Imf_3_0__MultiViewChannelName_dtor


unsigned int Imf_3_0__MultiViewChannelName_ctor(
    Imf_MultiViewChannelName_t * * this_);
#define Imf_MultiViewChannelName_ctor Imf_3_0__MultiViewChannelName_ctor


#ifdef __cplusplus
}
#endif

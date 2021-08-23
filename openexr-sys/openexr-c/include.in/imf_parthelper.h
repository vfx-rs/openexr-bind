#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__MultiViewChannelName_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__MultiViewChannelName_t;
typedef Imf_3_0__MultiViewChannelName_t Imf_MultiViewChannelName_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiViewChannelName_copy(
    Imf_MultiViewChannelName_t * * this_
    , Imf_MultiViewChannelName_t const * rhs);
#define Imf_MultiViewChannelName_copy Imf_3_0__MultiViewChannelName_copy


OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiViewChannelName_move(
    Imf_MultiViewChannelName_t * * this_
    , Imf_MultiViewChannelName_t * rhs);
#define Imf_MultiViewChannelName_move Imf_3_0__MultiViewChannelName_move


OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiViewChannelName_dtor(
    Imf_MultiViewChannelName_t * this_);
#define Imf_MultiViewChannelName_dtor Imf_3_0__MultiViewChannelName_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiViewChannelName_ctor(
    Imf_MultiViewChannelName_t * * this_);
#define Imf_MultiViewChannelName_ctor Imf_3_0__MultiViewChannelName_ctor


#ifdef __cplusplus
}
#endif

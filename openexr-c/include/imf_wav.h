#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

OPENEXR_CPPMM_API unsigned int Imf_3_0_wav2Encode(
    unsigned short * in
    , int nx
    , int ox
    , int ny
    , int oy
    , unsigned short mx);
#define Imf_wav2Encode Imf_3_0_wav2Encode


OPENEXR_CPPMM_API unsigned int Imf_3_0_wav2Decode(
    unsigned short * in
    , int nx
    , int ox
    , int ny
    , int oy
    , unsigned short mx);
#define Imf_wav2Decode Imf_3_0_wav2Decode


#ifdef __cplusplus
}
#endif

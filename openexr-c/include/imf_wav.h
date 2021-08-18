#pragma once

#ifdef __cplusplus
extern "C" {
#endif

unsigned int Imf_3_0_wav2Encode(
    unsigned short * in
    , int nx
    , int ox
    , int ny
    , int oy
    , unsigned short mx);
#define Imf_wav2Encode Imf_3_0_wav2Encode


unsigned int Imf_3_0_wav2Decode(
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

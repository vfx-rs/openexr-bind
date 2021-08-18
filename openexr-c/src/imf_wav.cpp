#include "imf_wav_private.h"


#include <stdexcept>

unsigned int Imf_3_0_wav2Encode(
    unsigned short * in
    , int nx
    , int ox
    , int ny
    , int oy
    , unsigned short mx)
{
    try {
        Imf_3_0::wav2Encode(in, nx, ox, ny, oy, mx);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_wav2Decode(
    unsigned short * in
    , int nx
    , int ox
    , int ny
    , int oy
    , unsigned short mx)
{
    try {
        Imf_3_0::wav2Decode(in, nx, ox, ny, oy, mx);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


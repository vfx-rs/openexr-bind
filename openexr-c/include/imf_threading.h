#pragma once

#ifdef __cplusplus
extern "C" {
#endif

unsigned int Imf_3_0_globalThreadCount(
    int * return_);
#define Imf_globalThreadCount Imf_3_0_globalThreadCount


unsigned int Imf_3_0_setGlobalThreadCount(
    int count);
#define Imf_setGlobalThreadCount Imf_3_0_setGlobalThreadCount


#ifdef __cplusplus
}
#endif

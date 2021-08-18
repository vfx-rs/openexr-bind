#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

OPENEXR_API unsigned int Imf_3_0_globalThreadCount(
    int * return_);
#define Imf_globalThreadCount Imf_3_0_globalThreadCount


OPENEXR_API unsigned int Imf_3_0_setGlobalThreadCount(
    int count);
#define Imf_setGlobalThreadCount Imf_3_0_setGlobalThreadCount


#ifdef __cplusplus
}
#endif

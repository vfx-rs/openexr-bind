#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

enum Imf_3_0__PixelType_e {
    Imf_PixelType_UINT = 0,
    Imf_PixelType_HALF = 1,
    Imf_PixelType_FLOAT = 2,
    Imf_PixelType_NUM_PIXELTYPES = 3,
};
typedef unsigned int Imf_PixelType;

#ifdef __cplusplus
}
#endif

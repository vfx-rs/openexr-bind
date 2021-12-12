#pragma once
#include "openexr-api-export.h"

#include <c-half.h>

#ifdef __cplusplus
extern "C" {
#endif

OPENEXR_CPPMM_API unsigned int Imf_3_0_halfToUint(
    unsigned int * return_
    , Imath_half_t h);
#define Imf_halfToUint Imf_3_0_halfToUint


OPENEXR_CPPMM_API unsigned int Imf_3_0_floatToUint(
    unsigned int * return_
    , float f);
#define Imf_floatToUint Imf_3_0_floatToUint


OPENEXR_CPPMM_API unsigned int Imf_3_0_uintToHalf(
    Imath_half_t * return_
    , unsigned int ui);
#define Imf_uintToHalf Imf_3_0_uintToHalf


OPENEXR_CPPMM_API unsigned int Imf_3_0_floatToHalf(
    Imath_half_t * return_
    , float f);
#define Imf_floatToHalf Imf_3_0_floatToHalf


#ifdef __cplusplus
}
#endif

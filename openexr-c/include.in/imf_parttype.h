#pragma once
#include "openexr-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

OPENEXR_CPPMM_API unsigned int Imf_3_0_part_isImage(
    _Bool * return_
    , std_string_t const * name);
#define Imf_part_isImage Imf_3_0_part_isImage


OPENEXR_CPPMM_API unsigned int Imf_3_0_part_isTiled(
    _Bool * return_
    , std_string_t const * name);
#define Imf_part_isTiled Imf_3_0_part_isTiled


OPENEXR_CPPMM_API unsigned int Imf_3_0_part_isDeepData(
    _Bool * return_
    , std_string_t const * name);
#define Imf_part_isDeepData Imf_3_0_part_isDeepData


OPENEXR_CPPMM_API unsigned int Imf_3_0_part_isSupportedType(
    _Bool * return_
    , std_string_t const * name);
#define Imf_part_isSupportedType Imf_3_0_part_isSupportedType


#ifdef __cplusplus
}
#endif

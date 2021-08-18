#pragma once
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

unsigned int Imf_3_0_isTiled(
    _Bool * return_
    , int version);
#define Imf_isTiled Imf_3_0_isTiled


unsigned int Imf_3_0_isMultiPart(
    _Bool * return_
    , int version);
#define Imf_isMultiPart Imf_3_0_isMultiPart


unsigned int Imf_3_0_isNonImage(
    _Bool * return_
    , int version);
#define Imf_isNonImage Imf_3_0_isNonImage


unsigned int Imf_3_0_makeTiled(
    int * return_
    , int version);
#define Imf_makeTiled Imf_3_0_makeTiled


unsigned int Imf_3_0_makeNotTiled(
    int * return_
    , int version);
#define Imf_makeNotTiled Imf_3_0_makeNotTiled


unsigned int Imf_3_0_getVersion(
    int * return_
    , int version);
#define Imf_getVersion Imf_3_0_getVersion


unsigned int Imf_3_0_getFlags(
    int * return_
    , int version);
#define Imf_getFlags Imf_3_0_getFlags


unsigned int Imf_3_0_supportsFlags(
    _Bool * return_
    , int flags);
#define Imf_supportsFlags Imf_3_0_supportsFlags


unsigned int Imf_3_0_isImfMagic(
    _Bool * return_
    , char const bytes[4]);
#define Imf_isImfMagic Imf_3_0_isImfMagic


#ifdef __cplusplus
}
#endif

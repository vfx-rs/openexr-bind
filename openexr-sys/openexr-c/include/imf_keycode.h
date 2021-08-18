#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__KeyCode_t_s {
    char data[28];
} OPENEXR_CPPMM_ALIGN(4) Imf_3_0__KeyCode_t;
typedef Imf_3_0__KeyCode_t Imf_KeyCode_t;


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_sizeof();
#define Imf_KeyCode_sizeof Imf_3_0__KeyCode_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_alignof();
#define Imf_KeyCode_alignof Imf_3_0__KeyCode_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_ctor(
    Imf_KeyCode_t * this_
    , int filmMfcCode
    , int filmType
    , int prefix
    , int count
    , int perfOffset
    , int perfsPerFrame
    , int perfsPerCount);
#define Imf_KeyCode_ctor Imf_3_0__KeyCode_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_copy(
    Imf_KeyCode_t * this_
    , Imf_KeyCode_t const * other);
#define Imf_KeyCode_copy Imf_3_0__KeyCode_copy


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_dtor(
    Imf_KeyCode_t * this_);
#define Imf_KeyCode_dtor Imf_3_0__KeyCode_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode__assign(
    Imf_KeyCode_t * this_
    , Imf_KeyCode_t * * return_
    , Imf_KeyCode_t const * other);
#define Imf_KeyCode__assign Imf_3_0__KeyCode__assign


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_filmMfcCode(
    Imf_KeyCode_t const * this_
    , int * return_);
#define Imf_KeyCode_filmMfcCode Imf_3_0__KeyCode_filmMfcCode


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setFilmMfcCode(
    Imf_KeyCode_t * this_
    , int filmMfcCode);
#define Imf_KeyCode_setFilmMfcCode Imf_3_0__KeyCode_setFilmMfcCode


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_filmType(
    Imf_KeyCode_t const * this_
    , int * return_);
#define Imf_KeyCode_filmType Imf_3_0__KeyCode_filmType


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setFilmType(
    Imf_KeyCode_t * this_
    , int filmType);
#define Imf_KeyCode_setFilmType Imf_3_0__KeyCode_setFilmType


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_prefix(
    Imf_KeyCode_t const * this_
    , int * return_);
#define Imf_KeyCode_prefix Imf_3_0__KeyCode_prefix


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setPrefix(
    Imf_KeyCode_t * this_
    , int prefix);
#define Imf_KeyCode_setPrefix Imf_3_0__KeyCode_setPrefix


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_count(
    Imf_KeyCode_t const * this_
    , int * return_);
#define Imf_KeyCode_count Imf_3_0__KeyCode_count


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setCount(
    Imf_KeyCode_t * this_
    , int count);
#define Imf_KeyCode_setCount Imf_3_0__KeyCode_setCount


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_perfOffset(
    Imf_KeyCode_t const * this_
    , int * return_);
#define Imf_KeyCode_perfOffset Imf_3_0__KeyCode_perfOffset


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setPerfOffset(
    Imf_KeyCode_t * this_
    , int perfOffset);
#define Imf_KeyCode_setPerfOffset Imf_3_0__KeyCode_setPerfOffset


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_perfsPerFrame(
    Imf_KeyCode_t const * this_
    , int * return_);
#define Imf_KeyCode_perfsPerFrame Imf_3_0__KeyCode_perfsPerFrame


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setPerfsPerFrame(
    Imf_KeyCode_t * this_
    , int perfsPerFrame_);
#define Imf_KeyCode_setPerfsPerFrame Imf_3_0__KeyCode_setPerfsPerFrame


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_perfsPerCount(
    Imf_KeyCode_t const * this_
    , int * return_);
#define Imf_KeyCode_perfsPerCount Imf_3_0__KeyCode_perfsPerCount


OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setPerfsPerCount(
    Imf_KeyCode_t * this_
    , int perfsPerCount);
#define Imf_KeyCode_setPerfsPerCount Imf_3_0__KeyCode_setPerfsPerCount


#ifdef __cplusplus
}
#endif

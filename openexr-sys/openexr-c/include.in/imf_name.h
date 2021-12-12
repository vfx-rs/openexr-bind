#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__Name_t_s {
    char data[%SIZEImf_3_0::Name%];
} OPENEXR_CPPMM_ALIGN(%ALIGNImf_3_0::Name%) Imf_3_0__Name_t;
typedef Imf_3_0__Name_t Imf_Name_t;


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_sizeof();
#define Imf_Name_sizeof Imf_3_0__Name_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_alignof();
#define Imf_Name_alignof Imf_3_0__Name_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_default(
    Imf_Name_t * this_);
#define Imf_Name_default Imf_3_0__Name_default


OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_ctor(
    Imf_Name_t * this_
    , char const * text);
#define Imf_Name_ctor Imf_3_0__Name_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_copy(
    Imf_Name_t * this_
    , Imf_Name_t const * rhs);
#define Imf_Name_copy Imf_3_0__Name_copy


OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_move(
    Imf_Name_t * this_
    , Imf_Name_t * rhs);
#define Imf_Name_move Imf_3_0__Name_move


OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_dtor(
    Imf_Name_t * this_);
#define Imf_Name_dtor Imf_3_0__Name_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__Name__assign(
    Imf_Name_t * this_
    , Imf_Name_t * * return_
    , Imf_Name_t const * rhs);
#define Imf_Name__assign Imf_3_0__Name__assign


OPENEXR_CPPMM_API unsigned int Imf_3_0__Name__assign_1(
    Imf_Name_t * this_
    , Imf_Name_t * * return_
    , char const * text);
#define Imf_Name__assign_1 Imf_3_0__Name__assign_1


OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_text(
    Imf_Name_t const * this_
    , char const * * return_);
#define Imf_Name_text Imf_3_0__Name_text


#ifdef __cplusplus
}
#endif

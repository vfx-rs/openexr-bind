#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__Rational_t_s {
    int n;
    unsigned int d;
} OPENEXR_CPPMM_ALIGN(4) Imf_3_0__Rational_t;
typedef Imf_3_0__Rational_t Imf_Rational_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__Rational_default(
    Imf_Rational_t * this_);
#define Imf_Rational_default Imf_3_0__Rational_default


OPENEXR_CPPMM_API unsigned int Imf_3_0__Rational_ctor(
    Imf_Rational_t * this_
    , int n
    , int d);
#define Imf_Rational_ctor Imf_3_0__Rational_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__Rational_from_f64(
    Imf_Rational_t * this_
    , double x);
#define Imf_Rational_from_f64 Imf_3_0__Rational_from_f64


OPENEXR_CPPMM_API unsigned int Imf_3_0__Rational_as_f64(
    Imf_Rational_t const * this_
    , double * return_);
#define Imf_Rational_as_f64 Imf_3_0__Rational_as_f64


#ifdef __cplusplus
}
#endif

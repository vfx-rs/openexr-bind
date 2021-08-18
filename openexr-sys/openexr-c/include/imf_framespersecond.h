#pragma once
#include "openexr-api-export.h"

#include <imf_rational.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__Rational_t_s Imf_3_0__Rational_t;
typedef Imf_3_0__Rational_t Imf_Rational_t;

OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_23_976(
    Imf_Rational_t * return_);
#define Imf_fps_23_976 Imf_3_0_fps_23_976


OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_24(
    Imf_Rational_t * return_);
#define Imf_fps_24 Imf_3_0_fps_24


OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_25(
    Imf_Rational_t * return_);
#define Imf_fps_25 Imf_3_0_fps_25


OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_29_97(
    Imf_Rational_t * return_);
#define Imf_fps_29_97 Imf_3_0_fps_29_97


OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_30(
    Imf_Rational_t * return_);
#define Imf_fps_30 Imf_3_0_fps_30


OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_47_952(
    Imf_Rational_t * return_);
#define Imf_fps_47_952 Imf_3_0_fps_47_952


OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_48(
    Imf_Rational_t * return_);
#define Imf_fps_48 Imf_3_0_fps_48


OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_50(
    Imf_Rational_t * return_);
#define Imf_fps_50 Imf_3_0_fps_50


OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_59_94(
    Imf_Rational_t * return_);
#define Imf_fps_59_94 Imf_3_0_fps_59_94


OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_60(
    Imf_Rational_t * return_);
#define Imf_fps_60 Imf_3_0_fps_60


OPENEXR_CPPMM_API unsigned int Imf_3_0_guessExactFps_f64(
    Imf_Rational_t * return_
    , double fps);
#define Imf_guessExactFps_f64 Imf_3_0_guessExactFps_f64


OPENEXR_CPPMM_API unsigned int Imf_3_0_guessExactFps(
    Imf_Rational_t * return_
    , Imf_Rational_t const * fps);
#define Imf_guessExactFps Imf_3_0_guessExactFps


#ifdef __cplusplus
}
#endif

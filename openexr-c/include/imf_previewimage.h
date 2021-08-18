#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__PreviewRgba_t_s {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} OPENEXR_ALIGN(1) Imf_3_0__PreviewRgba_t;
typedef Imf_3_0__PreviewRgba_t Imf_PreviewRgba_t;

typedef struct Imf_3_0__PreviewImage_t_s {
    char _unused;
} OPENEXR_ALIGN(8) Imf_3_0__PreviewImage_t;
typedef Imf_3_0__PreviewImage_t Imf_PreviewImage_t;


OPENEXR_API unsigned int Imf_3_0__PreviewRgba_ctor(
    Imf_PreviewRgba_t * this_
    , unsigned char r
    , unsigned char g
    , unsigned char b
    , unsigned char a);
#define Imf_PreviewRgba_ctor Imf_3_0__PreviewRgba_ctor


OPENEXR_API unsigned int Imf_3_0__PreviewImage_ctor(
    Imf_PreviewImage_t * * this_
    , unsigned int width
    , unsigned int height
    , Imf_PreviewRgba_t const * pixels);
#define Imf_PreviewImage_ctor Imf_3_0__PreviewImage_ctor


OPENEXR_API unsigned int Imf_3_0__PreviewImage_copy(
    Imf_PreviewImage_t * * this_
    , Imf_PreviewImage_t const * other);
#define Imf_PreviewImage_copy Imf_3_0__PreviewImage_copy


OPENEXR_API unsigned int Imf_3_0__PreviewImage_dtor(
    Imf_PreviewImage_t * this_);
#define Imf_PreviewImage_dtor Imf_3_0__PreviewImage_dtor


OPENEXR_API unsigned int Imf_3_0__PreviewImage__assign(
    Imf_PreviewImage_t * this_
    , Imf_PreviewImage_t * * return_
    , Imf_PreviewImage_t const * other);
#define Imf_PreviewImage__assign Imf_3_0__PreviewImage__assign


OPENEXR_API unsigned int Imf_3_0__PreviewImage_width(
    Imf_PreviewImage_t const * this_
    , unsigned int * return_);
#define Imf_PreviewImage_width Imf_3_0__PreviewImage_width


OPENEXR_API unsigned int Imf_3_0__PreviewImage_height(
    Imf_PreviewImage_t const * this_
    , unsigned int * return_);
#define Imf_PreviewImage_height Imf_3_0__PreviewImage_height


OPENEXR_API unsigned int Imf_3_0__PreviewImage_pixels(
    Imf_PreviewImage_t * this_
    , Imf_PreviewRgba_t * * return_);
#define Imf_PreviewImage_pixels Imf_3_0__PreviewImage_pixels


OPENEXR_API unsigned int Imf_3_0__PreviewImage_pixels_const(
    Imf_PreviewImage_t const * this_
    , Imf_PreviewRgba_t const * * return_);
#define Imf_PreviewImage_pixels_const Imf_3_0__PreviewImage_pixels_const


OPENEXR_API unsigned int Imf_3_0__PreviewImage_pixel(
    Imf_PreviewImage_t * this_
    , Imf_PreviewRgba_t * * return_
    , unsigned int x
    , unsigned int y);
#define Imf_PreviewImage_pixel Imf_3_0__PreviewImage_pixel


OPENEXR_API unsigned int Imf_3_0__PreviewImage_pixel_const(
    Imf_PreviewImage_t const * this_
    , Imf_PreviewRgba_t const * * return_
    , unsigned int x
    , unsigned int y);
#define Imf_PreviewImage_pixel_const Imf_3_0__PreviewImage_pixel_const


#ifdef __cplusplus
}
#endif

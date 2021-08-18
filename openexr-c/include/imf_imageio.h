#pragma once
#include <imf_imagedatawindow.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct Imf_3_0__Image_t_s Imf_3_0__Image_t;
typedef Imf_3_0__Image_t Imf_Image_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;

unsigned int Imf_3_0_saveImage(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_Image_t const * img
    , Imf_DataWindowSource dws);
#define Imf_saveImage Imf_3_0_saveImage


unsigned int Imf_3_0_saveImage_1(
    std_string_t const * fileName
    , Imf_Image_t const * img);
#define Imf_saveImage_1 Imf_3_0_saveImage_1


unsigned int Imf_3_0_loadImage(
    Imf_Image_t * * return_
    , std_string_t const * fileName
    , Imf_Header_t * hdr);
#define Imf_loadImage Imf_3_0_loadImage


unsigned int Imf_3_0_loadImage_1(
    Imf_Image_t * * return_
    , std_string_t const * fileName);
#define Imf_loadImage_1 Imf_3_0_loadImage_1


#ifdef __cplusplus
}
#endif

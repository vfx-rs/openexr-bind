#pragma once
#include <imf_imagedatawindow.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__DeepImage_t_s Imf_3_0__DeepImage_t;
typedef Imf_3_0__DeepImage_t Imf_DeepImage_t;

unsigned int Imf_3_0_saveDeepImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_DeepImage_t const * img
    , Imf_DataWindowSource dws);
#define Imf_saveDeepImage_with_header Imf_3_0_saveDeepImage_with_header


unsigned int Imf_3_0_saveDeepImage(
    std_string_t const * fileName
    , Imf_DeepImage_t const * img);
#define Imf_saveDeepImage Imf_3_0_saveDeepImage


unsigned int Imf_3_0_loadDeepImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t * hdr
    , Imf_DeepImage_t * img);
#define Imf_loadDeepImage_with_header Imf_3_0_loadDeepImage_with_header


unsigned int Imf_3_0_loadDeepImage(
    std_string_t const * fileName
    , Imf_DeepImage_t * img);
#define Imf_loadDeepImage Imf_3_0_loadDeepImage


unsigned int Imf_3_0_saveDeepScanLineImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_DeepImage_t const * img
    , Imf_DataWindowSource dws);
#define Imf_saveDeepScanLineImage_with_header Imf_3_0_saveDeepScanLineImage_with_header


unsigned int Imf_3_0_saveDeepScanLineImage(
    std_string_t const * fileName
    , Imf_DeepImage_t const * img);
#define Imf_saveDeepScanLineImage Imf_3_0_saveDeepScanLineImage


unsigned int Imf_3_0_loadDeepScanLineImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t * hdr
    , Imf_DeepImage_t * img);
#define Imf_loadDeepScanLineImage_with_header Imf_3_0_loadDeepScanLineImage_with_header


unsigned int Imf_3_0_loadDeepScanLineImage(
    std_string_t const * fileName
    , Imf_DeepImage_t * img);
#define Imf_loadDeepScanLineImage Imf_3_0_loadDeepScanLineImage


unsigned int Imf_3_0_saveDeepTiledImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_DeepImage_t const * img
    , Imf_DataWindowSource dws);
#define Imf_saveDeepTiledImage_with_header Imf_3_0_saveDeepTiledImage_with_header


unsigned int Imf_3_0_saveDeepTiledImage(
    std_string_t const * fileName
    , Imf_DeepImage_t const * img);
#define Imf_saveDeepTiledImage Imf_3_0_saveDeepTiledImage


unsigned int Imf_3_0_loadDeepTiledImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t * hdr
    , Imf_DeepImage_t * img);
#define Imf_loadDeepTiledImage_with_header Imf_3_0_loadDeepTiledImage_with_header


unsigned int Imf_3_0_loadDeepTiledImage(
    std_string_t const * fileName
    , Imf_DeepImage_t * img);
#define Imf_loadDeepTiledImage Imf_3_0_loadDeepTiledImage


#ifdef __cplusplus
}
#endif

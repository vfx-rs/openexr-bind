#pragma once
#include <imf_imagedatawindow.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct Imf_3_0__FlatImage_t_s Imf_3_0__FlatImage_t;
typedef Imf_3_0__FlatImage_t Imf_FlatImage_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;

unsigned int Imf_3_0_saveFlatImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_FlatImage_t const * img
    , Imf_DataWindowSource dws);
#define Imf_saveFlatImage_with_header Imf_3_0_saveFlatImage_with_header


unsigned int Imf_3_0_saveFlatImage(
    std_string_t const * fileName
    , Imf_FlatImage_t const * img);
#define Imf_saveFlatImage Imf_3_0_saveFlatImage


unsigned int Imf_3_0_loadFlatImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t * hdr
    , Imf_FlatImage_t * img);
#define Imf_loadFlatImage_with_header Imf_3_0_loadFlatImage_with_header


unsigned int Imf_3_0_loadFlatImage(
    std_string_t const * fileName
    , Imf_FlatImage_t * img);
#define Imf_loadFlatImage Imf_3_0_loadFlatImage


unsigned int Imf_3_0_saveFlatScanLineImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_FlatImage_t const * img
    , Imf_DataWindowSource dws);
#define Imf_saveFlatScanLineImage_with_header Imf_3_0_saveFlatScanLineImage_with_header


unsigned int Imf_3_0_saveFlatScanLineImage(
    std_string_t const * fileName
    , Imf_FlatImage_t const * img);
#define Imf_saveFlatScanLineImage Imf_3_0_saveFlatScanLineImage


unsigned int Imf_3_0_loadFlatScanLineImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t * hdr
    , Imf_FlatImage_t * img);
#define Imf_loadFlatScanLineImage_with_header Imf_3_0_loadFlatScanLineImage_with_header


unsigned int Imf_3_0_loadFlatScanLineImage(
    std_string_t const * fileName
    , Imf_FlatImage_t * img);
#define Imf_loadFlatScanLineImage Imf_3_0_loadFlatScanLineImage


unsigned int Imf_3_0_saveFlatTiledImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_FlatImage_t const * img
    , Imf_DataWindowSource dws);
#define Imf_saveFlatTiledImage_with_header Imf_3_0_saveFlatTiledImage_with_header


unsigned int Imf_3_0_saveFlatTiledImage(
    std_string_t const * fileName
    , Imf_FlatImage_t const * img);
#define Imf_saveFlatTiledImage Imf_3_0_saveFlatTiledImage


unsigned int Imf_3_0_loadFlatTiledImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t * hdr
    , Imf_FlatImage_t * img);
#define Imf_loadFlatTiledImage_with_header Imf_3_0_loadFlatTiledImage_with_header


unsigned int Imf_3_0_loadFlatTiledImage(
    std_string_t const * fileName
    , Imf_FlatImage_t * img);
#define Imf_loadFlatTiledImage Imf_3_0_loadFlatTiledImage


#ifdef __cplusplus
}
#endif

#pragma once
#include "openexr-api-export.h"

#include <imath_box.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__Image_t_s Imf_3_0__Image_t;
typedef Imf_3_0__Image_t Imf_Image_t;

enum Imf_3_0__DataWindowSource_e {
    Imf_DataWindowSource_USE_IMAGE_DATA_WINDOW = 0,
    Imf_DataWindowSource_USE_HEADER_DATA_WINDOW = 1,
};
typedef unsigned int Imf_DataWindowSource;

OPENEXR_CPPMM_API unsigned int Imf_3_0_dataWindowForFile(
    Imath_Box2i_t * return_
    , Imf_Header_t const * hdr
    , Imf_Image_t const * img
    , Imf_DataWindowSource dws);
#define Imf_dataWindowForFile Imf_3_0_dataWindowForFile


#ifdef __cplusplus
}
#endif

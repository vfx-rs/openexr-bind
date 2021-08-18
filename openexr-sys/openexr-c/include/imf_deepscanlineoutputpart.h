#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__PreviewRgba_t_s Imf_3_0__PreviewRgba_t;
typedef Imf_3_0__PreviewRgba_t Imf_PreviewRgba_t;
typedef struct Imf_3_0__DeepScanLineInputFile_t_s Imf_3_0__DeepScanLineInputFile_t;
typedef Imf_3_0__DeepScanLineInputFile_t Imf_DeepScanLineInputFile_t;
typedef struct Imf_3_0__MultiPartOutputFile_t_s Imf_3_0__MultiPartOutputFile_t;
typedef Imf_3_0__MultiPartOutputFile_t Imf_MultiPartOutputFile_t;
typedef struct Imf_3_0__DeepFrameBuffer_t_s Imf_3_0__DeepFrameBuffer_t;
typedef Imf_3_0__DeepFrameBuffer_t Imf_DeepFrameBuffer_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__DeepScanLineInputPart_t_s Imf_3_0__DeepScanLineInputPart_t;
typedef Imf_3_0__DeepScanLineInputPart_t Imf_DeepScanLineInputPart_t;

typedef struct Imf_3_0__DeepScanLineOutputPart_t_s {
    char data[8];
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__DeepScanLineOutputPart_t;
typedef Imf_3_0__DeepScanLineOutputPart_t Imf_DeepScanLineOutputPart_t;


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_sizeof();
#define Imf_DeepScanLineOutputPart_sizeof Imf_3_0__DeepScanLineOutputPart_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_alignof();
#define Imf_DeepScanLineOutputPart_alignof Imf_3_0__DeepScanLineOutputPart_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_ctor(
    Imf_DeepScanLineOutputPart_t * this_
    , Imf_MultiPartOutputFile_t * multiPartFile
    , int partNumber);
#define Imf_DeepScanLineOutputPart_ctor Imf_3_0__DeepScanLineOutputPart_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_fileName(
    Imf_DeepScanLineOutputPart_t const * this_
    , char const * * return_);
#define Imf_DeepScanLineOutputPart_fileName Imf_3_0__DeepScanLineOutputPart_fileName


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_header(
    Imf_DeepScanLineOutputPart_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_DeepScanLineOutputPart_header Imf_3_0__DeepScanLineOutputPart_header


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_setFrameBuffer(
    Imf_DeepScanLineOutputPart_t * this_
    , Imf_DeepFrameBuffer_t const * frameBuffer);
#define Imf_DeepScanLineOutputPart_setFrameBuffer Imf_3_0__DeepScanLineOutputPart_setFrameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_frameBuffer(
    Imf_DeepScanLineOutputPart_t const * this_
    , Imf_DeepFrameBuffer_t const * * return_);
#define Imf_DeepScanLineOutputPart_frameBuffer Imf_3_0__DeepScanLineOutputPart_frameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_writePixels(
    Imf_DeepScanLineOutputPart_t * this_
    , int numScanLines);
#define Imf_DeepScanLineOutputPart_writePixels Imf_3_0__DeepScanLineOutputPart_writePixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_currentScanLine(
    Imf_DeepScanLineOutputPart_t const * this_
    , int * return_);
#define Imf_DeepScanLineOutputPart_currentScanLine Imf_3_0__DeepScanLineOutputPart_currentScanLine


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_copyPixels_from_file(
    Imf_DeepScanLineOutputPart_t * this_
    , Imf_DeepScanLineInputFile_t * in);
#define Imf_DeepScanLineOutputPart_copyPixels_from_file Imf_3_0__DeepScanLineOutputPart_copyPixels_from_file


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_copyPixels_from_part(
    Imf_DeepScanLineOutputPart_t * this_
    , Imf_DeepScanLineInputPart_t * in);
#define Imf_DeepScanLineOutputPart_copyPixels_from_part Imf_3_0__DeepScanLineOutputPart_copyPixels_from_part


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepScanLineOutputPart_updatePreviewImage(
    Imf_DeepScanLineOutputPart_t * this_
    , Imf_PreviewRgba_t const * newPixels);
#define Imf_DeepScanLineOutputPart_updatePreviewImage Imf_3_0__DeepScanLineOutputPart_updatePreviewImage


#ifdef __cplusplus
}
#endif

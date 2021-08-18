#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__PreviewRgba_t_s Imf_3_0__PreviewRgba_t;
typedef Imf_3_0__PreviewRgba_t Imf_PreviewRgba_t;
typedef struct Imf_3_0__DeepScanLineInputFile_t_s Imf_3_0__DeepScanLineInputFile_t;
typedef Imf_3_0__DeepScanLineInputFile_t Imf_DeepScanLineInputFile_t;
typedef struct Imf_3_0__DeepFrameBuffer_t_s Imf_3_0__DeepFrameBuffer_t;
typedef Imf_3_0__DeepFrameBuffer_t Imf_DeepFrameBuffer_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__DeepScanLineInputPart_t_s Imf_3_0__DeepScanLineInputPart_t;
typedef Imf_3_0__DeepScanLineInputPart_t Imf_DeepScanLineInputPart_t;

typedef struct Imf_3_0__DeepScanLineOutputFile_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__DeepScanLineOutputFile_t;
typedef Imf_3_0__DeepScanLineOutputFile_t Imf_DeepScanLineOutputFile_t;


unsigned int Imf_3_0__DeepScanLineOutputFile_ctor(
    Imf_DeepScanLineOutputFile_t * * this_
    , char const * fileName
    , Imf_Header_t const * header
    , int numThreads);
#define Imf_DeepScanLineOutputFile_ctor Imf_3_0__DeepScanLineOutputFile_ctor


unsigned int Imf_3_0__DeepScanLineOutputFile_dtor(
    Imf_DeepScanLineOutputFile_t * this_);
#define Imf_DeepScanLineOutputFile_dtor Imf_3_0__DeepScanLineOutputFile_dtor


unsigned int Imf_3_0__DeepScanLineOutputFile_fileName(
    Imf_DeepScanLineOutputFile_t const * this_
    , char const * * return_);
#define Imf_DeepScanLineOutputFile_fileName Imf_3_0__DeepScanLineOutputFile_fileName


unsigned int Imf_3_0__DeepScanLineOutputFile_header(
    Imf_DeepScanLineOutputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_DeepScanLineOutputFile_header Imf_3_0__DeepScanLineOutputFile_header


unsigned int Imf_3_0__DeepScanLineOutputFile_setFrameBuffer(
    Imf_DeepScanLineOutputFile_t * this_
    , Imf_DeepFrameBuffer_t const * frameBuffer);
#define Imf_DeepScanLineOutputFile_setFrameBuffer Imf_3_0__DeepScanLineOutputFile_setFrameBuffer


unsigned int Imf_3_0__DeepScanLineOutputFile_frameBuffer(
    Imf_DeepScanLineOutputFile_t const * this_
    , Imf_DeepFrameBuffer_t const * * return_);
#define Imf_DeepScanLineOutputFile_frameBuffer Imf_3_0__DeepScanLineOutputFile_frameBuffer


unsigned int Imf_3_0__DeepScanLineOutputFile_writePixels(
    Imf_DeepScanLineOutputFile_t * this_
    , int numScanLines);
#define Imf_DeepScanLineOutputFile_writePixels Imf_3_0__DeepScanLineOutputFile_writePixels


unsigned int Imf_3_0__DeepScanLineOutputFile_currentScanLine(
    Imf_DeepScanLineOutputFile_t const * this_
    , int * return_);
#define Imf_DeepScanLineOutputFile_currentScanLine Imf_3_0__DeepScanLineOutputFile_currentScanLine


unsigned int Imf_3_0__DeepScanLineOutputFile_copyPixels_from_file(
    Imf_DeepScanLineOutputFile_t * this_
    , Imf_DeepScanLineInputFile_t * in);
#define Imf_DeepScanLineOutputFile_copyPixels_from_file Imf_3_0__DeepScanLineOutputFile_copyPixels_from_file


unsigned int Imf_3_0__DeepScanLineOutputFile_copyPixels_from_part(
    Imf_DeepScanLineOutputFile_t * this_
    , Imf_DeepScanLineInputPart_t * in);
#define Imf_DeepScanLineOutputFile_copyPixels_from_part Imf_3_0__DeepScanLineOutputFile_copyPixels_from_part


unsigned int Imf_3_0__DeepScanLineOutputFile_updatePreviewImage(
    Imf_DeepScanLineOutputFile_t * this_
    , Imf_PreviewRgba_t const * newPixels);
#define Imf_DeepScanLineOutputFile_updatePreviewImage Imf_3_0__DeepScanLineOutputFile_updatePreviewImage


#ifdef __cplusplus
}
#endif

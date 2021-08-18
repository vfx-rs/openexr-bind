#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__PreviewRgba_t_s Imf_3_0__PreviewRgba_t;
typedef Imf_3_0__PreviewRgba_t Imf_PreviewRgba_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__InputPart_t_s Imf_3_0__InputPart_t;
typedef Imf_3_0__InputPart_t Imf_InputPart_t;
typedef struct Imf_3_0__FrameBuffer_t_s Imf_3_0__FrameBuffer_t;
typedef Imf_3_0__FrameBuffer_t Imf_FrameBuffer_t;
typedef struct Imf_3_0__OStream_t_s Imf_3_0__OStream_t;
typedef Imf_3_0__OStream_t Imf_OStream_t;
typedef struct Imf_3_0__InputFile_t_s Imf_3_0__InputFile_t;
typedef Imf_3_0__InputFile_t Imf_InputFile_t;

typedef struct Imf_3_0__OutputFile_t_s {
    char _unused;
} OPENEXR_ALIGN(8) Imf_3_0__OutputFile_t;
typedef Imf_3_0__OutputFile_t Imf_OutputFile_t;


OPENEXR_API unsigned int Imf_3_0__OutputFile_ctor(
    Imf_OutputFile_t * * this_
    , char const * fileName
    , Imf_Header_t const * header
    , int numThreads);
#define Imf_OutputFile_ctor Imf_3_0__OutputFile_ctor


OPENEXR_API unsigned int Imf_3_0__OutputFile_from_stream(
    Imf_OutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * header
    , int numThreads);
#define Imf_OutputFile_from_stream Imf_3_0__OutputFile_from_stream


OPENEXR_API unsigned int Imf_3_0__OutputFile_dtor(
    Imf_OutputFile_t * this_);
#define Imf_OutputFile_dtor Imf_3_0__OutputFile_dtor


OPENEXR_API unsigned int Imf_3_0__OutputFile_fileName(
    Imf_OutputFile_t const * this_
    , char const * * return_);
#define Imf_OutputFile_fileName Imf_3_0__OutputFile_fileName


OPENEXR_API unsigned int Imf_3_0__OutputFile_header(
    Imf_OutputFile_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_OutputFile_header Imf_3_0__OutputFile_header


OPENEXR_API unsigned int Imf_3_0__OutputFile_setFrameBuffer(
    Imf_OutputFile_t * this_
    , Imf_FrameBuffer_t const * frameBuffer);
#define Imf_OutputFile_setFrameBuffer Imf_3_0__OutputFile_setFrameBuffer


OPENEXR_API unsigned int Imf_3_0__OutputFile_frameBuffer(
    Imf_OutputFile_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_OutputFile_frameBuffer Imf_3_0__OutputFile_frameBuffer


OPENEXR_API unsigned int Imf_3_0__OutputFile_writePixels(
    Imf_OutputFile_t * this_
    , int numScanLines);
#define Imf_OutputFile_writePixels Imf_3_0__OutputFile_writePixels


OPENEXR_API unsigned int Imf_3_0__OutputFile_currentScanLine(
    Imf_OutputFile_t const * this_
    , int * return_);
#define Imf_OutputFile_currentScanLine Imf_3_0__OutputFile_currentScanLine


OPENEXR_API unsigned int Imf_3_0__OutputFile_copyPixels_from_file(
    Imf_OutputFile_t * this_
    , Imf_InputFile_t * in);
#define Imf_OutputFile_copyPixels_from_file Imf_3_0__OutputFile_copyPixels_from_file


OPENEXR_API unsigned int Imf_3_0__OutputFile_copyPixels_from_part(
    Imf_OutputFile_t * this_
    , Imf_InputPart_t * in);
#define Imf_OutputFile_copyPixels_from_part Imf_3_0__OutputFile_copyPixels_from_part


OPENEXR_API unsigned int Imf_3_0__OutputFile_updatePreviewImage(
    Imf_OutputFile_t * this_
    , Imf_PreviewRgba_t const * newPixels);
#define Imf_OutputFile_updatePreviewImage Imf_3_0__OutputFile_updatePreviewImage


OPENEXR_API unsigned int Imf_3_0__OutputFile_breakScanLine(
    Imf_OutputFile_t * this_
    , int y
    , int offset
    , int length
    , char c);
#define Imf_OutputFile_breakScanLine Imf_3_0__OutputFile_breakScanLine


#ifdef __cplusplus
}
#endif

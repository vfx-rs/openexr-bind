#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__InputFile_t_s Imf_3_0__InputFile_t;
typedef Imf_3_0__InputFile_t Imf_InputFile_t;
typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__FrameBuffer_t_s Imf_3_0__FrameBuffer_t;
typedef Imf_3_0__FrameBuffer_t Imf_FrameBuffer_t;
typedef struct Imf_3_0__PreviewRgba_t_s Imf_3_0__PreviewRgba_t;
typedef Imf_3_0__PreviewRgba_t Imf_PreviewRgba_t;
typedef struct Imf_3_0__MultiPartOutputFile_t_s Imf_3_0__MultiPartOutputFile_t;
typedef Imf_3_0__MultiPartOutputFile_t Imf_MultiPartOutputFile_t;
typedef struct Imf_3_0__InputPart_t_s Imf_3_0__InputPart_t;
typedef Imf_3_0__InputPart_t Imf_InputPart_t;

typedef struct Imf_3_0__OutputPart_t_s {
    char data[%SIZEImf_3_0::OutputPart%];
} OPENEXR_CPPMM_ALIGN(%ALIGNImf_3_0::OutputPart%) Imf_3_0__OutputPart_t;
typedef Imf_3_0__OutputPart_t Imf_OutputPart_t;


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_sizeof();
#define Imf_OutputPart_sizeof Imf_3_0__OutputPart_sizeof


/** returns the size of this type in bytes */
OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_alignof();
#define Imf_OutputPart_alignof Imf_3_0__OutputPart_alignof


OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_ctor(
    Imf_OutputPart_t * this_
    , Imf_MultiPartOutputFile_t * multiPartFile
    , int partNumber);
#define Imf_OutputPart_ctor Imf_3_0__OutputPart_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_fileName(
    Imf_OutputPart_t const * this_
    , char const * * return_);
#define Imf_OutputPart_fileName Imf_3_0__OutputPart_fileName


OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_header(
    Imf_OutputPart_t const * this_
    , Imf_Header_t const * * return_);
#define Imf_OutputPart_header Imf_3_0__OutputPart_header


OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_setFrameBuffer(
    Imf_OutputPart_t * this_
    , Imf_FrameBuffer_t const * frameBuffer);
#define Imf_OutputPart_setFrameBuffer Imf_3_0__OutputPart_setFrameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_frameBuffer(
    Imf_OutputPart_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_OutputPart_frameBuffer Imf_3_0__OutputPart_frameBuffer


OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_writePixels(
    Imf_OutputPart_t * this_
    , int numScanLines);
#define Imf_OutputPart_writePixels Imf_3_0__OutputPart_writePixels


OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_currentScanLine(
    Imf_OutputPart_t const * this_
    , int * return_);
#define Imf_OutputPart_currentScanLine Imf_3_0__OutputPart_currentScanLine


OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_copyPixels_from_file(
    Imf_OutputPart_t * this_
    , Imf_InputFile_t * in);
#define Imf_OutputPart_copyPixels_from_file Imf_3_0__OutputPart_copyPixels_from_file


OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_copyPixels_from_part(
    Imf_OutputPart_t * this_
    , Imf_InputPart_t * in);
#define Imf_OutputPart_copyPixels_from_part Imf_3_0__OutputPart_copyPixels_from_part


OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_updatePreviewImage(
    Imf_OutputPart_t * this_
    , Imf_PreviewRgba_t const * newPixels);
#define Imf_OutputPart_updatePreviewImage Imf_3_0__OutputPart_updatePreviewImage


OPENEXR_CPPMM_API unsigned int Imf_3_0__OutputPart_breakScanLine(
    Imf_OutputPart_t * this_
    , int y
    , int offset
    , int length
    , char c);
#define Imf_OutputPart_breakScanLine Imf_3_0__OutputPart_breakScanLine


#ifdef __cplusplus
}
#endif

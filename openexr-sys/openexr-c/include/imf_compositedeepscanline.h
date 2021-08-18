#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imath_3_0__Box_Imath_3_0__Vec2_int___t_s Imath_3_0__Box_Imath_3_0__Vec2_int___t;
typedef Imath_3_0__Box_Imath_3_0__Vec2_int___t Imath_Box2i_t;
typedef struct Imf_3_0__DeepScanLineInputFile_t_s Imf_3_0__DeepScanLineInputFile_t;
typedef Imf_3_0__DeepScanLineInputFile_t Imf_DeepScanLineInputFile_t;
typedef struct Imf_3_0__DeepCompositing_t_s Imf_3_0__DeepCompositing_t;
typedef Imf_3_0__DeepCompositing_t Imf_DeepCompositing_t;
typedef struct Imf_3_0__FrameBuffer_t_s Imf_3_0__FrameBuffer_t;
typedef Imf_3_0__FrameBuffer_t Imf_FrameBuffer_t;
typedef struct Imf_3_0__DeepScanLineInputPart_t_s Imf_3_0__DeepScanLineInputPart_t;
typedef Imf_3_0__DeepScanLineInputPart_t Imf_DeepScanLineInputPart_t;

typedef struct Imf_3_0__CompositeDeepScanLine_t_s {
    char _unused;
} OPENEXR_ALIGN(8) Imf_3_0__CompositeDeepScanLine_t;
typedef Imf_3_0__CompositeDeepScanLine_t Imf_CompositeDeepScanLine_t;


OPENEXR_API unsigned int Imf_3_0__CompositeDeepScanLine_ctor(
    Imf_CompositeDeepScanLine_t * * this_);
#define Imf_CompositeDeepScanLine_ctor Imf_3_0__CompositeDeepScanLine_ctor


OPENEXR_API unsigned int Imf_3_0__CompositeDeepScanLine_dtor(
    Imf_CompositeDeepScanLine_t * this_);
#define Imf_CompositeDeepScanLine_dtor Imf_3_0__CompositeDeepScanLine_dtor


/** set the source data as a part
@note all parts must remain valid until after last interaction with DeepComp */
OPENEXR_API unsigned int Imf_3_0__CompositeDeepScanLine_addSource_part(
    Imf_CompositeDeepScanLine_t * this_
    , Imf_DeepScanLineInputPart_t * part);
#define Imf_CompositeDeepScanLine_addSource_part Imf_3_0__CompositeDeepScanLine_addSource_part


/** set the source data as a file
@note all file must remain valid until after last interaction with DeepComp */
OPENEXR_API unsigned int Imf_3_0__CompositeDeepScanLine_addSource_file(
    Imf_CompositeDeepScanLine_t * this_
    , Imf_DeepScanLineInputFile_t * file);
#define Imf_CompositeDeepScanLine_addSource_file Imf_3_0__CompositeDeepScanLine_addSource_file


/** ////////////////////////////////////// */
OPENEXR_API unsigned int Imf_3_0__CompositeDeepScanLine_setFrameBuffer(
    Imf_CompositeDeepScanLine_t * this_
    , Imf_FrameBuffer_t const * fr);
#define Imf_CompositeDeepScanLine_setFrameBuffer Imf_3_0__CompositeDeepScanLine_setFrameBuffer


/** ///////////////////////////////////// */
OPENEXR_API unsigned int Imf_3_0__CompositeDeepScanLine_frameBuffer(
    Imf_CompositeDeepScanLine_t const * this_
    , Imf_FrameBuffer_t const * * return_);
#define Imf_CompositeDeepScanLine_frameBuffer Imf_3_0__CompositeDeepScanLine_frameBuffer


/** /////////////////////////////////////////////// */
OPENEXR_API unsigned int Imf_3_0__CompositeDeepScanLine_readPixels(
    Imf_CompositeDeepScanLine_t * this_
    , int start
    , int end);
#define Imf_CompositeDeepScanLine_readPixels Imf_3_0__CompositeDeepScanLine_readPixels


OPENEXR_API unsigned int Imf_3_0__CompositeDeepScanLine_sources(
    Imf_CompositeDeepScanLine_t const * this_
    , int * return_);
#define Imf_CompositeDeepScanLine_sources Imf_3_0__CompositeDeepScanLine_sources


/** ///////////////////////////////////////////// */
OPENEXR_API unsigned int Imf_3_0__CompositeDeepScanLine_dataWindow(
    Imf_CompositeDeepScanLine_t const * this_
    , Imath_Box2i_t const * * return_);
#define Imf_CompositeDeepScanLine_dataWindow Imf_3_0__CompositeDeepScanLine_dataWindow


OPENEXR_API unsigned int Imf_3_0__CompositeDeepScanLine_setCompositing(
    Imf_CompositeDeepScanLine_t * this_
    , Imf_DeepCompositing_t * compositing);
#define Imf_CompositeDeepScanLine_setCompositing Imf_3_0__CompositeDeepScanLine_setCompositing


#ifdef __cplusplus
}
#endif

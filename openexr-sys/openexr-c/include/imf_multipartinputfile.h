#pragma once
#include "openexr-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__IStream_t_s Imf_3_0__IStream_t;
typedef Imf_3_0__IStream_t Imf_IStream_t;

typedef struct Imf_3_0__MultiPartInputFile_t_s {
    char _unused;
} OPENEXR_ALIGN(8) Imf_3_0__MultiPartInputFile_t;
typedef Imf_3_0__MultiPartInputFile_t Imf_MultiPartInputFile_t;


OPENEXR_API unsigned int Imf_3_0__MultiPartInputFile_ctor(
    Imf_MultiPartInputFile_t * * this_
    , char const * fileName
    , int numThreads
    , _Bool reconstructChunkOffsetTable);
#define Imf_MultiPartInputFile_ctor Imf_3_0__MultiPartInputFile_ctor


OPENEXR_API unsigned int Imf_3_0__MultiPartInputFile_from_stream(
    Imf_MultiPartInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads
    , _Bool reconstructChunkOffsetTable);
#define Imf_MultiPartInputFile_from_stream Imf_3_0__MultiPartInputFile_from_stream


OPENEXR_API unsigned int Imf_3_0__MultiPartInputFile_dtor(
    Imf_MultiPartInputFile_t * this_);
#define Imf_MultiPartInputFile_dtor Imf_3_0__MultiPartInputFile_dtor


OPENEXR_API unsigned int Imf_3_0__MultiPartInputFile_parts(
    Imf_MultiPartInputFile_t const * this_
    , int * return_);
#define Imf_MultiPartInputFile_parts Imf_3_0__MultiPartInputFile_parts


OPENEXR_API unsigned int Imf_3_0__MultiPartInputFile_header(
    Imf_MultiPartInputFile_t const * this_
    , Imf_Header_t const * * return_
    , int n);
#define Imf_MultiPartInputFile_header Imf_3_0__MultiPartInputFile_header


OPENEXR_API unsigned int Imf_3_0__MultiPartInputFile_version(
    Imf_MultiPartInputFile_t const * this_
    , int * return_);
#define Imf_MultiPartInputFile_version Imf_3_0__MultiPartInputFile_version


OPENEXR_API unsigned int Imf_3_0__MultiPartInputFile_partComplete(
    Imf_MultiPartInputFile_t const * this_
    , _Bool * return_
    , int part);
#define Imf_MultiPartInputFile_partComplete Imf_3_0__MultiPartInputFile_partComplete


OPENEXR_API unsigned int Imf_3_0__MultiPartInputFile_flushPartCache(
    Imf_MultiPartInputFile_t * this_);
#define Imf_MultiPartInputFile_flushPartCache Imf_3_0__MultiPartInputFile_flushPartCache


#ifdef __cplusplus
}
#endif

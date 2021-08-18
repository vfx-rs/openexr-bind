#pragma once
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__Header_t_s Imf_3_0__Header_t;
typedef Imf_3_0__Header_t Imf_Header_t;
typedef struct Imf_3_0__OStream_t_s Imf_3_0__OStream_t;
typedef Imf_3_0__OStream_t Imf_OStream_t;

typedef struct Imf_3_0__MultiPartOutputFile_t_s {
    char _unused;
} __attribute__((aligned(8))) Imf_3_0__MultiPartOutputFile_t;
typedef Imf_3_0__MultiPartOutputFile_t Imf_MultiPartOutputFile_t;


unsigned int Imf_3_0__MultiPartOutputFile_ctor(
    Imf_MultiPartOutputFile_t * * this_
    , char const * fileName
    , Imf_Header_t const * headers
    , int parts
    , _Bool overrideSharedAttributes
    , int numThreads);
#define Imf_MultiPartOutputFile_ctor Imf_3_0__MultiPartOutputFile_ctor


unsigned int Imf_3_0__MultiPartOutputFile_from_stream(
    Imf_MultiPartOutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * headers
    , int parts
    , _Bool overrideSharedAttributes
    , int numThreads);
#define Imf_MultiPartOutputFile_from_stream Imf_3_0__MultiPartOutputFile_from_stream


unsigned int Imf_3_0__MultiPartOutputFile_parts(
    Imf_MultiPartOutputFile_t const * this_
    , int * return_);
#define Imf_MultiPartOutputFile_parts Imf_3_0__MultiPartOutputFile_parts


unsigned int Imf_3_0__MultiPartOutputFile_header(
    Imf_MultiPartOutputFile_t const * this_
    , Imf_Header_t const * * return_
    , int n);
#define Imf_MultiPartOutputFile_header Imf_3_0__MultiPartOutputFile_header


unsigned int Imf_3_0__MultiPartOutputFile_dtor(
    Imf_MultiPartOutputFile_t * this_);
#define Imf_MultiPartOutputFile_dtor Imf_3_0__MultiPartOutputFile_dtor


#ifdef __cplusplus
}
#endif

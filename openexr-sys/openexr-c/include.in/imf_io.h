#pragma once
#include "openexr-api-export.h"

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__OStream_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__OStream_t;
typedef Imf_3_0__OStream_t Imf_OStream_t;

typedef struct Imf_3_0__IStream_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__IStream_t;
typedef Imf_3_0__IStream_t Imf_IStream_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__OStream_dtor(
    Imf_OStream_t * this_);
#define Imf_OStream_dtor Imf_3_0__OStream_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__OStream_write(
    Imf_OStream_t * this_
    , char const * c
    , int n);
#define Imf_OStream_write Imf_3_0__OStream_write


OPENEXR_CPPMM_API unsigned int Imf_3_0__OStream_tellp(
    Imf_OStream_t * this_
    , uint64_t * return_);
#define Imf_OStream_tellp Imf_3_0__OStream_tellp


OPENEXR_CPPMM_API unsigned int Imf_3_0__OStream_seekp(
    Imf_OStream_t * this_
    , uint64_t pos);
#define Imf_OStream_seekp Imf_3_0__OStream_seekp


OPENEXR_CPPMM_API unsigned int Imf_3_0__OStream_fileName(
    Imf_OStream_t const * this_
    , char const * * return_);
#define Imf_OStream_fileName Imf_3_0__OStream_fileName


OPENEXR_CPPMM_API unsigned int Imf_3_0__IStream_dtor(
    Imf_IStream_t * this_);
#define Imf_IStream_dtor Imf_3_0__IStream_dtor


OPENEXR_CPPMM_API unsigned int Imf_3_0__IStream_isMemoryMapped(
    Imf_IStream_t const * this_
    , _Bool * return_);
#define Imf_IStream_isMemoryMapped Imf_3_0__IStream_isMemoryMapped


OPENEXR_CPPMM_API unsigned int Imf_3_0__IStream_read(
    Imf_IStream_t * this_
    , _Bool * return_
    , char * c
    , int n);
#define Imf_IStream_read Imf_3_0__IStream_read


OPENEXR_CPPMM_API unsigned int Imf_3_0__IStream_readMemoryMapped(
    Imf_IStream_t * this_
    , char * * return_
    , int n);
#define Imf_IStream_readMemoryMapped Imf_3_0__IStream_readMemoryMapped


OPENEXR_CPPMM_API unsigned int Imf_3_0__IStream_tellg(
    Imf_IStream_t * this_
    , uint64_t * return_);
#define Imf_IStream_tellg Imf_3_0__IStream_tellg


OPENEXR_CPPMM_API unsigned int Imf_3_0__IStream_seekg(
    Imf_IStream_t * this_
    , uint64_t pos);
#define Imf_IStream_seekg Imf_3_0__IStream_seekg


OPENEXR_CPPMM_API unsigned int Imf_3_0__IStream_clear(
    Imf_IStream_t * this_);
#define Imf_IStream_clear Imf_3_0__IStream_clear


OPENEXR_CPPMM_API unsigned int Imf_3_0__IStream_fileName(
    Imf_IStream_t const * this_
    , char const * * return_);
#define Imf_IStream_fileName Imf_3_0__IStream_fileName


#ifdef __cplusplus
}
#endif

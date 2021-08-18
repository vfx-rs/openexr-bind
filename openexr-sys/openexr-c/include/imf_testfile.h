#pragma once
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__IStream_t_s Imf_3_0__IStream_t;
typedef Imf_3_0__IStream_t Imf_IStream_t;

unsigned int Imf_3_0_isOpenExrFile(
    _Bool * return_
    , char const * fileName
    , _Bool * isTiled
    , _Bool * isDeep
    , _Bool * isMultiPart);
#define Imf_isOpenExrFile Imf_3_0_isOpenExrFile


unsigned int Imf_3_0_isTiledOpenExrFile(
    _Bool * return_
    , char const * fileName);
#define Imf_isTiledOpenExrFile Imf_3_0_isTiledOpenExrFile


unsigned int Imf_3_0_isDeepOpenExrFile(
    _Bool * return_
    , char const * fileName);
#define Imf_isDeepOpenExrFile Imf_3_0_isDeepOpenExrFile


unsigned int Imf_3_0_isMultiPartOpenExrFile(
    _Bool * return_
    , char const * fileName);
#define Imf_isMultiPartOpenExrFile Imf_3_0_isMultiPartOpenExrFile


unsigned int Imf_3_0_stream_is_openexr_file(
    _Bool * return_
    , Imf_IStream_t * is
    , _Bool * isTiled
    , _Bool * isDeep
    , _Bool * isMultiPart);
#define Imf_stream_is_openexr_file Imf_3_0_stream_is_openexr_file


unsigned int Imf_3_0_stream_is_tiled_openexr_file(
    _Bool * return_
    , Imf_IStream_t * is);
#define Imf_stream_is_tiled_openexr_file Imf_3_0_stream_is_tiled_openexr_file


unsigned int Imf_3_0_stream_is_deep_openexr_file(
    _Bool * return_
    , Imf_IStream_t * is);
#define Imf_stream_is_deep_openexr_file Imf_3_0_stream_is_deep_openexr_file


unsigned int Imf_3_0_stream_is_multi_part_openexr_file(
    _Bool * return_
    , Imf_IStream_t * is);
#define Imf_stream_is_multi_part_openexr_file Imf_3_0_stream_is_multi_part_openexr_file


#ifdef __cplusplus
}
#endif

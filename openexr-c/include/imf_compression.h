#pragma once

#ifdef __cplusplus
extern "C" {
#endif

enum Imf_3_0__Compression_e {
    Imf_Compression_NO_COMPRESSION = 0,
    Imf_Compression_RLE_COMPRESSION = 1,
    Imf_Compression_ZIPS_COMPRESSION = 2,
    Imf_Compression_ZIP_COMPRESSION = 3,
    Imf_Compression_PIZ_COMPRESSION = 4,
    Imf_Compression_PXR24_COMPRESSION = 5,
    Imf_Compression_B44_COMPRESSION = 6,
    Imf_Compression_B44A_COMPRESSION = 7,
    Imf_Compression_DWAA_COMPRESSION = 8,
    Imf_Compression_DWAB_COMPRESSION = 9,
    Imf_Compression_NUM_COMPRESSION_METHODS = 10,
};
typedef unsigned int Imf_Compression;

#ifdef __cplusplus
}
#endif

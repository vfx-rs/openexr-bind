#pragma once
#include "openexr-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

enum Imf_3_0__LevelMode_e {
    Imf_LevelMode_ONE_LEVEL = 0,
    Imf_LevelMode_MIPMAP_LEVELS = 1,
    Imf_LevelMode_RIPMAP_LEVELS = 2,
    Imf_LevelMode_NUM_LEVELMODES = 3,
};
typedef unsigned int Imf_LevelMode;
enum Imf_3_0__LevelRoundingMode_e {
    Imf_LevelRoundingMode_ROUND_DOWN = 0,
    Imf_LevelRoundingMode_ROUND_UP = 1,
    Imf_LevelRoundingMode_NUM_ROUNDINGMODES = 2,
};
typedef unsigned int Imf_LevelRoundingMode;

typedef struct Imf_3_0__TileDescription_t_s {
    unsigned int xSize;
    unsigned int ySize;
    Imf_LevelMode mode;
    Imf_LevelRoundingMode roundingMode;
} OPENEXR_CPPMM_ALIGN(4) Imf_3_0__TileDescription_t;
typedef Imf_3_0__TileDescription_t Imf_TileDescription_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__TileDescription_ctor(
    Imf_TileDescription_t * this_
    , unsigned int xs
    , unsigned int ys
    , Imf_LevelMode m
    , Imf_LevelRoundingMode r);
#define Imf_TileDescription_ctor Imf_3_0__TileDescription_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__TileDescription__eq(
    Imf_TileDescription_t const * this_
    , _Bool * return_
    , Imf_TileDescription_t const * other);
#define Imf_TileDescription__eq Imf_3_0__TileDescription__eq


#ifdef __cplusplus
}
#endif

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

enum Imf_3_0__LineOrder_e {
    Imf_LineOrder_INCREASING_Y = 0,
    Imf_LineOrder_DECREASING_Y = 1,
    Imf_LineOrder_RANDOM_Y = 2,
    Imf_LineOrder_NUM_LINEORDERS = 3,
};
typedef unsigned int Imf_LineOrder;

#ifdef __cplusplus
}
#endif

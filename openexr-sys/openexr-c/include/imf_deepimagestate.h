#pragma once

#ifdef __cplusplus
extern "C" {
#endif

enum Imf_3_0__DeepImageState_e {
    Imf_DeepImageState_DIS_MESSY = 0,
    Imf_DeepImageState_DIS_SORTED = 1,
    Imf_DeepImageState_DIS_NON_OVERLAPPING = 2,
    Imf_DeepImageState_DIS_TIDY = 3,
    Imf_DeepImageState_DIS_NUMSTATES = 4,
};
typedef unsigned int Imf_DeepImageState;

#ifdef __cplusplus
}
#endif

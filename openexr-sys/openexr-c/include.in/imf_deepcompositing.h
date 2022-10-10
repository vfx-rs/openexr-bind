#pragma once
#include "openexr-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct Imf_3_0__DeepCompositing_t_s {
    char _unused;
} OPENEXR_CPPMM_ALIGN(8) Imf_3_0__DeepCompositing_t;
typedef Imf_3_0__DeepCompositing_t Imf_DeepCompositing_t;


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepCompositing_ctor(
    Imf_DeepCompositing_t * * this_);
#define Imf_DeepCompositing_ctor Imf_3_0__DeepCompositing_ctor


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepCompositing_dtor(
    Imf_DeepCompositing_t * this_);
#define Imf_DeepCompositing_dtor Imf_3_0__DeepCompositing_dtor


/** ///////////////////////////////////////////

 composite together the given channels
 
  @param outputs       - return array of pixel values - 
  @param inputs        - arrays of input sample
  @param channel_names - array of channel names for corresponding channels
  @param num_channels  - number of active channels (3 or greater)    
  @param num_samples   - number of values in all input arrays
  @param sources       - number of different sources

 each array input has num_channels entries: outputs[n] should be the composited
 values in array inputs[n], whose name will be given by channel_names[n]
 
 The channel ordering shall be as follows:
 Position Channel
    0     Z
    1     ZBack (if no ZBack, then inputs[1]==inputs[0] and channel_names[1]==channel_names[0])
    2     A (alpha channel)
    3-n   other channels - only channels in the frame buffer will appear here

 since a Z and Alpha channel is required, and channel[1] is ZBack or another copy of Z
 there will always be 3 or more channels.

 The default implementation calls sort() if and only if more than one source is active,
 composites all samples together using the Over operator from front to back,
 stopping as soon as a sample with alpha=1 is found
 It also blanks all outputs if num_samples==0

 note - multiple threads may call composite_pixel simultaneously for different pixels


/////////////////////////////////////////// */
OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepCompositing_composite_pixel(
    Imf_DeepCompositing_t * this_
    , float * outputs
    , float const * * inputs
    , char const * * channel_names
    , int num_channels
    , int num_samples
    , int sources);
#define Imf_DeepCompositing_composite_pixel Imf_3_0__DeepCompositing_composite_pixel


/** /////////////////////////////////////////////////////////////

 find the depth order for samples with given channel values
 does not sort the values in-place. Instead it populates
 array 'order' with the desired sorting order

 the default operation sorts samples from front to back according to their Z channel

 @param order         - required output order. order[n] shall be the nth closest sample
 @param inputs        - arrays of input samples, one array per channel_name
 @param channel_names - array of channel names for corresponding channels
 @param num_channels  - number of channels (3 or greater)  
 @param num_samples   - number of samples in each array
 @param sources       - number of different sources the data arises from

 the channel layout is identical to composite_pixel() 

//////////////////////////////////////////////////////////// */
OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepCompositing_sort(
    Imf_DeepCompositing_t * this_
    , int * order
    , float const * * inputs
    , char const * * channel_names
    , int num_channels
    , int num_samples
    , int sources);
#define Imf_DeepCompositing_sort Imf_3_0__DeepCompositing_sort


OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepCompositing__assign(
    Imf_DeepCompositing_t * this_
    , Imf_DeepCompositing_t * * return_
    , Imf_DeepCompositing_t const * rhs);
#define Imf_DeepCompositing__assign Imf_3_0__DeepCompositing__assign


#ifdef __cplusplus
}
#endif

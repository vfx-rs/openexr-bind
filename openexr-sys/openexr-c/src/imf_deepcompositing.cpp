#include "imf_deepcompositing_private.h"

#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepCompositing_ctor(
    Imf_DeepCompositing_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::DeepCompositing());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepCompositing_dtor(
    Imf_DeepCompositing_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepCompositing_composite_pixel(
    Imf_DeepCompositing_t * this_
    , float * outputs
    , float const * * inputs
    , char const * * channel_names
    , int num_channels
    , int num_samples
    , int sources)
{
    try {
        (to_cpp(this_)) -> composite_pixel(outputs, inputs, channel_names, num_channels, num_samples, sources);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepCompositing_sort(
    Imf_DeepCompositing_t * this_
    , int * order
    , float const * * inputs
    , char const * * channel_names
    , int num_channels
    , int num_samples
    , int sources)
{
    try {
        (to_cpp(this_)) -> sort(order, inputs, channel_names, num_channels, num_samples, sources);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepCompositing__assign(
    Imf_DeepCompositing_t * this_
    , Imf_DeepCompositing_t * * return_
    , Imf_DeepCompositing_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


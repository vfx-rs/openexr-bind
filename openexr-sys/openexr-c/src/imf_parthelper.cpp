#include "imf_parthelper_private.h"

#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiViewChannelName_copy(
    Imf_MultiViewChannelName_t * * this_
    , Imf_MultiViewChannelName_t const * rhs)
{
    try {
        to_c(this_, new Imf_3_0::MultiViewChannelName(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiViewChannelName_move(
    Imf_MultiViewChannelName_t * * this_
    , Imf_MultiViewChannelName_t * rhs)
{
    try {
        to_c(this_, new Imf_3_0::MultiViewChannelName(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiViewChannelName_dtor(
    Imf_MultiViewChannelName_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiViewChannelName_ctor(
    Imf_MultiViewChannelName_t * * this_)
{
        to_c(this_, new Imf_3_0::MultiViewChannelName());
        return 0;
}


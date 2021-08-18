#include "imf_threading_private.h"


#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0_globalThreadCount(
    int * return_)
{
    try {
        *(return_) = Imf_3_0::globalThreadCount();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_setGlobalThreadCount(
    int count)
{
    try {
        Imf_3_0::setGlobalThreadCount(count);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


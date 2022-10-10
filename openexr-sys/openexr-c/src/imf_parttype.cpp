#include "imf_parttype_private.h"

#include "std_string_private.h"

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0_part_isImage(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = Imf_3_0::isImage(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_part_isTiled(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = Imf_3_0::isTiled(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_part_isDeepData(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = Imf_3_0::isDeepData(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_part_isSupportedType(
    _Bool * return_
    , std_string_t const * name)
{
    try {
        *(return_) = Imf_3_0::isSupportedType(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


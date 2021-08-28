#include "imf_version_private.h"


#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0_isTiled(
    _Bool * return_
    , int version)
{
    try {
        *(return_) = Imf_3_0::isTiled(version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_isMultiPart(
    _Bool * return_
    , int version)
{
    try {
        *(return_) = Imf_3_0::isMultiPart(version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_isNonImage(
    _Bool * return_
    , int version)
{
    try {
        *(return_) = Imf_3_0::isNonImage(version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_makeTiled(
    int * return_
    , int version)
{
    try {
        *(return_) = Imf_3_0::makeTiled(version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_makeNotTiled(
    int * return_
    , int version)
{
    try {
        *(return_) = Imf_3_0::makeNotTiled(version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_getVersion(
    int * return_
    , int version)
{
    try {
        *(return_) = Imf_3_0::getVersion(version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_getFlags(
    int * return_
    , int version)
{
    try {
        *(return_) = Imf_3_0::getFlags(version);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_supportsFlags(
    _Bool * return_
    , int flags)
{
    try {
        *(return_) = Imf_3_0::supportsFlags(flags);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_isImfMagic(
    _Bool * return_
    , char const bytes[4])
{
    try {
        *(return_) = Imf_3_0::isImfMagic(bytes);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


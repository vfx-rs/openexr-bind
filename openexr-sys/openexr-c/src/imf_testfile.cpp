#include "imf_testfile_private.h"

#include "imf_io_private.h"

#include <stdexcept>

unsigned int Imf_3_0_isOpenExrFile(
    _Bool * return_
    , char const * fileName
    , _Bool * isTiled
    , _Bool * isDeep
    , _Bool * isMultiPart)
{
    try {
        *(return_) = Imf_3_0::isOpenExrFile(fileName, *(isTiled), *(isDeep), *(isMultiPart));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_isTiledOpenExrFile(
    _Bool * return_
    , char const * fileName)
{
    try {
        *(return_) = Imf_3_0::isTiledOpenExrFile(fileName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_isDeepOpenExrFile(
    _Bool * return_
    , char const * fileName)
{
    try {
        *(return_) = Imf_3_0::isDeepOpenExrFile(fileName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_isMultiPartOpenExrFile(
    _Bool * return_
    , char const * fileName)
{
    try {
        *(return_) = Imf_3_0::isMultiPartOpenExrFile(fileName);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_stream_is_openexr_file(
    _Bool * return_
    , Imf_IStream_t * is
    , _Bool * isTiled
    , _Bool * isDeep
    , _Bool * isMultiPart)
{
    try {
        *(return_) = Imf_3_0::isOpenExrFile(to_cpp_ref(is), *(isTiled), *(isDeep), *(isMultiPart));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_stream_is_tiled_openexr_file(
    _Bool * return_
    , Imf_IStream_t * is)
{
    try {
        *(return_) = Imf_3_0::isTiledOpenExrFile(to_cpp_ref(is));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_stream_is_deep_openexr_file(
    _Bool * return_
    , Imf_IStream_t * is)
{
    try {
        *(return_) = Imf_3_0::isDeepOpenExrFile(to_cpp_ref(is));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_stream_is_multi_part_openexr_file(
    _Bool * return_
    , Imf_IStream_t * is)
{
    try {
        *(return_) = Imf_3_0::isMultiPartOpenExrFile(to_cpp_ref(is));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


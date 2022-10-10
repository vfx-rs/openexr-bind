#include "imf_multipartinputfile_private.h"

#include "imf_header_private.h"
#include "imf_io_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiPartInputFile_ctor(
    Imf_MultiPartInputFile_t * * this_
    , char const * fileName
    , int numThreads
    , _Bool reconstructChunkOffsetTable)
{
    try {
        to_c(this_, new Imf_3_0::MultiPartInputFile(fileName, numThreads, reconstructChunkOffsetTable));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiPartInputFile_from_stream(
    Imf_MultiPartInputFile_t * * this_
    , Imf_IStream_t * is
    , int numThreads
    , _Bool reconstructChunkOffsetTable)
{
    try {
        to_c(this_, new Imf_3_0::MultiPartInputFile(to_cpp_ref(is), numThreads, reconstructChunkOffsetTable));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiPartInputFile_dtor(
    Imf_MultiPartInputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiPartInputFile_parts(
    Imf_MultiPartInputFile_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> parts();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiPartInputFile_header(
    Imf_MultiPartInputFile_t const * this_
    , Imf_Header_t const * * return_
    , int n)
{
    try {
        to_c(return_, (to_cpp(this_)) -> header(n));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiPartInputFile_version(
    Imf_MultiPartInputFile_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> version();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiPartInputFile_partComplete(
    Imf_MultiPartInputFile_t const * this_
    , _Bool * return_
    , int part)
{
    try {
        *(return_) = (to_cpp(this_)) -> partComplete(part);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__MultiPartInputFile_flushPartCache(
    Imf_MultiPartInputFile_t * this_)
{
    try {
        (to_cpp(this_)) -> flushPartCache();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


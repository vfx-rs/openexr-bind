#include "imf_multipartoutputfile_private.h"

#include "imf_header_private.h"
#include "imf_io_private.h"
#include <new>

#include <stdexcept>

unsigned int Imf_3_0__MultiPartOutputFile_ctor(
    Imf_MultiPartOutputFile_t * * this_
    , char const * fileName
    , Imf_Header_t const * headers
    , int parts
    , _Bool overrideSharedAttributes
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::MultiPartOutputFile(fileName, to_cpp(headers), parts, overrideSharedAttributes, numThreads));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__MultiPartOutputFile_from_stream(
    Imf_MultiPartOutputFile_t * * this_
    , Imf_OStream_t * os
    , Imf_Header_t const * headers
    , int parts
    , _Bool overrideSharedAttributes
    , int numThreads)
{
    try {
        to_c(this_, new Imf_3_0::MultiPartOutputFile(to_cpp_ref(os), to_cpp(headers), parts, overrideSharedAttributes, numThreads));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__MultiPartOutputFile_parts(
    Imf_MultiPartOutputFile_t const * this_
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

unsigned int Imf_3_0__MultiPartOutputFile_header(
    Imf_MultiPartOutputFile_t const * this_
    , Imf_Header_t const * * return_
    , int n)
{
    try {
        to_c(return_, (to_cpp(this_)) -> header(n));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__MultiPartOutputFile_dtor(
    Imf_MultiPartOutputFile_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


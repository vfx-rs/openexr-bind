#include "imf_io_private.h"


#include <stdexcept>

unsigned int Imf_3_0__OStream_dtor(
    Imf_OStream_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__OStream_write(
    Imf_OStream_t * this_
    , char const * c
    , int n)
{
    try {
        (to_cpp(this_)) -> write(c, n);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__OStream_tellp(
    Imf_OStream_t * this_
    , unsigned long * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> tellp();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__OStream_seekp(
    Imf_OStream_t * this_
    , unsigned long pos)
{
    try {
        (to_cpp(this_)) -> seekp(pos);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__OStream_fileName(
    Imf_OStream_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> fileName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__IStream_dtor(
    Imf_IStream_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__IStream_isMemoryMapped(
    Imf_IStream_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> isMemoryMapped();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__IStream_read(
    Imf_IStream_t * this_
    , _Bool * return_
    , char * c
    , int n)
{
    try {
        *(return_) = (to_cpp(this_)) -> read(c, n);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__IStream_readMemoryMapped(
    Imf_IStream_t * this_
    , char * * return_
    , int n)
{
    try {
        *(return_) = (to_cpp(this_)) -> readMemoryMapped(n);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__IStream_tellg(
    Imf_IStream_t * this_
    , unsigned long * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> tellg();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__IStream_seekg(
    Imf_IStream_t * this_
    , unsigned long pos)
{
    try {
        (to_cpp(this_)) -> seekg(pos);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__IStream_clear(
    Imf_IStream_t * this_)
{
    try {
        (to_cpp(this_)) -> clear();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__IStream_fileName(
    Imf_IStream_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> fileName();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


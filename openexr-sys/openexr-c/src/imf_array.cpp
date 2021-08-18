#include "imf_array_private.h"

#include <new>

#include <stdexcept>

unsigned int Imf_3_0__Array_float__new(
    Imf_ArrayFloat_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::Array<float>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_float__with_size(
    Imf_ArrayFloat_t * * this_
    , long size)
{
    try {
        to_c(this_, new Imf_3_0::Array<float>(size));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_float__delete(
    Imf_ArrayFloat_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_float__as_ptr(
    Imf_ArrayFloat_t * this_
    , float * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator float *();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_float__as_const_ptr(
    Imf_ArrayFloat_t const * this_
    , float const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator const float *();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_float__resizeErase(
    Imf_ArrayFloat_t * this_
    , long size)
{
    try {
        (to_cpp(this_)) -> resizeErase(size);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_float__resizeEraseUnsafe(
    Imf_ArrayFloat_t * this_
    , long size)
{
    try {
        (to_cpp(this_)) -> resizeEraseUnsafe(size);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_float__size(
    Imf_ArrayFloat_t const * this_
    , long * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_char__new(
    Imf_ArrayChar_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::Array<char>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_char__with_size(
    Imf_ArrayChar_t * * this_
    , long size)
{
    try {
        to_c(this_, new Imf_3_0::Array<char>(size));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_char__delete(
    Imf_ArrayChar_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_char__as_ptr(
    Imf_ArrayChar_t * this_
    , char * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator char *();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_char__as_const_ptr(
    Imf_ArrayChar_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator const char *();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_char__resizeErase(
    Imf_ArrayChar_t * this_
    , long size)
{
    try {
        (to_cpp(this_)) -> resizeErase(size);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_char__resizeEraseUnsafe(
    Imf_ArrayChar_t * this_
    , long size)
{
    try {
        (to_cpp(this_)) -> resizeEraseUnsafe(size);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array_char__size(
    Imf_ArrayChar_t const * this_
    , long * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array2D_float__new(
    Imf_Array2DFloat_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::Array2D<float>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array2D_float__with_size(
    Imf_Array2DFloat_t * * this_
    , long sizeX
    , long sizeY)
{
    try {
        to_c(this_, new Imf_3_0::Array2D<float>(sizeX, sizeY));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array2D_float__delete(
    Imf_Array2DFloat_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array2D_float__row(
    Imf_Array2DFloat_t * this_
    , float * * return_
    , long x)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator[](x);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array2D_float__const_row(
    Imf_Array2DFloat_t const * this_
    , float const * * return_
    , long x)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator[](x);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array2D_float__resizeErase(
    Imf_Array2DFloat_t * this_
    , long sizeX
    , long sizeY)
{
    try {
        (to_cpp(this_)) -> resizeErase(sizeX, sizeY);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array2D_float__resizeEraseUnsafe(
    Imf_Array2DFloat_t * this_
    , long sizeX
    , long sizeY)
{
    try {
        (to_cpp(this_)) -> resizeEraseUnsafe(sizeX, sizeY);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array2D_float__height(
    Imf_Array2DFloat_t const * this_
    , long * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> height();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Array2D_float__width(
    Imf_Array2DFloat_t const * this_
    , long * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> width();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


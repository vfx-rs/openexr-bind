#include "imf_previewimage_private.h"

#include <new>

#include <stdexcept>

unsigned int Imf_3_0__PreviewRgba_ctor(
    Imf_PreviewRgba_t * this_
    , unsigned char r
    , unsigned char g
    , unsigned char b
    , unsigned char a)
{
    try {
        new (this_) Imf_3_0::PreviewRgba(r, g, b, a);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__PreviewImage_ctor(
    Imf_PreviewImage_t * * this_
    , unsigned int width
    , unsigned int height
    , Imf_PreviewRgba_t const * pixels)
{
    try {
        to_c(this_, new Imf_3_0::PreviewImage(width, height, to_cpp(pixels)));
        return 0;
    } catch (Iex::OverflowExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 7;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__PreviewImage_copy(
    Imf_PreviewImage_t * * this_
    , Imf_PreviewImage_t const * other)
{
    try {
        to_c(this_, new Imf_3_0::PreviewImage(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__PreviewImage_dtor(
    Imf_PreviewImage_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__PreviewImage__assign(
    Imf_PreviewImage_t * this_
    , Imf_PreviewImage_t * * return_
    , Imf_PreviewImage_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__PreviewImage_width(
    Imf_PreviewImage_t const * this_
    , unsigned int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> width();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__PreviewImage_height(
    Imf_PreviewImage_t const * this_
    , unsigned int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> height();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__PreviewImage_pixels(
    Imf_PreviewImage_t * this_
    , Imf_PreviewRgba_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> pixels());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__PreviewImage_pixels_const(
    Imf_PreviewImage_t const * this_
    , Imf_PreviewRgba_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> pixels());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__PreviewImage_pixel(
    Imf_PreviewImage_t * this_
    , Imf_PreviewRgba_t * * return_
    , unsigned int x
    , unsigned int y)
{
    try {
        to_c(return_, (to_cpp(this_)) -> pixel(x, y));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__PreviewImage_pixel_const(
    Imf_PreviewImage_t const * this_
    , Imf_PreviewRgba_t const * * return_
    , unsigned int x
    , unsigned int y)
{
    try {
        to_c(return_, (to_cpp(this_)) -> pixel(x, y));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


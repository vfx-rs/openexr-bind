#include "imf_lut_private.h"

#include "c-half_private.h"
#include "imath_box_private.h"
#include "imf_framebuffer_private.h"
#include "imf_rgba_private.h"

#include <stdexcept>

unsigned int Imf_3_0__HalfLut_apply(
    Imf_HalfLut_t const * this_
    , Imath_half_t * data
    , int nData
    , int stride)
{
    try {
        (to_cpp(this_)) -> apply(to_cpp(data), nData, stride);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__HalfLut_apply_1(
    Imf_HalfLut_t const * this_
    , Imf_Slice_t const * data
    , Imath_Box2i_t const * dataWindow)
{
    try {
        (to_cpp(this_)) -> apply(to_cpp_ref(data), to_cpp_ref(dataWindow));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__HalfLut_dtor(
    Imf_HalfLut_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaLut_apply(
    Imf_RgbaLut_t const * this_
    , Imf_Rgba_t * data
    , int nData
    , int stride)
{
    try {
        (to_cpp(this_)) -> apply(to_cpp(data), nData, stride);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaLut_apply_1(
    Imf_RgbaLut_t const * this_
    , Imf_Rgba_t * base
    , int xStride
    , int yStride
    , Imath_Box2i_t const * dataWindow)
{
    try {
        (to_cpp(this_)) -> apply(to_cpp(base), xStride, yStride, to_cpp_ref(dataWindow));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__RgbaLut_dtor(
    Imf_RgbaLut_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


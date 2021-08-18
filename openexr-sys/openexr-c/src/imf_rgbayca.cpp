#include "imf_rgbayca_private.h"

#include "imath_vec_private.h"
#include "imf_chromaticities_private.h"
#include "imf_rgba_private.h"

#include <stdexcept>

unsigned int Imf_3_0_RgbaYca_computeYw(
    Imath_V3f_t * return_
    , Imf_Chromaticities_t const * cr)
{
    try {
        to_c_copy(return_, Imf_3_0::RgbaYca::computeYw(to_cpp_ref(cr)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_RgbaYca_RGBAtoYCA(
    Imath_V3f_t const * yw
    , int n
    , _Bool aIsValid
    , Imf_Rgba_t const * rgbaIn
    , Imf_Rgba_t * ycaOut)
{
    try {
        Imf_3_0::RgbaYca::RGBAtoYCA(to_cpp_ref(yw), n, aIsValid, to_cpp(rgbaIn), to_cpp(ycaOut));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_RgbaYca_decimateChromaHoriz(
    int n
    , Imf_Rgba_t const * ycaIn
    , Imf_Rgba_t * ycaOut)
{
    try {
        Imf_3_0::RgbaYca::decimateChromaHoriz(n, to_cpp(ycaIn), to_cpp(ycaOut));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_RgbaYca_roundYCA(
    int n
    , unsigned int roundY
    , unsigned int roundC
    , Imf_Rgba_t const * ycaIn
    , Imf_Rgba_t * ycaOut)
{
    try {
        Imf_3_0::RgbaYca::roundYCA(n, roundY, roundC, to_cpp(ycaIn), to_cpp(ycaOut));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_RgbaYca_reconstructChromaHoriz(
    int n
    , Imf_Rgba_t const * ycaIn
    , Imf_Rgba_t * ycaOut)
{
    try {
        Imf_3_0::RgbaYca::reconstructChromaHoriz(n, to_cpp(ycaIn), to_cpp(ycaOut));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_RgbaYca_YCAtoRGBA(
    Imath_V3f_t const * yw
    , int n
    , Imf_Rgba_t const * ycaIn
    , Imf_Rgba_t * rgbaOut)
{
    try {
        Imf_3_0::RgbaYca::YCAtoRGBA(to_cpp_ref(yw), n, to_cpp(ycaIn), to_cpp(rgbaOut));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


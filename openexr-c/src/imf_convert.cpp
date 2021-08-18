#include "imf_convert_private.h"

#include "c-half_private.h"

#include <stdexcept>

unsigned int Imf_3_0_halfToUint(
    unsigned int * return_
    , Imath_half_t h)
{
    try {
        *(return_) = Imf_3_0::halfToUint(to_cpp_ref(&(h)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_floatToUint(
    unsigned int * return_
    , float f)
{
    try {
        *(return_) = Imf_3_0::floatToUint(f);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_uintToHalf(
    Imath_half_t * return_
    , unsigned int ui)
{
    try {
        to_c_copy(return_, Imf_3_0::uintToHalf(ui));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_floatToHalf(
    Imath_half_t * return_
    , float f)
{
    try {
        to_c_copy(return_, Imf_3_0::floatToHalf(f));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


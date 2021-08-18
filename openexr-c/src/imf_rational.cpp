#include "imf_rational_private.h"

#include <new>

#include <stdexcept>

unsigned int Imf_3_0__Rational_default(
    Imf_Rational_t * this_)
{
    try {
        new (this_) Imf_3_0::Rational();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Rational_ctor(
    Imf_Rational_t * this_
    , int n
    , int d)
{
    try {
        new (this_) Imf_3_0::Rational(n, d);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Rational_from_f64(
    Imf_Rational_t * this_
    , double x)
{
    try {
        new (this_) Imf_3_0::Rational(x);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Rational_as_f64(
    Imf_Rational_t const * this_
    , double * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator double();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


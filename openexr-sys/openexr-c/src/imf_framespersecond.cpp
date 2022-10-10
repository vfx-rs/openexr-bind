#include "imf_framespersecond_private.h"

#include "imf_rational_private.h"

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_23_976(
    Imf_Rational_t * return_)
{
    try {
        to_c_copy(return_, Imf_3_0::fps_23_976());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_24(
    Imf_Rational_t * return_)
{
    try {
        to_c_copy(return_, Imf_3_0::fps_24());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_25(
    Imf_Rational_t * return_)
{
    try {
        to_c_copy(return_, Imf_3_0::fps_25());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_29_97(
    Imf_Rational_t * return_)
{
    try {
        to_c_copy(return_, Imf_3_0::fps_29_97());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_30(
    Imf_Rational_t * return_)
{
    try {
        to_c_copy(return_, Imf_3_0::fps_30());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_47_952(
    Imf_Rational_t * return_)
{
    try {
        to_c_copy(return_, Imf_3_0::fps_47_952());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_48(
    Imf_Rational_t * return_)
{
    try {
        to_c_copy(return_, Imf_3_0::fps_48());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_50(
    Imf_Rational_t * return_)
{
    try {
        to_c_copy(return_, Imf_3_0::fps_50());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_59_94(
    Imf_Rational_t * return_)
{
    try {
        to_c_copy(return_, Imf_3_0::fps_59_94());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_fps_60(
    Imf_Rational_t * return_)
{
    try {
        to_c_copy(return_, Imf_3_0::fps_60());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_guessExactFps_f64(
    Imf_Rational_t * return_
    , double fps)
{
    try {
        to_c_copy(return_, Imf_3_0::guessExactFps(fps));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_guessExactFps(
    Imf_Rational_t * return_
    , Imf_Rational_t const * fps)
{
    try {
        to_c_copy(return_, Imf_3_0::guessExactFps(to_cpp_ref(fps)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


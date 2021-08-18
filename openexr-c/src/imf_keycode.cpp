#include "imf_keycode_private.h"

#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_sizeof()
{
        return sizeof(Imf_3_0::KeyCode);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_alignof()
{
        return alignof(Imf_3_0::KeyCode);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_ctor(
    Imf_KeyCode_t * this_
    , int filmMfcCode
    , int filmType
    , int prefix
    , int count
    , int perfOffset
    , int perfsPerFrame
    , int perfsPerCount)
{
    try {
        new (this_) Imf_3_0::KeyCode(filmMfcCode, filmType, prefix, count, perfOffset, perfsPerFrame, perfsPerCount);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_copy(
    Imf_KeyCode_t * this_
    , Imf_KeyCode_t const * other)
{
    try {
        new (this_) Imf_3_0::KeyCode(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_dtor(
    Imf_KeyCode_t * this_)
{
    try {
        (to_cpp(this_)) -> Imf_3_0::KeyCode::~KeyCode();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode__assign(
    Imf_KeyCode_t * this_
    , Imf_KeyCode_t * * return_
    , Imf_KeyCode_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_filmMfcCode(
    Imf_KeyCode_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> filmMfcCode();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setFilmMfcCode(
    Imf_KeyCode_t * this_
    , int filmMfcCode)
{
    try {
        (to_cpp(this_)) -> setFilmMfcCode(filmMfcCode);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_filmType(
    Imf_KeyCode_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> filmType();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setFilmType(
    Imf_KeyCode_t * this_
    , int filmType)
{
    try {
        (to_cpp(this_)) -> setFilmType(filmType);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_prefix(
    Imf_KeyCode_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> prefix();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setPrefix(
    Imf_KeyCode_t * this_
    , int prefix)
{
    try {
        (to_cpp(this_)) -> setPrefix(prefix);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_count(
    Imf_KeyCode_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> count();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setCount(
    Imf_KeyCode_t * this_
    , int count)
{
    try {
        (to_cpp(this_)) -> setCount(count);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_perfOffset(
    Imf_KeyCode_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> perfOffset();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setPerfOffset(
    Imf_KeyCode_t * this_
    , int perfOffset)
{
    try {
        (to_cpp(this_)) -> setPerfOffset(perfOffset);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_perfsPerFrame(
    Imf_KeyCode_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> perfsPerFrame();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setPerfsPerFrame(
    Imf_KeyCode_t * this_
    , int perfsPerFrame_)
{
    try {
        (to_cpp(this_)) -> setPerfsPerFrame(perfsPerFrame_);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_perfsPerCount(
    Imf_KeyCode_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> perfsPerCount();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__KeyCode_setPerfsPerCount(
    Imf_KeyCode_t * this_
    , int perfsPerCount)
{
    try {
        (to_cpp(this_)) -> setPerfsPerCount(perfsPerCount);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


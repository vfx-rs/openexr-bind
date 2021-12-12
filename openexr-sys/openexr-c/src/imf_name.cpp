#include "imf_name_private.h"

#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_sizeof()
{
        return sizeof(Imf_3_0::Name);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_alignof()
{
        return alignof(Imf_3_0::Name);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_default(
    Imf_Name_t * this_)
{
    try {
        new (this_) Imf_3_0::Name();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_ctor(
    Imf_Name_t * this_
    , char const * text)
{
    try {
        new (this_) Imf_3_0::Name(text);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_copy(
    Imf_Name_t * this_
    , Imf_Name_t const * rhs)
{
    try {
        new (this_) Imf_3_0::Name(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_move(
    Imf_Name_t * this_
    , Imf_Name_t * rhs)
{
    try {
        new (this_) Imf_3_0::Name(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_dtor(
    Imf_Name_t * this_)
{
    try {
        (to_cpp(this_)) -> Imf_3_0::Name::~Name();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Name__assign(
    Imf_Name_t * this_
    , Imf_Name_t * * return_
    , Imf_Name_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Name__assign_1(
    Imf_Name_t * this_
    , Imf_Name_t * * return_
    , char const * text)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(text));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__Name_text(
    Imf_Name_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> text();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


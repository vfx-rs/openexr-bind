#include "std_vector_private.h"

#include "std_string_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int std__vector_std__string__ctor(
    std_vector_string_t * * this_)
{
    try {
        to_c(this_, new std::vector<std::string>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int std__vector_std__string__dtor(
    std_vector_string_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__vector_std__string__size(
    std_vector_string_t const * this_
    , unsigned long * return_)
{
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__vector_std__string__index(
    std_vector_string_t const * this_
    , std_string_t const * * return_
    , unsigned long pos)
{
        to_c(return_, (to_cpp(this_)) -> operator[](pos));
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__vector_std__string__data(
    std_vector_string_t * this_
    , std_string_t * * return_)
{
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__vector_std__string__data_const(
    std_vector_string_t const * this_
    , std_string_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> data());
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__vector_std__string__push_back(
    std_vector_string_t * this_
    , std_string_t const * value)
{
    try {
        (to_cpp(this_)) -> push_back(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int std__vector_float__ctor(
    std_vector_float_t * * this_)
{
    try {
        to_c(this_, new std::vector<float>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int std__vector_float__dtor(
    std_vector_float_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__vector_float__size(
    std_vector_float_t const * this_
    , unsigned long * return_)
{
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__vector_float__index(
    std_vector_float_t const * this_
    , float const * * return_
    , unsigned long pos)
{
        *(return_) = &((to_cpp(this_)) -> operator[](pos));
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__vector_float__data(
    std_vector_float_t * this_
    , float * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__vector_float__data_const(
    std_vector_float_t const * this_
    , float const * * return_)
{
        *(return_) = (to_cpp(this_)) -> data();
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__vector_float__push_back(
    std_vector_float_t * this_
    , float const * value)
{
    try {
        (to_cpp(this_)) -> push_back(*(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


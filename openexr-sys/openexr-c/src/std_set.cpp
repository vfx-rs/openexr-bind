#include "std_set_private.h"

#include "std_string_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int std__set_std__string__ctor(
    std_set_string_t * * this_)
{
    try {
        to_c(this_, new std::set<std::string>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int std__set_std__string__dtor(
    std_set_string_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int std__set_std__string__cbegin(
    std_set_string_t const * this_
    , std_set_string_iterator_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> cbegin());
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__set_std__string__cend(
    std_set_string_t const * this_
    , std_set_string_iterator_t * return_)
{
        to_c_copy(return_, (to_cpp(this_)) -> cend());
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__set_std__string__size(
    std_set_string_t const * this_
    , size_t * return_)
{
        *(return_) = (to_cpp(this_)) -> size();
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__set_std__string___const_iterator_sizeof()
{
        return sizeof(std::set<std::string>::const_iterator);
}

OPENEXR_CPPMM_API unsigned int std__set_std__string___const_iterator_alignof()
{
        return alignof(std::set<std::string>::const_iterator);
}

OPENEXR_CPPMM_API unsigned int std__set_std__string___const_iterator_deref(
    std_set_string_iterator_t const * this_
    , std_string_t const * * return_)
{
        to_c(return_, (to_cpp(this_)) -> operator*());
        return 0;
}

OPENEXR_CPPMM_API unsigned int std__set_std__string___const_iterator_inc(
    std_set_string_iterator_t * this_
    , std_set_string_iterator_t * * return_)
{
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
}

OPENEXR_CPPMM_API unsigned int std_set_string_const_iterator_eq(
    _Bool * return_
    , std_set_string_iterator_t const * __x
    , std_set_string_iterator_t const * __y)
{
        *(return_) = (to_cpp_ref(__x) == to_cpp_ref(__y));
        return 0;
}


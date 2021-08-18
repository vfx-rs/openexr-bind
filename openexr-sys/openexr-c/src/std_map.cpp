#include "std_map_private.h"

#include <new>

#include <stdexcept>

unsigned int std__map_std__string_std__string__ctor(
    std_map_string_string_t * * this_)
{
    try {
        to_c(this_, new std::map<std::string, std::string>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int std__map_std__string_std__string__dtor(
    std_map_string_string_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


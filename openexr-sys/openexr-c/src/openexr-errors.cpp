#include "openexr-errors.h"
#include "openexr-errors-private.h"

thread_local std::string TLG_EXCEPTION_STRING;

OPENEXR_CPPMM_API const char* openexr_get_exception_string() {
    return TLG_EXCEPTION_STRING.c_str();
}


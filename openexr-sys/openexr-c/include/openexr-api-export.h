#pragma once

// Stolen this setup from OIIO
#if defined(_WIN32) || defined(__CYGWIN__)
#    ifdef OPENEXR_STATIC_DEFINE
#        define OPENEXR_CPPMM_IMPORT
#        define OPENEXR_CPPMM_EXPORT
#    else
#        define OPENEXR_CPPMM_IMPORT __declspec(dllimport)
#        define OPENEXR_CPPMM_EXPORT __declspec(dllexport)
#    endif
#    define OPENEXR_LOCAL
#else
#    define OPENEXR_CPPMM_IMPORT __attribute__((visibility("default")))
#    define OPENEXR_CPPMM_EXPORT __attribute__((visibility("default")))
#    define OPENEXR_CPPMM_LOCAL __attribute__((visibility("hidden")))
#endif

#if defined(OPENEXR_CPPMM_BUILD_EXPORT)
#    define OPENEXR_CPPMM_API OPENEXR_CPPMM_EXPORT
#else
#    define OPENEXR_CPPMM_API OPENEXR_CPPMM_IMPORT
#endif

// Alignment
#if defined(_WIN32) || defined(__CYGWIN__)
    #define OPENEXR_CPPMM_ALIGN(x) __declspec(align(x))
#else
    #define OPENEXR_CPPMM_ALIGN(x) __attribute__((aligned(x)))
#endif



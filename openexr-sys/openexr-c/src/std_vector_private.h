#pragma once
#include <std_vector.h>


#include "openexr-errors-private.h"

#include <cstring>
#include <string>
#include <vector>

inline std::vector<std::string> const & to_cpp_ref(
    std_vector_string_t const * rhs)
{
        return *(reinterpret_cast<std::vector<std::string> const * >(rhs));
}

inline std::vector<std::string> & to_cpp_ref(
    std_vector_string_t * rhs)
{
        return *(reinterpret_cast<std::vector<std::string> * >(rhs));
}

inline std::vector<std::string> const * to_cpp(
    std_vector_string_t const * rhs)
{
        return reinterpret_cast<std::vector<std::string> const * >(rhs);
}

inline std::vector<std::string> * to_cpp(
    std_vector_string_t * rhs)
{
        return reinterpret_cast<std::vector<std::string> * >(rhs);
}

inline void to_c(
    std_vector_string_t const * * lhs
    , std::vector<std::string> const & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_string_t const * >(&(rhs));
}

inline void to_c(
    std_vector_string_t const * * lhs
    , std::vector<std::string> const * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_string_t const * >(rhs);
}

inline void to_c(
    std_vector_string_t * * lhs
    , std::vector<std::string> & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_string_t * >(&(rhs));
}

inline void to_c(
    std_vector_string_t * * lhs
    , std::vector<std::string> * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_string_t * >(rhs);
}

inline void to_c_move(
    std_vector_string_t * lhs
    , std::vector<std::string> rhs)
{
        new (lhs) std::vector<std::string>(std::move(rhs));
}

inline std::vector<float> const & to_cpp_ref(
    std_vector_float_t const * rhs)
{
        return *(reinterpret_cast<std::vector<float> const * >(rhs));
}

inline std::vector<float> & to_cpp_ref(
    std_vector_float_t * rhs)
{
        return *(reinterpret_cast<std::vector<float> * >(rhs));
}

inline std::vector<float> const * to_cpp(
    std_vector_float_t const * rhs)
{
        return reinterpret_cast<std::vector<float> const * >(rhs);
}

inline std::vector<float> * to_cpp(
    std_vector_float_t * rhs)
{
        return reinterpret_cast<std::vector<float> * >(rhs);
}

inline void to_c(
    std_vector_float_t const * * lhs
    , std::vector<float> const & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_float_t const * >(&(rhs));
}

inline void to_c(
    std_vector_float_t const * * lhs
    , std::vector<float> const * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_float_t const * >(rhs);
}

inline void to_c(
    std_vector_float_t * * lhs
    , std::vector<float> & rhs)
{
        *(lhs) = reinterpret_cast<std_vector_float_t * >(&(rhs));
}

inline void to_c(
    std_vector_float_t * * lhs
    , std::vector<float> * rhs)
{
        *(lhs) = reinterpret_cast<std_vector_float_t * >(rhs);
}

inline void to_c_move(
    std_vector_float_t * lhs
    , std::vector<float> rhs)
{
        new (lhs) std::vector<float>(std::move(rhs));
}


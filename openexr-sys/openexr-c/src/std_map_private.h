#pragma once
#include <std_map.h>


#include "openexr-errors-private.h"

#include <cstring>
#include <map>
#include <string>

inline std::map<std::string, std::string> const & to_cpp_ref(
    std_map_string_string_t const * rhs)
{
        return *(reinterpret_cast<std::map<std::string, std::string> const * >(rhs));
}

inline std::map<std::string, std::string> & to_cpp_ref(
    std_map_string_string_t * rhs)
{
        return *(reinterpret_cast<std::map<std::string, std::string> * >(rhs));
}

inline std::map<std::string, std::string> const * to_cpp(
    std_map_string_string_t const * rhs)
{
        return reinterpret_cast<std::map<std::string, std::string> const * >(rhs);
}

inline std::map<std::string, std::string> * to_cpp(
    std_map_string_string_t * rhs)
{
        return reinterpret_cast<std::map<std::string, std::string> * >(rhs);
}

inline void to_c(
    std_map_string_string_t const * * lhs
    , std::map<std::string, std::string> const & rhs)
{
        *(lhs) = reinterpret_cast<std_map_string_string_t const * >(&(rhs));
}

inline void to_c(
    std_map_string_string_t const * * lhs
    , std::map<std::string, std::string> const * rhs)
{
        *(lhs) = reinterpret_cast<std_map_string_string_t const * >(rhs);
}

inline void to_c(
    std_map_string_string_t * * lhs
    , std::map<std::string, std::string> & rhs)
{
        *(lhs) = reinterpret_cast<std_map_string_string_t * >(&(rhs));
}

inline void to_c(
    std_map_string_string_t * * lhs
    , std::map<std::string, std::string> * rhs)
{
        *(lhs) = reinterpret_cast<std_map_string_string_t * >(rhs);
}

inline void to_c_move(
    std_map_string_string_t * lhs
    , std::map<std::string, std::string> rhs)
{
        new (lhs) std::map<std::string, std::string>(std::move(rhs));
}


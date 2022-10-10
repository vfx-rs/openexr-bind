#pragma once
#include <imf_inputfile.h>


#include "openexr-errors-private.h"

#include <OpenEXR/ImfInputFile.h>
#include <cstring>

inline Imf_3_0::InputFile const & to_cpp_ref(
    Imf_InputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::InputFile const * >(rhs));
}

inline Imf_3_0::InputFile & to_cpp_ref(
    Imf_InputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::InputFile * >(rhs));
}

inline Imf_3_0::InputFile const * to_cpp(
    Imf_InputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::InputFile const * >(rhs);
}

inline Imf_3_0::InputFile * to_cpp(
    Imf_InputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::InputFile * >(rhs);
}

inline void to_c(
    Imf_InputFile_t const * * lhs
    , Imf_3_0::InputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_InputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_InputFile_t const * * lhs
    , Imf_3_0::InputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_InputFile_t const * >(rhs);
}

inline void to_c(
    Imf_InputFile_t * * lhs
    , Imf_3_0::InputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_InputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_InputFile_t * * lhs
    , Imf_3_0::InputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_InputFile_t * >(rhs);
}

inline Imf_3_0::GenericInputFile const & to_cpp_ref(
    Imf_GenericInputFile_t const * rhs)
{
        return *(reinterpret_cast<Imf_3_0::GenericInputFile const * >(rhs));
}

inline Imf_3_0::GenericInputFile & to_cpp_ref(
    Imf_GenericInputFile_t * rhs)
{
        return *(reinterpret_cast<Imf_3_0::GenericInputFile * >(rhs));
}

inline Imf_3_0::GenericInputFile const * to_cpp(
    Imf_GenericInputFile_t const * rhs)
{
        return reinterpret_cast<Imf_3_0::GenericInputFile const * >(rhs);
}

inline Imf_3_0::GenericInputFile * to_cpp(
    Imf_GenericInputFile_t * rhs)
{
        return reinterpret_cast<Imf_3_0::GenericInputFile * >(rhs);
}

inline void to_c(
    Imf_GenericInputFile_t const * * lhs
    , Imf_3_0::GenericInputFile const & rhs)
{
        *(lhs) = reinterpret_cast<Imf_GenericInputFile_t const * >(&(rhs));
}

inline void to_c(
    Imf_GenericInputFile_t const * * lhs
    , Imf_3_0::GenericInputFile const * rhs)
{
        *(lhs) = reinterpret_cast<Imf_GenericInputFile_t const * >(rhs);
}

inline void to_c(
    Imf_GenericInputFile_t * * lhs
    , Imf_3_0::GenericInputFile & rhs)
{
        *(lhs) = reinterpret_cast<Imf_GenericInputFile_t * >(&(rhs));
}

inline void to_c(
    Imf_GenericInputFile_t * * lhs
    , Imf_3_0::GenericInputFile * rhs)
{
        *(lhs) = reinterpret_cast<Imf_GenericInputFile_t * >(rhs);
}

inline void to_c_copy(
    Imf_GenericInputFile_t * * lhs
    , Imf_3_0::GenericInputFile const & rhs)
{
        Imf_3_0__GenericInputFile_copy(lhs, reinterpret_cast<Imf_GenericInputFile_t const * >(&(rhs)));
}


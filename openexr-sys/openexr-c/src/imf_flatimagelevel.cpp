#include "imf_flatimagelevel_private.h"

#include "imath_box_private.h"
#include "imf_flatimage_private.h"
#include "imf_flatimagechannel_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

unsigned int Imf_3_0__FlatImageLevel_xLevelNumber(
    Imf_FlatImageLevel_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> xLevelNumber();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_yLevelNumber(
    Imf_FlatImageLevel_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> yLevelNumber();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_dataWindow(
    Imf_FlatImageLevel_t const * this_
    , Imath_Box2i_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> dataWindow());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_flatImage(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatImage_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> flatImage());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_flatImage_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatImage_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> flatImage());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_findChannel(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatImageChannel_t * * return_
    , std_string_t const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findChannel(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_findChannel_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatImageChannel_t const * * return_
    , std_string_t const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findChannel(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_channel(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatImageChannel_t * * return_
    , std_string_t const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> channel(to_cpp_ref(name)));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_channel_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatImageChannel_t const * * return_
    , std_string_t const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> channel(to_cpp_ref(name)));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_findTypedChannel_half(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatHalfChannel_t * * return_
    , std_string_t const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedChannel<Imath_3_0::half>(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_findTypedChannel_float(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatFloatChannel_t * * return_
    , std_string_t const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedChannel<float>(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_findTypedChannel_uint(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatUIntChannel_t * * return_
    , std_string_t const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedChannel<unsigned int>(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_findTypedChannel_half_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatHalfChannel_t const * * return_
    , std_string_t const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedChannel<Imath_3_0::half>(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_findTypedChannel_float_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatFloatChannel_t const * * return_
    , std_string_t const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedChannel<float>(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_findTypedChannel_uint_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatUIntChannel_t const * * return_
    , std_string_t const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findTypedChannel<unsigned int>(to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_begin(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatImageLevel_Iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_begin_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatImageLevel_ConstIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_end(
    Imf_FlatImageLevel_t * this_
    , Imf_FlatImageLevel_Iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel_end_const(
    Imf_FlatImageLevel_t const * this_
    , Imf_FlatImageLevel_ConstIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel__Iterator_sizeof()
{
        return sizeof(Imf_3_0::FlatImageLevel::Iterator);
}

unsigned int Imf_3_0__FlatImageLevel__Iterator_alignof()
{
        return alignof(Imf_3_0::FlatImageLevel::Iterator);
}

unsigned int Imf_3_0__FlatImageLevel__Iterator_ctor(
    Imf_FlatImageLevel_Iterator_t * this_)
{
    try {
        new (this_) Imf_3_0::FlatImageLevel::Iterator();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel__Iterator_inc(
    Imf_FlatImageLevel_Iterator_t * this_
    , Imf_FlatImageLevel_Iterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel__Iterator_name(
    Imf_FlatImageLevel_Iterator_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> name());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel__Iterator_channel(
    Imf_FlatImageLevel_Iterator_t const * this_
    , Imf_FlatImageChannel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> channel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel__Iterator_copy(
    Imf_FlatImageLevel_Iterator_t * this_
    , Imf_FlatImageLevel_Iterator_t const * rhs)
{
        new (this_) Imf_3_0::FlatImageLevel::Iterator(to_cpp_ref(rhs));
        return 0;
}

unsigned int Imf_3_0__FlatImageLevel__ConstIterator_sizeof()
{
        return sizeof(Imf_3_0::FlatImageLevel::ConstIterator);
}

unsigned int Imf_3_0__FlatImageLevel__ConstIterator_alignof()
{
        return alignof(Imf_3_0::FlatImageLevel::ConstIterator);
}

unsigned int Imf_3_0__FlatImageLevel__ConstIterator_ctor(
    Imf_FlatImageLevel_ConstIterator_t * this_)
{
    try {
        new (this_) Imf_3_0::FlatImageLevel::ConstIterator();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel__ConstIterator_from_mut(
    Imf_FlatImageLevel_ConstIterator_t * this_
    , Imf_FlatImageLevel_Iterator_t const * rhs)
{
    try {
        new (this_) Imf_3_0::FlatImageLevel::ConstIterator(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel__ConstIterator_inc(
    Imf_FlatImageLevel_ConstIterator_t * this_
    , Imf_FlatImageLevel_ConstIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel__ConstIterator_name(
    Imf_FlatImageLevel_ConstIterator_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> name());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel__ConstIterator_channel(
    Imf_FlatImageLevel_ConstIterator_t const * this_
    , Imf_FlatImageChannel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> channel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FlatImageLevel__ConstIterator_copy(
    Imf_FlatImageLevel_ConstIterator_t * this_
    , Imf_FlatImageLevel_ConstIterator_t const * rhs)
{
        new (this_) Imf_3_0::FlatImageLevel::ConstIterator(to_cpp_ref(rhs));
        return 0;
}

unsigned int Imf_3_0__FlatImageLevel__ConstIterator_move(
    Imf_FlatImageLevel_ConstIterator_t * this_
    , Imf_FlatImageLevel_ConstIterator_t * rhs)
{
        new (this_) Imf_3_0::FlatImageLevel::ConstIterator(to_cpp_ref(rhs));
        return 0;
}


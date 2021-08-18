#include "imf_deepimagelevel_private.h"

#include "imath_box_private.h"
#include "imf_deepimage_private.h"
#include "imf_deepimagechannel_private.h"
#include "imf_image_private.h"
#include "imf_samplecountchannel_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

unsigned int Imf_3_0__DeepImageLevel_image(
    Imf_DeepImageLevel_t * this_
    , Imf_Image_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> image());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel_image_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_Image_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> image());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel_xLevelNumber(
    Imf_DeepImageLevel_t const * this_
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

unsigned int Imf_3_0__DeepImageLevel_yLevelNumber(
    Imf_DeepImageLevel_t const * this_
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

unsigned int Imf_3_0__DeepImageLevel_dataWindow(
    Imf_DeepImageLevel_t const * this_
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

unsigned int Imf_3_0__DeepImageLevel_deepImage(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepImage_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> deepImage());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel_deepImage_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepImage_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> deepImage());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel_findChannel(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepImageChannel_t * * return_
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

unsigned int Imf_3_0__DeepImageLevel_findChannel_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepImageChannel_t const * * return_
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

unsigned int Imf_3_0__DeepImageLevel_channel(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepImageChannel_t * * return_
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

unsigned int Imf_3_0__DeepImageLevel_channel_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepImageChannel_t const * * return_
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

unsigned int Imf_3_0__DeepImageLevel_findTypedChannel_half(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepHalfChannel_t * * return_
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

unsigned int Imf_3_0__DeepImageLevel_findTypedChannel_float(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepFloatChannel_t * * return_
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

unsigned int Imf_3_0__DeepImageLevel_findTypedChannel_uint(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepUIntChannel_t * * return_
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

unsigned int Imf_3_0__DeepImageLevel_findTypedChannel_half_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepHalfChannel_t const * * return_
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

unsigned int Imf_3_0__DeepImageLevel_findTypedChannel_float_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepFloatChannel_t const * * return_
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

unsigned int Imf_3_0__DeepImageLevel_findTypedChannel_uint_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepUIntChannel_t const * * return_
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

unsigned int Imf_3_0__DeepImageLevel_begin(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepImageLevel_Iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel_begin_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepImageLevel_ConstIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel_end(
    Imf_DeepImageLevel_t * this_
    , Imf_DeepImageLevel_Iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel_end_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_DeepImageLevel_ConstIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel_sampleCounts(
    Imf_DeepImageLevel_t * this_
    , Imf_SampleCountChannel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> sampleCounts());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel_sampleCounts_const(
    Imf_DeepImageLevel_t const * this_
    , Imf_SampleCountChannel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> sampleCounts());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel__Iterator_sizeof()
{
        return sizeof(Imf_3_0::DeepImageLevel::Iterator);
}

unsigned int Imf_3_0__DeepImageLevel__Iterator_alignof()
{
        return alignof(Imf_3_0::DeepImageLevel::Iterator);
}

unsigned int Imf_3_0__DeepImageLevel__Iterator_ctor(
    Imf_DeepImageLevel_Iterator_t * this_)
{
    try {
        new (this_) Imf_3_0::DeepImageLevel::Iterator();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel__Iterator_inc(
    Imf_DeepImageLevel_Iterator_t * this_
    , Imf_DeepImageLevel_Iterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel__Iterator_name(
    Imf_DeepImageLevel_Iterator_t const * this_
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

unsigned int Imf_3_0__DeepImageLevel__Iterator_channel(
    Imf_DeepImageLevel_Iterator_t const * this_
    , Imf_DeepImageChannel_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> channel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel__Iterator_copy(
    Imf_DeepImageLevel_Iterator_t * this_
    , Imf_DeepImageLevel_Iterator_t const * rhs)
{
        new (this_) Imf_3_0::DeepImageLevel::Iterator(to_cpp_ref(rhs));
        return 0;
}

unsigned int Imf_3_0__DeepImageLevel__Iterator_move(
    Imf_DeepImageLevel_Iterator_t * this_
    , Imf_DeepImageLevel_Iterator_t * rhs)
{
        new (this_) Imf_3_0::DeepImageLevel::Iterator(to_cpp_ref(rhs));
        return 0;
}

unsigned int Imf_3_0__DeepImageLevel__ConstIterator_sizeof()
{
        return sizeof(Imf_3_0::DeepImageLevel::ConstIterator);
}

unsigned int Imf_3_0__DeepImageLevel__ConstIterator_alignof()
{
        return alignof(Imf_3_0::DeepImageLevel::ConstIterator);
}

unsigned int Imf_3_0__DeepImageLevel__ConstIterator_ctor(
    Imf_DeepImageLevel_ConstIterator_t * this_)
{
    try {
        new (this_) Imf_3_0::DeepImageLevel::ConstIterator();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel__ConstIterator_from_mut(
    Imf_DeepImageLevel_ConstIterator_t * this_
    , Imf_DeepImageLevel_Iterator_t const * rhs)
{
    try {
        new (this_) Imf_3_0::DeepImageLevel::ConstIterator(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel__ConstIterator_inc(
    Imf_DeepImageLevel_ConstIterator_t * this_
    , Imf_DeepImageLevel_ConstIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel__ConstIterator_name(
    Imf_DeepImageLevel_ConstIterator_t const * this_
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

unsigned int Imf_3_0__DeepImageLevel__ConstIterator_channel(
    Imf_DeepImageLevel_ConstIterator_t const * this_
    , Imf_DeepImageChannel_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> channel());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__DeepImageLevel__ConstIterator_copy(
    Imf_DeepImageLevel_ConstIterator_t * this_
    , Imf_DeepImageLevel_ConstIterator_t const * rhs)
{
        new (this_) Imf_3_0::DeepImageLevel::ConstIterator(to_cpp_ref(rhs));
        return 0;
}

unsigned int Imf_3_0__DeepImageLevel__ConstIterator_move(
    Imf_DeepImageLevel_ConstIterator_t * this_
    , Imf_DeepImageLevel_ConstIterator_t * rhs)
{
        new (this_) Imf_3_0::DeepImageLevel::ConstIterator(to_cpp_ref(rhs));
        return 0;
}


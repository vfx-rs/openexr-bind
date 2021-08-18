#include "imf_timecode_private.h"

#include <new>

#include <stdexcept>

unsigned int Imf_3_0__TimeCode_sizeof()
{
        return sizeof(Imf_3_0::TimeCode);
}

unsigned int Imf_3_0__TimeCode_alignof()
{
        return alignof(Imf_3_0::TimeCode);
}

unsigned int Imf_3_0__TimeCode_default(
    Imf_TimeCode_t * this_)
{
    try {
        new (this_) Imf_3_0::TimeCode();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_ctor(
    Imf_TimeCode_t * this_
    , int hours
    , int minutes
    , int seconds
    , int frame
    , _Bool dropFrame
    , _Bool colorFrame
    , _Bool fieldPhase
    , _Bool bgf0
    , _Bool bgf1
    , _Bool bgf2
    , int binaryGroup1
    , int binaryGroup2
    , int binaryGroup3
    , int binaryGroup4
    , int binaryGroup5
    , int binaryGroup6
    , int binaryGroup7
    , int binaryGroup8)
{
    try {
        new (this_) Imf_3_0::TimeCode(hours, minutes, seconds, frame, dropFrame, colorFrame, fieldPhase, bgf0, bgf1, bgf2, binaryGroup1, binaryGroup2, binaryGroup3, binaryGroup4, binaryGroup5, binaryGroup6, binaryGroup7, binaryGroup8);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_from_time_and_flags(
    Imf_TimeCode_t * this_
    , unsigned int timeAndFlags
    , unsigned int userData
    , Imf_TimeCode_Packing packing)
{
    try {
        new (this_) Imf_3_0::TimeCode(timeAndFlags, userData, Imf_TimeCode_Packing_to_cpp_ref(&(packing)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_copy(
    Imf_TimeCode_t * this_
    , Imf_TimeCode_t const * other)
{
    try {
        new (this_) Imf_3_0::TimeCode(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_dtor(
    Imf_TimeCode_t * this_)
{
    try {
        (to_cpp(this_)) -> Imf_3_0::TimeCode::~TimeCode();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode__assign(
    Imf_TimeCode_t * this_
    , Imf_TimeCode_t * * return_
    , Imf_TimeCode_t const * other)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_hours(
    Imf_TimeCode_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> hours();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_setHours(
    Imf_TimeCode_t * this_
    , int value)
{
    try {
        (to_cpp(this_)) -> setHours(value);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_minutes(
    Imf_TimeCode_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> minutes();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_setMinutes(
    Imf_TimeCode_t * this_
    , int value)
{
    try {
        (to_cpp(this_)) -> setMinutes(value);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_seconds(
    Imf_TimeCode_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> seconds();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_setSeconds(
    Imf_TimeCode_t * this_
    , int value)
{
    try {
        (to_cpp(this_)) -> setSeconds(value);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_frame(
    Imf_TimeCode_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> frame();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_setFrame(
    Imf_TimeCode_t * this_
    , int value)
{
    try {
        (to_cpp(this_)) -> setFrame(value);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_dropFrame(
    Imf_TimeCode_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> dropFrame();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_setDropFrame(
    Imf_TimeCode_t * this_
    , _Bool value)
{
    try {
        (to_cpp(this_)) -> setDropFrame(value);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_colorFrame(
    Imf_TimeCode_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> colorFrame();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_setColorFrame(
    Imf_TimeCode_t * this_
    , _Bool value)
{
    try {
        (to_cpp(this_)) -> setColorFrame(value);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_fieldPhase(
    Imf_TimeCode_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> fieldPhase();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_setFieldPhase(
    Imf_TimeCode_t * this_
    , _Bool value)
{
    try {
        (to_cpp(this_)) -> setFieldPhase(value);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_bgf0(
    Imf_TimeCode_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> bgf0();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_setBgf0(
    Imf_TimeCode_t * this_
    , _Bool value)
{
    try {
        (to_cpp(this_)) -> setBgf0(value);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_bgf1(
    Imf_TimeCode_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> bgf1();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_setBgf1(
    Imf_TimeCode_t * this_
    , _Bool value)
{
    try {
        (to_cpp(this_)) -> setBgf1(value);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_bgf2(
    Imf_TimeCode_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> bgf2();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_setBgf2(
    Imf_TimeCode_t * this_
    , _Bool value)
{
    try {
        (to_cpp(this_)) -> setBgf2(value);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_binaryGroup(
    Imf_TimeCode_t const * this_
    , int * return_
    , int group)
{
    try {
        *(return_) = (to_cpp(this_)) -> binaryGroup(group);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_setBinaryGroup(
    Imf_TimeCode_t * this_
    , int group
    , int value)
{
    try {
        (to_cpp(this_)) -> setBinaryGroup(group, value);
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_timeAndFlags(
    Imf_TimeCode_t const * this_
    , unsigned int * return_
    , Imf_TimeCode_Packing packing)
{
    try {
        *(return_) = (to_cpp(this_)) -> timeAndFlags(Imf_TimeCode_Packing_to_cpp_ref(&(packing)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_setTimeAndFlags(
    Imf_TimeCode_t * this_
    , unsigned int value
    , Imf_TimeCode_Packing packing)
{
    try {
        (to_cpp(this_)) -> setTimeAndFlags(value, Imf_TimeCode_Packing_to_cpp_ref(&(packing)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_userData(
    Imf_TimeCode_t const * this_
    , unsigned int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> userData();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode_setUserData(
    Imf_TimeCode_t * this_
    , unsigned int value)
{
    try {
        (to_cpp(this_)) -> setUserData(value);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode__eq(
    Imf_TimeCode_t const * this_
    , _Bool * return_
    , Imf_TimeCode_t const * v)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__TimeCode__ne(
    Imf_TimeCode_t const * this_
    , _Bool * return_
    , Imf_TimeCode_t const * v)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(v));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


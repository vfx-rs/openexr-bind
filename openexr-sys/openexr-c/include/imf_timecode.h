#pragma once
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

enum Imf_3_0__TimeCode__Packing_e {
    Imf_TimeCode_Packing_TV60_PACKING = 0,
    Imf_TimeCode_Packing_TV50_PACKING = 1,
    Imf_TimeCode_Packing_FILM24_PACKING = 2,
};
typedef unsigned int Imf_TimeCode_Packing;

typedef struct Imf_3_0__TimeCode_t_s {
    char data[8];
} __attribute__((aligned(4))) Imf_3_0__TimeCode_t;
typedef Imf_3_0__TimeCode_t Imf_TimeCode_t;


/** returns the size of this type in bytes */
unsigned int Imf_3_0__TimeCode_sizeof();
#define Imf_TimeCode_sizeof Imf_3_0__TimeCode_sizeof


/** returns the size of this type in bytes */
unsigned int Imf_3_0__TimeCode_alignof();
#define Imf_TimeCode_alignof Imf_3_0__TimeCode_alignof


unsigned int Imf_3_0__TimeCode_default(
    Imf_TimeCode_t * this_);
#define Imf_TimeCode_default Imf_3_0__TimeCode_default


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
    , int binaryGroup8);
#define Imf_TimeCode_ctor Imf_3_0__TimeCode_ctor


unsigned int Imf_3_0__TimeCode_from_time_and_flags(
    Imf_TimeCode_t * this_
    , unsigned int timeAndFlags
    , unsigned int userData
    , Imf_TimeCode_Packing packing);
#define Imf_TimeCode_from_time_and_flags Imf_3_0__TimeCode_from_time_and_flags


unsigned int Imf_3_0__TimeCode_copy(
    Imf_TimeCode_t * this_
    , Imf_TimeCode_t const * other);
#define Imf_TimeCode_copy Imf_3_0__TimeCode_copy


unsigned int Imf_3_0__TimeCode_dtor(
    Imf_TimeCode_t * this_);
#define Imf_TimeCode_dtor Imf_3_0__TimeCode_dtor


unsigned int Imf_3_0__TimeCode__assign(
    Imf_TimeCode_t * this_
    , Imf_TimeCode_t * * return_
    , Imf_TimeCode_t const * other);
#define Imf_TimeCode__assign Imf_3_0__TimeCode__assign


unsigned int Imf_3_0__TimeCode_hours(
    Imf_TimeCode_t const * this_
    , int * return_);
#define Imf_TimeCode_hours Imf_3_0__TimeCode_hours


unsigned int Imf_3_0__TimeCode_setHours(
    Imf_TimeCode_t * this_
    , int value);
#define Imf_TimeCode_setHours Imf_3_0__TimeCode_setHours


unsigned int Imf_3_0__TimeCode_minutes(
    Imf_TimeCode_t const * this_
    , int * return_);
#define Imf_TimeCode_minutes Imf_3_0__TimeCode_minutes


unsigned int Imf_3_0__TimeCode_setMinutes(
    Imf_TimeCode_t * this_
    , int value);
#define Imf_TimeCode_setMinutes Imf_3_0__TimeCode_setMinutes


unsigned int Imf_3_0__TimeCode_seconds(
    Imf_TimeCode_t const * this_
    , int * return_);
#define Imf_TimeCode_seconds Imf_3_0__TimeCode_seconds


unsigned int Imf_3_0__TimeCode_setSeconds(
    Imf_TimeCode_t * this_
    , int value);
#define Imf_TimeCode_setSeconds Imf_3_0__TimeCode_setSeconds


unsigned int Imf_3_0__TimeCode_frame(
    Imf_TimeCode_t const * this_
    , int * return_);
#define Imf_TimeCode_frame Imf_3_0__TimeCode_frame


unsigned int Imf_3_0__TimeCode_setFrame(
    Imf_TimeCode_t * this_
    , int value);
#define Imf_TimeCode_setFrame Imf_3_0__TimeCode_setFrame


unsigned int Imf_3_0__TimeCode_dropFrame(
    Imf_TimeCode_t const * this_
    , _Bool * return_);
#define Imf_TimeCode_dropFrame Imf_3_0__TimeCode_dropFrame


unsigned int Imf_3_0__TimeCode_setDropFrame(
    Imf_TimeCode_t * this_
    , _Bool value);
#define Imf_TimeCode_setDropFrame Imf_3_0__TimeCode_setDropFrame


unsigned int Imf_3_0__TimeCode_colorFrame(
    Imf_TimeCode_t const * this_
    , _Bool * return_);
#define Imf_TimeCode_colorFrame Imf_3_0__TimeCode_colorFrame


unsigned int Imf_3_0__TimeCode_setColorFrame(
    Imf_TimeCode_t * this_
    , _Bool value);
#define Imf_TimeCode_setColorFrame Imf_3_0__TimeCode_setColorFrame


unsigned int Imf_3_0__TimeCode_fieldPhase(
    Imf_TimeCode_t const * this_
    , _Bool * return_);
#define Imf_TimeCode_fieldPhase Imf_3_0__TimeCode_fieldPhase


unsigned int Imf_3_0__TimeCode_setFieldPhase(
    Imf_TimeCode_t * this_
    , _Bool value);
#define Imf_TimeCode_setFieldPhase Imf_3_0__TimeCode_setFieldPhase


unsigned int Imf_3_0__TimeCode_bgf0(
    Imf_TimeCode_t const * this_
    , _Bool * return_);
#define Imf_TimeCode_bgf0 Imf_3_0__TimeCode_bgf0


unsigned int Imf_3_0__TimeCode_setBgf0(
    Imf_TimeCode_t * this_
    , _Bool value);
#define Imf_TimeCode_setBgf0 Imf_3_0__TimeCode_setBgf0


unsigned int Imf_3_0__TimeCode_bgf1(
    Imf_TimeCode_t const * this_
    , _Bool * return_);
#define Imf_TimeCode_bgf1 Imf_3_0__TimeCode_bgf1


unsigned int Imf_3_0__TimeCode_setBgf1(
    Imf_TimeCode_t * this_
    , _Bool value);
#define Imf_TimeCode_setBgf1 Imf_3_0__TimeCode_setBgf1


unsigned int Imf_3_0__TimeCode_bgf2(
    Imf_TimeCode_t const * this_
    , _Bool * return_);
#define Imf_TimeCode_bgf2 Imf_3_0__TimeCode_bgf2


unsigned int Imf_3_0__TimeCode_setBgf2(
    Imf_TimeCode_t * this_
    , _Bool value);
#define Imf_TimeCode_setBgf2 Imf_3_0__TimeCode_setBgf2


unsigned int Imf_3_0__TimeCode_binaryGroup(
    Imf_TimeCode_t const * this_
    , int * return_
    , int group);
#define Imf_TimeCode_binaryGroup Imf_3_0__TimeCode_binaryGroup


unsigned int Imf_3_0__TimeCode_setBinaryGroup(
    Imf_TimeCode_t * this_
    , int group
    , int value);
#define Imf_TimeCode_setBinaryGroup Imf_3_0__TimeCode_setBinaryGroup


unsigned int Imf_3_0__TimeCode_timeAndFlags(
    Imf_TimeCode_t const * this_
    , unsigned int * return_
    , Imf_TimeCode_Packing packing);
#define Imf_TimeCode_timeAndFlags Imf_3_0__TimeCode_timeAndFlags


unsigned int Imf_3_0__TimeCode_setTimeAndFlags(
    Imf_TimeCode_t * this_
    , unsigned int value
    , Imf_TimeCode_Packing packing);
#define Imf_TimeCode_setTimeAndFlags Imf_3_0__TimeCode_setTimeAndFlags


unsigned int Imf_3_0__TimeCode_userData(
    Imf_TimeCode_t const * this_
    , unsigned int * return_);
#define Imf_TimeCode_userData Imf_3_0__TimeCode_userData


unsigned int Imf_3_0__TimeCode_setUserData(
    Imf_TimeCode_t * this_
    , unsigned int value);
#define Imf_TimeCode_setUserData Imf_3_0__TimeCode_setUserData


unsigned int Imf_3_0__TimeCode__eq(
    Imf_TimeCode_t const * this_
    , _Bool * return_
    , Imf_TimeCode_t const * v);
#define Imf_TimeCode__eq Imf_3_0__TimeCode__eq


unsigned int Imf_3_0__TimeCode__ne(
    Imf_TimeCode_t const * this_
    , _Bool * return_
    , Imf_TimeCode_t const * v);
#define Imf_TimeCode__ne Imf_3_0__TimeCode__ne


#ifdef __cplusplus
}
#endif

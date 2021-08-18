#pragma once
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

typedef struct std__set_std__string__t_s {
    char _unused;
} __attribute__((aligned(8))) std__set_std__string__t;
typedef std__set_std__string__t std_set_string_t;

typedef struct std__set_std__string___const_iterator_t_s {
    char data[8];
} __attribute__((aligned(8))) std__set_std__string___const_iterator_t;
typedef std__set_std__string___const_iterator_t std_set_string_iterator_t;


unsigned int std__set_std__string__ctor(
    std_set_string_t * * this_);
#define std_set_string_ctor std__set_std__string__ctor


unsigned int std__set_std__string__dtor(
    std_set_string_t * this_);
#define std_set_string_dtor std__set_std__string__dtor


unsigned int std__set_std__string__cbegin(
    std_set_string_t const * this_
    , std_set_string_iterator_t * return_);
#define std_set_string_cbegin std__set_std__string__cbegin


unsigned int std__set_std__string__cend(
    std_set_string_t const * this_
    , std_set_string_iterator_t * return_);
#define std_set_string_cend std__set_std__string__cend


unsigned int std__set_std__string__size(
    std_set_string_t const * this_
    , unsigned long * return_);
#define std_set_string_size std__set_std__string__size


/** returns the size of this type in bytes */
unsigned int std__set_std__string___const_iterator_sizeof();
#define std_set_string_iterator_sizeof std__set_std__string___const_iterator_sizeof


/** returns the size of this type in bytes */
unsigned int std__set_std__string___const_iterator_alignof();
#define std_set_string_iterator_alignof std__set_std__string___const_iterator_alignof


unsigned int std__set_std__string___const_iterator_deref(
    std_set_string_iterator_t const * this_
    , std_string_t const * * return_);
#define std_set_string_iterator_deref std__set_std__string___const_iterator_deref


unsigned int std__set_std__string___const_iterator_inc(
    std_set_string_iterator_t * this_
    , std_set_string_iterator_t * * return_);
#define std_set_string_iterator_inc std__set_std__string___const_iterator_inc


unsigned int std_set_string_const_iterator_eq(
    _Bool * return_
    , std_set_string_iterator_t const * __x
    , std_set_string_iterator_t const * __y);

#ifdef __cplusplus
}
#endif

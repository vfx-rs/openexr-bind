#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

typedef struct std__vector_std__string__t_s {
    char _unused;
} __attribute__((aligned(8))) std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;

typedef struct std__vector_float__t_s {
    char _unused;
} __attribute__((aligned(8))) std__vector_float__t;
typedef std__vector_float__t std_vector_float_t;


unsigned int std__vector_std__string__ctor(
    std_vector_string_t * * this_);
#define std_vector_string_ctor std__vector_std__string__ctor


unsigned int std__vector_std__string__dtor(
    std_vector_string_t * this_);
#define std_vector_string_dtor std__vector_std__string__dtor


unsigned int std__vector_std__string__size(
    std_vector_string_t const * this_
    , unsigned long * return_);
#define std_vector_string_size std__vector_std__string__size


unsigned int std__vector_std__string__index(
    std_vector_string_t const * this_
    , std_string_t const * * return_
    , unsigned long pos);
#define std_vector_string_index std__vector_std__string__index


unsigned int std__vector_std__string__data(
    std_vector_string_t * this_
    , std_string_t * * return_);
#define std_vector_string_data std__vector_std__string__data


unsigned int std__vector_std__string__data_const(
    std_vector_string_t const * this_
    , std_string_t const * * return_);
#define std_vector_string_data_const std__vector_std__string__data_const


unsigned int std__vector_std__string__push_back(
    std_vector_string_t * this_
    , std_string_t const * value);
#define std_vector_string_push_back std__vector_std__string__push_back


unsigned int std__vector_float__ctor(
    std_vector_float_t * * this_);
#define std_vector_float_ctor std__vector_float__ctor


unsigned int std__vector_float__dtor(
    std_vector_float_t * this_);
#define std_vector_float_dtor std__vector_float__dtor


unsigned int std__vector_float__size(
    std_vector_float_t const * this_
    , unsigned long * return_);
#define std_vector_float_size std__vector_float__size


unsigned int std__vector_float__index(
    std_vector_float_t const * this_
    , float const * * return_
    , unsigned long pos);
#define std_vector_float_index std__vector_float__index


unsigned int std__vector_float__data(
    std_vector_float_t * this_
    , float * * return_);
#define std_vector_float_data std__vector_float__data


unsigned int std__vector_float__data_const(
    std_vector_float_t const * this_
    , float const * * return_);
#define std_vector_float_data_const std__vector_float__data_const


unsigned int std__vector_float__push_back(
    std_vector_float_t * this_
    , float const * value);
#define std_vector_float_push_back std__vector_float__push_back


#ifdef __cplusplus
}
#endif

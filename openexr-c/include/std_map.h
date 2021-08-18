#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__map_std__string_std__string__t_s {
    char _unused;
} __attribute__((aligned(8))) std__map_std__string_std__string__t;
typedef std__map_std__string_std__string__t std_map_string_string_t;


unsigned int std__map_std__string_std__string__ctor(
    std_map_string_string_t * * this_);
#define std_map_string_string_ctor std__map_std__string_std__string__ctor


unsigned int std__map_std__string_std__string__dtor(
    std_map_string_string_t * this_);
#define std_map_string_string_dtor std__map_std__string_std__string__dtor


#ifdef __cplusplus
}
#endif

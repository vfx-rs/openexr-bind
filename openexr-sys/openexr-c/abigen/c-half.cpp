#include <Imath/half.h>
#include "c-half.hpp"

void abi_gen_c_half(std::ostream& os) {
	os << "Imath_3_0::half" << "|" << sizeof(Imath_3_0::half) << "|" << alignof(Imath_3_0::half) << "\n";
}

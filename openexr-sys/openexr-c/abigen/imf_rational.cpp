#include <OpenEXR/ImfRational.h>
#include "imf_rational.hpp"

void abi_gen_imf_rational(std::ostream& os) {
	os << "Imf_3_0::Rational" << "|" << sizeof(Imf_3_0::Rational) << "|" << alignof(Imf_3_0::Rational) << "\n";
}

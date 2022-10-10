#include <Imath/ImathMatrix.h>
#include <vector>
#include "imath_matrix.hpp"

void abi_gen_imath_matrix(std::ostream& os) {
	os << "Imath_3_0::Matrix33<float>" << "|" << sizeof(Imath_3_0::Matrix33<float>) << "|" << alignof(Imath_3_0::Matrix33<float>) << "\n";
	os << "Imath_3_0::Matrix33<double>" << "|" << sizeof(Imath_3_0::Matrix33<double>) << "|" << alignof(Imath_3_0::Matrix33<double>) << "\n";
	os << "Imath_3_0::Matrix44<float>" << "|" << sizeof(Imath_3_0::Matrix44<float>) << "|" << alignof(Imath_3_0::Matrix44<float>) << "\n";
	os << "Imath_3_0::Matrix44<double>" << "|" << sizeof(Imath_3_0::Matrix44<double>) << "|" << alignof(Imath_3_0::Matrix44<double>) << "\n";
}

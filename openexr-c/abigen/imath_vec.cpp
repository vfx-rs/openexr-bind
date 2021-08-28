#include <Imath/ImathVec.h>
#include <vector>
#include "imath_vec.hpp"

void abi_gen_imath_vec(std::ostream& os) {
	os << "Imath_3_0::Vec2<short>" << "|" << sizeof(Imath_3_0::Vec2<short>) << "|" << alignof(Imath_3_0::Vec2<short>) << "\n";
	os << "Imath_3_0::Vec2<int>" << "|" << sizeof(Imath_3_0::Vec2<int>) << "|" << alignof(Imath_3_0::Vec2<int>) << "\n";
	os << "Imath_3_0::Vec2<long>" << "|" << sizeof(Imath_3_0::Vec2<long>) << "|" << alignof(Imath_3_0::Vec2<long>) << "\n";
	os << "Imath_3_0::Vec2<float>" << "|" << sizeof(Imath_3_0::Vec2<float>) << "|" << alignof(Imath_3_0::Vec2<float>) << "\n";
	os << "Imath_3_0::Vec2<double>" << "|" << sizeof(Imath_3_0::Vec2<double>) << "|" << alignof(Imath_3_0::Vec2<double>) << "\n";
	os << "Imath_3_0::Vec3<short>" << "|" << sizeof(Imath_3_0::Vec3<short>) << "|" << alignof(Imath_3_0::Vec3<short>) << "\n";
	os << "Imath_3_0::Vec3<int>" << "|" << sizeof(Imath_3_0::Vec3<int>) << "|" << alignof(Imath_3_0::Vec3<int>) << "\n";
	os << "Imath_3_0::Vec3<long>" << "|" << sizeof(Imath_3_0::Vec3<long>) << "|" << alignof(Imath_3_0::Vec3<long>) << "\n";
	os << "Imath_3_0::Vec3<float>" << "|" << sizeof(Imath_3_0::Vec3<float>) << "|" << alignof(Imath_3_0::Vec3<float>) << "\n";
	os << "Imath_3_0::Vec3<double>" << "|" << sizeof(Imath_3_0::Vec3<double>) << "|" << alignof(Imath_3_0::Vec3<double>) << "\n";
	os << "Imath_3_0::Vec4<short>" << "|" << sizeof(Imath_3_0::Vec4<short>) << "|" << alignof(Imath_3_0::Vec4<short>) << "\n";
	os << "Imath_3_0::Vec4<int>" << "|" << sizeof(Imath_3_0::Vec4<int>) << "|" << alignof(Imath_3_0::Vec4<int>) << "\n";
	os << "Imath_3_0::Vec4<long>" << "|" << sizeof(Imath_3_0::Vec4<long>) << "|" << alignof(Imath_3_0::Vec4<long>) << "\n";
	os << "Imath_3_0::Vec4<float>" << "|" << sizeof(Imath_3_0::Vec4<float>) << "|" << alignof(Imath_3_0::Vec4<float>) << "\n";
	os << "Imath_3_0::Vec4<double>" << "|" << sizeof(Imath_3_0::Vec4<double>) << "|" << alignof(Imath_3_0::Vec4<double>) << "\n";
}

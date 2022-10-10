#include <Imath/ImathBox.h>
#include "imath_box.hpp"

void abi_gen_imath_box(std::ostream& os) {
	os << "Imath_3_0::Box<Imath_3_0::Vec2<short> >" << "|" << sizeof(Imath_3_0::Box<Imath_3_0::Vec2<short> >) << "|" << alignof(Imath_3_0::Box<Imath_3_0::Vec2<short> >) << "\n";
	os << "Imath_3_0::Box<Imath_3_0::Vec2<int> >" << "|" << sizeof(Imath_3_0::Box<Imath_3_0::Vec2<int> >) << "|" << alignof(Imath_3_0::Box<Imath_3_0::Vec2<int> >) << "\n";
	os << "Imath_3_0::Box<Imath_3_0::Vec2<float> >" << "|" << sizeof(Imath_3_0::Box<Imath_3_0::Vec2<float> >) << "|" << alignof(Imath_3_0::Box<Imath_3_0::Vec2<float> >) << "\n";
	os << "Imath_3_0::Box<Imath_3_0::Vec2<double> >" << "|" << sizeof(Imath_3_0::Box<Imath_3_0::Vec2<double> >) << "|" << alignof(Imath_3_0::Box<Imath_3_0::Vec2<double> >) << "\n";
	os << "Imath_3_0::Box<Imath_3_0::Vec3<short> >" << "|" << sizeof(Imath_3_0::Box<Imath_3_0::Vec3<short> >) << "|" << alignof(Imath_3_0::Box<Imath_3_0::Vec3<short> >) << "\n";
	os << "Imath_3_0::Box<Imath_3_0::Vec3<int> >" << "|" << sizeof(Imath_3_0::Box<Imath_3_0::Vec3<int> >) << "|" << alignof(Imath_3_0::Box<Imath_3_0::Vec3<int> >) << "\n";
	os << "Imath_3_0::Box<Imath_3_0::Vec3<float> >" << "|" << sizeof(Imath_3_0::Box<Imath_3_0::Vec3<float> >) << "|" << alignof(Imath_3_0::Box<Imath_3_0::Vec3<float> >) << "\n";
	os << "Imath_3_0::Box<Imath_3_0::Vec3<double> >" << "|" << sizeof(Imath_3_0::Box<Imath_3_0::Vec3<double> >) << "|" << alignof(Imath_3_0::Box<Imath_3_0::Vec3<double> >) << "\n";
}

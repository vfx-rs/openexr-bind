#include <OpenEXR/ImfRgba.h>
#include "imf_rgba.hpp"

void abi_gen_imf_rgba(std::ostream& os) {
	os << "Imf_3_0::Rgba" << "|" << sizeof(Imf_3_0::Rgba) << "|" << alignof(Imf_3_0::Rgba) << "\n";
}

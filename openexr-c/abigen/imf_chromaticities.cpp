#include <OpenEXR/ImfChromaticities.h>
#include "imf_chromaticities.hpp"

void abi_gen_imf_chromaticities(std::ostream& os) {
	os << "Imf_3_0::Chromaticities" << "|" << sizeof(Imf_3_0::Chromaticities) << "|" << alignof(Imf_3_0::Chromaticities) << "\n";
}

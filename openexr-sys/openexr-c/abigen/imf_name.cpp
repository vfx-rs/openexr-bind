#include <OpenEXR/ImfName.h>
#include "imf_name.hpp"

void abi_gen_imf_name(std::ostream& os) {
	os << "Imf_3_0::Name" << "|" << sizeof(Imf_3_0::Name) << "|" << alignof(Imf_3_0::Name) << "\n";
}

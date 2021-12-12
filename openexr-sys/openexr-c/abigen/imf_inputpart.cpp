#include <OpenEXR/ImfInputPart.h>
#include "imf_inputpart.hpp"

void abi_gen_imf_inputpart(std::ostream& os) {
	os << "Imf_3_0::InputPart" << "|" << sizeof(Imf_3_0::InputPart) << "|" << alignof(Imf_3_0::InputPart) << "\n";
}

#include <OpenEXR/ImfOutputPart.h>
#include "imf_outputpart.hpp"

void abi_gen_imf_outputpart(std::ostream& os) {
	os << "Imf_3_0::OutputPart" << "|" << sizeof(Imf_3_0::OutputPart) << "|" << alignof(Imf_3_0::OutputPart) << "\n";
}

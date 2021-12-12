#include <OpenEXR/ImfTiledInputPart.h>
#include "imf_tiledinputpart.hpp"

void abi_gen_imf_tiledinputpart(std::ostream& os) {
	os << "Imf_3_0::TiledInputPart" << "|" << sizeof(Imf_3_0::TiledInputPart) << "|" << alignof(Imf_3_0::TiledInputPart) << "\n";
}

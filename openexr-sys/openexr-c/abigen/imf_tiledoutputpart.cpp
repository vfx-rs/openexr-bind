#include <OpenEXR/ImfTiledOutputPart.h>
#include "imf_tiledoutputpart.hpp"

void abi_gen_imf_tiledoutputpart(std::ostream& os) {
	os << "Imf_3_0::TiledOutputPart" << "|" << sizeof(Imf_3_0::TiledOutputPart) << "|" << alignof(Imf_3_0::TiledOutputPart) << "\n";
}

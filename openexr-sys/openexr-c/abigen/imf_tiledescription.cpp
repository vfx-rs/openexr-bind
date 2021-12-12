#include <OpenEXR/ImfTileDescription.h>
#include "imf_tiledescription.hpp"

void abi_gen_imf_tiledescription(std::ostream& os) {
	os << "Imf_3_0::TileDescription" << "|" << sizeof(Imf_3_0::TileDescription) << "|" << alignof(Imf_3_0::TileDescription) << "\n";
}

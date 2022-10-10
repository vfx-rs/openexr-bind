#include <OpenEXR/ImfFlatImageLevel.h>
#include "imf_flatimagelevel.hpp"

void abi_gen_imf_flatimagelevel(std::ostream& os) {
	os << "Imf_3_0::FlatImageLevel::Iterator" << "|" << sizeof(Imf_3_0::FlatImageLevel::Iterator) << "|" << alignof(Imf_3_0::FlatImageLevel::Iterator) << "\n";
	os << "Imf_3_0::FlatImageLevel::ConstIterator" << "|" << sizeof(Imf_3_0::FlatImageLevel::ConstIterator) << "|" << alignof(Imf_3_0::FlatImageLevel::ConstIterator) << "\n";
}

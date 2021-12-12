#include <OpenEXR/ImfDeepImageLevel.h>
#include "imf_deepimagelevel.hpp"

void abi_gen_imf_deepimagelevel(std::ostream& os) {
	os << "Imf_3_0::DeepImageLevel::Iterator" << "|" << sizeof(Imf_3_0::DeepImageLevel::Iterator) << "|" << alignof(Imf_3_0::DeepImageLevel::Iterator) << "\n";
	os << "Imf_3_0::DeepImageLevel::ConstIterator" << "|" << sizeof(Imf_3_0::DeepImageLevel::ConstIterator) << "|" << alignof(Imf_3_0::DeepImageLevel::ConstIterator) << "\n";
}

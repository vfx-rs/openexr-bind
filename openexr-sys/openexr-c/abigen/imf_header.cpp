#include <OpenEXR/ImfChannelListAttribute.h>
#include <OpenEXR/ImfChromaticitiesAttribute.h>
#include <OpenEXR/ImfDeepImageStateAttribute.h>
#include <OpenEXR/ImfEnvmapAttribute.h>
#include <OpenEXR/ImfFloatVectorAttribute.h>
#include <OpenEXR/ImfHeader.h>
#include <OpenEXR/ImfKeyCodeAttribute.h>
#include <OpenEXR/ImfLineOrderAttribute.h>
#include <OpenEXR/ImfMatrixAttribute.h>
#include <OpenEXR/ImfPreviewImageAttribute.h>
#include <OpenEXR/ImfRationalAttribute.h>
#include <OpenEXR/ImfStringAttribute.h>
#include <OpenEXR/ImfStringVectorAttribute.h>
#include <OpenEXR/ImfTileDescriptionAttribute.h>
#include <OpenEXR/ImfTimeCodeAttribute.h>
#include <OpenEXR/ImfVecAttribute.h>
#include "imf_header.hpp"

void abi_gen_imf_header(std::ostream& os) {
	os << "Imf_3_0::Header" << "|" << sizeof(Imf_3_0::Header) << "|" << alignof(Imf_3_0::Header) << "\n";
	os << "Imf_3_0::Header::Iterator" << "|" << sizeof(Imf_3_0::Header::Iterator) << "|" << alignof(Imf_3_0::Header::Iterator) << "\n";
	os << "Imf_3_0::Header::ConstIterator" << "|" << sizeof(Imf_3_0::Header::ConstIterator) << "|" << alignof(Imf_3_0::Header::ConstIterator) << "\n";
}

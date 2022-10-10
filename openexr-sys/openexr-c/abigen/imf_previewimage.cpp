#include <OpenEXR/IexMathExc.h>
#include <OpenEXR/ImfPreviewImage.h>
#include "imf_previewimage.hpp"

void abi_gen_imf_previewimage(std::ostream& os) {
	os << "Imf_3_0::PreviewRgba" << "|" << sizeof(Imf_3_0::PreviewRgba) << "|" << alignof(Imf_3_0::PreviewRgba) << "\n";
}

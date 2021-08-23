#include <OpenEXR/ImfDeepFrameBuffer.h>
#include "imf_deepframebuffer.hpp"

void abi_gen_imf_deepframebuffer(std::ostream& os) {
	os << "Imf_3_0::DeepSlice" << "|" << sizeof(Imf_3_0::DeepSlice) << "|" << alignof(Imf_3_0::DeepSlice) << "\n";
	os << "Imf_3_0::DeepFrameBuffer::Iterator" << "|" << sizeof(Imf_3_0::DeepFrameBuffer::Iterator) << "|" << alignof(Imf_3_0::DeepFrameBuffer::Iterator) << "\n";
	os << "Imf_3_0::DeepFrameBuffer::ConstIterator" << "|" << sizeof(Imf_3_0::DeepFrameBuffer::ConstIterator) << "|" << alignof(Imf_3_0::DeepFrameBuffer::ConstIterator) << "\n";
}

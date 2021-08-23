#include <OpenEXR/IexBaseExc.h>
#include <OpenEXR/ImfFrameBuffer.h>
#include "imf_framebuffer.hpp"

void abi_gen_imf_framebuffer(std::ostream& os) {
	os << "Imf_3_0::Slice" << "|" << sizeof(Imf_3_0::Slice) << "|" << alignof(Imf_3_0::Slice) << "\n";
	os << "Imf_3_0::FrameBuffer::Iterator" << "|" << sizeof(Imf_3_0::FrameBuffer::Iterator) << "|" << alignof(Imf_3_0::FrameBuffer::Iterator) << "\n";
	os << "Imf_3_0::FrameBuffer::ConstIterator" << "|" << sizeof(Imf_3_0::FrameBuffer::ConstIterator) << "|" << alignof(Imf_3_0::FrameBuffer::ConstIterator) << "\n";
}

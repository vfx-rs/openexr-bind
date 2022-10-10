#include <OpenEXR/ImfChannelList.h>
#include "imf_channellist.hpp"

void abi_gen_imf_channellist(std::ostream& os) {
	os << "Imf_3_0::Channel" << "|" << sizeof(Imf_3_0::Channel) << "|" << alignof(Imf_3_0::Channel) << "\n";
	os << "Imf_3_0::ChannelList::Iterator" << "|" << sizeof(Imf_3_0::ChannelList::Iterator) << "|" << alignof(Imf_3_0::ChannelList::Iterator) << "\n";
	os << "Imf_3_0::ChannelList::ConstIterator" << "|" << sizeof(Imf_3_0::ChannelList::ConstIterator) << "|" << alignof(Imf_3_0::ChannelList::ConstIterator) << "\n";
}

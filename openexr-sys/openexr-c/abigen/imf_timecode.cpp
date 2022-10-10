#include <OpenEXR/IexBaseExc.h>
#include <OpenEXR/ImfTimeCode.h>
#include "imf_timecode.hpp"

void abi_gen_imf_timecode(std::ostream& os) {
	os << "Imf_3_0::TimeCode" << "|" << sizeof(Imf_3_0::TimeCode) << "|" << alignof(Imf_3_0::TimeCode) << "\n";
}

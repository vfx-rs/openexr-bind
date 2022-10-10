#include <OpenEXR/IexBaseExc.h>
#include <OpenEXR/ImfKeyCode.h>
#include "imf_keycode.hpp"

void abi_gen_imf_keycode(std::ostream& os) {
	os << "Imf_3_0::KeyCode" << "|" << sizeof(Imf_3_0::KeyCode) << "|" << alignof(Imf_3_0::KeyCode) << "\n";
}

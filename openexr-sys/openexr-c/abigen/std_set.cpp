#include <set>
#include <string>
#include "std_set.hpp"

void abi_gen_std_set(std::ostream& os) {
	os << "std::set<std::string>::const_iterator" << "|" << sizeof(std::set<std::string>::const_iterator) << "|" << alignof(std::set<std::string>::const_iterator) << "\n";
}

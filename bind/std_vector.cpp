#include <string>
#include <vector>

// CPPMM_ macro definitions etc automatically inserted in this virtual header
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace std {

#if defined(_LIBCPP_VERSION)
namespace std = ::std::_LIBCPP_ABI_NAMESPACE;
#else
namespace std = ::std;
#endif

template <class T> class vector {
public:
    // This allows us to see through to the type in Imath
    using BoundType = std::vector<T>;

    vector();
    ~vector();

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND;

// explicit instantiation
template class vector<std::string>;
template class vector<float>;

using vector_string
    CPPMM_FORCE_NAME("std::vector<std::string>") = std::vector<std::string>;
using vector_float
    CPPMM_FORCE_NAME("std::vector<float>") = std::vector<float>;

} // namespace std

} // namespace cppmm_bind

template class std::vector<std::string>;
template class std::vector<float>;

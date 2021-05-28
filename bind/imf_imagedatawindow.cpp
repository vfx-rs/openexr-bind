#include <OpenEXR/ImfImageDataWindow.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

enum DataWindowSource {} CPPMM_RUSTIFY_ENUM CPPMM_ENUM_PREFIX(USE_)
    CPPMM_ENUM_SUFFIX(_DATA_WINDOW);

IMFUTIL_EXPORT
IMATH_NAMESPACE::Box2i dataWindowForFile(const Imf::Header& hdr,
                                         const Imf::Image& img,
                                         Imf::DataWindowSource dws);

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

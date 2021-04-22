#include <OpenEXR/ImfRgba.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

struct Rgba {
    using BoundType = Imf::Rgba;

    Rgba();
    Rgba(Imath::half r, Imath::half g, Imath::half b, Imath::half a);
    Rgba(const Imf::Rgba& rhs);
    Rgba(Imf::Rgba&& rhs);
    ~Rgba();

} CPPMM_VALUETYPE;

enum RgbaChannels {};

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

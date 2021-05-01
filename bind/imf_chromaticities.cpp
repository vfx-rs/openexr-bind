#include <OpenEXR/ImfChromaticities.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

class Chromaticities {
public:
    using BoundType = Imf::Chromaticities;

    Chromaticities(const Imath::V2f& red, const Imath::V2f& green,
                   const Imath::V2f& blue, const Imath::V2f& white);

    ~Chromaticities();
    Chromaticities(const Imf::Chromaticities& rhs);
    Chromaticities(Imf::Chromaticities&& rhs);

    //---------
    // Equality
    //---------

    bool operator==(const Imf::Chromaticities& v) const;
    bool operator!=(const Imf::Chromaticities& v) const;

} CPPMM_VALUETYPE CPPMM_TRIVIALLY_MOVABLE CPPMM_TRIVIALLY_COPYABLE;

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

#include <OpenEXR/ImfTileDescription.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

enum LevelMode {} CPPMM_RUSTIFY_ENUM;
enum LevelRoundingMode {} CPPMM_RUSTIFY_ENUM;

struct TileDescription {
    using BoundType = Imf::TileDescription;

    TileDescription(unsigned int xs, unsigned int ys, Imf::LevelMode m,
                    Imf::LevelRoundingMode r);

    bool operator==(const Imf::TileDescription& other) const;

} CPPMM_VALUETYPE;

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

#include <OpenEXR/ImfPartHelper.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

struct MultiViewChannelName {
    using BoundType = Imf::MultiViewChannelName;

    MultiViewChannelName();
    MultiViewChannelName(const Imf::MultiViewChannelName&);
    MultiViewChannelName(Imf::MultiViewChannelName&&);
    Imf::MultiViewChannelName&
    operator=(const Imf::MultiViewChannelName&) CPPMM_IGNORE;
    ~MultiViewChannelName();

    // FIXME: re-enable these once we've got moves figured out
    std::string getLayer() const CPPMM_IGNORE;
    std::string getSuffix() const CPPMM_IGNORE;
} CPPMM_OPAQUEPTR;

// // FIXME: what do we do with these?
// template <typename T>
// int SplitChannels(const T& begin, const T& end, bool multipart = true,
//                   const std::string& heroView = "");

// template <class T>
// void GetChannelsInMultiPartFile(const Imf::MultiPartInputFile& file, T&
// chans);

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

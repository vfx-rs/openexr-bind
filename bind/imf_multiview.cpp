#include <OpenEXR/ImfMultiView.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

// FIXME: re-enable this once we've got moves sorted
std::string defaultViewName(const Imf::StringVector& multiView) CPPMM_IGNORE;

// FIXME: re-enable this once we've got moves sorted
std::string
viewFromChannelName(const std::string& channel,
                    const Imf::StringVector& multiView) CPPMM_IGNORE;

IMF_EXPORT
bool areCounterparts(const std::string& channel1, const std::string& channel2,
                     const Imf::StringVector& multiView);

IMF_EXPORT
Imf::ChannelList
channelsInView(const std::string& viewName, const Imf::ChannelList& channelList,
               const Imf::StringVector& multiView) CPPMM_IGNORE;

// FIXME: re-enable this once we've got moves sorted
Imf::ChannelList
channelsInNoView(const Imf::ChannelList& channelList,
                 const Imf::StringVector& multiView) CPPMM_IGNORE;

IMF_EXPORT
Imf::ChannelList
channelInAllViews(const std::string& channame,
                  const Imf::ChannelList& channelList,
                  const Imf::StringVector& multiView) CPPMM_IGNORE;

// FIXME: re-enable this once we've got moves sorted
std::string channelInOtherView(const std::string& channel,
                               const Imf::ChannelList& channelList,
                               const Imf::StringVector& multiView,
                               const std::string& otherViewName) CPPMM_IGNORE;

IMF_EXPORT
std::string insertViewName(const std::string& channel,
                           const Imf::StringVector& multiView,
                           int i) CPPMM_IGNORE;

IMF_EXPORT
std::string removeViewName(const std::string& channel,
                           const std::string& view) CPPMM_IGNORE;

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

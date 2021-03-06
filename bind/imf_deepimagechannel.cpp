#include <OpenEXR/ImfDeepImageChannel.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

struct DeepImageChannel {
    using BoundType = Imf::DeepImageChannel;

    // from ImageChannel
    IMFUTIL_EXPORT
    Imf::Channel channel() const;
    int xSampling() const;
    int ySampling() const;
    bool pLinear() const;
    int pixelsPerRow() const;
    int pixelsPerColumn() const;
    size_t numPixels() const;
    virtual Imf::PixelType pixelType() const;

    virtual Imf::DeepSlice slice() const = 0;

    Imf::DeepImageLevel& deepLevel();
    const Imf::DeepImageLevel& deepLevel() const CPPMM_RENAME(deepLevel_const);

    Imf::ImageLevel& level();
    const Imf::ImageLevel& level() const CPPMM_RENAME(level_const);

    Imf::SampleCountChannel& sampleCounts();
    const Imf::SampleCountChannel& sampleCounts() const;
} CPPMM_OPAQUEPTR;

template <typename T> struct TypedDeepImageChannel {
    using BoundType = Imf::TypedDeepImageChannel<T>;

    // from ImageChannel
    IMFUTIL_EXPORT
    Imf::Channel channel() const;
    int xSampling() const;
    int ySampling() const;
    bool pLinear() const;
    int pixelsPerRow() const;
    int pixelsPerColumn() const;
    size_t numPixels() const;
    virtual Imf::PixelType pixelType() const;

    Imf::DeepImageLevel& deepLevel();
    const Imf::DeepImageLevel& deepLevel() const CPPMM_RENAME(deepLevel_const);

    Imf::ImageLevel& level();
    const Imf::ImageLevel& level() const CPPMM_RENAME(level_const);

    Imf::SampleCountChannel& sampleCounts();
    const Imf::SampleCountChannel& sampleCounts() const;

    virtual Imf::DeepSlice slice() const;
    T* operator()(int x, int y) CPPMM_RENAME(index);
    const T* operator()(int x, int y) const CPPMM_RENAME(index_const);
    T* at(int x, int y) CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    const T* at(int x, int y) const CPPMM_RENAME(at_const)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    T* const* row(int r) CPPMM_IGNORE;
    const T* const* row(int r) const CPPMM_RENAME(row_const) CPPMM_IGNORE;

} CPPMM_OPAQUEPTR;

template class TypedDeepImageChannel<half>;
using DeepHalfChannel = Imf::TypedDeepImageChannel<half>;

template class TypedDeepImageChannel<float>;
using DeepFloatChannel = Imf::TypedDeepImageChannel<float>;

template class TypedDeepImageChannel<unsigned int>;
using DeepUIntChannel = Imf::TypedDeepImageChannel<unsigned int>;

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

template class Imf::TypedDeepImageChannel<half>;
template class Imf::TypedDeepImageChannel<float>;
template class Imf::TypedDeepImageChannel<unsigned int>;

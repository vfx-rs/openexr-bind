#include <OpenEXR/ImfSampleCountChannel.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

struct SampleCountChannel {
    using BoundType = Imf::SampleCountChannel;

    virtual Imf::PixelType pixelType() const;

    Imf::Slice slice() const;

    Imf::DeepImageLevel& deepLevel();
    const Imf::DeepImageLevel& deepLevel() const CPPMM_RENAME(deepLevel_const);

    IMFUTIL_EXPORT
    const unsigned int& operator()(int x, int y) const CPPMM_RENAME(index);

    IMFUTIL_EXPORT
    const unsigned int& at(int x, int y) const
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMFUTIL_EXPORT
    const unsigned int* row(int r) const;

    IMFUTIL_EXPORT
    void set(int x, int y, unsigned int newNumSamples)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    IMFUTIL_EXPORT
    void set(int r, unsigned int newNumSamples[]) CPPMM_RENAME(set_row)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    IMFUTIL_EXPORT
    void clear();

    IMFUTIL_EXPORT
    unsigned int* beginEdit();
    IMFUTIL_EXPORT
    void endEdit();

    IMFUTIL_EXPORT
    const unsigned int* numSamples() const;
    IMFUTIL_EXPORT
    const unsigned int* sampleListSizes() const;
    IMFUTIL_EXPORT
    const size_t* sampleListPositions() const;
    IMFUTIL_EXPORT
    size_t sampleBufferSize() const;

    Imf::Channel channel() const;
    int xSampling() const;
    int ySampling() const;
    bool pLinear() const;
    int pixelsPerRow() const;
    int pixelsPerColumn() const;
    size_t numPixels() const;
    Imf::ImageLevel& level();
    const Imf::ImageLevel& level() const;

    struct Edit {
        using BoundType = Imf::SampleCountChannel::Edit;

        Edit(Imf::SampleCountChannel& level);
        ~Edit();

        IMFUTIL_EXPORT
        unsigned int* sampleCounts() const;

    } CPPMM_OPAQUEPTR;

} CPPMM_OPAQUEPTR;

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

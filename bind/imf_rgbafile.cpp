#include <OpenEXR/ImfRgbaFile.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

struct RgbaOutputFile {
    using BoundType = Imf::RgbaOutputFile;

    IMF_EXPORT
    RgbaOutputFile(const char name[], const Imf::Header& header,
                   Imf::RgbaChannels rgbaChannels, int numThreads)
        CPPMM_RENAME(ctor) CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT)
            CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    IMF_EXPORT
    RgbaOutputFile(Imf::OStream& os, const Imf::Header& header,
                   Imf::RgbaChannels rgbaChannels, int numThreads)
        CPPMM_RENAME(from_stream)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT)
                CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    IMF_EXPORT
    RgbaOutputFile(const char name[],
                   const IMATH_NAMESPACE::Box2i& displayWindow,
                   const IMATH_NAMESPACE::Box2i& dataWindow,
                   Imf::RgbaChannels rgbaChannels, float pixelAspectRatio,
                   const IMATH_NAMESPACE::V2f screenWindowCenter,
                   float screenWindowWidth, Imf::LineOrder lineOrder,
                   Imf::Compression compression, int numThreads)
        CPPMM_RENAME(with_windows)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT)
                CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    IMF_EXPORT
    RgbaOutputFile(const char name[], int width, int height,
                   Imf::RgbaChannels rgbaChannels, float pixelAspectRatio,
                   const IMATH_NAMESPACE::V2f screenWindowCenter,
                   float screenWindowWidth, Imf::LineOrder lineOrder,
                   Imf::Compression compression, int numThreads)
        CPPMM_RENAME(with_dimensions)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT)
                CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    IMF_EXPORT
    virtual ~RgbaOutputFile();
    IMF_EXPORT
    void setFrameBuffer(const Imf::Rgba* base, size_t xStride, size_t yStride)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    void writePixels(int numScanLines = 1)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT)
            CPPMM_THROWS(Iex::BaseExc, IEX_BASE);
    IMF_EXPORT
    int currentScanLine() const;

    IMF_EXPORT
    const Imf::Header& header() const;
    IMF_EXPORT
    const Imf::FrameBuffer& frameBuffer() const;
    IMF_EXPORT
    const IMATH_NAMESPACE::Box2i& displayWindow() const;
    IMF_EXPORT
    const IMATH_NAMESPACE::Box2i& dataWindow() const;
    IMF_EXPORT
    float pixelAspectRatio() const;
    IMF_EXPORT
    const IMATH_NAMESPACE::V2f screenWindowCenter() const;
    IMF_EXPORT
    float screenWindowWidth() const;
    IMF_EXPORT
    Imf::LineOrder lineOrder() const;
    IMF_EXPORT
    Imf::Compression compression() const;
    IMF_EXPORT
    Imf::RgbaChannels channels() const;

    IMF_EXPORT
    void updatePreviewImage(const Imf::PreviewRgba preview[])
        CPPMM_THROWS(Iex::LogicExc, IEX_NO_PREVIEW_IMAGE)
            CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    IMF_EXPORT
    void setYCRounding(unsigned int roundY, unsigned int roundC);

    IMF_EXPORT
    void breakScanLine(int y, int offset, int length, char c) CPPMM_IGNORE;

} CPPMM_OPAQUEPTR;

struct RgbaInputFile {
    using BoundType = Imf::RgbaInputFile;

    IMF_EXPORT
    RgbaInputFile(const char name[], int numThreads) CPPMM_RENAME(ctor)
        CPPMM_THROWS(Iex::InputExc, IEX_INPUT)
            CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    IMF_EXPORT
    RgbaInputFile(Imf::IStream& is, int numThreads) CPPMM_RENAME(from_stream)
        CPPMM_THROWS(Iex::InputExc, IEX_INPUT)
            CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    IMF_EXPORT
    RgbaInputFile(const char name[], const std::string& layerName,
                  int numThreads) CPPMM_RENAME(with_layer)
        CPPMM_THROWS(Iex::InputExc, IEX_INPUT)
            CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    IMF_EXPORT
    RgbaInputFile(Imf::IStream& is, const std::string& layerName,
                  int numThreads) CPPMM_RENAME(from_stream_with_layer)
        CPPMM_THROWS(Iex::InputExc, IEX_INPUT)
            CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    IMF_EXPORT
    virtual ~RgbaInputFile();

    IMF_EXPORT
    void setFrameBuffer(Imf::Rgba* base, size_t xStride, size_t yStride)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    void setLayerName(const std::string& layerName);

    IMF_EXPORT
    void readPixels(int scanLine1, int scanLine2)
        CPPMM_THROWS(Iex::BaseExc, IEX_BASE);
    IMF_EXPORT
    void readPixels(int scanLine) CPPMM_IGNORE;

    IMF_EXPORT
    const Imf::Header& header() const;
    IMF_EXPORT
    const Imf::FrameBuffer& frameBuffer() const;
    IMF_EXPORT
    const IMATH_NAMESPACE::Box2i& displayWindow() const;
    IMF_EXPORT
    const IMATH_NAMESPACE::Box2i& dataWindow() const;
    IMF_EXPORT
    float pixelAspectRatio() const;
    IMF_EXPORT
    const IMATH_NAMESPACE::V2f screenWindowCenter() const;
    IMF_EXPORT
    float screenWindowWidth() const;
    IMF_EXPORT
    Imf::LineOrder lineOrder() const;
    IMF_EXPORT
    Imf::Compression compression() const;
    IMF_EXPORT
    Imf::RgbaChannels channels() const;
    IMF_EXPORT
    const char* fileName() const;
    IMF_EXPORT
    bool isComplete() const;

    IMF_EXPORT
    int version() const;

} CPPMM_OPAQUEPTR;

Imf::Rgba* ComputeBasePointer(Imf::Rgba* ptr,
                              const IMATH_NAMESPACE::Box2i& dataWindow);

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

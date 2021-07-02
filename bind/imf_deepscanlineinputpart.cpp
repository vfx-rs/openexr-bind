#include <OpenEXR/ImfDeepScanLineInputPart.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

struct DeepScanLineInputPart {
    using BoundType = Imf::DeepScanLineInputPart;
    IMF_EXPORT
    DeepScanLineInputPart(Imf::MultiPartInputFile& file, int partNumber);

    IMF_EXPORT
    const char* fileName() const;
    IMF_EXPORT
    const Imf::Header& header() const;
    IMF_EXPORT
    int version() const;
    IMF_EXPORT
    void setFrameBuffer(const Imf::DeepFrameBuffer& frameBuffer)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    const Imf::DeepFrameBuffer& frameBuffer() const;
    IMF_EXPORT
    bool isComplete() const;
    IMF_EXPORT
    void readPixels(int scanLine1, int scanLine2)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT)
            CPPMM_THROWS(Iex::BaseExc, IEX_BASE);
    IMF_EXPORT
    void readPixels(int scanLine) CPPMM_IGNORE;
    IMF_EXPORT
    void readPixels(const char* rawPixelData,
                    const Imf::DeepFrameBuffer& frameBuffer, int scanLine1,
                    int scanLine2) const
        CPPMM_RENAME(readPixels_from_frame_buffer)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT)
                CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    IMF_EXPORT
    void rawPixelData(int firstScanLine, char* pixelData,
                      uint64_t& pixelDataSize);

    IMF_EXPORT
    void readPixelSampleCounts(int scanline1, int scanline2)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    void readPixelSampleCounts(int scanline) CPPMM_IGNORE;

    IMF_EXPORT
    void readPixelSampleCounts(const char* rawdata,
                               const Imf::DeepFrameBuffer& frameBuffer,
                               int scanLine1, int scanLine2) const
        CPPMM_RENAME(readPixelSampleCounts_into_frame_buffer)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    int firstScanLineInChunk(int y) const;
    IMF_EXPORT
    int lastScanLineInChunk(int y) const;
} CPPMM_OPAQUEBYTES;

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

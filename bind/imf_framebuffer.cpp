#include <OpenEXR/IexBaseExc.h>
#include <OpenEXR/ImfFrameBuffer.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

struct Slice {
    using BoundType = Imf::Slice;

    Slice(Imf::PixelType type, char* base, size_t xStride, size_t yStride,
          int xSampling, int ySampling, double fillValue, bool xTileCoords,
          bool yTileCoords);

    IMF_EXPORT
    static Imf::Slice Make(Imf::PixelType type, const void* ptr,
                           const Imath::V2i& origin, int64_t w, int64_t h,
                           size_t xStride, size_t yStride, int xSampling,
                           int ySampling, double fillValue, bool xTileCoords,
                           bool yTileCoords) CPPMM_RENAME(with_origin)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    static Imf::Slice Make(Imf::PixelType type, const void* ptr,
                           const Imath::Box2i& dataWindow, size_t xStride,
                           size_t yStride, int xSampling, int ySampling,
                           double fillValue, bool xTileCoords, bool yTileCoords)
        CPPMM_RENAME(with_window)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    Slice(const Imf::Slice&);
    Slice(Imf::Slice&&) CPPMM_IGNORE;
    ~Slice();

} CPPMM_OPAQUEBYTES;

struct FrameBuffer {
    using BoundType = Imf::FrameBuffer;

    FrameBuffer() CPPMM_RENAME(ctor);
    FrameBuffer(const Imf::FrameBuffer&) CPPMM_RENAME(copy);
    FrameBuffer(Imf::FrameBuffer&&) CPPMM_IGNORE;
    ~FrameBuffer();

    void insert(const char name[], const Imf::Slice& slice)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    void insert(const std::string& name, const Imf::Slice& slice) CPPMM_IGNORE;

    IMF_EXPORT
    Imf::Slice& operator[](const char name[]) CPPMM_IGNORE;
    IMF_EXPORT
    const Imf::Slice& operator[](const char name[]) const CPPMM_IGNORE;

    IMF_EXPORT
    Imf::Slice& operator[](const std::string& name) CPPMM_IGNORE;
    IMF_EXPORT
    const Imf::Slice& operator[](const std::string& name) const CPPMM_IGNORE;

    IMF_EXPORT
    Imf::Slice* findSlice(const char name[]);
    IMF_EXPORT
    const Imf::Slice* findSlice(const char name[]) const
        CPPMM_RENAME(findSlice_const);

    IMF_EXPORT
    Imf::Slice* findSlice(const std::string& name) CPPMM_IGNORE;
    IMF_EXPORT
    const Imf::Slice* findSlice(const std::string& name) const CPPMM_IGNORE;

    IMF_EXPORT
    Imf::FrameBuffer::Iterator begin();
    IMF_EXPORT
    Imf::FrameBuffer::ConstIterator begin() const CPPMM_RENAME(begin_const);

    IMF_EXPORT
    Imf::FrameBuffer::Iterator end();
    IMF_EXPORT
    Imf::FrameBuffer::ConstIterator end() const CPPMM_RENAME(end_const);

    IMF_EXPORT
    Imf::FrameBuffer::Iterator find(const char name[]);
    IMF_EXPORT
    Imf::FrameBuffer::ConstIterator find(const char name[]) const;

    IMF_EXPORT
    Imf::FrameBuffer::Iterator find(const std::string& name) CPPMM_IGNORE;
    IMF_EXPORT
    Imf::FrameBuffer::ConstIterator
    find(const std::string& name) const CPPMM_IGNORE;

    struct Iterator {
        using BoundType = Imf::FrameBuffer::Iterator;
        IMF_EXPORT
        Iterator();
        IMF_EXPORT
        Iterator(const Imf::FrameBuffer::SliceMap::iterator& i) CPPMM_IGNORE;

        Iterator(const Imf::FrameBuffer::Iterator&);
        Iterator(Imf::FrameBuffer::Iterator&&) CPPMM_IGNORE;

        IMF_EXPORT
        Imf::FrameBuffer::Iterator& operator++();
        IMF_EXPORT
        Imf::FrameBuffer::Iterator operator++(int) CPPMM_IGNORE;

        IMF_EXPORT
        const char* name() const;
        IMF_EXPORT
        Imf::Slice& slice() const;

    } CPPMM_OPAQUEBYTES;

    struct ConstIterator {
        using BoundType = Imf::FrameBuffer::ConstIterator;
        IMF_EXPORT
        ConstIterator();
        IMF_EXPORT
        ConstIterator(const Imf::FrameBuffer::SliceMap::const_iterator& i)
            CPPMM_IGNORE;

        ConstIterator(const Imf::FrameBuffer::Iterator&) CPPMM_RENAME(from_mut);

        ConstIterator(const Imf::FrameBuffer::ConstIterator&);
        ConstIterator(Imf::FrameBuffer::ConstIterator&&) CPPMM_IGNORE;

        IMF_EXPORT
        Imf::FrameBuffer::ConstIterator& operator++();
        IMF_EXPORT
        Imf::FrameBuffer::ConstIterator operator++(int) CPPMM_IGNORE;

        IMF_EXPORT
        const char* name() const;
        IMF_EXPORT
        const Imf::Slice& slice() const;

    } CPPMM_OPAQUEBYTES;

} CPPMM_OPAQUEPTR;

bool operator==(const Imf::FrameBuffer::ConstIterator& a,
                const Imf::FrameBuffer::ConstIterator& b)
    CPPMM_RENAME(frame_buffer_const_iter_eq);

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

#include <OpenEXR/ImfFlatImageLevel.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

struct FlatImageLevel {
    using BoundType = Imf::FlatImageLevel;

    // Inherited from ImageLevel
    Imf::Image& image() CPPMM_IGNORE;
    const Imf::Image& image() const CPPMM_IGNORE;

    int xLevelNumber() const;
    int yLevelNumber() const;

    const IMATH_NAMESPACE::Box2i& dataWindow() const;

    // FlatImageLevel(const Imf::FlatImageLevel& rhs);
    // Imf::FlatImageLevel& operator=(const Imf::FlatImageLevel& rhs);

    IMFUTIL_EXPORT
    Imf::FlatImage& flatImage();
    IMFUTIL_EXPORT
    const Imf::FlatImage& flatImage() const CPPMM_RENAME(flatImage_const);

    IMFUTIL_EXPORT
    Imf::FlatImageChannel* findChannel(const std::string& name);
    IMFUTIL_EXPORT
    const Imf::FlatImageChannel* findChannel(const std::string& name) const
        CPPMM_RENAME(findChannel_const);

    IMFUTIL_EXPORT
    Imf::FlatImageChannel& channel(const std::string& name)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    IMFUTIL_EXPORT
    const Imf::FlatImageChannel& channel(const std::string& name) const
        CPPMM_RENAME(channel_const)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    template <class T>
    Imf::TypedFlatImageChannel<T>* findTypedChannel(const std::string& name);

    template <class T>
    const Imf::TypedFlatImageChannel<T>*
    findTypedChannel(const std::string& name) const;

    template <class T>
    Imf::TypedFlatImageChannel<T>&
    typedChannel(const std::string& name) CPPMM_IGNORE;

    template <class T>
    const Imf::TypedFlatImageChannel<T>&
    typedChannel(const std::string& name) const CPPMM_IGNORE;

    IMFUTIL_EXPORT
    Imf::FlatImageLevel::Iterator begin();
    IMFUTIL_EXPORT
    Imf::FlatImageLevel::ConstIterator begin() const CPPMM_RENAME(begin_const);

    IMFUTIL_EXPORT
    Imf::FlatImageLevel::Iterator end();
    IMFUTIL_EXPORT
    Imf::FlatImageLevel::ConstIterator end() const CPPMM_RENAME(end_const);

    struct Iterator {
        using BoundType = Imf::FlatImageLevel::Iterator;
        Iterator();
        Iterator(const Imf::FlatImageLevel::ChannelMap::iterator& i)
            CPPMM_IGNORE;
        Iterator(const Imf::FlatImageLevel::Iterator& rhs);
        Iterator(Imf::FlatImageLevel::Iterator&& rhs) CPPMM_IGNORE;

        IMFUTIL_EXPORT
        Imf::FlatImageLevel::Iterator& operator++() CPPMM_RENAME(inc);
        IMFUTIL_EXPORT
        Imf::FlatImageLevel::Iterator operator++(int) CPPMM_IGNORE;

        IMFUTIL_EXPORT
        const std::string& name() const;
        IMFUTIL_EXPORT
        Imf::FlatImageChannel& channel() const;

    } CPPMM_OPAQUEBYTES;

    struct ConstIterator {
        using BoundType = Imf::FlatImageLevel::ConstIterator;

        IMFUTIL_EXPORT
        ConstIterator();
        ConstIterator(const Imf::FlatImageLevel::ChannelMap::const_iterator& i)
            CPPMM_IGNORE;
        ConstIterator(const Imf::FlatImageLevel::ConstIterator& rhs);
        ConstIterator(const Imf::FlatImageLevel::Iterator& rhs)
            CPPMM_RENAME(from_mut);
        ConstIterator(Imf::FlatImageLevel::ConstIterator&& rhs);

        IMFUTIL_EXPORT
        Imf::FlatImageLevel::ConstIterator& operator++() CPPMM_RENAME(inc);
        IMFUTIL_EXPORT
        Imf::FlatImageLevel::ConstIterator operator++(int) CPPMM_IGNORE;

        IMFUTIL_EXPORT
        const std::string& name() const;
        IMFUTIL_EXPORT
        const Imf::FlatImageChannel& channel() const;

    } CPPMM_OPAQUEBYTES;

} CPPMM_OPAQUEPTR;

// ------------ TypedChannel<half> ---------------------
extern template Imf::TypedFlatImageChannel<Imath::half>*
FlatImageLevel::findTypedChannel(const std::string& name);

extern template const Imf::TypedFlatImageChannel<Imath::half>*
FlatImageLevel::findTypedChannel(const std::string& name) const;

Imf::TypedFlatImageChannel<Imath::half>* (
    FlatImageLevel::*findTypedChannel_half)(const std::string& name) =
    &FlatImageLevel::findTypedChannel<Imath::half>;

const Imf::TypedFlatImageChannel<Imath::half>* (
    FlatImageLevel::*findTypedChannel_half_const)(const std::string& name)
    const = &FlatImageLevel::findTypedChannel<Imath::half>;

// ------------ TypedChannel<float> ---------------------
extern template Imf::TypedFlatImageChannel<float>*
FlatImageLevel::findTypedChannel(const std::string& name);

extern template const Imf::TypedFlatImageChannel<float>*
FlatImageLevel::findTypedChannel(const std::string& name) const;

Imf::TypedFlatImageChannel<float>* (FlatImageLevel::*findTypedChannel_float)(
    const std::string& name) = &FlatImageLevel::findTypedChannel<float>;

const Imf::TypedFlatImageChannel<float>* (
    FlatImageLevel::*findTypedChannel_float_const)(
    const std::string& name) const = &FlatImageLevel::findTypedChannel<float>;

// ------------ TypedChannel<uint> ---------------------
extern template Imf::TypedFlatImageChannel<unsigned int>*
FlatImageLevel::findTypedChannel(const std::string& name);

extern template const Imf::TypedFlatImageChannel<unsigned int>*
FlatImageLevel::findTypedChannel(const std::string& name) const;

Imf::TypedFlatImageChannel<unsigned int>* (
    FlatImageLevel::*findTypedChannel_uint)(const std::string& name) =
    &FlatImageLevel::findTypedChannel<unsigned int>;

const Imf::TypedFlatImageChannel<unsigned int>* (
    FlatImageLevel::*findTypedChannel_uint_const)(const std::string& name)
    const = &FlatImageLevel::findTypedChannel<unsigned int>;

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

// ------------ TypedFlatImageChannel<half> ---------------------
extern template Imf::TypedFlatImageChannel<Imath::half>*
Imf::FlatImageLevel::findTypedChannel(const std::string& name);

extern template const Imf::TypedFlatImageChannel<Imath::half>*
Imf::FlatImageLevel::findTypedChannel(const std::string& name) const;

// ------------ TypedFlatImageChannel<float> ---------------------
extern template Imf::TypedFlatImageChannel<float>*
Imf::FlatImageLevel::findTypedChannel(const std::string& name);

extern template const Imf::TypedFlatImageChannel<float>*
Imf::FlatImageLevel::findTypedChannel(const std::string& name) const;

// ------------ TypedFlatImageChannel<unsigned int> ---------------------
extern template Imf::TypedFlatImageChannel<unsigned int>*
Imf::FlatImageLevel::findTypedChannel(const std::string& name);

extern template const Imf::TypedFlatImageChannel<unsigned int>*
Imf::FlatImageLevel::findTypedChannel(const std::string& name) const;

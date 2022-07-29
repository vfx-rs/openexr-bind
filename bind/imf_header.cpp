#include <OpenEXR/ImfChannelListAttribute.h>
#include <OpenEXR/ImfChromaticitiesAttribute.h>
#include <OpenEXR/ImfDeepImageStateAttribute.h>
#include <OpenEXR/ImfEnvmapAttribute.h>
#include <OpenEXR/ImfFloatVectorAttribute.h>
#include <OpenEXR/ImfHeader.h>
#include <OpenEXR/ImfKeyCodeAttribute.h>
#include <OpenEXR/ImfLineOrderAttribute.h>
#include <OpenEXR/ImfMatrixAttribute.h>
#include <OpenEXR/ImfPreviewImageAttribute.h>
#include <OpenEXR/ImfRationalAttribute.h>
#include <OpenEXR/ImfStringAttribute.h>
#include <OpenEXR/ImfStringVectorAttribute.h>
#include <OpenEXR/ImfTileDescriptionAttribute.h>
#include <OpenEXR/ImfTimeCodeAttribute.h>
#include <OpenEXR/ImfVecAttribute.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

struct Header {
    using BoundType = Imf::Header;

    IMF_EXPORT
    Header(int width, int height, float pixelAspectRatio,
           const IMATH_NAMESPACE::V2f& screenWindowCenter,
           float screenWindowWidth, Imf::LineOrder lineOrder,
           Imf::Compression compression) CPPMM_RENAME(with_dimensions)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    Header(int width, int height, const IMATH_NAMESPACE::Box2i& dataWindow,
           float pixelAspectRatio,
           const IMATH_NAMESPACE::V2f& screenWindowCenter,
           float screenWindowWidth, Imf::LineOrder lineOrder,
           Imf::Compression compression) CPPMM_IGNORE;

    IMF_EXPORT
    Header(const IMATH_NAMESPACE::Box2i& displayWindow,
           const IMATH_NAMESPACE::Box2i& dataWindow, float pixelAspectRatio,
           const IMATH_NAMESPACE::V2f& screenWindowCenter,
           float screenWindowWidth, Imf::LineOrder lineOrder,
           Imf::Compression compression) CPPMM_RENAME(ctor)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    CPPMM_COPY(Imf, Header)
    IMF_EXPORT
    Header(Imf::Header&& other);
    ~Header();

    IMF_EXPORT
    void insert(const char name[], const Imf::Attribute& attribute)
        CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    void insert(const std::string& name,
                const Imf::Attribute& attribute) CPPMM_IGNORE;

    IMF_EXPORT
    void erase(const char name[])
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    void erase(const std::string& name) CPPMM_IGNORE;

    IMF_EXPORT
    Imf::Attribute& operator[](const char name[]) CPPMM_RENAME(index)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    IMF_EXPORT
    const Imf::Attribute& operator[](const char name[]) const
        CPPMM_RENAME(index_const)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    Imf::Attribute& operator[](const std::string& name) CPPMM_IGNORE;
    IMF_EXPORT
    const Imf::Attribute&
    operator[](const std::string& name) const CPPMM_IGNORE;

    template <class T>
    T& typedAttribute(const char name[])
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    template <class T>
    const T& typedAttribute(const char name[]) const
        CPPMM_RENAME(typedAttribute_const)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    template <class T> T& typedAttribute(const std::string& name) CPPMM_IGNORE;
    template <class T>
    const T& typedAttribute(const std::string& name) const CPPMM_IGNORE;

    template <class T>
    T* findTypedAttribute(const char name[])
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    template <class T>
    const T* findTypedAttribute(const char name[]) const
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    template <class T>
    T* findTypedAttribute(const std::string& name) CPPMM_IGNORE;
    template <class T>
    const T* findTypedAttribute(const std::string& name) const CPPMM_IGNORE;

    IMF_EXPORT
    Imf::Header::Iterator begin();
    IMF_EXPORT
    Imf::Header::ConstIterator begin() const CPPMM_RENAME(begin_const);

    IMF_EXPORT
    Imf::Header::Iterator end();
    IMF_EXPORT
    Imf::Header::ConstIterator end() const CPPMM_RENAME(end_const);

    IMF_EXPORT
    Imf::Header::Iterator find(const char name[]);
    IMF_EXPORT
    Imf::Header::ConstIterator find(const char name[]) const
        CPPMM_RENAME(find_const);

    IMF_EXPORT
    Imf::Header::Iterator find(const std::string& name) CPPMM_IGNORE;
    IMF_EXPORT
    Imf::Header::ConstIterator find(const std::string& name) const CPPMM_IGNORE;

    IMF_EXPORT
    IMATH_NAMESPACE::Box2i& displayWindow();
    IMF_EXPORT
    const IMATH_NAMESPACE::Box2i& displayWindow() const
        CPPMM_RENAME(displayWindow_const);

    IMF_EXPORT
    IMATH_NAMESPACE::Box2i& dataWindow();
    IMF_EXPORT
    const IMATH_NAMESPACE::Box2i& dataWindow() const
        CPPMM_RENAME(dataWindow_const);

    IMF_EXPORT
    float& pixelAspectRatio();
    IMF_EXPORT
    const float& pixelAspectRatio() const CPPMM_RENAME(pixelAspectRatio_const);

    IMF_EXPORT
    IMATH_NAMESPACE::V2f& screenWindowCenter();
    IMF_EXPORT
    const IMATH_NAMESPACE::V2f& screenWindowCenter() const
        CPPMM_RENAME(screenWindowCenter_const);

    IMF_EXPORT
    float& screenWindowWidth();
    IMF_EXPORT
    const float& screenWindowWidth() const
        CPPMM_RENAME(screenWindowWidth_const);

    IMF_EXPORT
    Imf::ChannelList& channels();
    IMF_EXPORT
    const Imf::ChannelList& channels() const CPPMM_RENAME(channels_const);

    IMF_EXPORT
    Imf::LineOrder& lineOrder();
    IMF_EXPORT
    const Imf::LineOrder& lineOrder() const CPPMM_RENAME(lineOrder_const);

    IMF_EXPORT
    Imf::Compression& compression();
    IMF_EXPORT
    const Imf::Compression& compression() const CPPMM_RENAME(compression_const);

    //-----------------------------------------------------
    // The header object allows one to store a compression level to be
    // used when writing a file.
    //
    // NB: These are NOT attributes, and will not be written to the
    // file, but are instead ephemeral settings to be used for this
    // instance of the header object.
    //
    // -----------------------------------------------------
    IMF_EXPORT
    void resetDefaultCompressionLevels();
    IMF_EXPORT
    int& zipCompressionLevel();
    IMF_EXPORT
    int zipCompressionLevel() const;
    IMF_EXPORT
    float& dwaCompressionLevel();
    IMF_EXPORT
    float dwaCompressionLevel() const;

    IMF_EXPORT
    void setName(const std::string& name);

    IMF_EXPORT
    std::string& name() CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    IMF_EXPORT
    const std::string& name() const CPPMM_RENAME(name_const)
        CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    bool hasName() const;

    IMF_EXPORT
    void setType(const std::string& Type);

    IMF_EXPORT
    std::string& type() CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    IMF_EXPORT
    const std::string& type() const CPPMM_RENAME(type_const)
        CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    bool hasType() const;

    IMF_EXPORT
    void setVersion(const int version);

    IMF_EXPORT
    int& version() CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    IMF_EXPORT
    const int& version() const CPPMM_RENAME(version_const)
        CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    bool hasVersion() const;

    IMF_EXPORT
    void setChunkCount(int chunks);
    IMF_EXPORT
    bool hasChunkCount() const;
    IMF_EXPORT
    const int& chunkCount() const CPPMM_RENAME(chunkCount_const)
        CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    IMF_EXPORT
    int& chunkCount() CPPMM_IGNORE;

    IMF_EXPORT
    void setView(const std::string& view);
    IMF_EXPORT
    bool hasView() const;
    IMF_EXPORT
    std::string& view() CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    const std::string& view() const CPPMM_RENAME(view_const)
        CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    void setTileDescription(const Imf::TileDescription& td);

    IMF_EXPORT
    Imf::TileDescription& tileDescription()
        CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    const Imf::TileDescription& tileDescription() const
        CPPMM_RENAME(tileDescription_const)
            CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
                CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    bool hasTileDescription() const;

    IMF_EXPORT
    void setPreviewImage(const Imf::PreviewImage& p);

    IMF_EXPORT
    Imf::PreviewImage& previewImage()
        CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    const Imf::PreviewImage& previewImage() const
        CPPMM_RENAME(previewImage_const)
            CPPMM_THROWS(Iex::TypeExc, IEX_INVALID_TYPE)
                CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    bool hasPreviewImage() const;

    IMF_EXPORT
    void sanityCheck(bool isTiled = false, bool isMultipartFile = false) const
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMF_EXPORT
    static void setMaxImageSize(int maxWidth, int maxHeight);
    IMF_EXPORT
    static void setMaxTileSize(int maxWidth, int maxHeight);

    IMF_EXPORT
    bool readsNothing();

    IMF_EXPORT
    uint64_t writeTo(Imf::OStream& os, bool isTiled = false) const;

    IMF_EXPORT
    void readFrom(Imf::IStream& is, int& version);

    struct Iterator {
        using BoundType = Imf::Header::Iterator;

        IMF_EXPORT
        Iterator();
        IMF_EXPORT
        Iterator(const Imf::Header::AttributeMap::iterator& i) CPPMM_IGNORE;

        Iterator(const Imf::Header::Iterator& rhs);
        Iterator(Imf::Header::Iterator&& rhs);

        IMF_EXPORT
        Imf::Header::Iterator& operator++() CPPMM_RENAME(inc);
        IMF_EXPORT
        Imf::Header::Iterator operator++(int) CPPMM_IGNORE;

        IMF_EXPORT
        const char* name() const;
        IMF_EXPORT
        Imf::Attribute& attribute() const;

    } CPPMM_OPAQUEBYTES;

    struct ConstIterator {
        using BoundType = Imf::Header::ConstIterator;

        IMF_EXPORT
        ConstIterator();
        IMF_EXPORT
        ConstIterator(const Imf::Header::AttributeMap::const_iterator& i)
            CPPMM_IGNORE;
        ConstIterator(const Imf::Header::Iterator& rhs) CPPMM_RENAME(from_mut);

        ConstIterator(const Imf::Header::ConstIterator& rhs);
        ConstIterator(Imf::Header::ConstIterator&& rhs);

        IMF_EXPORT
        Imf::Header::ConstIterator& operator++() CPPMM_RENAME(inc);
        IMF_EXPORT
        Imf::Header::ConstIterator operator++(int) CPPMM_IGNORE;

        IMF_EXPORT
        const char* name() const;
        IMF_EXPORT
        const Imf::Attribute& attribute() const;

    } CPPMM_OPAQUEBYTES;

} CPPMM_OPAQUEBYTES;

// ------------ TypedAttribute<int> ---------------------
extern template Imf::TypedAttribute<int>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<int>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<int>* (Header::*findTypedAttribute_Int)(const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<int>>;

const Imf::TypedAttribute<int>* (Header::*findTypedAttribute_Int_const)(
    const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<int>>;

// ------------ TypedAttribute<float> ---------------------
extern template Imf::TypedAttribute<float>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<float>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<float>* (Header::*findTypedAttribute_Float)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<float>>;

const Imf::TypedAttribute<float>* (Header::*findTypedAttribute_Float_const)(
    const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<float>>;

// ------------ TypedAttribute<double> ---------------------
extern template Imf::TypedAttribute<double>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<double>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<double>* (Header::*findTypedAttribute_Double)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<double>>;

const Imf::TypedAttribute<double>* (Header::*findTypedAttribute_Double_const)(
    const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<double>>;

// ------------ TypedAttribute<Imath::Box2i> ---------------------
extern template Imf::TypedAttribute<Imath::Box2i>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::Box2i>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imath::Box2i>* (Header::*findTypedAttribute_Box2i)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::Box2i>>;

const Imf::TypedAttribute<Imath::Box2i>* (
    Header::*findTypedAttribute_Box2i_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::Box2i>>;

// ------------ TypedAttribute<Imath::Box2f> ---------------------
extern template Imf::TypedAttribute<Imath::Box2f>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::Box2f>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imath::Box2f>* (Header::*findTypedAttribute_Box2f)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::Box2f>>;

const Imf::TypedAttribute<Imath::Box2f>* (
    Header::*findTypedAttribute_Box2f_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::Box2f>>;

// ------------ TypedAttribute<Imf::ChannelList> ---------------------
extern template Imf::TypedAttribute<Imf::ChannelList>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::ChannelList>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imf::ChannelList>* (
    Header::*findTypedAttribute_ChannelList)(const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::ChannelList>>;

const Imf::TypedAttribute<Imf::ChannelList>* (
    Header::*findTypedAttribute_ChannelList_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::ChannelList>>;

// ------------ TypedAttribute<Imf::Chromaticities> ---------------------
extern template Imf::TypedAttribute<Imf::Chromaticities>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::Chromaticities>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imf::Chromaticities>* (
    Header::*findTypedAttribute_Chromaticities)(const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::Chromaticities>>;

const Imf::TypedAttribute<Imf::Chromaticities>* (
    Header::*findTypedAttribute_Chromaticities_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::Chromaticities>>;

// ------------ TypedAttribute<Imf::Compression> ---------------------
extern template Imf::TypedAttribute<Imf::Compression>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::Compression>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imf::Compression>* (
    Header::*findTypedAttribute_Compression)(const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::Compression>>;

const Imf::TypedAttribute<Imf::Compression>* (
    Header::*findTypedAttribute_Compression_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::Compression>>;

// ------------ TypedAttribute<Imf::DeepImageState> ---------------------
extern template Imf::TypedAttribute<Imf::DeepImageState>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::DeepImageState>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imf::DeepImageState>* (
    Header::*findTypedAttribute_DeepImageState)(const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::DeepImageState>>;

const Imf::TypedAttribute<Imf::DeepImageState>* (
    Header::*findTypedAttribute_DeepImageState_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::DeepImageState>>;

// ------------ TypedAttribute<Imf::Envmap> ---------------------
extern template Imf::TypedAttribute<Imf::Envmap>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::Envmap>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imf::Envmap>* (Header::*findTypedAttribute_Envmap)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::Envmap>>;

const Imf::TypedAttribute<Imf::Envmap>* (
    Header::*findTypedAttribute_Envmap_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::Envmap>>;

// ------------ TypedAttribute<std::vector<float>> ---------------------
extern template Imf::TypedAttribute<std::vector<float>>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<std::vector<float>>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<std::vector<float>>* (
    Header::*findTypedAttribute_CppVectorFloat)(const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<std::vector<float>>>;

const Imf::TypedAttribute<std::vector<float>>* (
    Header::*findTypedAttribute_CppVectorFloat_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<std::vector<float>>>;

// ------------ TypedAttribute<std::vector<std::string>> ---------------------
extern template Imf::TypedAttribute<std::vector<std::string>>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<std::vector<std::string>>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<std::vector<std::string>>* (
    Header::*findTypedAttribute_CppVectorString)(const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<std::vector<std::string>>>;

const Imf::TypedAttribute<std::vector<std::string>>* (
    Header::*findTypedAttribute_CppVectorString_const)(
    const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<std::vector<std::string>>>;

// ------------ TypedAttribute<std::string> ---------------------
extern template Imf::TypedAttribute<std::string>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<std::string>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<std::string>* (Header::*findTypedAttribute_CppString)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<std::string>>;

const Imf::TypedAttribute<std::string>* (
    Header::*findTypedAttribute_CppString_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<std::string>>;

// ------------ TypedAttribute<Imf::KeyCode> ---------------------
extern template Imf::TypedAttribute<Imf::KeyCode>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::KeyCode>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imf::KeyCode>* (Header::*findTypedAttribute_KeyCode)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::KeyCode>>;

const Imf::TypedAttribute<Imf::KeyCode>* (
    Header::*findTypedAttribute_KeyCode_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::KeyCode>>;

// ------------ TypedAttribute<Imf::LineOrder> ---------------------
extern template Imf::TypedAttribute<Imf::LineOrder>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::LineOrder>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imf::LineOrder>* (Header::*findTypedAttribute_LineOrder)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::LineOrder>>;

const Imf::TypedAttribute<Imf::LineOrder>* (
    Header::*findTypedAttribute_LineOrder_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::LineOrder>>;

// ------------ TypedAttribute<Imath::M33f> ---------------------
extern template Imf::TypedAttribute<Imath::M33f>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::M33f>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imath::M33f>* (Header::*findTypedAttribute_M33f)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::M33f>>;

const Imf::TypedAttribute<Imath::M33f>* (
    Header::*findTypedAttribute_M33f_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::M33f>>;

// ------------ TypedAttribute<Imath::M33d> ---------------------
extern template Imf::TypedAttribute<Imath::M33d>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::M33d>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imath::M33d>* (Header::*findTypedAttribute_M33d)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::M33d>>;

const Imf::TypedAttribute<Imath::M33d>* (
    Header::*findTypedAttribute_M33d_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::M33d>>;

// ------------ TypedAttribute<Imath::M44f> ---------------------
extern template Imf::TypedAttribute<Imath::M44f>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::M44f>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imath::M44f>* (Header::*findTypedAttribute_M44f)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::M44f>>;

const Imf::TypedAttribute<Imath::M44f>* (
    Header::*findTypedAttribute_M44f_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::M44f>>;

// ------------ TypedAttribute<Imath::M44d> ---------------------
extern template Imf::TypedAttribute<Imath::M44d>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::M44d>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imath::M44d>* (Header::*findTypedAttribute_M44d)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::M44d>>;

const Imf::TypedAttribute<Imath::M44d>* (
    Header::*findTypedAttribute_M44d_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::M44d>>;

// ------------ TypedAttribute<Imf::PreviewImage> ---------------------
extern template Imf::TypedAttribute<Imf::PreviewImage>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::PreviewImage>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imf::PreviewImage>* (
    Header::*findTypedAttribute_PreviewImage)(const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::PreviewImage>>;

const Imf::TypedAttribute<Imf::PreviewImage>* (
    Header::*findTypedAttribute_PreviewImage_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::PreviewImage>>;

// ------------ TypedAttribute<Imf::Rational> ---------------------
extern template Imf::TypedAttribute<Imf::Rational>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::Rational>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imf::Rational>* (Header::*findTypedAttribute_Rational)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::Rational>>;

const Imf::TypedAttribute<Imf::Rational>* (
    Header::*findTypedAttribute_Rational_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::Rational>>;

// ------------ TypedAttribute<Imf::TileDescription> ---------------------
extern template Imf::TypedAttribute<Imf::TileDescription>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::TileDescription>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imf::TileDescription>* (
    Header::*findTypedAttribute_TileDescription)(const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::TileDescription>>;

const Imf::TypedAttribute<Imf::TileDescription>* (
    Header::*findTypedAttribute_TileDescription_const)(
    const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::TileDescription>>;

// ------------ TypedAttribute<Imf::TimeCode> ---------------------
extern template Imf::TypedAttribute<Imf::TimeCode>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::TimeCode>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imf::TimeCode>* (Header::*findTypedAttribute_TimeCode)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::TimeCode>>;

const Imf::TypedAttribute<Imf::TimeCode>* (
    Header::*findTypedAttribute_TimeCode_const)(const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imf::TimeCode>>;

// ------------ TypedAttribute<Imath::V2i> ---------------------
extern template Imf::TypedAttribute<Imath::V2i>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::V2i>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imath::V2i>* (Header::*findTypedAttribute_V2i)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::V2i>>;

const Imf::TypedAttribute<Imath::V2i>* (Header::*findTypedAttribute_V2i_const)(
    const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::V2i>>;

// ------------ TypedAttribute<Imath::V2f> ---------------------
extern template Imf::TypedAttribute<Imath::V2f>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::V2f>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imath::V2f>* (Header::*findTypedAttribute_V2f)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::V2f>>;

const Imf::TypedAttribute<Imath::V2f>* (Header::*findTypedAttribute_V2f_const)(
    const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::V2f>>;

// ------------ TypedAttribute<Imath::V2d> ---------------------
extern template Imf::TypedAttribute<Imath::V2d>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::V2d>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imath::V2d>* (Header::*findTypedAttribute_V2d)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::V2d>>;

const Imf::TypedAttribute<Imath::V2d>* (Header::*findTypedAttribute_V2d_const)(
    const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::V2d>>;

// ------------ TypedAttribute<Imath::V3i> ---------------------
extern template Imf::TypedAttribute<Imath::V3i>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::V3i>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imath::V3i>* (Header::*findTypedAttribute_V3i)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::V3i>>;

const Imf::TypedAttribute<Imath::V3i>* (Header::*findTypedAttribute_V3i_const)(
    const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::V3i>>;

// ------------ TypedAttribute<Imath::V3f> ---------------------
extern template Imf::TypedAttribute<Imath::V3f>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::V3f>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imath::V3f>* (Header::*findTypedAttribute_V3f)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::V3f>>;

const Imf::TypedAttribute<Imath::V3f>* (Header::*findTypedAttribute_V3f_const)(
    const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::V3f>>;

// ------------ TypedAttribute<Imath::V3d> ---------------------
extern template Imf::TypedAttribute<Imath::V3d>*
Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::V3d>*
Header::findTypedAttribute(const char name[]) const;

Imf::TypedAttribute<Imath::V3d>* (Header::*findTypedAttribute_V3d)(
    const char name[]) =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::V3d>>;

const Imf::TypedAttribute<Imath::V3d>* (Header::*findTypedAttribute_V3d_const)(
    const char name[]) const =
    &Header::findTypedAttribute<Imf::TypedAttribute<Imath::V3d>>;

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

// ------------ TypedAttribute<int> ---------------------
extern template Imf::TypedAttribute<int>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<int>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<float> ---------------------
extern template Imf::TypedAttribute<float>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<float>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<double> ---------------------
extern template Imf::TypedAttribute<double>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<double>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imath::Box2i> ---------------------
extern template Imf::TypedAttribute<Imath::Box2i>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::Box2i>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imath::Box2f> ---------------------
extern template Imf::TypedAttribute<Imath::Box2f>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::Box2f>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imf::ChannelList> ---------------------
extern template Imf::TypedAttribute<Imf::ChannelList>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::ChannelList>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imf::Chromaticities> ---------------------
extern template Imf::TypedAttribute<Imf::Chromaticities>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::Chromaticities>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imf::Compression> ---------------------
extern template Imf::TypedAttribute<Imf::Compression>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::Compression>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imf::DeepImageState> ---------------------
extern template Imf::TypedAttribute<Imf::DeepImageState>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::DeepImageState>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imf::Envmap> ---------------------
extern template Imf::TypedAttribute<Imf::Envmap>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::Envmap>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<std::vector<float>> ---------------------
extern template Imf::TypedAttribute<std::vector<float>>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<std::vector<float>>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<std::vector<std::string>> ---------------------
extern template Imf::TypedAttribute<std::vector<std::string>>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<std::vector<std::string>>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<std::string> ---------------------
extern template Imf::TypedAttribute<std::string>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<std::string>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imf::KeyCode> ---------------------
extern template Imf::TypedAttribute<Imf::KeyCode>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::KeyCode>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imf::LineOrder> ---------------------
extern template Imf::TypedAttribute<Imf::LineOrder>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::LineOrder>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imath::M33f> ---------------------
extern template Imf::TypedAttribute<Imath::M33f>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::M33f>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imath::M33d> ---------------------
extern template Imf::TypedAttribute<Imath::M33d>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::M33d>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imath::M44f> ---------------------
extern template Imf::TypedAttribute<Imath::M44f>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::M44f>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imath::M44d> ---------------------
extern template Imf::TypedAttribute<Imath::M44d>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::M44d>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imf::PreviewImage> ---------------------
extern template Imf::TypedAttribute<Imf::PreviewImage>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::PreviewImage>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imf::Rational> ---------------------
extern template Imf::TypedAttribute<Imf::Rational>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::Rational>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imf::TileDescription> ---------------------
extern template Imf::TypedAttribute<Imf::TileDescription>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::TileDescription>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imf::TimeCode> ---------------------
extern template Imf::TypedAttribute<Imf::TimeCode>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imf::TimeCode>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imath::V2i> ---------------------
extern template Imf::TypedAttribute<Imath::V2i>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::V2i>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imath::V2f> ---------------------
extern template Imf::TypedAttribute<Imath::V2f>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::V2f>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imath::V2d> ---------------------
extern template Imf::TypedAttribute<Imath::V2d>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::V2d>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imath::V3i> ---------------------
extern template Imf::TypedAttribute<Imath::V3i>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::V3i>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imath::V3f> ---------------------
extern template Imf::TypedAttribute<Imath::V3f>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::V3f>*
Imf::Header::findTypedAttribute(const char name[]) const;

// ------------ TypedAttribute<Imath::V3d> ---------------------
extern template Imf::TypedAttribute<Imath::V3d>*
Imf::Header::findTypedAttribute(const char name[]);

extern template const Imf::TypedAttribute<Imath::V3d>*
Imf::Header::findTypedAttribute(const char name[]) const;

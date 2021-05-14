#include <OpenEXR/ImfFlatImage.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

struct FlatImage {
    using BoundType = Imf::FlatImage;

    // inherited from Image
    IMFUTIL_EXPORT
    Imf::LevelMode levelMode() const;
    IMFUTIL_EXPORT
    Imf::LevelRoundingMode levelRoundingMode() const;

    IMFUTIL_EXPORT
    int numLevels() const CPPMM_THROWS(Iex::LogicExc, IEX_LOGIC_ERROR);
    IMFUTIL_EXPORT
    int numXLevels() const CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    IMFUTIL_EXPORT
    int numYLevels() const CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMFUTIL_EXPORT
    const IMATH_NAMESPACE::Box2i& dataWindow() const;
    IMFUTIL_EXPORT
    const IMATH_NAMESPACE::Box2i& dataWindowForLevel(int l) const CPPMM_IGNORE;
    IMFUTIL_EXPORT
    const IMATH_NAMESPACE::Box2i& dataWindowForLevel(int lx, int ly) const
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMFUTIL_EXPORT
    int levelWidth(int lx) const
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    IMFUTIL_EXPORT
    int levelHeight(int ly) const
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMFUTIL_EXPORT
    void resize(const IMATH_NAMESPACE::Box2i& dataWindow) CPPMM_IGNORE;

    IMFUTIL_EXPORT
    virtual void resize(const IMATH_NAMESPACE::Box2i& dataWindow,
                        Imf::LevelMode levelMode,
                        Imf::LevelRoundingMode levelRoundingMode)
        CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    IMFUTIL_EXPORT
    void shiftPixels(int dx, int dy)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    IMFUTIL_EXPORT
    void insertChannel(const std::string& name, Imf::PixelType type,
                       int xSampling = 1, int ySampling = 1,
                       bool pLinear = false)
        CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    IMFUTIL_EXPORT
    void insertChannel(const std::string& name,
                       const Imf::Channel& channel) CPPMM_IGNORE;
    IMFUTIL_EXPORT
    void eraseChannel(const std::string& name);
    IMFUTIL_EXPORT
    void clearChannels();
    IMFUTIL_EXPORT
    void renameChannel(const std::string& oldName, const std::string& newName)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT)
            CPPMM_THROWS(std::exception, IEX_OUT_OF_MEMORY);

    IMFUTIL_EXPORT
    void renameChannels(const Imf::RenamingMap& oldToNewNames)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT)
            CPPMM_THROWS(std::exception, IEX_OUT_OF_MEMORY) CPPMM_IGNORE;

    IMFUTIL_EXPORT
    FlatImage() CPPMM_RENAME(default);

    IMFUTIL_EXPORT
    FlatImage(const IMATH_NAMESPACE::Box2i& dataWindow,
              Imf::LevelMode levelMode,
              Imf::LevelRoundingMode levelRoundingMode) CPPMM_RENAME(ctor)
        CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    virtual ~FlatImage();

    virtual Imf::FlatImageLevel& level(int l = 0) CPPMM_IGNORE;
    virtual const Imf::FlatImageLevel& level(int l = 0) const CPPMM_IGNORE;
    virtual Imf::FlatImageLevel& level(int lx, int ly)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);
    virtual const Imf::FlatImageLevel& level(int lx, int ly) const
        CPPMM_RENAME(level_const)
            CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

} CPPMM_OPAQUEPTR;

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

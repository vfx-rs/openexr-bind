#include <OpenEXR/ImfName.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

struct Name {
    using BoundType = Imf::Name;

    IMF_EXPORT
    Name() CPPMM_RENAME(default);
    IMF_EXPORT
    Name(const char text[]);

    IMF_EXPORT
    Imf::Name& operator=(const char text[]);

    CPPMM_COPY(Imf, Name)
    Name(Imf::Name&& rhs);
    ~Name();

    const char* text() const;
    const char* operator*() const CPPMM_IGNORE;

    static const int SIZE = 256;
    static const int MAX_LENGTH = SIZE - 1;

} CPPMM_OPAQUEBYTES;

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

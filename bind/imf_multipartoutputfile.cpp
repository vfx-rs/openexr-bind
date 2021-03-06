#include <OpenEXR/IexBaseExc.h>
#include <OpenEXR/ImfMultiPartOutputFile.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace OPENEXR_IMF_INTERNAL_NAMESPACE {

namespace Imf = ::OPENEXR_IMF_INTERNAL_NAMESPACE;

struct MultiPartOutputFile {
    using BoundType = Imf::MultiPartOutputFile;

    IMF_EXPORT
    MultiPartOutputFile(const char fileName[], const Imf::Header* headers,
                        int parts, bool overrideSharedAttributes,
                        int numThreads) CPPMM_RENAME(ctor)
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT)
            CPPMM_THROWS(Iex::BaseExc, IEX_BASE);

    IMF_EXPORT
    MultiPartOutputFile(Imf::OStream& os, const Imf::Header* headers, int parts,
                        bool overrideSharedAttributes, int numThreads)
        CPPMM_RENAME(from_stream);

    //
    // return number of parts in file
    //
    IMF_EXPORT
    int parts() const;

    //
    // return header for part n
    // (note: may have additional attributes compared to that passed to
    // constructor)
    //
    IMF_EXPORT
    const Imf::Header& header(int n) const
        CPPMM_THROWS(Iex::ArgExc, IEX_INVALID_ARGUMENT);

    ~MultiPartOutputFile();

} CPPMM_OPAQUEPTR;

} // namespace OPENEXR_IMF_INTERNAL_NAMESPACE

} // namespace cppmm_bind

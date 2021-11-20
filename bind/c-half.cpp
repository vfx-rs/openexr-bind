#include <Imath/half.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace IMATH_INTERNAL_NAMESPACE {

namespace Imath = ::IMATH_INTERNAL_NAMESPACE;

class half {
public:
    using BoundType = ::half;

    enum FromBitsTag {};

    half();
    half(float f) CPPMM_RENAME(from_float);
    ~half();
    half(const Imath::half& rhs) CPPMM_RENAME(copy);
    half(Imath::half&&) CPPMM_IGNORE;
    half(Imath::half::FromBitsTag tag, unsigned short bits);

    operator float() const;

    Imath::half operator-() const;
    Imath::half& operator=(const Imath::half& h);
    Imath::half& operator=(float f);

    Imath::half& operator+=(Imath::half h);
    Imath::half& operator+=(float f);

    Imath::half& operator-=(Imath::half h);
    Imath::half& operator-=(float f);

    Imath::half& operator*=(Imath::half h);
    Imath::half& operator*=(float f);

    Imath::half& operator/=(Imath::half h);
    Imath::half& operator/=(float f);

    Imath::half round(unsigned int n) const;

    bool isFinite() const;
    bool isNormalized() const;
    bool isDenormalized() const;
    bool isZero() const;
    bool isNan() const;
    bool isInfinity() const;
    bool isNegative() const;

    static Imath::half posInf();
    static Imath::half negInf();
    static Imath::half qNan();
    static Imath::half sNan();

    unsigned short bits() const;
    void setBits(unsigned short bits);

} CPPMM_VALUETYPE;

} // namespace IMATH_INTERNAL_NAMESPACE

} // namespace cppmm_bind

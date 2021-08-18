#include "imf_deepframebuffer_private.h"

#include "imf_framebuffer_private.h"
#include "imf_pixeltype_private.h"
#include <new>

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepSlice_sizeof()
{
        return sizeof(Imf_3_0::DeepSlice);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepSlice_alignof()
{
        return alignof(Imf_3_0::DeepSlice);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepSlice_ctor(
    Imf_DeepSlice_t * this_
    , Imf_PixelType type
    , char * base
    , unsigned long xStride
    , unsigned long yStride
    , unsigned long sampleStride
    , int xSampling
    , int ySampling
    , double fillValue
    , _Bool xTileCoords
    , _Bool yTileCoords)
{
    try {
        new (this_) Imf_3_0::DeepSlice(Imf_PixelType_to_cpp_ref(&(type)), base, xStride, yStride, sampleStride, xSampling, ySampling, fillValue, xTileCoords, yTileCoords);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepSlice_dtor(
    Imf_DeepSlice_t * this_)
{
    try {
        (to_cpp(this_)) -> Imf_3_0::DeepSlice::~DeepSlice();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepSlice_copy(
    Imf_DeepSlice_t * this_
    , Imf_DeepSlice_t const * rhs)
{
    try {
        new (this_) Imf_3_0::DeepSlice(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer_insert(
    Imf_DeepFrameBuffer_t * this_
    , char const * name
    , Imf_DeepSlice_t const * slice)
{
    try {
        (to_cpp(this_)) -> insert(name, to_cpp_ref(slice));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer_findSlice(
    Imf_DeepFrameBuffer_t * this_
    , Imf_DeepSlice_t * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findSlice(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer_findSlice_const(
    Imf_DeepFrameBuffer_t const * this_
    , Imf_DeepSlice_t const * * return_
    , char const * name)
{
    try {
        to_c(return_, (to_cpp(this_)) -> findSlice(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer_begin(
    Imf_DeepFrameBuffer_t * this_
    , Imf_DeepFrameBuffer_Iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer_begin_const(
    Imf_DeepFrameBuffer_t const * this_
    , Imf_DeepFrameBuffer_ConstIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer_end(
    Imf_DeepFrameBuffer_t * this_
    , Imf_DeepFrameBuffer_Iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer_end_const(
    Imf_DeepFrameBuffer_t const * this_
    , Imf_DeepFrameBuffer_ConstIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer_insertSampleCountSlice(
    Imf_DeepFrameBuffer_t * this_
    , Imf_Slice_t const * slice)
{
    try {
        (to_cpp(this_)) -> insertSampleCountSlice(to_cpp_ref(slice));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer_getSampleCountSlice(
    Imf_DeepFrameBuffer_t const * this_
    , Imf_Slice_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> getSampleCountSlice());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer_copy(
    Imf_DeepFrameBuffer_t * * this_
    , Imf_DeepFrameBuffer_t const * rhs)
{
    try {
        to_c(this_, new Imf_3_0::DeepFrameBuffer(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer_dtor(
    Imf_DeepFrameBuffer_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer_ctor(
    Imf_DeepFrameBuffer_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::DeepFrameBuffer());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__Iterator_sizeof()
{
        return sizeof(Imf_3_0::DeepFrameBuffer::Iterator);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__Iterator_alignof()
{
        return alignof(Imf_3_0::DeepFrameBuffer::Iterator);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__Iterator_ctor(
    Imf_DeepFrameBuffer_Iterator_t * this_)
{
    try {
        new (this_) Imf_3_0::DeepFrameBuffer::Iterator();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__Iterator__op_inc(
    Imf_DeepFrameBuffer_Iterator_t * this_
    , Imf_DeepFrameBuffer_Iterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__Iterator_name(
    Imf_DeepFrameBuffer_Iterator_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> name();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__Iterator_slice(
    Imf_DeepFrameBuffer_Iterator_t const * this_
    , Imf_DeepSlice_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> slice());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__Iterator_copy(
    Imf_DeepFrameBuffer_Iterator_t * this_
    , Imf_DeepFrameBuffer_Iterator_t const * rhs)
{
        new (this_) Imf_3_0::DeepFrameBuffer::Iterator(to_cpp_ref(rhs));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_sizeof()
{
        return sizeof(Imf_3_0::DeepFrameBuffer::ConstIterator);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_alignof()
{
        return alignof(Imf_3_0::DeepFrameBuffer::ConstIterator);
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_ctor(
    Imf_DeepFrameBuffer_ConstIterator_t * this_)
{
    try {
        new (this_) Imf_3_0::DeepFrameBuffer::ConstIterator();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_from_mut(
    Imf_DeepFrameBuffer_ConstIterator_t * this_
    , Imf_DeepFrameBuffer_Iterator_t const * rhs)
{
    try {
        new (this_) Imf_3_0::DeepFrameBuffer::ConstIterator(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator__op_inc(
    Imf_DeepFrameBuffer_ConstIterator_t * this_
    , Imf_DeepFrameBuffer_ConstIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_name(
    Imf_DeepFrameBuffer_ConstIterator_t const * this_
    , char const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> name();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_slice(
    Imf_DeepFrameBuffer_ConstIterator_t const * this_
    , Imf_DeepSlice_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> slice());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0__DeepFrameBuffer__ConstIterator_copy(
    Imf_DeepFrameBuffer_ConstIterator_t * this_
    , Imf_DeepFrameBuffer_ConstIterator_t const * rhs)
{
        new (this_) Imf_3_0::DeepFrameBuffer::ConstIterator(to_cpp_ref(rhs));
        return 0;
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_deep_frame_buffer_const_iter_eq(
    _Bool * return_
    , Imf_DeepFrameBuffer_ConstIterator_t const * _param0
    , Imf_DeepFrameBuffer_ConstIterator_t const * _param1)
{
    try {
        *(return_) = (to_cpp_ref(_param0) == to_cpp_ref(_param1));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


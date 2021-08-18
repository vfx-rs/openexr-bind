#include "imf_framebuffer_private.h"

#include "imath_box_private.h"
#include "imath_vec_private.h"
#include "imf_pixeltype_private.h"
#include <new>

#include <stdexcept>

unsigned int Imf_3_0__Slice_sizeof()
{
        return sizeof(Imf_3_0::Slice);
}

unsigned int Imf_3_0__Slice_alignof()
{
        return alignof(Imf_3_0::Slice);
}

unsigned int Imf_3_0__Slice_ctor(
    Imf_Slice_t * this_
    , Imf_PixelType type
    , char * base
    , unsigned long xStride
    , unsigned long yStride
    , int xSampling
    , int ySampling
    , double fillValue
    , _Bool xTileCoords
    , _Bool yTileCoords)
{
    try {
        new (this_) Imf_3_0::Slice(Imf_PixelType_to_cpp_ref(&(type)), base, xStride, yStride, xSampling, ySampling, fillValue, xTileCoords, yTileCoords);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Slice_with_origin(
    Imf_Slice_t * return_
    , Imf_PixelType type
    , void const * ptr
    , Imath_V2i_t const * origin
    , long w
    , long h
    , unsigned long xStride
    , unsigned long yStride
    , int xSampling
    , int ySampling
    , double fillValue
    , _Bool xTileCoords
    , _Bool yTileCoords)
{
    try {
        to_c_copy(return_, Imf_3_0::Slice::Make(Imf_PixelType_to_cpp_ref(&(type)), ptr, to_cpp_ref(origin), w, h, xStride, yStride, xSampling, ySampling, fillValue, xTileCoords, yTileCoords));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Slice_with_window(
    Imf_Slice_t * return_
    , Imf_PixelType type
    , void const * ptr
    , Imath_Box2i_t const * dataWindow
    , unsigned long xStride
    , unsigned long yStride
    , int xSampling
    , int ySampling
    , double fillValue
    , _Bool xTileCoords
    , _Bool yTileCoords)
{
    try {
        to_c_copy(return_, Imf_3_0::Slice::Make(Imf_PixelType_to_cpp_ref(&(type)), ptr, to_cpp_ref(dataWindow), xStride, yStride, xSampling, ySampling, fillValue, xTileCoords, yTileCoords));
        return 0;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Slice_dtor(
    Imf_Slice_t * this_)
{
    try {
        (to_cpp(this_)) -> Imf_3_0::Slice::~Slice();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__Slice_copy(
    Imf_Slice_t * this_
    , Imf_Slice_t const * rhs)
{
    try {
        new (this_) Imf_3_0::Slice(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer_insert(
    Imf_FrameBuffer_t * this_
    , char const * name
    , Imf_Slice_t const * slice)
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

unsigned int Imf_3_0__FrameBuffer_findSlice(
    Imf_FrameBuffer_t * this_
    , Imf_Slice_t * * return_
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

unsigned int Imf_3_0__FrameBuffer_findSlice_const(
    Imf_FrameBuffer_t const * this_
    , Imf_Slice_t const * * return_
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

unsigned int Imf_3_0__FrameBuffer_begin(
    Imf_FrameBuffer_t * this_
    , Imf_FrameBuffer_Iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer_begin_const(
    Imf_FrameBuffer_t const * this_
    , Imf_FrameBuffer_ConstIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer_end(
    Imf_FrameBuffer_t * this_
    , Imf_FrameBuffer_Iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer_end_const(
    Imf_FrameBuffer_t const * this_
    , Imf_FrameBuffer_ConstIterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer_find(
    Imf_FrameBuffer_t * this_
    , Imf_FrameBuffer_Iterator_t * return_
    , char const * name)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> find(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer_find_1(
    Imf_FrameBuffer_t const * this_
    , Imf_FrameBuffer_ConstIterator_t * return_
    , char const * name)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> find(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer_copy(
    Imf_FrameBuffer_t * * this_
    , Imf_FrameBuffer_t const * rhs)
{
    try {
        to_c(this_, new Imf_3_0::FrameBuffer(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer_dtor(
    Imf_FrameBuffer_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer_ctor(
    Imf_FrameBuffer_t * * this_)
{
    try {
        to_c(this_, new Imf_3_0::FrameBuffer());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer__Iterator_sizeof()
{
        return sizeof(Imf_3_0::FrameBuffer::Iterator);
}

unsigned int Imf_3_0__FrameBuffer__Iterator_alignof()
{
        return alignof(Imf_3_0::FrameBuffer::Iterator);
}

unsigned int Imf_3_0__FrameBuffer__Iterator_ctor(
    Imf_FrameBuffer_Iterator_t * this_)
{
    try {
        new (this_) Imf_3_0::FrameBuffer::Iterator();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer__Iterator__op_inc(
    Imf_FrameBuffer_Iterator_t * this_
    , Imf_FrameBuffer_Iterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer__Iterator_name(
    Imf_FrameBuffer_Iterator_t const * this_
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

unsigned int Imf_3_0__FrameBuffer__Iterator_slice(
    Imf_FrameBuffer_Iterator_t const * this_
    , Imf_Slice_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> slice());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer__Iterator_copy(
    Imf_FrameBuffer_Iterator_t * this_
    , Imf_FrameBuffer_Iterator_t const * rhs)
{
        new (this_) Imf_3_0::FrameBuffer::Iterator(to_cpp_ref(rhs));
        return 0;
}

unsigned int Imf_3_0__FrameBuffer__ConstIterator_sizeof()
{
        return sizeof(Imf_3_0::FrameBuffer::ConstIterator);
}

unsigned int Imf_3_0__FrameBuffer__ConstIterator_alignof()
{
        return alignof(Imf_3_0::FrameBuffer::ConstIterator);
}

unsigned int Imf_3_0__FrameBuffer__ConstIterator_ctor(
    Imf_FrameBuffer_ConstIterator_t * this_)
{
    try {
        new (this_) Imf_3_0::FrameBuffer::ConstIterator();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer__ConstIterator_from_mut(
    Imf_FrameBuffer_ConstIterator_t * this_
    , Imf_FrameBuffer_Iterator_t const * rhs)
{
    try {
        new (this_) Imf_3_0::FrameBuffer::ConstIterator(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer__ConstIterator__op_inc(
    Imf_FrameBuffer_ConstIterator_t * this_
    , Imf_FrameBuffer_ConstIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer__ConstIterator_name(
    Imf_FrameBuffer_ConstIterator_t const * this_
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

unsigned int Imf_3_0__FrameBuffer__ConstIterator_slice(
    Imf_FrameBuffer_ConstIterator_t const * this_
    , Imf_Slice_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> slice());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0__FrameBuffer__ConstIterator_copy(
    Imf_FrameBuffer_ConstIterator_t * this_
    , Imf_FrameBuffer_ConstIterator_t const * rhs)
{
        new (this_) Imf_3_0::FrameBuffer::ConstIterator(to_cpp_ref(rhs));
        return 0;
}

unsigned int Imf_3_0_frame_buffer_const_iter_eq(
    _Bool * return_
    , Imf_FrameBuffer_ConstIterator_t const * _param0
    , Imf_FrameBuffer_ConstIterator_t const * _param1)
{
    try {
        *(return_) = (to_cpp_ref(_param0) == to_cpp_ref(_param1));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


#include "imf_deepimageio_private.h"

#include "imf_deepimage_private.h"
#include "imf_header_private.h"
#include "imf_imagedatawindow_private.h"
#include "std_string_private.h"

#include <stdexcept>

unsigned int Imf_3_0_saveDeepImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_DeepImage_t const * img
    , Imf_DataWindowSource dws)
{
    try {
        Imf_3_0::saveDeepImage(to_cpp_ref(fileName), to_cpp_ref(hdr), to_cpp_ref(img), Imf_DataWindowSource_to_cpp_ref(&(dws)));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_saveDeepImage(
    std_string_t const * fileName
    , Imf_DeepImage_t const * img)
{
    try {
        Imf_3_0::saveDeepImage(to_cpp_ref(fileName), to_cpp_ref(img));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_loadDeepImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t * hdr
    , Imf_DeepImage_t * img)
{
    try {
        Imf_3_0::loadDeepImage(to_cpp_ref(fileName), to_cpp_ref(hdr), to_cpp_ref(img));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_loadDeepImage(
    std_string_t const * fileName
    , Imf_DeepImage_t * img)
{
    try {
        Imf_3_0::loadDeepImage(to_cpp_ref(fileName), to_cpp_ref(img));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (Iex::ArgExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 1;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_saveDeepScanLineImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_DeepImage_t const * img
    , Imf_DataWindowSource dws)
{
    try {
        Imf_3_0::saveDeepScanLineImage(to_cpp_ref(fileName), to_cpp_ref(hdr), to_cpp_ref(img), Imf_DataWindowSource_to_cpp_ref(&(dws)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_saveDeepScanLineImage(
    std_string_t const * fileName
    , Imf_DeepImage_t const * img)
{
    try {
        Imf_3_0::saveDeepScanLineImage(to_cpp_ref(fileName), to_cpp_ref(img));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_loadDeepScanLineImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t * hdr
    , Imf_DeepImage_t * img)
{
    try {
        Imf_3_0::loadDeepScanLineImage(to_cpp_ref(fileName), to_cpp_ref(hdr), to_cpp_ref(img));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_loadDeepScanLineImage(
    std_string_t const * fileName
    , Imf_DeepImage_t * img)
{
    try {
        Imf_3_0::loadDeepScanLineImage(to_cpp_ref(fileName), to_cpp_ref(img));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_saveDeepTiledImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_DeepImage_t const * img
    , Imf_DataWindowSource dws)
{
    try {
        Imf_3_0::saveDeepTiledImage(to_cpp_ref(fileName), to_cpp_ref(hdr), to_cpp_ref(img), Imf_DataWindowSource_to_cpp_ref(&(dws)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_saveDeepTiledImage(
    std_string_t const * fileName
    , Imf_DeepImage_t const * img)
{
    try {
        Imf_3_0::saveDeepTiledImage(to_cpp_ref(fileName), to_cpp_ref(img));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_loadDeepTiledImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t * hdr
    , Imf_DeepImage_t * img)
{
    try {
        Imf_3_0::loadDeepTiledImage(to_cpp_ref(fileName), to_cpp_ref(hdr), to_cpp_ref(img));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_loadDeepTiledImage(
    std_string_t const * fileName
    , Imf_DeepImage_t * img)
{
    try {
        Imf_3_0::loadDeepTiledImage(to_cpp_ref(fileName), to_cpp_ref(img));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


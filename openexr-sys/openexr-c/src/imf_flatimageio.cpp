#include "imf_flatimageio_private.h"

#include "imf_flatimage_private.h"
#include "imf_header_private.h"
#include "imf_imagedatawindow_private.h"
#include "std_string_private.h"

#include <stdexcept>

OPENEXR_CPPMM_API unsigned int Imf_3_0_saveFlatImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_FlatImage_t const * img
    , Imf_DataWindowSource dws)
{
    try {
        Imf_3_0::saveFlatImage(to_cpp_ref(fileName), to_cpp_ref(hdr), to_cpp_ref(img), Imf_DataWindowSource_to_cpp_ref(&(dws)));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_saveFlatImage(
    std_string_t const * fileName
    , Imf_FlatImage_t const * img)
{
    try {
        Imf_3_0::saveFlatImage(to_cpp_ref(fileName), to_cpp_ref(img));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_loadFlatImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t * hdr
    , Imf_FlatImage_t * img)
{
    try {
        Imf_3_0::loadFlatImage(to_cpp_ref(fileName), to_cpp_ref(hdr), to_cpp_ref(img));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_loadFlatImage(
    std_string_t const * fileName
    , Imf_FlatImage_t * img)
{
    try {
        Imf_3_0::loadFlatImage(to_cpp_ref(fileName), to_cpp_ref(img));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_saveFlatScanLineImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_FlatImage_t const * img
    , Imf_DataWindowSource dws)
{
    try {
        Imf_3_0::saveFlatScanLineImage(to_cpp_ref(fileName), to_cpp_ref(hdr), to_cpp_ref(img), Imf_DataWindowSource_to_cpp_ref(&(dws)));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_saveFlatScanLineImage(
    std_string_t const * fileName
    , Imf_FlatImage_t const * img)
{
    try {
        Imf_3_0::saveFlatScanLineImage(to_cpp_ref(fileName), to_cpp_ref(img));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_loadFlatScanLineImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t * hdr
    , Imf_FlatImage_t * img)
{
    try {
        Imf_3_0::loadFlatScanLineImage(to_cpp_ref(fileName), to_cpp_ref(hdr), to_cpp_ref(img));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_loadFlatScanLineImage(
    std_string_t const * fileName
    , Imf_FlatImage_t * img)
{
    try {
        Imf_3_0::loadFlatScanLineImage(to_cpp_ref(fileName), to_cpp_ref(img));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_saveFlatTiledImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_FlatImage_t const * img
    , Imf_DataWindowSource dws)
{
    try {
        Imf_3_0::saveFlatTiledImage(to_cpp_ref(fileName), to_cpp_ref(hdr), to_cpp_ref(img), Imf_DataWindowSource_to_cpp_ref(&(dws)));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_saveFlatTiledImage(
    std_string_t const * fileName
    , Imf_FlatImage_t const * img)
{
    try {
        Imf_3_0::saveFlatTiledImage(to_cpp_ref(fileName), to_cpp_ref(img));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_loadFlatTiledImage_with_header(
    std_string_t const * fileName
    , Imf_Header_t * hdr
    , Imf_FlatImage_t * img)
{
    try {
        Imf_3_0::loadFlatTiledImage(to_cpp_ref(fileName), to_cpp_ref(hdr), to_cpp_ref(img));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

OPENEXR_CPPMM_API unsigned int Imf_3_0_loadFlatTiledImage(
    std_string_t const * fileName
    , Imf_FlatImage_t * img)
{
    try {
        Imf_3_0::loadFlatTiledImage(to_cpp_ref(fileName), to_cpp_ref(img));
        return 0;
    } catch (Iex::BaseExc& e) {
        TLG_EXCEPTION_STRING = e.what();
        return 2;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


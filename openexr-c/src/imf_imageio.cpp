#include "imf_imageio_private.h"

#include "imf_header_private.h"
#include "imf_image_private.h"
#include "imf_imagedatawindow_private.h"
#include "std_string_private.h"

#include <stdexcept>

unsigned int Imf_3_0_saveImage(
    std_string_t const * fileName
    , Imf_Header_t const * hdr
    , Imf_Image_t const * img
    , Imf_DataWindowSource dws)
{
    try {
        Imf_3_0::saveImage(to_cpp_ref(fileName), to_cpp_ref(hdr), to_cpp_ref(img), Imf_DataWindowSource_to_cpp_ref(&(dws)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_saveImage_1(
    std_string_t const * fileName
    , Imf_Image_t const * img)
{
    try {
        Imf_3_0::saveImage(to_cpp_ref(fileName), to_cpp_ref(img));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_loadImage(
    Imf_Image_t * * return_
    , std_string_t const * fileName
    , Imf_Header_t * hdr)
{
    try {
        to_c(return_, Imf_3_0::loadImage(to_cpp_ref(fileName), to_cpp_ref(hdr)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

unsigned int Imf_3_0_loadImage_1(
    Imf_Image_t * * return_
    , std_string_t const * fileName)
{
    try {
        to_c(return_, Imf_3_0::loadImage(to_cpp_ref(fileName)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


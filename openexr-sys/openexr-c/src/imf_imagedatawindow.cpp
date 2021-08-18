#include "imf_imagedatawindow_private.h"

#include "imath_box_private.h"
#include "imf_header_private.h"
#include "imf_image_private.h"

#include <stdexcept>

unsigned int Imf_3_0_dataWindowForFile(
    Imath_Box2i_t * return_
    , Imf_Header_t const * hdr
    , Imf_Image_t const * img
    , Imf_DataWindowSource dws)
{
    try {
        to_c_copy(return_, Imf_3_0::dataWindowForFile(to_cpp_ref(hdr), to_cpp_ref(img), Imf_DataWindowSource_to_cpp_ref(&(dws))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}


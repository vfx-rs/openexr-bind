cmake_minimum_required(VERSION 3.5)
project(openexr-c VERSION 3.0.1)
set(CMAKE_CXX_STANDARD 14 CACHE STRING "")
set(LIBNAME openexr-c-3_0)
add_library(${LIBNAME} SHARED
    imf_lineorder.cpp
    imf_deeptiledoutputpart.cpp
    imf_flatimageio.cpp
    imf_chromaticities.cpp
    imf_deepscanlineoutputpart.cpp
    imf_testfile.cpp
    imf_header.cpp
    imf_deepframebuffer.cpp
    imf_envmap.cpp
    imf_tiledrgbafile.cpp
    imf_multipartoutputfile.cpp
    imf_keycode.cpp
    imf_imagechannel.cpp
    imf_deepimagestate.cpp
    imf_previewimage.cpp
    imf_lut.cpp
    imf_compositedeepscanline.cpp
    imf_pixeltype.cpp
    imf_tiledescription.cpp
    imf_deeptiledinputpart.cpp
    imf_framebuffer.cpp
    imf_imagedatawindow.cpp
    imf_multipartinputfile.cpp
    imf_huf.cpp
    imf_aces_file.cpp
    imf_deepscanlineinputfile.cpp
    imf_name.cpp
    imf_wav.cpp
    imf_version.cpp
    imf_rgba.cpp
    imf_rational.cpp
    imf_deeptiledoutputfile.cpp
    imf_threading.cpp
    imf_tiledoutputpart.cpp
    imf_compression.cpp
    imf_deepimagechannel.cpp
    imf_attribute.cpp
    std_vector.cpp
    std_map.cpp
    imf_flatimagechannel.cpp
    imf_channellist.cpp
    imf_inputfile.cpp
    imf_deepscanlineoutputfile.cpp
    imf_outputpart.cpp
    imf_deepscanlineinputpart.cpp
    imf_timecode.cpp
    imf_imagelevel.cpp
    imath_box.cpp
    imf_convert.cpp
    imf_outputfile.cpp
    imath_vec.cpp
    std_set.cpp
    imf_rgbayca.cpp
    imf_image.cpp
    imf_deepcompositing.cpp
    imf_io.cpp
    imf_samplecountchannel.cpp
    imf_imageio.cpp
    imf_deepimageio.cpp
    imf_flatimagelevel.cpp
    imf_parttype.cpp
    imf_deeptiledinputfile.cpp
    imf_rgbafile.cpp
    imf_inputpart.cpp
    imf_multiview.cpp
    std_string.cpp
    imf_tiledoutputfile.cpp
    imf_tiledinputpart.cpp
    imf_flatimage.cpp
    imf_array.cpp
    imath_matrix.cpp
    c-half.cpp
    imf_framespersecond.cpp
    imf_parthelper.cpp
    imf_deepimagelevel.cpp
    imf_deepimage.cpp
    imf_tiledinputfile.cpp
openexr-errors.cpp
)
target_include_directories(${LIBNAME} PRIVATE .)
target_include_directories(${LIBNAME} PRIVATE ${OPENEXR_ROOT}/include)
target_include_directories(${LIBNAME} PRIVATE ${IMATH_ROOT}/include/Imath)
target_include_directories(${LIBNAME} PRIVATE ${OPENEXR_ROOT}/include/OpenEXR)
find_library ( LIB_OPENEXR-3_0 NAMES OpenEXR-3_0 PATHS ${OPENEXR_ROOT}/lib)
target_link_libraries (${LIBNAME} ${LIB_OPENEXR-3_0})
find_library ( LIB_OPENEXRUTIL-3_0 NAMES OpenEXRUtil-3_0 PATHS ${OPENEXR_ROOT}/lib)
target_link_libraries (${LIBNAME} ${LIB_OPENEXRUTIL-3_0})
install(TARGETS ${LIBNAME} DESTINATION ${CMAKE_INSTALL_PREFIX})

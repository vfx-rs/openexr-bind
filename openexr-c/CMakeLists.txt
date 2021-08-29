cmake_minimum_required(VERSION 3.5)
project(openexr-c VERSION 0.10.0)
set(CMAKE_CXX_STANDARD 14 CACHE STRING "")
set(SOURCES
    src/std_vector.cpp
    include/std_vector.h
    src/imf_huf.cpp
    src/imf_keycode.cpp
    src/imf_imagelevel.cpp
    src/imf_tiledescription.cpp
    src/imf_rational.cpp
    src/imf_rgba.cpp
    src/imf_framebuffer.cpp
    src/imf_deepscanlineoutputfile.cpp
    src/imf_flatimageio.cpp
    src/imf_wav.cpp
    src/imf_deepscanlineinputpart.cpp
    src/imf_deeptiledinputfile.cpp
    src/imf_framespersecond.cpp
    src/imf_io.cpp
    src/imf_outputpart.cpp
    src/imf_lut.cpp
    src/imf_envmap.cpp
    src/imath_matrix.cpp
    src/imf_tiledinputfile.cpp
    src/imf_array.cpp
    src/std_set.cpp
    src/imf_compression.cpp
    src/imf_deeptiledoutputfile.cpp
    src/imf_inputpart.cpp
    src/c-half.cpp
    src/imf_inputfile.cpp
    src/imf_deepscanlineinputfile.cpp
    src/imf_attribute.cpp
    src/imf_deepimage.cpp
    src/imf_tiledrgbafile.cpp
    src/imf_deepframebuffer.cpp
    src/imf_convert.cpp
    src/imf_timecode.cpp
    src/imf_deepscanlineoutputpart.cpp
    src/imf_tiledoutputfile.cpp
    src/imf_deeptiledinputpart.cpp
    src/imf_deepimagelevel.cpp
    src/imf_tiledinputpart.cpp
    src/imf_multipartinputfile.cpp
    src/imf_testfile.cpp
    src/imf_header.cpp
    src/imf_compositedeepscanline.cpp
    src/imf_deepimagestate.cpp
    src/imf_rgbayca.cpp
    src/imf_threading.cpp
    src/imf_deepimageio.cpp
    src/imf_parthelper.cpp
    src/imf_imagedatawindow.cpp
    src/std_map.cpp
    src/imf_lineorder.cpp
    src/imf_flatimage.cpp
    src/imf_previewimage.cpp
    src/imath_vec.cpp
    src/imf_deepimagechannel.cpp
    src/imf_channellist.cpp
    src/imf_deeptiledoutputpart.cpp
    src/imf_flatimagechannel.cpp
    src/imf_imagechannel.cpp
    src/imf_version.cpp
    src/imf_parttype.cpp
    src/imath_box.cpp
    src/imf_imageio.cpp
    src/imf_deepcompositing.cpp
    src/imf_rgbafile.cpp
    src/imf_aces_file.cpp
    src/imf_tiledoutputpart.cpp
    src/imf_samplecountchannel.cpp
    src/std_string.cpp
    src/imf_outputfile.cpp
    src/imf_multiview.cpp
    src/imf_pixeltype.cpp
    src/imf_image.cpp
    src/imf_name.cpp
    src/imf_multipartoutputfile.cpp
    src/imf_chromaticities.cpp
    src/imf_flatimagelevel.cpp
    src/openexr-errors.cpp
)
find_package(OpenEXR REQUIRED)
find_package(Imath REQUIRED)

add_subdirectory(abigen)
add_custom_command(OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/include/std_vector.h
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/include.in/std_vector.h 
    COMMAND abigen
    COMMAND python ARGS ${CMAKE_CURRENT_SOURCE_DIR}/abigen/insert_abi.py ${CMAKE_CURRENT_SOURCE_DIR}/include.in ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_BINARY_DIR}/abigen.txt
)
set(LIBNAME openexr-c-0_10)
add_library(${LIBNAME} STATIC ${SOURCES})
add_library(${LIBNAME}-shared SHARED ${SOURCES})

set_target_properties(${LIBNAME} PROPERTIES CXX_VISIBILITY_PRESET hidden)
set_target_properties(${LIBNAME}-shared PROPERTIES CXX_VISIBILITY_PRESET hidden)


target_compile_definitions(${LIBNAME} PRIVATE OPENEXR_CPPMM_BUILD_EXPORT)

target_compile_definitions(${LIBNAME}-shared PRIVATE OPENEXR_CPPMM_BUILD_EXPORT)
if (WIN32)
target_compile_definitions(${LIBNAME} PRIVATE _Bool=bool)
target_compile_definitions(${LIBNAME}-shared PRIVATE _Bool=bool)
endif()
target_include_directories(${LIBNAME} PRIVATE /home/anders/packages/imath/3.0.5/include)
target_include_directories(${LIBNAME}-shared PRIVATE /home/anders/packages/imath/3.0.5/include)
target_include_directories(${LIBNAME} PRIVATE /home/anders/packages/imath/3.0.5/include/Imath)
target_include_directories(${LIBNAME}-shared PRIVATE /home/anders/packages/imath/3.0.5/include/Imath)
target_include_directories(${LIBNAME} PRIVATE /home/anders/packages/openexr/3.0.5/include)
target_include_directories(${LIBNAME}-shared PRIVATE /home/anders/packages/openexr/3.0.5/include)
target_include_directories(${LIBNAME} PRIVATE /home/anders/packages/openexr/3.0.5/include/OpenEXR)
target_include_directories(${LIBNAME}-shared PRIVATE /home/anders/packages/openexr/3.0.5/include/OpenEXR)
target_include_directories(${LIBNAME} PRIVATE include)
target_include_directories(${LIBNAME}-shared PRIVATE include)
target_include_directories(${LIBNAME} PRIVATE src)
target_include_directories(${LIBNAME}-shared PRIVATE src)
target_link_libraries(${LIBNAME} OpenEXR::OpenEXR)
target_link_libraries(${LIBNAME}-shared OpenEXR::OpenEXR)
target_link_libraries(${LIBNAME} OpenEXR::OpenEXRUtil)
target_link_libraries(${LIBNAME}-shared OpenEXR::OpenEXRUtil)
install(TARGETS ${LIBNAME} DESTINATION ${CMAKE_INSTALL_PREFIX})
install(TARGETS ${LIBNAME}-shared DESTINATION ${CMAKE_INSTALL_PREFIX})

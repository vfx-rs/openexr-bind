#include <fstream>

#include "std_vector.hpp"
#include "imf_huf.hpp"
#include "imf_keycode.hpp"
#include "imf_imagelevel.hpp"
#include "imf_tiledescription.hpp"
#include "imf_rational.hpp"
#include "imf_rgba.hpp"
#include "imf_framebuffer.hpp"
#include "imf_deepscanlineoutputfile.hpp"
#include "imf_flatimageio.hpp"
#include "imf_wav.hpp"
#include "imf_deepscanlineinputpart.hpp"
#include "imf_deeptiledinputfile.hpp"
#include "imf_framespersecond.hpp"
#include "imf_io.hpp"
#include "imf_outputpart.hpp"
#include "imf_lut.hpp"
#include "imf_envmap.hpp"
#include "imath_matrix.hpp"
#include "imf_tiledinputfile.hpp"
#include "imf_array.hpp"
#include "std_set.hpp"
#include "imf_compression.hpp"
#include "imf_deeptiledoutputfile.hpp"
#include "imf_inputpart.hpp"
#include "c-half.hpp"
#include "imf_inputfile.hpp"
#include "imf_deepscanlineinputfile.hpp"
#include "imf_attribute.hpp"
#include "imf_deepimage.hpp"
#include "imf_tiledrgbafile.hpp"
#include "imf_deepframebuffer.hpp"
#include "imf_convert.hpp"
#include "imf_timecode.hpp"
#include "imf_deepscanlineoutputpart.hpp"
#include "imf_tiledoutputfile.hpp"
#include "imf_deeptiledinputpart.hpp"
#include "imf_deepimagelevel.hpp"
#include "imf_tiledinputpart.hpp"
#include "imf_multipartinputfile.hpp"
#include "imf_testfile.hpp"
#include "imf_header.hpp"
#include "imf_compositedeepscanline.hpp"
#include "imf_deepimagestate.hpp"
#include "imf_rgbayca.hpp"
#include "imf_threading.hpp"
#include "imf_deepimageio.hpp"
#include "imf_parthelper.hpp"
#include "imf_imagedatawindow.hpp"
#include "std_map.hpp"
#include "imf_lineorder.hpp"
#include "imf_flatimage.hpp"
#include "imf_previewimage.hpp"
#include "imath_vec.hpp"
#include "imf_deepimagechannel.hpp"
#include "imf_channellist.hpp"
#include "imf_deeptiledoutputpart.hpp"
#include "imf_flatimagechannel.hpp"
#include "imf_imagechannel.hpp"
#include "imf_version.hpp"
#include "imf_parttype.hpp"
#include "imath_box.hpp"
#include "imf_imageio.hpp"
#include "imf_deepcompositing.hpp"
#include "imf_rgbafile.hpp"
#include "imf_aces_file.hpp"
#include "imf_tiledoutputpart.hpp"
#include "imf_samplecountchannel.hpp"
#include "std_string.hpp"
#include "imf_outputfile.hpp"
#include "imf_multiview.hpp"
#include "imf_pixeltype.hpp"
#include "imf_image.hpp"
#include "imf_name.hpp"
#include "imf_multipartoutputfile.hpp"
#include "imf_chromaticities.hpp"
#include "imf_flatimagelevel.hpp"

int main() {
    std::ofstream os("abigen.txt");

    abi_gen_std_vector(os);
    abi_gen_imf_huf(os);
    abi_gen_imf_keycode(os);
    abi_gen_imf_imagelevel(os);
    abi_gen_imf_tiledescription(os);
    abi_gen_imf_rational(os);
    abi_gen_imf_rgba(os);
    abi_gen_imf_framebuffer(os);
    abi_gen_imf_deepscanlineoutputfile(os);
    abi_gen_imf_flatimageio(os);
    abi_gen_imf_wav(os);
    abi_gen_imf_deepscanlineinputpart(os);
    abi_gen_imf_deeptiledinputfile(os);
    abi_gen_imf_framespersecond(os);
    abi_gen_imf_io(os);
    abi_gen_imf_outputpart(os);
    abi_gen_imf_lut(os);
    abi_gen_imf_envmap(os);
    abi_gen_imath_matrix(os);
    abi_gen_imf_tiledinputfile(os);
    abi_gen_imf_array(os);
    abi_gen_std_set(os);
    abi_gen_imf_compression(os);
    abi_gen_imf_deeptiledoutputfile(os);
    abi_gen_imf_inputpart(os);
    abi_gen_c_half(os);
    abi_gen_imf_inputfile(os);
    abi_gen_imf_deepscanlineinputfile(os);
    abi_gen_imf_attribute(os);
    abi_gen_imf_deepimage(os);
    abi_gen_imf_tiledrgbafile(os);
    abi_gen_imf_deepframebuffer(os);
    abi_gen_imf_convert(os);
    abi_gen_imf_timecode(os);
    abi_gen_imf_deepscanlineoutputpart(os);
    abi_gen_imf_tiledoutputfile(os);
    abi_gen_imf_deeptiledinputpart(os);
    abi_gen_imf_deepimagelevel(os);
    abi_gen_imf_tiledinputpart(os);
    abi_gen_imf_multipartinputfile(os);
    abi_gen_imf_testfile(os);
    abi_gen_imf_header(os);
    abi_gen_imf_compositedeepscanline(os);
    abi_gen_imf_deepimagestate(os);
    abi_gen_imf_rgbayca(os);
    abi_gen_imf_threading(os);
    abi_gen_imf_deepimageio(os);
    abi_gen_imf_parthelper(os);
    abi_gen_imf_imagedatawindow(os);
    abi_gen_std_map(os);
    abi_gen_imf_lineorder(os);
    abi_gen_imf_flatimage(os);
    abi_gen_imf_previewimage(os);
    abi_gen_imath_vec(os);
    abi_gen_imf_deepimagechannel(os);
    abi_gen_imf_channellist(os);
    abi_gen_imf_deeptiledoutputpart(os);
    abi_gen_imf_flatimagechannel(os);
    abi_gen_imf_imagechannel(os);
    abi_gen_imf_version(os);
    abi_gen_imf_parttype(os);
    abi_gen_imath_box(os);
    abi_gen_imf_imageio(os);
    abi_gen_imf_deepcompositing(os);
    abi_gen_imf_rgbafile(os);
    abi_gen_imf_aces_file(os);
    abi_gen_imf_tiledoutputpart(os);
    abi_gen_imf_samplecountchannel(os);
    abi_gen_std_string(os);
    abi_gen_imf_outputfile(os);
    abi_gen_imf_multiview(os);
    abi_gen_imf_pixeltype(os);
    abi_gen_imf_image(os);
    abi_gen_imf_name(os);
    abi_gen_imf_multipartoutputfile(os);
    abi_gen_imf_chromaticities(os);
    abi_gen_imf_flatimagelevel(os);
}

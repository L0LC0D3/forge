#include "heavy.h"
#include "mods.h"

int mod_068(int x)
{
    static const uint32_t local[256] = {
        0x6ca406cfu, 0xc5b0c5e2u, 0x08530bd9u, 0xe7900364u, 0xb4dcf773u, 0xa07a5636u, 0x8c44d81du, 0xe4de7ad8u, 0x7fc54057u, 0x9994e1cau, 0x67aee6a1u, 0xb5edcf8cu, 0x7ee0457bu, 0xd2847c9eu, 0xe23e3b65u, 0x521f3580u,
        0x10d5aadfu, 0xe9247ab2u, 0x978e1a69u, 0x216d20b4u, 0x9b955483u, 0xe37b7006u, 0xe8ec07adu, 0xdb5f4528u, 0x16bb6667u, 0x0ecf309au, 0x495bc731u, 0xfb3e96dcu, 0xaa34448bu, 0x65f8d06eu, 0xe7db5cf5u, 0x7d8949d0u,
        0x852092efu, 0x52f8a382u, 0x7be70cf9u, 0xdaa6d204u, 0x50f93593u, 0xdfca3dd6u, 0x383d5b3du, 0x72dbe378u, 0xe4f35077u, 0xaa78736au, 0x27e30bc1u, 0xdf7e722cu, 0x1da4479bu, 0x3071583eu, 0x79672285u, 0xdd69b220u,
        0xfce5beffu, 0x451a4052u, 0x7c66e389u, 0xc4b21754u, 0x75f99aa3u, 0xc7a3bfa6u, 0x5551d2cdu, 0xc19955c8u, 0x89edfe87u, 0xec1daa3au, 0xab6db451u, 0x42c2617cu, 0x98414eabu, 0xabcb140eu, 0xd51a8c15u, 0x50a56e70u,
        0x07c62f0fu, 0x30b65122u, 0x46569e19u, 0xc243f0a4u, 0xabc783b3u, 0x5084f576u, 0x45826e5du, 0x831c9c18u, 0x896c7097u, 0x6a8bd50au, 0x2a64c0e1u, 0x5e5f64ccu, 0xe15c59bbu, 0x3d2303deu, 0xab6e99a5u, 0x03617ec0u,
        0xa1a2e31fu, 0x8639d5f2u, 0xfd3f3ca9u, 0x37515df4u, 0xa3d3f0c3u, 0x832adf46u, 0xc8682dedu, 0x682ab668u, 0x5b6fa6a7u, 0xa3cff3dau, 0x39713171u, 0x14ea7c1cu, 0xd88668cbu, 0x04d627aeu, 0xaf1c4b35u, 0xbf02e310u,
        0x429cdb2fu, 0x8551cec2u, 0xcae9bf39u, 0x590f5f44u, 0x2fcfe1d3u, 0x8b927d16u, 0xe7dc117du, 0x66c8a4b8u, 0x7c38a0b7u, 0xcd3706aau, 0x3b7c0601u, 0x4238a76cu, 0x85907bdbu, 0xae817f7eu, 0x251ca0c5u, 0x3a2e9b60u,
        0xef15173fu, 0x0ceb3b92u, 0x6f5f25c9u, 0x7df2f494u, 0x51ac56e3u, 0x88f8cee6u, 0x87f7190du, 0x0a3b6708u, 0x7c485ec7u, 0xa34e0d7au, 0xf1ae3e91u, 0x0b5ee6bcu, 0x288b92ebu, 0x41020b4eu, 0x74a89a55u, 0x68c9a7b0u,
        0x47ac974fu, 0x6b331c62u, 0xd0e87059u, 0x6db11de4u, 0x4b9a4ff3u, 0x5ddad4b6u, 0xf712449du, 0xc307fd58u, 0x105fe0d7u, 0x39e2084au, 0x0b70db21u, 0x2eb23a0cu, 0x49c8adfbu, 0xee74cb1eu, 0xb73937e5u, 0xcbf90800u,
        0x99445b5fu, 0x2d967132u, 0x8c0e9ee9u, 0xb13edb34u, 0xb00acd03u, 0x7ff58e86u, 0x7dc6942du, 0x36f367a8u, 0x218026e7u, 0xcbfff71au, 0xb66cdbb1u, 0x53c7a15cu, 0xc9d8cd0bu, 0xe436beeeu, 0x48877975u, 0xc221bc50u,
        0xecfd636fu, 0xf0c23a02u, 0x839ab179u, 0xe2d12c84u, 0x71aece13u, 0xc845fc56u, 0xeeed07bdu, 0x9102a5f8u, 0xdcea30f7u, 0x8bf4d9eau, 0x2e8b4041u, 0x5b741cacu, 0xf18cf01bu, 0x1ae4e6beu, 0x568c5f05u, 0xd6e8c4a0u,
        0x1838af7fu, 0x30a376d2u, 0x7095a809u, 0xfddd11d4u, 0xf3775323u, 0x43091e26u, 0x379e9f4du, 0xd17ab848u, 0xc41eff07u, 0x734db0bau, 0x4df508d1u, 0xafccabfcu, 0x81f6172bu, 0x265c428eu, 0x7180e895u, 0x133320f0u,
        0xcc973f8fu, 0x186727a2u, 0x72488299u, 0xaf178b24u, 0x18955c33u, 0xffbbf3f6u, 0xef345addu, 0x1de09e98u, 0xbcdf9117u, 0x12d77b8au, 0x1d133561u, 0x94264f4cu, 0xc465423bu, 0x05b9d25eu, 0x1bde1625u, 0x4d25d140u,
        0xa7fa139fu, 0x527a4c72u, 0x9e3c4129u, 0xa4759874u, 0x5479e943u, 0xe11b7dc6u, 0xe7473a6du, 0x10f958e8u, 0x212ce727u, 0x629f3a5au, 0x628ec5f1u, 0x7516069cu, 0x9a6b714bu, 0xf35a962eu, 0x5a5ce7b5u, 0x7825d590u,
        0x44822bafu, 0xd889e542u, 0x9039e3b9u, 0xdd2c39c4u, 0xbad5fa53u, 0x6d24bb96u, 0xbbb03dfdu, 0x0ac9e738u, 0xcf480137u, 0x91f1ed2au, 0x3350ba81u, 0x3870d1ecu, 0x8dd9a45bu, 0x34db8dfeu, 0x43f65d45u, 0xf4d82de0u,
        0x489087bfu, 0xc382f212u, 0xfa4a6a49u, 0xf9b06f14u, 0x0f9a8f63u, 0x9d14ad66u, 0x6288658du, 0x80974988u, 0x39b1df47u, 0xd75c93fau, 0x82821311u, 0x8d4bb13cu, 0xe0c0db6bu, 0xeb19b9ceu, 0x91e376d5u, 0xe121da30u,
    };
    uint32_t acc = 0x79867530u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 68) & 255]);
        buf[i] = acc;
    }

    for (r = 0; r < 18; r++) {
        for (i = 0; i < 96; i++) {
            k = (i + r * 3 + 1) % 96;
            buf[i] = heavy_round(buf[i], buf[k] ^ local[(buf[i] >> 16) & 255]);
            buf[i] ^= HEAVY_ROTL32(buf[k], (r & 31));
        }
        acc = heavy_round(acc, buf[r & 95]);
    }

    switch (acc & 63) {
    case 0: acc = heavy_round(acc, 0x38028b7fu); break;
    case 1: acc = heavy_round(acc, 0xb78ba2d2u); break;
    case 2: acc = heavy_round(acc, 0x17e7e409u); break;
    case 3: acc = heavy_round(acc, 0x1cf21dd4u); break;
    case 4: acc = heavy_round(acc, 0x1650ef23u); break;
    case 5: acc = heavy_round(acc, 0xf83e0a26u); break;
    case 6: acc = heavy_round(acc, 0x8d569b4du); break;
    case 7: acc = heavy_round(acc, 0x163a8448u); break;
    case 8: acc = heavy_round(acc, 0x99245b07u); break;
    case 9: acc = heavy_round(acc, 0x633b5cbau); break;
    case 10: acc = heavy_round(acc, 0xfb8ec4d1u); break;
    case 11: acc = heavy_round(acc, 0x1d8337fcu); break;
    case 12: acc = heavy_round(acc, 0x7c03332bu); break;
    case 13: acc = heavy_round(acc, 0xce2eae8eu); break;
    case 14: acc = heavy_round(acc, 0x5a386495u); break;
    case 15: acc = heavy_round(acc, 0x1bec6cf0u); break;
    case 16: acc = heavy_round(acc, 0x7e481b8fu); break;
    case 17: acc = heavy_round(acc, 0x120a53a2u); break;
    case 18: acc = heavy_round(acc, 0x6f19be99u); break;
    case 19: acc = heavy_round(acc, 0xbf9f9724u); break;
    case 20: acc = heavy_round(acc, 0x5045f833u); break;
    case 21: acc = heavy_round(acc, 0x6ddbdff6u); break;
    case 22: acc = heavy_round(acc, 0x4adb56ddu); break;
    case 23: acc = heavy_round(acc, 0xe9c36a98u); break;
    case 24: acc = heavy_round(acc, 0x60abed17u); break;
    case 25: acc = heavy_round(acc, 0xcce0278au); break;
    case 26: acc = heavy_round(acc, 0xd00bf161u); break;
    case 27: acc = heavy_round(acc, 0x21afdb4cu); break;
    case 28: acc = heavy_round(acc, 0x6e295e3bu); break;
    case 29: acc = heavy_round(acc, 0x83d73e5eu); break;
    case 30: acc = heavy_round(acc, 0xc8649225u); break;
    case 31: acc = heavy_round(acc, 0xc1621d40u); break;
    case 32: acc = heavy_round(acc, 0x0151ef9fu); break;
    case 33: acc = heavy_round(acc, 0x59987872u); break;
    case 34: acc = heavy_round(acc, 0x4c4c7d29u); break;
    case 35: acc = heavy_round(acc, 0xcf30a474u); break;
    case 36: acc = heavy_round(acc, 0x32c18543u); break;
    case 37: acc = heavy_round(acc, 0xeee669c6u); break;
    case 38: acc = heavy_round(acc, 0x809d366du); break;
    case 39: acc = heavy_round(acc, 0xb8bf24e8u); break;
    case 40: acc = heavy_round(acc, 0x61804327u); break;
    case 41: acc = heavy_round(acc, 0xd982e65au); break;
    case 42: acc = heavy_round(acc, 0xeea681f1u); break;
    case 43: acc = heavy_round(acc, 0x6332929cu); break;
    case 44: acc = heavy_round(acc, 0xbda68d4bu); break;
    case 45: acc = heavy_round(acc, 0x0683022eu); break;
    case 46: acc = heavy_round(acc, 0xfa7263b5u); break;
    case 47: acc = heavy_round(acc, 0x44a52190u); break;
    case 48: acc = heavy_round(acc, 0xcb4107afu); break;
    case 49: acc = heavy_round(acc, 0x37e31142u); break;
    case 50: acc = heavy_round(acc, 0x3b491fb9u); break;
    case 51: acc = heavy_round(acc, 0x7ada45c4u); break;
    case 52: acc = heavy_round(acc, 0x41749653u); break;
    case 53: acc = heavy_round(acc, 0xb15aa796u); break;
    case 54: acc = heavy_round(acc, 0xba7539fdu); break;
    case 55: acc = heavy_round(acc, 0x1332b338u); break;
    case 56: acc = heavy_round(acc, 0xe9e25d37u); break;
    case 57: acc = heavy_round(acc, 0x6870992au); break;
    case 58: acc = heavy_round(acc, 0x5c477681u); break;
    case 59: acc = heavy_round(acc, 0xf7e05decu); break;
    case 60: acc = heavy_round(acc, 0x644bc05bu); break;
    case 61: acc = heavy_round(acc, 0x4bcef9feu); break;
    case 62: acc = heavy_round(acc, 0xf75ad945u); break;
    case 63: acc = heavy_round(acc, 0x365a79e0u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

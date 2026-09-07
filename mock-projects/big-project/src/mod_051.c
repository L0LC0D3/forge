#include "heavy.h"
#include "mods.h"

int mod_051(int x)
{
    static const uint32_t local[256] = {
        0xcc95dc5au, 0xdaa0fff1u, 0x7b1ef89cu, 0x1b4bbb4bu, 0x163a582eu, 0x3905c1b5u, 0x5794e790u, 0xa05215afu, 0x3354c742u, 0x14935db9u, 0x26536bc4u, 0xf1bf8453u, 0xbdfcbd96u, 0x197457fdu, 0x7a1b3938u, 0xdf152b37u,
        0x38190f2au, 0x8cd97481u, 0x687e43ecu, 0x7bf46e5bu, 0xb2b3cffeu, 0x443db745u, 0x3053bfe0u, 0xcc02f1bfu, 0x608e5412u, 0x0eea6449u, 0x2d6c2114u, 0xdb0e9963u, 0x27f52f66u, 0x95baff8du, 0x4d851b88u, 0xe5718947u,
        0x87d435fau, 0xf5214d11u, 0x7a7da33cu, 0x74b6256bu, 0x640a7bceu, 0x956950d5u, 0xadc9ec30u, 0x947b11cfu, 0x8cfe54e2u, 0x053d4ed9u, 0xa1276a64u, 0x83973273u, 0x16715536u, 0xda69cb1du, 0x5090d1d8u, 0x857dab57u,
        0xd19450cau, 0xdce189a1u, 0xc172168cu, 0xb7e1e07bu, 0x7e5b5b9eu, 0x00018e65u, 0xc31c6c80u, 0x109b75dfu, 0x8811c9b2u, 0xee151d69u, 0x9c7a47b4u, 0xe7ca4f83u, 0x612e2f06u, 0x2a19baadu, 0xdb035c28u, 0xb23a9167u,
        0xd2665f9au, 0x0bc32a31u, 0xb6f09ddcu, 0xd0089f8bu, 0xd1036f6eu, 0x19bf6ff5u, 0xc0b040d0u, 0x93851defu, 0xb075b282u, 0x863acff9u, 0xcb99b904u, 0xe458f093u, 0xc328bcd6u, 0xd1a3ce3du, 0x49e1ba78u, 0x22e93b77u,
        0xbe97626au, 0xd7af2ec1u, 0x8dce392cu, 0x2ffb629bu, 0x769fb73eu, 0xca9bf585u, 0xa42a6920u, 0xbc9909ffu, 0xc4170f52u, 0xe0b76689u, 0xbbfabe54u, 0x463415a3u, 0xaa9dfea6u, 0xb82105cdu, 0x4f70ecc8u, 0x630aa987u,
        0x11b4593au, 0xb4ce9751u, 0x821fe87cu, 0x42cb29abu, 0xa50d330eu, 0xdcd01f15u, 0x686fe570u, 0x87783a0fu, 0xb022e022u, 0xf6d3e119u, 0x2c5257a4u, 0xda8cbeb3u, 0x090af476u, 0xeeea615du, 0x4335f318u, 0xe25fdb97u,
        0x5e8a440au, 0xc58a63e1u, 0x293aabccu, 0x7bc8f4bbu, 0x7d68e2deu, 0x8cd4eca5u, 0x55a5b5c0u, 0x5c03ae1fu, 0x610624f2u, 0x38193fa9u, 0x5c9584f4u, 0x7ed3ebc3u, 0x232c9e46u, 0x4198e0edu, 0x71f5cd68u, 0x04e9d1a7u,
        0x1f2622dau, 0x6a8b9471u, 0xc1b3831cu, 0x6685c3cbu, 0xdc0fc6aeu, 0x19635e35u, 0x5130da10u, 0x1e5c662fu, 0x926dddc2u, 0x1a508239u, 0x5df94644u, 0x30ba9cd3u, 0x60fffc16u, 0xc605847du, 0x6db57bb8u, 0x32e98bb7u,
        0x84d4f5aau, 0xd2bb2901u, 0x835f6e6cu, 0xb6d296dbu, 0x289ede7eu, 0x537473c5u, 0x2db65260u, 0x3ee3623fu, 0x9f470a92u, 0xa982a8c9u, 0x62f29b94u, 0x1e31d1e3u, 0x1dc20de6u, 0x6c494c0du, 0x5db9fe08u, 0xe8e009c7u,
        0x4823bc7au, 0x8b422191u, 0xef536dbcu, 0x58c06debu, 0x25f32a4eu, 0x2e412d55u, 0xfb1b1eb0u, 0xca39a24fu, 0x51beab62u, 0x17f8b359u, 0x0f3684e4u, 0xb56a8af3u, 0x77efd3b6u, 0x8ebd379du, 0x4e885458u, 0xc78e4bd7u,
        0x78df774au, 0x0f897e21u, 0x1fe4810cu, 0x80a048fbu, 0xc229aa1eu, 0x4f428ae5u, 0x56843f00u, 0x7940265fu, 0xb341c032u, 0x4e3ba1e9u, 0xc7ba0234u, 0xb4d5c803u, 0x21464d86u, 0x81fa472du, 0x81e57ea8u, 0xa3f551e7u,
        0x4e15261au, 0x593a3eb1u, 0x18a7a85cu, 0xbb03280bu, 0xe69f5deeu, 0x9e318c75u, 0xba56b350u, 0xc117ee6fu, 0xdc7d4902u, 0x7b147479u, 0x02b21384u, 0x3b248913u, 0x2ec27b56u, 0x24d97abdu, 0xbed67cf8u, 0x97561bf7u,
        0xf611c8eau, 0x703d6341u, 0x1671e3acu, 0xfcba0b1bu, 0x47f145beu, 0xd5073205u, 0xce377ba0u, 0xe321fa7fu, 0xc55e45d2u, 0xa38c2b09u, 0x9793b8d4u, 0xd747ce23u, 0xe8a15d26u, 0x7073d24du, 0xa1a04f48u, 0x0f31aa07u,
        0x66625fbau, 0xfabbebd1u, 0xdf5832fcu, 0xb2d5f22bu, 0x35fc618eu, 0x0ffc7b95u, 0xb70b97f0u, 0xfcff4a8fu, 0x1511b6a2u, 0x32ebc599u, 0x0f13f224u, 0x98709733u, 0x9a5ff2f6u, 0x08224dddu, 0xebc7f598u, 0xdd48fc17u,
        0x2bd3ea8au, 0xcd1ed861u, 0x12af964cu, 0xd2a7dd3bu, 0x6bddb15eu, 0x5d8a6925u, 0x66f80840u, 0x1890de9fu, 0xf2049b72u, 0x8abc4429u, 0xf327bf74u, 0x1e0fe443u, 0x62bb3cc6u, 0xc97ded6du, 0xd4126fe8u, 0x479d1227u,
    };
    uint32_t acc = 0x33a79127u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 51) & 255]);
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
    case 0: acc = heavy_round(acc, 0x7af14414u); break;
    case 1: acc = heavy_round(acc, 0x41c36063u); break;
    case 2: acc = heavy_round(acc, 0xd56d4a66u); break;
    case 3: acc = heavy_round(acc, 0xe2965e8du); break;
    case 4: acc = heavy_round(acc, 0xe382ee88u); break;
    case 5: acc = heavy_round(acc, 0x40674047u); break;
    case 6: acc = heavy_round(acc, 0xec3880fau); break;
    case 7: acc = heavy_round(acc, 0x571b1c11u); break;
    case 8: acc = heavy_round(acc, 0x33a7263cu); break;
    case 9: acc = heavy_round(acc, 0x3103cc6bu); break;
    case 10: acc = heavy_round(acc, 0x3385f6ceu); break;
    case 11: acc = heavy_round(acc, 0x54b08fd5u); break;
    case 12: acc = heavy_round(acc, 0xee821f30u); break;
    case 13: acc = heavy_round(acc, 0x3d27a8cfu); break;
    case 14: acc = heavy_round(acc, 0xa0ebffe2u); break;
    case 15: acc = heavy_round(acc, 0x6d70fdd9u); break;
    case 16: acc = heavy_round(acc, 0x9a814d64u); break;
    case 17: acc = heavy_round(acc, 0x2899b973u); break;
    case 18: acc = heavy_round(acc, 0xa85c3036u); break;
    case 19: acc = heavy_round(acc, 0x3998ea1du); break;
    case 20: acc = heavy_round(acc, 0xf34f64d8u); break;
    case 21: acc = heavy_round(acc, 0x12bd2257u); break;
    case 22: acc = heavy_round(acc, 0xe6375bcau); break;
    case 23: acc = heavy_round(acc, 0xf28b18a1u); break;
    case 24: acc = heavy_round(acc, 0x6108598cu); break;
    case 25: acc = heavy_round(acc, 0x3c35477bu); break;
    case 26: acc = heavy_round(acc, 0x80a1969eu); break;
    case 27: acc = heavy_round(acc, 0xdc148d65u); break;
    case 28: acc = heavy_round(acc, 0x68ad5f80u); break;
    case 29: acc = heavy_round(acc, 0xf4c9ccdfu); break;
    case 30: acc = heavy_round(acc, 0x141634b2u); break;
    case 31: acc = heavy_round(acc, 0x3ff08c69u); break;
    case 32: acc = heavy_round(acc, 0x09d8eab4u); break;
    case 33: acc = heavy_round(acc, 0x158a9683u); break;
    case 34: acc = heavy_round(acc, 0x3f3bca06u); break;
    case 35: acc = heavy_round(acc, 0xff8c99adu); break;
    case 36: acc = heavy_round(acc, 0x3db2af28u); break;
    case 37: acc = heavy_round(acc, 0xab33c867u); break;
    case 38: acc = heavy_round(acc, 0x21f82a9au); break;
    case 39: acc = heavy_round(acc, 0x000c7931u); break;
    case 40: acc = heavy_round(acc, 0x0b23a0dcu); break;
    case 41: acc = heavy_round(acc, 0xb4d1c68bu); break;
    case 42: acc = heavy_round(acc, 0x63c46a6eu); break;
    case 43: acc = heavy_round(acc, 0xf48e2ef5u); break;
    case 44: acc = heavy_round(acc, 0xe449f3d0u); break;
    case 45: acc = heavy_round(acc, 0x1aa534efu); break;
    case 46: acc = heavy_round(acc, 0x9540dd82u); break;
    case 47: acc = heavy_round(acc, 0x4aadfef9u); break;
    case 48: acc = heavy_round(acc, 0x412d1c04u); break;
    case 49: acc = heavy_round(acc, 0x4146f793u); break;
    case 50: acc = heavy_round(acc, 0x010917d6u); break;
    case 51: acc = heavy_round(acc, 0x3d4a6d3du); break;
    case 52: acc = heavy_round(acc, 0xabb1cd78u); break;
    case 53: acc = heavy_round(acc, 0xdd0c3277u); break;
    case 54: acc = heavy_round(acc, 0x3fc7ed6au); break;
    case 55: acc = heavy_round(acc, 0x51883dc1u); break;
    case 56: acc = heavy_round(acc, 0xb0cdfc2cu); break;
    case 57: acc = heavy_round(acc, 0xe9aa499bu); break;
    case 58: acc = heavy_round(acc, 0x238b723eu); break;
    case 59: acc = heavy_round(acc, 0xc2167485u); break;
    case 60: acc = heavy_round(acc, 0x6afcdc20u); break;
    case 61: acc = heavy_round(acc, 0xea1ae0ffu); break;
    case 62: acc = heavy_round(acc, 0xce58fa52u); break;
    case 63: acc = heavy_round(acc, 0x9cb25589u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

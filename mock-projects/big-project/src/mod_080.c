#include "heavy.h"
#include "mods.h"

int mod_080(int x)
{
    static const uint32_t local[256] = {
        0xba2de1e3u, 0x07eedde6u, 0x7b6fdc0du, 0x900f4e08u, 0x451519c7u, 0xab358c7au, 0xfc09b191u, 0x3cd5bdbcu, 0x043e7debu, 0xa5b9fa4eu, 0x3239bd55u, 0x481a6eb0u, 0x3d10b24fu, 0x670a7b62u, 0xb1b24359u, 0xdd02d4e4u,
        0x60aa9af3u, 0x4090a3b6u, 0x21c7c79du, 0x0b71a458u, 0x25475bd7u, 0x87a5474au, 0xf0750e21u, 0x773ad10cu, 0x23e258fbu, 0xeee47a1eu, 0x539f1ae5u, 0x80978f00u, 0x1e1b365fu, 0xeac19032u, 0x5c9931e9u, 0xd9da5234u,
        0x5059d803u, 0x355b1d86u, 0x21e8d72du, 0xbe62cea8u, 0x743261e7u, 0xc58ef61au, 0x4349ceb1u, 0x3ed1f85cu, 0x5709380bu, 0xcd4e2deeu, 0x4bf21c75u, 0x567e0350u, 0x28f6fe6fu, 0x93311902u, 0xb7160479u, 0xbe266384u,
        0xe7ec9913u, 0x3b4b4b56u, 0x9aac0abdu, 0xafe7ccf8u, 0x8b172bf7u, 0xd33f98eau, 0x3c70f341u, 0x107033acu, 0xd2841b1bu, 0x359415beu, 0x152bc205u, 0xb172cba0u, 0xdf050a7fu, 0x984615d2u, 0x0631bb09u, 0xa15c08d4u,
        0xf653de23u, 0xda9e2d26u, 0xc52a624du, 0xbc459f48u, 0x1776ba07u, 0xe6442fbau, 0xc2137bd1u, 0xf22a82fcu, 0x4364022bu, 0xb793318eu, 0x0b850b95u, 0xf65ae7f0u, 0x9de65a8fu, 0xe12d86a2u, 0xf5355599u, 0x4c304224u,
        0xcac0a733u, 0x9ed0c2f6u, 0x84bcddddu, 0xe5014598u, 0x2b120c17u, 0xcb69ba8au, 0xe89a6861u, 0xc355e64cu, 0xdef9ed3bu, 0x4e68815eu, 0x7d76f925u, 0x575b5840u, 0xaf7bee9fu, 0xd4546b72u, 0x25a9d429u, 0x88980f74u,
        0x44a3f443u, 0xe6a00cc6u, 0xf6fc7d6du, 0xa0dfbfe8u, 0x4bea2227u, 0xb6bd395au, 0x82aeb8f1u, 0x8c875d9cu, 0x72d6dc4bu, 0x3071052eu, 0x3bba8ab5u, 0x23d91c90u, 0x59e6c6afu, 0x2767c442u, 0xbf5836b9u, 0x71c870c4u,
        0xe3aec553u, 0xb4090a96u, 0x03c240fdu, 0x2be60e38u, 0x843ffc37u, 0x138bac2au, 0xb1396d81u, 0xcf93e8ecu, 0x74cbcf5bu, 0x9f49bcfeu, 0x2948c045u, 0x187934e0u, 0xef87e2bfu, 0xaf549112u, 0x00497d49u, 0xc4366614u,
        0xd7d21a63u, 0x7c48bc66u, 0xed27288du, 0xd7593088u, 0x72949a47u, 0x546212fau, 0x73638611u, 0xd790883cu, 0x12e9c66bu, 0xb7cfa8ceu, 0xcb5a99d5u, 0xaf20a130u, 0xdf0042cfu, 0x3047d1e2u, 0xccc6a7d9u, 0x2d96ef64u,
        0x113ef373u, 0xf7dc2236u, 0xdf84341du, 0x59be26d8u, 0x59a8fc57u, 0xc30d6dcau, 0x369602a1u, 0x08d23b8cu, 0x4381c17bu, 0x421fc89eu, 0xd9691765u, 0x6ef46180u, 0xc330e6dfu, 0x2dae86b2u, 0x3f58b669u, 0x9cdf0cb4u,
        0x50665083u, 0xf2803c06u, 0x817263adu, 0x1ed9f128u, 0x307e2267u, 0x509abc9au, 0x6679e331u, 0x30ee02dcu, 0xd524c08bu, 0x81971c6eu, 0xcd2d38f5u, 0x3c5975d0u, 0x733aceefu, 0xba35af82u, 0x38c8a8f9u, 0x9243be04u,
        0x35f93193u, 0x1b3209d6u, 0x83cab73du, 0x97b18f78u, 0xb2550c77u, 0x6556ff6au, 0xfcf827c1u, 0xd6b8de2cu, 0x7ea3c39bu, 0x04d2a43eu, 0x729ffe85u, 0xa8f4de20u, 0x127efaffu, 0x47ca4c52u, 0xf01f7f89u, 0x6f3a0354u,
        0x52e896a3u, 0xd42e8ba6u, 0x31a62ecdu, 0x8a8a01c8u, 0x6eaeba87u, 0xb0cf363au, 0x1239d051u, 0x8a47cd7cu, 0xef0fcaabu, 0x75af600eu, 0x77fa6815u, 0x43ab9a70u, 0x209e6b0fu, 0x77995d22u, 0x82a63a19u, 0xc676dca4u,
        0x38657fb3u, 0x02f2c176u, 0x005dca5du, 0x62e84818u, 0xd94c2c97u, 0xf9d0610au, 0x6ca7dce1u, 0x34efd0ccu, 0xddb9d5bbu, 0x694a4fdeu, 0xfdb575a5u, 0xe8a2aac0u, 0x897a1f1fu, 0xea0fe1f2u, 0x83e5d8a9u, 0xabef49f4u,
        0x87e0ecc3u, 0xe03bab46u, 0x1f8a89edu, 0x81916268u, 0x5a2e62a7u, 0xee677fdau, 0x10eb4d71u, 0x6945e81cu, 0x1a32e4cbu, 0x300073aeu, 0x268a2735u, 0x113f0f10u, 0xb533172fu, 0x0edadac2u, 0x8da75b39u, 0x04d84b44u,
        0x030bddd3u, 0xc8064916u, 0x09056d7du, 0x8c8a50b8u, 0x5d965cb7u, 0xf3e192aau, 0xd1ed2201u, 0xb31f136cu, 0x9c4bf7dbu, 0xa56ecb7eu, 0xa7717cc5u, 0x2425c760u, 0x982a533fu, 0xf4e74792u, 0xcff3c1c9u, 0xd7a6e094u,
    };
    uint32_t acc = 0x116aeb94u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 80) & 255]);
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
    case 0: acc = heavy_round(acc, 0x8c53fc7bu); break;
    case 1: acc = heavy_round(acc, 0x7b4ec79eu); break;
    case 2: acc = heavy_round(acc, 0x61660a65u); break;
    case 3: acc = heavy_round(acc, 0xda9eb880u); break;
    case 4: acc = heavy_round(acc, 0x988151dfu); break;
    case 5: acc = heavy_round(acc, 0x8065f5b2u); break;
    case 6: acc = heavy_round(acc, 0x5fe35969u); break;
    case 7: acc = heavy_round(acc, 0x6bdb53b4u); break;
    case 8: acc = heavy_round(acc, 0x467feb83u); break;
    case 9: acc = heavy_round(acc, 0xc88f1b06u); break;
    case 10: acc = heavy_round(acc, 0x140db6adu); break;
    case 11: acc = heavy_round(acc, 0x8ecf2828u); break;
    case 12: acc = heavy_round(acc, 0xf2dbed67u); break;
    case 13: acc = heavy_round(acc, 0x61400b9au); break;
    case 14: acc = heavy_round(acc, 0xd358e631u); break;
    case 15: acc = heavy_round(acc, 0xde7329dcu); break;
    case 16: acc = heavy_round(acc, 0x8171bb8bu); break;
    case 17: acc = heavy_round(acc, 0x7081db6eu); break;
    case 18: acc = heavy_round(acc, 0x1e32ebf5u); break;
    case 19: acc = heavy_round(acc, 0x19f58cd0u); break;
    case 20: acc = heavy_round(acc, 0x2451f9efu); break;
    case 21: acc = heavy_round(acc, 0x2684de82u); break;
    case 22: acc = heavy_round(acc, 0xdc880bf9u); break;
    case 23: acc = heavy_round(acc, 0xcf6dc504u); break;
    case 24: acc = heavy_round(acc, 0xbee58c93u); break;
    case 25: acc = heavy_round(acc, 0x1e74a8d6u); break;
    case 26: acc = heavy_round(acc, 0xc086ca3du); break;
    case 27: acc = heavy_round(acc, 0x77d08678u); break;
    case 28: acc = heavy_round(acc, 0x89519777u); break;
    case 29: acc = heavy_round(acc, 0x828c0e6au); break;
    case 30: acc = heavy_round(acc, 0x13a3eac1u); break;
    case 31: acc = heavy_round(acc, 0x7823c52cu); break;
    case 32: acc = heavy_round(acc, 0xd81b7e9bu); break;
    case 33: acc = heavy_round(acc, 0x8769233eu); break;
    case 34: acc = heavy_round(acc, 0x71de7185u); break;
    case 35: acc = heavy_round(acc, 0xbbf2b520u); break;
    case 36: acc = heavy_round(acc, 0x2c0ce5ffu); break;
    case 37: acc = heavy_round(acc, 0x12a13b52u); break;
    case 38: acc = heavy_round(acc, 0x3743a289u); break;
    case 39: acc = heavy_round(acc, 0xdd01ca54u); break;
    case 40: acc = heavy_round(acc, 0xee57b1a3u); break;
    case 41: acc = heavy_round(acc, 0xa094eaa6u); break;
    case 42: acc = heavy_round(acc, 0xa3b301cdu); break;
    case 43: acc = heavy_round(acc, 0x0c42b8c8u); break;
    case 44: acc = heavy_round(acc, 0x7cfa0587u); break;
    case 45: acc = heavy_round(acc, 0xbd84053au); break;
    case 46: acc = heavy_round(acc, 0xf8e25351u); break;
    case 47: acc = heavy_round(acc, 0x3008747cu); break;
    case 48: acc = heavy_round(acc, 0x6b6245abu); break;
    case 49: acc = heavy_round(acc, 0xa5e19f0eu); break;
    case 50: acc = heavy_round(acc, 0x16a19b15u); break;
    case 51: acc = heavy_round(acc, 0xeb7b3170u); break;
    case 52: acc = heavy_round(acc, 0x1b53160fu); break;
    case 53: acc = heavy_round(acc, 0xe1e80c22u); break;
    case 54: acc = heavy_round(acc, 0x595f1d19u); break;
    case 55: acc = heavy_round(acc, 0x834c63a4u); break;
    case 56: acc = heavy_round(acc, 0x12075ab3u); break;
    case 57: acc = heavy_round(acc, 0xf06ce076u); break;
    case 58: acc = heavy_round(acc, 0xbeeb5d5du); break;
    case 59: acc = heavy_round(acc, 0xd3aabf18u); break;
    case 60: acc = heavy_round(acc, 0xad963797u); break;
    case 61: acc = heavy_round(acc, 0x54f4f00au); break;
    case 62: acc = heavy_round(acc, 0x957d1fe1u); break;
    case 63: acc = heavy_round(acc, 0xcb7637ccu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

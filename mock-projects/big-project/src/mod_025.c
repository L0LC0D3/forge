#include "heavy.h"
#include "mods.h"

int mod_025(int x)
{
    static const uint32_t local[256] = {
        0x0c8b0b8cu, 0x66c4517bu, 0xa1e1189eu, 0x8c1a2765u, 0x9e523180u, 0xdbd476dfu, 0xa95cd6b2u, 0xcb12c669u, 0x67b1dcb4u, 0xebfae083u, 0x1a6b8c06u, 0x1a4573adu, 0x89f1c128u, 0x6d93b267u, 0x12130c9au, 0xf975f331u,
        0xa61ad2dcu, 0xf34b508bu, 0x76ec6c6eu, 0x106248f5u, 0x5a6b45d0u, 0x63025eefu, 0x7ab7ff82u, 0xbb46b8f9u, 0xfd0a8e04u, 0x28f1c193u, 0x8b3159d6u, 0xbda1c73du, 0xc7fd5f78u, 0xab0e9c77u, 0x06234f6au, 0x5f3837c1u,
        0xea59ae2cu, 0xe0ae539bu, 0x44bbf43eu, 0x77590e85u, 0x32baae20u, 0x326a8affu, 0xd2209c52u, 0x2a618f89u, 0x46f4d354u, 0x064526a3u, 0xe141dba6u, 0x5d813ecdu, 0x9d09d1c8u, 0x9c0c4a87u, 0x55ef863au, 0x24bde051u,
        0xa95c9d7cu, 0x1dfe5aabu, 0xf52cb00eu, 0xaf377815u, 0xf6256a70u, 0x09adfb0fu, 0x90c3ad22u, 0x75ac4a19u, 0x1825aca4u, 0x55260fb3u, 0x421a1176u, 0xaf3cda5du, 0xb49c1818u, 0xf44dbc97u, 0x0844b10au, 0x506fece1u,
        0x0c78a0ccu, 0xa28c65bbu, 0x5d5b9fdeu, 0x187685a5u, 0xc0d07ac0u, 0x14adaf1fu, 0x970e31f2u, 0x70afe8a9u, 0xc49219f4u, 0xf7057cc3u, 0x2676fb46u, 0x226d99edu, 0xaf793268u, 0x5bd3f2a7u, 0x0b2fcfdau, 0x26f75d71u,
        0xe642b81cu, 0x7de974cbu, 0x0da5c3aeu, 0x15cf3735u, 0x4c20df10u, 0xfb8aa72fu, 0x94ad2ac2u, 0xf5356b39u, 0x716f1b44u, 0xed946dd3u, 0x2a559916u, 0x70ec7d7du, 0x73a620b8u, 0x7edfecb7u, 0x03fde2aau, 0xbb3d3201u,
        0x028fe36cu, 0xe7e687dbu, 0x21a81b7eu, 0x9c3a8cc5u, 0x3ebb9760u, 0xf2a5e33fu, 0xd88d9792u, 0x7345d1c9u, 0x6531b094u, 0x6ac3e2e3u, 0xdcf2eae6u, 0x2ed2850du, 0x7c67e308u, 0x1df2aac7u, 0x1f3be97au, 0x7e6a6a91u,
        0x767522bcu, 0x50949eebu, 0x103fa74eu, 0xc2f18655u, 0x7c85a3b0u, 0xcaa0634fu, 0x20dc7862u, 0x812a1c59u, 0x578ed9e4u, 0xe0c4dbf3u, 0x90cbf0b6u, 0x5a78b09du, 0x2a437958u, 0x1dcd2cd7u, 0xe0b6e44au, 0xcfe80721u,
        0xf047760cu, 0x7044b9fbu, 0x7b89671eu, 0x536d23e5u, 0x76a40400u, 0x005b275fu, 0x6b06cd32u, 0x6b6b4ae9u, 0xc17b9734u, 0x12085903u, 0x2b9daa86u, 0xec78002du, 0x12fde3a8u, 0x977072e7u, 0xf37bd31au, 0x8d5f07b1u,
        0x079bdd5cu, 0x5787d90bu, 0x00e25aeeu, 0x59666575u, 0x7b7bb850u, 0xccf72f6fu, 0xc3b99602u, 0xc4d25d79u, 0x2d2ce884u, 0x213f5a13u, 0xf6651856u, 0x67a973bdu, 0x519c21f8u, 0xe81d7cf7u, 0xf9d7b5eau, 0xa2b86c41u,
        0x8d4758acu, 0x7f2efc1bu, 0x08e782beu, 0xb2d64b05u, 0x06b1c0a0u, 0x35d57b7fu, 0x16e1d2d2u, 0xf6685409u, 0x8617cdd4u, 0xa15adf23u, 0x6d5f3a26u, 0x69260b4du, 0xd6633448u, 0xc1554b07u, 0x5d578cbau, 0x9a1d34d1u,
        0xdb5ee7fcu, 0xd84b232bu, 0x9775de8eu, 0x9ff5d495u, 0x112b1cf0u, 0x1c970b8fu, 0xffac83a2u, 0xcf762e99u, 0x68f14724u, 0xa58be833u, 0x10090ff6u, 0x3846c6ddu, 0xb6d81a98u, 0x38d8dd17u, 0x1ec8578au, 0x2bf66161u,
        0x25378b4cu, 0xdc2d4e3bu, 0x1baa6e5eu, 0x533e0225u, 0x610ccd40u, 0x4f1cdf9fu, 0x9886a872u, 0x1584ed29u, 0x73ae5474u, 0xd1437543u, 0x311f99c6u, 0x56a4a66du, 0x7dbfd4e8u, 0xd8a93327u, 0xa637165au, 0xceecf1f1u,
        0xc766429cu, 0x9c667d4bu, 0x3fe2322eu, 0x8167d3b5u, 0xd9bbd190u, 0x9787f7afu, 0x4b1d4142u, 0x145d8fb9u, 0x9583f5c4u, 0x68328653u, 0xc69fd796u, 0x1018a9fdu, 0x7b1f6338u, 0xaf074d37u, 0x92f0c92au, 0x47e9e681u,
        0x97c00decu, 0xd2c7b05bu, 0xb9ba29feu, 0xf16c4945u, 0xcbdd29e0u, 0xcc3953bfu, 0xa05d4e12u, 0x2e091649u, 0x5ee72b14u, 0x5e4a1b63u, 0x39c6c966u, 0x0abbd18du, 0x143bc588u, 0x5e742b47u, 0x8b826ffau, 0x3a163f11u,
        0x3559ed3cu, 0xf161e76bu, 0x1a0f55ceu, 0x0c8462d5u, 0x4555d630u, 0xdfd1f3cfu, 0x1073cee2u, 0x6ad080d9u, 0x518cf464u, 0x67bb3473u, 0x37116f36u, 0xd6e71d1du, 0x1399fbd8u, 0x2db0cd57u, 0x0db90acau, 0xb6dafba1u,
    };
    uint32_t acc = 0x9b4e12a1u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 25) & 255]);
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
    case 0: acc = heavy_round(acc, 0x0f4dd6e6u); break;
    case 1: acc = heavy_round(acc, 0x0378810du); break;
    case 2: acc = heavy_round(acc, 0x073daf08u); break;
    case 3: acc = heavy_round(acc, 0x461606c7u); break;
    case 4: acc = heavy_round(acc, 0x3baf957au); break;
    case 5: acc = heavy_round(acc, 0xd2d22691u); break;
    case 6: acc = heavy_round(acc, 0x70a1aebcu); break;
    case 7: acc = heavy_round(acc, 0x709fbaebu); break;
    case 8: acc = heavy_round(acc, 0xd9f8134eu); break;
    case 9: acc = heavy_round(acc, 0x08570255u); break;
    case 10: acc = heavy_round(acc, 0x8e14efb0u); break;
    case 11: acc = heavy_round(acc, 0x332f3f4fu); break;
    case 12: acc = heavy_round(acc, 0xd7c5a462u); break;
    case 13: acc = heavy_round(acc, 0xfe895859u); break;
    case 14: acc = heavy_round(acc, 0x834ce5e4u); break;
    case 15: acc = heavy_round(acc, 0xfe3377f3u); break;
    case 16: acc = heavy_round(acc, 0x5d91dcb6u); break;
    case 17: acc = heavy_round(acc, 0xa88dac9du); break;
    case 18: acc = heavy_round(acc, 0x19bc4558u); break;
    case 19: acc = heavy_round(acc, 0x543788d7u); break;
    case 20: acc = heavy_round(acc, 0x00c5904au); break;
    case 21: acc = heavy_round(acc, 0x152ec321u); break;
    case 22: acc = heavy_round(acc, 0xffc7020cu); break;
    case 23: acc = heavy_round(acc, 0xb786d5fbu); break;
    case 24: acc = heavy_round(acc, 0x2d0cd31eu); break;
    case 25: acc = heavy_round(acc, 0x40219fe5u); break;
    case 26: acc = heavy_round(acc, 0x81365000u); break;
    case 27: acc = heavy_round(acc, 0x4011035fu); break;
    case 28: acc = heavy_round(acc, 0x98eaf932u); break;
    case 29: acc = heavy_round(acc, 0xf58986e9u); break;
    case 30: acc = heavy_round(acc, 0xaceca334u); break;
    case 31: acc = heavy_round(acc, 0x3d8df503u); break;
    case 32: acc = heavy_round(acc, 0xd98e9686u); break;
    case 33: acc = heavy_round(acc, 0xcbbbfc2du); break;
    case 34: acc = heavy_round(acc, 0x1bd9afa8u); break;
    case 35: acc = heavy_round(acc, 0x89e1cee7u); break;
    case 36: acc = heavy_round(acc, 0x69e57f1au); break;
    case 37: acc = heavy_round(acc, 0x7744c3b1u); break;
    case 38: acc = heavy_round(acc, 0xcd2e695cu); break;
    case 39: acc = heavy_round(acc, 0x6fc0f50bu); break;
    case 40: acc = heavy_round(acc, 0xb8f0c6eeu); break;
    case 41: acc = heavy_round(acc, 0xfd29e175u); break;
    case 42: acc = heavy_round(acc, 0xcbd10450u); break;
    case 43: acc = heavy_round(acc, 0x49940b6fu); break;
    case 44: acc = heavy_round(acc, 0x1358c202u); break;
    case 45: acc = heavy_round(acc, 0x876f9979u); break;
    case 46: acc = heavy_round(acc, 0x9110f484u); break;
    case 47: acc = heavy_round(acc, 0x3c9bf613u); break;
    case 48: acc = heavy_round(acc, 0x7c410456u); break;
    case 49: acc = heavy_round(acc, 0xdfdc6fbdu); break;
    case 50: acc = heavy_round(acc, 0x589aedf8u); break;
    case 51: acc = heavy_round(acc, 0xb455d8f7u); break;
    case 52: acc = heavy_round(acc, 0xc95c61eau); break;
    case 53: acc = heavy_round(acc, 0xd4fd2841u); break;
    case 54: acc = heavy_round(acc, 0xd9ace4acu); break;
    case 55: acc = heavy_round(acc, 0x821f181bu); break;
    case 56: acc = heavy_round(acc, 0x9640eebeu); break;
    case 57: acc = heavy_round(acc, 0x0d68c705u); break;
    case 58: acc = heavy_round(acc, 0x198a0ca0u); break;
    case 59: acc = heavy_round(acc, 0xc519577fu); break;
    case 60: acc = heavy_round(acc, 0xe2fbfed2u); break;
    case 61: acc = heavy_round(acc, 0x0d449009u); break;
    case 62: acc = heavy_round(acc, 0x4b2ed9d4u); break;
    case 63: acc = heavy_round(acc, 0xfe4e7b23u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

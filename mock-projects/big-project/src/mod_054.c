#include "heavy.h"
#include "mods.h"

int mod_054(int x)
{
    static const uint32_t local[256] = {
        0x7804bc95u, 0xa25ce4f0u, 0xd9ce338fu, 0x7d698ba2u, 0x4b3f9699u, 0x199b8f24u, 0x7ee19033u, 0xa25297f6u, 0x3a32aeddu, 0x7642e298u, 0x04f50517u, 0x9c265f8au, 0xc8ecc961u, 0x732ad34cu, 0xc837f63bu, 0xbf24f65eu,
        0xbaa6ea25u, 0x15d09540u, 0x06be079fu, 0x09a5b072u, 0xf9485529u, 0x080a9c74u, 0x26a31d43u, 0x0beb21c6u, 0xd32a8e6du, 0xd2fc9ce8u, 0xec6f5b27u, 0x83371e5au, 0xd31d59f1u, 0x6f4b8a9cu, 0x85bb254bu, 0x3c1eba2eu,
        0xb6aabbb5u, 0xde919990u, 0x8c131fafu, 0x101e4942u, 0x469af7b9u, 0xc2123dc4u, 0x641c2e53u, 0x126d5f96u, 0x15b891fdu, 0x22ae2b38u, 0x9cf77537u, 0x4012d12au, 0x69d44e81u, 0xde1755ecu, 0x33e6585bu, 0x4738b1feu,
        0xd3093145u, 0x6d44f1e0u, 0xe02e7bbfu, 0x39c05612u, 0x35407e49u, 0xf8277314u, 0xcb3dc363u, 0x3f165166u, 0x47f5b98du, 0xea9c8d88u, 0x590e5347u, 0x994677fau, 0xd03aa711u, 0x7ea3353cu, 0xe4ca8f6bu, 0x914fddceu,
        0x18fb4ad5u, 0xefcf9e30u, 0x95b11bcfu, 0x1eb8d6e2u, 0x6d81e8d9u, 0x4bff3c64u, 0xb038dc73u, 0x5e62f736u, 0x9a3b051du, 0x154cc3d8u, 0x0774f557u, 0x2c9f12cau, 0xb7b963a1u, 0x2944288cu, 0x72b8ca7bu, 0x76813d9eu,
        0xc3fa0865u, 0xa1569e80u, 0x6b7bffdfu, 0x1674cbb2u, 0xcde83769u, 0xa08e99b4u, 0x377e7983u, 0x50105106u, 0xb72174adu, 0x4283ce28u, 0x432c5b67u, 0x3f29a19au, 0xcff98431u, 0x1f8f2fdcu, 0x9042098bu, 0xce29d16eu,
        0xd1be69f5u, 0x1a3ef2d0u, 0x5cb027efu, 0x07a13482u, 0xfb3c69f9u, 0x6a0a8b04u, 0x65bf9a93u, 0xd71b5ed6u, 0x5382083du, 0x1746ac78u, 0x6b758577u, 0x8d33246au, 0x56e408c1u, 0x5c594b2cu, 0xd8374c9bu, 0xbae6993eu,
        0x92416f85u, 0xa02d9b20u, 0xb0ae93ffu, 0x382b1152u, 0xf0878089u, 0xfde81054u, 0x2fed3fa3u, 0x69c120a6u, 0xbe75bfcdu, 0x8dda5ec8u, 0xb3d17387u, 0x1a489b3au, 0xa8a1f151u, 0xe3b77a7cu, 0xdda993abu, 0x7a94950eu,
        0x37bc1915u, 0x76079770u, 0x0b18440fu, 0x1d3f6222u, 0x8f127b19u, 0xe2dc29a4u, 0x8b3868b3u, 0x017e9676u, 0x71559b5du, 0x45c3e518u, 0x34012597u, 0x0137060au, 0xcf9c3de1u, 0x12febdccu, 0x3be9debbu, 0x3650c4deu,
        0x66a766a5u, 0x2bf1e7c0u, 0x7bce381fu, 0x2b4b26f2u, 0x2e6659a9u, 0x20dbd6f4u, 0x7d1215c3u, 0xeb10c046u, 0x9fba9aedu, 0xd3c83f68u, 0xf8059ba7u, 0x440b64dau, 0x147bee71u, 0xf0c4151cu, 0xa6892dcbu, 0xd27828aeu,
        0xc5bc5835u, 0xef518c10u, 0x8ef1702fu, 0xa5fb5fc2u, 0x2c4c1c39u, 0x911c1844u, 0x2b2b46d3u, 0x96749e16u, 0xc77dbe7du, 0x11ec6db8u, 0x101fd5b7u, 0x9c12b7aau, 0x8e2a0301u, 0x7cdc806cu, 0xf95880dbu, 0xbea7c07eu,
        0x8df3edc5u, 0xdacb8460u, 0x5ce2ec3fu, 0x703d0c92u, 0x7cccc2c9u, 0x2e11ed94u, 0xeb74fbe3u, 0x66e72fe6u, 0x40b8060du, 0x6f757008u, 0xa0d0d3c7u, 0x49d9fe7au, 0xb1cf7b91u, 0x005cffbcu, 0x4868d7ebu, 0xc5bc8c4eu,
        0x1a872755u, 0x4644d0b0u, 0x9a43ac4fu, 0xdc3d2d62u, 0x3a314d59u, 0x637256e4u, 0x542034f3u, 0x82e575b6u, 0xcdc2719du, 0x40e84658u, 0xf2d995d7u, 0xe52e394au, 0xe2d55821u, 0x5d9a930cu, 0xf00b32fbu, 0xddd38c1eu,
        0x78ef04e5u, 0x16e27100u, 0xa7f4b05fu, 0x7b68c232u, 0x3502bbe9u, 0x5e325434u, 0x4b9df203u, 0xa42c6f86u, 0x2b36012du, 0x1009f0a8u, 0x833b1be7u, 0x2d1c681au, 0x02e498b1u, 0x602a3a5cu, 0xa4d0920bu, 0xf849bfeeu,
        0xf8e48675u, 0x0f096550u, 0xa316f86fu, 0xee6ccb02u, 0x840a0e79u, 0x5c86e584u, 0x189f3313u, 0xe7b91d56u, 0x9febb4bdu, 0xebdf6ef8u, 0x133665f7u, 0xd7f18aeau, 0x01e63d41u, 0x0ce0f5acu, 0x8389f51bu, 0xd1bc27beu,
        0xbc60ac05u, 0x1e5eada0u, 0x750b847fu, 0xb53647d2u, 0x14504509u, 0xfde50ad4u, 0x7214f823u, 0x9dc87f26u, 0x8cfc8c4du, 0xb8adc148u, 0xb84c7407u, 0x633aa1bau, 0x6e0345d1u, 0xf1d3c4fcu, 0x21485c2bu, 0xc207c38eu,
    };
    uint32_t acc = 0xfaae668eu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 54) & 255]);
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
    case 0: acc = heavy_round(acc, 0x605be0a5u); break;
    case 1: acc = heavy_round(acc, 0xacb819c0u); break;
    case 2: acc = heavy_round(acc, 0xdfcac21fu); break;
    case 3: acc = heavy_round(acc, 0x581a28f2u); break;
    case 4: acc = heavy_round(acc, 0x21b573a9u); break;
    case 5: acc = heavy_round(acc, 0x8a3c28f4u); break;
    case 6: acc = heavy_round(acc, 0x39a23fc3u); break;
    case 7: acc = heavy_round(acc, 0x091ee246u); break;
    case 8: acc = heavy_round(acc, 0x19fe54edu); break;
    case 9: acc = heavy_round(acc, 0x2f54b168u); break;
    case 10: acc = heavy_round(acc, 0xb59365a7u); break;
    case 11: acc = heavy_round(acc, 0x1cbaa6dau); break;
    case 12: acc = heavy_round(acc, 0x5bae4871u); break;
    case 13: acc = heavy_round(acc, 0x682ea71cu); break;
    case 14: acc = heavy_round(acc, 0x6f1e97cbu); break;
    case 15: acc = heavy_round(acc, 0xe44a8aaeu); break;
    case 16: acc = heavy_round(acc, 0x12775235u); break;
    case 17: acc = heavy_round(acc, 0xbe6c3e10u); break;
    case 18: acc = heavy_round(acc, 0x18387a2fu); break;
    case 19: acc = heavy_round(acc, 0xe692e1c2u); break;
    case 20: acc = heavy_round(acc, 0x83c9b639u); break;
    case 21: acc = heavy_round(acc, 0x17d8ea44u); break;
    case 22: acc = heavy_round(acc, 0xc06df0d3u); break;
    case 23: acc = heavy_round(acc, 0x54934016u); break;
    case 24: acc = heavy_round(acc, 0x7597f87du); break;
    case 25: acc = heavy_round(acc, 0x065d5fb8u); break;
    case 26: acc = heavy_round(acc, 0x1c481fb7u); break;
    case 27: acc = heavy_round(acc, 0x819a79aau); break;
    case 28: acc = heavy_round(acc, 0x3f5add01u); break;
    case 29: acc = heavy_round(acc, 0x3d33926cu); break;
    case 30: acc = heavy_round(acc, 0x30f06adbu); break;
    case 31: acc = heavy_round(acc, 0xf29aa27eu); break;
    case 32: acc = heavy_round(acc, 0x095567c5u); break;
    case 33: acc = heavy_round(acc, 0xdf5ab660u); break;
    case 34: acc = heavy_round(acc, 0x8814763fu); break;
    case 35: acc = heavy_round(acc, 0xd8bd0e92u); break;
    case 36: acc = heavy_round(acc, 0xfe18dcc9u); break;
    case 37: acc = heavy_round(acc, 0x9b4b3f94u); break;
    case 38: acc = heavy_round(acc, 0x500a25e3u); break;
    case 39: acc = heavy_round(acc, 0x0b3651e6u); break;
    case 40: acc = heavy_round(acc, 0x7248c00du); break;
    case 41: acc = heavy_round(acc, 0xc7eae208u); break;
    case 42: acc = heavy_round(acc, 0x0c339dc7u); break;
    case 43: acc = heavy_round(acc, 0xd45a407au); break;
    case 44: acc = heavy_round(acc, 0x469ed591u); break;
    case 45: acc = heavy_round(acc, 0xf6c091bcu); break;
    case 46: acc = heavy_round(acc, 0xb9a341ebu); break;
    case 47: acc = heavy_round(acc, 0x25efee4eu); break;
    case 48: acc = heavy_round(acc, 0x082f2155u); break;
    case 49: acc = heavy_round(acc, 0xaf6882b0u); break;
    case 50: acc = heavy_round(acc, 0x8bffb64fu); break;
    case 51: acc = heavy_round(acc, 0x08c5af62u); break;
    case 52: acc = heavy_round(acc, 0x92ebe759u); break;
    case 53: acc = heavy_round(acc, 0x484828e4u); break;
    case 54: acc = heavy_round(acc, 0xa6a7def3u); break;
    case 55: acc = heavy_round(acc, 0x5b8517b6u); break;
    case 56: acc = heavy_round(acc, 0x3a69ab9du); break;
    case 57: acc = heavy_round(acc, 0x10823858u); break;
    case 58: acc = heavy_round(acc, 0x7616dfd7u); break;
    case 59: acc = heavy_round(acc, 0x34c6fb4au); break;
    case 60: acc = heavy_round(acc, 0xbce33221u); break;
    case 61: acc = heavy_round(acc, 0x3f2aa50cu); break;
    case 62: acc = heavy_round(acc, 0x8d881cfbu); break;
    case 63: acc = heavy_round(acc, 0x7c676e1eu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_036(int x)
{
    static const uint32_t local[256] = {
        0x82b1eaafu, 0xae109842u, 0x8e62fab9u, 0x636c64c4u, 0x503a2953u, 0x84f51e96u, 0xa3b744fdu, 0x4eef4238u, 0x0a6fa037u, 0xe34f002au, 0x459cb181u, 0x89b65cecu, 0xf6c3b35bu, 0x41b850feu, 0xebde4445u, 0x70a8e8e0u,
        0xffac06bfu, 0x6b826512u, 0x85154149u, 0xd6a75a14u, 0x9cc67e63u, 0xa089d066u, 0xa66d2c8du, 0x897f6488u, 0xcb3d3e47u, 0x0a4a66fau, 0x75a7ca11u, 0xcc1ffc3cu, 0xfa6aaa6bu, 0x18333cceu, 0xd1611dd5u, 0x7a0d5530u,
        0x10bd66cfu, 0x973aa5e2u, 0x7b936bd9u, 0xc814e364u, 0xecdc5773u, 0x98b23636u, 0x4a5b381du, 0xd6415ad8u, 0x070aa057u, 0x7c5ac1cau, 0xa2fb46a1u, 0x870eaf8cu, 0x16cba57bu, 0xb1b85c9eu, 0xc3209b65u, 0x4fde1580u,
        0xe0c70adfu, 0x04a65ab2u, 0x9c667a69u, 0xf6aa00b4u, 0x90ecb483u, 0x892b5006u, 0x461a67adu, 0x70fa2528u, 0x44d8c667u, 0x7a8d109au, 0x49402731u, 0x581776dcu, 0xaa77a48bu, 0xa1a4b06eu, 0x4ad5bcf5u, 0xa68029d0u,
        0xd6e9f2efu, 0x16728382u, 0xd8576cf9u, 0xb29bb204u, 0xb9a89593u, 0x70f21dd6u, 0x5a83bb3du, 0x9aaec378u, 0xcfe8b077u, 0xbd2e536au, 0x725f6bc1u, 0x960f522cu, 0xfc3fa79bu, 0xc695383eu, 0x44798285u, 0xdf989220u,
        0xa6871effu, 0x8e8c2052u, 0x766f4389u, 0x2d5ef754u, 0x8800faa3u, 0x02439fa6u, 0xe2b032cdu, 0xe9a435c8u, 0xc7bb5e87u, 0x43cb8a3au, 0x46821451u, 0xa10b417cu, 0x4b34aeabu, 0x1a66f40eu, 0x6e44ec15u, 0x5a0c4e70u,
        0x5f3f8f0fu, 0x5e203122u, 0xa3f6fe19u, 0xc9a8d0a4u, 0x1d26e3b3u, 0x729cd576u, 0x63f8ce5du, 0x995f7c18u, 0x3011d097u, 0x2531b50au, 0x9c1120e1u, 0x326044ccu, 0xdea7b9bbu, 0x8236e3deu, 0xf8b0f9a5u, 0xc2005ec0u,
        0x7cf4431fu, 0x759bb5f2u, 0x04779ca9u, 0x6b6e3df4u, 0xaa8b50c3u, 0x4ababf46u, 0x1df68dedu, 0xdaa59668u, 0x00ed06a7u, 0x5f6dd3dau, 0x87b59171u, 0xaca35c1cu, 0x1629c8cbu, 0x9e6207aeu, 0x1676ab35u, 0x60d9c310u,
        0xf7c63b2fu, 0x94abaec2u, 0x41ba1f39u, 0xc7e43f44u, 0x81df41d3u, 0x369a5d16u, 0x9a82717du, 0x237b84b8u, 0x368e00b7u, 0xa7cce6aau, 0xec586601u, 0x6ba9876cu, 0x798bdbdbu, 0x9a855f7eu, 0x8c8f00c5u, 0x6d3d7b60u,
        0x5416773fu, 0x1a3d1b92u, 0x9bc785c9u, 0xb57fd494u, 0x2513b6e3u, 0xd578aee6u, 0x3db5790du, 0x7f264708u, 0xe175bec7u, 0x3adbed7au, 0x0b229e91u, 0x1487c6bcu, 0xc8def2ebu, 0xfd7deb4eu, 0x4232fa55u, 0x5b1087b0u,
        0xb285f74fu, 0xd47cfc62u, 0x78e8d059u, 0x7bf5fde4u, 0x5659aff3u, 0x89d2b4b6u, 0xd5e8a49du, 0xde2add58u, 0x366540d7u, 0xac67e84au, 0x137d3b21u, 0xe5931a0cu, 0x0c740dfbu, 0x7968ab1eu, 0xd0db97e5u, 0x2b77e800u,
        0xdff5bb5fu, 0xd0d85132u, 0xf5a6fee9u, 0x243bbb34u, 0x28222d03u, 0x49656e86u, 0x2bb4f42du, 0x664e47a8u, 0x9e5d86e7u, 0xb77dd71au, 0xb3113bb1u, 0x0660815cu, 0xa4dc2d0bu, 0xbba29eeeu, 0x1441d975u, 0xbcd89c50u,
        0x6586c36fu, 0x2bfc1a02u, 0x74cb1179u, 0xc8860c84u, 0x0d1e2e13u, 0x6d2ddc56u, 0x91f367bdu, 0xc29585f8u, 0xc69f90f7u, 0x0e6ab9eau, 0xa5c7a041u, 0xd7c4fcacu, 0x5ae8501bu, 0x3cc8c6beu, 0xba5ebf05u, 0x1ad7a4a0u,
        0x989a0f7fu, 0xe1d556d2u, 0x2f5e0809u, 0xe449f1d4u, 0xe83eb323u, 0x8168fe26u, 0x75bcff4du, 0x73459848u, 0xb0ac5f07u, 0x2abb90bau, 0x45c968d1u, 0x43d58bfcu, 0x6fa9772bu, 0x10b8228eu, 0xd36b4895u, 0xce5a00f0u,
        0xaad09f8fu, 0x9d9107a2u, 0xc4a8e299u, 0xa43c6b24u, 0x1cb4bc33u, 0x1593d3f6u, 0xee6abaddu, 0x1de37e98u, 0xc244f117u, 0x1d3d5b8au, 0x1b7f9561u, 0x0de72f4cu, 0xac70a23bu, 0xb68db25eu, 0x61e07625u, 0x2d84b140u,
        0xba0b739fu, 0x899c2c72u, 0xca34a129u, 0x36527874u, 0x9df14943u, 0x8c6b5dc6u, 0x4d959a6du, 0xdd3438e8u, 0xd56a4727u, 0x5dfd1a5au, 0x6d9325f1u, 0x228ee69cu, 0x72ced14bu, 0xe8a6762eu, 0xea7747b5u, 0xabbcb590u,
    };
    uint32_t acc = 0xdc8bd090u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 36) & 255]);
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
    case 0: acc = heavy_round(acc, 0x6be0101fu); break;
    case 1: acc = heavy_round(acc, 0x90431ef2u); break;
    case 2: acc = heavy_round(acc, 0x53cdf1a9u); break;
    case 3: acc = heavy_round(acc, 0x25ae8ef4u); break;
    case 4: acc = heavy_round(acc, 0xa9156dc3u); break;
    case 5: acc = heavy_round(acc, 0x144c3846u); break;
    case 6: acc = heavy_round(acc, 0x218fb2edu); break;
    case 7: acc = heavy_round(acc, 0xab2a7768u); break;
    case 8: acc = heavy_round(acc, 0x825273a7u); break;
    case 9: acc = heavy_round(acc, 0x00025cdau); break;
    case 10: acc = heavy_round(acc, 0x3ed68671u); break;
    case 11: acc = heavy_round(acc, 0x07edcd1cu); break;
    case 12: acc = heavy_round(acc, 0x6af785cbu); break;
    case 13: acc = heavy_round(acc, 0x5b22a0aeu); break;
    case 14: acc = heavy_round(acc, 0x5a347035u); break;
    case 15: acc = heavy_round(acc, 0xaafac410u); break;
    case 16: acc = heavy_round(acc, 0xfad9482fu); break;
    case 17: acc = heavy_round(acc, 0x98d157c2u); break;
    case 18: acc = heavy_round(acc, 0xf9f9b439u); break;
    case 19: acc = heavy_round(acc, 0x057cd044u); break;
    case 20: acc = heavy_round(acc, 0x95649ed3u); break;
    case 21: acc = heavy_round(acc, 0x6c6e1616u); break;
    case 22: acc = heavy_round(acc, 0xc2f8d67du); break;
    case 23: acc = heavy_round(acc, 0x3abca5b8u); break;
    case 24: acc = heavy_round(acc, 0x9102adb7u); break;
    case 25: acc = heavy_round(acc, 0xa1a7afaau); break;
    case 26: acc = heavy_round(acc, 0x698a9b01u); break;
    case 27: acc = heavy_round(acc, 0xf554386cu); break;
    case 28: acc = heavy_round(acc, 0xc2bcd8dbu); break;
    case 29: acc = heavy_round(acc, 0x8bd0387eu); break;
    case 30: acc = heavy_round(acc, 0xd0d205c5u); break;
    case 31: acc = heavy_round(acc, 0x15a2bc60u); break;
    case 32: acc = heavy_round(acc, 0x9220c43fu); break;
    case 33: acc = heavy_round(acc, 0xe0710492u); break;
    case 34: acc = heavy_round(acc, 0x1c405ac9u); break;
    case 35: acc = heavy_round(acc, 0x2d80a594u); break;
    case 36: acc = heavy_round(acc, 0xf96453e3u); break;
    case 37: acc = heavy_round(acc, 0x111ea7e6u); break;
    case 38: acc = heavy_round(acc, 0xb7591e0du); break;
    case 39: acc = heavy_round(acc, 0xfd33a808u); break;
    case 40: acc = heavy_round(acc, 0x15c9abc7u); break;
    case 41: acc = heavy_round(acc, 0x788cf67au); break;
    case 42: acc = heavy_round(acc, 0x97b61391u); break;
    case 43: acc = heavy_round(acc, 0x65a2b7bcu); break;
    case 44: acc = heavy_round(acc, 0x2c432febu); break;
    case 45: acc = heavy_round(acc, 0xeee3044eu); break;
    case 46: acc = heavy_round(acc, 0x3d4b3f55u); break;
    case 47: acc = heavy_round(acc, 0x83ca08b0u); break;
    case 48: acc = heavy_round(acc, 0x4657844fu); break;
    case 49: acc = heavy_round(acc, 0x994f2562u); break;
    case 50: acc = heavy_round(acc, 0x34eae559u); break;
    case 51: acc = heavy_round(acc, 0xe96f0ee4u); break;
    case 52: acc = heavy_round(acc, 0xcb458cf3u); break;
    case 53: acc = heavy_round(acc, 0x08daedb6u); break;
    case 54: acc = heavy_round(acc, 0x2109899du); break;
    case 55: acc = heavy_round(acc, 0x27147e58u); break;
    case 56: acc = heavy_round(acc, 0xb9686dd7u); break;
    case 57: acc = heavy_round(acc, 0xfc7f314au); break;
    case 58: acc = heavy_round(acc, 0x8cc1f021u); break;
    case 59: acc = heavy_round(acc, 0x1b2e4b0cu); break;
    case 60: acc = heavy_round(acc, 0x63db8afbu); break;
    case 61: acc = heavy_round(acc, 0x5a78041eu); break;
    case 62: acc = heavy_round(acc, 0x0d191ce5u); break;
    case 63: acc = heavy_round(acc, 0xba95a900u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

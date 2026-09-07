#include "heavy.h"
#include "mods.h"

int mod_042(int x)
{
    static const uint32_t local[256] = {
        0x5a463d81u, 0xd01a78ecu, 0x29011f5bu, 0xd3deccfeu, 0xc93a9045u, 0xe0a0c4e0u, 0xecea32bfu, 0x8932a112u, 0x1af04d49u, 0xe58ef614u, 0xe2b16a63u, 0xd37fcc66u, 0xdb52f88du, 0xb472c088u, 0xec40ea47u, 0xfa0222fau,
        0x32e45611u, 0x33fb183cu, 0x49b3166bu, 0x85e8b8ceu, 0xcf0069d5u, 0x3f6c3130u, 0x5e3692cfu, 0x19e9e1e2u, 0xcc6177d9u, 0x27537f64u, 0xf1324373u, 0x19173236u, 0xa7e4041du, 0x037bb6d8u, 0x8fa94c57u, 0x70f17dcau,
        0x798ad2a1u, 0x4a20cb8cu, 0xf1df117bu, 0x1abcd89eu, 0xfdc2e765u, 0x6063f180u, 0x893b36dfu, 0x281496b2u, 0x30e78669u, 0x17ff9cb4u, 0x9a6da083u, 0x6ebf4c06u, 0x810633adu, 0x4e3b8128u, 0x87d27267u, 0x27c2cc9au,
        0xd9e2b331u, 0x202092dcu, 0x3016108bu, 0x15b82c6eu, 0x0f3b08f5u, 0x67ed05d0u, 0x85191eefu, 0x065fbf82u, 0x694b78f9u, 0x77c84e04u, 0xbf148193u, 0xc37519d6u, 0x5792873du, 0x45b71f78u, 0xcffd5c77u, 0xc6c30f6au,
        0x8dd4f7c1u, 0x7ccf6e2cu, 0xfb29139bu, 0x4577b43eu, 0x0f61ce85u, 0x27ac6e20u, 0xb5314affu, 0x66b85c52u, 0xec964f89u, 0xe8229354u, 0x3017e6a3u, 0xb9759ba6u, 0xb6a1fecdu, 0xf03391c8u, 0x37ab0a87u, 0x3d7f463au,
        0xed8aa051u, 0x30425d7cu, 0x42291aabu, 0x93d8700eu, 0xec703815u, 0x6e872a70u, 0xd924bb0fu, 0x2a4b6d22u, 0x18110a19u, 0x3bc36ca4u, 0xbea8cfb3u, 0x763dd176u, 0x538d9a5du, 0xf935d818u, 0x729c7c97u, 0x92c4710au,
        0xff6cace1u, 0x63ce60ccu, 0xfc6725bbu, 0xd5f75fdeu, 0x06df45a5u, 0x58a23ac0u, 0x1cd46f1fu, 0x3185f1f2u, 0xbf44a8a9u, 0xc69fd9f4u, 0x4c383cc3u, 0x728abb46u, 0x9dee59edu, 0x0182f268u, 0x28d2b2a7u, 0xb49f8fdau,
        0x08241d71u, 0xea08781cu, 0x397434cbu, 0x9c3183aeu, 0xc167f735u, 0x9f629f10u, 0x2861672fu, 0x2c14eac2u, 0xbbfa2b39u, 0xadecdb44u, 0xda772dd3u, 0x4a595916u, 0x4f9d3d7du, 0xef1fe0b8u, 0x068eacb7u, 0x485da2aau,
        0x1a99f201u, 0x8ec5a36cu, 0x312147dbu, 0x0223db7eu, 0x11034cc5u, 0xe96d5760u, 0x302ca33fu, 0x68e55792u, 0x7e3a91c9u, 0x381f7094u, 0x9b56a2e3u, 0x8ce6aae6u, 0xfcb3450du, 0x3d51a308u, 0xcc516ac7u, 0x7a8ba97au,
        0xa7f72a91u, 0x671ae2bcu, 0x537f5eebu, 0x7eab674eu, 0x0cea4655u, 0x1aa763b0u, 0x04d7234fu, 0xa6243862u, 0x9c4edc59u, 0x1cec99e4u, 0x01079bf3u, 0x8cafb0b6u, 0xa389709du, 0x4c9d3958u, 0x5edbecd7u, 0xcef6a44au,
        0x0fa4c721u, 0x215d360cu, 0x58df79fbu, 0xb3e5271eu, 0x7e95e3e5u, 0xa435c400u, 0x2341e75fu, 0xe13e8d32u, 0x62c00ae9u, 0xd5495734u, 0xcdfb1903u, 0x2f716a86u, 0x3cb8c02du, 0xb2c7a3a8u, 0xd72f32e7u, 0xf0ab931au,
        0x2f4bc7b1u, 0x55219d5cu, 0x51d2990bu, 0x3f2e1aeeu, 0x71bf2575u, 0xd47d7850u, 0xc48def6fu, 0x26e15602u, 0x64571d79u, 0xeb6aa884u, 0x24e21a13u, 0xbe28d856u, 0x4b1a33bdu, 0x8ad5e1f8u, 0x928c3cf7u, 0x81f775eau,
        0xf2d52c41u, 0xd33d18acu, 0xb729bc1bu, 0x892342beu, 0xc45f0b05u, 0x272380a0u, 0xee1c3b7fu, 0x62f992d2u, 0x0a1d1409u, 0x4ac58dd4u, 0x98ad9f23u, 0xb512fa26u, 0x6bc6cb4du, 0xc50cf448u, 0x42740b07u, 0xec674cbau,
        0xe469f4d1u, 0xf5c4a7fcu, 0x79f5e32bu, 0x95a19e8eu, 0xb6ae9495u, 0x950cdcf0u, 0x818dcb8fu, 0x30b443a2u, 0x235aee99u, 0x900f0724u, 0x3c8ea833u, 0x93accff6u, 0xe61786ddu, 0x76f1da98u, 0xfca79d17u, 0x30c8178au,
        0xbc732161u, 0xf00d4b4cu, 0x13880e3bu, 0xd3c62e5eu, 0x7b26c225u, 0xe45e8d40u, 0x4cc39f9fu, 0xaa7e6872u, 0x7599ad29u, 0x593c1474u, 0xb3f63543u, 0xacb359c6u, 0x3ba5666du, 0x2b4994e8u, 0x4b27f327u, 0xb726d65au,
        0xf199b1f1u, 0x1eac029cu, 0x95713d4bu, 0xededf22eu, 0xc68093b5u, 0xf87d9190u, 0x19deb7afu, 0x3a050142u, 0x4ca24fb9u, 0x9581b5c4u, 0x42954653u, 0xf6239796u, 0xb84969fdu, 0x32192338u, 0x3c360d37u, 0x1ed0892au,
    };
    uint32_t acc = 0x91e7bc2au ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 42) & 255]);
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
    case 0: acc = heavy_round(acc, 0x9cc443a9u); break;
    case 1: acc = heavy_round(acc, 0x00dcb8f4u); break;
    case 2: acc = heavy_round(acc, 0x49298fc3u); break;
    case 3: acc = heavy_round(acc, 0x8cddf246u); break;
    case 4: acc = heavy_round(acc, 0x7b1224edu); break;
    case 5: acc = heavy_round(acc, 0x52364168u); break;
    case 6: acc = heavy_round(acc, 0x6a67b5a7u); break;
    case 7: acc = heavy_round(acc, 0xb362b6dau); break;
    case 8: acc = heavy_round(acc, 0x88971871u); break;
    case 9: acc = heavy_round(acc, 0xc2e1371cu); break;
    case 10: acc = heavy_round(acc, 0x3f8fe7cbu); break;
    case 11: acc = heavy_round(acc, 0x6feb9aaeu); break;
    case 12: acc = heavy_round(acc, 0xe6052235u); break;
    case 13: acc = heavy_round(acc, 0x4d7fce10u); break;
    case 14: acc = heavy_round(acc, 0x3796ca2fu); break;
    case 15: acc = heavy_round(acc, 0xe23cf1c2u); break;
    case 16: acc = heavy_round(acc, 0x9dcc8639u); break;
    case 17: acc = heavy_round(acc, 0xd8dd7a44u); break;
    case 18: acc = heavy_round(acc, 0x6f0940d3u); break;
    case 19: acc = heavy_round(acc, 0xe4565016u); break;
    case 20: acc = heavy_round(acc, 0x0adfc87du); break;
    case 21: acc = heavy_round(acc, 0x87e2efb8u); break;
    case 22: acc = heavy_round(acc, 0xf7706fb7u); break;
    case 23: acc = heavy_round(acc, 0x828689aau); break;
    case 24: acc = heavy_round(acc, 0xe9b7ad01u); break;
    case 25: acc = heavy_round(acc, 0x2eca226cu); break;
    case 26: acc = heavy_round(acc, 0x82f5badbu); break;
    case 27: acc = heavy_round(acc, 0x0abfb27eu); break;
    case 28: acc = heavy_round(acc, 0x979737c5u); break;
    case 29: acc = heavy_round(acc, 0xa1924660u); break;
    case 30: acc = heavy_round(acc, 0x9846c63fu); break;
    case 31: acc = heavy_round(acc, 0x872b1e92u); break;
    case 32: acc = heavy_round(acc, 0x440facc9u); break;
    case 33: acc = heavy_round(acc, 0xcfb3cf94u); break;
    case 34: acc = heavy_round(acc, 0xb2b975e3u); break;
    case 35: acc = heavy_round(acc, 0xb7fd61e6u); break;
    case 36: acc = heavy_round(acc, 0x18c4900du); break;
    case 37: acc = heavy_round(acc, 0xe1147208u); break;
    case 38: acc = heavy_round(acc, 0xf2afedc7u); break;
    case 39: acc = heavy_round(acc, 0xe08a507au); break;
    case 40: acc = heavy_round(acc, 0x9b6fa591u); break;
    case 41: acc = heavy_round(acc, 0xc83b21bcu); break;
    case 42: acc = heavy_round(acc, 0x423c91ebu); break;
    case 43: acc = heavy_round(acc, 0xfb98fe4eu); break;
    case 44: acc = heavy_round(acc, 0xce24f155u); break;
    case 45: acc = heavy_round(acc, 0xfdc412b0u); break;
    case 46: acc = heavy_round(acc, 0x1206064fu); break;
    case 47: acc = heavy_round(acc, 0x2af7bf62u); break;
    case 48: acc = heavy_round(acc, 0xd1d6b759u); break;
    case 49: acc = heavy_round(acc, 0x5914b8e4u); break;
    case 50: acc = heavy_round(acc, 0x126b2ef3u); break;
    case 51: acc = heavy_round(acc, 0x765027b6u); break;
    case 52: acc = heavy_round(acc, 0x0f197b9du); break;
    case 53: acc = heavy_round(acc, 0x3a4fc858u); break;
    case 54: acc = heavy_round(acc, 0x8ce72fd7u); break;
    case 55: acc = heavy_round(acc, 0x2d3b0b4au); break;
    case 56: acc = heavy_round(acc, 0x29280221u); break;
    case 57: acc = heavy_round(acc, 0x7989350cu); break;
    case 58: acc = heavy_round(acc, 0x41b56cfbu); break;
    case 59: acc = heavy_round(acc, 0x80947e1eu); break;
    case 60: acc = heavy_round(acc, 0x3f274ee5u); break;
    case 61: acc = heavy_round(acc, 0xcf3a3300u); break;
    case 62: acc = heavy_round(acc, 0xedb58a5fu); break;
    case 63: acc = heavy_round(acc, 0x270fd432u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

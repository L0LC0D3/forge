#include "heavy.h"
#include "mods.h"

int mod_064(int x)
{
    static const uint32_t local[256] = {
        0x0d2ad013u, 0x485e1656u, 0x948259bdu, 0x7a43cff8u, 0xc5f552f7u, 0x231193eau, 0x771cb241u, 0x2042e6acu, 0x0e89321bu, 0x880040beu, 0x90cbf105u, 0x624f2ea0u, 0x54a8117fu, 0x355770d2u, 0xcd555a09u, 0x76851bd4u,
        0x01fbd523u, 0x7d8fb826u, 0xdbd0714du, 0x83ae6248u, 0x007aa107u, 0xd880eabau, 0x84aafad1u, 0x9775f5fcu, 0xf30ad92bu, 0x1bb61c8eu, 0xfdecfa95u, 0x05dc0af0u, 0x4667218fu, 0x2e01a1a2u, 0x01bcb499u, 0x25ea1524u,
        0x7e425e33u, 0x4a510df6u, 0xab22acddu, 0x9fa6c898u, 0x62abb317u, 0x25c1358au, 0x5d0da761u, 0xbf4a194cu, 0xf1b2843bu, 0x8cf22c5eu, 0x3796a825u, 0x81b13b40u, 0x394a759fu, 0x4c9b4672u, 0xdf84f329u, 0x4e12a274u,
        0x7d6f6b43u, 0x795f17c6u, 0x9c120c6du, 0x90f202e8u, 0x4e898927u, 0x6adf745au, 0x0eedb7f1u, 0xac54509cu, 0x7411334bu, 0xfe11702eu, 0x0a81f9b5u, 0xf133bf90u, 0xcf730dafu, 0xf2d15f42u, 0x4a7715b9u, 0x9633c3c4u,
        0x9b33fc53u, 0x78b6d596u, 0x12778ffdu, 0xdf951138u, 0xaa552337u, 0x3f28a72au, 0xf7342c81u, 0xec699becu, 0x8bf7e65bu, 0x9cb0e7feu, 0x55a7ef45u, 0xdd0897e0u, 0xb741e9bfu, 0xa190ec12u, 0x3c9c1c49u, 0x46c27914u,
        0x23811163u, 0x29954766u, 0xcc6c378du, 0x28d4f388u, 0xf08f8147u, 0x4129cdfau, 0x510a0511u, 0xd69efb3cu, 0x03779d6bu, 0x71ad93ceu, 0x9a4188d5u, 0x8b14c430u, 0xbb5809cfu, 0xc906ece2u, 0x563d06d9u, 0x9973c264u,
        0x2287aa73u, 0xb0776d36u, 0x7249031du, 0x6f36a9d8u, 0x3ff9a357u, 0xe6afe8cau, 0xc5d841a1u, 0xdb496e8cu, 0x6ce1587bu, 0x3124739eu, 0x8bc7c665u, 0x4e7d4480u, 0xd2966ddfu, 0x98a061b2u, 0x6de2d569u, 0x093c9fb4u,
        0x74b8c783u, 0x451a4706u, 0x26a6f2adu, 0x6a7f3428u, 0x6b948967u, 0x4cc7f79au, 0xfd47e231u, 0xd3fdf5dcu, 0x32c6178bu, 0x0a72876eu, 0x9ff3a7f5u, 0xd7a718d0u, 0x301e15efu, 0xcf0a4a82u, 0x205687f9u, 0xa2521104u,
        0xd6c56893u, 0x027ad4d6u, 0x165f063du, 0xd7b39278u, 0x0aa13377u, 0x07befa6au, 0x2d41e6c1u, 0x5391912cu, 0xa7f6da9bu, 0x7834cf3eu, 0x9ebe2d85u, 0x84374120u, 0x535001ffu, 0x8a31a752u, 0x60a11e89u, 0x52291654u,
        0xf59e8da3u, 0xb6d616a6u, 0x088a3dcdu, 0xc918c4c8u, 0x88a0a187u, 0xf321f13au, 0xa9ef4f51u, 0xf619407cu, 0x1784a1abu, 0x10484b0eu, 0x32605715u, 0xaf12bd70u, 0x17cd320fu, 0x17437822u, 0x080b9919u, 0x3776afa4u,
        0x7e7536b3u, 0xb3a90c76u, 0xee81995du, 0xf633cb18u, 0x3553d397u, 0x01bddc0au, 0x75b91be1u, 0xb0ea03ccu, 0xd4c06cbbu, 0x53c9fadeu, 0x775324a5u, 0x005e8dc0u, 0xc576a61fu, 0xc2acbcf2u, 0x661ef7a9u, 0xf22fdcf4u,
        0x2eba63c3u, 0x9db0b646u, 0x73de18edu, 0x0bc9a568u, 0x54bbc9a7u, 0x0d9fbadau, 0xd1484c71u, 0x2298db1cu, 0x4b3b3bcbu, 0x7f16deaeu, 0x8c4f9635u, 0xbd7fb210u, 0x206d5e2fu, 0xa81a75c2u, 0xd0a43a39u, 0xf3899e44u,
        0xe41f14d3u, 0x3cea1416u, 0x8e78bc7du, 0xfbdf53b8u, 0x2f1983b7u, 0xa8148daau, 0xcb85e101u, 0xe2fac66cu, 0x0ec60edbu, 0x59cbf67eu, 0x224eabc5u, 0x191b2a60u, 0x79125a3fu, 0x8279a292u, 0x33a460c9u, 0xcdf8f394u,
        0xac9449e3u, 0x4c9225e6u, 0x0e6a840du, 0x4db9d608u, 0x20ee01c7u, 0xe9a9547au, 0xd19ad991u, 0xd324c5bcu, 0xeb71e5ebu, 0x06c6424eu, 0x0c896555u, 0x8315f6b0u, 0xbc069a4fu, 0x7bf74362u, 0xa1686b59u, 0x8532dce4u,
        0xd64b02f3u, 0x4b25ebb6u, 0x2e0c6f9du, 0x6dde2c58u, 0xaafa43d7u, 0x422b0f4au, 0x3ef03621u, 0x6d6bd90cu, 0xf58fc0fbu, 0xd422c21eu, 0xd078c2e5u, 0xf8951700u, 0x822b1e5fu, 0xfe005832u, 0xe27959e9u, 0xde2c5a34u,
        0xffb44003u, 0x4a626586u, 0x21f77f2du, 0xfe1156a8u, 0x823f49e7u, 0x48a6be1au, 0xed2ef6b1u, 0x1565005cu, 0x99b0a00bu, 0x0b3e75eeu, 0x35d5c475u, 0x53fd8b50u, 0x20a0e66fu, 0x8141e102u, 0x05a02c79u, 0xaf1a6b84u,
    };
    uint32_t acc = 0xe9eeb684u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 64) & 255]);
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
    case 0: acc = heavy_round(acc, 0x4db4120bu); break;
    case 1: acc = heavy_round(acc, 0xb0d73feeu); break;
    case 2: acc = heavy_round(acc, 0x39140675u); break;
    case 3: acc = heavy_round(acc, 0xbe72e550u); break;
    case 4: acc = heavy_round(acc, 0x1472786fu); break;
    case 5: acc = heavy_round(acc, 0xa5124b02u); break;
    case 6: acc = heavy_round(acc, 0x3b718e79u); break;
    case 7: acc = heavy_round(acc, 0x69c86584u); break;
    case 8: acc = heavy_round(acc, 0x5df2b313u); break;
    case 9: acc = heavy_round(acc, 0x31f69d56u); break;
    case 10: acc = heavy_round(acc, 0x660b34bdu); break;
    case 11: acc = heavy_round(acc, 0x0878eef8u); break;
    case 12: acc = heavy_round(acc, 0x3001e5f7u); break;
    case 13: acc = heavy_round(acc, 0xe3470aeau); break;
    case 14: acc = heavy_round(acc, 0x263dbd41u); break;
    case 15: acc = heavy_round(acc, 0x425275acu); break;
    case 16: acc = heavy_round(acc, 0xf34d751bu); break;
    case 17: acc = heavy_round(acc, 0xe3a9a7beu); break;
    case 18: acc = heavy_round(acc, 0xc6702c05u); break;
    case 19: acc = heavy_round(acc, 0x4e282da0u); break;
    case 20: acc = heavy_round(acc, 0xab47047fu); break;
    case 21: acc = heavy_round(acc, 0xab3bc7d2u); break;
    case 22: acc = heavy_round(acc, 0x4397c509u); break;
    case 23: acc = heavy_round(acc, 0x61868ad4u); break;
    case 24: acc = heavy_round(acc, 0x5a487823u); break;
    case 25: acc = heavy_round(acc, 0x6d65ff26u); break;
    case 26: acc = heavy_round(acc, 0x58fc0c4du); break;
    case 27: acc = heavy_round(acc, 0x61a74148u); break;
    case 28: acc = heavy_round(acc, 0x35f7f407u); break;
    case 29: acc = heavy_round(acc, 0x99f021bau); break;
    case 30: acc = heavy_round(acc, 0x063ac5d1u); break;
    case 31: acc = heavy_round(acc, 0x49a544fcu); break;
    case 32: acc = heavy_round(acc, 0x8febdc2bu); break;
    case 33: acc = heavy_round(acc, 0x0555438eu); break;
    case 34: acc = heavy_round(acc, 0x138bf595u); break;
    case 35: acc = heavy_round(acc, 0xf9f0c9f0u); break;
    case 36: acc = heavy_round(acc, 0x968ed48fu); break;
    case 37: acc = heavy_round(acc, 0x8c57b8a2u); break;
    case 38: acc = heavy_round(acc, 0x5845df99u); break;
    case 39: acc = heavy_round(acc, 0x65034424u); break;
    case 40: acc = heavy_round(acc, 0x5243c133u); break;
    case 41: acc = heavy_round(acc, 0x46d514f6u); break;
    case 42: acc = heavy_round(acc, 0xc7a107ddu); break;
    case 43: acc = heavy_round(acc, 0x4d536798u); break;
    case 44: acc = heavy_round(acc, 0x82c9c617u); break;
    case 45: acc = heavy_round(acc, 0x9dda2c8au); break;
    case 46: acc = heavy_round(acc, 0x87bc3261u); break;
    case 47: acc = heavy_round(acc, 0x0889284cu); break;
    case 48: acc = heavy_round(acc, 0x40e0473bu); break;
    case 49: acc = heavy_round(acc, 0xd8f7135eu); break;
    case 50: acc = heavy_round(acc, 0x96e06325u); break;
    case 51: acc = heavy_round(acc, 0xfbf1ba40u); break;
    case 52: acc = heavy_round(acc, 0x882ae89fu); break;
    case 53: acc = heavy_round(acc, 0xf6d31d72u); break;
    case 54: acc = heavy_round(acc, 0xc304de29u); break;
    case 55: acc = heavy_round(acc, 0xc6339174u); break;
    case 56: acc = heavy_round(acc, 0x0d558e43u); break;
    case 57: acc = heavy_round(acc, 0xe500dec6u); break;
    case 58: acc = heavy_round(acc, 0xf793276du); break;
    case 59: acc = heavy_round(acc, 0x4a4261e8u); break;
    case 60: acc = heavy_round(acc, 0x04785c27u); break;
    case 61: acc = heavy_round(acc, 0x6b122b5au); break;
    case 62: acc = heavy_round(acc, 0x256b02f1u); break;
    case 63: acc = heavy_round(acc, 0x0f931f9cu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

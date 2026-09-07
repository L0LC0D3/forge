#include "heavy.h"
#include "mods.h"

int mod_093(int x)
{
    static const uint32_t local[256] = {
        0x1bf72d88u, 0x96687347u, 0xbf9a17fau, 0xb439c711u, 0xd957d53cu, 0x17b6af6bu, 0x5c0d7dceu, 0x925c6ad5u, 0xec7e3e30u, 0x9e4f3bcfu, 0xaf8076e2u, 0xf16508d9u, 0x9d47dc64u, 0x60a8fc73u, 0x20d49736u, 0x5fc0251du,
        0x47cf63d8u, 0x43d71557u, 0x765ab2cau, 0xd80083a1u, 0x43a0c88cu, 0x512cea7bu, 0x2726dd9eu, 0x5a232865u, 0xc42d3e80u, 0x54221fdfu, 0x37a46bb2u, 0x17135769u, 0xa67f39b4u, 0x04769983u, 0xb569f106u, 0x326e94adu,
        0x602e6e28u, 0x60967b67u, 0x264d419au, 0x5e88a431u, 0x8393cfdcu, 0x1c3e298bu, 0x7eb7716eu, 0xd6af89f5u, 0x8d3d92d0u, 0x475e47efu, 0x7338d482u, 0x7baf89f9u, 0xeea32b04u, 0x913fba93u, 0x395cfed6u, 0x1697283du,
        0x8a194c78u, 0xcbe7a577u, 0x0bbec46au, 0x05bb28c1u, 0x1405eb2cu, 0x93bb6c9bu, 0x055c393eu, 0xd7fa8f85u, 0x0d543b20u, 0x3f64b3ffu, 0x282ab152u, 0x9a42a089u, 0x4b28b054u, 0x7bf55fa3u, 0xa2eac0a6u, 0xdb52dfcdu,
        0x3fd4fec8u, 0x394b9387u, 0xaa3c3b3au, 0xa9c11151u, 0x790c1a7cu, 0xcab5b3abu, 0x78f2350eu, 0x103d3915u, 0x07563770u, 0x5fd6640fu, 0x4ba70222u, 0xd4159b19u, 0xc2c4c9a4u, 0x39c888b3u, 0x6b903676u, 0x79fabb5du,
        0xa0e68518u, 0x40834597u, 0x9c92a60au, 0xd5035de1u, 0x8ffb5dccu, 0xdc7dfebbu, 0x829664deu, 0xa3f086a5u, 0x8b6887c0u, 0x3894581fu, 0xd21ac6f2u, 0x00b179a9u, 0xdd6c76f4u, 0x502a35c3u, 0x600a6046u, 0xa627baedu,
        0xc212df68u, 0x6d8fbba7u, 0x64cf04dau, 0x502b0e71u, 0xdf68b51cu, 0xfca54dcbu, 0x86a5c8aeu, 0xb9cd7835u, 0x46f02c10u, 0xd5bf902fu, 0x7f32ffc2u, 0xfddf3c39u, 0xf454b844u, 0x64cb66d3u, 0x70563e16u, 0x5db2de7du,
        0xfd5f0db8u, 0x50b1f5b7u, 0x3c3e57aau, 0xb2212301u, 0xe729206cu, 0x86fca0dbu, 0x74bd607eu, 0x0acd0dc5u, 0xd4922460u, 0xcfb90c3fu, 0xb5dcac92u, 0x3fa7e2c9u, 0x81f28d94u, 0x4d9d1be3u, 0x7fb0cfe6u, 0x78b5260du,
        0x42101008u, 0x8e6af3c7u, 0xe36d9e7au, 0xf00e9b91u, 0x70519fbcu, 0x0f94f7ebu, 0x97ba2c4eu, 0x72284755u, 0x0c3370b0u, 0x5b21cc4fu, 0x4844cd62u, 0x60546d59u, 0x71faf6e4u, 0x20d054f3u, 0x349715b6u, 0x3987919du,
        0x64aae658u, 0xef7bb5d7u, 0x7229d94au, 0xed5c7821u, 0xdd37330cu, 0x72bf52fbu, 0x65b92c1eu, 0x7d5824e5u, 0x52f91100u, 0x58dad05fu, 0x47d86232u, 0xb06ddbe9u, 0x7162f434u, 0x44d61203u, 0xc8c60f86u, 0xdcc3212du,
        0x6ef490a8u, 0x70e53be7u, 0x2780081au, 0x0bb3b8b1u, 0x796eda5cu, 0xe50cb20bu, 0x50175feeu, 0xfc15a675u, 0xeb480550u, 0x6605186fu, 0xd5446b02u, 0xc6bd2e79u, 0x3e5f8584u, 0x805f5313u, 0xd93abd56u, 0x2940d4bdu,
        0xeff20ef8u, 0x53e885f7u, 0x39bd2aeau, 0xbafd5d41u, 0xc9cd95acu, 0x034e151bu, 0x9371c7beu, 0x9059cc05u, 0x44c54da0u, 0xec01a47fu, 0xf075e7d2u, 0x104b6509u, 0xf865aad4u, 0x0a5d1823u, 0x36321f26u, 0x0019ac4du,
        0x4be86148u, 0x2e069407u, 0xa66e41bau, 0x096265d1u, 0xdc6864fcu, 0xe2947c2bu, 0x07a5638eu, 0x3e5d9595u, 0x4c55e9f0u, 0x3071748fu, 0x4899d8a2u, 0x60617f99u, 0x702a6424u, 0x9a006133u, 0xb32934f6u, 0xeca6a7ddu,
        0x0c5c8798u, 0xf9006617u, 0x02604c8au, 0x334bd261u, 0x9894484cu, 0x2030e73bu, 0xefcf335eu, 0xfc9a0325u, 0xbc1eda40u, 0x6535889fu, 0x0c1d3d72u, 0x80887e29u, 0x77a2b174u, 0x76ba2e43u, 0xf6dcfec6u, 0xb480c76du,
        0x301381e8u, 0x22d6fc27u, 0x49a04b5au, 0x3362a2f1u, 0x0ee63f9cu, 0xf1b4564bu, 0xca4c372eu, 0x43c814b5u, 0x6b851e90u, 0xb86ee0afu, 0xb8ad1642u, 0xc08960b9u, 0x320392c4u, 0x883b7f53u, 0x4b4a7c96u, 0xe7810afdu,
        0x7b125038u, 0x9dcb5637u, 0xaf7b3e2au, 0x528fd781u, 0xc9334aecu, 0x34efc95bu, 0x20b96efeu, 0x9ee0ca45u, 0x9f2db6e0u, 0x647e7cbfu, 0xeb366312u, 0x866d2749u, 0x63c20814u, 0x66755463u, 0x6daeae66u, 0x6fc0728du,
    };
    uint32_t acc = 0x69b2d98du ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 93) & 255]);
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
    case 0: acc = heavy_round(acc, 0x0de551aau); break;
    case 1: acc = heavy_round(acc, 0x4937d501u); break;
    case 2: acc = heavy_round(acc, 0x003c2a6cu); break;
    case 3: acc = heavy_round(acc, 0x5cf022dbu); break;
    case 4: acc = heavy_round(acc, 0x09e6fa7eu); break;
    case 5: acc = heavy_round(acc, 0x3b45dfc5u); break;
    case 6: acc = heavy_round(acc, 0xf060ce60u); break;
    case 7: acc = heavy_round(acc, 0x2af3ae3fu); break;
    case 8: acc = heavy_round(acc, 0x8662e692u); break;
    case 9: acc = heavy_round(acc, 0xfb94d4c9u); break;
    case 10: acc = heavy_round(acc, 0x1766d794u); break;
    case 11: acc = heavy_round(acc, 0x7400dde3u); break;
    case 12: acc = heavy_round(acc, 0x240da9e6u); break;
    case 13: acc = heavy_round(acc, 0x1a48380du); break;
    case 14: acc = heavy_round(acc, 0xd1b3fa08u); break;
    case 15: acc = heavy_round(acc, 0x02f9d5c7u); break;
    case 16: acc = heavy_round(acc, 0xcebb187au); break;
    case 17: acc = heavy_round(acc, 0xab99cd91u); break;
    case 18: acc = heavy_round(acc, 0x4e4f29bcu); break;
    case 19: acc = heavy_round(acc, 0xd470f9ebu); break;
    case 20: acc = heavy_round(acc, 0x71b2464eu); break;
    case 21: acc = heavy_round(acc, 0xe81d9955u); break;
    case 22: acc = heavy_round(acc, 0xca549ab0u); break;
    case 23: acc = heavy_round(acc, 0x538cee4fu); break;
    case 24: acc = heavy_round(acc, 0xe7418762u); break;
    case 25: acc = heavy_round(acc, 0x4f45df59u); break;
    case 26: acc = heavy_round(acc, 0xe9a9c0e4u); break;
    case 27: acc = heavy_round(acc, 0x932c96f3u); break;
    case 28: acc = heavy_round(acc, 0x37926fb6u); break;
    case 29: acc = heavy_round(acc, 0x5027239du); break;
    case 30: acc = heavy_round(acc, 0x60f15058u); break;
    case 31: acc = heavy_round(acc, 0x274b17d7u); break;
    case 32: acc = heavy_round(acc, 0x7abdd34au); break;
    case 33: acc = heavy_round(acc, 0xbc7c2a21u); break;
    case 34: acc = heavy_round(acc, 0x64bf3d0cu); break;
    case 35: acc = heavy_round(acc, 0x82a3d4fbu); break;
    case 36: acc = heavy_round(acc, 0xf21fc61eu); break;
    case 37: acc = heavy_round(acc, 0x89e9f6e5u); break;
    case 38: acc = heavy_round(acc, 0x920cbb00u); break;
    case 39: acc = heavy_round(acc, 0xfc96725fu); break;
    case 40: acc = heavy_round(acc, 0x2ceb9c32u); break;
    case 41: acc = heavy_round(acc, 0xa583cde9u); break;
    case 42: acc = heavy_round(acc, 0x43ec3e34u); break;
    case 43: acc = heavy_round(acc, 0xe34ad403u); break;
    case 44: acc = heavy_round(acc, 0x4bffe986u); break;
    case 45: acc = heavy_round(acc, 0xdd8f332du); break;
    case 46: acc = heavy_round(acc, 0x8a7d7aa8u); break;
    case 47: acc = heavy_round(acc, 0x3e151de7u); break;
    case 48: acc = heavy_round(acc, 0xb8fa821au); break;
    case 49: acc = heavy_round(acc, 0x2587eab1u); break;
    case 50: acc = heavy_round(acc, 0x3721645cu); break;
    case 51: acc = heavy_round(acc, 0x2419b40bu); break;
    case 52: acc = heavy_round(acc, 0xe48c79eeu); break;
    case 53: acc = heavy_round(acc, 0xb863f875u); break;
    case 54: acc = heavy_round(acc, 0xb1ee2f50u); break;
    case 55: acc = heavy_round(acc, 0xcb313a6fu); break;
    case 56: acc = heavy_round(acc, 0xe00e2502u); break;
    case 57: acc = heavy_round(acc, 0xdd17a079u); break;
    case 58: acc = heavy_round(acc, 0x8c634f84u); break;
    case 59: acc = heavy_round(acc, 0xb30c9513u); break;
    case 60: acc = heavy_round(acc, 0xe6531756u); break;
    case 61: acc = heavy_round(acc, 0x515966bdu); break;
    case 62: acc = heavy_round(acc, 0x055d78f8u); break;
    case 63: acc = heavy_round(acc, 0x9098e7f7u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_097(int x)
{
    static const uint32_t local[256] = {
        0x612c4534u, 0x91552f03u, 0x25c88886u, 0x6319462du, 0x311271a8u, 0x2d0fa8e7u, 0x4215911au, 0x5ae1adb1u, 0xbb624b5cu, 0x466f6f0bu, 0x0e68f8eeu, 0x1a306b75u, 0x5a220650u, 0xfc7d256fu, 0x938b1402u, 0x18a9c379u,
        0x37c11684u, 0x3319b013u, 0x42bf7656u, 0x77b439bdu, 0xc30c2ff8u, 0xae6232f7u, 0x31d8f3eau, 0x077c9241u, 0x886146acu, 0xd254121bu, 0x2e8da0beu, 0xba39d105u, 0x24238ea0u, 0x2ab0f17fu, 0x7d0ad0d2u, 0x49b13a09u,
        0x426f7bd4u, 0x1f22b523u, 0x55c91826u, 0x12fa514du, 0xe00ec248u, 0x779f8107u, 0x76a04abau, 0x6c82dad1u, 0x40ac55fcu, 0x950db92bu, 0x5b1b7c8eu, 0xfa52da95u, 0x4e486af0u, 0x8228018fu, 0xf00d01a2u, 0xc4909499u,
        0x55ec7524u, 0x40a13e33u, 0xd6626df6u, 0x14448cddu, 0x559f2898u, 0xf6889317u, 0x8938958au, 0x5a5d8761u, 0x4f98794cu, 0xdfed643bu, 0xfb2f8c5eu, 0xa4f48825u, 0x56b59b40u, 0x28c3559fu, 0x7efea672u, 0x66d0d329u,
        0x482d0274u, 0x13064b43u, 0x0f4877c6u, 0x952bec6du, 0x668262e8u, 0x0d1e6927u, 0x49aed45au, 0x5fb597f1u, 0x49bab09cu, 0x9c84134bu, 0xb126d02eu, 0x06d7d9b5u, 0xd8d01f90u, 0x40a3edafu, 0x0b8cbf42u, 0x943af5b9u,
        0x406623c4u, 0xb202dc53u, 0xee783596u, 0x79896ffdu, 0x1abd7138u, 0x21a20337u, 0xcf50072au, 0x59740c81u, 0x3ce7fbecu, 0x5ca2c65bu, 0x2a9e47feu, 0x7ef5cf45u, 0xdd3cf7e0u, 0xf82ac9bfu, 0x96a44c12u, 0xc6d7fc49u,
        0x070cd914u, 0xe987f163u, 0xd52ea766u, 0xff76178du, 0x8f955388u, 0x2e946147u, 0x38a92dfau, 0x02c1e511u, 0x00355b3cu, 0x6a5a7d6bu, 0xf072f3ceu, 0x0e8768d5u, 0x29e12430u, 0x99f8e9cfu, 0x10724ce2u, 0x1ef0e6d9u,
        0x55d62264u, 0x45c68a73u, 0x67e8cd36u, 0x4f4ae31du, 0x478f09d8u, 0xd2b68357u, 0x7b8748cau, 0x850821a1u, 0x83f7ce8cu, 0xd7fc387bu, 0x36c1d39eu, 0xe905a665u, 0x91e1a480u, 0x9cef4ddfu, 0x2863c1b2u, 0xf30eb569u,
        0x27b6ffb4u, 0x232fa783u, 0x5e63a706u, 0x0ba0d2adu, 0x7a6f9428u, 0x61096967u, 0x34f7579au, 0x07efc231u, 0x21c455dcu, 0x9018f78bu, 0xace7e76eu, 0x042987f5u, 0x45a378d0u, 0xb42ef5efu, 0x1d25aa82u, 0x5ffa67f9u,
        0x08e47104u, 0xbe744893u, 0x539c34d6u, 0xe150e63du, 0x653bf278u, 0xf0ce1377u, 0x79465a6au, 0x4161c6c1u, 0xec6ff12cu, 0x6581ba9bu, 0x4d822f3eu, 0xa7ec0d85u, 0x22cba120u, 0xdf18e1ffu, 0x8ca50752u, 0xd8bcfe89u,
        0x66d37654u, 0x44856da3u, 0x95cf76a6u, 0x17741dcdu, 0x9a3924c8u, 0x6d858187u, 0xa401513au, 0x05872f51u, 0x000fa07cu, 0x234781abu, 0x2e6dab0eu, 0xfe863715u, 0x043f1d70u, 0x794e120fu, 0x440ed822u, 0xb69f7919u,
        0xe0390fa4u, 0xe29416b3u, 0xf67a6c76u, 0x1f63795du, 0x50ec2b18u, 0xa6f0b397u, 0x27f53c0au, 0xd6c8fbe1u, 0xd1f863ccu, 0x9cbb4cbbu, 0x50c75adeu, 0xa47104a5u, 0x1222edc0u, 0x4aaf861fu, 0x0fd01cf2u, 0xc92ad7a9u,
        0x950a3cf4u, 0xd61143c3u, 0x9a5a1646u, 0x24b7f8edu, 0xb61a0568u, 0x6110a9a7u, 0x5f2f1adau, 0x75d02c71u, 0x80bf3b1cu, 0xbd6e1bcbu, 0x70ec3eaeu, 0x38657635u, 0x11dc1210u, 0x975e3e2fu, 0x8b95d5c2u, 0xe6281a39u,
        0x767bfe44u, 0x7cadf4d3u, 0xc96b7416u, 0x9d4a9c7du, 0x3bc7b3b8u, 0x642663b7u, 0x5afbedaau, 0x7185c101u, 0x2439266cu, 0x9930eedbu, 0xd679567eu, 0xeb5c8bc5u, 0xb60f8a60u, 0x2fbb3a3fu, 0xf24d0292u, 0x79a040c9u,
        0x97035394u, 0x645b29e3u, 0xbeeb85e6u, 0xd934640du, 0xe93a3608u, 0x8cb2e1c7u, 0xb3e8b47au, 0xb712b991u, 0x1d7b25bcu, 0x7c14c5ebu, 0x244ba24eu, 0x108f4555u, 0xeea256b0u, 0x80677a4fu, 0xee22a362u, 0x15dc4b59u,
        0x7a553ce4u, 0x5b49e2f3u, 0x79574bb6u, 0x92ce4f9du, 0xaaf68c58u, 0xdb7723d7u, 0x59c26f4au, 0x21e01621u, 0x66da390cu, 0xfa6aa0fbu, 0x2880221eu, 0xad76a2e5u, 0x38b97700u, 0xa243fe5fu, 0x6883b832u, 0x036539e9u,
    };
    uint32_t acc = 0x4a3130e9u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 97) & 255]);
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
    case 0: acc = heavy_round(acc, 0x376b186eu); break;
    case 1: acc = heavy_round(acc, 0x1b5904f5u); break;
    case 2: acc = heavy_round(acc, 0x93dad1d0u); break;
    case 3: acc = heavy_round(acc, 0x6b747aefu); break;
    case 4: acc = heavy_round(acc, 0x1bab6b82u); break;
    case 5: acc = heavy_round(acc, 0x70ab34f9u); break;
    case 6: acc = heavy_round(acc, 0x588cda04u); break;
    case 7: acc = heavy_round(acc, 0x24d79d93u); break;
    case 8: acc = heavy_round(acc, 0x678585d6u); break;
    case 9: acc = heavy_round(acc, 0xc370033du); break;
    case 10: acc = heavy_round(acc, 0x1b5e6b78u); break;
    case 11: acc = heavy_round(acc, 0xbdc43877u); break;
    case 12: acc = heavy_round(acc, 0x91843b6au); break;
    case 13: acc = heavy_round(acc, 0x1d2c33c1u); break;
    case 14: acc = heavy_round(acc, 0x62257a2cu); break;
    case 15: acc = heavy_round(acc, 0x154faf9bu); break;
    case 16: acc = heavy_round(acc, 0x3795a03eu); break;
    case 17: acc = heavy_round(acc, 0x52eeca85u); break;
    case 18: acc = heavy_round(acc, 0x5e3d3a20u); break;
    case 19: acc = heavy_round(acc, 0x17d3a6ffu); break;
    case 20: acc = heavy_round(acc, 0x159f0852u); break;
    case 21: acc = heavy_round(acc, 0x82d50b89u); break;
    case 22: acc = heavy_round(acc, 0xe43a1f54u); break;
    case 23: acc = heavy_round(acc, 0x0b1202a3u); break;
    case 24: acc = heavy_round(acc, 0x3b5107a6u); break;
    case 25: acc = heavy_round(acc, 0x47ce7acdu); break;
    case 26: acc = heavy_round(acc, 0x24ddddc8u); break;
    case 27: acc = heavy_round(acc, 0x2a98e687u); break;
    case 28: acc = heavy_round(acc, 0xd53b723au); break;
    case 29: acc = heavy_round(acc, 0xe7a0dc51u); break;
    case 30: acc = heavy_round(acc, 0x9b4b697cu); break;
    case 31: acc = heavy_round(acc, 0x7866b6abu); break;
    case 32: acc = heavy_round(acc, 0x1d215c0eu); break;
    case 33: acc = heavy_round(acc, 0xff2c3415u); break;
    case 34: acc = heavy_round(acc, 0xe47af670u); break;
    case 35: acc = heavy_round(acc, 0xe5ce170fu); break;
    case 36: acc = heavy_round(acc, 0x458d1922u); break;
    case 37: acc = heavy_round(acc, 0x70eec619u); break;
    case 38: acc = heavy_round(acc, 0x73edf8a4u); break;
    case 39: acc = heavy_round(acc, 0x3899ebb3u); break;
    case 40: acc = heavy_round(acc, 0x74a43d76u); break;
    case 41: acc = heavy_round(acc, 0x99c9165du); break;
    case 42: acc = heavy_round(acc, 0x59a32418u); break;
    case 43: acc = heavy_round(acc, 0x50715897u); break;
    case 44: acc = heavy_round(acc, 0x223b9d0au); break;
    case 45: acc = heavy_round(acc, 0x1001e8e1u); break;
    case 46: acc = heavy_round(acc, 0x8d4a6cccu); break;
    case 47: acc = heavy_round(acc, 0xb07bc1bbu); break;
    case 48: acc = heavy_round(acc, 0x6d2b4bdeu); break;
    case 49: acc = heavy_round(acc, 0x708a41a5u); break;
    case 50: acc = heavy_round(acc, 0x72b906c0u); break;
    case 51: acc = heavy_round(acc, 0x7144cb1fu); break;
    case 52: acc = heavy_round(acc, 0x3be29df2u); break;
    case 53: acc = heavy_round(acc, 0xfe8164a9u); break;
    case 54: acc = heavy_round(acc, 0x8b9d65f4u); break;
    case 55: acc = heavy_round(acc, 0xfee058c3u); break;
    case 56: acc = heavy_round(acc, 0x3c3c2746u); break;
    case 57: acc = heavy_round(acc, 0x18f8d5edu); break;
    case 58: acc = heavy_round(acc, 0x8a733e68u); break;
    case 59: acc = heavy_round(acc, 0x474e8ea7u); break;
    case 60: acc = heavy_round(acc, 0x1691bbdau); break;
    case 61: acc = heavy_round(acc, 0xcaf85971u); break;
    case 62: acc = heavy_round(acc, 0x3ab7841cu); break;
    case 63: acc = heavy_round(acc, 0x3d1fd0cbu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

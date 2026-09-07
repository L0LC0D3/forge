#include "heavy.h"
#include "mods.h"

int mod_020(int x)
{
    static const uint32_t local[256] = {
        0xb6a29d5fu, 0xababcb32u, 0x3f0030e9u, 0x49af4534u, 0x91fc2f03u, 0xb8438886u, 0xd558462du, 0x184571a8u, 0x3ca6a8e7u, 0x36c0911au, 0xe990adb1u, 0xb4454b5cu, 0x5bf66f0bu, 0xf043f8eeu, 0xd44f6b75u, 0x27b50650u,
        0xfef4256fu, 0x1d961402u, 0x7d38c379u, 0x4d041684u, 0xf980b013u, 0x5ffa7656u, 0x75b339bdu, 0x42ff2ff8u, 0xffb932f7u, 0xfd43f3eau, 0xfdeb9241u, 0x460446acu, 0x659b121bu, 0xf328a0beu, 0x7818d105u, 0xa2768ea0u,
        0xa6e7f17fu, 0xb5d5d0d2u, 0x0e003a09u, 0xb4727bd4u, 0x1b49b523u, 0xadc41826u, 0x8cb9514du, 0x28c1c248u, 0x7ab68107u, 0xc8cb4abau, 0xbab1dad1u, 0xf30f55fcu, 0x1614b92bu, 0xb2767c8eu, 0xabf1da95u, 0xad5b6af0u,
        0xe81f018fu, 0x879801a2u, 0xd89f9499u, 0x54af7524u, 0xe2883e33u, 0x191d6df6u, 0xf9c38cddu, 0x97122898u, 0x1b5f9317u, 0x1223958au, 0xf04c8761u, 0x26bb794cu, 0xbeb4643bu, 0x954a8c5eu, 0x3a538825u, 0xc6889b40u,
        0xe87a559fu, 0x2549a672u, 0xba9fd329u, 0x03b00274u, 0xcaad4b43u, 0xecc377c6u, 0xd66aec6du, 0xd0b562e8u, 0xc3b56927u, 0xb959d45au, 0x2d6497f1u, 0x759db09cu, 0x490b134bu, 0x3e01d02eu, 0x6ff6d9b5u, 0x89631f90u,
        0xca1aedafu, 0x7097bf42u, 0x17c9f5b9u, 0xe8a923c4u, 0xef69dc53u, 0x16b33596u, 0x06886ffdu, 0xddb07138u, 0xd9f90337u, 0xd5bb072au, 0x4ee30c81u, 0xed8afbecu, 0x46e9c65bu, 0x5a3947feu, 0xabd4cf45u, 0xfe8ff7e0u,
        0xbb61c9bfu, 0x6a6f4c12u, 0x6a26fc49u, 0xcc0fd914u, 0x1caef163u, 0xf829a766u, 0xc835178du, 0xdb485388u, 0x58ab6147u, 0x85d42dfau, 0x0ff0e511u, 0x65985b3cu, 0x02617d6bu, 0x72cdf3ceu, 0xef2668d5u, 0xebf42430u,
        0x06efe9cfu, 0x02fd4ce2u, 0xd1ffe6d9u, 0x67992264u, 0xdead8a73u, 0x35a3cd36u, 0x43c9e31du, 0x4c0209d8u, 0xde8d8357u, 0xbf7248cau, 0x99f721a1u, 0xce1ace8cu, 0x8dc3387bu, 0xbbdcd39eu, 0x6d64a665u, 0x24b4a480u,
        0x23a64ddfu, 0xe9aec1b2u, 0xa5ddb569u, 0xb639ffb4u, 0x91d6a783u, 0x86dea706u, 0x1bdfd2adu, 0x67a29428u, 0xbea06967u, 0x1fa2579au, 0x149ec231u, 0x80a755dcu, 0xd39ff78bu, 0xe4c2e76eu, 0x1c4887f5u, 0xd93678d0u,
        0xc4a5f5efu, 0x5d30aa82u, 0x028967f9u, 0x44277104u, 0x72db4893u, 0x86d734d6u, 0xfd4fe63du, 0x6b2ef278u, 0x10251377u, 0xbab15a6au, 0x35d0c6c1u, 0x9012f12cu, 0xa6c8ba9bu, 0xe81d2f3eu, 0x43cb0d85u, 0xe71ea120u,
        0xe94fe1ffu, 0xfb700752u, 0x5b0bfe89u, 0x7ed67654u, 0xaeac6da3u, 0x83ca76a6u, 0x2f331dcdu, 0xe8ec24c8u, 0xbe9c8187u, 0xec2c513au, 0xd1b62f51u, 0x1872a07cu, 0xd24e81abu, 0xdbc8ab0eu, 0x0e253715u, 0x29521d70u,
        0xed45120fu, 0x9199d822u, 0x08ae7919u, 0x04fc0fa4u, 0x727b16b3u, 0x4f356c76u, 0x22e2795du, 0x185f2b18u, 0x99c7b397u, 0x26e03c0au, 0x6ab7fbe1u, 0x8f1b63ccu, 0x29824cbbu, 0xc0e25adeu, 0x17d004a5u, 0xc7f5edc0u,
        0x9866861fu, 0xec1b1cf2u, 0xdaf9d7a9u, 0xf68d3cf4u, 0xfbb843c3u, 0x0dd51646u, 0x03f6f8edu, 0x264d0568u, 0x65a7a9a7u, 0xc4da1adau, 0xc17f2c71u, 0x12a23b1cu, 0x97f51bcbu, 0x53c73eaeu, 0xff847635u, 0x886f1210u,
        0x2ed53e2fu, 0xa6a0d5c2u, 0xa7b71a39u, 0x44befe44u, 0xa814f4d3u, 0x07a67416u, 0x48499c7du, 0x84bab3b8u, 0xea7d63b7u, 0xd766edaau, 0x64f4c101u, 0xbadc266cu, 0x3177eedbu, 0xdc14567eu, 0xf63b8bc5u, 0x1d628a60u,
        0x80f23a3fu, 0xfc180292u, 0xdaef40c9u, 0x02065394u, 0x058229e3u, 0x77e685e6u, 0x3ff3640du, 0x3aed3608u, 0x04c9e1c7u, 0xf713b47au, 0x4241b991u, 0xe8de25bcu, 0x421bc5ebu, 0xfca6a24eu, 0x4f2e4555u, 0x76b556b0u,
        0xfb5e7a4fu, 0x96ada362u, 0x06eb4b59u, 0xb2183ce4u, 0xe230e2f3u, 0x5d124bb6u, 0xa54d4f9du, 0x35698c58u, 0xb54e23d7u, 0x13ad6f4au, 0x34cf1621u, 0x96fd390cu, 0x5e31a0fbu, 0x839b221eu, 0x0fd5a2e5u, 0x118c7700u,
    };
    uint32_t acc = 0x8c31d200u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 20) & 255]);
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
    case 0: acc = heavy_round(acc, 0x4b58342fu); break;
    case 1: acc = heavy_round(acc, 0x4d4b53c2u); break;
    case 2: acc = heavy_round(acc, 0x5a938039u); break;
    case 3: acc = heavy_round(acc, 0x20942c44u); break;
    case 4: acc = heavy_round(acc, 0x403c4ad3u); break;
    case 5: acc = heavy_round(acc, 0xd3e9d216u); break;
    case 6: acc = heavy_round(acc, 0xad29627du); break;
    case 7: acc = heavy_round(acc, 0x22fbc1b8u); break;
    case 8: acc = heavy_round(acc, 0x3d5f19b7u); break;
    case 9: acc = heavy_round(acc, 0xc1612baau); break;
    case 10: acc = heavy_round(acc, 0x095de701u); break;
    case 11: acc = heavy_round(acc, 0xaf57146cu); break;
    case 12: acc = heavy_round(acc, 0xd48a04dbu); break;
    case 13: acc = heavy_round(acc, 0x7ec3747eu); break;
    case 14: acc = heavy_round(acc, 0xed1411c5u); break;
    case 15: acc = heavy_round(acc, 0x01c55860u); break;
    case 16: acc = heavy_round(acc, 0x960ab03fu); break;
    case 17: acc = heavy_round(acc, 0x535a0092u); break;
    case 18: acc = heavy_round(acc, 0x627d26c9u); break;
    case 19: acc = heavy_round(acc, 0xe3df0194u); break;
    case 20: acc = heavy_round(acc, 0xd0d6ffe3u); break;
    case 21: acc = heavy_round(acc, 0x7e7963e6u); break;
    case 22: acc = heavy_round(acc, 0xc7dcaa0du); break;
    case 23: acc = heavy_round(acc, 0xe9a9c408u); break;
    case 24: acc = heavy_round(acc, 0xe2f117c7u); break;
    case 25: acc = heavy_round(acc, 0x2495727au); break;
    case 26: acc = heavy_round(acc, 0xd18c5f91u); break;
    case 27: acc = heavy_round(acc, 0x23cc93bcu); break;
    case 28: acc = heavy_round(acc, 0xfe0b5bebu); break;
    case 29: acc = heavy_round(acc, 0xa395404eu); break;
    case 30: acc = heavy_round(acc, 0x4a404b55u); break;
    case 31: acc = heavy_round(acc, 0xfb03a4b0u); break;
    case 32: acc = heavy_round(acc, 0x846c704fu); break;
    case 33: acc = heavy_round(acc, 0x22672162u); break;
    case 34: acc = heavy_round(acc, 0x558ab159u); break;
    case 35: acc = heavy_round(acc, 0x28d46ae4u); break;
    case 36: acc = heavy_round(acc, 0x621338f3u); break;
    case 37: acc = heavy_round(acc, 0x6fd4a9b6u); break;
    case 38: acc = heavy_round(acc, 0x38a0159du); break;
    case 39: acc = heavy_round(acc, 0x01819a58u); break;
    case 40: acc = heavy_round(acc, 0x061ad9d7u); break;
    case 41: acc = heavy_round(acc, 0x8496ad4au); break;
    case 42: acc = heavy_round(acc, 0xed5b3c21u); break;
    case 43: acc = heavy_round(acc, 0x833f270cu); break;
    case 44: acc = heavy_round(acc, 0xe05eb6fbu); break;
    case 45: acc = heavy_round(acc, 0x3ca9401eu); break;
    case 46: acc = heavy_round(acc, 0x038128e5u); break;
    case 47: acc = heavy_round(acc, 0xdea64500u); break;
    case 48: acc = heavy_round(acc, 0x875e745fu); break;
    case 49: acc = heavy_round(acc, 0x1bdfb632u); break;
    case 50: acc = heavy_round(acc, 0x94451fe9u); break;
    case 51: acc = heavy_round(acc, 0x6c696834u); break;
    case 52: acc = heavy_round(acc, 0xea61f603u); break;
    case 53: acc = heavy_round(acc, 0x31b8a386u); break;
    case 54: acc = heavy_round(acc, 0x4c0ca52du); break;
    case 55: acc = heavy_round(acc, 0x444844a8u); break;
    case 56: acc = heavy_round(acc, 0x33dd5fe7u); break;
    case 57: acc = heavy_round(acc, 0x7071dc1au); break;
    case 58: acc = heavy_round(acc, 0xce737cb1u); break;
    case 59: acc = heavy_round(acc, 0xe943ce5cu); break;
    case 60: acc = heavy_round(acc, 0x4015160bu); break;
    case 61: acc = heavy_round(acc, 0x0b5c73eeu); break;
    case 62: acc = heavy_round(acc, 0xf88faa75u); break;
    case 63: acc = heavy_round(acc, 0xbf123950u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

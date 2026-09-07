#include "heavy.h"
#include "mods.h"

int mod_010(int x)
{
    static const uint32_t local[256] = {
        0x8c5c89e1u, 0xb30a99ccu, 0x922c0abbu, 0x413500deu, 0xc02672a5u, 0x822d83c0u, 0xd8fd241fu, 0xa4b522f2u, 0x2f3025a9u, 0x7e6332f4u, 0x2799c1c3u, 0x6e7c7c46u, 0x951b26edu, 0x6d775b68u, 0x471207a7u, 0xc6b4e0dau,
        0x5a7f3a71u, 0x3b36f11cu, 0xae0659cbu, 0x5f5b64aeu, 0x532e6435u, 0xbae42810u, 0x8b8b5c2fu, 0xd9d45bc2u, 0xdeb8e839u, 0xe5ea7444u, 0xae4df2d3u, 0xdbbf5a16u, 0x6f314a7du, 0xcbd289b8u, 0xebf741b7u, 0x270b33aau,
        0xba304f01u, 0xa7765c6cu, 0xecd0acdbu, 0x4949fc7eu, 0x1818f9c5u, 0xcd752060u, 0x7fa7d83fu, 0xb6450892u, 0xd59c8ec9u, 0x67e74994u, 0xd9f2a7e3u, 0x61d0ebe6u, 0x7b7e920du, 0x33528c08u, 0x68333fc7u, 0x2ce17a7au,
        0x5098c791u, 0xb0dddbbcu, 0x129c03ebu, 0xb9ddc84eu, 0x9a1f3355u, 0x81c56cb0u, 0x19f3984fu, 0x7c342962u, 0x5e241959u, 0xe00eb2e4u, 0xf0b8e0f3u, 0x172e31b6u, 0xac5bfd9du, 0x687c6258u, 0xb48701d7u, 0x6004b54au,
        0xb121a421u, 0xa9c26f0cu, 0x2bb95efbu, 0x9733c81eu, 0x16ba10e5u, 0x2cfa0d00u, 0x6b4f9c5fu, 0xad0ebe32u, 0x78d887e9u, 0xeb55b034u, 0x89119e03u, 0xa5942b86u, 0xee628d2du, 0x65150ca8u, 0xfdf387e7u, 0x6f81e41au,
        0xed73e4b1u, 0xcdb9165cu, 0x9cb9be0bu, 0xc2a8fbeeu, 0x0da29275u, 0x01780150u, 0x40dce46fu, 0xd981c702u, 0x6c82da79u, 0x37f14184u, 0x99addf13u, 0x19ffd956u, 0xb86b40bdu, 0xa8218af8u, 0xb5b9d1f7u, 0x01a606eau,
        0x25788941u, 0x9196d1acu, 0x326e211bu, 0xe8da63beu, 0xd0d1b805u, 0x5ee449a0u, 0x33fc707fu, 0x717a43d2u, 0x562c1109u, 0xd55666d4u, 0x897ea423u, 0xb4ae3b26u, 0x9b8f184du, 0x85e6dd48u, 0xa15ae007u, 0x83fe1dbau,
        0x175891d1u, 0xf370a0fcu, 0x31e7882bu, 0x51a4ff8eu, 0x14808195u, 0x2223e5f0u, 0xba4f408fu, 0x942534a2u, 0xb91d2b99u, 0x843a2024u, 0x3fb4ed33u, 0xb91c50f6u, 0xd32713ddu, 0x77ea0398u, 0xea97b217u, 0xfb57288au,
        0xaf7cfe61u, 0xca9b844cu, 0x6876f33bu, 0xb025cf5eu, 0x7f27ef25u, 0xf55bd640u, 0x35b6549fu, 0xdfef9972u, 0x0edf2a29u, 0x06916d74u, 0x33c1ba43u, 0x3e071ac6u, 0xd4cc336du, 0x6ceffde8u, 0x2f714827u, 0xd3be275au,
        0x988ecef1u, 0x17ac7b9cu, 0x3bad624bu, 0xf2b9d32eu, 0x398100b5u, 0x9ff11a90u, 0x0452acafu, 0x42867242u, 0x573b0cb9u, 0x6f914ec4u, 0x7d560b53u, 0xfd6b9896u, 0xe05776fdu, 0x18fdcc38u, 0x9228a237u, 0xb0801a2au,
        0xcb770381u, 0x547886ecu, 0xb95bd55bu, 0x12fe0afeu, 0x7e84b645u, 0x5688b2e0u, 0x908548bfu, 0xc8d6bf12u, 0xa839d349u, 0x73aec414u, 0xe462e063u, 0x2486ca66u, 0x8fe1de8du, 0x45586e88u, 0xc93ec047u, 0x3c2a00fau,
        0x1f5e9c11u, 0xc414a63cu, 0xa7934c6bu, 0xe5cf76ceu, 0x2b6c0fd5u, 0x0b079f30u, 0x60ef28cfu, 0x6f0d7fe2u, 0xbe247dd9u, 0xb89ecd64u, 0xf1193973u, 0x23d5b036u, 0x67c46a1du, 0x2084e4d8u, 0x2f74a257u, 0xf888dbcau,
        0xd9ae98a1u, 0xc2d5d98cu, 0x94a4c77bu, 0xeb4b169eu, 0x4fb00d65u, 0xbc92df80u, 0x28714cdfu, 0xf097b4b2u, 0x8b840c69u, 0x25566ab4u, 0xfbea1683u, 0x7f154a06u, 0x669819adu, 0x8e482f28u, 0xd3cb4867u, 0x0ea9aa9au,
        0x3e0ff931u, 0x165120dcu, 0xe721468bu, 0x1ecdea6eu, 0xbd09aef5u, 0xc78f73d0u, 0xd62cb4efu, 0x98225d82u, 0xc9217ef9u, 0x320a9c04u, 0x3d867793u, 0x9d4297d6u, 0x9535ed3du, 0x77a74d78u, 0x8983b277u, 0x1ed96d6au,
        0x1e6bbdc1u, 0x3d5b7c2cu, 0xedd9c99bu, 0xc6f4f23eu, 0x9771f485u, 0x35a25c20u, 0xa58260ffu, 0x0f9a7a52u, 0x8605d589u, 0x38306154u, 0xdedf5ca3u, 0x989a99a6u, 0x96b6e4cdu, 0x1ae73fc8u, 0xf81ee087u, 0x10a5243au,
        0x6aeae651u, 0xc009eb7cu, 0xefdf50abu, 0x459d2e0eu, 0xe521de15u, 0x0db09870u, 0x2e13510fu, 0x302d0b22u, 0xb77a1019u, 0xc27cbaa4u, 0x0925c5b3u, 0x0e9a4f76u, 0x3874005du, 0x5b8d0618u, 0xab5dd297u, 0xe2d9cf0au,
    };
    uint32_t acc = 0xdb51820au ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 10) & 255]);
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
    case 0: acc = heavy_round(acc, 0x58f702c9u); break;
    case 1: acc = heavy_round(acc, 0x71b72d94u); break;
    case 2: acc = heavy_round(acc, 0x72593be3u); break;
    case 3: acc = heavy_round(acc, 0x71fe6fe6u); break;
    case 4: acc = heavy_round(acc, 0x5466460du); break;
    case 5: acc = heavy_round(acc, 0x1cceb008u); break;
    case 6: acc = heavy_round(acc, 0x3dd913c7u); break;
    case 7: acc = heavy_round(acc, 0xccc53e7au); break;
    case 8: acc = heavy_round(acc, 0x5341bb91u); break;
    case 9: acc = heavy_round(acc, 0xf8aa3fbcu); break;
    case 10: acc = heavy_round(acc, 0xebd517ebu); break;
    case 11: acc = heavy_round(acc, 0x73bbcc4eu); break;
    case 12: acc = heavy_round(acc, 0xe3fd6755u); break;
    case 13: acc = heavy_round(acc, 0xdec610b0u); break;
    case 14: acc = heavy_round(acc, 0x1853ec4fu); break;
    case 15: acc = heavy_round(acc, 0xfc906d62u); break;
    case 16: acc = heavy_round(acc, 0x49eb8d59u); break;
    case 17: acc = heavy_round(acc, 0xa56796e4u); break;
    case 18: acc = heavy_round(acc, 0xa51474f3u); break;
    case 19: acc = heavy_round(acc, 0x30ccb5b6u); break;
    case 20: acc = heavy_round(acc, 0x0600b19du); break;
    case 21: acc = heavy_round(acc, 0x29918658u); break;
    case 22: acc = heavy_round(acc, 0x72f1d5d7u); break;
    case 23: acc = heavy_round(acc, 0x4fe9794au); break;
    case 24: acc = heavy_round(acc, 0x29d79821u); break;
    case 25: acc = heavy_round(acc, 0x1e37d30cu); break;
    case 26: acc = heavy_round(acc, 0x9f8772fbu); break;
    case 27: acc = heavy_round(acc, 0x88a2cc1eu); break;
    case 28: acc = heavy_round(acc, 0xf8f544e5u); break;
    case 29: acc = heavy_round(acc, 0x54b3b100u); break;
    case 30: acc = heavy_round(acc, 0x6b14f05fu); break;
    case 31: acc = heavy_round(acc, 0x7d8c0232u); break;
    case 32: acc = heavy_round(acc, 0x9c4cfbe9u); break;
    case 33: acc = heavy_round(acc, 0x72779434u); break;
    case 34: acc = heavy_round(acc, 0x2aa23203u); break;
    case 35: acc = heavy_round(acc, 0xe8e3af86u); break;
    case 36: acc = heavy_round(acc, 0xec04412du); break;
    case 37: acc = heavy_round(acc, 0x480330a8u); break;
    case 38: acc = heavy_round(acc, 0xea635be7u); break;
    case 39: acc = heavy_round(acc, 0xb3a7a81au); break;
    case 40: acc = heavy_round(acc, 0x9376d8b1u); break;
    case 41: acc = heavy_round(acc, 0x3d177a5cu); break;
    case 42: acc = heavy_round(acc, 0xa45cd20bu); break;
    case 43: acc = heavy_round(acc, 0x13e8ffeeu); break;
    case 44: acc = heavy_round(acc, 0x137ac675u); break;
    case 45: acc = heavy_round(acc, 0x862aa550u); break;
    case 46: acc = heavy_round(acc, 0x2f47386fu); break;
    case 47: acc = heavy_round(acc, 0x86600b02u); break;
    case 48: acc = heavy_round(acc, 0x66e44e79u); break;
    case 49: acc = heavy_round(acc, 0x171c2584u); break;
    case 50: acc = heavy_round(acc, 0x49b37313u); break;
    case 51: acc = heavy_round(acc, 0xb7405d56u); break;
    case 52: acc = heavy_round(acc, 0x4d49f4bdu); break;
    case 53: acc = heavy_round(acc, 0x8728aef8u); break;
    case 54: acc = heavy_round(acc, 0x656ea5f7u); break;
    case 55: acc = heavy_round(acc, 0xae4ccaeau); break;
    case 56: acc = heavy_round(acc, 0x80087d41u); break;
    case 57: acc = heavy_round(acc, 0x5a1e35acu); break;
    case 58: acc = heavy_round(acc, 0x1726351bu); break;
    case 59: acc = heavy_round(acc, 0xd22b67beu); break;
    case 60: acc = heavy_round(acc, 0x5586ec05u); break;
    case 61: acc = heavy_round(acc, 0x62cfeda0u); break;
    case 62: acc = heavy_round(acc, 0x4e4bc47fu); break;
    case 63: acc = heavy_round(acc, 0x96f987d2u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_114(int x)
{
    static const uint32_t local[256] = {
        0x1505cba9u, 0x8060a0f4u, 0xf94c57c3u, 0xe2521a46u, 0x01e82cedu, 0x3a44a968u, 0x1892fda7u, 0xd2455edau, 0xd109a071u, 0x5ae21f1cu, 0xfc0bafcbu, 0xdbe4c2aeu, 0x8f9c2a35u, 0xdf5b3610u, 0x332b122fu, 0xc57499c2u,
        0xbc900e39u, 0x98fb6244u, 0xc2fe08d3u, 0x37747816u, 0x2f57d07du, 0xfd2b57b8u, 0xed8db7b7u, 0xb4b331aau, 0xa8ec3501u, 0x1aa50a6cu, 0x5d8382dbu, 0x29a2da7eu, 0x93103fc5u, 0x67e7ae60u, 0xda0d0e3fu, 0xe6ecc692u,
        0xb1d534c9u, 0x5eebb794u, 0xe7003de3u, 0x1b4589e6u, 0xcb5e980du, 0x1a16da08u, 0xf53f35c7u, 0x2080f87au, 0x89e62d91u, 0x667009bcu, 0x075c59ebu, 0x2fe6264eu, 0x1bfff955u, 0xff137ab0u, 0xee7e4e4fu, 0x51c36762u,
        0x571e3f59u, 0xe5e6a0e4u, 0x8383f6f3u, 0x9c424fb6u, 0x6055839du, 0x0d8c3058u, 0x806877d7u, 0x157bb34au, 0x1f608a21u, 0xc8981d0cu, 0xdde734fbu, 0xcccba61eu, 0xffe456e5u, 0xb2039b00u, 0xd95fd25fu, 0xff657c32u,
        0xc4f42de9u, 0x02e11e34u, 0x06fa3403u, 0x5c27c986u, 0x72d5932du, 0x89505aa8u, 0x140a7de7u, 0xbab0621au, 0x93044ab1u, 0xb4b2445cu, 0x1db5140bu, 0xd9b059eeu, 0x56765875u, 0x6b1d0f50u, 0xbfd29a6fu, 0xf8800502u,
        0x5a200079u, 0x9c102f84u, 0x4013f513u, 0x5ff2f756u, 0x11b7c6bdu, 0xc46858f8u, 0x796647f7u, 0x2e6c04eau, 0x1cba6f41u, 0xd7937facu, 0x6b96f71bu, 0xfb3141beu, 0x09aefe05u, 0x4204d7a0u, 0x9337a67fu, 0x250001d2u,
        0x4baab709u, 0xf8e8d4d4u, 0x6dc23a23u, 0xdfe0d926u, 0x66151e4du, 0xcb192b48u, 0xcdfcd607u, 0x563b9bbau, 0x92abf7d1u, 0x6750cefcu, 0xe49dde2bu, 0x712b5d8eu, 0x65c74795u, 0xcb9ff3f0u, 0x212ff68fu, 0x1c1272a2u,
        0x34dd5199u, 0x12200e24u, 0x4f360333u, 0x176e6ef6u, 0x434699ddu, 0xcee7d198u, 0x938f2817u, 0xaeec268au, 0xf941e461u, 0x733f324cu, 0x2e1ac93bu, 0xe6bbad5eu, 0xa9383525u, 0x6a136440u, 0x239c8a9fu, 0xf4245772u,
        0xa740d029u, 0xe1aadb74u, 0x33e05043u, 0x1558b8c6u, 0xb6e5396du, 0x76994be8u, 0xc01e3e27u, 0x1c8aa55au, 0x132534f1u, 0x33f3a99cu, 0x859eb84bu, 0x423f312eu, 0x94bac6b5u, 0x9cc42890u, 0x509e62afu, 0x12e2b042u,
        0xba9e32b9u, 0xb2be3cc4u, 0x0b722153u, 0x8b9cb696u, 0x98c9fcfdu, 0x2e329a38u, 0xcdeb1837u, 0xba64182au, 0xf13ee981u, 0x5b4334ecu, 0xd0faab5bu, 0x7552e8feu, 0xfb47fc45u, 0x505740e0u, 0x6a967ebfu, 0xfd3a7d12u,
        0x9cfe7949u, 0x71cf3214u, 0x75dc7663u, 0x9f776866u, 0x1b0de48du, 0x76f8bc88u, 0xcb76b647u, 0xab057efau, 0x82b80211u, 0x6442d43cu, 0xae3fa26bu, 0x4cd3d4ceu, 0x5218d5d5u, 0x2eb1ad30u, 0x5025decfu, 0x2758bde2u,
        0x22aaa3d9u, 0xfc92bb64u, 0xd3504f73u, 0xb965ce36u, 0x5a09f01du, 0x3770b2d8u, 0x6b821857u, 0xe83bd9cau, 0x24f97ea1u, 0xe347878cu, 0x83be9d7bu, 0x40def49eu, 0x40a65365u, 0xeef86d80u, 0x0c2d82dfu, 0xc4aa72b2u,
        0x562bb269u, 0x71fdd8b4u, 0x543eac83u, 0x5524e806u, 0xec571fadu, 0x0b5f7d28u, 0x150e3e67u, 0x1314289au, 0x33ac5f31u, 0xd5e64edcu, 0x90089c8bu, 0x44d1486eu, 0x30a974f5u, 0xa59081d0u, 0xe5ce6aefu, 0x97dc9b82u,
        0x084aa4f9u, 0x82458a04u, 0x09588d93u, 0xd1b1b5d6u, 0x72ce733du, 0x93ca1b78u, 0xf35c2877u, 0x43db6b6au, 0x98b9a3c1u, 0xf2f42a2cu, 0xf9ee9f9bu, 0x9747d03eu, 0xde1b3a85u, 0x141eea20u, 0x706996ffu, 0xc2dc3852u,
        0x60107b89u, 0xbedecf54u, 0xf38ef2a3u, 0x414937a6u, 0x2888eacdu, 0xc6f58dc8u, 0x05ecd687u, 0xda1ea23au, 0x5c4a4c51u, 0xfa86197cu, 0xe081a6abu, 0x921f8c0eu, 0xe734a415u, 0xf988a670u, 0x9ba0070fu, 0x96d64922u,
        0x6ac63619u, 0xea7ea8a4u, 0x1412dbb3u, 0x39686d76u, 0x72df865du, 0x4066d418u, 0x30814897u, 0x4caacd0au, 0x34c758e1u, 0x05f11cccu, 0x6b12b1bbu, 0x7a757bdeu, 0x5c6eb1a5u, 0x61f2b6c0u, 0xc352bb1fu, 0x6437cdf2u,
    };
    uint32_t acc = 0x332de0f2u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 114) & 255]);
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
    case 0: acc = heavy_round(acc, 0x2652ae91u); break;
    case 1: acc = heavy_round(acc, 0x2c5896bcu); break;
    case 2: acc = heavy_round(acc, 0x815982ebu); break;
    case 3: acc = heavy_round(acc, 0x41173b4eu); break;
    case 4: acc = heavy_round(acc, 0x96dc0a55u); break;
    case 5: acc = heavy_round(acc, 0x940657b0u); break;
    case 6: acc = heavy_round(acc, 0xd7e1874fu); break;
    case 7: acc = heavy_round(acc, 0x45834c62u); break;
    case 8: acc = heavy_round(acc, 0x8a1ae059u); break;
    case 9: acc = heavy_round(acc, 0xdde0cde4u); break;
    case 10: acc = heavy_round(acc, 0x2e263ff3u); break;
    case 11: acc = heavy_round(acc, 0x109604b6u); break;
    case 12: acc = heavy_round(acc, 0x4fb3b49du); break;
    case 13: acc = heavy_round(acc, 0x85daad58u); break;
    case 14: acc = heavy_round(acc, 0x1732d0d7u); break;
    case 15: acc = heavy_round(acc, 0x0e38384au); break;
    case 16: acc = heavy_round(acc, 0xdaf14b21u); break;
    case 17: acc = heavy_round(acc, 0xd4d7ea0cu); break;
    case 18: acc = heavy_round(acc, 0xedd29dfbu); break;
    case 19: acc = heavy_round(acc, 0xa895fb1eu); break;
    case 20: acc = heavy_round(acc, 0x1408a7e5u); break;
    case 21: acc = heavy_round(acc, 0x1921b800u); break;
    case 22: acc = heavy_round(acc, 0xea754b5fu); break;
    case 23: acc = heavy_round(acc, 0x3cb2a132u); break;
    case 24: acc = heavy_round(acc, 0x3b9d0ee9u); break;
    case 25: acc = heavy_round(acc, 0x4c1a8b34u); break;
    case 26: acc = heavy_round(acc, 0x4552bd03u); break;
    case 27: acc = heavy_round(acc, 0x2e3cbe86u); break;
    case 28: acc = heavy_round(acc, 0x6484042du); break;
    case 29: acc = heavy_round(acc, 0x593217a8u); break;
    case 30: acc = heavy_round(acc, 0x08cf16e7u); break;
    case 31: acc = heavy_round(acc, 0x6ea2271au); break;
    case 32: acc = heavy_round(acc, 0x47c94bb1u); break;
    case 33: acc = heavy_round(acc, 0x7a19515cu); break;
    case 34: acc = heavy_round(acc, 0x781ebd0bu); break;
    case 35: acc = heavy_round(acc, 0x0b63eeeeu); break;
    case 36: acc = heavy_round(acc, 0xf6f2e975u); break;
    case 37: acc = heavy_round(acc, 0x5c366c50u); break;
    case 38: acc = heavy_round(acc, 0x2e2a536fu); break;
    case 39: acc = heavy_round(acc, 0x97aa6a02u); break;
    case 40: acc = heavy_round(acc, 0x30852179u); break;
    case 41: acc = heavy_round(acc, 0x0358dc84u); break;
    case 42: acc = heavy_round(acc, 0x58b2be13u); break;
    case 43: acc = heavy_round(acc, 0x85192c56u); break;
    case 44: acc = heavy_round(acc, 0x5ac677bdu); break;
    case 45: acc = heavy_round(acc, 0x9dad55f8u); break;
    case 46: acc = heavy_round(acc, 0xb3b520f7u); break;
    case 47: acc = heavy_round(acc, 0xbfe309eau); break;
    case 48: acc = heavy_round(acc, 0x68c3b041u); break;
    case 49: acc = heavy_round(acc, 0xbcf1ccacu); break;
    case 50: acc = heavy_round(acc, 0x290ee01bu); break;
    case 51: acc = heavy_round(acc, 0x221e16beu); break;
    case 52: acc = heavy_round(acc, 0x2d93cf05u); break;
    case 53: acc = heavy_round(acc, 0xa8e974a0u); break;
    case 54: acc = heavy_round(acc, 0x38619f7fu); break;
    case 55: acc = heavy_round(acc, 0x9257a6d2u); break;
    case 56: acc = heavy_round(acc, 0xe1dc1809u); break;
    case 57: acc = heavy_round(acc, 0xbf10c1d4u); break;
    case 58: acc = heavy_round(acc, 0x8b374323u); break;
    case 59: acc = heavy_round(acc, 0xe1684e26u); break;
    case 60: acc = heavy_round(acc, 0xdf940f4du); break;
    case 61: acc = heavy_round(acc, 0x13916848u); break;
    case 62: acc = heavy_round(acc, 0x5965ef07u); break;
    case 63: acc = heavy_round(acc, 0xbb87e0bau); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

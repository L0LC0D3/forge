#include "heavy.h"
#include "mods.h"

int mod_067(int x)
{
    static const uint32_t local[256] = {
        0x3f0f3daau, 0x8860d101u, 0x25b8f66cu, 0xe98e7edbu, 0x4299a67eu, 0x18e09bc5u, 0x34245a60u, 0x31a9ca3fu, 0x28ca5292u, 0xfbdd50c9u, 0x187d2394u, 0xd06ab9e3u, 0x7f15d5e6u, 0x473a740du, 0x79e90608u, 0xdc7371c7u,
        0x8a10047au, 0x10f1c991u, 0x1e2ef5bcu, 0x7a1655ebu, 0xb9bff24eu, 0xcf575555u, 0xe52b26b0u, 0xd83a0a4fu, 0x5933f362u, 0x3b9d5b59u, 0xe1830ce4u, 0x297d72f3u, 0x8d559bb6u, 0xba985f9du, 0xc2995c58u, 0x3d9bb3d7u,
        0xf6fdbf4au, 0x8fc32621u, 0x03c2090cu, 0x9f1030fbu, 0x8c48721eu, 0x5e82b2e5u, 0x94b64700u, 0x58fa8e5fu, 0x7d290832u, 0xbdaa49e9u, 0xef488a34u, 0xc942b003u, 0x373e1586u, 0xe13f6f2du, 0xce5886a8u, 0x22fcb9e7u,
        0xdce56e1au, 0x9e7de6b1u, 0xfa07305cu, 0x850d100bu, 0xc39025eeu, 0x4e1bb475u, 0xdd2abb50u, 0xc90c566fu, 0xcd569102u, 0x50cd1c79u, 0xd8029b84u, 0x6e6b7113u, 0xb1cc4356u, 0x3a08a2bdu, 0x842b84f8u, 0x45d783f7u,
        0x8a1410eau, 0xe50b0b41u, 0x5dd36bacu, 0xc0ddf31bu, 0x34340dbeu, 0xf81b5a05u, 0x862d83a0u, 0x09d0627fu, 0x61a98dd2u, 0x9a0ed309u, 0x932640d4u, 0x47e8b623u, 0x653d2526u, 0x5e0cfa4du, 0xa0575748u, 0xb3ad1207u,
        0x1416a7bau, 0xa99393d1u, 0x153bbafcu, 0x5f93da2bu, 0x4e11298eu, 0x18baa395u, 0xd4a39ff0u, 0xd8e7b28fu, 0x014efea2u, 0xa4b86d99u, 0xc9687a24u, 0x04eb7f33u, 0xbd0dbaf6u, 0x90a575ddu, 0x0460fd98u, 0xde3e6417u,
        0x27ba328au, 0x60808061u, 0xdf951e4cu, 0xf67fc53bu, 0xec44795eu, 0x5e729125u, 0xdab21040u, 0xe033469fu, 0xf2b3e372u, 0x7252ec29u, 0x24be4774u, 0xe4e4cc43u, 0xf7fb04c6u, 0x4f6b156du, 0x070d77e8u, 0xab8c7a27u,
        0xd90bb15au, 0x3c7ad0f1u, 0xa574959cu, 0xb332b44bu, 0x252afd2eu, 0xf9fc22b5u, 0xc7bdd490u, 0xc5d41eafu, 0xcb853c42u, 0x8aa74eb9u, 0xa05ca8c4u, 0xc7859d53u, 0xf8020296u, 0xe236d8fdu, 0xc461c638u, 0x85d85437u,
        0x7358242au, 0xbe6b8581u, 0xc8af20ecu, 0x6b7da75bu, 0x1a61b4feu, 0x2e505845u, 0x386bece0u, 0x3c2b3abfu, 0x40b00912u, 0x8bbe9549u, 0xd8b89e14u, 0x3cbef263u, 0x125fb466u, 0xeb21c08du, 0x6da2e888u, 0x6ba2f247u,
        0x492c8afau, 0x457b9e11u, 0x7459c03cu, 0xad719e6bu, 0xc8c5a0ceu, 0xe0a831d5u, 0x86a15930u, 0x11d99acfu, 0xf66149e2u, 0xb9e1bfd9u, 0x5b872764u, 0x94c1cb73u, 0xdf911a36u, 0xf684cc1du, 0x9955ded8u, 0xffad5457u,
        0x8455e5cau, 0x9f141aa1u, 0xecc9738cu, 0xcf5f997bu, 0xd873c09eu, 0x287caf65u, 0x19831980u, 0x41c03edfu, 0x5005feb2u, 0x8f99ce69u, 0xf7bd44b4u, 0xefff2883u, 0x0b533406u, 0x0af8fbadu, 0x933fa928u, 0x98f87a67u,
        0xf5e1349au, 0x96ddfb31u, 0xdf933adcu, 0xffd8988bu, 0x6cc9146eu, 0xdf86d0f5u, 0xb5762dd0u, 0x030026efu, 0x404b2782u, 0x4dafc0f9u, 0x0d8ff604u, 0x4f280993u, 0x24a301d6u, 0x39574f3du, 0xac654778u, 0x52c56477u,
        0xe61b776au, 0x86c23fc1u, 0xb38c162cu, 0x55ad9b9bu, 0xf4629c3eu, 0x31bf9685u, 0xcc1f9620u, 0xd8fa52ffu, 0x191dc452u, 0x8b2c9789u, 0xde743b54u, 0xa32d6ea3u, 0x6dbd83a6u, 0x2cb8c6cdu, 0x8b0bb9c8u, 0x1c951287u,
        0xe491ae3au, 0xe6e9e851u, 0xd8c9057cu, 0xdfefa2abu, 0xf91d580eu, 0x2d600015u, 0xcc645270u, 0xa34fc30fu, 0x5baad522u, 0xc5595219u, 0xdd1f14a4u, 0xdd4057b3u, 0xac1fb976u, 0xba76625du, 0x7ab80018u, 0xca288497u,
        0x9810d90au, 0xddbdf4e1u, 0x189f08ccu, 0xb5efadbbu, 0xf01647deu, 0x52e10da5u, 0x726962c0u, 0xade1771fu, 0x885f59f2u, 0xefbef0a9u, 0xfd8581f4u, 0xfed1c4c3u, 0xf886a346u, 0x722921edu, 0xbc2f1a68u, 0x2380baa7u,
        0x8ea5f7dau, 0xcfe76571u, 0xe5a3201cu, 0x073ebccbu, 0x09aa6baeu, 0x24fbbf35u, 0x1793c710u, 0xc0d06f2fu, 0xeee852c2u, 0x04267339u, 0x04dc8344u, 0x2992b5d3u, 0x8eef4116u, 0x2daa057du, 0xd57608b8u, 0xf4deb4b7u,
    };
    uint32_t acc = 0x8a82f3b7u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 67) & 255]);
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
    case 0: acc = heavy_round(acc, 0x73489c04u); break;
    case 1: acc = heavy_round(acc, 0x41ac7793u); break;
    case 2: acc = heavy_round(acc, 0xf73097d6u); break;
    case 3: acc = heavy_round(acc, 0xfa4bed3du); break;
    case 4: acc = heavy_round(acc, 0x5dc54d78u); break;
    case 5: acc = heavy_round(acc, 0x2d09b277u); break;
    case 6: acc = heavy_round(acc, 0xd0a76d6au); break;
    case 7: acc = heavy_round(acc, 0x39e1bdc1u); break;
    case 8: acc = heavy_round(acc, 0xa6597c2cu); break;
    case 9: acc = heavy_round(acc, 0x76bfc99bu); break;
    case 10: acc = heavy_round(acc, 0x5ea2f23eu); break;
    case 11: acc = heavy_round(acc, 0x9f47f485u); break;
    case 12: acc = heavy_round(acc, 0xdf805c20u); break;
    case 13: acc = heavy_round(acc, 0xb9c860ffu); break;
    case 14: acc = heavy_round(acc, 0xfb287a52u); break;
    case 15: acc = heavy_round(acc, 0x103bd589u); break;
    case 16: acc = heavy_round(acc, 0xc0ee6154u); break;
    case 17: acc = heavy_round(acc, 0x84855ca3u); break;
    case 18: acc = heavy_round(acc, 0x260899a6u); break;
    case 19: acc = heavy_round(acc, 0x994ce4cdu); break;
    case 20: acc = heavy_round(acc, 0x00853fc8u); break;
    case 21: acc = heavy_round(acc, 0x9524e087u); break;
    case 22: acc = heavy_round(acc, 0x6df3243au); break;
    case 23: acc = heavy_round(acc, 0x3be0e651u); break;
    case 24: acc = heavy_round(acc, 0x6087eb7cu); break;
    case 25: acc = heavy_round(acc, 0x4a4550abu); break;
    case 26: acc = heavy_round(acc, 0x80cb2e0eu); break;
    case 27: acc = heavy_round(acc, 0x3a77de15u); break;
    case 28: acc = heavy_round(acc, 0xa70e9870u); break;
    case 29: acc = heavy_round(acc, 0x6bd9510fu); break;
    case 30: acc = heavy_round(acc, 0x373b0b22u); break;
    case 31: acc = heavy_round(acc, 0xa7301019u); break;
    case 32: acc = heavy_round(acc, 0x72babaa4u); break;
    case 33: acc = heavy_round(acc, 0xb04bc5b3u); break;
    case 34: acc = heavy_round(acc, 0xaf884f76u); break;
    case 35: acc = heavy_round(acc, 0x388a005du); break;
    case 36: acc = heavy_round(acc, 0x20ab0618u); break;
    case 37: acc = heavy_round(acc, 0xa1e3d297u); break;
    case 38: acc = heavy_round(acc, 0xcba7cf0au); break;
    case 39: acc = heavy_round(acc, 0xa86c72e1u); break;
    case 40: acc = heavy_round(acc, 0x37af6eccu); break;
    case 41: acc = heavy_round(acc, 0xc868dbbbu); break;
    case 42: acc = heavy_round(acc, 0xa6919ddeu); break;
    case 43: acc = heavy_round(acc, 0x21686ba5u); break;
    case 44: acc = heavy_round(acc, 0x0cbd28c0u); break;
    case 45: acc = heavy_round(acc, 0x3b06851fu); break;
    case 46: acc = heavy_round(acc, 0xd4d50ff2u); break;
    case 47: acc = heavy_round(acc, 0x7e3d2ea9u); break;
    case 48: acc = heavy_round(acc, 0x94a2a7f4u); break;
    case 49: acc = heavy_round(acc, 0xfe70b2c3u); break;
    case 50: acc = heavy_round(acc, 0x846cb946u); break;
    case 51: acc = heavy_round(acc, 0x5f9c3fedu); break;
    case 52: acc = heavy_round(acc, 0x96fba068u); break;
    case 53: acc = heavy_round(acc, 0xd34788a7u); break;
    case 54: acc = heavy_round(acc, 0xcfd26ddau); break;
    case 55: acc = heavy_round(acc, 0x5c2d6371u); break;
    case 56: acc = heavy_round(acc, 0xb665061cu); break;
    case 57: acc = heavy_round(acc, 0x58bb6acbu); break;
    case 58: acc = heavy_round(acc, 0xd85341aeu); break;
    case 59: acc = heavy_round(acc, 0xced29d35u); break;
    case 60: acc = heavy_round(acc, 0x01f10d10u); break;
    case 61: acc = heavy_round(acc, 0xa770fd2fu); break;
    case 62: acc = heavy_round(acc, 0x7ba388c2u); break;
    case 63: acc = heavy_round(acc, 0x072c3139u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_082(int x)
{
    static const uint32_t local[256] = {
        0x33a4fc89u, 0x41cf5c54u, 0x36f41ba3u, 0xfcc24ca6u, 0xf90cfbcdu, 0xa5706ac8u, 0xdb380f87u, 0x38a6873au, 0xab6eed51u, 0x5088467cu, 0x818befabu, 0xf9bb410eu, 0xe13ad515u, 0xec5f2370u, 0x9b52600fu, 0x535ace22u,
        0xc77ef719u, 0x15c675a4u, 0xe76644b3u, 0x717ac276u, 0xe6abd75du, 0x730cf118u, 0xc77ec197u, 0xc6bff20au, 0x719839e1u, 0x4f3289ccu, 0xd9d33abbu, 0x31d270deu, 0xa2c522a5u, 0x6e5c73c0u, 0xfaff541fu, 0xedf192f2u,
        0xebe1d5a9u, 0x0f8922f4u, 0x1426f1c3u, 0x62c7ec46u, 0xfb8fd6edu, 0x4f844b68u, 0x595a37a7u, 0x277f50dau, 0xdd66ea71u, 0x611ae11cu, 0xdc3989cbu, 0xcd14d4aeu, 0xb8391435u, 0x4e8f1810u, 0x96d98c2fu, 0x43eccbc2u,
        0xee969839u, 0x384c6444u, 0x52e722d3u, 0xf0a6ca16u, 0xa591fa7du, 0x44db79b8u, 0x110b71b7u, 0xc431a3aau, 0xf5c3ff01u, 0xb6164c6cu, 0xd48fdcdbu, 0xeb1f6c7eu, 0x4a8fa9c5u, 0xd79c1060u, 0xf742083fu, 0xe8397892u,
        0xb3a63ec9u, 0xba853994u, 0x6997d7e3u, 0x2e545be6u, 0x2ccb420du, 0xf2577c08u, 0x83136fc7u, 0x8d63ea7au, 0x1fd87791u, 0xc739cbbcu, 0x46e733ebu, 0x06cf384eu, 0xa501e355u, 0x91685cb0u, 0x40d9c84fu, 0xdd049962u,
        0x4559c959u, 0x31e8a2e4u, 0x5e6a10f3u, 0xf24da1b6u, 0x4394ad9du, 0xdc7d5258u, 0x683331d7u, 0xcae3254au, 0xaf0d5421u, 0xa6da5f0cu, 0xff908efbu, 0xc641381eu, 0xc508c0e5u, 0x9118fd00u, 0x4481cc5fu, 0x63bb2e32u,
        0x643a37e9u, 0xfb6ba034u, 0x87cece03u, 0xa64f9b86u, 0x96873d2du, 0xbd11fca8u, 0xad6bb7e7u, 0xebbc541au, 0x750b94b1u, 0x508d065cu, 0x231cee0bu, 0xcad26beeu, 0xea5d4275u, 0xc912f150u, 0x8f5b146fu, 0xcd0a3702u,
        0x17108a79u, 0x85433184u, 0x9c770f13u, 0x17574956u, 0x5c7bf0bdu, 0xd31a7af8u, 0x83fe01f7u, 0x563c76eau, 0x51bc3941u, 0xf926c1acu, 0x3e5d511bu, 0x811fd3beu, 0x26f86805u, 0x58fb39a0u, 0x7ac6a07fu, 0x48deb3d2u,
        0x3ae5c109u, 0x9ee456d4u, 0xc353d423u, 0x45a1ab26u, 0xe68bc84du, 0x32dbcd48u, 0x716b1007u, 0x37f08dbau, 0xc34841d1u, 0x5ebc90fcu, 0x5662b82bu, 0xf1066f8eu, 0xef133195u, 0xddb6d5f0u, 0x3c65708fu, 0xb665a4a2u,
        0x1302db99u, 0xc9041024u, 0xa3961d33u, 0x34abc0f6u, 0x300fc3ddu, 0x15daf398u, 0x5f73e217u, 0x55a5988au, 0x7618ae61u, 0x18a3744cu, 0xf87e233bu, 0x8da33f5eu, 0xa9269f25u, 0xc16ac640u, 0xf618849fu, 0x740c0972u,
        0xd8f0da29u, 0x85975d74u, 0x74aeea43u, 0xbb328ac6u, 0x6ea0e36du, 0x2adcede8u, 0xac197827u, 0xdb68975au, 0xd4d67ef1u, 0xe7706b9cu, 0x4a40924bu, 0x0553432eu, 0x3debb0b5u, 0x8b7c0a90u, 0xc600dcafu, 0x2f7ee242u,
        0x4c78bcb9u, 0xa7d33ec4u, 0x0e4f3b53u, 0x53330896u, 0xa21826fdu, 0xe5e6bc38u, 0x399cd237u, 0x2c868a2au, 0x986ab381u, 0x04f876ecu, 0x197b055bu, 0x11b37afeu, 0xa85b6645u, 0x308fa2e0u, 0xd67f78bfu, 0xb5ab2f12u,
        0x43a38349u, 0xa42cb414u, 0xf8681063u, 0xe9ea3a66u, 0x248e8e8du, 0xd03d5e88u, 0x7e7ef047u, 0xb38c70fau, 0x57fe4c11u, 0x7450963cu, 0xec3e7c6bu, 0x47a0e6ceu, 0x85aebfd5u, 0x628a8f30u, 0x6e3558cfu, 0xc2bdefe2u,
        0x3aba2dd9u, 0xe058bd64u, 0x7b2a6973u, 0xafd52036u, 0x3a5d1a1du, 0xd865d4d8u, 0x9580d257u, 0xb2474bcau, 0x18fa48a1u, 0x51cdc98cu, 0x10dbf77bu, 0xe738869eu, 0xa55ebd65u, 0xe091cf80u, 0x00037cdfu, 0xd22424b2u,
        0xe445bc69u, 0x034c5ab4u, 0xaf074683u, 0xe8b0ba06u, 0xa21cc9adu, 0xa2251f28u, 0x4da37867u, 0x11c41a9au, 0xdf07a931u, 0x230510dcu, 0xade4768bu, 0xabd75a6eu, 0x99245ef5u, 0xc70a63d0u, 0x3b0ae4efu, 0xee8acd82u,
        0xb90f2ef9u, 0x453c8c04u, 0x8cafa793u, 0xbb7a07d6u, 0x24a69d3du, 0xd6803d78u, 0x3a27e277u, 0x324fdd6au, 0x3c0f6dc1u, 0x26cb6c2cu, 0xd228f99bu, 0x9c1a623eu, 0x44f8a485u, 0xdf994c20u, 0x1aac90ffu, 0x81deea52u,
    };
    uint32_t acc = 0x807b7d52u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 82) & 255]);
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
    case 0: acc = heavy_round(acc, 0x660dbc31u); break;
    case 1: acc = heavy_round(acc, 0x44e607dcu); break;
    case 2: acc = heavy_round(acc, 0x27bb018bu); break;
    case 3: acc = heavy_round(acc, 0xea1e696eu); break;
    case 4: acc = heavy_round(acc, 0x89ba21f5u); break;
    case 5: acc = heavy_round(acc, 0xb5574ad0u); break;
    case 6: acc = heavy_round(acc, 0x87fc9fefu); break;
    case 7: acc = heavy_round(acc, 0x6a534c82u); break;
    case 8: acc = heavy_round(acc, 0x4bd7a1f9u); break;
    case 9: acc = heavy_round(acc, 0xd23c6304u); break;
    case 10: acc = heavy_round(acc, 0xa4579293u); break;
    case 11: acc = heavy_round(acc, 0xc9a2f6d6u); break;
    case 12: acc = heavy_round(acc, 0x82f4c03du); break;
    case 13: acc = heavy_round(acc, 0x2d6a0478u); break;
    case 14: acc = heavy_round(acc, 0x3850fd77u); break;
    case 15: acc = heavy_round(acc, 0x1e283c6au); break;
    case 16: acc = heavy_round(acc, 0xb2e640c1u); break;
    case 17: acc = heavy_round(acc, 0x62c6232cu); break;
    case 18: acc = heavy_round(acc, 0xa1ce449bu); break;
    case 19: acc = heavy_round(acc, 0x5661313eu); break;
    case 20: acc = heavy_round(acc, 0x280b2785u); break;
    case 21: acc = heavy_round(acc, 0x92bbf320u); break;
    case 22: acc = heavy_round(acc, 0x50f90bffu); break;
    case 23: acc = heavy_round(acc, 0xbfc32952u); break;
    case 24: acc = heavy_round(acc, 0xc4d0b889u); break;
    case 25: acc = heavy_round(acc, 0x69efe854u); break;
    case 26: acc = heavy_round(acc, 0xe46337a3u); break;
    case 27: acc = heavy_round(acc, 0xcc8eb8a6u); break;
    case 28: acc = heavy_round(acc, 0x857677cdu); break;
    case 29: acc = heavy_round(acc, 0xea33b6c8u); break;
    case 30: acc = heavy_round(acc, 0x956aeb87u); break;
    case 31: acc = heavy_round(acc, 0x6ce3b33au); break;
    case 32: acc = heavy_round(acc, 0xfe122951u); break;
    case 33: acc = heavy_round(acc, 0x68ba527cu); break;
    case 34: acc = heavy_round(acc, 0xd8de8babu); break;
    case 35: acc = heavy_round(acc, 0x8f152d0eu); break;
    case 36: acc = heavy_round(acc, 0x56d3d115u); break;
    case 37: acc = heavy_round(acc, 0x758bef70u); break;
    case 38: acc = heavy_round(acc, 0x57e0bc0fu); break;
    case 39: acc = heavy_round(acc, 0x9b3d7a22u); break;
    case 40: acc = heavy_round(acc, 0x8a89b319u); break;
    case 41: acc = heavy_round(acc, 0xa03a01a4u); break;
    case 42: acc = heavy_round(acc, 0xa50c60b3u); break;
    case 43: acc = heavy_round(acc, 0xfe122e76u); break;
    case 44: acc = heavy_round(acc, 0xeb64535du); break;
    case 45: acc = heavy_round(acc, 0x4dd33d18u); break;
    case 46: acc = heavy_round(acc, 0x51d89d97u); break;
    case 47: acc = heavy_round(acc, 0x16f81e0au); break;
    case 48: acc = heavy_round(acc, 0x31fa75e1u); break;
    case 49: acc = heavy_round(acc, 0x141795ccu); break;
    case 50: acc = heavy_round(acc, 0x483cd6bbu); break;
    case 51: acc = heavy_round(acc, 0x1d575cdeu); break;
    case 52: acc = heavy_round(acc, 0x9a8d1ea5u); break;
    case 53: acc = heavy_round(acc, 0x4dec3fc0u); break;
    case 54: acc = heavy_round(acc, 0x8c94b01fu); break;
    case 55: acc = heavy_round(acc, 0xd12f3ef2u); break;
    case 56: acc = heavy_round(acc, 0xd48b91a9u); break;
    case 57: acc = heavy_round(acc, 0xdd0faef4u); break;
    case 58: acc = heavy_round(acc, 0xcbc40dc3u); break;
    case 59: acc = heavy_round(acc, 0x0aea5846u); break;
    case 60: acc = heavy_round(acc, 0xc85752edu); break;
    case 61: acc = heavy_round(acc, 0x4d0d9768u); break;
    case 62: acc = heavy_round(acc, 0x599b13a7u); break;
    case 63: acc = heavy_round(acc, 0x7e727cdau); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

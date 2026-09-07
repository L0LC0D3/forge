#include "heavy.h"
#include "mods.h"

int mod_049(int x)
{
    static const uint32_t local[256] = {
        0x4293c044u, 0x432eced3u, 0x7ed28616u, 0xa6b2867du, 0xf74a95b8u, 0x21d7ddb7u, 0x9d9b1faau, 0x23874b01u, 0x4549286cu, 0xd9cd08dbu, 0xdac2a87eu, 0x5bc1b5c5u, 0xd3eeac60u, 0xed9bf43fu, 0x4ad27492u, 0x45d30ac9u,
        0xec139594u, 0xa27a83e3u, 0x2e5f17e6u, 0xd03ece0du, 0xf4fd9808u, 0x90aadbc7u, 0x1f1c667au, 0x239ec391u, 0x6693a7bcu, 0xa81f5febu, 0xa431744eu, 0xa2e6ef55u, 0xe4d1f8b0u, 0xcd5eb44fu, 0x01cc9562u, 0x6de99559u,
        0x787dfee4u, 0x72a7bcf3u, 0x57f75db6u, 0x6a1b399du, 0x191a6e58u, 0xd1559dd7u, 0x64aaa14au, 0x1596a021u, 0xfc1b3b0cu, 0xa783bafbu, 0x7d22741eu, 0xa860cce5u, 0x5d599900u, 0x9df1b85fu, 0x92722a32u, 0x47ed03e9u,
        0xb4c7fc34u, 0xba277a03u, 0x55585786u, 0x50e0c92du, 0x8d6618a8u, 0x80d923e7u, 0xcd52d01au, 0xfb17e0b1u, 0x7174e25cu, 0xac8b1a0bu, 0xf6f2a7eeu, 0xdbe84e75u, 0x9fea8d50u, 0x9c76006fu, 0x3d703302u, 0x0aa65679u,
        0x7f268d84u, 0xdfaabb13u, 0xe37f0556u, 0xeb687cbdu, 0x00e596f8u, 0x80766df7u, 0xaf61f2eau, 0xe40b8541u, 0x6b759dacu, 0xf4067d1bu, 0x6e3f0fbeu, 0x7f767405u, 0x3c29d5a0u, 0xd24c8c7fu, 0x22b3afd2u, 0xc31e8d09u,
        0x170eb2d4u, 0xba228023u, 0xf2a86726u, 0xbacb544du, 0xf7dde948u, 0x05ae7c07u, 0x286509bau, 0x7e9a8dd1u, 0x18326cfcu, 0x3306e42bu, 0xdae4ab8eu, 0x37443d95u, 0x3efc71f0u, 0x25165c8fu, 0x1169a0a2u, 0xe49ea799u,
        0x6d356c24u, 0xa0bfc933u, 0x76517cf6u, 0xea624fddu, 0x1bd40f98u, 0xaa424e17u, 0xed29148au, 0xa72dfa61u, 0x7f00504cu, 0xa6dd4f3bu, 0xa0007b5eu, 0x99caab25u, 0x82876240u, 0x66b4709fu, 0x57ff0572u, 0xd8afa629u,
        0x738fb974u, 0x7af39643u, 0x353746c6u, 0xdfc66f6du, 0x8b8d09e8u, 0x7c32e427u, 0x19bb135au, 0xf86ecaf1u, 0xd074479cu, 0x251abe4bu, 0x5bef7f2eu, 0xbfc2bcb5u, 0xfe2fa690u, 0x6547c8afu, 0x9420de42u, 0x8f1a88b9u,
        0x6d529ac4u, 0xd06ee753u, 0x9956c496u, 0xcad0b2fdu, 0x2b0dd838u, 0x0dc13e37u, 0x0168062au, 0x5b45ff81u, 0xb66352ecu, 0x2b90315bu, 0xb84eb6feu, 0xd4257245u, 0x169a3ee0u, 0xfb3164bfu, 0x82bc2b12u, 0x0de84f49u,
        0x3ef31014u, 0xd922bc63u, 0x7fecf666u, 0x359a1a8du, 0xf39b7a88u, 0x856e5c47u, 0xfebcecfau, 0x96dc9811u, 0xa3e2723cu, 0xf04ea86bu, 0x39fb22ceu, 0xa42bcbd5u, 0xedac2b30u, 0x1f1244cfu, 0xcffdebe2u, 0x0161f9d9u,
        0xbe261964u, 0x8d401573u, 0x0976dc36u, 0x947ba61du, 0x43baf0d8u, 0xadfb3e57u, 0x4386c7cau, 0xe09b94a1u, 0x2546a58cu, 0x71a7237bu, 0x1111c29eu, 0x2f4ec965u, 0xb28a6b80u, 0xf3cb68dfu, 0xe75320b2u, 0x4c108869u,
        0x01e0b6b4u, 0xb537f283u, 0x69b17606u, 0xd60e55adu, 0x2f313b28u, 0x0668e467u, 0xa8d2969au, 0x6c2bf531u, 0x3024ecdcu, 0x862aa28bu, 0xe8ef966eu, 0x37476af5u, 0xf199ffd0u, 0xd87dd0efu, 0xc368c982u, 0x96bcfaf9u,
        0xb257e804u, 0xf9bb5393u, 0xb799c3d6u, 0xf32b293du, 0xcf035978u, 0xd1f84e77u, 0x7eed596au, 0xfb76b9c1u, 0x7352482cu, 0xecaa259bu, 0xb8319e3eu, 0xd00eb085u, 0xe47fe820u, 0x788a7cffu, 0xbe2be652u, 0xe0705189u,
        0x5900ad54u, 0xf3bb38a3u, 0xbd6cc5a6u, 0x7eeb20cdu, 0x91764bc8u, 0x282a7c87u, 0x5d64103au, 0x6ea4e251u, 0xa6e3b77cu, 0x5c36acabu, 0x90b4da0eu, 0xefdd9a15u, 0xc2212470u, 0xdb926d0fu, 0x60c97722u, 0x0e738c19u,
        0xb09006a4u, 0x3c68a1b3u, 0xc8a77b76u, 0x36a73c5du, 0x8a0f1218u, 0x04c06e97u, 0xf303bb0au, 0x541f6ee1u, 0xdc2e3accu, 0x942137bbu, 0x6f9649deu, 0xff2d27a5u, 0x0ea2b4c0u, 0x7576a11fu, 0x33ae7bf2u, 0x7c4faaa9u,
        0xf4faf3f4u, 0x7d348ec3u, 0x7a06e546u, 0x91f87bedu, 0xc192ac68u, 0x57bb24a7u, 0xd5d959dau, 0x788f5f71u, 0xcdc6d21cu, 0x6bfac6cbu, 0x0d32edaeu, 0x68b65935u, 0xeb699910u, 0x3658192fu, 0x8e87f4c2u, 0x8bcdad39u,
    };
    uint32_t acc = 0xdf206439u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 49) & 255]);
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
    case 0: acc = heavy_round(acc, 0xd473db1eu); break;
    case 1: acc = heavy_round(acc, 0x958d07e5u); break;
    case 2: acc = heavy_round(acc, 0xcb1a9800u); break;
    case 3: acc = heavy_round(acc, 0xfd58ab5fu); break;
    case 4: acc = heavy_round(acc, 0x2a7e8132u); break;
    case 5: acc = heavy_round(acc, 0x6a376ee9u); break;
    case 6: acc = heavy_round(acc, 0x8c316b34u); break;
    case 7: acc = heavy_round(acc, 0x83bc1d03u); break;
    case 8: acc = heavy_round(acc, 0xb5d69e86u); break;
    case 9: acc = heavy_round(acc, 0x7694642du); break;
    case 10: acc = heavy_round(acc, 0x2a46f7a8u); break;
    case 11: acc = heavy_round(acc, 0xd81e76e7u); break;
    case 12: acc = heavy_round(acc, 0xf5ea071au); break;
    case 13: acc = heavy_round(acc, 0xa9afabb1u); break;
    case 14: acc = heavy_round(acc, 0x9d0c315cu); break;
    case 15: acc = heavy_round(acc, 0xe3b41d0bu); break;
    case 16: acc = heavy_round(acc, 0x6639ceeeu); break;
    case 17: acc = heavy_round(acc, 0xab0f4975u); break;
    case 18: acc = heavy_round(acc, 0x2fe74c50u); break;
    case 19: acc = heavy_round(acc, 0x4765b36fu); break;
    case 20: acc = heavy_round(acc, 0xe7ee4a02u); break;
    case 21: acc = heavy_round(acc, 0x2f378179u); break;
    case 22: acc = heavy_round(acc, 0x64a7bc84u); break;
    case 23: acc = heavy_round(acc, 0x96f41e13u); break;
    case 24: acc = heavy_round(acc, 0x1aab0c56u); break;
    case 25: acc = heavy_round(acc, 0xf26ed7bdu); break;
    case 26: acc = heavy_round(acc, 0xc77a35f8u); break;
    case 27: acc = heavy_round(acc, 0x545c80f7u); break;
    case 28: acc = heavy_round(acc, 0xf8a2e9eau); break;
    case 29: acc = heavy_round(acc, 0x9dc21041u); break;
    case 30: acc = heavy_round(acc, 0x281cacacu); break;
    case 31: acc = heavy_round(acc, 0x8f7c401bu); break;
    case 32: acc = heavy_round(acc, 0x49ebf6beu); break;
    case 33: acc = heavy_round(acc, 0x1a482f05u); break;
    case 34: acc = heavy_round(acc, 0xec5254a0u); break;
    case 35: acc = heavy_round(acc, 0x4df4ff7fu); break;
    case 36: acc = heavy_round(acc, 0xc31386d2u); break;
    case 37: acc = heavy_round(acc, 0x16a67809u); break;
    case 38: acc = heavy_round(acc, 0x6f97a1d4u); break;
    case 39: acc = heavy_round(acc, 0x1f50a323u); break;
    case 40: acc = heavy_round(acc, 0xe2f22e26u); break;
    case 41: acc = heavy_round(acc, 0xc2d46f4du); break;
    case 42: acc = heavy_round(acc, 0xa4164848u); break;
    case 43: acc = heavy_round(acc, 0x81654f07u); break;
    case 44: acc = heavy_round(acc, 0xe3bfc0bau); break;
    case 45: acc = heavy_round(acc, 0x061fd8d1u); break;
    case 46: acc = heavy_round(acc, 0x68d93bfcu); break;
    case 47: acc = heavy_round(acc, 0xf8f9672bu); break;
    case 48: acc = heavy_round(acc, 0x5367528eu); break;
    case 49: acc = heavy_round(acc, 0xb370b895u); break;
    case 50: acc = heavy_round(acc, 0x4940b0f0u); break;
    case 51: acc = heavy_round(acc, 0x02a78f8fu); break;
    case 52: acc = heavy_round(acc, 0x271b37a2u); break;
    case 53: acc = heavy_round(acc, 0x7fcd5299u); break;
    case 54: acc = heavy_round(acc, 0x99b61b24u); break;
    case 55: acc = heavy_round(acc, 0x4002ac33u); break;
    case 56: acc = heavy_round(acc, 0x5e2903f6u); break;
    case 57: acc = heavy_round(acc, 0xbf1e2addu); break;
    case 58: acc = heavy_round(acc, 0x25a02e98u); break;
    case 59: acc = heavy_round(acc, 0x84f9e117u); break;
    case 60: acc = heavy_round(acc, 0x880d8b8au); break;
    case 61: acc = heavy_round(acc, 0x2b320561u); break;
    case 62: acc = heavy_round(acc, 0xe296df4cu); break;
    case 63: acc = heavy_round(acc, 0xa97c923bu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

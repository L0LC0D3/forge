#include "heavy.h"
#include "mods.h"

int mod_113(int x)
{
    static const uint32_t local[256] = {
        0x439f5704u, 0xa795f693u, 0x93a60ad6u, 0xf314c43du, 0x04a23878u, 0x9ee3a177u, 0xc4f2906au, 0xfca484c1u, 0x9487972cu, 0x90d9289bu, 0x14c6c53eu, 0xc02bab85u, 0x24faa720u, 0x4de02fffu, 0x33d7fd52u, 0xaa577c89u,
        0xe7dfdc54u, 0xb8ca9ba3u, 0x8ba6cca6u, 0xc5a77bcdu, 0x1848eac8u, 0x73368f87u, 0xd793073au, 0x78716d51u, 0x38a8c67cu, 0xbe326fabu, 0xe52fc10eu, 0xc1255515u, 0x3a47a370u, 0xb320e00fu, 0x4fd74e22u, 0xb4d17719u,
        0x81f6f5a4u, 0x38dcc4b3u, 0x4b7f4276u, 0x43e6575du, 0xfe057118u, 0x591d4197u, 0xd2cc720au, 0x893ab9e1u, 0xc17309ccu, 0xda19babbu, 0xcc66f0deu, 0x274fa2a5u, 0xd864f3c0u, 0x406dd41fu, 0xfb8e12f2u, 0x77d455a9u,
        0x49d9a2f4u, 0x9d3d71c3u, 0xcfec6c46u, 0x916a56edu, 0x7a9ccb68u, 0xcc98b7a7u, 0x68abd0dau, 0x67a96a71u, 0x657b611cu, 0x082009cbu, 0x5ec954aeu, 0x89639435u, 0x5cb79810u, 0xf1e80c2fu, 0x2aa94bc2u, 0x41291839u,
        0x48bce444u, 0x7b9da2d3u, 0x38eb4a16u, 0x1c0c7a7du, 0x9813f9b8u, 0x4de9f1b7u, 0x027e23aau, 0x1aa67f01u, 0x5496cc6cu, 0x94165cdbu, 0xbbf3ec7eu, 0x105a29c5u, 0x11e49060u, 0x4ff0883fu, 0x7015f892u, 0xf4d8bec9u,
        0xa915b994u, 0x99ee57e3u, 0x99b8dbe6u, 0x2be5c20du, 0xf5affc08u, 0x7191efc7u, 0x90d06a7au, 0x075af791u, 0x07da4bbcu, 0x020db3ebu, 0x5ec3b84eu, 0x076c6355u, 0x7fd0dcb0u, 0x7f28484fu, 0xce011962u, 0x9d2c4959u,
        0x069922e4u, 0xfe6090f3u, 0xc8d221b6u, 0x734f2d9du, 0x17f5d258u, 0xf051b1d7u, 0x5b6fa54au, 0x812fd421u, 0x919adf0cu, 0x1e570efbu, 0xed55b81eu, 0x6c1340e5u, 0xbba17d00u, 0x50704c5fu, 0x85d7ae32u, 0xfaacb7e9u,
        0xbe3c2034u, 0xff654e03u, 0x2ff41b86u, 0x9ee1bd2du, 0xb8aa7ca8u, 0xb72a37e7u, 0xd168d41au, 0x59ce14b1u, 0xed6d865cu, 0x0d836e0bu, 0x0906ebeeu, 0x7e07c275u, 0xb7bb7150u, 0x50e9946fu, 0xe846b702u, 0x14230a79u,
        0x3e33b184u, 0x53ad8f13u, 0x9c1bc956u, 0xe57670bdu, 0x16d2faf8u, 0xf75c81f7u, 0x5908f6eau, 0x711eb941u, 0x502741acu, 0x5c63d11bu, 0x1e7453beu, 0x4f42e805u, 0x93c3b9a0u, 0xd9f5207fu, 0x253b33d2u, 0xc6984109u,
        0x55f4d6d4u, 0x222a5423u, 0x0d862b26u, 0x9826484du, 0x46b44d48u, 0x36699007u, 0x1fdd0dbau, 0x454ac1d1u, 0x77dd10fcu, 0x1009382bu, 0x357aef8eu, 0x53fdb195u, 0xec9f55f0u, 0x2133f08fu, 0x1be224a2u, 0x55555b99u,
        0x86349024u, 0x120c9d33u, 0x87b040f6u, 0xb24a43ddu, 0x81d37398u, 0x5e126217u, 0xeab2188au, 0x82bb2e61u, 0xfbe3f44cu, 0xb5c4a33bu, 0xc137bf5eu, 0xf2b11f25u, 0x2c734640u, 0x4887049fu, 0x2aa88972u, 0xf9e35a29u,
        0x50e7dd74u, 0x5ac56a43u, 0xe1570ac6u, 0x697b636du, 0x76f56de8u, 0xcc57f827u, 0xe595175au, 0x9418fef1u, 0x9cd0eb9cu, 0x7327124bu, 0x7007c32eu, 0x141630b5u, 0xdaa48a90u, 0x6e0f5cafu, 0xff3b6242u, 0x740b3cb9u,
        0x8943bec4u, 0xd405bb53u, 0x94778896u, 0xbd92a6fdu, 0x9a1f3c38u, 0x637b5237u, 0x73d30a2au, 0x324d3381u, 0x9478f6ecu, 0x1601855bu, 0xfb87fafeu, 0xb325e645u, 0xebd822e0u, 0xbc2df8bfu, 0x6687af12u, 0x99d60349u,
        0xa3bd3414u, 0x05be9063u, 0x8e4eba66u, 0x08a90e8du, 0x7495de88u, 0x99fd7047u, 0xfff8f0fau, 0xf480cc11u, 0xe5f1163cu, 0x2464fc6bu, 0xf89566ceu, 0x6d193fd5u, 0x11f30f30u, 0x7983d8cfu, 0x1cba6fe2u, 0xe78cadd9u,
        0x06093d64u, 0x3820e973u, 0xff59a036u, 0x8f179a1du, 0xf4de54d8u, 0x8a9f5257u, 0xcbd3cbcau, 0xe01cc8a1u, 0xad8e498cu, 0xeca2777bu, 0xa74d069eu, 0x11693d65u, 0x0c1a4f80u, 0x18f1fcdfu, 0x9d40a4b2u, 0x0fb83c69u,
        0x571cdab4u, 0x839dc683u, 0x2b553a06u, 0x0f7749adu, 0xbebd9f28u, 0x0461f867u, 0xc0709a9au, 0xf8ca2931u, 0x70e590dcu, 0x954af68bu, 0xc30bda6eu, 0x31cedef5u, 0xf6b2e3d0u, 0x499964efu, 0xf2c74d82u, 0x8b21aef9u,
    };
    uint32_t acc = 0x10dd65f9u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 113) & 255]);
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
    case 0: acc = heavy_round(acc, 0x48fb02deu); break;
    case 1: acc = heavy_round(acc, 0x3c008ca5u); break;
    case 2: acc = heavy_round(acc, 0x3c9cd5c0u); break;
    case 3: acc = heavy_round(acc, 0xad504e1fu); break;
    case 4: acc = heavy_round(acc, 0xa9aa44f2u); break;
    case 5: acc = heavy_round(acc, 0x6d2edfa9u); break;
    case 6: acc = heavy_round(acc, 0x4c6ea4f4u); break;
    case 7: acc = heavy_round(acc, 0x4f9a8bc3u); break;
    case 8: acc = heavy_round(acc, 0x8102be46u); break;
    case 9: acc = heavy_round(acc, 0x763880edu); break;
    case 10: acc = heavy_round(acc, 0x57d0ed68u); break;
    case 11: acc = heavy_round(acc, 0x1fca71a7u); break;
    case 12: acc = heavy_round(acc, 0x9c4e42dau); break;
    case 13: acc = heavy_round(acc, 0xe2553471u); break;
    case 14: acc = heavy_round(acc, 0xccb0a31cu); break;
    case 15: acc = heavy_round(acc, 0xf02063cbu); break;
    case 16: acc = heavy_round(acc, 0x14a9e6aeu); break;
    case 17: acc = heavy_round(acc, 0x81f6fe35u); break;
    case 18: acc = heavy_round(acc, 0x126ffa10u); break;
    case 19: acc = heavy_round(acc, 0x3551062fu); break;
    case 20: acc = heavy_round(acc, 0xd499fdc2u); break;
    case 21: acc = heavy_round(acc, 0x2b4e2239u); break;
    case 22: acc = heavy_round(acc, 0xe89a6644u); break;
    case 23: acc = heavy_round(acc, 0x8da93cd3u); break;
    case 24: acc = heavy_round(acc, 0xccde1c16u); break;
    case 25: acc = heavy_round(acc, 0xe10d247du); break;
    case 26: acc = heavy_round(acc, 0x76d89bb8u); break;
    case 27: acc = heavy_round(acc, 0xc8722bb7u); break;
    case 28: acc = heavy_round(acc, 0x2c8515aau); break;
    case 29: acc = heavy_round(acc, 0xa36cc901u); break;
    case 30: acc = heavy_round(acc, 0x82248e6cu); break;
    case 31: acc = heavy_round(acc, 0x519536dbu); break;
    case 32: acc = heavy_round(acc, 0x3040fe7eu); break;
    case 33: acc = heavy_round(acc, 0x6f7013c5u); break;
    case 34: acc = heavy_round(acc, 0x7b3d7260u); break;
    case 35: acc = heavy_round(acc, 0x2580023fu); break;
    case 36: acc = heavy_round(acc, 0x5cfb2a92u); break;
    case 37: acc = heavy_round(acc, 0x306848c9u); break;
    case 38: acc = heavy_round(acc, 0x5a5bbb94u); break;
    case 39: acc = heavy_round(acc, 0xb14871e3u); break;
    case 40: acc = heavy_round(acc, 0x39a82de6u); break;
    case 41: acc = heavy_round(acc, 0xa7b8ec0du); break;
    case 42: acc = heavy_round(acc, 0x7c251e08u); break;
    case 43: acc = heavy_round(acc, 0x4310a9c7u); break;
    case 44: acc = heavy_round(acc, 0xdc5bdc7au); break;
    case 45: acc = heavy_round(acc, 0x8edbc191u); break;
    case 46: acc = heavy_round(acc, 0xf3e08dbcu); break;
    case 47: acc = heavy_round(acc, 0xeeab0debu); break;
    case 48: acc = heavy_round(acc, 0xde9d4a4eu); break;
    case 49: acc = heavy_round(acc, 0x77a4cd55u); break;
    case 50: acc = heavy_round(acc, 0x06ea3eb0u); break;
    case 51: acc = heavy_round(acc, 0x0a7e424fu); break;
    case 52: acc = heavy_round(acc, 0x8cfacb62u); break;
    case 53: acc = heavy_round(acc, 0x2ec65359u); break;
    case 54: acc = heavy_round(acc, 0xc567a4e4u); break;
    case 55: acc = heavy_round(acc, 0xa8a92af3u); break;
    case 56: acc = heavy_round(acc, 0x65ddf3b6u); break;
    case 57: acc = heavy_round(acc, 0xa494d79du); break;
    case 58: acc = heavy_round(acc, 0xf43b7458u); break;
    case 59: acc = heavy_round(acc, 0xb066ebd7u); break;
    case 60: acc = heavy_round(acc, 0x3b9f974au); break;
    case 61: acc = heavy_round(acc, 0xa00b1e21u); break;
    case 62: acc = heavy_round(acc, 0xbc39a10cu); break;
    case 63: acc = heavy_round(acc, 0x7bb2e8fbu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

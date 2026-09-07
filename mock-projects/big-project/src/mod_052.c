#include "heavy.h"
#include "mods.h"

int mod_052(int x)
{
    static const uint32_t local[256] = {
        0xf73dfc7fu, 0x25965fd2u, 0x6ac17d09u, 0xf5f4e2d4u, 0x72f2f023u, 0x51de1726u, 0x24a5444du, 0x9d8f1948u, 0xb8cdec07u, 0xb79db9bau, 0x8a9b7dd1u, 0x83de9cfcu, 0xf5e5542bu, 0x50d05b8eu, 0x4c5c2d95u, 0x4ad3a1f0u,
        0x2c23cc8fu, 0xb7b850a2u, 0xe0bd9799u, 0xfe679c24u, 0xaf6c3933u, 0xd9b32cf6u, 0x12783fddu, 0x52913f98u, 0x82fdbe17u, 0x8d4dc48au, 0x972aea61u, 0xe678804cu, 0x7b17bf3bu, 0x9f982b5eu, 0x349e9b25u, 0x40ea9240u,
        0x46dde09fu, 0x2cb9b572u, 0x384a9629u, 0x7a0de974u, 0xc67c0643u, 0x57c4f6c6u, 0x45185f6du, 0xc65639e8u, 0x518a5427u, 0xb5cbc35au, 0xbb67baf1u, 0x56b8779cu, 0xd1b12e4bu, 0x00332f2eu, 0x3f52acb5u, 0x421ed690u,
        0xd58d38afu, 0xe2478e42u, 0x213178b9u, 0x6c1ccac4u, 0xffd35753u, 0xf6107496u, 0xac5ea2fdu, 0x9ce30838u, 0x76b4ae37u, 0x4464b62au, 0xa03aef81u, 0x3e7382ecu, 0x3782a15bu, 0xdc3e66feu, 0x57716245u, 0x73156ee0u,
        0x7292d4bfu, 0x554edb12u, 0x617b3f49u, 0x79094014u, 0x53632c63u, 0x51d2a666u, 0x92640a8du, 0x8f7caa88u, 0xd8fdcc47u, 0x53a59cfau, 0xcccd8811u, 0xd0bea23cu, 0xa29d186bu, 0x7896d2ceu, 0x0a33bbd5u, 0xb5b35b30u,
        0xd48fb4cfu, 0xf1fc9be2u, 0x6570e9d9u, 0x36884964u, 0x795c8573u, 0x4b888c36u, 0x2b81961du, 0xbca820d8u, 0x0326ae57u, 0xd55b77cau, 0x368884a1u, 0x59eed58cu, 0xd151937bu, 0xc559729eu, 0x1712b965u, 0xf91d9b80u,
        0xde64d8dfu, 0xe3bdd0b2u, 0xcf9b7869u, 0x7b8ee6b4u, 0xfa306283u, 0xd6ef2606u, 0x265045adu, 0xf82a6b28u, 0x34305467u, 0x6293469au, 0xd114e531u, 0x8f991cdcu, 0x5a31128bu, 0x2de3466eu, 0xffc75af5u, 0x89b92fd0u,
        0xaf3340efu, 0xe53f7982u, 0x08c3eaf9u, 0xb0521804u, 0x3e8fc393u, 0xcb0373d6u, 0x3ba9193du, 0x1b088978u, 0x6f5bbe77u, 0x0b9a096au, 0x1e5ba9c1u, 0xe092782cu, 0xbc0c959bu, 0x68d14e3eu, 0x984aa085u, 0x612b1820u,
        0xb25becffu, 0x106e9652u, 0xcff34189u, 0x1e46dd54u, 0x9f6ba8a3u, 0xb20275a6u, 0xbea510cdu, 0x53877bc8u, 0x8c29ec87u, 0x27fcc03au, 0xbe85d251u, 0xc4efe77cu, 0x6df51cabu, 0x48008a0eu, 0x96d58a15u, 0x76585470u,
        0xaf7fdd0fu, 0xae782722u, 0xca727c19u, 0x402236a4u, 0x75f511b3u, 0x99692b76u, 0x2c9d2c5du, 0x752c4218u, 0x465bde97u, 0x26886b0au, 0xfffc5ee1u, 0x0e066accu, 0xef3ba7bbu, 0x888df9deu, 0x23e117a5u, 0x0d65e4c0u,
        0xda80111fu, 0x07c92bf2u, 0x13ca9aa9u, 0x11d923f4u, 0x2b9cfec3u, 0xe1f49546u, 0xbd2a6bedu, 0x48bbdc68u, 0x4df294a7u, 0x5d4a09dau, 0x6f684f71u, 0x366b021cu, 0xd77136cbu, 0xa2d69daeu, 0x6a264935u, 0x07b8c910u,
        0xe37d892fu, 0x340ea4c2u, 0xcdc49d39u, 0x60a0a544u, 0x4a146fd3u, 0x0fa1b316u, 0xf225cf7du, 0xdc3b4ab8u, 0x572f0eb7u, 0xd98e9caau, 0x67b2a401u, 0xb1f2ad6cu, 0xe666c9dbu, 0x9a77757eu, 0x269e1ec5u, 0x33f60160u,
        0x06d9453fu, 0xea359192u, 0xb06983c9u, 0x1aedba94u, 0x8b4c64e3u, 0x99ad84e6u, 0x27a8570du, 0xd2ef8d08u, 0x2a924cc7u, 0x2fe3237au, 0xa2045c91u, 0x3db26cbcu, 0x142d60ebu, 0xce4d814eu, 0x38819855u, 0x9e028db0u,
        0x1d34454fu, 0x506af262u, 0x9a024e59u, 0xa07563e4u, 0xe975ddf3u, 0xba950ab6u, 0x240b029du, 0xb55da358u, 0xb4dd4ed7u, 0x4c149e4au, 0xc5c67921u, 0x2fff400cu, 0xa115fbfbu, 0xc875c11eu, 0x3149b5e5u, 0xdf036e00u,
        0xab6f895fu, 0xcc1bc732u, 0x1f17fce9u, 0x122ca134u, 0xaf01db03u, 0x40154486u, 0xa7e6d22du, 0x414a8da8u, 0x171114e7u, 0x41300d1au, 0xf8a1f9b1u, 0xc86e275cu, 0x25b19b0bu, 0x0e4d34eeu, 0xe4af7775u, 0x6d5da250u,
        0xf2ac116fu, 0xd1f51002u, 0x1a738f79u, 0xa2487284u, 0x86a15c13u, 0x5b2b3256u, 0xfe14c5bdu, 0xb9bb4bf8u, 0xb66e9ef7u, 0x19826feau, 0x6e7fde41u, 0x7fd422acu, 0xa2d13e1bu, 0xf070dcbeu, 0xf8abdd05u, 0xecb62aa0u,
    };
    uint32_t acc = 0xa87505a0u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 52) & 255]);
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
    case 0: acc = heavy_round(acc, 0x7261fa8fu); break;
    case 1: acc = heavy_round(acc, 0x8d34a6a2u); break;
    case 2: acc = heavy_round(acc, 0xa851f599u); break;
    case 3: acc = heavy_round(acc, 0x6c646224u); break;
    case 4: acc = heavy_round(acc, 0x52264733u); break;
    case 5: acc = heavy_round(acc, 0x9cb9e2f6u); break;
    case 6: acc = heavy_round(acc, 0x6c537dddu); break;
    case 7: acc = heavy_round(acc, 0x4b676598u); break;
    case 8: acc = heavy_round(acc, 0x2f01ac17u); break;
    case 9: acc = heavy_round(acc, 0x1854da8au); break;
    case 10: acc = heavy_round(acc, 0x9f4b0861u); break;
    case 11: acc = heavy_round(acc, 0x0a0e064cu); break;
    case 12: acc = heavy_round(acc, 0xf3138d3bu); break;
    case 13: acc = heavy_round(acc, 0x2975a15eu); break;
    case 14: acc = heavy_round(acc, 0xf7e19925u); break;
    case 15: acc = heavy_round(acc, 0xaa857840u); break;
    case 16: acc = heavy_round(acc, 0xd15f8e9fu); break;
    case 17: acc = heavy_round(acc, 0xdea38b72u); break;
    case 18: acc = heavy_round(acc, 0x526e7429u); break;
    case 19: acc = heavy_round(acc, 0xc6542f74u); break;
    case 20: acc = heavy_round(acc, 0x7bf19443u); break;
    case 21: acc = heavy_round(acc, 0x43512cc6u); break;
    case 22: acc = heavy_round(acc, 0x5ebb1d6du); break;
    case 23: acc = heavy_round(acc, 0x794ddfe8u); break;
    case 24: acc = heavy_round(acc, 0x4a41c227u); break;
    case 25: acc = heavy_round(acc, 0x2af0595au); break;
    case 26: acc = heavy_round(acc, 0xe80758f1u); break;
    case 27: acc = heavy_round(acc, 0xa1c77d9cu); break;
    case 28: acc = heavy_round(acc, 0x33d87c4bu); break;
    case 29: acc = heavy_round(acc, 0x4346252eu); break;
    case 30: acc = heavy_round(acc, 0x3b4d2ab5u); break;
    case 31: acc = heavy_round(acc, 0x2a0b3c90u); break;
    case 32: acc = heavy_round(acc, 0xc33266afu); break;
    case 33: acc = heavy_round(acc, 0x41fee442u); break;
    case 34: acc = heavy_round(acc, 0x6fc4d6b9u); break;
    case 35: acc = heavy_round(acc, 0x4f0c90c4u); break;
    case 36: acc = heavy_round(acc, 0x64e46553u); break;
    case 37: acc = heavy_round(acc, 0x41822a96u); break;
    case 38: acc = heavy_round(acc, 0x95a8e0fdu); break;
    case 39: acc = heavy_round(acc, 0x185c2e38u); break;
    case 40: acc = heavy_round(acc, 0xb6ff9c37u); break;
    case 41: acc = heavy_round(acc, 0xa106cc2au); break;
    case 42: acc = heavy_round(acc, 0x0f3a0d81u); break;
    case 43: acc = heavy_round(acc, 0x755c08ecu); break;
    case 44: acc = heavy_round(acc, 0xbcb56f5bu); break;
    case 45: acc = heavy_round(acc, 0xfbe6dcfeu); break;
    case 46: acc = heavy_round(acc, 0x98036045u); break;
    case 47: acc = heavy_round(acc, 0xb3b354e0u); break;
    case 48: acc = heavy_round(acc, 0x1a3b82bfu); break;
    case 49: acc = heavy_round(acc, 0x0c33b112u); break;
    case 50: acc = heavy_round(acc, 0xbe5e1d49u); break;
    case 51: acc = heavy_round(acc, 0x43028614u); break;
    case 52: acc = heavy_round(acc, 0xbcefba63u); break;
    case 53: acc = heavy_round(acc, 0x8c89dc66u); break;
    case 54: acc = heavy_round(acc, 0xd335c88du); break;
    case 55: acc = heavy_round(acc, 0xf9d75088u); break;
    case 56: acc = heavy_round(acc, 0x93bc3a47u); break;
    case 57: acc = heavy_round(acc, 0x6d2532fau); break;
    case 58: acc = heavy_round(acc, 0x940c2611u); break;
    case 59: acc = heavy_round(acc, 0x4fe0a83cu); break;
    case 60: acc = heavy_round(acc, 0x3bbb666bu); break;
    case 61: acc = heavy_round(acc, 0xf034c8ceu); break;
    case 62: acc = heavy_round(acc, 0x133d39d5u); break;
    case 63: acc = heavy_round(acc, 0x4162c130u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

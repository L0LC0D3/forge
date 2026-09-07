#include "heavy.h"
#include "mods.h"

int mod_030(int x)
{
    static const uint32_t local[256] = {
        0xb76c07ddu, 0x5ca26798u, 0xc3ccc617u, 0x1d012c8au, 0x86b73261u, 0xfd48284cu, 0xc893473bu, 0x0f0e135eu, 0x800b6325u, 0xf520ba40u, 0xe98de89fu, 0x5ada1d72u, 0xa15fde29u, 0x52d29174u, 0x8b688e43u, 0xddf7dec6u,
        0x061e276du, 0x695161e8u, 0x923b5c27u, 0x4ff92b5au, 0xcf2602f1u, 0x30121f9cu, 0xfc2eb64bu, 0x74c3172eu, 0x291174b5u, 0xac7efe90u, 0x745f40afu, 0x6a21f642u, 0x34b8c0b9u, 0x58ab72c4u, 0x4201df53u, 0x249d5c96u,
        0xd5f66afdu, 0xbb483038u, 0x37c7b637u, 0x6f8c1e2au, 0xacab3781u, 0xa4d72aecu, 0x8782295bu, 0x04684efeu, 0xbc022a45u, 0xc61f96e0u, 0x9e06dcbfu, 0x8d634312u, 0x83f48749u, 0x93e1e814u, 0x6b53b463u, 0xa7398e66u,
        0x910dd28du, 0xabcbd288u, 0xbaf2d447u, 0x364704fau, 0xc66fd011u, 0x2eac4a3cu, 0x809ea06bu, 0xa2dabaceu, 0xe61683d5u, 0xc3e78330u, 0x3d25bccfu, 0xd0cb03e2u, 0x1b5c31d9u, 0x3a2af164u, 0xdf8f0d73u, 0xe6497436u,
        0x8bbd5e1du, 0xf96148d8u, 0xc67db657u, 0x35f6dfcau, 0x31dccca1u, 0xb9e67d8cu, 0xc5d51b7bu, 0xe0375a9eu, 0x86c78165u, 0x34fbc380u, 0x549ce0dfu, 0xffc638b2u, 0xbd78c069u, 0xc27b8eb4u, 0x4724ea83u, 0x758a0e06u,
        0x949e0dadu, 0x17cd9328u, 0xb9695c67u, 0xa7a8ae9au, 0x029b2d31u, 0x9c1ac4dcu, 0x0db69a8bu, 0xc7db2e6eu, 0x3fce22f5u, 0x05c157d0u, 0x238d48efu, 0x7501e182u, 0xf31332f9u, 0x3508c004u, 0x2ac64b93u, 0xcbf85bd6u,
        0x8488e13du, 0x8015b178u, 0xb6f6c677u, 0x3ba9716au, 0xda93f1c1u, 0xe41e202cu, 0xf7141d9bu, 0xb063363eu, 0x05236885u, 0xcfdd4020u, 0x3557f4ffu, 0xea6afe52u, 0x9b348989u, 0x7b478554u, 0x036430a3u, 0x13d15da6u,
        0xce96d8cdu, 0x007ea3c8u, 0xb6a6f487u, 0xe986283au, 0x79f01a51u, 0xaa058f7cu, 0x18fea4abu, 0x0bac720eu, 0xad005215u, 0x2a347c70u, 0x719de50fu, 0x492e8f22u, 0x7b25c419u, 0xafecdea4u, 0x4a2f99b3u, 0xfa921376u,
        0x1020f45du, 0x0c8d6a18u, 0x943ae697u, 0xc00bd30au, 0x4f18a6e1u, 0x5f2612ccu, 0x12c72fbbu, 0x36d3e1deu, 0x7fdddfa5u, 0xf8ec0cc0u, 0x2c40191fu, 0x79b993f2u, 0xce6fe2a9u, 0x6eedcbf4u, 0x889986c3u, 0x80f77d46u,
        0xa0c033edu, 0x0d070468u, 0x1fb39ca7u, 0xb54771dau, 0x06b69771u, 0x1e14aa1cu, 0x9bfebecbu, 0x4a3685aeu, 0xc8751135u, 0xbd68f110u, 0x355f912fu, 0x33b90cc2u, 0xd6dbe539u, 0x257f4d44u, 0x6852f7d3u, 0xcafe9b16u,
        0x224d977du, 0xaff072b8u, 0x2d5216b7u, 0x768604aau, 0x1bb2ec01u, 0xfaa6556cu, 0x947651dbu, 0xe9715d7eu, 0x63bee6c5u, 0xe6502960u, 0xe95d4d3fu, 0xce19f992u, 0x6c72cbc9u, 0x62166294u, 0xc34cece3u, 0xefe46ce6u,
        0x10e21f0du, 0x388eb508u, 0xa59754c7u, 0x38548b7au, 0x6736a491u, 0x51f014bcu, 0x143ee8ebu, 0x1361694eu, 0x50f46055u, 0x1f86b5b0u, 0x40da4d4fu, 0x0f095a62u, 0x8d7d9659u, 0x24680be4u, 0xb3b865f3u, 0xca25f2b6u,
        0x52d6ca9du, 0xcf66cb58u, 0x954456d7u, 0x8680064au, 0xb0aac121u, 0x1a46e80cu, 0x7ba983fbu, 0xf223a91eu, 0x418e7de5u, 0xa2319600u, 0xe0b7915fu, 0xfbf42f32u, 0xee8544e9u, 0x2d694934u, 0xa4066303u, 0xc7802c86u,
        0xc8c49a2du, 0xd23db5a8u, 0x3d5a1ce7u, 0x1415751au, 0x3db841b1u, 0x333fcf5cu, 0x8347230bu, 0xab151ceeu, 0x29463f75u, 0x84b5ca50u, 0x2a16196fu, 0xa9877802u, 0x8a52d779u, 0x4f4f1a84u, 0x5ee7e413u, 0xb8f01a56u,
        0xdd848dbdu, 0x241873f8u, 0x2319a6f7u, 0x8b61d7eau, 0x62482641u, 0xb5afcaacu, 0x4be8c61bu, 0x2ed2c4beu, 0xce14a505u, 0x0ab852a0u, 0x4a56e57fu, 0x0bb034d2u, 0x31ef4e09u, 0xbd8e7fd4u, 0x1f4de923u, 0xa2b2bc26u,
        0x162fa54du, 0x7d3c0648u, 0x2003f507u, 0x5df22ebau, 0x10836ed1u, 0x43abd9fcu, 0x6e9f6d2bu, 0x0939a08eu, 0x5832ae95u, 0xf51e2ef0u, 0x4b1af58fu, 0xc59b65a2u, 0x1ca3a899u, 0x5cdc7924u, 0xa0697233u, 0x8c4511f6u,
    };
    uint32_t acc = 0x960c14f6u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 30) & 255]);
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
    case 0: acc = heavy_round(acc, 0x23ff87edu); break;
    case 1: acc = heavy_round(acc, 0x26b64868u); break;
    case 2: acc = heavy_round(acc, 0xe6b210a7u); break;
    case 3: acc = heavy_round(acc, 0x866b55dau); break;
    case 4: acc = heavy_round(acc, 0x36612b71u); break;
    case 5: acc = heavy_round(acc, 0xf4b62e1cu); break;
    case 6: acc = heavy_round(acc, 0xc0ca72cbu); break;
    case 7: acc = heavy_round(acc, 0xe646a9aeu); break;
    case 8: acc = heavy_round(acc, 0xa79ee535u); break;
    case 9: acc = heavy_round(acc, 0x7100b510u); break;
    case 10: acc = heavy_round(acc, 0xf02c852fu); break;
    case 11: acc = heavy_round(acc, 0x2d5970c2u); break;
    case 12: acc = heavy_round(acc, 0x2fd8f939u); break;
    case 13: acc = heavy_round(acc, 0x74515144u); break;
    case 14: acc = heavy_round(acc, 0x7a952bd3u); break;
    case 15: acc = heavy_round(acc, 0x2d133f16u); break;
    case 16: acc = heavy_round(acc, 0x5ab1eb7du); break;
    case 17: acc = heavy_round(acc, 0xba80b6b8u); break;
    case 18: acc = heavy_round(acc, 0xd5bd8ab7u); break;
    case 19: acc = heavy_round(acc, 0x2832e8aau); break;
    case 20: acc = heavy_round(acc, 0x48528001u); break;
    case 21: acc = heavy_round(acc, 0x47b8d96cu); break;
    case 22: acc = heavy_round(acc, 0xc2ff05dbu); break;
    case 23: acc = heavy_round(acc, 0x521a817eu); break;
    case 24: acc = heavy_round(acc, 0x9cadbac5u); break;
    case 25: acc = heavy_round(acc, 0xa6e8ed60u); break;
    case 26: acc = heavy_round(acc, 0xb337413fu); break;
    case 27: acc = heavy_round(acc, 0xb9635d92u); break;
    case 28: acc = heavy_round(acc, 0x6104dfc9u); break;
    case 29: acc = heavy_round(acc, 0xf5796694u); break;
    case 30: acc = heavy_round(acc, 0x16ec20e3u); break;
    case 31: acc = heavy_round(acc, 0xb1b210e6u); break;
    case 32: acc = heavy_round(acc, 0xdbab730du); break;
    case 33: acc = heavy_round(acc, 0xf03ff908u); break;
    case 34: acc = heavy_round(acc, 0x3eafc8c7u); break;
    case 35: acc = heavy_round(acc, 0x10ca6f7au); break;
    case 36: acc = heavy_round(acc, 0xa20b3891u); break;
    case 37: acc = heavy_round(acc, 0x75b398bcu); break;
    case 38: acc = heavy_round(acc, 0xafc49cebu); break;
    case 39: acc = heavy_round(acc, 0xd2e38d4eu); break;
    case 40: acc = heavy_round(acc, 0x68e83455u); break;
    case 41: acc = heavy_round(acc, 0x316079b0u); break;
    case 42: acc = heavy_round(acc, 0x1101414fu); break;
    case 43: acc = heavy_round(acc, 0xfa3bbe62u); break;
    case 44: acc = heavy_round(acc, 0x56e4aa59u); break;
    case 45: acc = heavy_round(acc, 0x649c0fe4u); break;
    case 46: acc = heavy_round(acc, 0x13f499f3u); break;
    case 47: acc = heavy_round(acc, 0xbdec96b6u); break;
    case 48: acc = heavy_round(acc, 0xdd451e9du); break;
    case 49: acc = heavy_round(acc, 0x00790f58u); break;
    case 50: acc = heavy_round(acc, 0xfe49cad7u); break;
    case 51: acc = heavy_round(acc, 0x5bfeea4au); break;
    case 52: acc = heavy_round(acc, 0x5af45521u); break;
    case 53: acc = heavy_round(acc, 0x84fb6c0cu); break;
    case 54: acc = heavy_round(acc, 0xb76c37fbu); break;
    case 55: acc = heavy_round(acc, 0x22becd1eu); break;
    case 56: acc = heavy_round(acc, 0x0dc751e5u); break;
    case 57: acc = heavy_round(acc, 0x598c5a00u); break;
    case 58: acc = heavy_round(acc, 0x7e6b855fu); break;
    case 59: acc = heavy_round(acc, 0x854f9332u); break;
    case 60: acc = heavy_round(acc, 0x160158e9u); break;
    case 61: acc = heavy_round(acc, 0x92ae4d34u); break;
    case 62: acc = heavy_round(acc, 0xac1f9703u); break;
    case 63: acc = heavy_round(acc, 0x4f7fd086u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

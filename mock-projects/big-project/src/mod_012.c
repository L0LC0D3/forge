#include "heavy.h"
#include "mods.h"

int mod_012(int x)
{
    static const uint32_t local[256] = {
        0x8ca935f7u, 0x11a61aeau, 0xf1718d41u, 0x88d405acu, 0x3741c51bu, 0x7ef1b7beu, 0xef78fc05u, 0x367abda0u, 0x6cd8547fu, 0x357cd7d2u, 0xc5459509u, 0x883a1ad4u, 0xecc6c823u, 0x01b00f26u, 0xf31edc4du, 0x644bd148u,
        0xf9b34407u, 0xfc5331bau, 0x0da295d1u, 0x56cad4fcu, 0x42342c2bu, 0xb2e1538eu, 0x4208c595u, 0x612759f0u, 0xa1b4248fu, 0xcb1cc8a2u, 0x9ca7af99u, 0x26dad424u, 0x1d961133u, 0x35e324f6u, 0x15b7d7ddu, 0xab5bf798u,
        0xc2991617u, 0x45413c8au, 0xa8580261u, 0x1552b84cu, 0x467c973bu, 0x39c7235eu, 0xf7d13325u, 0x2b0c4a40u, 0x91e4389fu, 0x1b1c2d72u, 0x471aae29u, 0x7c2f2174u, 0x967bde43u, 0xefd2eec6u, 0xc69df76du, 0x6caef1e8u,
        0x155bac27u, 0xa87d3b5au, 0x7c3ad2f1u, 0x9500af9cu, 0x39ac064bu, 0x5200272eu, 0x498b44b5u, 0x2b8e8e90u, 0x2b8990afu, 0x63280642u, 0xd46790b9u, 0x6b6c02c4u, 0xff292f53u, 0x397c6c96u, 0x55aa3afdu, 0x2c49c038u,
        0xa43c0637u, 0x19542e2au, 0x92340781u, 0x1fa9baecu, 0xb993795bu, 0x45295efeu, 0x822ffa45u, 0x675326e0u, 0x69052cbfu, 0x002d5312u, 0x6a975749u, 0x79067814u, 0xaf8f0463u, 0x901c9e66u, 0x6cf5a28du, 0x83716288u,
        0xb5bb2447u, 0x925314fau, 0xd16ca011u, 0xc862da3cu, 0x1c43f06bu, 0x381fcaceu, 0x8ef853d5u, 0xa03f1330u, 0x60f80ccfu, 0x3e5913e2u, 0xd5f301d9u, 0x1ab38164u, 0xbfde5d73u, 0xb4308436u, 0xa0d92e1du, 0x70aad8d8u,
        0x349a0657u, 0xe546efcau, 0x8f4d9ca1u, 0xbb810d8cu, 0x800e6b7bu, 0xfb006a9eu, 0x8f5d5165u, 0xa5775380u, 0x564330dfu, 0x291848b2u, 0x19039069u, 0x07681eb4u, 0x18883a83u, 0x79751e06u, 0xffedddadu, 0xa7bb2328u,
        0xbfd9ac67u, 0x8b3cbe9au, 0x1f7ffd31u, 0x8e9954dcu, 0xdb83ea8bu, 0xd9283e6eu, 0x6517f2f5u, 0xa360e7d0u, 0xc80798efu, 0x5b17f182u, 0xfc9202f9u, 0x87595004u, 0x823d9b93u, 0x96e76bd6u, 0xa30cb13du, 0xe1a74178u,
        0xbabb1677u, 0x7481816au, 0x63ecc1c1u, 0x9080b02cu, 0x0d756d9bu, 0x6934463eu, 0x44213885u, 0x73a0d020u, 0x81a644ffu, 0xce450e52u, 0x9fa75989u, 0xc3fc1554u, 0xb5ef80a3u, 0x76c46da6u, 0x3d4ea8cdu, 0x2cb433c8u,
        0x5cbf4487u, 0xd8a2383au, 0x5cbcea51u, 0x194c1f7cu, 0xecf3f4abu, 0x5d01820eu, 0x42b22215u, 0xed1c0c70u, 0xaac0350fu, 0xabcc9f22u, 0x078c9419u, 0x18056ea4u, 0x6ccee9b3u, 0x06892376u, 0xac0cc45du, 0x3c66fa18u,
        0xc1a73697u, 0x066be30au, 0xb85976e1u, 0xda50a2ccu, 0x59507fbbu, 0x51acf1deu, 0xe943afa5u, 0x33f79cc0u, 0xd736691fu, 0x1c1ba3f2u, 0xafcab2a9u, 0x5f6a5bf4u, 0x704cd6c3u, 0x86f28d46u, 0x86e003edu, 0xb9849468u,
        0xf973eca7u, 0x33eb81dau, 0x636b6771u, 0x2e233a1cu, 0x4a1c0ecbu, 0x9f9395aeu, 0xc28ee135u, 0x09988110u, 0x1729e12fu, 0x16df1cc2u, 0x1a2ab539u, 0x475fdd44u, 0xaa1a47d3u, 0x5bfdab16u, 0xafa1677du, 0x921202b8u,
        0x186666b7u, 0x4e6e14aau, 0x18dbbc01u, 0x6898e56cu, 0xdf27a1dbu, 0x2a526d7eu, 0xeb8cb6c5u, 0x1ca3b960u, 0x06fb9d3fu, 0x33040992u, 0x5eb59bc9u, 0x9e5af294u, 0x34283ce3u, 0xdce77ce6u, 0xe269ef0du, 0x49544508u,
        0x46ffa4c7u, 0xca809b7au, 0xf1d37491u, 0x26c6a4bcu, 0x708438ebu, 0x30c6794eu, 0xa3763055u, 0x58fe45b0u, 0xdf4c9d4fu, 0x76b76a62u, 0xbbb46659u, 0xa4109be4u, 0x68a7b5f3u, 0x242d02b6u, 0x45929a9du, 0x47d05b58u,
        0xd200a6d7u, 0x73f0164au, 0xf5bb9121u, 0x9f01780cu, 0x9e82d3fbu, 0x1d0cb91eu, 0xdbc44de5u, 0x37cd2600u, 0x84fde15fu, 0x27663f32u, 0x25b014e9u, 0x5975d934u, 0xf209b303u, 0xdf8b3c86u, 0xf9b46a2du, 0x2b4b45a8u,
        0x3a6a6ce7u, 0x3dc9851au, 0xaa3d11b1u, 0xf0de5f5cu, 0x61b4730bu, 0x54822ceeu, 0xc8300f75u, 0x0f755a50u, 0x9930696fu, 0x99bd8802u, 0xd771a779u, 0xd0bfaa84u, 0xdaff3413u, 0x1fff2a56u, 0xa9a85dbdu, 0x16ca03f8u,
    };
    uint32_t acc = 0xd8b97ef8u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 12) & 255]);
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
    case 0: acc = heavy_round(acc, 0xcffeac87u); break;
    case 1: acc = heavy_round(acc, 0x1e4a803au); break;
    case 2: acc = heavy_round(acc, 0xfaf89251u); break;
    case 3: acc = heavy_round(acc, 0x4f43a77cu); break;
    case 4: acc = heavy_round(acc, 0x92b5dcabu); break;
    case 5: acc = heavy_round(acc, 0xb24a4a0eu); break;
    case 6: acc = heavy_round(acc, 0x1f144a15u); break;
    case 7: acc = heavy_round(acc, 0x22081470u); break;
    case 8: acc = heavy_round(acc, 0x2dec9d0fu); break;
    case 9: acc = heavy_round(acc, 0x2e7de722u); break;
    case 10: acc = heavy_round(acc, 0x553d3c19u); break;
    case 11: acc = heavy_round(acc, 0xd4edf6a4u); break;
    case 12: acc = heavy_round(acc, 0xf2cdd1b3u); break;
    case 13: acc = heavy_round(acc, 0x0ceaeb76u); break;
    case 14: acc = heavy_round(acc, 0x7cb3ec5du); break;
    case 15: acc = heavy_round(acc, 0x56d40218u); break;
    case 16: acc = heavy_round(acc, 0x52609e97u); break;
    case 17: acc = heavy_round(acc, 0x67462b0au); break;
    case 18: acc = heavy_round(acc, 0xa41f1ee1u); break;
    case 19: acc = heavy_round(acc, 0xfc4a2accu); break;
    case 20: acc = heavy_round(acc, 0xc72c67bbu); break;
    case 21: acc = heavy_round(acc, 0x2c47b9deu); break;
    case 22: acc = heavy_round(acc, 0x36cfd7a5u); break;
    case 23: acc = heavy_round(acc, 0xe405a4c0u); break;
    case 24: acc = heavy_round(acc, 0x271cd11fu); break;
    case 25: acc = heavy_round(acc, 0x203eebf2u); break;
    case 26: acc = heavy_round(acc, 0xfc455aa9u); break;
    case 27: acc = heavy_round(acc, 0x8894e3f4u); break;
    case 28: acc = heavy_round(acc, 0xc1a5bec3u); break;
    case 29: acc = heavy_round(acc, 0xbce65546u); break;
    case 30: acc = heavy_round(acc, 0xedf12bedu); break;
    case 31: acc = heavy_round(acc, 0xb3539c68u); break;
    case 32: acc = heavy_round(acc, 0xee2754a7u); break;
    case 33: acc = heavy_round(acc, 0x4477c9dau); break;
    case 34: acc = heavy_round(acc, 0x273b0f71u); break;
    case 35: acc = heavy_round(acc, 0x449ec21cu); break;
    case 36: acc = heavy_round(acc, 0xee91f6cbu); break;
    case 37: acc = heavy_round(acc, 0x9c005daeu); break;
    case 38: acc = heavy_round(acc, 0x73c50935u); break;
    case 39: acc = heavy_round(acc, 0x85488910u); break;
    case 40: acc = heavy_round(acc, 0x4a4a492fu); break;
    case 41: acc = heavy_round(acc, 0xc0f464c2u); break;
    case 42: acc = heavy_round(acc, 0x3fef5d39u); break;
    case 43: acc = heavy_round(acc, 0xf54c6544u); break;
    case 44: acc = heavy_round(acc, 0x054d2fd3u); break;
    case 45: acc = heavy_round(acc, 0xee037316u); break;
    case 46: acc = heavy_round(acc, 0xef9c8f7du); break;
    case 47: acc = heavy_round(acc, 0xcbc30ab8u); break;
    case 48: acc = heavy_round(acc, 0x5793ceb7u); break;
    case 49: acc = heavy_round(acc, 0xc32c5caau); break;
    case 50: acc = heavy_round(acc, 0xdf356401u); break;
    case 51: acc = heavy_round(acc, 0x9c166d6cu); break;
    case 52: acc = heavy_round(acc, 0xc8b789dbu); break;
    case 53: acc = heavy_round(acc, 0x0511357eu); break;
    case 54: acc = heavy_round(acc, 0x92ecdec5u); break;
    case 55: acc = heavy_round(acc, 0xd475c160u); break;
    case 56: acc = heavy_round(acc, 0xd3d6053fu); break;
    case 57: acc = heavy_round(acc, 0xc78b5192u); break;
    case 58: acc = heavy_round(acc, 0xd84443c9u); break;
    case 59: acc = heavy_round(acc, 0x09897a94u); break;
    case 60: acc = heavy_round(acc, 0x77b524e3u); break;
    case 61: acc = heavy_round(acc, 0x177f44e6u); break;
    case 62: acc = heavy_round(acc, 0xddcf170du); break;
    case 63: acc = heavy_round(acc, 0x43674d08u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

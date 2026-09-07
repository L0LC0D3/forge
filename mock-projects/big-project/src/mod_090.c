#include "heavy.h"
#include "mods.h"

int mod_090(int x)
{
    static const uint32_t local[256] = {
        0x8a7d16f1u, 0x5976239cu, 0x53daea4bu, 0x9939bb2eu, 0x4c6fc8b5u, 0x41c14290u, 0x13d4b4afu, 0xa350da42u, 0x0ef254b9u, 0xd28ff6c4u, 0x63349353u, 0x9be88096u, 0x591f3efdu, 0x5cd2f438u, 0xd9ebaa37u, 0xd297822au,
        0x02174b81u, 0xff4c2eecu, 0x230b5d5bu, 0xa917f2feu, 0x18457e45u, 0x7d02dae0u, 0x18a950bfu, 0xd5db2712u, 0x3ae31b49u, 0x60f76c14u, 0x4c036863u, 0xa5ddb266u, 0x69bba68du, 0xa3179688u, 0x9de3c847u, 0x91bb68fau,
        0x8f30e411u, 0x42724e3cu, 0xcb44d46bu, 0xba035eceu, 0x487ed7d5u, 0x88abc730u, 0x123530cfu, 0x1ecbe7e2u, 0xb03fc5d9u, 0xeab17564u, 0x52fbc173u, 0xa6869836u, 0x2f30321du, 0xbaae0cd8u, 0x517baa57u, 0x481443cau,
        0x9732e0a1u, 0x1f3d818cu, 0xfad84f7bu, 0xec18fe9eu, 0x0c94d565u, 0x03e10780u, 0xd35954dfu, 0xd9901cb2u, 0x81915469u, 0xf6b312b4u, 0xf08e9e83u, 0xc1a03206u, 0xc815e1adu, 0x275b5728u, 0x23b45067u, 0xbeaf129au,
        0x7dc64131u, 0xfb42c8dcu, 0x3856ce8bu, 0xdab5d26eu, 0x564076f5u, 0xeb079bd0u, 0x6b36bcefu, 0xf0d4c582u, 0x87a0c6f9u, 0x9d314404u, 0x7d6cff93u, 0xfe277fd6u, 0x5d45b53du, 0x72247578u, 0x07ceba77u, 0x35d8d56au,
        0x34d405c1u, 0xf557242cu, 0xf291519bu, 0x6c76da3eu, 0x697abc85u, 0xe7c48420u, 0x352e68ffu, 0xae86e252u, 0xf1771d89u, 0xd7a10954u, 0x4287e4a3u, 0x165981a6u, 0xb1d8accdu, 0x794e67c8u, 0xc54be887u, 0x351e8c3au,
        0xcc852e51u, 0x358f937cu, 0x9098d8abu, 0xa339160eu, 0x6c7ca615u, 0xa0fcc070u, 0xe8e1590fu, 0x8bd37322u, 0xd45d5819u, 0xd0b762a4u, 0x89104db3u, 0x47b33776u, 0xb327c85du, 0xc05e2e18u, 0x07ecda97u, 0x5b4d370au,
        0x0342bae1u, 0x3d4116ccu, 0x81be63bbu, 0x6c1985deu, 0xf7bf33a5u, 0x0ad550c0u, 0xaa308d1fu, 0x012777f2u, 0xbbdc76a9u, 0x34694ff4u, 0xaa773ac3u, 0x22f1a146u, 0x08cc07edu, 0xc018c868u, 0x6fb290a7u, 0x2e71d5dau,
        0xd5b5ab71u, 0x3700ae1cu, 0x4d92f2cbu, 0x6f7529aeu, 0xa5fb6535u, 0xb6b33510u, 0x193d052fu, 0x562ff0c2u, 0x39bd7939u, 0x7febd144u, 0x206dabd3u, 0x5c11bf16u, 0xa49e6b7du, 0x368336b8u, 0xa0de0ab7u, 0xebd968aau,
        0x0ec70001u, 0x46a3596cu, 0xa3e785dbu, 0xe0e9017eu, 0xa42a3ac5u, 0x233b6d60u, 0x6267c13fu, 0x71d9dd92u, 0x76095fc9u, 0x51b3e694u, 0x94e4a0e3u, 0x9a5090e6u, 0x52b7f30du, 0x76e27908u, 0x53f048c7u, 0x5810ef7au,
        0xd79fb891u, 0xd93e18bcu, 0x6ccd1cebu, 0x4f520d4eu, 0x4184b455u, 0x0c52f9b0u, 0x4e51c14fu, 0xaa523e62u, 0xbf092a59u, 0xb9768fe4u, 0xf20d19f3u, 0x482b16b6u, 0x49719e9du, 0xb9bb8f58u, 0x65aa4ad7u, 0x8ee56a4au,
        0x47a8d521u, 0xf525ec0cu, 0xd894b7fbu, 0x74cd4d1eu, 0x7f83d1e5u, 0xbb1eda00u, 0x51dc055fu, 0x95061332u, 0x1945d8e9u, 0x8828cd34u, 0x72581703u, 0x635e5086u, 0xb9646e2du, 0x6cd379a8u, 0xe70d10e7u, 0xd363d91au,
        0xf48b55b1u, 0x89efd35cu, 0x6fcf570bu, 0x06b7c0eeu, 0xa1e09375u, 0x56040e50u, 0x9e278d6fu, 0xd6a25c02u, 0xcf886b79u, 0x9fff9e84u, 0xb0769813u, 0x4ce73e56u, 0x5d6961bdu, 0x832f37f8u, 0x2d599af7u, 0x5fd93beau,
        0x82303a41u, 0xc070ceacu, 0x234dfa1bu, 0x85ae68beu, 0xbe93f905u, 0x30a796a0u, 0x3095597fu, 0xf31418d2u, 0x02d9e209u, 0x447003d4u, 0xb7599d23u, 0x9902e026u, 0x0a99794du, 0xc513ca48u, 0xe210e907u, 0x35d292bau,
        0x32c082d1u, 0x4abdddfcu, 0x5c21a12bu, 0x0d8e448eu, 0x4dd70295u, 0x1bee72f0u, 0xe2c6698fu, 0x1d8849a2u, 0x3a833c99u, 0x6a2efd24u, 0x12322633u, 0xdf2e35f6u, 0x404db4ddu, 0x20063098u, 0x12f3fb17u, 0xee1cdd8au,
        0x76a52f61u, 0xb42c014cu, 0x0b9b4c3bu, 0x2574545eu, 0xba22b025u, 0xb5fda340u, 0x7a9bbd9fu, 0x086bee72u, 0xf40d7b29u, 0x07318a74u, 0xdc713343u, 0x8a263fc6u, 0xb81f146du, 0xf6cb6ae8u, 0x4203d127u, 0x88c51c5au,
    };
    uint32_t acc = 0xe8db8f5au ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 90) & 255]);
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
    case 0: acc = heavy_round(acc, 0x58031f79u); break;
    case 1: acc = heavy_round(acc, 0x05f2c284u); break;
    case 2: acc = heavy_round(acc, 0x42276c13u); break;
    case 3: acc = heavy_round(acc, 0xdb5a0256u); break;
    case 4: acc = heavy_round(acc, 0x775555bdu); break;
    case 5: acc = heavy_round(acc, 0xab629bf8u); break;
    case 6: acc = heavy_round(acc, 0x75cdaef7u); break;
    case 7: acc = heavy_round(acc, 0x41b63feau); break;
    case 8: acc = heavy_round(acc, 0x6e016e41u); break;
    case 9: acc = heavy_round(acc, 0x28c872acu); break;
    case 10: acc = heavy_round(acc, 0x5f194e1bu); break;
    case 11: acc = heavy_round(acc, 0xc679acbeu); break;
    case 12: acc = heavy_round(acc, 0xa9fe6d05u); break;
    case 13: acc = heavy_round(acc, 0xe3477aa0u); break;
    case 14: acc = heavy_round(acc, 0x3b8bed7fu); break;
    case 15: acc = heavy_round(acc, 0x34919cd2u); break;
    case 16: acc = heavy_round(acc, 0x3cd19609u); break;
    case 17: acc = heavy_round(acc, 0x7bbc27d4u); break;
    case 18: acc = heavy_round(acc, 0x608f7123u); break;
    case 19: acc = heavy_round(acc, 0x5736a426u); break;
    case 20: acc = heavy_round(acc, 0x77526d4du); break;
    case 21: acc = heavy_round(acc, 0xcfb02e48u); break;
    case 22: acc = heavy_round(acc, 0x7fd9fd07u); break;
    case 23: acc = heavy_round(acc, 0x4b0096bau); break;
    case 24: acc = heavy_round(acc, 0xffaeb6d1u); break;
    case 25: acc = heavy_round(acc, 0xaf8e81fcu); break;
    case 26: acc = heavy_round(acc, 0xa011f52bu); break;
    case 27: acc = heavy_round(acc, 0x763a888eu); break;
    case 28: acc = heavy_round(acc, 0xe5ae7695u); break;
    case 29: acc = heavy_round(acc, 0xfe1756f0u); break;
    case 30: acc = heavy_round(acc, 0xedb1fd8fu); break;
    case 31: acc = heavy_round(acc, 0xfc76cda2u); break;
    case 32: acc = heavy_round(acc, 0x7937f099u); break;
    case 33: acc = heavy_round(acc, 0x2d142124u); break;
    case 34: acc = heavy_round(acc, 0xc82cfa33u); break;
    case 35: acc = heavy_round(acc, 0xc162f9f6u); break;
    case 36: acc = heavy_round(acc, 0xe713a8ddu); break;
    case 37: acc = heavy_round(acc, 0x4b4b9498u); break;
    case 38: acc = heavy_round(acc, 0xaf520f17u); break;
    case 39: acc = heavy_round(acc, 0x4edbe18au); break;
    case 40: acc = heavy_round(acc, 0xdff06361u); break;
    case 41: acc = heavy_round(acc, 0x17b5a54cu); break;
    case 42: acc = heavy_round(acc, 0xf4f0a03bu); break;
    case 43: acc = heavy_round(acc, 0x3241985eu); break;
    case 44: acc = heavy_round(acc, 0xcda72425u); break;
    case 45: acc = heavy_round(acc, 0xcdef8740u); break;
    case 46: acc = heavy_round(acc, 0x56bc519fu); break;
    case 47: acc = heavy_round(acc, 0xa50b7272u); break;
    case 48: acc = heavy_round(acc, 0x5abf2f29u); break;
    case 49: acc = heavy_round(acc, 0x9fefae74u); break;
    case 50: acc = heavy_round(acc, 0xe4710743u); break;
    case 51: acc = heavy_round(acc, 0x949c03c6u); break;
    case 52: acc = heavy_round(acc, 0x5032086du); break;
    case 53: acc = heavy_round(acc, 0x10f9cee8u); break;
    case 54: acc = heavy_round(acc, 0xd636e527u); break;
    case 55: acc = heavy_round(acc, 0x5d55205au); break;
    case 56: acc = heavy_round(acc, 0x0d6f73f1u); break;
    case 57: acc = heavy_round(acc, 0xa5d2dc9cu); break;
    case 58: acc = heavy_round(acc, 0x37464f4bu); break;
    case 59: acc = heavy_round(acc, 0xccebdc2eu); break;
    case 60: acc = heavy_round(acc, 0x1ea175b5u); break;
    case 61: acc = heavy_round(acc, 0x9e350b90u); break;
    case 62: acc = heavy_round(acc, 0x88cbe9afu); break;
    case 63: acc = heavy_round(acc, 0x3ffc8b42u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_044(int x)
{
    static const uint32_t local[256] = {
        0x769b5217u, 0x2946488au, 0x6b619e61u, 0x0cf7a44cu, 0x9be4933bu, 0x9a76ef5eu, 0xd8068f25u, 0xcc69f640u, 0xe22df49fu, 0xebc2b972u, 0xe757ca29u, 0xb4718d74u, 0x74e35a43u, 0x927c3ac6u, 0xe97ed36du, 0x45c21de8u,
        0x0adce827u, 0x79f5475au, 0x201b6ef1u, 0xa1909b9cu, 0x4103024bu, 0xf5d2f32eu, 0x8487a0b5u, 0xb3073a90u, 0xed324cafu, 0xcfa19242u, 0x705bacb9u, 0x55f96ec4u, 0xcd5fab53u, 0x83a8b896u, 0x2c3216fdu, 0xaed7ec38u,
        0x36fc4237u, 0x00ff3a2au, 0xa8aba381u, 0x27e4a6ecu, 0xaa99755bu, 0x80df2afeu, 0xe5b35645u, 0xc7a6d2e0u, 0x6fcce8bfu, 0x4939df12u, 0xcc027349u, 0xd49ee414u, 0x9d548063u, 0x6e8bea66u, 0x7ce47e8du, 0xfa3a8e88u,
        0x317a6047u, 0xe8f120fau, 0x5c3b3c11u, 0x6308c63cu, 0x1eb8ec6bu, 0x907896ceu, 0x58c2afd5u, 0x7c2dbf30u, 0x709ec8cfu, 0xd4b89fe2u, 0x36951dd9u, 0x5616ed64u, 0xecf2d973u, 0x43a2d036u, 0xdfef0a1du, 0xd66f04d8u,
        0xd5184257u, 0x3397fbcau, 0x003338a1u, 0x2f51f98cu, 0xabb2677bu, 0x24bc369eu, 0x6d2ead65u, 0x4fc0ff80u, 0x2288ecdfu, 0xad8ad4b2u, 0x229cac69u, 0x41568ab4u, 0x94abb683u, 0x06aa6a06u, 0xd3eab9adu, 0xa73a4f28u,
        0xb0d6e867u, 0x8a00ca9au, 0x583c9931u, 0xd25540dcu, 0x3816e68bu, 0xb9070a6eu, 0x74b04ef5u, 0x1ec593d0u, 0xf4ac54efu, 0x9e5d7d82u, 0xc8e21ef9u, 0x8e92bc04u, 0x4d301793u, 0x9e9fb7d6u, 0xe1b08d3du, 0xd5a16d78u,
        0x17f75277u, 0x0c788d6au, 0xb6405dc1u, 0x4ae79c2cu, 0x92b7699bu, 0x13f6123eu, 0x13409485u, 0x72e07c20u, 0xa26a00ffu, 0xd11d9a52u, 0xb86e7589u, 0x17408154u, 0xbf70fca3u, 0xa5bfb9a6u, 0x2c5984cdu, 0x1fe95fc8u,
        0x31fa8087u, 0x228c443au, 0x8a678651u, 0xa11e0b7cu, 0x82a4f0abu, 0x17664e0eu, 0xcf187e15u, 0xd2f6b870u, 0x4362f10fu, 0x9ef82b22u, 0x668ab019u, 0xe614daa4u, 0x949f65b3u, 0x39876f76u, 0x013ea05du, 0xe9972618u,
        0x0aa17297u, 0x4b08ef0au, 0xf31b12e1u, 0x364d8eccu, 0xd7307bbbu, 0x9074bddeu, 0xa0b10ba5u, 0x132d48c0u, 0x5b78251fu, 0x605a2ff2u, 0xbebfcea9u, 0x8704c7f4u, 0x862c52c3u, 0xcab3d946u, 0x67f8dfedu, 0x8b6fc068u,
        0xa1ed28a7u, 0xebfb8ddau, 0x4d040371u, 0x150b261cu, 0x77eb0acbu, 0x077e61aeu, 0x82c33d35u, 0xa4e92d10u, 0xeaca9d2fu, 0x3cf0a8c2u, 0xb2d6d139u, 0x57454944u, 0x6dc8c3d3u, 0xed41f716u, 0xb261437du, 0xa3782eb8u,
        0xfc1ea2b7u, 0x22b120aau, 0xc30b5801u, 0x412bd16cu, 0x74a59ddbu, 0x9020397eu, 0x024812c5u, 0xe6cf6560u, 0x7dbb593fu, 0xfba89592u, 0xcad8b7c9u, 0xd54b5e94u, 0x5565b8e3u, 0x286ec8e6u, 0x0c90cb0du, 0x64f57108u,
        0x31b6e0c7u, 0x93b6a77au, 0xde5a1091u, 0x07c490bcu, 0x157134ebu, 0x9937454eu, 0xce788c55u, 0x74c4f1b0u, 0x3ceb594fu, 0xd2aef662u, 0xb50e8259u, 0xf0cc07e4u, 0x873431f3u, 0xc6b74eb6u, 0x0ce0769du, 0xe86c8758u,
        0x7f76e2d7u, 0x3ad9224au, 0x16592d21u, 0x4f2a640cu, 0xea9ecffbu, 0xbce0851eu, 0x48cda9e5u, 0x77eed200u, 0xfd3b9d5fu, 0x3770cb32u, 0xd60130e9u, 0x5abc4534u, 0x9da52f03u, 0xa5d88886u, 0x43e9462du, 0x7ba271a8u,
        0x565fa8e7u, 0x3b25911au, 0x60b1adb1u, 0xe6f24b5cu, 0xdcbf6f0bu, 0x9078f8eeu, 0x15006b75u, 0xf6b20650u, 0x4fcd256fu, 0xae9b1402u, 0xd879c379u, 0xd5511684u, 0x9369b013u, 0x06cf7656u, 0xcc8439bdu, 0xf19c2ff8u,
        0x6bb232f7u, 0xaee8f3eau, 0xc14c9241u, 0xd7f146acu, 0x3ca4121bu, 0x749da0beu, 0xa909d105u, 0x24b38ea0u, 0x9200f17fu, 0x9c1ad0d2u, 0x3d813a09u, 0x83ff7bd4u, 0xd372b523u, 0x5dd91826u, 0xdbca514du, 0xf29ec248u,
        0xc8ef8107u, 0x77b04abau, 0xda52dad1u, 0xb43c55fcu, 0xd35db92bu, 0x652b7c8eu, 0xdd22da95u, 0xb2d86af0u, 0xfd78018fu, 0x131d01a2u, 0xec609499u, 0x3b7c7524u, 0x48f13e33u, 0x22726df6u, 0x51148cddu, 0x4c2f2898u,
    };
    uint32_t acc = 0x75b42398u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 44) & 255]);
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
    case 0: acc = heavy_round(acc, 0xfe65dc67u); break;
    case 1: acc = heavy_round(acc, 0x437b2e9au); break;
    case 2: acc = heavy_round(acc, 0x4b4bad31u); break;
    case 3: acc = heavy_round(acc, 0x201144dcu); break;
    case 4: acc = heavy_round(acc, 0x783b1a8bu); break;
    case 5: acc = heavy_round(acc, 0x7b95ae6eu); break;
    case 6: acc = heavy_round(acc, 0x2f46a2f5u); break;
    case 7: acc = heavy_round(acc, 0xb1dfd7d0u); break;
    case 8: acc = heavy_round(acc, 0x8819c8efu); break;
    case 9: acc = heavy_round(acc, 0x0b246182u); break;
    case 10: acc = heavy_round(acc, 0xd1d3b2f9u); break;
    case 11: acc = heavy_round(acc, 0xb7cf4004u); break;
    case 12: acc = heavy_round(acc, 0x65dacb93u); break;
    case 13: acc = heavy_round(acc, 0x7702dbd6u); break;
    case 14: acc = heavy_round(acc, 0xe311613du); break;
    case 15: acc = heavy_round(acc, 0x30043178u); break;
    case 16: acc = heavy_round(acc, 0x2d134677u); break;
    case 17: acc = heavy_round(acc, 0x161bf16au); break;
    case 18: acc = heavy_round(acc, 0x116471c1u); break;
    case 19: acc = heavy_round(acc, 0x3fb4a02cu); break;
    case 20: acc = heavy_round(acc, 0x14b89d9bu); break;
    case 21: acc = heavy_round(acc, 0x3cbdb63eu); break;
    case 22: acc = heavy_round(acc, 0xb4bbe885u); break;
    case 23: acc = heavy_round(acc, 0xfd9bc020u); break;
    case 24: acc = heavy_round(acc, 0xef0474ffu); break;
    case 25: acc = heavy_round(acc, 0x932d7e52u); break;
    case 26: acc = heavy_round(acc, 0x2c150989u); break;
    case 27: acc = heavy_round(acc, 0xc9ae0554u); break;
    case 28: acc = heavy_round(acc, 0x5598b0a3u); break;
    case 29: acc = heavy_round(acc, 0xab7bdda6u); break;
    case 30: acc = heavy_round(acc, 0xf13f58cdu); break;
    case 31: acc = heavy_round(acc, 0x660d23c8u); break;
    case 32: acc = heavy_round(acc, 0x25e37487u); break;
    case 33: acc = heavy_round(acc, 0x2a98a83au); break;
    case 34: acc = heavy_round(acc, 0xa6e09a51u); break;
    case 35: acc = heavy_round(acc, 0x453c0f7cu); break;
    case 36: acc = heavy_round(acc, 0x31c324abu); break;
    case 37: acc = heavy_round(acc, 0x18a6f20eu); break;
    case 38: acc = heavy_round(acc, 0xa4b8d215u); break;
    case 39: acc = heavy_round(acc, 0xc192fc70u); break;
    case 40: acc = heavy_round(acc, 0x486a650fu); break;
    case 41: acc = heavy_round(acc, 0x2c910f22u); break;
    case 42: acc = heavy_round(acc, 0xc6264419u); break;
    case 43: acc = heavy_round(acc, 0x31f35ea4u); break;
    case 44: acc = heavy_round(acc, 0xfb8419b3u); break;
    case 45: acc = heavy_round(acc, 0x26dc9376u); break;
    case 46: acc = heavy_round(acc, 0x7ee9745du); break;
    case 47: acc = heavy_round(acc, 0x0fbbea18u); break;
    case 48: acc = heavy_round(acc, 0xc4976697u); break;
    case 49: acc = heavy_round(acc, 0x8fbe530au); break;
    case 50: acc = heavy_round(acc, 0x7a2926e1u); break;
    case 51: acc = heavy_round(acc, 0xa1fc92ccu); break;
    case 52: acc = heavy_round(acc, 0x6eabafbbu); break;
    case 53: acc = heavy_round(acc, 0x6c6e61deu); break;
    case 54: acc = heavy_round(acc, 0x47b65fa5u); break;
    case 55: acc = heavy_round(acc, 0xe1ea8cc0u); break;
    case 56: acc = heavy_round(acc, 0xe82c991fu); break;
    case 57: acc = heavy_round(acc, 0xbfbc13f2u); break;
    case 58: acc = heavy_round(acc, 0xdb9062a9u); break;
    case 59: acc = heavy_round(acc, 0x8c944bf4u); break;
    case 60: acc = heavy_round(acc, 0xe10e06c3u); break;
    case 61: acc = heavy_round(acc, 0xe9e1fd46u); break;
    case 62: acc = heavy_round(acc, 0xe3a8b3edu); break;
    case 63: acc = heavy_round(acc, 0x95d58468u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_037(int x)
{
    static const uint32_t local[256] = {
        0x030ab130u, 0xf44312cfu, 0x338c61e2u, 0x58a1f7d9u, 0x7999ff64u, 0xb5c6c373u, 0xbfa1b236u, 0xcbec841du, 0xbaea36d8u, 0x6745cc57u, 0x3ee3fdcau, 0x0ddb52a1u, 0x65374b8cu, 0xc903917bu, 0x1297589eu, 0x22db6765u,
        0x85a27180u, 0xd467b6dfu, 0x345716b2u, 0xcf480669u, 0x15e61cb4u, 0xd6222083u, 0xe1e9cc06u, 0xc92eb3adu, 0x9b4a0128u, 0xb88ef267u, 0x3c554c9au, 0xc4533331u, 0x5ad712dcu, 0x625a908bu, 0x6e32ac6eu, 0xdc7388f5u,
        0xd6cb85d0u, 0x4d659eefu, 0x2d423f82u, 0x21cbf8f9u, 0x894ece04u, 0xb9e90193u, 0xab3f99d6u, 0x4bdb073du, 0x10659f78u, 0x21d9dc77u, 0x49f58f6au, 0xd66577c1u, 0x3f25ee2cu, 0xd08d939bu, 0xa692343eu, 0x0cba4e85u,
        0xc82aee20u, 0xc29dcaffu, 0xd03adc52u, 0xc736cf89u, 0x75491354u, 0x320c66a3u, 0xbde01ba6u, 0xdf0a7ecdu, 0x208211c8u, 0x72a78a87u, 0x5751c63au, 0x9c3b2051u, 0xe238dd7cu, 0x02ad9aabu, 0xa592f00eu, 0xa1e8b815u,
        0x28a5aa70u, 0xf3b13b0fu, 0xfe6ded22u, 0x1cd18a19u, 0xac89eca4u, 0x0fbd4fb3u, 0x3f485176u, 0x38161a5du, 0x77245818u, 0x5eb8fc97u, 0x6b36f10au, 0x1c3d2ce1u, 0x6d64e0ccu, 0xf00ba5bbu, 0x4051dfdeu, 0xfc77c5a5u,
        0x1460bac0u, 0x0c80ef1fu, 0x984871f2u, 0xf62528a9u, 0x830659f4u, 0x346cbcc3u, 0xa8353b46u, 0xc696d9edu, 0xb5117268u, 0x8e0f32a7u, 0x73b20fdau, 0x9b149d71u, 0xb33ef81cu, 0xa838b4cbu, 0x072c03aeu, 0x7f207735u,
        0x44c11f10u, 0xb52de72fu, 0x4d776ac2u, 0x2cfaab39u, 0x1df35b44u, 0xa1cbadd3u, 0x94a3d916u, 0x4465bd7du, 0xc04e60b8u, 0xaceb2cb7u, 0x161022aau, 0x2baa7201u, 0x7f9c236cu, 0x6305c7dbu, 0x15be5b7eu, 0x1edbccc5u,
        0x606bd760u, 0x2219233fu, 0x6ce7d792u, 0x315b11c9u, 0xc3c5f094u, 0x89cb22e3u, 0x93d12ae6u, 0x459bc50du, 0x14202308u, 0x7bcdeac7u, 0x7ede297au, 0x3f27aa91u, 0xe79162bcu, 0x9083deebu, 0xe2e5e74eu, 0xf2e2c655u,
        0x4b45e3b0u, 0x23e3a34fu, 0xb4c6b862u, 0x998f5c59u, 0x2c3319e4u, 0x5e9c1bf3u, 0xf83a30b6u, 0xc891f09du, 0x110bb958u, 0xdf786cd7u, 0x31e9244au, 0x34f54721u, 0x9973b60cu, 0xe903f9fbu, 0x10bfa71eu, 0xc4ae63e5u,
        0x76744400u, 0x376e675fu, 0x22810d32u, 0xb2208ae9u, 0xd02fd734u, 0xe2af9903u, 0xa79bea86u, 0xc5e1402du, 0x4cd623a8u, 0xf0ebb2e7u, 0xda3e131au, 0xeabc47b1u, 0x2cd81d5cu, 0x7d17190bu, 0x3ca89aeeu, 0x9ff7a575u,
        0x305bf850u, 0x95da6f6fu, 0xc2c3d602u, 0x0dd79d79u, 0x39f12884u, 0x38b69a13u, 0xeaf35856u, 0xc062b3bdu, 0xe28461f8u, 0x0d68bcf7u, 0x1a29f5eau, 0x4c65ac41u, 0x729398acu, 0xc58e3c1bu, 0xcf3dc2beu, 0x62b78b05u,
        0xf4a200a0u, 0x4488bb7fu, 0x817c12d2u, 0x15bd9409u, 0x54ec0dd4u, 0xf3a21f23u, 0x3e7d7a26u, 0x552f4b4du, 0xc25b7448u, 0xe6708b07u, 0x5b39ccbau, 0xe41a74d1u, 0xc4bb27fcu, 0xb37a632bu, 0xcc5c1e8eu, 0x4d271495u,
        0xbc2b5cf0u, 0x251a4b8fu, 0xf9d6c3a2u, 0x991b6e99u, 0xbdd58724u, 0x26a32833u, 0x21b74ff6u, 0xcba006ddu, 0x01e05a98u, 0x91c41d17u, 0x9e3a978au, 0x6a43a161u, 0x56a3cb4cu, 0xc02c8e3bu, 0xa320ae5eu, 0x91bf4225u,
        0x4d1d0d40u, 0x05701f9fu, 0x4640e872u, 0x5d7a2d29u, 0x12a29474u, 0x752ab543u, 0xe75dd9c6u, 0xa54de66du, 0x2bd814e8u, 0x99647327u, 0x4b39565au, 0x558a31f1u, 0x84e2829cu, 0xfd35bd4bu, 0xfde8722eu, 0xe53913b5u,
        0x8adc1190u, 0xafab37afu, 0xd0678142u, 0xaea2cfb9u, 0x428835c4u, 0x22e9c653u, 0x856e1796u, 0x2e11e9fdu, 0x9047a338u, 0x0b928d37u, 0x0183092au, 0x6ad72681u, 0x254c4decu, 0x2466f05bu, 0x925069feu, 0x0e8d8945u,
        0xc60d69e0u, 0xfa2c93bfu, 0x21378e12u, 0xee9e5649u, 0xddfb6b14u, 0x23d15b63u, 0x65250966u, 0x0c05118du, 0x94740588u, 0x8acf6b47u, 0x67a4affau, 0x4d537f11u, 0xd6f62d3cu, 0xa7d1276bu, 0xf13595ceu, 0x76f5a2d5u,
    };
    uint32_t acc = 0xd3f8e9d5u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 37) & 255]);
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
    case 0: acc = heavy_round(acc, 0x3c2e1c12u); break;
    case 1: acc = heavy_round(acc, 0x67b78c49u); break;
    case 2: acc = heavy_round(acc, 0x55c72914u); break;
    case 3: acc = heavy_round(acc, 0xf4de0163u); break;
    case 4: acc = heavy_round(acc, 0x42ed7766u); break;
    case 5: acc = heavy_round(acc, 0xe906a78du); break;
    case 6: acc = heavy_round(acc, 0x154ca388u); break;
    case 7: acc = heavy_round(acc, 0xd2c37147u); break;
    case 8: acc = heavy_round(acc, 0xdf6cfdfau); break;
    case 9: acc = heavy_round(acc, 0xcf937511u); break;
    case 10: acc = heavy_round(acc, 0xf639ab3cu); break;
    case 11: acc = heavy_round(acc, 0x70728d6bu); break;
    case 12: acc = heavy_round(acc, 0x660bc3ceu); break;
    case 13: acc = heavy_round(acc, 0x3a29f8d5u); break;
    case 14: acc = heavy_round(acc, 0x36827430u); break;
    case 15: acc = heavy_round(acc, 0x5409f9cfu); break;
    case 16: acc = heavy_round(acc, 0xdfb01ce2u); break;
    case 17: acc = heavy_round(acc, 0x95f476d9u); break;
    case 18: acc = heavy_round(acc, 0xdc647264u); break;
    case 19: acc = heavy_round(acc, 0x9ee09a73u); break;
    case 20: acc = heavy_round(acc, 0xe09b9d36u); break;
    case 21: acc = heavy_round(acc, 0xff3f731du); break;
    case 22: acc = heavy_round(acc, 0xb85a59d8u); break;
    case 23: acc = heavy_round(acc, 0x5ee99357u); break;
    case 24: acc = heavy_round(acc, 0x827f18cau); break;
    case 25: acc = heavy_round(acc, 0xec7db1a1u); break;
    case 26: acc = heavy_round(acc, 0xac501e8cu); break;
    case 27: acc = heavy_round(acc, 0xe458487bu); break;
    case 28: acc = heavy_round(acc, 0x15cea39eu); break;
    case 29: acc = heavy_round(acc, 0xa78c3665u); break;
    case 30: acc = heavy_round(acc, 0xec16f480u); break;
    case 31: acc = heavy_round(acc, 0x3f845ddfu); break;
    case 32: acc = heavy_round(acc, 0x5e5591b2u); break;
    case 33: acc = heavy_round(acc, 0x59364569u); break;
    case 34: acc = heavy_round(acc, 0x2b194fb4u); break;
    case 35: acc = heavy_round(acc, 0x4b0db783u); break;
    case 36: acc = heavy_round(acc, 0x6f0a7706u); break;
    case 37: acc = heavy_round(acc, 0xaaf962adu); break;
    case 38: acc = heavy_round(acc, 0xeb4ee428u); break;
    case 39: acc = heavy_round(acc, 0xe6407967u); break;
    case 40: acc = heavy_round(acc, 0x7923279au); break;
    case 41: acc = heavy_round(acc, 0x43095231u); break;
    case 42: acc = heavy_round(acc, 0x6170a5dcu); break;
    case 43: acc = heavy_round(acc, 0x43b9078bu); break;
    case 44: acc = heavy_round(acc, 0x2268b76eu); break;
    case 45: acc = heavy_round(acc, 0x9e9417f5u); break;
    case 46: acc = heavy_round(acc, 0xa26cc8d0u); break;
    case 47: acc = heavy_round(acc, 0x704805efu); break;
    case 48: acc = heavy_round(acc, 0x36cb7a82u); break;
    case 49: acc = heavy_round(acc, 0x0e45f7f9u); break;
    case 50: acc = heavy_round(acc, 0x0e1ac104u); break;
    case 51: acc = heavy_round(acc, 0x76165893u); break;
    case 52: acc = heavy_round(acc, 0xc93704d6u); break;
    case 53: acc = heavy_round(acc, 0xd90d763du); break;
    case 54: acc = heavy_round(acc, 0x2b2f4278u); break;
    case 55: acc = heavy_round(acc, 0xc0092377u); break;
    case 56: acc = heavy_round(acc, 0x17a62a6au); break;
    case 57: acc = heavy_round(acc, 0xc91f56c1u); break;
    case 58: acc = heavy_round(acc, 0x6870412cu); break;
    case 59: acc = heavy_round(acc, 0xa165ca9bu); break;
    case 60: acc = heavy_round(acc, 0xc676ff3eu); break;
    case 61: acc = heavy_round(acc, 0xa73a9d85u); break;
    case 62: acc = heavy_round(acc, 0x7728f120u); break;
    case 63: acc = heavy_round(acc, 0x25b5f1ffu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

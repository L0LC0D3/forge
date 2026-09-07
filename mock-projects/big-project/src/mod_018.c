#include "heavy.h"
#include "mods.h"

int mod_018(int x)
{
    static const uint32_t local[256] = {
        0x99ad88c9u, 0x8a5ffb94u, 0x12ffb1e3u, 0x73766de6u, 0x04b22c0du, 0xc44d5e08u, 0x369be9c7u, 0xf5ee1c7au, 0x60c90191u, 0x646ccdbcu, 0xc74a4debu, 0x92338a4eu, 0xb3c60d55u, 0x941a7eb0u, 0xaf71824fu, 0x18d50b62u,
        0x7e5b9359u, 0x877be4e4u, 0xd5306af3u, 0xcc3c33b6u, 0xa4de179du, 0x6773b458u, 0x33c22bd7u, 0x82c1d74au, 0x22485e21u, 0x00d5e10cu, 0x792228fbu, 0x00020a1eu, 0x097f6ae5u, 0xecdb9f00u, 0x4bf0065fu, 0x59702032u,
        0x98d681e9u, 0x26d76234u, 0x9d93a803u, 0x7a2aad86u, 0x63d3272du, 0x4328dea8u, 0xaca131e7u, 0x1a0f861au, 0xd7311eb1u, 0xbb71085cu, 0x9b7d080bu, 0xbc0fbdeeu, 0x9b266c75u, 0x04061350u, 0xbf3fce6fu, 0x87c3a902u,
        0x97e75479u, 0x5ea77384u, 0x0ada6913u, 0x123edb56u, 0xa06a5abdu, 0x9e71dcf8u, 0x3a79fbf7u, 0x6a2428eau, 0x076c4341u, 0x511343acu, 0xa32beb1bu, 0xfaf9a5beu, 0xa2b41205u, 0x013edba0u, 0xcac1da7fu, 0x1bbca5d2u,
        0x00970b09u, 0x866118d4u, 0x2bf5ae23u, 0x5cb5bd26u, 0xd3bcb24du, 0x9593af48u, 0xcacd8a07u, 0xe88cbfbau, 0xd922cbd1u, 0x07d192fcu, 0x7d3fd22bu, 0x8c9cc18eu, 0xbc615b95u, 0x896af7f0u, 0x0c172a8fu, 0x3c8816a2u,
        0xbe2ea599u, 0xa6b95224u, 0x90167733u, 0x250c52f6u, 0x21232dddu, 0x6a135598u, 0xaf5cdc17u, 0xa2164a8au, 0xa0bdb861u, 0xff00f64cu, 0x9f09bd3bu, 0xac16115eu, 0x76a74925u, 0x0eaf6840u, 0x0d20be9fu, 0x9092fb72u,
        0xb2372429u, 0xc9a51f74u, 0x56adc443u, 0x09ff9cc6u, 0xe636cd6du, 0xd2b5cfe8u, 0xae28f227u, 0x0acdc95au, 0x70e608f1u, 0x7f366d9cu, 0x161aac4bu, 0xcfc2952eu, 0xe23edab5u, 0x20712c90u, 0x53ff96afu, 0x0d8a5442u,
        0x447986b9u, 0x4a5980c4u, 0x3f6c9553u, 0x4d8c9a96u, 0x4ad090fdu, 0x4b801e38u, 0x1172cc37u, 0xce003c2au, 0xaa84bd81u, 0x4a46f8ecu, 0x98439f5bu, 0x793f4cfeu, 0x22211045u, 0xbb5544e0u, 0x7314b2bfu, 0xc85b2112u,
        0xf2fecd49u, 0x254b7614u, 0xba43ea63u, 0xa4f04c66u, 0xd109788du, 0x65b74088u, 0xb7bb6a47u, 0x9e3aa2fau, 0x8cc2d611u, 0xeb47983cu, 0x9395966bu, 0x056938ceu, 0xfb86e9d5u, 0x9940b130u, 0x190112cfu, 0xc53261e2u,
        0xe20ff7d9u, 0x482fff64u, 0xf764c373u, 0x08a7b236u, 0xe53a841du, 0x17e036d8u, 0x23c3cc57u, 0x0549fdcau, 0xc50952a1u, 0x068d4b8cu, 0x3e61917bu, 0x7c5d589eu, 0x65e96765u, 0x81587180u, 0x20a5b6dfu, 0xc77d16b2u,
        0x6c360669u, 0xe1fc1cb4u, 0xf7402083u, 0x846fcc06u, 0x6dfcb3adu, 0x0dc00128u, 0x8c8cf267u, 0x343b4c9au, 0xff013331u, 0xa9ad12dcu, 0xa738908bu, 0x6178ac6eu, 0x1b0188f5u, 0x980185d0u, 0xa1239eefu, 0x21e83f82u,
        0xb239f8f9u, 0xb2e4ce04u, 0x9a870193u, 0x074599d6u, 0x5c29073du, 0xf85b9f78u, 0xed57dc77u, 0xd35b8f6au, 0x749377c1u, 0x9b7bee2cu, 0xc4eb939bu, 0x8358343eu, 0x26c84e85u, 0xaee0ee20u, 0xfddbcaffu, 0x8660dc52u,
        0x2b24cf89u, 0x5c5f1354u, 0xb22a66a3u, 0x33661ba6u, 0x3ad87ecdu, 0xddf811c8u, 0x15a58a87u, 0xd237c63au, 0x7de92051u, 0xac0edd7cu, 0x868b9aabu, 0xcbd8f00eu, 0x7776b815u, 0x94dbaa70u, 0xf66f3b0fu, 0xd613ed22u,
        0x343f8a19u, 0xb11feca4u, 0x0f5b4fb3u, 0x2e4e5176u, 0xbf641a5du, 0x6a1a5818u, 0xb936fc97u, 0x379cf10au, 0x216b2ce1u, 0x04bae0ccu, 0xe369a5bbu, 0x1017dfdeu, 0x6d85c5a5u, 0x6616bac0u, 0xb6beef1fu, 0xf16e71f2u,
        0xa11328a9u, 0x051c59f4u, 0x938abcc3u, 0x70bb3b46u, 0x5964d9edu, 0x3d877268u, 0x800d32a7u, 0xf1980fdau, 0xa3c29d71u, 0x7814f81cu, 0xeb16b4cbu, 0xe07203aeu, 0x6bae7735u, 0xdbf71f10u, 0xe6ebe72fu, 0x881d6ac2u,
        0x4b68ab39u, 0x7d895b44u, 0x4069add3u, 0x96a9d916u, 0xc2b3bd7du, 0x3e4460b8u, 0x16692cb7u, 0xa57622aau, 0x17d87201u, 0xd1f2236cu, 0xd563c7dbu, 0x58845b7eu, 0x66e9ccc5u, 0x9d21d760u, 0xbb57233fu, 0xe90dd792u,
    };
    uint32_t acc = 0x2d456a92u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 18) & 255]);
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
    case 0: acc = heavy_round(acc, 0xc214ff71u); break;
    case 1: acc = heavy_round(acc, 0x674ff21cu); break;
    case 2: acc = heavy_round(acc, 0xfab166cbu); break;
    case 3: acc = heavy_round(acc, 0xb0390daeu); break;
    case 4: acc = heavy_round(acc, 0x40c5f935u); break;
    case 5: acc = heavy_round(acc, 0xbdf4b910u); break;
    case 6: acc = heavy_round(acc, 0x7628b92fu); break;
    case 7: acc = heavy_round(acc, 0x8be014c2u); break;
    case 8: acc = heavy_round(acc, 0xa6074d39u); break;
    case 9: acc = heavy_round(acc, 0x1e239544u); break;
    case 10: acc = heavy_round(acc, 0x855a9fd3u); break;
    case 11: acc = heavy_round(acc, 0xb9522316u); break;
    case 12: acc = heavy_round(acc, 0xccbb7f7du); break;
    case 13: acc = heavy_round(acc, 0xc9f53ab8u); break;
    case 14: acc = heavy_round(acc, 0xef403eb7u); break;
    case 15: acc = heavy_round(acc, 0x1b8e0caau); break;
    case 16: acc = heavy_round(acc, 0x784b5401u); break;
    case 17: acc = heavy_round(acc, 0x8fd39d6cu); break;
    case 18: acc = heavy_round(acc, 0x3a72f9dbu); break;
    case 19: acc = heavy_round(acc, 0x6a35e57eu); break;
    case 20: acc = heavy_round(acc, 0x83e9cec5u); break;
    case 21: acc = heavy_round(acc, 0x48edf160u); break;
    case 22: acc = heavy_round(acc, 0x5110753fu); break;
    case 23: acc = heavy_round(acc, 0x5c230192u); break;
    case 24: acc = heavy_round(acc, 0x041833c9u); break;
    case 25: acc = heavy_round(acc, 0x24ecaa94u); break;
    case 26: acc = heavy_round(acc, 0x10de94e3u); break;
    case 27: acc = heavy_round(acc, 0x5139f4e6u); break;
    case 28: acc = heavy_round(acc, 0x5e6a070du); break;
    case 29: acc = heavy_round(acc, 0xf6e57d08u); break;
    case 30: acc = heavy_round(acc, 0x6baf7cc7u); break;
    case 31: acc = heavy_round(acc, 0xcf7e937au); break;
    case 32: acc = heavy_round(acc, 0x9b890c91u); break;
    case 33: acc = heavy_round(acc, 0xf78f5cbcu); break;
    case 34: acc = heavy_round(acc, 0xfc0590ebu); break;
    case 35: acc = heavy_round(acc, 0x6767f14eu); break;
    case 36: acc = heavy_round(acc, 0x77794855u); break;
    case 37: acc = heavy_round(acc, 0xb0b67db0u); break;
    case 38: acc = heavy_round(acc, 0x31f7754fu); break;
    case 39: acc = heavy_round(acc, 0xd3746262u); break;
    case 40: acc = heavy_round(acc, 0xf41cfe59u); break;
    case 41: acc = heavy_round(acc, 0x05f053e4u); break;
    case 42: acc = heavy_round(acc, 0x7c540df3u); break;
    case 43: acc = heavy_round(acc, 0x66fd7ab6u); break;
    case 44: acc = heavy_round(acc, 0x71f8b29du); break;
    case 45: acc = heavy_round(acc, 0x8e8f9358u); break;
    case 46: acc = heavy_round(acc, 0x12067ed7u); break;
    case 47: acc = heavy_round(acc, 0x204c0e4au); break;
    case 48: acc = heavy_round(acc, 0x93372921u); break;
    case 49: acc = heavy_round(acc, 0xb4d8300cu); break;
    case 50: acc = heavy_round(acc, 0x3fba2bfbu); break;
    case 51: acc = heavy_round(acc, 0xf1ec311eu); break;
    case 52: acc = heavy_round(acc, 0x6ced65e5u); break;
    case 53: acc = heavy_round(acc, 0x4e735e00u); break;
    case 54: acc = heavy_round(acc, 0x5dbeb95fu); break;
    case 55: acc = heavy_round(acc, 0x17413732u); break;
    case 56: acc = heavy_round(acc, 0xca9eace9u); break;
    case 57: acc = heavy_round(acc, 0xa2239134u); break;
    case 58: acc = heavy_round(acc, 0xd22c0b03u); break;
    case 59: acc = heavy_round(acc, 0x8859b486u); break;
    case 60: acc = heavy_round(acc, 0x8800822du); break;
    case 61: acc = heavy_round(acc, 0x0eb87da8u); break;
    case 62: acc = heavy_round(acc, 0xc34644e7u); break;
    case 63: acc = heavy_round(acc, 0xe1037d1au); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

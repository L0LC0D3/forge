#include "heavy.h"
#include "mods.h"

int mod_086(int x)
{
    static const uint32_t local[256] = {
        0xa9a5c4b5u, 0x1be70e90u, 0x230810afu, 0xdb948642u, 0xacea10b9u, 0xe90c82c4u, 0xd34faf53u, 0xd670ec96u, 0x3914bafdu, 0xa7b24038u, 0x0b8a8637u, 0x1f50ae2au, 0xfb068781u, 0xd15a3aecu, 0x9289f95bu, 0x00addefeu,
        0x52ea7a45u, 0xcfcba6e0u, 0x3a23acbfu, 0x45b9d312u, 0x6db9d749u, 0xe0c6f814u, 0x27558463u, 0x3c311e66u, 0xd500228du, 0x7af9e288u, 0x2aa9a447u, 0x096f94fau, 0xb8df2011u, 0xa8335a3cu, 0x0cda706bu, 0xe6c44aceu,
        0x7852d3d5u, 0x08d79330u, 0xf3b68ccfu, 0x190593e2u, 0x2bb581d9u, 0x74940164u, 0x4344dd73u, 0xb7650436u, 0x3583ae1du, 0x6c5358d8u, 0x9f288657u, 0x95836fcau, 0x1d601ca1u, 0xd1718d8cu, 0xf044eb7bu, 0xe4c4ea9eu,
        0x3957d165u, 0x962fd380u, 0x92a1b0dfu, 0x60e4c8b2u, 0xe9661069u, 0x5b689eb4u, 0x0f8eba83u, 0x1bc99e06u, 0x69385dadu, 0x2f83a328u, 0x08082c67u, 0x3c993e9au, 0x7c327d31u, 0xe2a9d4dcu, 0x335a6a8bu, 0x460cbe6eu,
        0x77b272f5u, 0xa43967d0u, 0x960618efu, 0xb8047182u, 0x6f9482f9u, 0xdd79d004u, 0x54e41b93u, 0x205bebd6u, 0x88f7313du, 0x7d8fc178u, 0xc8899677u, 0xeefe016au, 0xb73f41c1u, 0x2ab1302cu, 0xb4ebed9bu, 0xa138c63eu,
        0x675bb885u, 0x0c995020u, 0xc944c4ffu, 0x18518e52u, 0xdd49d989u, 0x243c9554u, 0xcc3600a3u, 0x2f58eda6u, 0x47d928cdu, 0x64bcb3c8u, 0x182dc487u, 0xe43eb83au, 0xceaf6a51u, 0x019c9f7cu, 0x4c0a74abu, 0xa826020eu,
        0x1e8ca215u, 0xa6348c70u, 0x53feb50fu, 0xaaf91f22u, 0x37cf1419u, 0x8a65eea4u, 0x2eb569b3u, 0x363da376u, 0x8337445du, 0x988f7a18u, 0x12b5b697u, 0x6b28630au, 0x70ebf6e1u, 0x18c122ccu, 0xd806ffbbu, 0xf7f171deu,
        0x25be2fa5u, 0x95301cc0u, 0xca14e91fu, 0x986823f2u, 0xfaad32a9u, 0xebeadbf4u, 0x45d356c3u, 0x75c70d46u, 0xd2aa83edu, 0xc1cd1468u, 0xc8226ca7u, 0xb9c801dau, 0x8a9de771u, 0xcab3ba1cu, 0x50728ecbu, 0xe8f815aeu,
        0x07a96135u, 0x9af10110u, 0x3ba8612fu, 0xd84b9cc2u, 0xa7ad3539u, 0xf6005d44u, 0xfb40c7d3u, 0x51f22b16u, 0x180be77du, 0xce7a82b8u, 0x4cb4e6b7u, 0xbd6a94aau, 0xd6ae3c01u, 0x6b49656cu, 0xd51e21dbu, 0x5ed6ed7eu,
        0xe14736c5u, 0x661c3960u, 0x451a1d3fu, 0x01908992u, 0x56d81bc9u, 0x771b7294u, 0x68eebce3u, 0x21fbfce6u, 0x0f746f0du, 0x41dcc508u, 0xc8ee24c7u, 0xea9d1b7au, 0x6e45f491u, 0x979724bcu, 0xbe1ab8ebu, 0x986af94eu,
        0xf1d0b055u, 0xe296c5b0u, 0x1f0b1d4fu, 0x1a63ea62u, 0x4676e659u, 0xaef11be4u, 0xe90e35f3u, 0x006182b6u, 0xdf3d1a9du, 0x8478db58u, 0x898f26d7u, 0x0d2c964au, 0x58ce1121u, 0x85f1f80cu, 0xabb953fbu, 0xffd1391eu,
        0x2abecde5u, 0x8985a600u, 0xae5c615fu, 0x6832bf32u, 0x6b1294e9u, 0x9e765934u, 0x26103303u, 0x9adfbc86u, 0xa7feea2du, 0x3413c5a8u, 0x0f98ece7u, 0x1826051au, 0x1bef91b1u, 0x55eedf5cu, 0x968af30bu, 0xfa66aceeu,
        0xbfca8f75u, 0xb14dda50u, 0x942ee96fu, 0x3faa0802u, 0xff742779u, 0x57e02a84u, 0x2aa5b413u, 0x0273aa56u, 0x1492ddbdu, 0x73b283f8u, 0x204c76f7u, 0xf5d667eau, 0x4b937641u, 0x6062daacu, 0xdf60961bu, 0xb8c854beu,
        0xb6ecf505u, 0xdd9462a0u, 0x3de3b57fu, 0xd4b6c4d2u, 0x14a49e09u, 0x4ea38fd4u, 0x71bfb923u, 0x7b5a4c26u, 0xea11f54du, 0x3b9a1648u, 0xd52ac507u, 0x57cabebau, 0x19e2bed1u, 0x8762e9fcu, 0x5f4b3d2bu, 0x06d3308eu,
        0x785efe95u, 0x0f3e3ef0u, 0xf51bc58fu, 0x0a85f5a2u, 0x21ecf899u, 0xa7758924u, 0xf68f4233u, 0x4d10a1f6u, 0x97d530ddu, 0xa94f7c98u, 0xabf4d717u, 0x86d0098au, 0xe7466b61u, 0x86440d4cu, 0x779be83bu, 0x1ba4405eu,
        0x5e99ac25u, 0x14706f40u, 0xefb8199fu, 0x43849a72u, 0x94d63729u, 0x884b1674u, 0x44854f43u, 0x9253abc6u, 0xc775906du, 0x4f97b6e8u, 0x96abad27u, 0x32f3485au, 0xd2677bf1u, 0x419b449cu, 0x21e3974bu, 0x6998842eu,
    };
    uint32_t acc = 0x6264a72eu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 86) & 255]);
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
    case 0: acc = heavy_round(acc, 0xcac9e005u); break;
    case 1: acc = heavy_round(acc, 0xd86e51a0u); break;
    case 2: acc = heavy_round(acc, 0x272ed87fu); break;
    case 3: acc = heavy_round(acc, 0x08798bd2u); break;
    case 4: acc = heavy_round(acc, 0xbfd2b909u); break;
    case 5: acc = heavy_round(acc, 0x01bceed4u); break;
    case 6: acc = heavy_round(acc, 0xece38c23u); break;
    case 7: acc = heavy_round(acc, 0x9d3e0326u); break;
    case 8: acc = heavy_round(acc, 0x3c8c404du); break;
    case 9: acc = heavy_round(acc, 0x78b1e548u); break;
    case 10: acc = heavy_round(acc, 0xa2da4807u); break;
    case 11: acc = heavy_round(acc, 0x82e665bau); break;
    case 12: acc = heavy_round(acc, 0x9dd439d1u); break;
    case 13: acc = heavy_round(acc, 0x74a828fcu); break;
    case 14: acc = heavy_round(acc, 0x29e9702bu); break;
    case 15: acc = heavy_round(acc, 0x542dc78eu); break;
    case 16: acc = heavy_round(acc, 0x3d22a995u); break;
    case 17: acc = heavy_round(acc, 0xb64fedf0u); break;
    case 18: acc = heavy_round(acc, 0x93bba88fu); break;
    case 19: acc = heavy_round(acc, 0xf8167ca2u); break;
    case 20: acc = heavy_round(acc, 0xf70dd399u); break;
    case 21: acc = heavy_round(acc, 0xf462a824u); break;
    case 22: acc = heavy_round(acc, 0x5ff3d533u); break;
    case 23: acc = heavy_round(acc, 0x14be18f6u); break;
    case 24: acc = heavy_round(acc, 0x780e3bddu); break;
    case 25: acc = heavy_round(acc, 0xd9970b98u); break;
    case 26: acc = heavy_round(acc, 0x99911a17u); break;
    case 27: acc = heavy_round(acc, 0x6571708au); break;
    case 28: acc = heavy_round(acc, 0x9382a661u); break;
    case 29: acc = heavy_round(acc, 0x07d50c4cu); break;
    case 30: acc = heavy_round(acc, 0xb892db3bu); break;
    case 31: acc = heavy_round(acc, 0x8800975eu); break;
    case 32: acc = heavy_round(acc, 0x28f41725u); break;
    case 33: acc = heavy_round(acc, 0xd4a9de40u); break;
    case 34: acc = heavy_round(acc, 0x6bdcbc9fu); break;
    case 35: acc = heavy_round(acc, 0x1552e172u); break;
    case 36: acc = heavy_round(acc, 0x5b99d229u); break;
    case 37: acc = heavy_round(acc, 0xb2fbf574u); break;
    case 38: acc = heavy_round(acc, 0xaf5aa243u); break;
    case 39: acc = heavy_round(acc, 0x193ae2c6u); break;
    case 40: acc = heavy_round(acc, 0x201d5b6du); break;
    case 41: acc = heavy_round(acc, 0x7dff05e8u); break;
    case 42: acc = heavy_round(acc, 0xd264b027u); break;
    case 43: acc = heavy_round(acc, 0x3d8a6f5au); break;
    case 44: acc = heavy_round(acc, 0x649e76f1u); break;
    case 45: acc = heavy_round(acc, 0x1968039cu); break;
    case 46: acc = heavy_round(acc, 0x52634a4bu); break;
    case 47: acc = heavy_round(acc, 0x3c669b2eu); break;
    case 48: acc = heavy_round(acc, 0x56f728b5u); break;
    case 49: acc = heavy_round(acc, 0x1ae12290u); break;
    case 50: acc = heavy_round(acc, 0xadb314afu); break;
    case 51: acc = heavy_round(acc, 0x6ddbba42u); break;
    case 52: acc = heavy_round(acc, 0x8d3fb4b9u); break;
    case 53: acc = heavy_round(acc, 0x70bdd6c4u); break;
    case 54: acc = heavy_round(acc, 0x92c8f353u); break;
    case 55: acc = heavy_round(acc, 0x84b16096u); break;
    case 56: acc = heavy_round(acc, 0x14929efdu); break;
    case 57: acc = heavy_round(acc, 0x39eed438u); break;
    case 58: acc = heavy_round(acc, 0x0f960a37u); break;
    case 59: acc = heavy_round(acc, 0xce7e622au); break;
    case 60: acc = heavy_round(acc, 0xaa10ab81u); break;
    case 61: acc = heavy_round(acc, 0x43360eecu); break;
    case 62: acc = heavy_round(acc, 0xa52bbd5bu); break;
    case 63: acc = heavy_round(acc, 0x8afcd2feu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

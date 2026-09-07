#include "heavy.h"
#include "mods.h"

int mod_079(int x)
{
    static const uint32_t local[256] = {
        0x0fd9734eu, 0xf108e255u, 0x1e5d4fb0u, 0xbd1c1f4fu, 0x1a0d0462u, 0x2c693859u, 0xeaeb45e4u, 0xbb7e57f3u, 0xaf9f3cb6u, 0x877b8c9du, 0x1310a558u, 0xfbc068d7u, 0xebf8f04au, 0xdf0aa321u, 0xbb31620cu, 0xfe2db5fbu,
        0x20c6331eu, 0xdccb7fe5u, 0x0516b000u, 0xb8b5e35fu, 0x4a8a5932u, 0xdae166e9u, 0x35a30334u, 0x3910d503u, 0xa473f686u, 0xdda1dc2du, 0x7bc60fa8u, 0xf722aee7u, 0xaf70df1au, 0xe798a3b1u, 0xccb0c95cu, 0xbb9fd50bu,
        0x408226eeu, 0x2bcbc175u, 0x89496450u, 0x3ef0eb6fu, 0x6a502202u, 0xe23f7979u, 0xe0df5484u, 0xe456d613u, 0x55fe6456u, 0xc2ba4fbdu, 0x251f4df8u, 0x354eb8f7u, 0x5f3fc1eau, 0x69c90841u, 0x834744acu, 0x0135f81bu,
        0x07aa4ebeu, 0x2c02a705u, 0xd69a6ca0u, 0x452e377fu, 0x954b5ed2u, 0x1b8c7009u, 0x881539d4u, 0x40415b23u, 0x707b8626u, 0x43dde74du, 0xaf616048u, 0x57c58707u, 0x94f298bau, 0x5fc4d0d1u, 0xe909d3fcu, 0xb0011f2bu,
        0xaa1baa8eu, 0x8da93095u, 0x95eec8f0u, 0x9d0ec78fu, 0x96a90fa2u, 0xc6114a99u, 0x77f9b324u, 0x50016433u, 0xa3685bf6u, 0x1865a2ddu, 0xe0114698u, 0x64481917u, 0x8156638au, 0xf1f4fd61u, 0xe14d774cu, 0x31524a3bu,
        0xc6f33a5eu, 0xf3385e25u, 0x3d6b7940u, 0x04739b9fu, 0xb8d63472u, 0x17570929u, 0xfe81c074u, 0xa707f143u, 0x7181e5c6u, 0x31ea826du, 0xf1f400e8u, 0xd4d76f27u, 0xbc78225au, 0x07028df1u, 0x78a72e9cu, 0x86ba794bu,
        0x388dfe2eu, 0x81692fb5u, 0x60757d90u, 0x357db3afu, 0x957fcd42u, 0xcb26abb9u, 0xbae261c4u, 0x79060253u, 0x00c52396u, 0x4c4585fdu, 0xe50e8f38u, 0xa7b48937u, 0x15a4d52au, 0xd3d68281u, 0x34ebf9ecu, 0x5a0aac5bu,
        0xe488f5feu, 0x6f34a545u, 0xffb1d5e0u, 0xf68e0fbfu, 0xe592da12u, 0xb3893249u, 0xed909714u, 0xa9ec9763u, 0xea6f1566u, 0x7d8fad8du, 0xcea5f188u, 0x6f606747u, 0x63697bfau, 0x6b99db11u, 0x6530d93cu, 0x0d53e36bu,
        0x8bc121ceu, 0x95d3bed5u, 0xd9058230u, 0x2a45afcfu, 0x513c5ae2u, 0x48c79cd9u, 0xc8416064u, 0xddecb073u, 0x0afcbb36u, 0xc621f91du, 0x293f27d8u, 0x629c0957u, 0x539316cau, 0x4fb597a1u, 0x71cacc8cu, 0xcae71e7bu,
        0x9a53819eu, 0x00bf7c65u, 0xb7958280u, 0xdf8593dfu, 0x3fe94fb2u, 0x396aeb69u, 0xbde9bdb4u, 0x89774d83u, 0x522b1506u, 0xa09568adu, 0x249f3228u, 0x6c686f67u, 0x3b2ea59au, 0xffd2b831u, 0x2c4ed3dcu, 0x95555d8bu,
        0xf79d156eu, 0x7db0ddf5u, 0xc3c6d6d0u, 0x616ebbefu, 0xa846b882u, 0xfa3c1df9u, 0xd2beaf04u, 0x013d6e93u, 0x92f722d6u, 0x91c2fc3du, 0xf5cb1078u, 0x3c069977u, 0xe689286au, 0x89da3cc1u, 0x1f91ef2cu, 0x576fa09bu,
        0xd63add3eu, 0x2ca0e385u, 0xd33e7f20u, 0x476227ffu, 0xe0419552u, 0x56443489u, 0xec353454u, 0x8a3013a3u, 0x539de4a6u, 0xb8c3b3cdu, 0x2707c2c8u, 0x54f78787u, 0x692f9f3au, 0x19f52551u, 0xdfa91e7cu, 0xf446e7abu,
        0x8409d90eu, 0x0fc88d15u, 0xb8e17b70u, 0x8500d80fu, 0x6d06e622u, 0xfecc2f19u, 0x21024da4u, 0x69803cb3u, 0x9d9c5a76u, 0x5ef08f5du, 0xe7da4918u, 0x1efc3997u, 0xedef0a0au, 0x8a8c71e1u, 0x59e961ccu, 0x572c32bbu,
        0x3a2708deu, 0x9ba0daa5u, 0x94d4cbc0u, 0x7a2bcc1fu, 0xd303aaf2u, 0x1b5d0da9u, 0x091afaf4u, 0xf49ee9c3u, 0xcdaf8446u, 0x87e28eedu, 0x5d07a368u, 0xf615afa7u, 0x86d468dau, 0xf4492271u, 0x24e7b91cu, 0x83b081cbu,
        0xecef6caeu, 0x46e2cc35u, 0x247d7010u, 0x0304042fu, 0x65e4e3c2u, 0xd9bfd039u, 0x0db43c44u, 0xa13d1ad3u, 0x63d46216u, 0x8172b27du, 0xf094d1b8u, 0x3a84e9b7u, 0xfd2cbbaau, 0x3e143701u, 0xd079246cu, 0xa5a4d4dbu,
        0x1c00047eu, 0x1a8761c5u, 0x12806860u, 0x87ea803fu, 0x18979092u, 0xfdfd76c9u, 0xb9431194u, 0x154bcfe3u, 0xd347f3e6u, 0x73b9fa0du, 0xa1c6d408u, 0x60cae7c7u, 0xa185027au, 0xad16af91u, 0x35b2a3bcu, 0x211a2bebu,
    };
    uint32_t acc = 0x600e9aebu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 79) & 255]);
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
    case 0: acc = heavy_round(acc, 0xdb1ed7c0u); break;
    case 1: acc = heavy_round(acc, 0xb8b6681fu); break;
    case 2: acc = heavy_round(acc, 0x763596f2u); break;
    case 3: acc = heavy_round(acc, 0x54ee09a9u); break;
    case 4: acc = heavy_round(acc, 0x55dfc6f4u); break;
    case 5: acc = heavy_round(acc, 0x2fe545c3u); break;
    case 6: acc = heavy_round(acc, 0xd4ea3046u); break;
    case 7: acc = heavy_round(acc, 0x12654aedu); break;
    case 8: acc = heavy_round(acc, 0xd8932f68u); break;
    case 9: acc = heavy_round(acc, 0x81f3cba7u); break;
    case 10: acc = heavy_round(acc, 0xdc43d4dau); break;
    case 11: acc = heavy_round(acc, 0x3bf99e71u); break;
    case 12: acc = heavy_round(acc, 0x3646051cu); break;
    case 13: acc = heavy_round(acc, 0x63c25dcbu); break;
    case 14: acc = heavy_round(acc, 0xe77f98aeu); break;
    case 15: acc = heavy_round(acc, 0xbdbd0835u); break;
    case 16: acc = heavy_round(acc, 0xfd7a7c10u); break;
    case 17: acc = heavy_round(acc, 0x06a5a02fu); break;
    case 18: acc = heavy_round(acc, 0x3541cfc2u); break;
    case 19: acc = heavy_round(acc, 0x737fcc39u); break;
    case 20: acc = heavy_round(acc, 0xf6dc0844u); break;
    case 21: acc = heavy_round(acc, 0x3f8a76d3u); break;
    case 22: acc = heavy_round(acc, 0x3c6a0e16u); break;
    case 23: acc = heavy_round(acc, 0xef946e7du); break;
    case 24: acc = heavy_round(acc, 0x55335db8u); break;
    case 25: acc = heavy_round(acc, 0x2e5a05b7u); break;
    case 26: acc = heavy_round(acc, 0x042727aau); break;
    case 27: acc = heavy_round(acc, 0xebd3b301u); break;
    case 28: acc = heavy_round(acc, 0x0a9a706cu); break;
    case 29: acc = heavy_round(acc, 0x499db0dbu); break;
    case 30: acc = heavy_round(acc, 0x134b307eu); break;
    case 31: acc = heavy_round(acc, 0xe8e09dc5u); break;
    case 32: acc = heavy_round(acc, 0xf6f07460u); break;
    case 33: acc = heavy_round(acc, 0xf2631c3fu); break;
    case 34: acc = heavy_round(acc, 0xcadf7c92u); break;
    case 35: acc = heavy_round(acc, 0xbfac72c9u); break;
    case 36: acc = heavy_round(acc, 0xe38ddd94u); break;
    case 37: acc = heavy_round(acc, 0xf4602be3u); break;
    case 38: acc = heavy_round(acc, 0x3ff89fe6u); break;
    case 39: acc = heavy_round(acc, 0x293ab60du); break;
    case 40: acc = heavy_round(acc, 0x80386008u); break;
    case 41: acc = heavy_round(acc, 0x965703c7u); break;
    case 42: acc = heavy_round(acc, 0xe8ca6e7au); break;
    case 43: acc = heavy_round(acc, 0x80a52b91u); break;
    case 44: acc = heavy_round(acc, 0xd556efbcu); break;
    case 45: acc = heavy_round(acc, 0x1eba07ebu); break;
    case 46: acc = heavy_round(acc, 0xb0fbfc4eu); break;
    case 47: acc = heavy_round(acc, 0x435fd755u); break;
    case 48: acc = heavy_round(acc, 0xdf65c0b0u); break;
    case 49: acc = heavy_round(acc, 0xf08fdc4fu); break;
    case 50: acc = heavy_round(acc, 0x493b9d62u); break;
    case 51: acc = heavy_round(acc, 0x13bcfd59u); break;
    case 52: acc = heavy_round(acc, 0x47aa46e4u); break;
    case 53: acc = heavy_round(acc, 0xa49764f3u); break;
    case 54: acc = heavy_round(acc, 0xc612e5b6u); break;
    case 55: acc = heavy_round(acc, 0x41b1219du); break;
    case 56: acc = heavy_round(acc, 0x6e273658u); break;
    case 57: acc = heavy_round(acc, 0xc2abc5d7u); break;
    case 58: acc = heavy_round(acc, 0xe1faa94au); break;
    case 59: acc = heavy_round(acc, 0x1dd70821u); break;
    case 60: acc = heavy_round(acc, 0x38d0830cu); break;
    case 61: acc = heavy_round(acc, 0xff6862fbu); break;
    case 62: acc = heavy_round(acc, 0x76aefc1eu); break;
    case 63: acc = heavy_round(acc, 0x9ab3b4e5u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

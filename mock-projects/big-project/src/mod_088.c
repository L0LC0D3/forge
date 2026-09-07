#include "heavy.h"
#include "mods.h"

int mod_088(int x)
{
    static const uint32_t local[256] = {
        0x624384cbu, 0x189893aeu, 0xb303c735u, 0x492c2f10u, 0x26fdb72fu, 0x31e4fac2u, 0x7deafb39u, 0xca076b44u, 0xed307dd3u, 0xe3a26916u, 0xc4b30d7du, 0xe21b70b8u, 0xa8b4fcb7u, 0x982fb2aau, 0x6aa4c201u, 0x3e32336cu,
        0x6b0497dbu, 0x548eeb7eu, 0x78d31cc5u, 0x4bdae760u, 0xe71cf33fu, 0x42f96792u, 0x1f9f61c9u, 0xe51e0094u, 0xe1a3f2e3u, 0xbcb3bae6u, 0xae7d150du, 0xfd713308u, 0x314bbac7u, 0x2721b97au, 0xc5f5fa91u, 0xc3eb72bcu,
        0x3376aeebu, 0x381a774eu, 0x47ee1655u, 0xeeb8f3b0u, 0xd91b734fu, 0x757c4862u, 0xca27ac59u, 0x23cf29e4u, 0xafe8ebf3u, 0x0400c0b6u, 0x8f07409du, 0xb2e0c958u, 0x8baa3cd7u, 0x1950b44au, 0x48979721u, 0x1491c60cu,
        0xb3eac9fbu, 0xa558371eu, 0x29cdb3e5u, 0xe2eb5400u, 0xb9da375fu, 0x06da9d32u, 0x0a0cdae9u, 0x3f0fe734u, 0x5a706903u, 0xdf467a86u, 0x9eea902du, 0xd82f33a8u, 0x10d182e7u, 0x59c9a31au, 0x103297b1u, 0x07ba2d5cu,
        0x3cf1e90bu, 0x79a52aeeu, 0x6a2af575u, 0xb6d70850u, 0x027a3f6fu, 0x43c16602u, 0xb217ed79u, 0x01153884u, 0x43eb6a13u, 0xd781e856u, 0xa10003bdu, 0xc86171f8u, 0x5e028cf7u, 0xcad985eau, 0x48affc41u, 0xae39a8acu,
        0x875d0c1bu, 0x5d9e52beu, 0x26fedb05u, 0x262110a0u, 0xf85c8b7fu, 0x581da2d2u, 0x6b51e409u, 0x95541dd4u, 0x3f4aef23u, 0xa8f00a26u, 0x72609b4du, 0xb3bc8448u, 0x64be5b07u, 0x160d5cbau, 0xbc38c4d1u, 0xa22537fcu,
        0xc43d332bu, 0x9520ae8eu, 0xe0826495u, 0x69ae6cf0u, 0xbd221b8fu, 0x1f1c53a2u, 0x4503be99u, 0xd8819724u, 0x9fbff833u, 0x130ddff6u, 0x9a6556ddu, 0xefc56a98u, 0x7ac5ed17u, 0x7c32278au, 0x6335f161u, 0x56d1db4cu,
        0xace35e3bu, 0xcf493e5eu, 0x092e9225u, 0x87a41d40u, 0x5eabef9fu, 0xf32a7872u, 0x44b67d29u, 0xa892a474u, 0x48bb8543u, 0xa89869c6u, 0xdaa7366du, 0x474124e8u, 0x6a1a4327u, 0xa554e65au, 0xf45081f1u, 0x68d4929cu,
        0x92e08d4bu, 0xf675022eu, 0x95bc63b5u, 0xa3672190u, 0xe71b07afu, 0x7df51142u, 0xf6331fb9u, 0x34bc45c4u, 0xbdee9653u, 0x9f8ca796u, 0xbeff39fdu, 0x4a34b338u, 0x80fc5d37u, 0x70c2992au, 0x74717681u, 0xee025decu,
        0x7005c05bu, 0x0040f9feu, 0x8d24d945u, 0x4d9c79e0u, 0x6cd063bfu, 0x88691e12u, 0xfb82a649u, 0x4d737b14u, 0x334a2b63u, 0xa1279966u, 0x2d86618du, 0x9de51588u, 0xa1ed3b47u, 0xc5083ffau, 0xc6c1cf11u, 0xc5703d3cu,
        0xf663f76bu, 0xbd8a25ceu, 0x98a0f2d5u, 0xd4292630u, 0x226d03cfu, 0xcab39ee2u, 0x9cee10d9u, 0xb46d4464u, 0x9cff4473u, 0x99e63f36u, 0xf695ad1du, 0x4cd74bd8u, 0x53addd57u, 0x5ff2dacau, 0x3caa8ba1u, 0xe773308cu,
        0xa04c327bu, 0xaa6d859eu, 0x93a9b065u, 0x92322680u, 0x66d1e7dfu, 0xbc4193b2u, 0x58fe5f69u, 0x6c9ea1b4u, 0xbf7ee183u, 0x89859906u, 0x64c61cadu, 0x16d05628u, 0xd13f4367u, 0xa68f699au, 0x25d4ac31u, 0xb5a037dcu,
        0xc04f718bu, 0xbe48196eu, 0x1bf811f5u, 0x401c7ad0u, 0xd5200fefu, 0x63bffc82u, 0x747c91f9u, 0x0a3c9304u, 0x3f7a0293u, 0x5302a6d6u, 0xccf0b03du, 0xc0d53478u, 0x19e26d77u, 0x752aec6au, 0x602930c1u, 0x4acc532cu,
        0x913eb49bu, 0x3bb6e13eu, 0x21851785u, 0x438d2320u, 0x54b87bffu, 0x271bd952u, 0x8a71a889u, 0x02bc1854u, 0xb1e1a7a3u, 0x8c9a68a6u, 0x1e2e67cdu, 0x652ae6c8u, 0x01185b87u, 0xef52633au, 0xe7d11951u, 0xcb0c827cu,
        0x462afbabu, 0x8096dd0eu, 0x7689c115u, 0xff691f70u, 0x293c2c0fu, 0x9b822a22u, 0x1c26a319u, 0xfcd231a4u, 0xabe6d0b3u, 0x4fc9de76u, 0x71d8435du, 0xc3566d18u, 0x3ea20d97u, 0x4fd2ce0au, 0x673565e1u, 0xb3b5c5ccu,
        0x1a6546bbu, 0xd6050cdeu, 0x5f7f0ea5u, 0x23d56fc0u, 0x028c201fu, 0x555feef2u, 0x212481a9u, 0x2073def4u, 0xd2fa7dc3u, 0x094e0846u, 0x9b8742edu, 0x901cc768u, 0x7e8083a7u, 0xb8b92cdau, 0xc6ff1671u, 0x2b5d1d1cu,
    };
    uint32_t acc = 0x9511081cu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 88) & 255]);
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
    case 0: acc = heavy_round(acc, 0xfa079643u); break;
    case 1: acc = heavy_round(acc, 0xa13b46c6u); break;
    case 2: acc = heavy_round(acc, 0xf3fa6f6du); break;
    case 3: acc = heavy_round(acc, 0x4a3109e8u); break;
    case 4: acc = heavy_round(acc, 0x8286e427u); break;
    case 5: acc = heavy_round(acc, 0xe3ff135au); break;
    case 6: acc = heavy_round(acc, 0x55e2caf1u); break;
    case 7: acc = heavy_round(acc, 0xc758479cu); break;
    case 8: acc = heavy_round(acc, 0x86aebe4bu); break;
    case 9: acc = heavy_round(acc, 0x48737f2eu); break;
    case 10: acc = heavy_round(acc, 0x5a76bcb5u); break;
    case 11: acc = heavy_round(acc, 0x9153a690u); break;
    case 12: acc = heavy_round(acc, 0x361bc8afu); break;
    case 13: acc = heavy_round(acc, 0xa6e4de42u); break;
    case 14: acc = heavy_round(acc, 0x9b0e88b9u); break;
    case 15: acc = heavy_round(acc, 0x40b69ac4u); break;
    case 16: acc = heavy_round(acc, 0x6482e753u); break;
    case 17: acc = heavy_round(acc, 0x165ac496u); break;
    case 18: acc = heavy_round(acc, 0xbc04b2fdu); break;
    case 19: acc = heavy_round(acc, 0x22b1d838u); break;
    case 20: acc = heavy_round(acc, 0xf9153e37u); break;
    case 21: acc = heavy_round(acc, 0x6cac062au); break;
    case 22: acc = heavy_round(acc, 0xe5b9ff81u); break;
    case 23: acc = heavy_round(acc, 0xf64752ecu); break;
    case 24: acc = heavy_round(acc, 0x4224315bu); break;
    case 25: acc = heavy_round(acc, 0xd5d2b6feu); break;
    case 26: acc = heavy_round(acc, 0xebd97245u); break;
    case 27: acc = heavy_round(acc, 0x02be3ee0u); break;
    case 28: acc = heavy_round(acc, 0x510564bfu); break;
    case 29: acc = heavy_round(acc, 0x56802b12u); break;
    case 30: acc = heavy_round(acc, 0xe6dc4f49u); break;
    case 31: acc = heavy_round(acc, 0x7b571014u); break;
    case 32: acc = heavy_round(acc, 0xc236bc63u); break;
    case 33: acc = heavy_round(acc, 0x4df0f666u); break;
    case 34: acc = heavy_round(acc, 0x43ce1a8du); break;
    case 35: acc = heavy_round(acc, 0x643f7a88u); break;
    case 36: acc = heavy_round(acc, 0x95c25c47u); break;
    case 37: acc = heavy_round(acc, 0x4b00ecfau); break;
    case 38: acc = heavy_round(acc, 0x8e509811u); break;
    case 39: acc = heavy_round(acc, 0x6cc6723cu); break;
    case 40: acc = heavy_round(acc, 0xfbe2a86bu); break;
    case 41: acc = heavy_round(acc, 0xc87f22ceu); break;
    case 42: acc = heavy_round(acc, 0x78dfcbd5u); break;
    case 43: acc = heavy_round(acc, 0x72d02b30u); break;
    case 44: acc = heavy_round(acc, 0x39e644cfu); break;
    case 45: acc = heavy_round(acc, 0xa4c1ebe2u); break;
    case 46: acc = heavy_round(acc, 0xe755f9d9u); break;
    case 47: acc = heavy_round(acc, 0xa38a1964u); break;
    case 48: acc = heavy_round(acc, 0x0b541573u); break;
    case 49: acc = heavy_round(acc, 0x687adc36u); break;
    case 50: acc = heavy_round(acc, 0xffafa61du); break;
    case 51: acc = heavy_round(acc, 0x6d5ef0d8u); break;
    case 52: acc = heavy_round(acc, 0x234f3e57u); break;
    case 53: acc = heavy_round(acc, 0xb0cac7cau); break;
    case 54: acc = heavy_round(acc, 0x850f94a1u); break;
    case 55: acc = heavy_round(acc, 0xb72aa58cu); break;
    case 56: acc = heavy_round(acc, 0xb23b237bu); break;
    case 57: acc = heavy_round(acc, 0x5095c29eu); break;
    case 58: acc = heavy_round(acc, 0x0102c965u); break;
    case 59: acc = heavy_round(acc, 0x10ae6b80u); break;
    case 60: acc = heavy_round(acc, 0x139f68dfu); break;
    case 61: acc = heavy_round(acc, 0xfd1720b2u); break;
    case 62: acc = heavy_round(acc, 0x7f048869u); break;
    case 63: acc = heavy_round(acc, 0xd044b6b4u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

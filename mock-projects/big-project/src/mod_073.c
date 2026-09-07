#include "heavy.h"
#include "mods.h"

int mod_073(int x)
{
    static const uint32_t local[256] = {
        0xe133907cu, 0x53bab1abu, 0x39671b0eu, 0xdfd0e715u, 0x672a0d70u, 0x8adc420fu, 0x7f674822u, 0xe6bd2919u, 0x55daffa4u, 0xd16d46b3u, 0x50a1dc76u, 0x5a04295du, 0x81351b18u, 0x9a44e397u, 0xbe5bac0au, 0x3a9cabe1u,
        0x6bd853ccu, 0x16ba7cbbu, 0xdfdccadeu, 0x6327b4a5u, 0xbb89ddc0u, 0x5889b61fu, 0x63048cf2u, 0xd77487a9u, 0xdae82cf4u, 0x3ff673c3u, 0xfc1d8646u, 0xea44a8edu, 0xfc5ef568u, 0xda30d9a7u, 0x08f18adau, 0x7d4fdc71u,
        0xf25b2b1cu, 0x13f94bcbu, 0xfb1daeaeu, 0xdf882635u, 0x90bf0210u, 0xe4846e2fu, 0x5da645c2u, 0x0d9dca39u, 0x8b95ee44u, 0x549f24d3u, 0x89cae416u, 0x58c34c7du, 0x0708a3b8u, 0x061293b7u, 0x5f1a5daau, 0xb7b17101u,
        0x4c91166cu, 0x1f481edbu, 0x92c6c67eu, 0x45eb3bc5u, 0x596e7a60u, 0xbf2d6a3fu, 0x6a397292u, 0xb541f0c9u, 0x3a594394u, 0x5d5859e3u, 0xf4e6f5e6u, 0xb599140du, 0x68772608u, 0xba6b11c7u, 0x1963247au, 0x96ea6991u,
        0x9b8f15bcu, 0x44b7f5ebu, 0x09b5124eu, 0xa989f555u, 0xc57d46b0u, 0x1525aa4fu, 0xf2eb1362u, 0x20a9fb59u, 0x2ae72ce4u, 0xe85312f3u, 0xfbeebbb6u, 0x7b1eff9du, 0xcd2f7c58u, 0xb7fb53d7u, 0xe798df4au, 0xb663c621u,
        0x99aa290cu, 0xd899d0fbu, 0xee05921eu, 0xcfdd52e5u, 0x12106700u, 0xbf4e2e5fu, 0xa1282832u, 0x585ee9e9u, 0x6234aa34u, 0xd4005003u, 0xf09f3586u, 0x1dee0f2du, 0x16f6a6a8u, 0xf3c459e7u, 0xa0c88e1au, 0x2fc686b1u,
        0xea77505cu, 0x877eb00bu, 0xc91545eeu, 0xc09e5475u, 0x598cdb50u, 0x52c7f66fu, 0x2d9db102u, 0xab29bc79u, 0xf676bb84u, 0x5f111113u, 0x87f56356u, 0x9cdf42bdu, 0xacd1a4f8u, 0xa70723f7u, 0x133f30eau, 0x2afbab41u,
        0x6acb8bacu, 0x6637931bu, 0xef812dbeu, 0x55c5fa05u, 0xe397a3a0u, 0x30f4027fu, 0x3038add2u, 0x3e137309u, 0x5f2260d4u, 0x38765623u, 0xaa2e4526u, 0x110b9a4du, 0xcb057748u, 0x5f44b207u, 0xd489c7bau, 0x6e2c33d1u,
        0x80bbdafcu, 0x01d57a2bu, 0x5126498eu, 0xcb8d4395u, 0x7515bff0u, 0x9773528fu, 0xf0261ea2u, 0x9c650d99u, 0xc4ec9a24u, 0x8f611f33u, 0x42c6daf6u, 0x3dcc15ddu, 0xd3171d98u, 0x0e3e0417u, 0x1175528au, 0xedc12061u,
        0x6b9d3e4cu, 0x6fa9653bu, 0x4921995eu, 0x506d3125u, 0xa02c3040u, 0xb026e69fu, 0x33d30372u, 0x47a78c29u, 0x51ca6774u, 0x23426c43u, 0x107c24c6u, 0x20b9b56du, 0x9bcb97e8u, 0x19f41a27u, 0x5e0ed15au, 0x5c6370f1u,
        0x9404b59cu, 0x5d44544bu, 0x6dd01d2eu, 0x951ec2b5u, 0x143ff490u, 0xa12fbeafu, 0x10ec5c42u, 0x47a3eeb9u, 0x80f0c8c4u, 0x53cb3d53u, 0x754b2296u, 0x81ad78fdu, 0xc127e638u, 0x6ca7f437u, 0x85a3442au, 0xbafc2581u,
        0xdbc740ecu, 0x2077475bu, 0x60ced4feu, 0x5c9af845u, 0xedf60ce0u, 0x9ceedabfu, 0xbc5f2912u, 0xba633549u, 0x6ed4be14u, 0x30ec9263u, 0x4670d466u, 0x82c0608du, 0xf4710888u, 0x84da9247u, 0x5abfaafau, 0xe8b43e11u,
        0xedf9e03cu, 0xc7533e6bu, 0x9efac0ceu, 0x0c1ad1d5u, 0x07337930u, 0xf2053acfu, 0x5a5869e2u, 0x642e5fd9u, 0x292b4764u, 0x8ad76b73u, 0x9c6a3a36u, 0x304b6c1du, 0x4c2bfed8u, 0x854cf457u, 0x873105cau, 0x32f4baa1u,
        0x8ef1938cu, 0x2829397bu, 0x5070e09eu, 0x3b174f65u, 0x471d3980u, 0x1b53dedfu, 0xce451eb2u, 0x3f8e6e69u, 0xfee964b4u, 0x01fcc883u, 0xa2f45406u, 0x10e79badu, 0x941dc928u, 0x45001a67u, 0x5c04549au, 0xe5669b31u,
        0xec435adcu, 0xf18a388bu, 0x188e346eu, 0x434970f5u, 0xf2184dd0u, 0xcffbc6efu, 0x8ad24782u, 0x0d4c60f9u, 0xd0441604u, 0x170da993u, 0x690c21d6u, 0xb56def3du, 0x9d4b6778u, 0x5f350477u, 0xa186976au, 0xd9f2dfc1u,
        0xecc4362cu, 0xba473b9bu, 0xe5efbc3eu, 0xd0aa3685u, 0xf9c9b620u, 0x135df2ffu, 0x61ece452u, 0xe4713789u, 0x5eb05b54u, 0x3afb0ea3u, 0xb0eea3a6u, 0x48f766cdu, 0x8df9d9c8u, 0x436cb287u, 0x6744ce3au, 0x08c28851u,
    };
    uint32_t acc = 0xa0aedf51u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 73) & 255]);
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
    case 0: acc = heavy_round(acc, 0x0eb6f436u); break;
    case 1: acc = heavy_round(acc, 0xba4cde1du); break;
    case 2: acc = heavy_round(acc, 0x03aac8d8u); break;
    case 3: acc = heavy_round(acc, 0x15393657u); break;
    case 4: acc = heavy_round(acc, 0x6a7c5fcau); break;
    case 5: acc = heavy_round(acc, 0x8da44ca1u); break;
    case 6: acc = heavy_round(acc, 0x6007fd8cu); break;
    case 7: acc = heavy_round(acc, 0x0e889b7bu); break;
    case 8: acc = heavy_round(acc, 0x9654da9eu); break;
    case 9: acc = heavy_round(acc, 0x07470165u); break;
    case 10: acc = heavy_round(acc, 0x08754380u); break;
    case 11: acc = heavy_round(acc, 0xfac860dfu); break;
    case 12: acc = heavy_round(acc, 0x44fbb8b2u); break;
    case 13: acc = heavy_round(acc, 0x12304069u); break;
    case 14: acc = heavy_round(acc, 0xaccd0eb4u); break;
    case 15: acc = heavy_round(acc, 0x26486a83u); break;
    case 16: acc = heavy_round(acc, 0x6f578e06u); break;
    case 17: acc = heavy_round(acc, 0xa50d8dadu); break;
    case 18: acc = heavy_round(acc, 0xda771328u); break;
    case 19: acc = heavy_round(acc, 0xa504dc67u); break;
    case 20: acc = heavy_round(acc, 0x138e2e9au); break;
    case 21: acc = heavy_round(acc, 0x6e42ad31u); break;
    case 22: acc = heavy_round(acc, 0x509c44dcu); break;
    case 23: acc = heavy_round(acc, 0x514a1a8bu); break;
    case 24: acc = heavy_round(acc, 0x7b58ae6eu); break;
    case 25: acc = heavy_round(acc, 0xde2da2f5u); break;
    case 26: acc = heavy_round(acc, 0x9d9ad7d0u); break;
    case 27: acc = heavy_round(acc, 0x0298c8efu); break;
    case 28: acc = heavy_round(acc, 0xdd976182u); break;
    case 29: acc = heavy_round(acc, 0x53aab2f9u); break;
    case 30: acc = heavy_round(acc, 0xf9ba4004u); break;
    case 31: acc = heavy_round(acc, 0x60c9cb93u); break;
    case 32: acc = heavy_round(acc, 0x6f25dbd6u); break;
    case 33: acc = heavy_round(acc, 0x6ed8613du); break;
    case 34: acc = heavy_round(acc, 0x931f3178u); break;
    case 35: acc = heavy_round(acc, 0xf7724677u); break;
    case 36: acc = heavy_round(acc, 0x36eef16au); break;
    case 37: acc = heavy_round(acc, 0xce1b71c1u); break;
    case 38: acc = heavy_round(acc, 0xbeffa02cu); break;
    case 39: acc = heavy_round(acc, 0x6d879d9bu); break;
    case 40: acc = heavy_round(acc, 0x3940b63eu); break;
    case 41: acc = heavy_round(acc, 0xb962e885u); break;
    case 42: acc = heavy_round(acc, 0xc416c020u); break;
    case 43: acc = heavy_round(acc, 0x054374ffu); break;
    case 44: acc = heavy_round(acc, 0xce607e52u); break;
    case 45: acc = heavy_round(acc, 0x7fac0989u); break;
    case 46: acc = heavy_round(acc, 0x32590554u); break;
    case 47: acc = heavy_round(acc, 0xc847b0a3u); break;
    case 48: acc = heavy_round(acc, 0x385edda6u); break;
    case 49: acc = heavy_round(acc, 0x8ac658cdu); break;
    case 50: acc = heavy_round(acc, 0xfbe823c8u); break;
    case 51: acc = heavy_round(acc, 0x04027487u); break;
    case 52: acc = heavy_round(acc, 0xcc2ba83au); break;
    case 53: acc = heavy_round(acc, 0x6d579a51u); break;
    case 54: acc = heavy_round(acc, 0xc3470f7cu); break;
    case 55: acc = heavy_round(acc, 0xfa5224abu); break;
    case 56: acc = heavy_round(acc, 0x41e9f20eu); break;
    case 57: acc = heavy_round(acc, 0x6f1fd215u); break;
    case 58: acc = heavy_round(acc, 0x12cdfc70u); break;
    case 59: acc = heavy_round(acc, 0xea69650fu); break;
    case 60: acc = heavy_round(acc, 0x00840f22u); break;
    case 61: acc = heavy_round(acc, 0x5b7d4419u); break;
    case 62: acc = heavy_round(acc, 0x715e5ea4u); break;
    case 63: acc = heavy_round(acc, 0xd5f319b3u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

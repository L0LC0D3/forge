#include "heavy.h"
#include "mods.h"

int mod_107(int x)
{
    static const uint32_t local[256] = {
        0x93440432u, 0x397115e9u, 0x59a8e634u, 0x90cf5c03u, 0x31ead186u, 0xcaecfb2du, 0x7df0a2a8u, 0x64de25e7u, 0x925fea1au, 0xbf1e32b1u, 0xec730c5cu, 0x4a2f3c0bu, 0xafd461eeu, 0x597ac075u, 0x7bc65750u, 0x131b426fu,
        0x8e208d02u, 0x3176e879u, 0xd3e9f784u, 0x63d31d13u, 0x4297ff56u, 0x1d492ebdu, 0x723aa0f8u, 0x1dc3eff7u, 0x401d8ceau, 0x06ee5741u, 0x12a647acu, 0x6f3b1f1bu, 0x7a7749beu, 0x2f6d6605u, 0x32201fa0u, 0xab4a4e7fu,
        0x34e289d2u, 0xa45b9f09u, 0x9e549cd4u, 0x4deb6223u, 0x8fe7e126u, 0xeba0864du, 0x469d7348u, 0xd0647e07u, 0x2a6f23bau, 0x2979dfd1u, 0xc23596fcu, 0x31ec062bu, 0x6a13658eu, 0x44bfaf95u, 0x3fad3bf0u, 0x588c9e8fu,
        0x3eb6faa2u, 0xcd683999u, 0xd19dd624u, 0xae492b33u, 0x755776f6u, 0xa94c01ddu, 0x4c9e1998u, 0x9e80d017u, 0xee21ae8au, 0xcb29cc61u, 0x2a75fa4cu, 0xd792f13bu, 0x49c5b55eu, 0x77ea9d25u, 0x2692ac40u, 0x74c3329fu,
        0xe20adf72u, 0xde25b829u, 0x87baa374u, 0x745d7843u, 0x21a3c0c6u, 0x03e4a16du, 0x4b0193e8u, 0x1e19e627u, 0x8f422d5au, 0x4ea71cf1u, 0xa3fc719cu, 0x3dc0e04bu, 0x1feb392eu, 0x29a72eb5u, 0x86357090u, 0x560f0aafu,
        0xa48b3842u, 0x8e5d1ab9u, 0x2be004c4u, 0x2fd94953u, 0x66c9be96u, 0x734364fdu, 0xcdcce238u, 0x6970c037u, 0x491da02au, 0x64dad181u, 0x009dfcecu, 0xea46d35bu, 0xfe20f0feu, 0xccee6445u, 0x6b3a88e0u, 0x5ed126bfu,
        0x2b250512u, 0xac176149u, 0xca82fa14u, 0x20ad9e63u, 0x8a067066u, 0xc9814c8du, 0x76450488u, 0x2f065e47u, 0x5e4106fau, 0x9cedea11u, 0xdb6f9c3cu, 0x1b35ca6bu, 0xd143dcceu, 0x76f93dd5u, 0x9f86f530u, 0x0daa86cfu,
        0x0a0545e2u, 0xab9d8bd9u, 0x61588364u, 0x470b7773u, 0x13d6d636u, 0xc2f7581du, 0x4aeefad8u, 0xc19bc057u, 0xe87961cau, 0xf44966a1u, 0xe8c64f8cu, 0xd6dec57bu, 0x3170fc9eu, 0x6f40bb65u, 0xfa3fb580u, 0x0d7c2adfu,
        0x9498fab2u, 0x37789a69u, 0x2f55a0b4u, 0x7363d483u, 0x9ff7f006u, 0x963e87adu, 0x078fc528u, 0x2831e667u, 0xa8d3b09au, 0x66964731u, 0x463716dcu, 0xfbd2c48bu, 0x3205506eu, 0xbf7ddcf5u, 0xafc9c9d0u, 0x456712efu,
        0xad8d2382u, 0xc0718cf9u, 0x04af5204u, 0x5667b593u, 0xad66bdd6u, 0x842fdb3du, 0x6d2c6378u, 0x2e09d077u, 0xd79cf36au, 0x7dbd8bc1u, 0xca96f22cu, 0x50e2c79bu, 0x319dd83eu, 0xc3a9a285u, 0xa1ca3220u, 0xe8cc3effu,
        0x96cec052u, 0x0d916389u, 0x92da9754u, 0x91081aa3u, 0x6e603fa6u, 0x67e452cdu, 0x9209d5c8u, 0x72a47e87u, 0xf4622a3au, 0xe1e83451u, 0x55fae17cu, 0x951fceabu, 0xaa17940eu, 0xb9fd0c15u, 0xaf25ee70u, 0x874caf0fu,
        0xc18ad122u, 0xcc211e19u, 0xbc8c70a4u, 0xc47603b3u, 0x98617576u, 0x46b4ee5du, 0x31ad1c18u, 0x79c2f097u, 0x95f0550au, 0xe97f40e1u, 0x21b7e4ccu, 0x8fdad9bbu, 0x008f83deu, 0x52f119a5u, 0x0401fec0u, 0x1cc9631fu,
        0x9e2e55f2u, 0x1fa9bca9u, 0xe5b9ddf4u, 0xa22270c3u, 0x34275f46u, 0xe03aadedu, 0xfcdb3668u, 0xbb6626a7u, 0x3a5473dau, 0x292bb171u, 0x1062fc1cu, 0x20a4e8cbu, 0x5562a7aeu, 0x413ecb35u, 0x69c36310u, 0x21635b2fu,
        0x6c664ec2u, 0x31f43f39u, 0x4397df44u, 0xfbbe61d3u, 0x6daefd16u, 0x3e4e917du, 0xe99924b8u, 0xb3cf20b7u, 0x16db86aau, 0x03d68601u, 0xfdd1276cu, 0x4f4efbdbu, 0x542dff7eu, 0xc9df20c5u, 0x970f1b60u, 0x997b973fu,
        0x0b1fbb92u, 0xc309a5c9u, 0x2c9b7494u, 0xd33ad6e3u, 0x64354ee6u, 0x4509990du, 0x832be708u, 0xf37edec7u, 0xe8128d7au, 0x3aa8be91u, 0x0f1766bcu, 0x5bea12ebu, 0x03ce8b4eu, 0x540b1a55u, 0x7fca27b0u, 0x25b3174fu,
        0xc8879c62u, 0xb932f059u, 0x68799de4u, 0x6ac8cff3u, 0xfa3754b6u, 0x42c4c49du, 0x3a187d58u, 0x2f3660d7u, 0xc1c6884au, 0x7d0b5b21u, 0x028aba0cu, 0xcec72dfbu, 0x96614b1eu, 0xf93bb7e5u, 0xa5198800u, 0x12eadb5fu,
    };
    uint32_t acc = 0x225e7a5fu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 107) & 255]);
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
    case 0: acc = heavy_round(acc, 0xdd2e7b2cu); break;
    case 1: acc = heavy_round(acc, 0x042abc9bu); break;
    case 2: acc = heavy_round(acc, 0xe4e3493eu); break;
    case 3: acc = heavy_round(acc, 0x92365f85u); break;
    case 4: acc = heavy_round(acc, 0xa73dcb20u); break;
    case 5: acc = heavy_round(acc, 0x2fa103ffu); break;
    case 6: acc = heavy_round(acc, 0x331ac152u); break;
    case 7: acc = heavy_round(acc, 0x5ed37089u); break;
    case 8: acc = heavy_round(acc, 0x49634054u); break;
    case 9: acc = heavy_round(acc, 0xca4eafa3u); break;
    case 10: acc = heavy_round(acc, 0x0353d0a6u); break;
    case 11: acc = heavy_round(acc, 0x2d08afcdu); break;
    case 12: acc = heavy_round(acc, 0x26f08ec8u); break;
    case 13: acc = heavy_round(acc, 0x0111e387u); break;
    case 14: acc = heavy_round(acc, 0xa32e4b3au); break;
    case 15: acc = heavy_round(acc, 0x506be151u); break;
    case 16: acc = heavy_round(acc, 0x4e98aa7cu); break;
    case 17: acc = heavy_round(acc, 0xb43903abu); break;
    case 18: acc = heavy_round(acc, 0x767d450eu); break;
    case 19: acc = heavy_round(acc, 0xe8ad0915u); break;
    case 20: acc = heavy_round(acc, 0xe1e3c770u); break;
    case 21: acc = heavy_round(acc, 0xf066b40fu); break;
    case 22: acc = heavy_round(acc, 0xf2db1222u); break;
    case 23: acc = heavy_round(acc, 0xa01a6b19u); break;
    case 24: acc = heavy_round(acc, 0x59e359a4u); break;
    case 25: acc = heavy_round(acc, 0x23b5d8b3u); break;
    case 26: acc = heavy_round(acc, 0xaa7d4676u); break;
    case 27: acc = heavy_round(acc, 0xb0648b5du); break;
    case 28: acc = heavy_round(acc, 0xdd261518u); break;
    case 29: acc = heavy_round(acc, 0xb31d9597u); break;
    case 30: acc = heavy_round(acc, 0xba48b60au); break;
    case 31: acc = heavy_round(acc, 0x71a22de1u); break;
    case 32: acc = heavy_round(acc, 0x1aebedccu); break;
    case 33: acc = heavy_round(acc, 0xd4154ebbu); break;
    case 34: acc = heavy_round(acc, 0x2f2574deu); break;
    case 35: acc = heavy_round(acc, 0xf79456a5u); break;
    case 36: acc = heavy_round(acc, 0x5f9a17c0u); break;
    case 37: acc = heavy_round(acc, 0xce78a81fu); break;
    case 38: acc = heavy_round(acc, 0x3692d6f2u); break;
    case 39: acc = heavy_round(acc, 0x812a49a9u); break;
    case 40: acc = heavy_round(acc, 0xd66f06f4u); break;
    case 41: acc = heavy_round(acc, 0x0aab85c3u); break;
    case 42: acc = heavy_round(acc, 0x2e7b7046u); break;
    case 43: acc = heavy_round(acc, 0xbe458aedu); break;
    case 44: acc = heavy_round(acc, 0x2c766f68u); break;
    case 45: acc = heavy_round(acc, 0x8ffe0ba7u); break;
    case 46: acc = heavy_round(acc, 0xe84914dau); break;
    case 47: acc = heavy_round(acc, 0x2fbdde71u); break;
    case 48: acc = heavy_round(acc, 0x08bd451cu); break;
    case 49: acc = heavy_round(acc, 0xd7509dcbu); break;
    case 50: acc = heavy_round(acc, 0xb338d8aeu); break;
    case 51: acc = heavy_round(acc, 0x25a54835u); break;
    case 52: acc = heavy_round(acc, 0x0dc5bc10u); break;
    case 53: acc = heavy_round(acc, 0x15f7e02fu); break;
    case 54: acc = heavy_round(acc, 0x01ef0fc2u); break;
    case 55: acc = heavy_round(acc, 0x1fcc0c39u); break;
    case 56: acc = heavy_round(acc, 0x583b4844u); break;
    case 57: acc = heavy_round(acc, 0x64e0b6d3u); break;
    case 58: acc = heavy_round(acc, 0xbf4b4e16u); break;
    case 59: acc = heavy_round(acc, 0x9484ae7du); break;
    case 60: acc = heavy_round(acc, 0xaee69db8u); break;
    case 61: acc = heavy_round(acc, 0x67f445b7u); break;
    case 62: acc = heavy_round(acc, 0xa67c67aau); break;
    case 63: acc = heavy_round(acc, 0x61a7f301u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

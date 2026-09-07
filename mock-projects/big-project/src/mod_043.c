#include "heavy.h"
#include "mods.h"

int mod_043(int x)
{
    static const uint32_t local[256] = {
        0x141cc972u, 0x664a9a29u, 0x35a61d74u, 0x05eeaa43u, 0x41ef4ac6u, 0x3ab6a36du, 0xf277ade8u, 0x37753827u, 0x3d91575au, 0xcd683ef1u, 0x59572b9cu, 0xc378524bu, 0x23a8032eu, 0x4cb970b5u, 0x066eca90u, 0x7cd49cafu,
        0x96bfa242u, 0x17427cb9u, 0x1691fec4u, 0x6e7efb53u, 0xfc1fc896u, 0x4a9de6fdu, 0x7f317c38u, 0x8ae89237u, 0x3bdf4a2au, 0x7c6c7381u, 0x0b8f36ecu, 0x3fa2c55bu, 0x98383afeu, 0x21992645u, 0xb33262e0u, 0x114338bfu,
        0x701bef12u, 0x67dd4349u, 0x3d9b7414u, 0xa387d063u, 0x0106fa66u, 0x85844e8du, 0x67381e88u, 0xd1bab047u, 0x7c1530fau, 0xc3700c11u, 0xfb97563cu, 0xbb563c6bu, 0x0255a6ceu, 0xc55c7fd5u, 0x98dd4f30u, 0xe8e918cfu,
        0x5c5eafe2u, 0xd463edd9u, 0x10777d64u, 0xed3a2973u, 0x8121e036u, 0x2fc2da1du, 0x991094d8u, 0x26ac9257u, 0x40000bcau, 0xa7dc08a1u, 0x45c4898cu, 0x84e3b77bu, 0xa21d469eu, 0x077c7d65u, 0x76948f80u, 0x76a73cdfu,
        0xd6f4e4b2u, 0x0f5f7c69u, 0x361b1ab4u, 0x64070683u, 0xc02d7a06u, 0x07f289adu, 0xb87fdf28u, 0x58bf3867u, 0x70acda9au, 0x2d596931u, 0x6fabd0dcu, 0xc2dc368bu, 0x32ec1a6eu, 0x79b21ef5u, 0x68bd23d0u, 0x699ea4efu,
        0xea8b8d82u, 0x9198eef9u, 0xe6bb4c04u, 0x009f6793u, 0xe526c7d6u, 0xd6ec5d3du, 0x6e8afd78u, 0xfb33a277u, 0x6e689d6au, 0xe5d12dc1u, 0xb8222c2cu, 0x8410b99bu, 0xbb5f223eu, 0xfff66485u, 0x38fc0c20u, 0xbd3050ffu,
        0x010faa52u, 0x2a194589u, 0x3bcd1154u, 0xabf44ca3u, 0xca4ac9a6u, 0xffc954cdu, 0xb976efc8u, 0x758ad087u, 0xe0c0543au, 0x816c5651u, 0x673c9b7cu, 0xcf9240abu, 0x5d535e0eu, 0x60824e15u, 0xae364870u, 0xc8fd410fu,
        0xb3ae3b22u, 0x8e298019u, 0x80056aa4u, 0x4f36b5b3u, 0xcd167f76u, 0x0fe2705du, 0x3cc8b618u, 0x1385c297u, 0x8680ff0au, 0x5e93e2e1u, 0x1e501eccu, 0xb4b1cbbbu, 0x25e5cddeu, 0xd3cedba5u, 0xdc90d8c0u, 0x50e6751fu,
        0x9ad43ff2u, 0xe9529ea9u, 0x7f5957f4u, 0xe3d7a2c3u, 0x9e46e946u, 0x4ed0afedu, 0x91455068u, 0x152578a7u, 0x05b79ddau, 0x19f0d371u, 0x27f1b61cu, 0x5b005acbu, 0xdd7371aeu, 0x94950d35u, 0x7570bd10u, 0x950ced2fu,
        0x1e2eb8c2u, 0x6d5da139u, 0xd6fdd944u, 0x838813d3u, 0x11d90716u, 0x4e6d137du, 0x94f1beb8u, 0xbeaaf2b7u, 0xbbb130aau, 0x1e6c2801u, 0xc7f6616cu, 0x124eeddbu, 0xd799497eu, 0x6fcde2c5u, 0x177af560u, 0x61d1a93fu,
        0x44aaa592u, 0xe25387c9u, 0x4567ee94u, 0x783908e3u, 0xef09d8e6u, 0x7ad09b0du, 0xbb130108u, 0x689730c7u, 0x8cfab77au, 0x352ee091u, 0x8b7320bcu, 0x62ae84ebu, 0xc334554eu, 0x54b25c55u, 0x9e9481b0u, 0x1fd5a94fu,
        0x84750662u, 0x367d5259u, 0xfa4c97e4u, 0x4c1b81f3u, 0xc0565eb6u, 0xaa54469du, 0x5c2e1758u, 0x8fab32d7u, 0xb561324au, 0x15a1fd21u, 0x98bcf40cu, 0x1c701ffbu, 0x7a61951eu, 0xe4bb79e5u, 0x73e26200u, 0xe3f9ed5fu,
        0x92fadb32u, 0x0e6400e9u, 0xe6a0d534u, 0xd9a07f03u, 0xa37b9886u, 0xad91162du, 0x060801a8u, 0xe4e7f8e7u, 0x97f1a11au, 0xf56e7db1u, 0xff68db5cu, 0x6824bf0bu, 0xd27e08eeu, 0x03a23b75u, 0xddc99650u, 0x7f5f756fu,
        0x34e92402u, 0x54d09379u, 0x0c99a684u, 0x5b790013u, 0x19768656u, 0xdf6009bdu, 0xcba5bff8u, 0x5d8e82f7u, 0x8ef903eau, 0x187d6241u, 0x084bd6acu, 0xd69d621bu, 0x6c26b0beu, 0x675fa105u, 0x4fef1ea0u, 0x8f67417fu,
        0x0e2ce0d2u, 0xcacc0a09u, 0xcfac0bd4u, 0x7c960523u, 0xd6842826u, 0xb4da214du, 0x954c5248u, 0x431fd107u, 0xbc045abau, 0x60f7aad1u, 0x857ae5fcu, 0x70eb092bu, 0x83388c8eu, 0x282caa95u, 0xbb37faf0u, 0x8db2518fu,
        0x71f311a2u, 0x979f6499u, 0x448d0524u, 0x68288e33u, 0x92217df6u, 0x4d585cddu, 0x7080b898u, 0x435ce317u, 0xd7e0a58au, 0xdf465761u, 0x224b094cu, 0xc85eb43bu, 0xbed09c5eu, 0x50825825u, 0xddc92b40u, 0xe021a59fu,
    };
    uint32_t acc = 0xe4fc449fu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 43) & 255]);
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
    case 0: acc = heavy_round(acc, 0x88ee2b6cu); break;
    case 1: acc = heavy_round(acc, 0x53602fdbu); break;
    case 2: acc = heavy_round(acc, 0x77c5a37eu); break;
    case 3: acc = heavy_round(acc, 0x07ea74c5u); break;
    case 4: acc = heavy_round(acc, 0x751a5f60u); break;
    case 5: acc = heavy_round(acc, 0x01260b3fu); break;
    case 6: acc = heavy_round(acc, 0x8cff9f92u); break;
    case 7: acc = heavy_round(acc, 0xd44039c9u); break;
    case 8: acc = heavy_round(acc, 0x3f58f894u); break;
    case 9: acc = heavy_round(acc, 0x2d728ae3u); break;
    case 10: acc = heavy_round(acc, 0xbec172e6u); break;
    case 11: acc = heavy_round(acc, 0x387f6d0du); break;
    case 12: acc = heavy_round(acc, 0x869fab08u); break;
    case 13: acc = heavy_round(acc, 0x6477d2c7u); break;
    case 14: acc = heavy_round(acc, 0xa9eef17au); break;
    case 15: acc = heavy_round(acc, 0xa6b1d291u); break;
    case 16: acc = heavy_round(acc, 0x1d856abcu); break;
    case 17: acc = heavy_round(acc, 0x511846ebu); break;
    case 18: acc = heavy_round(acc, 0xf3df2f4eu); break;
    case 19: acc = heavy_round(acc, 0x2a3b6e55u); break;
    case 20: acc = heavy_round(acc, 0xd5b66bb0u); break;
    case 21: acc = heavy_round(acc, 0x49ca8b4fu); break;
    case 22: acc = heavy_round(acc, 0x49f08062u); break;
    case 23: acc = heavy_round(acc, 0x5a5e8459u); break;
    case 24: acc = heavy_round(acc, 0x68a821e4u); break;
    case 25: acc = heavy_round(acc, 0xd9bd83f3u); break;
    case 26: acc = heavy_round(acc, 0xb05c78b6u); break;
    case 27: acc = heavy_round(acc, 0xd2ff989du); break;
    case 28: acc = heavy_round(acc, 0xb18d4158u); break;
    case 29: acc = heavy_round(acc, 0xea3c54d7u); break;
    case 30: acc = heavy_round(acc, 0x744bec4au); break;
    case 31: acc = heavy_round(acc, 0x77a96f21u); break;
    case 32: acc = heavy_round(acc, 0xac89be0cu); break;
    case 33: acc = heavy_round(acc, 0x705261fbu); break;
    case 34: acc = heavy_round(acc, 0x552aef1eu); break;
    case 35: acc = heavy_round(acc, 0x04d10be5u); break;
    case 36: acc = heavy_round(acc, 0xef26cc00u); break;
    case 37: acc = heavy_round(acc, 0xc2af4f5fu); break;
    case 38: acc = heavy_round(acc, 0xb93cd532u); break;
    case 39: acc = heavy_round(acc, 0xb359b2e9u); break;
    case 40: acc = heavy_round(acc, 0x8e06df34u); break;
    case 41: acc = heavy_round(acc, 0xfbcb0103u); break;
    case 42: acc = heavy_round(acc, 0x01703286u); break;
    case 43: acc = heavy_round(acc, 0xf258e82du); break;
    case 44: acc = heavy_round(acc, 0xa3d9aba8u); break;
    case 45: acc = heavy_round(acc, 0x0c499ae7u); break;
    case 46: acc = heavy_round(acc, 0x5072db1au); break;
    case 47: acc = heavy_round(acc, 0x7b1a6fb1u); break;
    case 48: acc = heavy_round(acc, 0xed90255cu); break;
    case 49: acc = heavy_round(acc, 0x619f810bu); break;
    case 50: acc = heavy_round(acc, 0x5905e2eeu); break;
    case 51: acc = heavy_round(acc, 0x43644d75u); break;
    case 52: acc = heavy_round(acc, 0x2fd08050u); break;
    case 53: acc = heavy_round(acc, 0x44f5576fu); break;
    case 54: acc = heavy_round(acc, 0x07919e02u); break;
    case 55: acc = heavy_round(acc, 0x11fac579u); break;
    case 56: acc = heavy_round(acc, 0x59aa3084u); break;
    case 57: acc = heavy_round(acc, 0x564c0213u); break;
    case 58: acc = heavy_round(acc, 0x1af9a056u); break;
    case 59: acc = heavy_round(acc, 0xb9645bbdu); break;
    case 60: acc = heavy_round(acc, 0x9889e9f8u); break;
    case 61: acc = heavy_round(acc, 0xc7e0a4f7u); break;
    case 62: acc = heavy_round(acc, 0x00b0bdeau); break;
    case 63: acc = heavy_round(acc, 0x3cedd441u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

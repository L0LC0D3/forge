#include "heavy.h"
#include "mods.h"

int mod_046(int x)
{
    static const uint32_t local[256] = {
        0x4639a9adu, 0x58dc7f28u, 0x05335867u, 0x97527a9au, 0xc1828931u, 0x788270dcu, 0x5982568bu, 0x2a1bba6eu, 0xa0dd3ef5u, 0xb4adc3d0u, 0xc496c4efu, 0x85e52d82u, 0xcae60ef9u, 0xaa65ec04u, 0x8c098793u, 0x624a67d6u,
        0x037b7d3du, 0xd88f9d78u, 0xd52fc277u, 0x14f63d6au, 0x68c24dc1u, 0x9120cc2cu, 0x9cbed99bu, 0x7cf6c23eu, 0xde698485u, 0x8394ac20u, 0xf6b070ffu, 0x19514a52u, 0x2b2e6589u, 0xd49fb154u, 0xfa666ca3u, 0x5ed669a6u,
        0xcca074cdu, 0xf7238fc8u, 0xff0ef087u, 0xa135f43au, 0xc5257651u, 0xba633b7cu, 0x0c4860abu, 0x2352fe0eu, 0xe83d6e15u, 0x4176e870u, 0xa305610fu, 0x22d7db22u, 0x6906a019u, 0xd8000aa4u, 0x42b0d5b3u, 0xf30a1f76u,
        0xaf01905du, 0xd81d5618u, 0x4e91e297u, 0x7ade9f0au, 0xb51502e1u, 0x159ebeccu, 0x376febbbu, 0xaa4d6ddeu, 0x76d1fba5u, 0x827978c0u, 0x0d76951fu, 0xbae5dff2u, 0x2ff7bea9u, 0x007bf7f4u, 0xde59c2c3u, 0x4fa28946u,
        0x7237cfedu, 0x9441f068u, 0x83b998a7u, 0xc7fd3ddau, 0x5539f371u, 0x6d68561cu, 0xc5c67acbu, 0x5a4311aeu, 0x44e02d35u, 0x78015d10u, 0xf6250d2fu, 0xc92858c2u, 0x31cac139u, 0x6b487944u, 0x671233d3u, 0xc89ca716u,
        0x281c337du, 0x89965eb8u, 0x62c712b7u, 0x65ded0aau, 0x907d4801u, 0x8595016cu, 0x871d0ddbu, 0x06d0e97eu, 0x9f6102c5u, 0x40b39560u, 0xa971c93fu, 0xd48c4592u, 0xb688a7c9u, 0x56da8e94u, 0xa6cb28e3u, 0xa53578e6u,
        0xbcc7bb0du, 0xab5fa108u, 0xc43b50c7u, 0xb910577au, 0xb0080091u, 0x6b39c0bcu, 0x8384a4ebu, 0xded3f54eu, 0xf58d7c55u, 0x387521b0u, 0x0ffdc94fu, 0xd33ea662u, 0x2c7a7259u, 0x72e737e4u, 0xa7b5a1f3u, 0xefe9feb6u,
        0x8693669du, 0xd222b758u, 0xa4d752d7u, 0x7d5ed24au, 0xeb431d21u, 0xc4ab940cu, 0x0b4e3ffbu, 0x3c69351eu, 0x68de99e5u, 0x486b0200u, 0xbeaa0d5fu, 0xfaac7b32u, 0xb82920e9u, 0x30637534u, 0xc4429f03u, 0x46773886u,
        0xd618362du, 0x0ba4a1a8u, 0x359c18e7u, 0x95d7411au, 0xf7d79db1u, 0x217f7b5cu, 0xc70adf0bu, 0x74eda8eeu, 0x5d0d5b75u, 0x36fa3650u, 0x0697956fu, 0x8f82c402u, 0xc45db379u, 0x11844684u, 0xb7232013u, 0xa9da2656u,
        0x862f29bdu, 0xeaea5ff8u, 0xebcaa2f7u, 0xdcc6a3eau, 0x99ae8241u, 0x4a8a76acu, 0xc78b821bu, 0xa8fe50beu, 0x0812c105u, 0xf7c7bea0u, 0x0527617fu, 0xb5ae80d2u, 0x92212a09u, 0xf9beabd4u, 0xab482523u, 0x4e4fc826u,
        0x8bf1414du, 0xd838f248u, 0x90e3f107u, 0xf3b9fabau, 0x32f0cad1u, 0x91e185fcu, 0x95e1292bu, 0x94782c8eu, 0x0227ca95u, 0xfbb89af0u, 0xb3fa718fu, 0x405cb1a2u, 0xc8bc8499u, 0x7dc7a524u, 0x4be2ae33u, 0x6b551df6u,
        0x86b77cddu, 0x61155898u, 0x52a90317u, 0x137e458au, 0x54077761u, 0x22d9a94cu, 0x435cd43bu, 0x5e783c5eu, 0xd5c57825u, 0x80f1cb40u, 0xf8f1c59fu, 0x81fa5672u, 0x05b8c329u, 0x33943274u, 0xd463bb43u, 0x0ba727c6u,
        0x501adc6du, 0x884492e8u, 0xd31ad927u, 0xdc20845au, 0x4b9b87f1u, 0x5207e09cu, 0x798f834bu, 0x695b802eu, 0x8fa4c9b5u, 0xe2d84f90u, 0xb62e5dafu, 0x1c346f42u, 0x6cdee5b9u, 0x025953c4u, 0x207c4c53u, 0xdd42e596u,
        0x8bf45ffdu, 0x15cba138u, 0x387a7337u, 0x24edb72au, 0xb695fc81u, 0xed412becu, 0x8a4a365bu, 0x22bef7feu, 0x4ebebf45u, 0xea1127e0u, 0xda1139bfu, 0xcff7fc12u, 0x3837ec49u, 0x728c0914u, 0xbc1d6163u, 0x01655766u,
        0x385d078du, 0xe6ef8388u, 0x3d48d147u, 0xcc72ddfau, 0x101fd511u, 0x8b9a8b3cu, 0x7f9ded6bu, 0xd37fa3ceu, 0xd44c58d5u, 0x1c815430u, 0x6f3b59cfu, 0x4d71fce2u, 0x480cd6d9u, 0xfde15264u, 0xf377fa73u, 0xdc8b7d36u,
        0x3dadd31du, 0x3e3539d8u, 0x4046f357u, 0x887cf8cau, 0x41a211a1u, 0xdd68fe8cu, 0x2bdba87bu, 0x6fba839eu, 0x13c69665u, 0x0d4dd480u, 0xac8dbddfu, 0x040f71b2u, 0xb2e6a569u, 0x5f4e2fb4u, 0xe2fd1783u, 0xe6725706u,
    };
    uint32_t acc = 0x1fe91a06u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 46) & 255]);
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
    case 0: acc = heavy_round(acc, 0x5dc472ddu); break;
    case 1: acc = heavy_round(acc, 0x7cc1d698u); break;
    case 2: acc = heavy_round(acc, 0xc29f6917u); break;
    case 3: acc = heavy_round(acc, 0xe5a5738au); break;
    case 4: acc = heavy_round(acc, 0x1a58cd61u); break;
    case 5: acc = heavy_round(acc, 0x033f074cu); break;
    case 6: acc = heavy_round(acc, 0x39f69a3bu); break;
    case 7: acc = heavy_round(acc, 0x7f2b4a5eu); break;
    case 8: acc = heavy_round(acc, 0x34712e25u); break;
    case 9: acc = heavy_round(acc, 0x802e0940u); break;
    case 10: acc = heavy_round(acc, 0xfdb4eb9fu); break;
    case 11: acc = heavy_round(acc, 0x37074472u); break;
    case 12: acc = heavy_round(acc, 0x9c34d929u); break;
    case 13: acc = heavy_round(acc, 0x6ea55074u); break;
    case 14: acc = heavy_round(acc, 0x94364143u); break;
    case 15: acc = heavy_round(acc, 0xc0bbf5c6u); break;
    case 16: acc = heavy_round(acc, 0xea3d526du); break;
    case 17: acc = heavy_round(acc, 0x9d0890e8u); break;
    case 18: acc = heavy_round(acc, 0xc642bf27u); break;
    case 19: acc = heavy_round(acc, 0x90cb325au); break;
    case 20: acc = heavy_round(acc, 0x779a5df1u); break;
    case 21: acc = heavy_round(acc, 0xfd3cbe9cu); break;
    case 22: acc = heavy_round(acc, 0xe9b2c94bu); break;
    case 23: acc = heavy_round(acc, 0xff0a0e2eu); break;
    case 24: acc = heavy_round(acc, 0x9415ffb5u); break;
    case 25: acc = heavy_round(acc, 0x7e1c0d90u); break;
    case 26: acc = heavy_round(acc, 0x245303afu); break;
    case 27: acc = heavy_round(acc, 0x8434dd42u); break;
    case 28: acc = heavy_round(acc, 0x9eb87bb9u); break;
    case 29: acc = heavy_round(acc, 0xe229f1c4u); break;
    case 30: acc = heavy_round(acc, 0x0b085253u); break;
    case 31: acc = heavy_round(acc, 0x26c33396u); break;
    case 32: acc = heavy_round(acc, 0x048c55fdu); break;
    case 33: acc = heavy_round(acc, 0xc7871f38u); break;
    case 34: acc = heavy_round(acc, 0x4133d937u); break;
    case 35: acc = heavy_round(acc, 0x6afbe52au); break;
    case 36: acc = heavy_round(acc, 0x69a25281u); break;
    case 37: acc = heavy_round(acc, 0x552589ecu); break;
    case 38: acc = heavy_round(acc, 0xfc56fc5bu); break;
    case 39: acc = heavy_round(acc, 0x5a4905feu); break;
    case 40: acc = heavy_round(acc, 0x80557545u); break;
    case 41: acc = heavy_round(acc, 0x413c65e0u); break;
    case 42: acc = heavy_round(acc, 0x8ff75fbfu); break;
    case 43: acc = heavy_round(acc, 0x75cbea12u); break;
    case 44: acc = heavy_round(acc, 0x52cf0249u); break;
    case 45: acc = heavy_round(acc, 0x24fc2714u); break;
    case 46: acc = heavy_round(acc, 0x65c2e763u); break;
    case 47: acc = heavy_round(acc, 0xa8312566u); break;
    case 48: acc = heavy_round(acc, 0x02ca7d8du); break;
    case 49: acc = heavy_round(acc, 0x51828188u); break;
    case 50: acc = heavy_round(acc, 0x05f3b747u); break;
    case 51: acc = heavy_round(acc, 0x8ac48bfau); break;
    case 52: acc = heavy_round(acc, 0x4399ab11u); break;
    case 53: acc = heavy_round(acc, 0x9a0e693cu); break;
    case 54: acc = heavy_round(acc, 0x13f4336bu); break;
    case 55: acc = heavy_round(acc, 0x91c531ceu); break;
    case 56: acc = heavy_round(acc, 0x12688ed5u); break;
    case 57: acc = heavy_round(acc, 0xc7741230u); break;
    case 58: acc = heavy_round(acc, 0x6342ffcfu); break;
    case 59: acc = heavy_round(acc, 0xf3f96ae2u); break;
    case 60: acc = heavy_round(acc, 0x70c16cd9u); break;
    case 61: acc = heavy_round(acc, 0xa8d0f064u); break;
    case 62: acc = heavy_round(acc, 0x88970073u); break;
    case 63: acc = heavy_round(acc, 0x6182cb36u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_006(int x)
{
    static const uint32_t local[256] = {
        0x472de325u, 0x50e13a40u, 0xc554689fu, 0x1aee9d72u, 0x0d6a5e29u, 0x7e5b1174u, 0xa4570e43u, 0xa9145ec6u, 0x3190a76du, 0xbd21e1e8u, 0x66d1dc27u, 0x929dab5au, 0x3c8082f1u, 0x4caa9f9cu, 0xb2ed364bu, 0x236f972eu,
        0x42d3f4b5u, 0xfa5f7e90u, 0x5bc5c0afu, 0x81567642u, 0xcd6340b9u, 0x8853f2c4u, 0x50905f53u, 0x28d9dc96u, 0xa808eafdu, 0x4538b038u, 0x8bfe3637u, 0xed509e2au, 0xdaa5b781u, 0x498faaecu, 0xe7e0a95bu, 0x1034cefeu,
        0x5064aa45u, 0x0e2016e0u, 0xf90d5cbfu, 0x43b7c312u, 0xf13f0749u, 0x4faa6814u, 0x57823463u, 0xac960e66u, 0x31c0528du, 0x73dc5288u, 0xf6c95447u, 0x372b84fau, 0x5d0a5011u, 0xe384ca3cu, 0x729d206bu, 0xd3c73aceu,
        0x1d1903d5u, 0x0e080330u, 0x73cc3ccfu, 0x6e3f83e2u, 0x0546b1d9u, 0x0a137164u, 0x915d8d73u, 0xb4c5f436u, 0x230fde1du, 0x0791c8d8u, 0x51f43657u, 0x01fb5fcau, 0xd9174ca1u, 0x06defd8cu, 0x31739b7bu, 0xfe43da9eu,
        0x886a0165u, 0x893c4380u, 0xcee360dfu, 0xcc5ab8b2u, 0xcc034069u, 0x2e840eb4u, 0xa6936a83u, 0xd5268e06u, 0x4a908dadu, 0x741e1328u, 0xfc7fdc67u, 0x86cd2e9au, 0x6275ad31u, 0x093344dcu, 0xdaf51a8bu, 0x9b07ae6eu,
        0x3410a2f5u, 0x6c21d7d0u, 0x4973c8efu, 0xb8b66182u, 0xce3db2f9u, 0xc5314004u, 0x1fd4cb93u, 0x84b4dbd6u, 0x811b613du, 0x32863178u, 0x19ad4677u, 0x75edf16au, 0x9b0e71c1u, 0xf956a02cu, 0x0df29d9bu, 0x00afb63eu,
        0x1405e885u, 0x505dc020u, 0x6ede74ffu, 0xed3f7e52u, 0xeaff0989u, 0xb7900554u, 0x7612b0a3u, 0xedaddda6u, 0x39c958cdu, 0x110f23c8u, 0xa0fd7487u, 0xc6eaa83au, 0x430a9a51u, 0xef5e0f7cu, 0x617d24abu, 0xa118f20eu,
        0xfe82d215u, 0xccd4fc70u, 0x26c4650fu, 0x53230f22u, 0xe7904419u, 0x20555ea4u, 0x227e19b3u, 0xbd8e9376u, 0x11f3745du, 0x833dea18u, 0x6e316697u, 0x8890530au, 0xc8d326e1u, 0x5c9e92ccu, 0x74e5afbbu, 0xd96061deu,
        0x3c005fa5u, 0xc5ac8cc0u, 0xc506991fu, 0xd2ce13f2u, 0xff7a62a9u, 0x9b764bf4u, 0xae8806c3u, 0xf513fd46u, 0x6132b3edu, 0xf1d78468u, 0x514a1ca7u, 0xb0ebf1dau, 0xd9111771u, 0x5bad2a1cu, 0xffbd3ecbu, 0xc1e305aeu,
        0x17379135u, 0xbc497110u, 0x19c6112fu, 0x23ed8cc2u, 0x74866539u, 0x9627cd44u, 0xc3e177d3u, 0xb83b1b16u, 0xc960177du, 0x0ae0f2b8u, 0x1e8896b7u, 0xed4a84aau, 0xeead6c01u, 0x005ed56cu, 0xe1d4d1dbu, 0xfe3ddd7eu,
        0x6d2166c5u, 0x1f50a960u, 0x8163cd3fu, 0x9d6e7992u, 0x1ebd4bc9u, 0x9edee294u, 0x3c7b6ce3u, 0x1e40ece6u, 0xc6949f0du, 0x119f3508u, 0xbe6dd4c7u, 0x72390b7au, 0xe2d12491u, 0xa7c894bcu, 0x333d68ebu, 0x8d4de94eu,
        0x3cf6e055u, 0x9aa735b0u, 0xf480cd4fu, 0x057dda62u, 0xfc681659u, 0xb5508be4u, 0x3286e5f3u, 0x01a272b6u, 0x3f294a9du, 0x2e974b58u, 0x3dbad6d7u, 0xcb84864au, 0x7ce54121u, 0x483f680cu, 0x544803fbu, 0x9930291eu,
        0x3830fde5u, 0x67721600u, 0x17fe115fu, 0x6188af32u, 0xc20fc4e9u, 0x9a71c934u, 0x1074e303u, 0xd01cac86u, 0x13b71a2du, 0xbf8e35a8u, 0xdd709ce7u, 0xac39f51au, 0x0292c1b1u, 0xc1584f5cu, 0xfd85a30bu, 0x47419ceeu,
        0x5288bf75u, 0x9c164a50u, 0x4cfc996fu, 0xc63bf802u, 0x6a7d5779u, 0x20779a84u, 0xa0f66413u, 0x5aac9a56u, 0xaf170dbdu, 0xa788f3f8u, 0x22d026f7u, 0xbea657eau, 0xc7c2a641u, 0x2be84aacu, 0x4fc7461bu, 0x881f44beu,
        0x51f72505u, 0x7c38d2a0u, 0xc0dd657fu, 0x2784b4d2u, 0xc6b9ce09u, 0x7ad6ffd4u, 0x1efc6923u, 0xa58f3c26u, 0x9662254du, 0x9ecc8648u, 0xe75a7507u, 0x7456aebau, 0xbe9deed1u, 0x2a0459fcu, 0xe41ded2bu, 0xe7a6208eu,
        0x5eb52e95u, 0xc8beaef0u, 0x7d41758fu, 0x288fe5a2u, 0x0e0e2899u, 0x8e44f924u, 0x45b7f233u, 0xb84191f6u, 0xf8f160ddu, 0x82ddec98u, 0x68d08717u, 0xd617f98au, 0x078d9b61u, 0x37017d4cu, 0xdbda983bu, 0x5cf3305eu,
    };
    uint32_t acc = 0x289a935eu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 6) & 255]);
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
    case 0: acc = heavy_round(acc, 0x5e5b28d5u); break;
    case 1: acc = heavy_round(acc, 0x5621e430u); break;
    case 2: acc = heavy_round(acc, 0x65c2a9cfu); break;
    case 3: acc = heavy_round(acc, 0x8c310ce2u); break;
    case 4: acc = heavy_round(acc, 0x2820a6d9u); break;
    case 5: acc = heavy_round(acc, 0x93c2e264u); break;
    case 6: acc = heavy_round(acc, 0x7f4c4a73u); break;
    case 7: acc = heavy_round(acc, 0x5e338d36u); break;
    case 8: acc = heavy_round(acc, 0x5996a31du); break;
    case 9: acc = heavy_round(acc, 0xbbe7c9d8u); break;
    case 10: acc = heavy_round(acc, 0xd7b84357u); break;
    case 11: acc = heavy_round(acc, 0x2f1e08cau); break;
    case 12: acc = heavy_round(acc, 0x742fe1a1u); break;
    case 13: acc = heavy_round(acc, 0x3f7c8e8cu); break;
    case 14: acc = heavy_round(acc, 0x0239f87bu); break;
    case 15: acc = heavy_round(acc, 0xb664939eu); break;
    case 16: acc = heavy_round(acc, 0xfcc96665u); break;
    case 17: acc = heavy_round(acc, 0x51526480u); break;
    case 18: acc = heavy_round(acc, 0x02290ddfu); break;
    case 19: acc = heavy_round(acc, 0x0ed281b2u); break;
    case 20: acc = heavy_round(acc, 0x872e7569u); break;
    case 21: acc = heavy_round(acc, 0x13d3bfb4u); break;
    case 22: acc = heavy_round(acc, 0x55256783u); break;
    case 23: acc = heavy_round(acc, 0x925e6706u); break;
    case 24: acc = heavy_round(acc, 0x57dc92adu); break;
    case 25: acc = heavy_round(acc, 0xe7f85428u); break;
    case 26: acc = heavy_round(acc, 0x2d7b2967u); break;
    case 27: acc = heavy_round(acc, 0xa93e179au); break;
    case 28: acc = heavy_round(acc, 0xe0078231u); break;
    case 29: acc = heavy_round(acc, 0x517915dcu); break;
    case 30: acc = heavy_round(acc, 0xc0c6b78bu); break;
    case 31: acc = heavy_round(acc, 0x203aa76eu); break;
    case 32: acc = heavy_round(acc, 0x97dd47f5u); break;
    case 33: acc = heavy_round(acc, 0x244438d0u); break;
    case 34: acc = heavy_round(acc, 0xced8b5efu); break;
    case 35: acc = heavy_round(acc, 0xda446a82u); break;
    case 36: acc = heavy_round(acc, 0xfb0a27f9u); break;
    case 37: acc = heavy_round(acc, 0xef313104u); break;
    case 38: acc = heavy_round(acc, 0xc4da0893u); break;
    case 39: acc = heavy_round(acc, 0xf146f4d6u); break;
    case 40: acc = heavy_round(acc, 0xab7ca63du); break;
    case 41: acc = heavy_round(acc, 0xd7f4b278u); break;
    case 42: acc = heavy_round(acc, 0x20afd377u); break;
    case 43: acc = heavy_round(acc, 0x9a3d1a6au); break;
    case 44: acc = heavy_round(acc, 0xfe6986c1u); break;
    case 45: acc = heavy_round(acc, 0x5c54b12cu); break;
    case 46: acc = heavy_round(acc, 0xf89f7a9bu); break;
    case 47: acc = heavy_round(acc, 0x6084ef3eu); break;
    case 48: acc = heavy_round(acc, 0x778fcd85u); break;
    case 49: acc = heavy_round(acc, 0xac9c6120u); break;
    case 50: acc = heavy_round(acc, 0xcb32a1ffu); break;
    case 51: acc = heavy_round(acc, 0x8c73c752u); break;
    case 52: acc = heavy_round(acc, 0xf6bcbe89u); break;
    case 53: acc = heavy_round(acc, 0x93503654u); break;
    case 54: acc = heavy_round(acc, 0xfb5b2da3u); break;
    case 55: acc = heavy_round(acc, 0xc92a36a6u); break;
    case 56: acc = heavy_round(acc, 0x9b8fddcdu); break;
    case 57: acc = heavy_round(acc, 0x1e21e4c8u); break;
    case 58: acc = heavy_round(acc, 0x9cd74187u); break;
    case 59: acc = heavy_round(acc, 0x5da8113au); break;
    case 60: acc = heavy_round(acc, 0xa37eef51u); break;
    case 61: acc = heavy_round(acc, 0x7c24607cu); break;
    case 62: acc = heavy_round(acc, 0x74d541abu); break;
    case 63: acc = heavy_round(acc, 0x8d206b0eu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

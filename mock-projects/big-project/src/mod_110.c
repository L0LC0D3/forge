#include "heavy.h"
#include "mods.h"

int mod_110(int x)
{
    static const uint32_t local[256] = {
        0xae63e96du, 0xb2283be8u, 0x2a006e27u, 0x4c27155au, 0xc2b6e4f1u, 0x5a79999cu, 0x480be84bu, 0x52eaa12eu, 0xac0f76b5u, 0xba311890u, 0xa6c692afu, 0x260d2042u, 0x8c65e2b9u, 0x1a022cc4u, 0xcb855153u, 0xa1b62696u,
        0xcab4acfdu, 0x693d8a38u, 0x99194837u, 0x22dc882au, 0x2bfc9981u, 0x1b0524ecu, 0x4373db5bu, 0x3e9a58feu, 0x9a88ac45u, 0x5cc030e0u, 0x4b8aaebfu, 0x64c0ed12u, 0x5f722949u, 0x99cf2214u, 0xe77ba663u, 0x81acd866u,
        0xd264948du, 0x807fac88u, 0x7af0e647u, 0xf359eefau, 0xc3a1b211u, 0xfc40c43cu, 0x03c4d26bu, 0x65b744ceu, 0x244585d5u, 0xd9169d30u, 0x9ee60ecfu, 0x6a3b2de2u, 0xb0ca53d9u, 0x044eab64u, 0x897b7f73u, 0xdeb73e36u,
        0xa1cca01du, 0x9e73a2d8u, 0x42484857u, 0x776c49cau, 0xa70f2ea1u, 0x5281778cu, 0xaf4fcd7bu, 0x005e649eu, 0xb0bf0365u, 0xa6595d80u, 0x6bb9b2dfu, 0x29e8e2b2u, 0x4af76269u, 0x3875c8b4u, 0xa1f5dc83u, 0xf4925806u,
        0x8f85cfadu, 0x1ede6d28u, 0x16206e67u, 0x1020989au, 0xf1ee0f31u, 0xdb5c3edcu, 0x44a5cc8bu, 0xc1ecb86eu, 0x69ae24f5u, 0x98ed71d0u, 0xb9269aefu, 0x26770b82u, 0xbec254f9u, 0xa6797a04u, 0x019bbd93u, 0xe23b25d6u,
        0xfc69233du, 0x62c50b78u, 0xe1ba5877u, 0x95c3db6au, 0x4e2753c1u, 0x0da61a2cu, 0xaa97cf9bu, 0xa8ff403eu, 0xcb0bea85u, 0x3277da20u, 0xda8dc6ffu, 0x41d2a852u, 0xf3342b89u, 0x9fcebf54u, 0x695e22a3u, 0x79eea7a6u,
        0xe38f9acdu, 0x206c7dc8u, 0x64970687u, 0x27e3123au, 0x83e3fc51u, 0x6974097cu, 0xc036d6abu, 0xcf72fc0eu, 0x33115415u, 0xf1dd9670u, 0x7f90370fu, 0x8d28b922u, 0xb595e619u, 0xa72a98a4u, 0x9a6e0bb3u, 0x1129dd76u,
        0x6a52365du, 0xb359c418u, 0x42777897u, 0xfd4b3d0au, 0x098d08e1u, 0xc81b0cccu, 0x6cd3e1bbu, 0x3a64ebdeu, 0x723761a5u, 0xa343a6c0u, 0xc40eeb1fu, 0x18e63df2u, 0x497084a9u, 0xc08205f4u, 0x663c78c3u, 0x50a9c746u,
        0x7049f5edu, 0x6c51de68u, 0x135caea7u, 0x34095bdau, 0x93cb7971u, 0xac30241cu, 0xaffff0cbu, 0xaa320faeu, 0x5b371335u, 0xb00f0b10u, 0x402ae32fu, 0xc4b836c2u, 0xf88d0739u, 0xc10a0744u, 0xbe7a69d3u, 0x046b6516u,
        0x1f4fd97du, 0xe159ccb8u, 0x7387a8b7u, 0xa16a6eaau, 0xa5884e01u, 0x91884f6cu, 0xb18c03dbu, 0x6a77677eu, 0x530968c5u, 0x6ee4c360u, 0x18451f3fu, 0x0f8ba392u, 0xa2f46dc9u, 0x9f379c94u, 0xc518dee3u, 0xebabb6e6u,
        0x7b7ce10du, 0x3db68f08u, 0x137966c7u, 0xa1fb757au, 0x1fec8691u, 0x3d388ebcu, 0xd1891aebu, 0x2211f34eu, 0xe0e76255u, 0x73a9cfb0u, 0x0cfe9f4fu, 0xe78d8462u, 0x4eefb859u, 0xc2bfc5e4u, 0xdc48d7f3u, 0x88e7bcb6u,
        0xf32a0c9du, 0x91ed2558u, 0xc7f2e8d7u, 0xe989704au, 0xd2612321u, 0x0d95e20cu, 0xb84835fbu, 0xa31eb31eu, 0x3e49ffe5u, 0xdf833000u, 0x8b38635fu, 0x7a2ad932u, 0xb907e6e9u, 0x54978334u, 0xb67b5503u, 0xf1dc7686u,
        0xeef05c2du, 0x23c28fa8u, 0x99f52ee7u, 0x53215f1au, 0x0a8f23b1u, 0x4a35495cu, 0x665a550bu, 0xbafaa6eeu, 0xe6ea4175u, 0xb0d5e450u, 0xbc136b6fu, 0x0410a202u, 0xe405f979u, 0x8ef3d484u, 0x66615613u, 0x9f86e456u,
        0x61a8cfbdu, 0xbe3bcdf8u, 0xd6c138f7u, 0xb11041eau, 0x245f8841u, 0x73ebc4acu, 0x4490781bu, 0x0242cebeu, 0x28c12705u, 0x1346eca0u, 0x94f0b77fu, 0xa12bded2u, 0xa8f2f009u, 0x0d49b9d4u, 0x6eebdb23u, 0x3e240626u,
        0x586c674du, 0x019de048u, 0x1fd80707u, 0x9ce318bau, 0x19fb50d1u, 0x94ce53fcu, 0x33fb9f2bu, 0xacd42a8eu, 0xb407b095u, 0xafbb48f0u, 0xe771478fu, 0x1ca98fa2u, 0x4717ca99u, 0x1c4e3324u, 0xd34be433u, 0x7d30dbf6u,
        0x8a9422ddu, 0xb36dc698u, 0x7afa9917u, 0x4766e38au, 0x13cb7d61u, 0x9031f74cu, 0x9decca3bu, 0x59cbba5eu, 0x2b36de25u, 0xfc57f940u, 0x71761b9fu, 0xc0f6b472u, 0xf3fd8929u, 0x09f64074u, 0x26f27143u, 0xdf6a65c6u,
    };
    uint32_t acc = 0x165628c6u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 110) & 255]);
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
    case 0: acc = heavy_round(acc, 0x4cd4939du); break;
    case 1: acc = heavy_round(acc, 0x40600058u); break;
    case 2: acc = heavy_round(acc, 0xca0a07d7u); break;
    case 3: acc = heavy_round(acc, 0x4210034au); break;
    case 4: acc = heavy_round(acc, 0x4ac89a21u); break;
    case 5: acc = heavy_round(acc, 0x0340ed0cu); break;
    case 6: acc = heavy_round(acc, 0x6b59c4fbu); break;
    case 7: acc = heavy_round(acc, 0xb0fcf61eu); break;
    case 8: acc = heavy_round(acc, 0x0c4566e5u); break;
    case 9: acc = heavy_round(acc, 0x8f516b00u); break;
    case 10: acc = heavy_round(acc, 0x6733625fu); break;
    case 11: acc = heavy_round(acc, 0x8e83cc32u); break;
    case 12: acc = heavy_round(acc, 0xed5e3de9u); break;
    case 13: acc = heavy_round(acc, 0xe2a3ee34u); break;
    case 14: acc = heavy_round(acc, 0x52bec403u); break;
    case 15: acc = heavy_round(acc, 0x96831986u); break;
    case 16: acc = heavy_round(acc, 0x9b58a32du); break;
    case 17: acc = heavy_round(acc, 0x60582aa8u); break;
    case 18: acc = heavy_round(acc, 0x6c500de7u); break;
    case 19: acc = heavy_round(acc, 0xfd98b21au); break;
    case 20: acc = heavy_round(acc, 0x58b05ab1u); break;
    case 21: acc = heavy_round(acc, 0xdccf145cu); break;
    case 22: acc = heavy_round(acc, 0xf20ba40bu); break;
    case 23: acc = heavy_round(acc, 0x2f75a9eeu); break;
    case 24: acc = heavy_round(acc, 0x1f5b6875u); break;
    case 25: acc = heavy_round(acc, 0x731edf50u); break;
    case 26: acc = heavy_round(acc, 0x30ca2a6fu); break;
    case 27: acc = heavy_round(acc, 0x68725502u); break;
    case 28: acc = heavy_round(acc, 0x654e1079u); break;
    case 29: acc = heavy_round(acc, 0x17c6ff84u); break;
    case 30: acc = heavy_round(acc, 0xaf3c8513u); break;
    case 31: acc = heavy_round(acc, 0x3e624756u); break;
    case 32: acc = heavy_round(acc, 0x873ed6bdu); break;
    case 33: acc = heavy_round(acc, 0x1ca428f8u); break;
    case 34: acc = heavy_round(acc, 0x194fd7f7u); break;
    case 35: acc = heavy_round(acc, 0x6ca854eau); break;
    case 36: acc = heavy_round(acc, 0x1daa7f41u); break;
    case 37: acc = heavy_round(acc, 0x1a244facu); break;
    case 38: acc = heavy_round(acc, 0xcfd1871bu); break;
    case 39: acc = heavy_round(acc, 0x778a91beu); break;
    case 40: acc = heavy_round(acc, 0xc0180e05u); break;
    case 41: acc = heavy_round(acc, 0xf1baa7a0u); break;
    case 42: acc = heavy_round(acc, 0x4053367fu); break;
    case 43: acc = heavy_round(acc, 0xfac651d2u); break;
    case 44: acc = heavy_round(acc, 0xfa9cc709u); break;
    case 45: acc = heavy_round(acc, 0xdd93a4d4u); break;
    case 46: acc = heavy_round(acc, 0x694eca23u); break;
    case 47: acc = heavy_round(acc, 0xb7642926u); break;
    case 48: acc = heavy_round(acc, 0x79a02e4du); break;
    case 49: acc = heavy_round(acc, 0xc188fb48u); break;
    case 50: acc = heavy_round(acc, 0x2e8a6607u); break;
    case 51: acc = heavy_round(acc, 0xb4cbebbau); break;
    case 52: acc = heavy_round(acc, 0xafe007d1u); break;
    case 53: acc = heavy_round(acc, 0x31559efcu); break;
    case 54: acc = heavy_round(acc, 0x61bc6e2bu); break;
    case 55: acc = heavy_round(acc, 0x0918ad8eu); break;
    case 56: acc = heavy_round(acc, 0x7ab45795u); break;
    case 57: acc = heavy_round(acc, 0xe009c3f0u); break;
    case 58: acc = heavy_round(acc, 0xa36f868fu); break;
    case 59: acc = heavy_round(acc, 0x1cacc2a2u); break;
    case 60: acc = heavy_round(acc, 0x88936199u); break;
    case 61: acc = heavy_round(acc, 0x6cbede24u); break;
    case 62: acc = heavy_round(acc, 0x80269333u); break;
    case 63: acc = heavy_round(acc, 0x7d05bef6u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

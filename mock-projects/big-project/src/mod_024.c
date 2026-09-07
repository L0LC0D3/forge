#include "heavy.h"
#include "mods.h"

int mod_024(int x)
{
    static const uint32_t local[256] = {
        0x0667b50bu, 0x8fe886eeu, 0x5e3ea175u, 0xbe5ec450u, 0xd546cb6fu, 0x23ec8202u, 0xfd705979u, 0x9b9ab484u, 0x681ab613u, 0xf230c456u, 0x23892fbdu, 0x5ce0adf8u, 0x766098f7u, 0xac6821eau, 0xcb15e841u, 0xf56ea4acu,
        0xdd75d81bu, 0x8a28aebeu, 0x86ad8705u, 0x6687cca0u, 0x887c177fu, 0xe77fbed2u, 0x86755009u, 0x9f2899d4u, 0x847d3b23u, 0xa2c5e626u, 0xd3e4c74du, 0x9cfac048u, 0xe4cf6707u, 0x8db2f8bau, 0x07c9b0d1u, 0x428933fcu,
        0x5bb8ff2bu, 0x85b20a8eu, 0xfe8c1095u, 0x96b428f0u, 0xab54a78fu, 0x07756fa2u, 0x4eb22a99u, 0x61651324u, 0x52b54433u, 0x51cabbf6u, 0x85a482ddu, 0x5982a698u, 0x1b49f917u, 0x6baec38au, 0x6eb1dd61u, 0x5824d74cu,
        0x6a822a3bu, 0xa1a19a5eu, 0xe8533e25u, 0x4508d940u, 0x7bb17b9fu, 0x4e3a9472u, 0x0bafe929u, 0xb0452074u, 0xe633d143u, 0x01fc45c6u, 0xaa61626du, 0x4d3d60e8u, 0x13d14f27u, 0x5e68825au, 0x66776df1u, 0xc2d68e9cu,
        0x8b62594bu, 0x38545e2eu, 0xe8bc0fb5u, 0x84eadd90u, 0x33b393afu, 0xd57c2d42u, 0xf9378bb9u, 0xaafdc1c4u, 0xf2a9e253u, 0x59578396u, 0x7df465fdu, 0xf82fef38u, 0x4ca66937u, 0xb52d352au, 0xa4036281u, 0x887359ecu,
        0xe82a8c5bu, 0xaf6755feu, 0xb6bf8545u, 0xd6ff35e0u, 0x19bbefbfu, 0xd6273a12u, 0x69521249u, 0x1203f714u, 0xdc087763u, 0x71197566u, 0x96768d8du, 0xef9f5188u, 0xd84a4747u, 0xc689dbfau, 0xba7ebb11u, 0x7810393cu,
        0x62ebc36bu, 0x47b781ceu, 0xab969ed5u, 0x792ae230u, 0x906b8fcfu, 0x7868bae2u, 0x54487cd9u, 0x970cc064u, 0xc6809073u, 0xa5bf1b36u, 0x7440d91du, 0x2e1087d8u, 0x6d7de957u, 0xc04b76cau, 0xab5277a1u, 0x7a022c8cu,
        0xa5f6fe7bu, 0xed61e19eu, 0x52ba5c65u, 0xb692e280u, 0x26a373dfu, 0xa3adafb2u, 0xe8a3cb69u, 0x2d0d1db4u, 0xa6832d83u, 0x67057506u, 0x11ec48adu, 0x63489228u, 0x77424f67u, 0x777f059au, 0x76279831u, 0xdfde33dcu,
        0x33dd3d8bu, 0x07c3756eu, 0xf9e3bdf5u, 0x379c36d0u, 0xa7849befu, 0xcea31882u, 0x1b2cfdf9u, 0x583a0f04u, 0x50c14e93u, 0x07e982d6u, 0x7451dc3du, 0x444c7078u, 0x24d87977u, 0x3871886au, 0xa8e71cc1u, 0xb4794f2cu,
        0x776f809bu, 0x49793d3eu, 0x410bc385u, 0x51ebdf20u, 0x2a7007ffu, 0xcf35f552u, 0x36ed1489u, 0x7e089454u, 0x8a2bf3a3u, 0x8ea844a6u, 0x3a8a93cdu, 0xdb6122c8u, 0x79c16787u, 0x96afff3au, 0xefba0551u, 0x0be87e7cu,
        0xd3bec7abu, 0x8060390eu, 0xaa6b6d15u, 0x5866db70u, 0x2306b80fu, 0xaa934622u, 0x6d2d0f19u, 0x352dada4u, 0x17f41cb3u, 0x84beba76u, 0x2def6f5du, 0xd80ba918u, 0x5dbe1997u, 0x3d076a0au, 0xa50951e1u, 0x5380c1ccu,
        0xb41c12bbu, 0x659568deu, 0x2a7bbaa5u, 0xeb322bc0u, 0x7129ac1fu, 0x65280af2u, 0x6575eda9u, 0x959e5af4u, 0xcf8ac9c3u, 0xc6e9e446u, 0xd2196eedu, 0xdf110368u, 0xaccf8fa7u, 0xbd84c8dau, 0x617e0271u, 0xa1d7191cu,
        0x9c1861cbu, 0x6d75ccaeu, 0xb7f5ac35u, 0x47b2d010u, 0x70f9e42fu, 0xd2a143c2u, 0xcd90b039u, 0x888f9c44u, 0xa6a0fad3u, 0x5526c216u, 0xf4e1927du, 0xda7631b8u, 0x4736c9b7u, 0x61751baau, 0x8c011701u, 0x06c0846cu,
        0x3784b4dbu, 0x979e647eu, 0xdbd241c5u, 0x988dc860u, 0x0ad8603fu, 0x65ebf092u, 0xe98656c9u, 0x18767194u, 0xc327afe3u, 0x22b253e6u, 0x3e60da0du, 0x49803408u, 0x2174c7c7u, 0xf965627au, 0xe9bb8f91u, 0xdb5203bcu,
        0x6a720bebu, 0x3eec304eu, 0x414a7b55u, 0x45a814b0u, 0xc366204fu, 0x01351162u, 0x239fe159u, 0xc107dae4u, 0x8b4fe8f3u, 0xe60999b6u, 0xc0f0459du, 0x90b40a58u, 0x544a89d7u, 0xad229d4au, 0x2e166c21u, 0x11e0970cu,
        0x613166fbu, 0xe97c301eu, 0x45d758e5u, 0x4426b500u, 0xcb84245fu, 0xc5e9a632u, 0x9c664fe9u, 0xbf38d834u, 0xb58aa603u, 0xe8e99386u, 0x8928d52du, 0x49d6b4a8u, 0x2cb90fe7u, 0xcbb9cc1au, 0x8abaacb1u, 0x86013e5cu,
    };
    uint32_t acc = 0x0d80295cu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 24) & 255]);
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
    case 0: acc = heavy_round(acc, 0x464d4983u); break;
    case 1: acc = heavy_round(acc, 0xc770e106u); break;
    case 2: acc = heavy_round(acc, 0x5068c4adu); break;
    case 3: acc = heavy_round(acc, 0x4502de28u); break;
    case 4: acc = heavy_round(acc, 0x94002b67u); break;
    case 5: acc = heavy_round(acc, 0x0ecb319au); break;
    case 6: acc = heavy_round(acc, 0xca8dd431u); break;
    case 7: acc = heavy_round(acc, 0xc0f73fdcu); break;
    case 8: acc = heavy_round(acc, 0xc8ead98bu); break;
    case 9: acc = heavy_round(acc, 0x419c616eu); break;
    case 10: acc = heavy_round(acc, 0x63efb9f5u); break;
    case 11: acc = heavy_round(acc, 0xfca002d0u); break;
    case 12: acc = heavy_round(acc, 0x17fdf7efu); break;
    case 13: acc = heavy_round(acc, 0xdb74c482u); break;
    case 14: acc = heavy_round(acc, 0x185ab9f9u); break;
    case 15: acc = heavy_round(acc, 0xc8749b04u); break;
    case 16: acc = heavy_round(acc, 0x03826a93u); break;
    case 17: acc = heavy_round(acc, 0xc8dfeed6u); break;
    case 18: acc = heavy_round(acc, 0xfbdd583du); break;
    case 19: acc = heavy_round(acc, 0xd5c9bc78u); break;
    case 20: acc = heavy_round(acc, 0xe07d5577u); break;
    case 21: acc = heavy_round(acc, 0xeb78b46au); break;
    case 22: acc = heavy_round(acc, 0xe7cc58c1u); break;
    case 23: acc = heavy_round(acc, 0x18055b2cu); break;
    case 24: acc = heavy_round(acc, 0x7e541c9bu); break;
    case 25: acc = heavy_round(acc, 0xf53d293eu); break;
    case 26: acc = heavy_round(acc, 0x1606bf85u); break;
    case 27: acc = heavy_round(acc, 0xbf12ab20u); break;
    case 28: acc = heavy_round(acc, 0x16b063ffu); break;
    case 29: acc = heavy_round(acc, 0x6f22a152u); break;
    case 30: acc = heavy_round(acc, 0x6e79d089u); break;
    case 31: acc = heavy_round(acc, 0xbf162054u); break;
    case 32: acc = heavy_round(acc, 0xe9a40fa3u); break;
    case 33: acc = heavy_round(acc, 0xfee9b0a6u); break;
    case 34: acc = heavy_round(acc, 0x8ae50fcdu); break;
    case 35: acc = heavy_round(acc, 0x19616ec8u); break;
    case 36: acc = heavy_round(acc, 0x2a0d4387u); break;
    case 37: acc = heavy_round(acc, 0x40322b3au); break;
    case 38: acc = heavy_round(acc, 0xb4de4151u); break;
    case 39: acc = heavy_round(acc, 0x5aa78a7cu); break;
    case 40: acc = heavy_round(acc, 0x1e3a63abu); break;
    case 41: acc = heavy_round(acc, 0xc4cf250eu); break;
    case 42: acc = heavy_round(acc, 0x62156915u); break;
    case 43: acc = heavy_round(acc, 0x0270a770u); break;
    case 44: acc = heavy_round(acc, 0x98ce140fu); break;
    case 45: acc = heavy_round(acc, 0x105af222u); break;
    case 46: acc = heavy_round(acc, 0xf2d8cb19u); break;
    case 47: acc = heavy_round(acc, 0xc7ce39a4u); break;
    case 48: acc = heavy_round(acc, 0x2de338b3u); break;
    case 49: acc = heavy_round(acc, 0xa30b2676u); break;
    case 50: acc = heavy_round(acc, 0xb6d8eb5du); break;
    case 51: acc = heavy_round(acc, 0xef4ef518u); break;
    case 52: acc = heavy_round(acc, 0xc870f597u); break;
    case 53: acc = heavy_round(acc, 0x67c4960au); break;
    case 54: acc = heavy_round(acc, 0x7c2c8de1u); break;
    case 55: acc = heavy_round(acc, 0x2632cdccu); break;
    case 56: acc = heavy_round(acc, 0x83eeaebbu); break;
    case 57: acc = heavy_round(acc, 0x196f54deu); break;
    case 58: acc = heavy_round(acc, 0x2c94b6a5u); break;
    case 59: acc = heavy_round(acc, 0x96def7c0u); break;
    case 60: acc = heavy_round(acc, 0xee38081fu); break;
    case 61: acc = heavy_round(acc, 0x738ab6f2u); break;
    case 62: acc = heavy_round(acc, 0x3d00a9a9u); break;
    case 63: acc = heavy_round(acc, 0x2a91e6f4u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

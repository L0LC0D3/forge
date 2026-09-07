#include "heavy.h"
#include "mods.h"

int mod_060(int x)
{
    static const uint32_t local[256] = {
        0xbce00f67u, 0x9b01c59au, 0x1c4b5831u, 0x4e2ef3dcu, 0xba76fd8bu, 0xe012356eu, 0x16637df5u, 0x5098f6d0u, 0x60da5befu, 0x227dd882u, 0x45c8bdf9u, 0x50a2cf04u, 0x6a930e93u, 0xaa1042d6u, 0xe0c99c3du, 0x3ce13078u,
        0xc8e63977u, 0xc7a4486au, 0xe6fadcc1u, 0x79fa0f2cu, 0x8b79409bu, 0xf077fd3eu, 0xfc7b8385u, 0x1d189f20u, 0x1035c7ffu, 0x04c0b552u, 0xf778d489u, 0xb3a15454u, 0xdf6db3a3u, 0xd57f04a6u, 0x23f253cdu, 0xcc25e2c8u,
        0xd83f2787u, 0x3d92bf3au, 0x81bdc551u, 0xb4993e7cu, 0x913887abu, 0x620ef90eu, 0x80cb2d15u, 0x21c39b70u, 0x113c780fu, 0xedce0622u, 0xffa8cf19u, 0xb3f66da4u, 0x44a5dcb3u, 0x5c457a76u, 0x90472f5du, 0x8d006918u,
        0xd2abd997u, 0xa79a2a0au, 0x46fd11e1u, 0x6b6181ccu, 0x3705d2bbu, 0xedf428deu, 0x97cb7aa5u, 0xfebeebc0u, 0x43cf6c1fu, 0xe212caf2u, 0x05e1ada9u, 0x69971af4u, 0x6fac89c3u, 0x1b20a446u, 0xa9612eedu, 0x2435c368u,
        0x942d4fa7u, 0x97c788dau, 0xcf61c271u, 0xb4e7d91cu, 0x007221cbu, 0x08848caeu, 0x38356c35u, 0xf16f9010u, 0x040fa42fu, 0xb53c03c2u, 0xb7ec7039u, 0xbdb85c44u, 0x5632bad3u, 0x120d8216u, 0x3d19527du, 0x7bcaf1b8u,
        0xfd0489b7u, 0x5767dbaau, 0x81d4d701u, 0xa101446cu, 0x994e74dbu, 0xb15d247eu, 0xeb0201c5u, 0x247a8860u, 0x3a5e203fu, 0xda36b092u, 0x59d216c9u, 0xbacf3194u, 0x1e296fe3u, 0x344913e6u, 0xf3889a0du, 0x1304f408u,
        0x01b287c7u, 0xb708227au, 0x237f4f91u, 0x88c2c3bcu, 0xe5abcbebu, 0x435af04eu, 0x5b6a3b55u, 0xffc4d4b0u, 0x6b5be04fu, 0x332fd162u, 0x55dba159u, 0xdc909ae4u, 0x2dc1a8f3u, 0x385059b6u, 0xdf08059du, 0x4e68ca58u,
        0xbaf849d7u, 0xde755d4au, 0x67ca2c21u, 0x5e81570cu, 0x11db26fbu, 0x449af01eu, 0xe6e718e5u, 0x78737500u, 0xc7e9e45fu, 0xe1946632u, 0xcc920fe9u, 0x5ff19834u, 0x3b6c6603u, 0x67e05386u, 0x0c30952du, 0xc7bb74a8u,
        0x75d6cfe7u, 0x1cbc8c1au, 0x805e6cb1u, 0xfdd1fe5cu, 0xa26d860bu, 0x367a23eeu, 0x2d319a75u, 0x60eb6950u, 0x3d292c6fu, 0x16116f02u, 0x24be6279u, 0x93272984u, 0x5ddaa713u, 0x6ff60156u, 0x11db48bdu, 0x9e01f2f8u,
        0xc38f19f7u, 0xb82aaeeau, 0xad251141u, 0x7b89b9acu, 0x8433e91bu, 0x65958bbeu, 0xa042c005u, 0xb8d1b1a0u, 0x847ab87fu, 0xe093ebd2u, 0x9b699909u, 0x25a64ed4u, 0x1bfd6c23u, 0x30ce6326u, 0xa121204du, 0xc5814548u,
        0x89a22807u, 0xbe4cc5bau, 0xcc4719d1u, 0x75bd88fcu, 0x1c3f502bu, 0xb9ca278eu, 0x14538995u, 0xfd0b4df0u, 0x337f888fu, 0x0048dca2u, 0xd3dcb399u, 0x78240824u, 0x7d05b533u, 0x8de678f6u, 0x155b1bddu, 0x57be6b98u,
        0x11d0fa17u, 0xd3efd08au, 0xea2d8661u, 0x63c26c4cu, 0x57e0bb3bu, 0x8634f75eu, 0x4fdcf725u, 0x77bd3e40u, 0xcc189c9fu, 0xb39d4172u, 0x67a0b229u, 0xec955574u, 0x18648243u, 0x3dfb42c6u, 0x04223b6du, 0xe37e65e8u,
        0x1a1c9027u, 0x0520cf5au, 0xd18156f1u, 0xe62d639cu, 0xbca92a4bu, 0x5932fb2eu, 0x9b9808b5u, 0x904c8290u, 0xcc66f4afu, 0x883e1a42u, 0x767e94b9u, 0x362f36c4u, 0x25cad353u, 0x9b09c096u, 0xcd4f7efdu, 0xbcc63438u,
        0xe4c5ea37u, 0x952cc22au, 0x9b2b8b81u, 0x16d36eecu, 0x78699d5bu, 0xcc6132feu, 0x527dbe45u, 0x1b5e1ae0u, 0xbecb90bfu, 0x2b186712u, 0x367f5b49u, 0xa966ac14u, 0x8d29a863u, 0x724ef266u, 0x2afbe68du, 0x4cdad688u,
        0x484e0847u, 0xcea0a8fau, 0x3e552411u, 0xd8c98e3cu, 0x7133146bu, 0x549c9eceu, 0x71c717d5u, 0xaad70730u, 0x49e770cfu, 0x385927e2u, 0x83ec05d9u, 0x8bf0b564u, 0xf6b20173u, 0xd447d836u, 0xc180721du, 0x62414cd8u,
        0xbf75ea57u, 0xd34983cau, 0x206720a1u, 0x2864c18cu, 0x55568f7bu, 0x12023e9eu, 0x28ed1565u, 0xdddc4780u, 0x409b94dfu, 0x0b6d5cb2u, 0x714d9469u, 0x64c252b4u, 0xdad4de83u, 0xe4b17206u, 0xaf7621adu, 0x80be9728u,
    };
    uint32_t acc = 0x2fad5228u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 60) & 255]);
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
    case 0: acc = heavy_round(acc, 0x11600457u); break;
    case 1: acc = heavy_round(acc, 0xcc88d5cau); break;
    case 2: acc = heavy_round(acc, 0x054a4aa1u); break;
    case 3: acc = heavy_round(acc, 0x64a9e38cu); break;
    case 4: acc = heavy_round(acc, 0x4265497bu); break;
    case 5: acc = heavy_round(acc, 0x23ddb09eu); break;
    case 6: acc = heavy_round(acc, 0xa27ddf65u); break;
    case 7: acc = heavy_round(acc, 0x74b28980u); break;
    case 8: acc = heavy_round(acc, 0xb9c8eedfu); break;
    case 9: acc = heavy_round(acc, 0x0e96eeb2u); break;
    case 10: acc = heavy_round(acc, 0x6c95fe69u); break;
    case 11: acc = heavy_round(acc, 0x5babb4b4u); break;
    case 12: acc = heavy_round(acc, 0xf3bad883u); break;
    case 13: acc = heavy_round(acc, 0x33fb2406u); break;
    case 14: acc = heavy_round(acc, 0x75202badu); break;
    case 15: acc = heavy_round(acc, 0x445d1928u); break;
    case 16: acc = heavy_round(acc, 0x42172a67u); break;
    case 17: acc = heavy_round(acc, 0xf690249au); break;
    case 18: acc = heavy_round(acc, 0xc3602b31u); break;
    case 19: acc = heavy_round(acc, 0xb14faadcu); break;
    case 20: acc = heavy_round(acc, 0xab0a488bu); break;
    case 21: acc = heavy_round(acc, 0x1a6f046eu); break;
    case 22: acc = heavy_round(acc, 0x3e9400f5u); break;
    case 23: acc = heavy_round(acc, 0x7a419dd0u); break;
    case 24: acc = heavy_round(acc, 0xfff4d6efu); break;
    case 25: acc = heavy_round(acc, 0xc6d81782u); break;
    case 26: acc = heavy_round(acc, 0xba77f0f9u); break;
    case 27: acc = heavy_round(acc, 0x06da6604u); break;
    case 28: acc = heavy_round(acc, 0x908fb993u); break;
    case 29: acc = heavy_round(acc, 0xf706f1d6u); break;
    case 30: acc = heavy_round(acc, 0x2a0a7f3du); break;
    case 31: acc = heavy_round(acc, 0xfa9eb778u); break;
    case 32: acc = heavy_round(acc, 0x1e501477u); break;
    case 33: acc = heavy_round(acc, 0xae46676au); break;
    case 34: acc = heavy_round(acc, 0x3c906fc1u); break;
    case 35: acc = heavy_round(acc, 0xc624862cu); break;
    case 36: acc = heavy_round(acc, 0xf40b4b9bu); break;
    case 37: acc = heavy_round(acc, 0x83448c3eu); break;
    case 38: acc = heavy_round(acc, 0xe8d8c685u); break;
    case 39: acc = heavy_round(acc, 0xd1870620u); break;
    case 40: acc = heavy_round(acc, 0x45db02ffu); break;
    case 41: acc = heavy_round(acc, 0x56a6b452u); break;
    case 42: acc = heavy_round(acc, 0xaac0c789u); break;
    case 43: acc = heavy_round(acc, 0x341aab54u); break;
    case 44: acc = heavy_round(acc, 0x3d411ea3u); break;
    case 45: acc = heavy_round(acc, 0x48dd73a6u); break;
    case 46: acc = heavy_round(acc, 0x76f7f6cdu); break;
    case 47: acc = heavy_round(acc, 0x2d6129c8u); break;
    case 48: acc = heavy_round(acc, 0x558bc287u); break;
    case 49: acc = heavy_round(acc, 0x43389e3au); break;
    case 50: acc = heavy_round(acc, 0xa9041851u); break;
    case 51: acc = heavy_round(acc, 0xd33d757cu); break;
    case 52: acc = heavy_round(acc, 0xec7952abu); break;
    case 53: acc = heavy_round(acc, 0xa83b480eu); break;
    case 54: acc = heavy_round(acc, 0x6f853015u); break;
    case 55: acc = heavy_round(acc, 0xa967c270u); break;
    case 56: acc = heavy_round(acc, 0x2b1c730fu); break;
    case 57: acc = heavy_round(acc, 0xff2fc522u); break;
    case 58: acc = heavy_round(acc, 0x7ab98219u); break;
    case 59: acc = heavy_round(acc, 0x162184a4u); break;
    case 60: acc = heavy_round(acc, 0xab0007b3u); break;
    case 61: acc = heavy_round(acc, 0xaefba976u); break;
    case 62: acc = heavy_round(acc, 0xf141925du); break;
    case 63: acc = heavy_round(acc, 0xe8297018u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

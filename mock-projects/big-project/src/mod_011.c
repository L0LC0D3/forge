#include "heavy.h"
#include "mods.h"

int mod_011(int x)
{
    static const uint32_t local[256] = {
        0x8d5bc152u, 0xda207089u, 0x3a4c4054u, 0xdc23afa3u, 0xc924d0a6u, 0x7ea5afcdu, 0xd9e98ec8u, 0x4db6e387u, 0x458f4b3au, 0x3558e151u, 0x5ca1aa7cu, 0x00ae03abu, 0xf66e450eu, 0x6dea0915u, 0xf3fcc770u, 0xd1abb40fu,
        0xe15c1222u, 0x22a76b19u, 0x290c59a4u, 0xfecad8b3u, 0x288e4676u, 0xdd418b5du, 0x325f1518u, 0xbd029597u, 0x78e9b60au, 0x45cf2de1u, 0xcf34edccu, 0x11ca4ebbu, 0x6f5674deu, 0xc01156a5u, 0x5bf317c0u, 0x14fda81fu,
        0xc953d6f2u, 0xdaf749a9u, 0x13d806f4u, 0xff0085c3u, 0x74cc7046u, 0x96628aedu, 0xb3ef6f68u, 0xa7230ba7u, 0xd32a14dau, 0xc32ade71u, 0xf346451cu, 0x56459dcbu, 0xc3a9d8aeu, 0x01624835u, 0x845ebc10u, 0x11bce02fu,
        0x48f00fc2u, 0x20d90c39u, 0x93e44844u, 0xc275b6d3u, 0xdddc4e16u, 0xe7e1ae7du, 0xf89f9db8u, 0xdc5945b7u, 0xcd9d67aau, 0x8454f301u, 0x88aab06cu, 0x69f0f0dbu, 0x2305707eu, 0x2ad5ddc5u, 0x47e4b460u, 0xa04a5c3fu,
        0x031dbc92u, 0xa855b2c9u, 0x63a61d94u, 0x5f1b6be3u, 0x86fadfe6u, 0xe9d7f60du, 0x2fb4a008u, 0x412643c7u, 0x68d0ae7au, 0xbe766b91u, 0x98772fbcu, 0x20dd47ebu, 0x18463c4eu, 0x57a51755u, 0xbe6a00b0u, 0x35471c4fu,
        0x0a09dd62u, 0x4bb63d59u, 0xaed286e4u, 0x2b22a4f3u, 0x56a525b6u, 0x1e9e619du, 0x6db37658u, 0xde4b05d7u, 0xfc90e94au, 0x94f84821u, 0xc500c30cu, 0x975ba2fbu, 0x59893c1eu, 0x5548f4e5u, 0x8d13a100u, 0xf194205fu,
        0xaf217232u, 0x9b83abe9u, 0x625e8434u, 0xccfc6203u, 0xc6981f86u, 0x02cdf12du, 0xfc6120a8u, 0xf0c88be7u, 0x07eb181au, 0xa98388b1u, 0x99dc6a5cu, 0x41fd020bu, 0x982b6feeu, 0x337a7675u, 0x36469550u, 0xb252686fu,
        0x53117b02u, 0x6e86fe79u, 0x7c7f1584u, 0x4b59a313u, 0xb3d0cd56u, 0x9d3fa4bdu, 0xaac29ef8u, 0xf9dfd5f7u, 0x012c3aeau, 0xac012d41u, 0xdbdf25acu, 0xfd92651bu, 0x50c9d7beu, 0xd4329c05u, 0x69a7dda0u, 0x20e2f47fu,
        0x35c6f7d2u, 0x71c93509u, 0x5ca93ad4u, 0x1d2b6823u, 0x2e8c2f26u, 0x0f0c7c4du, 0x1d1cf148u, 0xcf11e407u, 0x25e151bau, 0xea9a35d1u, 0xd91df4fcu, 0x1f2ccc2bu, 0x9b41738eu, 0x7baa6595u, 0x541c79f0u, 0xc2e6c48fu,
        0x466ee8a2u, 0xb8934f99u, 0x1391f424u, 0x39a2b133u, 0x4a4744f6u, 0x238d77ddu, 0x1cf51798u, 0xaa1fb617u, 0x4ad75c8au, 0xe1b7a261u, 0xb8edd84cu, 0x841d373bu, 0xfaaf435eu, 0x605ad325u, 0xefc96a40u, 0x0a3ed89fu,
        0xf3764d72u, 0x4c6e4e29u, 0xb32e4174u, 0x28307e43u, 0xedbf0ec6u, 0xe05b976du, 0xe91011e8u, 0x390a4c27u, 0xac1b5b5au, 0xcc0272f1u, 0xcbe3cf9cu, 0xa1f4a64bu, 0x2d70472eu, 0x3afce4b5u, 0x5413ae90u, 0x650c30afu,
        0xfa8a2642u, 0xbd2330b9u, 0x9eb322c4u, 0x1085cf53u, 0xa2f08c96u, 0x154fdafdu, 0x8572e038u, 0xae12a637u, 0xbcfa4e2au, 0x3263a781u, 0xdbd4daecu, 0x9684195bu, 0xfd217efeu, 0xd6899a45u, 0x05a046e0u, 0x4dafccbfu,
        0x38977312u, 0xb0baf749u, 0xda959814u, 0xca93a463u, 0x6718be66u, 0xec83428du, 0x0b628288u, 0xcfb9c447u, 0xf80134fau, 0x7c044011u, 0x7bd5fa3cu, 0x37dc906bu, 0x0e9feaceu, 0xa039f3d5u, 0x46543330u, 0x5acaaccfu,
        0x79cb33e2u, 0x737ea1d9u, 0x5c8aa164u, 0xee8afd73u, 0x7ab4a436u, 0x7a4ece1du, 0xf963f8d8u, 0x08c0a657u, 0xaefd0fcau, 0x7e4d3ca1u, 0x583c2d8cu, 0x244f0b7bu, 0xb2088a9eu, 0x3786f165u, 0x65547380u, 0x4f3dd0dfu,
        0x499268b2u, 0x87f73069u, 0x5b873eb4u, 0xe4dcda83u, 0x31813e06u, 0x4d4b7dadu, 0x833c4328u, 0x78284c67u, 0xdafade9au, 0x0ce79d31u, 0x869c74dcu, 0xd26c8a8bu, 0xb2b85e6eu, 0xfe2992f5u, 0x0f0607d0u, 0x2a2a38efu,
        0xc29a1182u, 0x36eda2f9u, 0x9fc07004u, 0xf63a3b93u, 0xc27b8bd6u, 0xfe52513du, 0xe1f06178u, 0x0131b677u, 0xec47a16au, 0x89bc61c1u, 0xd5cbd02cu, 0xa1060d9bu, 0x274c663eu, 0xa81ad885u, 0x9d0df020u, 0x36f0e4ffu,
    };
    uint32_t acc = 0xfba603ffu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 11) & 255]);
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
    case 0: acc = heavy_round(acc, 0x8e9b7b8cu); break;
    case 1: acc = heavy_round(acc, 0x7e3a017bu); break;
    case 2: acc = heavy_round(acc, 0xe6fb089eu); break;
    case 3: acc = heavy_round(acc, 0xd40b5765u); break;
    case 4: acc = heavy_round(acc, 0x0eb1a180u); break;
    case 5: acc = heavy_round(acc, 0x874d26dfu); break;
    case 6: acc = heavy_round(acc, 0xa49dc6b2u); break;
    case 7: acc = heavy_round(acc, 0xdcfef669u); break;
    case 8: acc = heavy_round(acc, 0x1bd04cb4u); break;
    case 9: acc = heavy_round(acc, 0x22269083u); break;
    case 10: acc = heavy_round(acc, 0x72c37c06u); break;
    case 11: acc = heavy_round(acc, 0x105ca3adu); break;
    case 12: acc = heavy_round(acc, 0xf63f3128u); break;
    case 13: acc = heavy_round(acc, 0xb8226267u); break;
    case 14: acc = heavy_round(acc, 0xe571fc9au); break;
    case 15: acc = heavy_round(acc, 0xf8e82331u); break;
    case 16: acc = heavy_round(acc, 0xce0742dcu); break;
    case 17: acc = heavy_round(acc, 0x1eed008bu); break;
    case 18: acc = heavy_round(acc, 0x4a425c6eu); break;
    case 19: acc = heavy_round(acc, 0x795f78f5u); break;
    case 20: acc = heavy_round(acc, 0x4066b5d0u); break;
    case 21: acc = heavy_round(acc, 0x2f670eefu); break;
    case 22: acc = heavy_round(acc, 0x29f4ef82u); break;
    case 23: acc = heavy_round(acc, 0x58fee8f9u); break;
    case 24: acc = heavy_round(acc, 0x1284fe04u); break;
    case 25: acc = heavy_round(acc, 0xf8c97193u); break;
    case 26: acc = heavy_round(acc, 0x394549d6u); break;
    case 27: acc = heavy_round(acc, 0xf644f73du); break;
    case 28: acc = heavy_round(acc, 0x5d66cf78u); break;
    case 29: acc = heavy_round(acc, 0x34094c77u); break;
    case 30: acc = heavy_round(acc, 0x0cfe3f6au); break;
    case 31: acc = heavy_round(acc, 0x63f667c1u); break;
    case 32: acc = heavy_round(acc, 0x9f221e2cu); break;
    case 33: acc = heavy_round(acc, 0xdb7c039bu); break;
    case 34: acc = heavy_round(acc, 0x254de43eu); break;
    case 35: acc = heavy_round(acc, 0x74623e85u); break;
    case 36: acc = heavy_round(acc, 0x65521e20u); break;
    case 37: acc = heavy_round(acc, 0x0abb3affu); break;
    case 38: acc = heavy_round(acc, 0x24598c52u); break;
    case 39: acc = heavy_round(acc, 0x76e5bf89u); break;
    case 40: acc = heavy_round(acc, 0x84cb4354u); break;
    case 41: acc = heavy_round(acc, 0x8ac8d6a3u); break;
    case 42: acc = heavy_round(acc, 0x4411cba6u); break;
    case 43: acc = heavy_round(acc, 0xabb06ecdu); break;
    case 44: acc = heavy_round(acc, 0x128f41c8u); break;
    case 45: acc = heavy_round(acc, 0xae72fa87u); break;
    case 46: acc = heavy_round(acc, 0x5f46763au); break;
    case 47: acc = heavy_round(acc, 0xb1c81051u); break;
    case 48: acc = heavy_round(acc, 0x92010d7cu); break;
    case 49: acc = heavy_round(acc, 0x62f80aabu); break;
    case 50: acc = heavy_round(acc, 0x21faa00eu); break;
    case 51: acc = heavy_round(acc, 0x734ca815u); break;
    case 52: acc = heavy_round(acc, 0x0c58da70u); break;
    case 53: acc = heavy_round(acc, 0x98eaab0fu); break;
    case 54: acc = heavy_round(acc, 0x34f89d22u); break;
    case 55: acc = heavy_round(acc, 0x53fc7a19u); break;
    case 56: acc = heavy_round(acc, 0x05581ca4u); break;
    case 57: acc = heavy_round(acc, 0x6955bfb3u); break;
    case 58: acc = heavy_round(acc, 0x78a60176u); break;
    case 59: acc = heavy_round(acc, 0xa5f80a5du); break;
    case 60: acc = heavy_round(acc, 0x813d8818u); break;
    case 61: acc = heavy_round(acc, 0x9b206c97u); break;
    case 62: acc = heavy_round(acc, 0xa317a10au); break;
    case 63: acc = heavy_round(acc, 0xa8c61ce1u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

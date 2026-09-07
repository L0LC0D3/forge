#include "heavy.h"
#include "mods.h"

int mod_059(int x)
{
    static const uint32_t local[256] = {
        0xcded2ac2u, 0x5d756b39u, 0x3caf1b44u, 0xbfd46dd3u, 0x57959916u, 0x3d2c7d7du, 0x52e620b8u, 0x551fecb7u, 0x653de2aau, 0x2b7d3201u, 0x35cfe36cu, 0x022687dbu, 0xf6e81b7eu, 0xf07a8cc5u, 0x05fb9760u, 0x90e5e33fu,
        0x61cd9792u, 0xeb85d1c9u, 0x0071b094u, 0xcd03e2e3u, 0x5a32eae6u, 0x0b12850du, 0x2ba7e308u, 0x8432aac7u, 0xd07be97au, 0xfeaa6a91u, 0x79b522bcu, 0xfad49eebu, 0x357fa74eu, 0x27318655u, 0x13c5a3b0u, 0xf8e0634fu,
        0xfa1c7862u, 0x096a1c59u, 0xc2ced9e4u, 0xd304dbf3u, 0x5e0bf0b6u, 0x46b8b09du, 0xa9837958u, 0x140d2cd7u, 0xe1f6e44au, 0x60280721u, 0xc387760cu, 0xaa84b9fbu, 0xf0c9671eu, 0xc7ad23e5u, 0xdde40400u, 0xbe9b275fu,
        0x9446cd32u, 0x03ab4ae9u, 0xfcbb9734u, 0x94485903u, 0x48ddaa86u, 0xe8b8002du, 0x623de3a8u, 0x1db072e7u, 0x44bbd31au, 0x2d9f07b1u, 0xaadbdd5cu, 0x21c7d90bu, 0xc6225aeeu, 0xdda66575u, 0xb2bbb850u, 0x1b372f6fu,
        0x3cf99602u, 0x6d125d79u, 0x386ce884u, 0x337f5a13u, 0x63a51856u, 0x73e973bdu, 0x70dc21f8u, 0xfe5d7cf7u, 0x9b17b5eau, 0x52f86c41u, 0x008758acu, 0xd96efc1bu, 0x1e2782beu, 0x47164b05u, 0x0df1c0a0u, 0x14157b7fu,
        0xe021d2d2u, 0xaea85409u, 0x6157cdd4u, 0x439adf23u, 0x2a9f3a26u, 0x85660b4du, 0xc5a33448u, 0x67954b07u, 0x4e978cbau, 0x5a5d34d1u, 0x1e9ee7fcu, 0xc28b232bu, 0xfcb5de8eu, 0x4435d495u, 0xe86b1cf0u, 0x8ad70b8fu,
        0x18ec83a2u, 0x97b62e99u, 0x14314724u, 0xd7cbe833u, 0x1d490ff6u, 0x6486c6ddu, 0x76181a98u, 0x6f18dd17u, 0x6008578au, 0xfc366161u, 0x38778b4cu, 0x566d4e3bu, 0xd0ea6e5eu, 0x077e0225u, 0x084ccd40u, 0x4d5cdf9fu,
        0x01c6a872u, 0xedc4ed29u, 0xeeee5474u, 0x93837543u, 0x8e5f99c6u, 0x92e4a66du, 0x0cffd4e8u, 0x9ee93327u, 0x3777165au, 0xaf2cf1f1u, 0xaaa6429cu, 0xa6a67d4bu, 0x4522322eu, 0x45a7d3b5u, 0x50fbd190u, 0x25c7f7afu,
        0x045d4142u, 0xfc9d8fb9u, 0xe0c3f5c4u, 0xba728653u, 0x73dfd796u, 0x5c58a9fdu, 0xda5f6338u, 0x05474d37u, 0x7430c92au, 0x3829e681u, 0x4b000decu, 0x6d07b05bu, 0x0efa29feu, 0xc5ac4945u, 0x131d29e0u, 0xea7953bfu,
        0xa99d4e12u, 0x26491649u, 0x7a272b14u, 0x408a1b63u, 0x3706c966u, 0x66fbd18du, 0x437bc588u, 0x44b42b47u, 0xbcc26ffau, 0x3a563f11u, 0xb899ed3cu, 0x1ba1e76bu, 0xbf4f55ceu, 0xf0c462d5u, 0x5c95d630u, 0x8e11f3cfu,
        0x69b3cee2u, 0x731080d9u, 0x3cccf464u, 0xd9fb3473u, 0x84516f36u, 0x43271d1du, 0x12d9fbd8u, 0xa3f0cd57u, 0x8ef90acau, 0xc71afba1u, 0xabc8e08cu, 0xecc6227bu, 0x923eb59eu, 0x62692065u, 0x488ad680u, 0x2f72d7dfu,
        0x7c0dc3b2u, 0x217ccf69u, 0xebaa51b4u, 0x0b36d183u, 0x1b7cc906u, 0xfb738cadu, 0xc83f0628u, 0x1dfe3367u, 0x0fe1999au, 0xee211c31u, 0x4621e7dcu, 0xf305618bu, 0x3f25496eu, 0x785381f5u, 0x4f612ad0u, 0x29bcffefu,
        0xa7582c82u, 0x365701f9u, 0xdaf44304u, 0x38edf293u, 0x9f85d6d6u, 0xa4ba203du, 0xe8afe478u, 0x721d5d77u, 0xdbc91c6au, 0x4d51a0c1u, 0x627a032cu, 0x2930a49bu, 0xc8a0113eu, 0xe27c8785u, 0x96bdd320u, 0x24516bffu,
        0x11800952u, 0x0ca81889u, 0x401fc854u, 0xb81197a3u, 0x66a998a6u, 0xee13d7cdu, 0x4e7196c8u, 0x33cf4b87u, 0xd63c933au, 0xa0d58951u, 0xe4e6327cu, 0x8258ebabu, 0x4c8c0d0eu, 0x331d3115u, 0x4185cf70u, 0x22d11c0fu,
        0x0fb25a22u, 0xe5b91319u, 0x81e1e1a4u, 0xddd2c0b3u, 0x4a650e76u, 0xb0d9b35du, 0x79091d18u, 0xdad4fd97u, 0xfa08fe0au, 0x5315d5e1u, 0x0abb75ccu, 0xf9cf36bbu, 0xd4063cdeu, 0x6eae7ea5u, 0xbfde1fc0u, 0x951d101fu,
        0xf65c1ef2u, 0x7912f1a9u, 0x882f8ef4u, 0x0fa26dc3u, 0x77753846u, 0x80a4b2edu, 0xdd3b7768u, 0xd32f73a7u, 0x293b5cdau, 0x0cbb8671u, 0xba8ecd1cu, 0xa32485cbu, 0x236ba0aeu, 0x9be97035u, 0x1f2bc410u, 0x6756482fu,
    };
    uint32_t acc = 0x09caa72fu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 59) & 255]);
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
    case 0: acc = heavy_round(acc, 0x1083835cu); break;
    case 1: acc = heavy_round(acc, 0x4d6f470bu); break;
    case 2: acc = heavy_round(acc, 0x7176f0eeu); break;
    case 3: acc = heavy_round(acc, 0xeab60375u); break;
    case 4: acc = heavy_round(acc, 0x037abe50u); break;
    case 5: acc = heavy_round(acc, 0xe74e7d6fu); break;
    case 6: acc = heavy_round(acc, 0x813c8c02u); break;
    case 7: acc = heavy_round(acc, 0x987cdb79u); break;
    case 8: acc = heavy_round(acc, 0x29094e84u); break;
    case 9: acc = heavy_round(acc, 0xb2148813u); break;
    case 10: acc = heavy_round(acc, 0xbf8c6e56u); break;
    case 11: acc = heavy_round(acc, 0xb0ecd1bdu); break;
    case 12: acc = heavy_round(acc, 0x0f7be7f8u); break;
    case 13: acc = heavy_round(acc, 0x0b5e8af7u); break;
    case 14: acc = heavy_round(acc, 0x0db96beau); break;
    case 15: acc = heavy_round(acc, 0x59b2aa41u); break;
    case 16: acc = heavy_round(acc, 0x9ab07eacu); break;
    case 17: acc = heavy_round(acc, 0xc8a9ea1bu); break;
    case 18: acc = heavy_round(acc, 0xfcf998beu); break;
    case 19: acc = heavy_round(acc, 0x72856905u); break;
    case 20: acc = heavy_round(acc, 0x768a46a0u); break;
    case 21: acc = heavy_round(acc, 0x3f38497fu); break;
    case 22: acc = heavy_round(acc, 0x0cfa48d2u); break;
    case 23: acc = heavy_round(acc, 0xbaaa5209u); break;
    case 24: acc = heavy_round(acc, 0x96a5b3d4u); break;
    case 25: acc = heavy_round(acc, 0x78338d23u); break;
    case 26: acc = heavy_round(acc, 0xa9b41026u); break;
    case 27: acc = heavy_round(acc, 0x2cb8e94du); break;
    case 28: acc = heavy_round(acc, 0xf74c7a48u); break;
    case 29: acc = heavy_round(acc, 0x3511d907u); break;
    case 30: acc = heavy_round(acc, 0x3c7ec2bau); break;
    case 31: acc = heavy_round(acc, 0xd49ef2d1u); break;
    case 32: acc = heavy_round(acc, 0x13a98dfcu); break;
    case 33: acc = heavy_round(acc, 0xa839912bu); break;
    case 34: acc = heavy_round(acc, 0xe465748eu); break;
    case 35: acc = heavy_round(acc, 0xa3e47295u); break;
    case 36: acc = heavy_round(acc, 0xc53d22f0u); break;
    case 37: acc = heavy_round(acc, 0x05e5598fu); break;
    case 38: acc = heavy_round(acc, 0xa9ba79a2u); break;
    case 39: acc = heavy_round(acc, 0x082fac99u); break;
    case 40: acc = heavy_round(acc, 0x8090ad24u); break;
    case 41: acc = heavy_round(acc, 0x51481633u); break;
    case 42: acc = heavy_round(acc, 0x40eb65f6u); break;
    case 43: acc = heavy_round(acc, 0x480924ddu); break;
    case 44: acc = heavy_round(acc, 0x232ae098u); break;
    case 45: acc = heavy_round(acc, 0x09f0eb17u); break;
    case 46: acc = heavy_round(acc, 0xb0950d8au); break;
    case 47: acc = heavy_round(acc, 0xe9df9f61u); break;
    case 48: acc = heavy_round(acc, 0xc6c3b14cu); break;
    case 49: acc = heavy_round(acc, 0x9d6f3c3bu); break;
    case 50: acc = heavy_round(acc, 0x6ed7845eu); break;
    case 51: acc = heavy_round(acc, 0xa94c2025u); break;
    case 52: acc = heavy_round(acc, 0x4db85340u); break;
    case 53: acc = heavy_round(acc, 0xc136ad9fu); break;
    case 54: acc = heavy_round(acc, 0xc9ea1e72u); break;
    case 55: acc = heavy_round(acc, 0xbe95eb29u); break;
    case 56: acc = heavy_round(acc, 0x9cbf3a74u); break;
    case 57: acc = heavy_round(acc, 0x18c32343u); break;
    case 58: acc = heavy_round(acc, 0xafef6fc6u); break;
    case 59: acc = heavy_round(acc, 0x7c76846du); break;
    case 60: acc = heavy_round(acc, 0xb5dc1ae8u); break;
    case 61: acc = heavy_round(acc, 0xcbfcc127u); break;
    case 62: acc = heavy_round(acc, 0x2a094c5au); break;
    case 63: acc = heavy_round(acc, 0x881daff1u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

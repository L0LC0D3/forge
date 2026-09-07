#include "heavy.h"
#include "mods.h"

int mod_071(int x)
{
    static const uint32_t local[256] = {
        0x606cd066u, 0xd6f42c8du, 0xca5a6488u, 0x585c3e47u, 0x8edd66fau, 0xc31eca11u, 0x252afc3cu, 0xe1f9aa6bu, 0xd4763cceu, 0x12c81dd5u, 0xd6485530u, 0x41bc66cfu, 0xae2da5e2u, 0x77ea6bd9u, 0x427fe364u, 0xc64b5773u,
        0xdd553636u, 0xb8a2381du, 0xb9dc5ad8u, 0x57e9a057u, 0x71adc1cau, 0x2a3246a1u, 0x4ed9af8cu, 0x1e1aa57bu, 0x8abb5c9eu, 0xfa479b65u, 0xa6d91580u, 0x4d860adfu, 0xa4595ab2u, 0x0a7d7a69u, 0xb7d500b4u, 0x821bb483u,
        0x828e5006u, 0x622167adu, 0xa7552528u, 0x4977c667u, 0x10a0109au, 0x7a372731u, 0x3ea276dcu, 0xc186a48bu, 0xc767b06eu, 0xe7bcbcf5u, 0xa83b29d0u, 0x6f68f2efu, 0x6ee58382u, 0x282e6cf9u, 0x6a86b204u, 0xb2979593u,
        0x4f151dd6u, 0x944abb3du, 0xd3c9c378u, 0x7847b077u, 0x2401536au, 0xbd166bc1u, 0x4b5a522cu, 0x130ea79bu, 0x6918383eu, 0xb7208285u, 0x3c139220u, 0x5ac61effu, 0xcfbf2052u, 0x18064389u, 0x8c09f754u, 0x78affaa3u,
        0xf5269fa6u, 0xaa3732cdu, 0xd57f35c8u, 0x03da5e87u, 0xab5e8a3au, 0x1af91451u, 0xd516417cu, 0x51c3aeabu, 0x69a9f40eu, 0x26abec15u, 0xc1474e70u, 0x1f3e8f0fu, 0xb8133122u, 0x074dfe19u, 0x7f13d0a4u, 0xf595e3b3u,
        0xaa3fd576u, 0x293fce5du, 0xe7fa7c18u, 0xeff0d097u, 0xbd84b50au, 0x6a4820e1u, 0x952b44ccu, 0xc4f6b9bbu, 0xae39e3deu, 0x66d7f9a5u, 0xe3fb5ec0u, 0x38b3431fu, 0x184eb5f2u, 0x998e9ca9u, 0x27993df4u, 0x5aba50c3u,
        0xf71dbf46u, 0x50fd8dedu, 0x3c009668u, 0x348c06a7u, 0x5880d3dau, 0xbfac9171u, 0xee2e5c1cu, 0xcc38c8cbu, 0xd72507aeu, 0xaa5dab35u, 0xed94c310u, 0x9f453b2fu, 0xb01eaec2u, 0x78911f39u, 0x3acf3f44u, 0xf9ce41d3u,
        0x87bd5d16u, 0xab49717du, 0x479684b8u, 0xcded00b7u, 0x319fe6aau, 0xfe0f6601u, 0x3bf4876cu, 0xef5adbdbu, 0x10085f7eu, 0xb63600c5u, 0x14b87b60u, 0xd755773fu, 0xde701b92u, 0xe45e85c9u, 0x8f2ad494u, 0x54c2b6e3u,
        0xfb5baee6u, 0x9c3c790du, 0x16014708u, 0xcc94bec7u, 0x856eed7au, 0x66999e91u, 0x2392c6bcu, 0xee6df2ebu, 0xdfc0eb4eu, 0x7199fa55u, 0xcd4b87b0u, 0x0184f74fu, 0x716ffc62u, 0x433fd059u, 0x6c60fde4u, 0x2dc8aff3u,
        0xb475b4b6u, 0xf22fa49du, 0x97c5dd58u, 0x654440d7u, 0xe7bae84au, 0x28b43b21u, 0xe35e1a0cu, 0xd1c30dfbu, 0xf86bab1eu, 0x760297e5u, 0x1872e800u, 0xeab4bb5fu, 0x768b5132u, 0xb1bdfee9u, 0xdb66bb34u, 0x97512d03u,
        0xa8c86e86u, 0x75bbf42du, 0xf2a947a8u, 0x00fc86e7u, 0x1390d71au, 0xf2083bb1u, 0xa2eb815cu, 0xf9eb2d0bu, 0x07659eeeu, 0x9f28d975u, 0xd4939c50u, 0x1c05c36fu, 0x0a6f1a02u, 0x92a21179u, 0xf6710c84u, 0x040d2e13u,
        0x3150dc56u, 0x79ba67bdu, 0xd1b085f8u, 0x4cfe90f7u, 0xbb3db9eau, 0x7e7ea041u, 0xc30ffcacu, 0x2fb7501bu, 0x854bc6beu, 0x9b05bf05u, 0x0d52a4a0u, 0xead90f7fu, 0x290856d2u, 0x1ef50809u, 0x38f4f1d4u, 0x56edb323u,
        0xda4bfe26u, 0x6b43ff4du, 0xb5209848u, 0x4acb5f07u, 0x584e90bau, 0x284068d1u, 0x2de08bfcu, 0xb438772bu, 0x85fb228eu, 0x79d24895u, 0x4b9500f0u, 0x88cf9f8fu, 0x7d8407a2u, 0xf5ffe299u, 0xcfa76b24u, 0xf323bc33u,
        0x3336d3f6u, 0x61b1baddu, 0x427e7e98u, 0x6023f117u, 0xfb905b8au, 0x77b69561u, 0xa6b22f4cu, 0x50bfa23bu, 0x8890b25eu, 0x3e077625u, 0xe57fb140u, 0x13ca739fu, 0x324f2c72u, 0xad4ba129u, 0xe87d7874u, 0xcc204943u,
        0x9ece5dc6u, 0xae9c9a6du, 0x948f38e8u, 0x67094727u, 0x1d101a5au, 0xb38a25f1u, 0x1a19e69cu, 0x66ddd14bu, 0x4769762eu, 0x6c5e47b5u, 0x4e77b590u, 0xa5ea8bafu, 0xc116c542u, 0x60a143b9u, 0x02ac19c4u, 0x75945a53u,
        0x230f9b96u, 0x6ddd9dfdu, 0x8b57c738u, 0xbdbc6137u, 0x6c1acd2au, 0x70a41a81u, 0xedecb1ecu, 0x0064045bu, 0x88226dfeu, 0x9bcfbd45u, 0x67220de0u, 0x6590e7bfu, 0xc2c7d212u, 0x4209ca49u, 0x3ea84f14u, 0x3370ef63u,
    };
    uint32_t acc = 0x4e757e63u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 71) & 255]);
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
    case 0: acc = heavy_round(acc, 0x52e799f8u); break;
    case 1: acc = heavy_round(acc, 0xc2c294f7u); break;
    case 2: acc = heavy_round(acc, 0x33c9edeau); break;
    case 3: acc = heavy_round(acc, 0x8e554441u); break;
    case 4: acc = heavy_round(acc, 0x1a4e50acu); break;
    case 5: acc = heavy_round(acc, 0xa759941bu); break;
    case 6: acc = heavy_round(acc, 0xe3a13abeu); break;
    case 7: acc = heavy_round(acc, 0xc594a305u); break;
    case 8: acc = heavy_round(acc, 0x696c38a0u); break;
    case 9: acc = heavy_round(acc, 0x3d1d937fu); break;
    case 10: acc = heavy_round(acc, 0x871b0ad2u); break;
    case 11: acc = heavy_round(acc, 0xeda02c09u); break;
    case 12: acc = heavy_round(acc, 0x6bfdc5d4u); break;
    case 13: acc = heavy_round(acc, 0x26d87723u); break;
    case 14: acc = heavy_round(acc, 0x174ff226u); break;
    case 15: acc = heavy_round(acc, 0xebaf634du); break;
    case 16: acc = heavy_round(acc, 0xc86cac48u); break;
    case 17: acc = heavy_round(acc, 0x89a06307u); break;
    case 18: acc = heavy_round(acc, 0xccb7c4bau); break;
    case 19: acc = heavy_round(acc, 0x10500cd1u); break;
    case 20: acc = heavy_round(acc, 0x3603dffcu); break;
    case 21: acc = heavy_round(acc, 0x657bbb2bu); break;
    case 22: acc = heavy_round(acc, 0xf77d968eu); break;
    case 23: acc = heavy_round(acc, 0x8baa2c95u); break;
    case 24: acc = heavy_round(acc, 0x7c6394f0u); break;
    case 25: acc = heavy_round(acc, 0xc645238fu); break;
    case 26: acc = heavy_round(acc, 0x5313bba2u); break;
    case 27: acc = heavy_round(acc, 0xa4040699u); break;
    case 28: acc = heavy_round(acc, 0xd0353f24u); break;
    case 29: acc = heavy_round(acc, 0x30cf8033u); break;
    case 30: acc = heavy_round(acc, 0xe907c7f6u); break;
    case 31: acc = heavy_round(acc, 0xb2861eddu); break;
    case 32: acc = heavy_round(acc, 0xc11f9298u); break;
    case 33: acc = heavy_round(acc, 0xf049f517u); break;
    case 34: acc = heavy_round(acc, 0xd7168f8au); break;
    case 35: acc = heavy_round(acc, 0x2a3f3961u); break;
    case 36: acc = heavy_round(acc, 0x2cfa834cu); break;
    case 37: acc = heavy_round(acc, 0x27e3e63bu); break;
    case 38: acc = heavy_round(acc, 0x8c80265eu); break;
    case 39: acc = heavy_round(acc, 0x2d685a25u); break;
    case 40: acc = heavy_round(acc, 0xec434540u); break;
    case 41: acc = heavy_round(acc, 0xccb0f79fu); break;
    case 42: acc = heavy_round(acc, 0x529be072u); break;
    case 43: acc = heavy_round(acc, 0x74e8c529u); break;
    case 44: acc = heavy_round(acc, 0x2bd04c74u); break;
    case 45: acc = heavy_round(acc, 0xebcd0d43u); break;
    case 46: acc = heavy_round(acc, 0x34ac51c6u); break;
    case 47: acc = heavy_round(acc, 0x8e19fe6du); break;
    case 48: acc = heavy_round(acc, 0xa7c54ce8u); break;
    case 49: acc = heavy_round(acc, 0xe0c04b27u); break;
    case 50: acc = heavy_round(acc, 0x9af34e5au); break;
    case 51: acc = heavy_round(acc, 0xb2cbc9f1u); break;
    case 52: acc = heavy_round(acc, 0x3bc73a9cu); break;
    case 53: acc = heavy_round(acc, 0x6023154bu); break;
    case 54: acc = heavy_round(acc, 0x2d05ea2eu); break;
    case 55: acc = heavy_round(acc, 0xbf882bb5u); break;
    case 56: acc = heavy_round(acc, 0x7c704990u); break;
    case 57: acc = heavy_round(acc, 0x7a820fafu); break;
    case 58: acc = heavy_round(acc, 0xcf607942u); break;
    case 59: acc = heavy_round(acc, 0x0c1767b9u); break;
    case 60: acc = heavy_round(acc, 0x4e03edc4u); break;
    case 61: acc = heavy_round(acc, 0xfb821e53u); break;
    case 62: acc = heavy_round(acc, 0xd03a8f96u); break;
    case 63: acc = heavy_round(acc, 0x2a4401fdu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

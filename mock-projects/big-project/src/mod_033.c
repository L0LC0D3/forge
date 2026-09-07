#include "heavy.h"
#include "mods.h"

int mod_033(int x)
{
    static const uint32_t local[256] = {
        0x695c0a74u, 0x4799b343u, 0x9e34bfc6u, 0x03db946du, 0x6a5deae8u, 0xff745127u, 0x7a7b9c5au, 0xf9cbbff1u, 0xd8cab89cu, 0x0b847b4bu, 0xa59c182eu, 0x337c81b5u, 0x201ca790u, 0xa5b6d5afu, 0x5df28742u, 0xd9161db9u,
        0xf9772bc4u, 0xa9104453u, 0xf9967d96u, 0x22c317fdu, 0x139af938u, 0x5111eb37u, 0x766ecf2au, 0xa1b43481u, 0x601a03ecu, 0xdd5d2e5bu, 0x21858ffeu, 0x37647745u, 0xb9cb7fe0u, 0x3d97b1bfu, 0x299c1412u, 0x7f1d2449u,
        0xd87fe114u, 0x298f5963u, 0x30feef66u, 0xadb9bf8du, 0xc5f4db88u, 0x499e4947u, 0x3299f5fau, 0x2bac0d11u, 0x4809633cu, 0x534ee56bu, 0x4e4c3bceu, 0x6d4010d5u, 0xf431ac30u, 0x3e3fd1cfu, 0x507c14e2u, 0xcd200ed9u,
        0xe02b2a64u, 0xf547f273u, 0x08eb1536u, 0x6d188b1du, 0x23f091d8u, 0x27da6b57u, 0xc4ca10cau, 0x611c49a1u, 0xa0edd68cu, 0x1faaa07bu, 0x800d1b9eu, 0xa8884e65u, 0xc2742c80u, 0xbe9035dfu, 0xa1ff89b2u, 0xb9a7dd69u,
        0x2b6e07b4u, 0x08ab0f83u, 0x5917ef06u, 0xa3787aadu, 0x85531c28u, 0xdec75167u, 0xea0c1f9au, 0x09adea31u, 0xe45c5ddcu, 0xcd015f8bu, 0x86252f6eu, 0x7ef62ff5u, 0x74f800d0u, 0x11a9ddefu, 0x7cd37282u, 0x017d8ff9u,
        0x667d7904u, 0x4069b093u, 0xdc827cd6u, 0x9db28e3du, 0x47217a78u, 0x25a5fb77u, 0xd6ad226au, 0x7b49eec1u, 0x4529f92cu, 0xce24229bu, 0x7b31773eu, 0xd882b585u, 0x09622920u, 0xd6edc9ffu, 0x9ee4cf52u, 0xb7aa2689u,
        0x1ece7e54u, 0x6974d5a3u, 0x0167bea6u, 0x42dfc5cdu, 0x1ba0acc8u, 0x87f76987u, 0x063a193au, 0x2a195751u, 0xff6ba87cu, 0x8e23e9abu, 0x950ef30eu, 0x7f66df15u, 0x7a97a570u, 0x09fcfa0fu, 0xf560a022u, 0xd576a119u,
        0x131617a4u, 0x50fd7eb3u, 0xb944b476u, 0xa459215du, 0x5a55b318u, 0x757c9b97u, 0x0b80040au, 0x388523e1u, 0xa8766bccu, 0x8051b4bbu, 0xf4daa2deu, 0xb01baca5u, 0x10bd75c0u, 0x12b86e1fu, 0x6cb3e4f2u, 0xca6bffa9u,
        0x834944f4u, 0xd474abc3u, 0x48d65e46u, 0x8db7a0edu, 0x50058d68u, 0x523691a7u, 0x608be2dau, 0x07365471u, 0x7edf431cu, 0x303e83cbu, 0x76f186aeu, 0xa95a1e35u, 0xb1389a10u, 0xd541262fu, 0xc08b9dc2u, 0x0c534239u,
        0x809d0644u, 0xf18b5cd3u, 0x1819bc16u, 0x14d4447du, 0x8eb53bb8u, 0x86664bb7u, 0x36aab5aau, 0xc515e901u, 0xba7b2e6cu, 0x51bb56dbu, 0x82f09e7eu, 0x3c1b33c5u, 0x2eae1260u, 0xc1f8223fu, 0x4bd4ca92u, 0xa73568c9u,
        0x3d865b94u, 0xd63291e3u, 0x824bcde6u, 0x29c80c0du, 0x3da9be08u, 0x8e8cc9c7u, 0x46697c7au, 0xff4ce191u, 0xdc5f2dbcu, 0xd0d92debu, 0xdbb4ea4eu, 0x5b97ed55u, 0x9902deb0u, 0xe57e624fu, 0xd8bc6b62u, 0xcd5b7359u,
        0x5dba44e4u, 0xf09b4af3u, 0xa5e993b6u, 0x26ebf79du, 0x69681458u, 0x0b6b0bd7u, 0x9f95374au, 0x31443e21u, 0xfee0410cu, 0xe1e908fbu, 0x6f5b6a1eu, 0xad494ae5u, 0x8d5bff00u, 0xf8b4e65fu, 0x70af8032u, 0x674e61e9u,
        0x462dc234u, 0xff368803u, 0x34b00d86u, 0x60d9072du, 0x53b53ea8u, 0xd20211e7u, 0x793ae61au, 0x54a4feb1u, 0x2593685cu, 0x117be80bu, 0x27411deeu, 0x18e84c75u, 0x861e7350u, 0x70bcae6fu, 0x2c5b0902u, 0xa3d73479u,
        0x6d15d384u, 0x20b54913u, 0x439c3b56u, 0xb6683abdu, 0xc3963cf8u, 0xfb92dbf7u, 0x01a788eau, 0x71582341u, 0x8d4da3acu, 0x5462cb1bu, 0xb80305beu, 0x586df205u, 0x2aef3ba0u, 0x8ef6ba7fu, 0x03ac05d2u, 0x87feeb09u,
        0xa9e778d4u, 0xe4088e23u, 0x1aeb1d26u, 0x20b2924du, 0x55500f48u, 0xf59e6a07u, 0x2e681fbau, 0x2d86abd1u, 0xfc23f2fcu, 0x17aeb22bu, 0x717e218eu, 0x88133b95u, 0xa0b357f0u, 0x71040a8fu, 0x9dcf76a2u, 0x7f0e8599u,
        0x8557b224u, 0x58615733u, 0x0619b2f6u, 0x43110dddu, 0xca67b598u, 0x91e5bc17u, 0x8c49aa8au, 0x5d999861u, 0x116b564cu, 0x50b09d3bu, 0x0ecf715eu, 0xb6512925u, 0xd98fc840u, 0x20c59e9fu, 0x21325b72u, 0xea8f0429u,
    };
    uint32_t acc = 0x1ac1fb29u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 33) & 255]);
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
    case 0: acc = heavy_round(acc, 0xc02968aeu); break;
    case 1: acc = heavy_round(acc, 0xb73c9835u); break;
    case 2: acc = heavy_round(acc, 0x8c54cc10u); break;
    case 3: acc = heavy_round(acc, 0x139bb02fu); break;
    case 4: acc = heavy_round(acc, 0x78209fc2u); break;
    case 5: acc = heavy_round(acc, 0xefb05c39u); break;
    case 6: acc = heavy_round(acc, 0xaeb35844u); break;
    case 7: acc = heavy_round(acc, 0x2f5986d3u); break;
    case 8: acc = heavy_round(acc, 0x7a4dde16u); break;
    case 9: acc = heavy_round(acc, 0x2905fe7du); break;
    case 10: acc = heavy_round(acc, 0x8f57adb8u); break;
    case 11: acc = heavy_round(acc, 0x6a1215b7u); break;
    case 12: acc = heavy_round(acc, 0xf2dff7aau); break;
    case 13: acc = heavy_round(acc, 0xfe164301u); break;
    case 14: acc = heavy_round(acc, 0x8d5bc06cu); break;
    case 15: acc = heavy_round(acc, 0xc34ec0dbu); break;
    case 16: acc = heavy_round(acc, 0x5da9007eu); break;
    case 17: acc = heavy_round(acc, 0x60842dc5u); break;
    case 18: acc = heavy_round(acc, 0x459ec460u); break;
    case 19: acc = heavy_round(acc, 0x351d2c3fu); break;
    case 20: acc = heavy_round(acc, 0xe0b24c92u); break;
    case 21: acc = heavy_round(acc, 0x2a4102c9u); break;
    case 22: acc = heavy_round(acc, 0x8e792d94u); break;
    case 23: acc = heavy_round(acc, 0x34333be3u); break;
    case 24: acc = heavy_round(acc, 0x26106fe6u); break;
    case 25: acc = heavy_round(acc, 0xa550460du); break;
    case 26: acc = heavy_round(acc, 0x74b0b008u); break;
    case 27: acc = heavy_round(acc, 0xc05313c7u); break;
    case 28: acc = heavy_round(acc, 0x08f73e7au); break;
    case 29: acc = heavy_round(acc, 0x4dcbbb91u); break;
    case 30: acc = heavy_round(acc, 0xadac3fbcu); break;
    case 31: acc = heavy_round(acc, 0xe8ef17ebu); break;
    case 32: acc = heavy_round(acc, 0xaa0dcc4eu); break;
    case 33: acc = heavy_round(acc, 0x52276755u); break;
    case 34: acc = heavy_round(acc, 0x32e810b0u); break;
    case 35: acc = heavy_round(acc, 0xea0dec4fu); break;
    case 36: acc = heavy_round(acc, 0xbf026d62u); break;
    case 37: acc = heavy_round(acc, 0x95b58d59u); break;
    case 38: acc = heavy_round(acc, 0xfaa996e4u); break;
    case 39: acc = heavy_round(acc, 0x456e74f3u); break;
    case 40: acc = heavy_round(acc, 0x315eb5b6u); break;
    case 41: acc = heavy_round(acc, 0x396ab19du); break;
    case 42: acc = heavy_round(acc, 0x01f38658u); break;
    case 43: acc = heavy_round(acc, 0x7bebd5d7u); break;
    case 44: acc = heavy_round(acc, 0x609b794au); break;
    case 45: acc = heavy_round(acc, 0xeee19821u); break;
    case 46: acc = heavy_round(acc, 0x1bb9d30cu); break;
    case 47: acc = heavy_round(acc, 0x4b2172fbu); break;
    case 48: acc = heavy_round(acc, 0x9b74cc1eu); break;
    case 49: acc = heavy_round(acc, 0x999f44e5u); break;
    case 50: acc = heavy_round(acc, 0x3955b100u); break;
    case 51: acc = heavy_round(acc, 0x934ef05fu); break;
    case 52: acc = heavy_round(acc, 0xa47e0232u); break;
    case 53: acc = heavy_round(acc, 0x0296fbe9u); break;
    case 54: acc = heavy_round(acc, 0x20399434u); break;
    case 55: acc = heavy_round(acc, 0x497c3203u); break;
    case 56: acc = heavy_round(acc, 0x55f5af86u); break;
    case 57: acc = heavy_round(acc, 0xa1ee412du); break;
    case 58: acc = heavy_round(acc, 0xc0e530a8u); break;
    case 59: acc = heavy_round(acc, 0x19dd5be7u); break;
    case 60: acc = heavy_round(acc, 0xb8d9a81au); break;
    case 61: acc = heavy_round(acc, 0xc300d8b1u); break;
    case 62: acc = heavy_round(acc, 0xa3197a5cu); break;
    case 63: acc = heavy_round(acc, 0x9e76d20bu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

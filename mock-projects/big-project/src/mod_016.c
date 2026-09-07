#include "heavy.h"
#include "mods.h"

int mod_016(int x)
{
    static const uint32_t local[256] = {
        0x40c5a223u, 0x1a7d2126u, 0xacb4c64du, 0x6624b348u, 0x8dc2be07u, 0x95b863bau, 0x0bb21fd1u, 0xe890d6fcu, 0xc00e462bu, 0x8750a58eu, 0x685bef95u, 0x901c7bf0u, 0x01b2de8fu, 0x53283aa2u, 0x36a87999u, 0x03611624u,
        0x40b36b33u, 0x7a3cb6f6u, 0x807041ddu, 0xeaf55998u, 0xac6f1017u, 0xd0baee8au, 0x9c720c61u, 0xd4a13a4cu, 0xf745313bu, 0x2b52f55eu, 0x7396dd25u, 0xcfd1ec40u, 0x8079729fu, 0x57cc1f72u, 0x1875f829u, 0xb74de374u,
        0xca57b843u, 0x74d900c6u, 0xb518e16du, 0x5c28d3e8u, 0xe0982627u, 0xfd2b6d5au, 0x12ff5cf1u, 0x05f7b19cu, 0x9303204bu, 0x19c8792eu, 0x41636eb5u, 0xfc44b090u, 0xa8554aafu, 0x0f9c7842u, 0x1dbd5ab9u, 0x0d4344c4u,
        0x6d638953u, 0xdc4efe96u, 0xc287a4fdu, 0x45c42238u, 0x447f0037u, 0x5656e02au, 0x20431181u, 0x4e693cecu, 0x1919135bu, 0x644e30feu, 0x44baa445u, 0x2219c8e0u, 0xdba766bfu, 0x1f864512u, 0x1487a149u, 0x11b63a14u,
        0x69c7de63u, 0xf5dbb066u, 0x7ad58c8du, 0x490c4488u, 0x86a49e47u, 0x1eca46fau, 0x53662a11u, 0x490adc3cu, 0xc7980a6bu, 0xf7c11cceu, 0x92d57dd5u, 0x0b363530u, 0x9910c6cfu, 0x1bb685e2u, 0x711dcbd9u, 0xc25bc364u,
        0xbfb5b773u, 0x49fc1636u, 0x9a5b981du, 0x6c863ad8u, 0xf9ca0057u, 0x7052a1cau, 0xa9d1a6a1u, 0xaa318f8cu, 0xa4d1057bu, 0x6c3e3c9eu, 0x732cfb65u, 0x8ebef580u, 0x8b726adfu, 0x579a3ab2u, 0xde08da69u, 0x5e28e0b4u,
        0x3f9e1483u, 0x746d3006u, 0x57b2c7adu, 0x6bf70528u, 0xa4f02667u, 0x0bfcf09au, 0x1f2e8731u, 0x8f7256dcu, 0x8f55048bu, 0xd522906eu, 0xef7a1cf5u, 0xe11909d0u, 0x99ed52efu, 0xb5de6382u, 0xcc11ccf9u, 0xb5529204u,
        0x9a31f593u, 0xf42bfdd6u, 0xf3b41b3du, 0x0863a378u, 0x53581077u, 0x2a16336au, 0x3d65cbc1u, 0xcfa2322cu, 0x4df5079bu, 0x910b183eu, 0x63b5e285u, 0xe3e97220u, 0xf7e27effu, 0x78700052u, 0x0241a389u, 0x794dd754u,
        0x70625aa3u, 0xfb757fa6u, 0x497892cdu, 0x581115c8u, 0xa482be87u, 0x4a2b6a3au, 0xaca07451u, 0x4ad6217cu, 0x9fc20eabu, 0x19d4d40eu, 0x0e194c15u, 0x76152e70u, 0x34f2ef0fu, 0x107c1122u, 0x2de15e19u, 0x8ccfb0a4u,
        0x636043b3u, 0x3fc6b576u, 0x5e592e5du, 0x16845c18u, 0x1c313097u, 0x0309950au, 0xc34780e1u, 0x3a6324ccu, 0x4c0d19bbu, 0xd49cc3deu, 0x9f1d59a5u, 0xc3c13ec0u, 0x4cffa31fu, 0xee6f95f2u, 0x7279fca9u, 0x53cd1df4u,
        0x249cb0c3u, 0xc9dc9f46u, 0xf1eeededu, 0xf4827668u, 0x326466a7u, 0xd2bdb3dau, 0x1603f171u, 0x80de3c1cu, 0x326728cbu, 0xe1bfe7aeu, 0xc97b0b35u, 0x9652a310u, 0xb8299b2fu, 0x51f78ec2u, 0xf9d47f39u, 0x037b1f44u,
        0x85c8a1d3u, 0xc5b43d16u, 0x0e12d17du, 0xe81064b8u, 0x635d60b7u, 0xee94c6aau, 0x07bec601u, 0xfa1c676cu, 0x5aa13bdbu, 0xecdb3f7eu, 0xd22b60c5u, 0xa46e5b60u, 0x7ad1d73fu, 0x1a00fb92u, 0x83f9e5c9u, 0xf24eb494u,
        0x88d516e3u, 0x528a8ee6u, 0x96ddd90du, 0x7c732708u, 0x3f9d1ec7u, 0x131bcd7au, 0x59a0fe91u, 0xcb32a6bcu, 0x04cc52ebu, 0xfccbcb4eu, 0x20675a55u, 0xe1f967b0u, 0x3599574fu, 0x94b8dc62u, 0xf7333059u, 0xe7fcdde4u,
        0x6ff30ff3u, 0x52dc94b6u, 0xdaa9049du, 0x222fbd58u, 0x7be4a0d7u, 0x541fc84au, 0xbb139b21u, 0xb275fa0cu, 0xb9396dfbu, 0x43ae8b1eu, 0xcda7f7e5u, 0xd018c800u, 0x35611b5fu, 0x4f8c3132u, 0xf0095ee9u, 0x6d7a9b34u,
        0xcd938d03u, 0x3c674e86u, 0x220d542du, 0x7f0b27a8u, 0x0134e6e7u, 0xecadb71au, 0x59bf9bb1u, 0x577b615cu, 0x58798d0bu, 0xeee07eeeu, 0x35a63975u, 0xcd317c50u, 0x834a236fu, 0xe727fa02u, 0x51457179u, 0x1cfcec84u,
        0x94678e13u, 0xe827bc56u, 0x3fe3c7bdu, 0xbe0a65f8u, 0xfccef0f7u, 0x0f1299eau, 0x718e0041u, 0x9b17dcacu, 0x2b5db01bu, 0xf6fea6beu, 0x865b1f05u, 0x64e884a0u, 0xf4b56f7fu, 0xd77936d2u, 0xd3f06809u, 0xf1f8d1d4u,
    };
    uint32_t acc = 0x8647dcd4u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 16) & 255]);
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
    case 0: acc = heavy_round(acc, 0x5ad9dbbbu); break;
    case 1: acc = heavy_round(acc, 0x1c4e9ddeu); break;
    case 2: acc = heavy_round(acc, 0x6a016ba5u); break;
    case 3: acc = heavy_round(acc, 0xb28228c0u); break;
    case 4: acc = heavy_round(acc, 0x2407851fu); break;
    case 5: acc = heavy_round(acc, 0x0fe20ff2u); break;
    case 6: acc = heavy_round(acc, 0xabe62ea9u); break;
    case 7: acc = heavy_round(acc, 0x3c37a7f4u); break;
    case 8: acc = heavy_round(acc, 0xdf01b2c3u); break;
    case 9: acc = heavy_round(acc, 0xb1c9b946u); break;
    case 10: acc = heavy_round(acc, 0xbb553fedu); break;
    case 11: acc = heavy_round(acc, 0xf560a068u); break;
    case 12: acc = heavy_round(acc, 0xdc6888a7u); break;
    case 13: acc = heavy_round(acc, 0x6c7f6ddau); break;
    case 14: acc = heavy_round(acc, 0x3ef66371u); break;
    case 15: acc = heavy_round(acc, 0x509a061cu); break;
    case 16: acc = heavy_round(acc, 0x4b6c6acbu); break;
    case 17: acc = heavy_round(acc, 0xb15041aeu); break;
    case 18: acc = heavy_round(acc, 0xa1ab9d35u); break;
    case 19: acc = heavy_round(acc, 0x2cf60d10u); break;
    case 20: acc = heavy_round(acc, 0xd4b1fd2fu); break;
    case 21: acc = heavy_round(acc, 0xadf088c2u); break;
    case 22: acc = heavy_round(acc, 0x43153139u); break;
    case 23: acc = heavy_round(acc, 0xe4b02944u); break;
    case 24: acc = heavy_round(acc, 0x117623d3u); break;
    case 25: acc = heavy_round(acc, 0xb14fd716u); break;
    case 26: acc = heavy_round(acc, 0x0e55a37du); break;
    case 27: acc = heavy_round(acc, 0x0d210eb8u); break;
    case 28: acc = heavy_round(acc, 0x82f202b7u); break;
    case 29: acc = heavy_round(acc, 0x93ad00aau); break;
    case 30: acc = heavy_round(acc, 0xbb15b801u); break;
    case 31: acc = heavy_round(acc, 0x5bf2b16cu); break;
    case 32: acc = heavy_round(acc, 0xedfefddbu); break;
    case 33: acc = heavy_round(acc, 0xb5ea197eu); break;
    case 34: acc = heavy_round(acc, 0x3cc872c5u); break;
    case 35: acc = heavy_round(acc, 0x65944560u); break;
    case 36: acc = heavy_round(acc, 0x3efab93fu); break;
    case 37: acc = heavy_round(acc, 0x6c207592u); break;
    case 38: acc = heavy_round(acc, 0x242f17c9u); break;
    case 39: acc = heavy_round(acc, 0x28ee3e94u); break;
    case 40: acc = heavy_round(acc, 0x59eb18e3u); break;
    case 41: acc = heavy_round(acc, 0xe774a8e6u); break;
    case 42: acc = heavy_round(acc, 0xf71d2b0du); break;
    case 43: acc = heavy_round(acc, 0x9c565108u); break;
    case 44: acc = heavy_round(acc, 0x7ae240c7u); break;
    case 45: acc = heavy_round(acc, 0xf32a877au); break;
    case 46: acc = heavy_round(acc, 0xc27c7091u); break;
    case 47: acc = heavy_round(acc, 0xafc370bcu); break;
    case 48: acc = heavy_round(acc, 0x0aa294ebu); break;
    case 49: acc = heavy_round(acc, 0x18f9254eu); break;
    case 50: acc = heavy_round(acc, 0x6a90ec55u); break;
    case 51: acc = heavy_round(acc, 0x7841d1b0u); break;
    case 52: acc = heavy_round(acc, 0x0b82b94fu); break;
    case 53: acc = heavy_round(acc, 0x009ed662u); break;
    case 54: acc = heavy_round(acc, 0x7d7ce259u); break;
    case 55: acc = heavy_round(acc, 0x78a6e7e4u); break;
    case 56: acc = heavy_round(acc, 0x829191f3u); break;
    case 57: acc = heavy_round(acc, 0x1eb52eb6u); break;
    case 58: acc = heavy_round(acc, 0x8c04d69du); break;
    case 59: acc = heavy_round(acc, 0x3b856758u); break;
    case 60: acc = heavy_round(acc, 0x80fa42d7u); break;
    case 61: acc = heavy_round(acc, 0x06c5024au); break;
    case 62: acc = heavy_round(acc, 0x4c938d21u); break;
    case 63: acc = heavy_round(acc, 0xb261440cu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

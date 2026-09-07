#include "heavy.h"
#include "mods.h"

int mod_101(int x)
{
    static const uint32_t local[256] = {
        0xc0a57bf0u, 0x0ea7de8fu, 0x99993aa2u, 0xd0657999u, 0x1ffa1624u, 0xaa786b33u, 0x573db6f6u, 0x1f7d41ddu, 0x2c9e5998u, 0x58041017u, 0xe54bee8au, 0x6dcf0c61u, 0x845a3a4cu, 0x99aa313bu, 0xa873f55eu, 0xf443dd25u,
        0x469aec40u, 0x9eae729fu, 0xfe7d1f72u, 0x1572f829u, 0x5e26e374u, 0xb95cb843u, 0x961a00c6u, 0x4b65e16du, 0xac11d3e8u, 0xc56d2627u, 0x79fc6d5au, 0xaf9c5cf1u, 0x87f0b19cu, 0x62a8204bu, 0x6329792eu, 0xa1506eb5u,
        0x494db090u, 0x27ca4aafu, 0x268d7842u, 0x4dfa5ab9u, 0xce5c44c4u, 0x31a88953u, 0x51cffe96u, 0x2014a4fdu, 0x33ed2238u, 0xb2940037u, 0x4b67e02au, 0x58201181u, 0x32a23cecu, 0x65fe135bu, 0x89ef30feu, 0x53e7a445u,
        0xd562c8e0u, 0x0c5c66bfu, 0xb6b74512u, 0x4804a149u, 0x7d0f3a14u, 0x534cde63u, 0xcf9cb066u, 0x6fa28c8du, 0x65754488u, 0xcdf99e47u, 0x9c1b46fau, 0xf6832a11u, 0x1f83dc3cu, 0xe1bd0a6bu, 0x09a21cceu, 0x21427dd5u,
        0xb4bf3530u, 0xcb05c6cfu, 0x432785e2u, 0x77dacbd9u, 0x67f4c364u, 0x1e7ab773u, 0x97fd1636u, 0xf668981du, 0x472f3ad8u, 0x6a5f0057u, 0x85e3a1cau, 0x882ea6a1u, 0x02ea8f8cu, 0xdc36057bu, 0x7a5f3c9eu, 0x50d9fb65u,
        0xbe87f580u, 0x0ea76adfu, 0x1f4b3ab2u, 0x8805da69u, 0xce01e0b4u, 0x63a31483u, 0x46ae3006u, 0xeaffc7adu, 0x94e00528u, 0x8ec52667u, 0xc9cdf09au, 0x08cb8731u, 0xfa6b56dcu, 0x33fa048bu, 0xef83906eu, 0xec671cf5u,
        0x272209d0u, 0xbe6252efu, 0x2dcf6382u, 0xe94eccf9u, 0x7f6b9204u, 0xd376f593u, 0x5aacfdd6u, 0x8e411b3du, 0x0f8ca378u, 0x066d1077u, 0xa027336au, 0x0242cbc1u, 0xdcdb322cu, 0xafda079bu, 0xc7ac183eu, 0x4fe2e285u,
        0xd0327220u, 0x0d977effu, 0xb0a10052u, 0x62bea389u, 0x2da6d754u, 0x0ee75aa3u, 0x06367fa6u, 0xbb4592cdu, 0xcd7a15c8u, 0x70d7be87u, 0x887c6a3au, 0x1cbd7451u, 0x8a4f217cu, 0x0ee70eabu, 0x7cb5d40eu, 0xb9864c15u,
        0x989e2e70u, 0x8be7ef0fu, 0x18ed1122u, 0xa19e5e19u, 0xbb68b0a4u, 0xb72543b3u, 0xfec7b576u, 0x77662e5du, 0x8a2d5c18u, 0x51c63097u, 0x199a950au, 0xaea480e1u, 0x3c1c24ccu, 0x187219bbu, 0x73bdc3deu, 0xd9ca59a5u,
        0xac8a3ec0u, 0x3534a31fu, 0xd72095f2u, 0xc976fca9u, 0x8ca61df4u, 0x7da1b0c3u, 0x4d1d9f46u, 0x823bededu, 0xf66b7668u, 0x213966a7u, 0xd18eb3dau, 0x4ca0f171u, 0xd4d73c1cu, 0xac0c28cbu, 0xcd20e7aeu, 0x63680b35u,
        0xd55ba310u, 0x819e9b2fu, 0x2ae88ec2u, 0x04117f39u, 0xd6941f44u, 0x340da1d3u, 0x1d353d16u, 0xe59fd17du, 0x083964b8u, 0x5b7260b7u, 0xe5a5c6aau, 0x599bc601u, 0x3055676cu, 0xd1863bdbu, 0x347c3f7eu, 0x9b5860c5u,
        0xc9b75b60u, 0x7586d73fu, 0xf331fb92u, 0x1176e5c9u, 0xefa7b494u, 0xdc5a16e3u, 0x8e4b8ee6u, 0x85aad90du, 0x4adc2708u, 0x90f21ec7u, 0x126ccd7au, 0x96bdfe91u, 0x73aba6bcu, 0xc8f152ebu, 0xb0accb4eu, 0xe8d45a55u,
        0x7d8267b0u, 0xb18e574fu, 0x7e29dc62u, 0xd7f03059u, 0x9f95dde4u, 0xb8b80ff3u, 0x82dd94b6u, 0xb0b6049du, 0x2ed8bd58u, 0x7679a0d7u, 0x6bb0c84au, 0xb3709b21u, 0x5d2efa0cu, 0x1a9e6dfbu, 0x73cf8b1eu, 0x6554f7e5u,
        0x71e1c800u, 0x82961b5fu, 0x593d3132u, 0xf4065ee9u, 0x6f539b34u, 0x5b988d03u, 0x70a84e86u, 0xaf5a542du, 0x59f427a8u, 0xf509e6e7u, 0x2c7eb71au, 0xdd5c9bb1u, 0x9474615cu, 0xa71e8d0bu, 0xab417eeeu, 0x6c933975u,
        0x053a7c50u, 0xf1bf236fu, 0x2118fa02u, 0x48827179u, 0xf915ec84u, 0xb7ac8e13u, 0x30a8bc56u, 0x5470c7bdu, 0xf73365f8u, 0x39e3f0f7u, 0x872399eau, 0x506b0041u, 0xfa50dcacu, 0xb742b01bu, 0x4f9fa6beu, 0x2c881f05u,
        0xc33184a0u, 0xd46a6f7fu, 0x51aa36d2u, 0x8e6d6809u, 0x3851d1d4u, 0x2fe51323u, 0xcf1bde26u, 0x8d125f4du, 0x06db7848u, 0xc688bf07u, 0x752c70bau, 0xe6c4c8d1u, 0xf8d96bfcu, 0x0c1bd72bu, 0xf4c7028eu, 0x356ca895u,
    };
    uint32_t acc = 0xd9c8ef95u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 101) & 255]);
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
    case 0: acc = heavy_round(acc, 0x159afbd2u); break;
    case 1: acc = heavy_round(acc, 0xad256909u); break;
    case 2: acc = heavy_round(acc, 0x310fded4u); break;
    case 3: acc = heavy_round(acc, 0xcfb9bc23u); break;
    case 4: acc = heavy_round(acc, 0x293e7326u); break;
    case 5: acc = heavy_round(acc, 0x7531f04du); break;
    case 6: acc = heavy_round(acc, 0x8d3bd548u); break;
    case 7: acc = heavy_round(acc, 0x137b7807u); break;
    case 8: acc = heavy_round(acc, 0x2435d5bau); break;
    case 9: acc = heavy_round(acc, 0x657ce9d1u); break;
    case 10: acc = heavy_round(acc, 0xfe5918fcu); break;
    case 11: acc = heavy_round(acc, 0x1785a02bu); break;
    case 12: acc = heavy_round(acc, 0x503c378eu); break;
    case 13: acc = heavy_round(acc, 0xba7e5995u); break;
    case 14: acc = heavy_round(acc, 0xcc17ddf0u); break;
    case 15: acc = heavy_round(acc, 0xc882d88fu); break;
    case 16: acc = heavy_round(acc, 0xb353eca2u); break;
    case 17: acc = heavy_round(acc, 0xe3cc8399u); break;
    case 18: acc = heavy_round(acc, 0x24319824u); break;
    case 19: acc = heavy_round(acc, 0xb1160533u); break;
    case 20: acc = heavy_round(acc, 0x829a88f6u); break;
    case 21: acc = heavy_round(acc, 0xd0dfebddu); break;
    case 22: acc = heavy_round(acc, 0x185cfb98u); break;
    case 23: acc = heavy_round(acc, 0x173e4a17u); break;
    case 24: acc = heavy_round(acc, 0x785ce08au); break;
    case 25: acc = heavy_round(acc, 0x48175661u); break;
    case 26: acc = heavy_round(acc, 0xa181fc4cu); break;
    case 27: acc = heavy_round(acc, 0xddfb0b3bu); break;
    case 28: acc = heavy_round(acc, 0xa16b075eu); break;
    case 29: acc = heavy_round(acc, 0xcbfbc725u); break;
    case 30: acc = heavy_round(acc, 0x5c2dce40u); break;
    case 31: acc = heavy_round(acc, 0x4f2fec9fu); break;
    case 32: acc = heavy_round(acc, 0x75ac5172u); break;
    case 33: acc = heavy_round(acc, 0xd2c48229u); break;
    case 34: acc = heavy_round(acc, 0xf246e574u); break;
    case 35: acc = heavy_round(acc, 0x31c8d243u); break;
    case 36: acc = heavy_round(acc, 0x4ff352c6u); break;
    case 37: acc = heavy_round(acc, 0x541b0b6du); break;
    case 38: acc = heavy_round(acc, 0x6600f5e8u); break;
    case 39: acc = heavy_round(acc, 0xd01de027u); break;
    case 40: acc = heavy_round(acc, 0x9911df5au); break;
    case 41: acc = heavy_round(acc, 0xf11f26f1u); break;
    case 42: acc = heavy_round(acc, 0xb210f39cu); break;
    case 43: acc = heavy_round(acc, 0xd2977a4bu); break;
    case 44: acc = heavy_round(acc, 0x3a2d0b2eu); break;
    case 45: acc = heavy_round(acc, 0x3aaad8b5u); break;
    case 46: acc = heavy_round(acc, 0x73211290u); break;
    case 47: acc = heavy_round(acc, 0x129244afu); break;
    case 48: acc = heavy_round(acc, 0x2a512a42u); break;
    case 49: acc = heavy_round(acc, 0xd9d664b9u); break;
    case 50: acc = heavy_round(acc, 0x8e84c6c4u); break;
    case 51: acc = heavy_round(acc, 0xc9832353u); break;
    case 52: acc = heavy_round(acc, 0x2b45d096u); break;
    case 53: acc = heavy_round(acc, 0x9ebc4efdu); break;
    case 54: acc = heavy_round(acc, 0x0a2cc438u); break;
    case 55: acc = heavy_round(acc, 0xc05b3a37u); break;
    case 56: acc = heavy_round(acc, 0x09a1d22au); break;
    case 57: acc = heavy_round(acc, 0xb97d5b81u); break;
    case 58: acc = heavy_round(acc, 0x89dafeecu); break;
    case 59: acc = heavy_round(acc, 0x632bed5bu); break;
    case 60: acc = heavy_round(acc, 0xf41f42feu); break;
    case 61: acc = heavy_round(acc, 0xa1848e45u); break;
    case 62: acc = heavy_round(acc, 0x2596aae0u); break;
    case 63: acc = heavy_round(acc, 0xdd0ae0bfu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

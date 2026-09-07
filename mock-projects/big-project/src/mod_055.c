#include "heavy.h"
#include "mods.h"

int mod_055(int x)
{
    static const uint32_t local[256] = {
        0x2c0f1316u, 0x57f3af7du, 0xeeefaab8u, 0x8897eeb7u, 0x0521fcaau, 0xb66e8401u, 0x6cbd0d6cu, 0x64eda9dbu, 0xa490d57eu, 0x2627fec5u, 0xfd366160u, 0x455e253fu, 0xe834f192u, 0xb6a163c9u, 0x8f041a94u, 0xbaaf44e3u,
        0x46f2e4e6u, 0xf86e370du, 0x243bed08u, 0x19b32cc7u, 0x4dce837au, 0x4f383c91u, 0x9494ccbcu, 0x0fec40ebu, 0x843ee14eu, 0x02037855u, 0x78daedb0u, 0xd071254fu, 0x8bc25262u, 0xcdb22e59u, 0x33a3c3e4u, 0x3d10bdf3u,
        0x8eb26ab6u, 0xfdc8e29du, 0x4b420358u, 0xafb62ed7u, 0x5257fe4au, 0x4f725921u, 0x88f9a00cu, 0x480cdbfbu, 0x803f211eu, 0x22c395e5u, 0x9173ce00u, 0xe164695fu, 0xfacb2732u, 0xbe3fdce9u, 0xea730134u, 0x14d4bb03u,
        0x510aa486u, 0xa89cb22du, 0xa1c6eda8u, 0xeba1f4e7u, 0xa5cb6d1au, 0x5cc5d9b1u, 0x0980875cu, 0x25e07b0bu, 0x9dee94eeu, 0xdc215775u, 0x3d660250u, 0x3958f16fu, 0x29fc7002u, 0xe3136f79u, 0x65a6d284u, 0x6cac3c13u,
        0x3ef89256u, 0xc3c2a5bdu, 0xeacfabf8u, 0xb2b77ef7u, 0xd275cfeau, 0x2b1bbe41u, 0x0efe82acu, 0x2a381e1bu, 0xadea3cbeu, 0x5415bd05u, 0xa0568aa0u, 0x65afbd7fu, 0xed432cd2u, 0x6d35e609u, 0xb8b437d4u, 0xdf884123u,
        0x3cb93426u, 0x3453bd4du, 0xbea13e48u, 0x3e77cd07u, 0x29e426bau, 0x0c9d06d1u, 0x1b8891fcu, 0x4e24c52bu, 0x1c0f188eu, 0x12d9c695u, 0x5b2a66f0u, 0xd009cd8fu, 0xc7cc5da2u, 0xf3f04099u, 0xa8503124u, 0x8899ca33u,
        0x31c989f6u, 0x89a8f8ddu, 0xdac0a498u, 0x2ca3df17u, 0x94e3718au, 0x81b2b361u, 0x8a73b54cu, 0x12f7703bu, 0xbf7a285eu, 0x92e67425u, 0xdc069740u, 0xce48219fu, 0xbc050272u, 0x04cb7f29u, 0xfa6fbe74u, 0x1351d743u,
        0xd8e693c6u, 0x8d5b586du, 0x71f2dee8u, 0x8f3cb527u, 0x6380b05au, 0xc905c3f1u, 0xe054ec9cu, 0x92411f4bu, 0xaa886c2eu, 0xd0f4c5b5u, 0xae501b90u, 0xb28bb9afu, 0x1b9a1b42u, 0xb390a1b9u, 0xc647dfc4u, 0xcb616853u,
        0x900d5196u, 0xd343dbfdu, 0x7c3ced38u, 0xfc834f37u, 0x1d08e32au, 0x6f7f3881u, 0x1b0137ecu, 0x8dd2d25bu, 0xfad6e3feu, 0xdbfdbb45u, 0xcaabf3e0u, 0xdb3595bfu, 0x5778a812u, 0x2a48a849u, 0xc44d9514u, 0xacb97d63u,
        0x287ac366u, 0x497b838du, 0x06e3cf88u, 0x9ef8ad47u, 0x500909fau, 0xe0481111u, 0x018d973cu, 0x7fbd896bu, 0xa9428fceu, 0x653a54d5u, 0xe6ff2030u, 0xc2e6b5cfu, 0xcfcda8e2u, 0x393c92d9u, 0x9e35de64u, 0x738b1673u,
        0xb6abe936u, 0xc85b4f1du, 0x846c85d8u, 0x455dcf57u, 0x624e24cau, 0xf4c94da1u, 0x744f0a8cu, 0xaa52447bu, 0x59e86f9eu, 0x50239265u, 0xc66ea080u, 0x108019dfu, 0xa4061db2u, 0xe6f56169u, 0x3ef5bbb4u, 0xac473383u,
        0x625dc306u, 0xa27c3eadu, 0x1c9c1028u, 0x72b3b567u, 0x60e5339au, 0x84abee31u, 0xbcda91dcu, 0x2822038bu, 0x2c25836eu, 0x427273f5u, 0x895f74d0u, 0xa722c1efu, 0x82cf0682u, 0x003c13f9u, 0x22c22d04u, 0xc39ed493u,
        0x368d50d6u, 0x34b7523du, 0xfc776e78u, 0x6e3b5f77u, 0xd01b366au, 0xf5d8f2c1u, 0xde052d2cu, 0xfbfdc69bu, 0x8a96cb3eu, 0x341ff985u, 0xfd769d20u, 0xb62fadffu, 0x7a156352u, 0xa819aa89u, 0xa7103254u, 0x1682f9a3u,
        0xf17792a6u, 0x762589cdu, 0xa643a0c8u, 0x5375cd87u, 0x7b7d2d3au, 0xcc795b51u, 0xe3e3dc7cu, 0x20f68dabu, 0xfb19470eu, 0xff652315u, 0xed991970u, 0xc947de0fu, 0xc7063422u, 0xe7d72519u, 0x5a94cba4u, 0x0224a2b3u,
        0xd4998876u, 0x881fe55du, 0x4185a718u, 0x2223ff97u, 0x45d8180au, 0x3af627e1u, 0x33cb9fccu, 0x9a5d58bbu, 0xeec9f6deu, 0xf0baf0a5u, 0x71ebe9c0u, 0xd84c521fu, 0xa60e78f2u, 0x3efd83a9u, 0x4d44f8f4u, 0xf3f4cfc3u,
        0x74b03246u, 0x463f64edu, 0xeb028168u, 0xce46f5a7u, 0xf938f6dau, 0xb1f85871u, 0xdc51771cu, 0x83c327cbu, 0x9205daaeu, 0x56da6235u, 0x3fd40e10u, 0x575e0a2fu, 0x22db31c2u, 0x3355c639u, 0x6055ba44u, 0x79a480d3u,
    };
    uint32_t acc = 0xc33f4fd3u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 55) & 255]);
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
    case 0: acc = heavy_round(acc, 0x5f78f208u); break;
    case 1: acc = heavy_round(acc, 0xe8ca6dc7u); break;
    case 2: acc = heavy_round(acc, 0x6ee2d07au); break;
    case 3: acc = heavy_round(acc, 0x98ee2591u); break;
    case 4: acc = heavy_round(acc, 0x8ea7a1bcu); break;
    case 5: acc = heavy_round(acc, 0x10bf11ebu); break;
    case 6: acc = heavy_round(acc, 0xf7397e4eu); break;
    case 7: acc = heavy_round(acc, 0x084b7155u); break;
    case 8: acc = heavy_round(acc, 0xc8b892b0u); break;
    case 9: acc = heavy_round(acc, 0x4b70864fu); break;
    case 10: acc = heavy_round(acc, 0x04603f62u); break;
    case 11: acc = heavy_round(acc, 0xff253759u); break;
    case 12: acc = heavy_round(acc, 0x6d1138e4u); break;
    case 13: acc = heavy_round(acc, 0x313daef3u); break;
    case 14: acc = heavy_round(acc, 0x6600a7b6u); break;
    case 15: acc = heavy_round(acc, 0x0e0ffb9du); break;
    case 16: acc = heavy_round(acc, 0xe3d44858u); break;
    case 17: acc = heavy_round(acc, 0x73a1afd7u); break;
    case 18: acc = heavy_round(acc, 0xb3b38b4au); break;
    case 19: acc = heavy_round(acc, 0x80468221u); break;
    case 20: acc = heavy_round(acc, 0x8d15b50cu); break;
    case 21: acc = heavy_round(acc, 0xbad7ecfbu); break;
    case 22: acc = heavy_round(acc, 0xe654fe1eu); break;
    case 23: acc = heavy_round(acc, 0x9cedcee5u); break;
    case 24: acc = heavy_round(acc, 0x294eb300u); break;
    case 25: acc = heavy_round(acc, 0x2bc00a5fu); break;
    case 26: acc = heavy_round(acc, 0xfc985432u); break;
    case 27: acc = heavy_round(acc, 0xfa9925e9u); break;
    case 28: acc = heavy_round(acc, 0xaf11b634u); break;
    case 29: acc = heavy_round(acc, 0xfa01ec03u); break;
    case 30: acc = heavy_round(acc, 0xbedc2186u); break;
    case 31: acc = heavy_round(acc, 0xe90e0b2du); break;
    case 32: acc = heavy_round(acc, 0xc1fe72a8u); break;
    case 33: acc = heavy_round(acc, 0xaa71b5e7u); break;
    case 34: acc = heavy_round(acc, 0xf63e3a1au); break;
    case 35: acc = heavy_round(acc, 0x354842b1u); break;
    case 36: acc = heavy_round(acc, 0x3ef5dc5cu); break;
    case 37: acc = heavy_round(acc, 0xe9b3cc0bu); break;
    case 38: acc = heavy_round(acc, 0xaaefb1eeu); break;
    case 39: acc = heavy_round(acc, 0xcbbdd075u); break;
    case 40: acc = heavy_round(acc, 0x918e2750u); break;
    case 41: acc = heavy_round(acc, 0x1b20d26fu); break;
    case 42: acc = heavy_round(acc, 0x3dc8dd02u); break;
    case 43: acc = heavy_round(acc, 0xfce2f879u); break;
    case 44: acc = heavy_round(acc, 0xc6c6c784u); break;
    case 45: acc = heavy_round(acc, 0x03e9ad13u); break;
    case 46: acc = heavy_round(acc, 0x711d4f56u); break;
    case 47: acc = heavy_round(acc, 0x67ee3ebdu); break;
    case 48: acc = heavy_round(acc, 0x90fc70f8u); break;
    case 49: acc = heavy_round(acc, 0x367b7ff7u); break;
    case 50: acc = heavy_round(acc, 0xb4cfdceau); break;
    case 51: acc = heavy_round(acc, 0xcfdc6741u); break;
    case 52: acc = heavy_round(acc, 0xb11d17acu); break;
    case 53: acc = heavy_round(acc, 0x2223af1bu); break;
    case 54: acc = heavy_round(acc, 0x49a699beu); break;
    case 55: acc = heavy_round(acc, 0x5eb47605u); break;
    case 56: acc = heavy_round(acc, 0x791befa0u); break;
    case 57: acc = heavy_round(acc, 0xeaf3de7fu); break;
    case 58: acc = heavy_round(acc, 0x0fded9d2u); break;
    case 59: acc = heavy_round(acc, 0x1b0baf09u); break;
    case 60: acc = heavy_round(acc, 0x5ba56cd4u); break;
    case 61: acc = heavy_round(acc, 0x6de5f223u); break;
    case 62: acc = heavy_round(acc, 0x15013126u); break;
    case 63: acc = heavy_round(acc, 0x93c9964du); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_083(int x)
{
    static const uint32_t local[256] = {
        0x7e2b4f7au, 0xa9369891u, 0x7b2778bcu, 0x01e6fcebu, 0x10e26d4eu, 0xfc199455u, 0xb72259b0u, 0xfb19a14fu, 0xf3b89e62u, 0xa37c0a59u, 0xf88befe4u, 0x0a62f9f3u, 0x9bc776b6u, 0x36a27e9du, 0x1e76ef58u, 0x8b6e2ad7u,
        0x6517ca4au, 0x9a77b521u, 0x76e74c0cu, 0xdba697fbu, 0x9bf5ad1eu, 0xf2d0b1e5u, 0x17463a00u, 0x101be55fu, 0x91847332u, 0xa5f0b8e9u, 0xa2162d34u, 0xb7a5f703u, 0xcf92b086u, 0x764d4e2du, 0xade6d9a8u, 0x4d48f0e7u,
        0xbfae391au, 0xf69235b1u, 0x4189335cu, 0x3ed9370bu, 0x597820eeu, 0xdbe57375u, 0x19836e50u, 0xabdf6d6fu, 0xac38bc02u, 0xf26b4b79u, 0xaac4fe84u, 0x40bc7813u, 0x57b39e56u, 0xb80a41bdu, 0x169a97f8u, 0xd20d7af7u,
        0x483b9beau, 0xe16f1a41u, 0x83e22eacu, 0x9c4fda1bu, 0x4a06c8beu, 0x4d50d905u, 0x917ef6a0u, 0x4bc5397fu, 0x47c278d2u, 0x29f4c209u, 0xd60d63d4u, 0x30977d23u, 0x48674026u, 0x50f2594du, 0xa0d72a48u, 0x433cc907u,
        0x804cf2bau, 0x1d3762d1u, 0x70073dfcu, 0xdd1b812bu, 0x097ea48eu, 0x3f4be295u, 0xd01dd2f0u, 0x496e498fu, 0x174ea9a2u, 0x53d61c99u, 0x98a45d24u, 0x92680633u, 0xb92a95f6u, 0x405e94ddu, 0xba219098u, 0x2e97db17u,
        0x80af3d8au, 0x9a540f61u, 0x114d614cu, 0x728d2c3bu, 0x9efcb45eu, 0x9c4f9025u, 0xf3850340u, 0xeabb9d9fu, 0x4d4a4e72u, 0x6d985b29u, 0x687eea74u, 0x019f1343u, 0x94ba9fc6u, 0xbfe7f46du, 0x453ecae8u, 0x961fb127u,
        0xc96f7c5au, 0x076e1ff1u, 0x9c49989cu, 0x6635db4bu, 0x4cddf82eu, 0xd114e1b5u, 0x37198790u, 0x71ce35afu, 0x6b626742u, 0xfb047db9u, 0x0cd20bc4u, 0xb9eda453u, 0x69145d96u, 0xd36777fdu, 0xea33d938u, 0x00154b37u,
        0x11daaf2au, 0x616e9481u, 0xbed0e3ecu, 0x69e68e5bu, 0x60bf6ffeu, 0x5c94d745u, 0x43805fe0u, 0x2d0711bfu, 0x1283f412u, 0x96238449u, 0xee12c114u, 0xa744b963u, 0x3774cf66u, 0xd8f61f8du, 0x6645bb88u, 0x86f9a947u,
        0x187dd5fau, 0x837e6d11u, 0xeff8433cu, 0xe7b0456bu, 0x037e1bceu, 0x600870d5u, 0x7e9e8c30u, 0x870731cfu, 0xd2dbf4e2u, 0x7f3e6ed9u, 0x65f60a64u, 0x75d55273u, 0x4458f536u, 0x18eceb1du, 0xdbf971d8u, 0xe98dcb57u,
        0x7325f0cau, 0xb706a9a1u, 0xc014b68cu, 0x11e4007bu, 0x0936fb9eu, 0x2ee8ae65u, 0x5b990c80u, 0x16af95dfu, 0xfbd769b2u, 0x2cde3d69u, 0x0f70e7b4u, 0xa2106f83u, 0xe77dcf06u, 0x55e4daadu, 0x2313fc28u, 0x9ad2b167u,
        0x5edfff9au, 0x43b04a31u, 0x28bb3ddcu, 0xf312bf8bu, 0xc1470f6eu, 0xdeee8ff5u, 0xaad4e0d0u, 0xaf213defu, 0x6c235282u, 0xdbcbeff9u, 0x16b85904u, 0x88a71093u, 0x5be05cd6u, 0x5cb6ee3du, 0x189a5a78u, 0xd2095b77u,
        0x8ff9026au, 0xff644ec1u, 0xdcc0d92cu, 0x7e0d829bu, 0xc64b573eu, 0xd8131585u, 0xe9f70920u, 0x6fbd29ffu, 0x61acaf52u, 0x1f108689u, 0x89415e54u, 0x768a35a3u, 0x8fbd9ea6u, 0x947c25cdu, 0xeed18cc8u, 0x9ab2c987u,
        0x01fdf93au, 0xde4bb751u, 0x983a887cu, 0x9de549abu, 0xce20d30eu, 0x648f3f15u, 0x93e48570u, 0xd4245a0fu, 0x49a08022u, 0x6ff50119u, 0xa5c0f7a4u, 0xb8eadeb3u, 0xf4929476u, 0x8e8d815du, 0x7d3e9318u, 0xe48ffb97u,
        0xc7bbe40au, 0x82cf83e1u, 0x707d4bccu, 0x45eb14bbu, 0x79e482deu, 0x40dc0ca5u, 0x70c255c0u, 0xc437ce1fu, 0x906bc4f2u, 0xbe025fa9u, 0x2c2c24f4u, 0xad3a0bc3u, 0x4f1c3e46u, 0x968400edu, 0x90a66d68u, 0x93a1f1a7u,
        0xdb3fc2dau, 0xcd98b471u, 0x241e231cu, 0x81afe3cbu, 0x25f366aeu, 0x2bb27e35u, 0xe5f57a10u, 0xa418862fu, 0x71bb7dc2u, 0xff01a239u, 0xadb7e644u, 0xd128bcd3u, 0x87579c16u, 0x4238a47du, 0x3b0e1bb8u, 0x9029abb7u,
        0xedd695aau, 0x6d904901u, 0x6af20e6cu, 0x8504b6dbu, 0xb9ea7e7eu, 0x760b93c5u, 0x4622f260u, 0x6427823fu, 0xc87caa92u, 0xbefbc8c9u, 0xdcd93b94u, 0xd2a7f1e3u, 0x7881ade6u, 0x01c46c0du, 0x23ba9e08u, 0xd6a829c7u,
    };
    uint32_t acc = 0xb73c28c7u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 83) & 255]);
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
    case 0: acc = heavy_round(acc, 0x5dd636f4u); break;
    case 1: acc = heavy_round(acc, 0xb808f5c3u); break;
    case 2: acc = heavy_round(acc, 0x26da2046u); break;
    case 3: acc = heavy_round(acc, 0x45347aedu); break;
    case 4: acc = heavy_round(acc, 0xaa389f68u); break;
    case 5: acc = heavy_round(acc, 0x01fa7ba7u); break;
    case 6: acc = heavy_round(acc, 0x36bac4dau); break;
    case 7: acc = heavy_round(acc, 0xa7a3ce71u); break;
    case 8: acc = heavy_round(acc, 0x2d0a751cu); break;
    case 9: acc = heavy_round(acc, 0x205c0dcbu); break;
    case 10: acc = heavy_round(acc, 0xe76d88aeu); break;
    case 11: acc = heavy_round(acc, 0xfa723835u); break;
    case 12: acc = heavy_round(acc, 0xf3cdec10u); break;
    case 13: acc = heavy_round(acc, 0xb782502fu); break;
    case 14: acc = heavy_round(acc, 0x4e96bfc2u); break;
    case 15: acc = heavy_round(acc, 0x046ffc39u); break;
    case 16: acc = heavy_round(acc, 0xb62e7844u); break;
    case 17: acc = heavy_round(acc, 0xbf5a26d3u); break;
    case 18: acc = heavy_round(acc, 0xaa15fe16u); break;
    case 19: acc = heavy_round(acc, 0x72ef9e7du); break;
    case 20: acc = heavy_round(acc, 0x05f4cdb8u); break;
    case 21: acc = heavy_round(acc, 0x2accb5b7u); break;
    case 22: acc = heavy_round(acc, 0xb81a17aau); break;
    case 23: acc = heavy_round(acc, 0x4ac9e301u); break;
    case 24: acc = heavy_round(acc, 0xa43ae06cu); break;
    case 25: acc = heavy_round(acc, 0xf36360dbu); break;
    case 26: acc = heavy_round(acc, 0xa675207eu); break;
    case 27: acc = heavy_round(acc, 0x87a1cdc5u); break;
    case 28: acc = heavy_round(acc, 0xafdfe460u); break;
    case 29: acc = heavy_round(acc, 0xad2bcc3fu); break;
    case 30: acc = heavy_round(acc, 0x6d306c92u); break;
    case 31: acc = heavy_round(acc, 0xad68a2c9u); break;
    case 32: acc = heavy_round(acc, 0xa13c4d94u); break;
    case 33: acc = heavy_round(acc, 0x06dbdbe3u); break;
    case 34: acc = heavy_round(acc, 0xa8608fe6u); break;
    case 35: acc = heavy_round(acc, 0x5021e60du); break;
    case 36: acc = heavy_round(acc, 0x4715d008u); break;
    case 37: acc = heavy_round(acc, 0xda35b3c7u); break;
    case 38: acc = heavy_round(acc, 0x45395e7au); break;
    case 39: acc = heavy_round(acc, 0xd5e75b91u); break;
    case 40: acc = heavy_round(acc, 0x38d35fbcu); break;
    case 41: acc = heavy_round(acc, 0xb0abb7ebu); break;
    case 42: acc = heavy_round(acc, 0x9661ec4eu); break;
    case 43: acc = heavy_round(acc, 0xf72d0755u); break;
    case 44: acc = heavy_round(acc, 0x71f130b0u); break;
    case 45: acc = heavy_round(acc, 0xe0448c4fu); break;
    case 46: acc = heavy_round(acc, 0xa3888d62u); break;
    case 47: acc = heavy_round(acc, 0xc1452d59u); break;
    case 48: acc = heavy_round(acc, 0x0ab4b6e4u); break;
    case 49: acc = heavy_round(acc, 0xa4bf14f3u); break;
    case 50: acc = heavy_round(acc, 0xc836d5b6u); break;
    case 51: acc = heavy_round(acc, 0x1f24519du); break;
    case 52: acc = heavy_round(acc, 0x4220a658u); break;
    case 53: acc = heavy_round(acc, 0xd8f675d7u); break;
    case 54: acc = heavy_round(acc, 0xf5e5994au); break;
    case 55: acc = heavy_round(acc, 0x2c653821u); break;
    case 56: acc = heavy_round(acc, 0x4d28f30cu); break;
    case 57: acc = heavy_round(acc, 0x348612fbu); break;
    case 58: acc = heavy_round(acc, 0x2d50ec1eu); break;
    case 59: acc = heavy_round(acc, 0xd68ce4e5u); break;
    case 60: acc = heavy_round(acc, 0x9f26d100u); break;
    case 61: acc = heavy_round(acc, 0x31ad905fu); break;
    case 62: acc = heavy_round(acc, 0x030c2232u); break;
    case 63: acc = heavy_round(acc, 0x908e9be9u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

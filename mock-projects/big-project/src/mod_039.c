#include "heavy.h"
#include "mods.h"

int mod_039(int x)
{
    static const uint32_t local[256] = {
        0x499c0146u, 0x41b2e7edu, 0x81122868u, 0xf89c70a7u, 0x319235dau, 0x449a8b71u, 0xe9e00e1cu, 0xc32ad2cbu, 0xcb6b89aeu, 0xdbbe4535u, 0xf6d89510u, 0x9f62e52fu, 0x1d5c50c2u, 0x653e5939u, 0xeeb73144u, 0x29018bd3u,
        0x96d41f16u, 0x72bd4b7du, 0xdb5496b8u, 0xcbbfeab7u, 0xf891c8aau, 0x8a63e001u, 0xeedab96cu, 0x9ef765dbu, 0xd3f7617eu, 0x16251ac5u, 0xc238cd60u, 0xc985a13fu, 0x759e3d92u, 0x45423fc9u, 0x60d74694u, 0xd1f080e3u,
        0x4f2af0e6u, 0xe40ed30du, 0x558bd908u, 0x7eca28c7u, 0x34614f7au, 0x6df49891u, 0x2ccd78bcu, 0x2b54fcebu, 0xff786d4eu, 0xddb79455u, 0x202859b0u, 0xb467a14fu, 0x70ae9e62u, 0xfffa0a59u, 0xdef1efe4u, 0x6190f9f3u,
        0x5d1d76b6u, 0x4c007e9du, 0xa83cef58u, 0x6e7c2ad7u, 0x80cdca4au, 0x86b5b521u, 0x2a0d4c0cu, 0x189497fbu, 0x880bad1eu, 0xb3eeb1e5u, 0xd9cc3a00u, 0x54e9e55fu, 0x23fa7332u, 0x19eeb8e9u, 0xb9fc2d34u, 0x9253f703u,
        0x3e68b086u, 0x5b2b4e2du, 0xc12cd9a8u, 0x2bd6f0e7u, 0xa0e4391au, 0xea5035b1u, 0x562f335cu, 0x6f47370bu, 0xa30e20eeu, 0x5c837375u, 0x95896e50u, 0x5c2d6d6fu, 0xb42ebc02u, 0x5de94b79u, 0x542afe84u, 0x7eea7813u,
        0xd4099e56u, 0x4c6841bdu, 0x136097f8u, 0x8c1b7af7u, 0x4ef19beau, 0xbcad1a41u, 0x5a082eacu, 0xa03dda1bu, 0x511cc8beu, 0x6d6ed905u, 0x2704f6a0u, 0x4793397fu, 0x253878d2u, 0x6cf2c209u, 0x70f363d4u, 0xb2457d23u,
        0x323d4026u, 0x74d0594du, 0xe71d2a48u, 0xb8cac907u, 0x0c82f2bau, 0xbff562d1u, 0x67ad3dfcu, 0x9489812bu, 0x2e14a48eu, 0xdee9e295u, 0xdf23d2f0u, 0x70bc498fu, 0x2a44a9a2u, 0x4e541c99u, 0x850a5d24u, 0x37960633u,
        0x708095f6u, 0xd3bc94ddu, 0xa9e79098u, 0x3fa5db17u, 0xf2653d8au, 0xe4920f61u, 0x8a73614cu, 0xbd7b2c3bu, 0x4112b45eu, 0x9b6d9025u, 0xdc0b0340u, 0x1d899d9fu, 0xf5c04e72u, 0xff965b29u, 0x0664ea74u, 0xaa4d1343u,
        0x79909fc6u, 0xa2c5f46du, 0x3e84cae8u, 0x22adb127u, 0x80a57c5au, 0xd92c1ff1u, 0xf6ef989cu, 0x24a3db4bu, 0xcc73f82eu, 0x0fb2e1b5u, 0x591f8790u, 0x901c35afu, 0x09586742u, 0x04827db9u, 0xbc380bc4u, 0x461ba453u,
        0xdb6a5d96u, 0xe5c577fdu, 0x4cf9d938u, 0xe8234b37u, 0x6e90af2au, 0x9aac9481u, 0x5af6e3ecu, 0x7bd48e5bu, 0x1dd56ffeu, 0xbab2d745u, 0xff065fe0u, 0x16d511bfu, 0x05f9f412u, 0xf7218449u, 0x0ef8c114u, 0xf6f2b963u,
        0x974acf66u, 0xfad41f8du, 0x928bbb88u, 0xaa87a947u, 0x7ab3d5fau, 0x043c6d11u, 0x2d9e433cu, 0x2d1e456bu, 0x5e141bceu, 0xbda670d5u, 0x33a48c30u, 0x1c5531cfu, 0x7bd1f4e2u, 0x17bc6ed9u, 0x585c0a64u, 0x69035273u,
        0xf1aef536u, 0x2a4aeb1du, 0x31bf71d8u, 0x289bcb57u, 0x3adbf0cau, 0x5f44a9a1u, 0xff3ab68cu, 0x6ad2007bu, 0x614cfb9eu, 0x6c06ae65u, 0x6a1f0c80u, 0x377d95dfu, 0xba4d69b2u, 0xdcdc3d69u, 0x3356e7b4u, 0x18be6f83u,
        0x4253cf06u, 0x36c2daadu, 0x0259fc28u, 0xd560b167u, 0xec15ff9au, 0xf36e4a31u, 0xc9613ddcu, 0x3f80bf8bu, 0x76dd0f6eu, 0xdb8c8ff5u, 0x72dae0d0u, 0x3b6f3defu, 0xa0195282u, 0x8349eff9u, 0xcc1e5904u, 0x62d51093u,
        0xc4365cd6u, 0xed14ee3du, 0xe1605a78u, 0xe8175b77u, 0x42af026au, 0x96a24ec1u, 0x3ee6d92cu, 0x9dfb829bu, 0x3961573eu, 0x74311585u, 0xcb7d0920u, 0x478b29ffu, 0x6b22af52u, 0x9e0e8689u, 0x30275e54u, 0x943835a3u,
        0x65939ea6u, 0xb45a25cdu, 0x01178cc8u, 0x6c40c987u, 0x3a33f93au, 0x3d09b751u, 0x1be0887cu, 0x715349abu, 0x5eb6d30eu, 0x802d3f15u, 0xeeea8570u, 0xd7725a0fu, 0x88968022u, 0xa6730119u, 0x9e26f7a4u, 0xfa18deb3u,
        0x97e89476u, 0x1deb815du, 0x39049318u, 0x519dfb97u, 0xe571e40au, 0x890d83e1u, 0x75a34bccu, 0xacd914bbu, 0x87fa82deu, 0xbbfa0ca5u, 0xa54855c0u, 0xd305ce1fu, 0x64e1c4f2u, 0x8c005fa9u, 0xd61224f4u, 0xf1e80bc3u,
    };
    uint32_t acc = 0xfc931ac3u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 39) & 255]);
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
    case 0: acc = heavy_round(acc, 0x18690798u); break;
    case 1: acc = heavy_round(acc, 0x10a2e617u); break;
    case 2: acc = heavy_round(acc, 0x74a0cc8au); break;
    case 3: acc = heavy_round(acc, 0x33925261u); break;
    case 4: acc = heavy_round(acc, 0x3328c84cu); break;
    case 5: acc = heavy_round(acc, 0xa4bb673bu); break;
    case 6: acc = heavy_round(acc, 0x59d7b35eu); break;
    case 7: acc = heavy_round(acc, 0x42088325u); break;
    case 8: acc = heavy_round(acc, 0xc9bb5a40u); break;
    case 9: acc = heavy_round(acc, 0xf128089fu); break;
    case 10: acc = heavy_round(acc, 0x466dbd72u); break;
    case 11: acc = heavy_round(acc, 0x099efe29u); break;
    case 12: acc = heavy_round(acc, 0xe4c73174u); break;
    case 13: acc = heavy_round(acc, 0x0c94ae43u); break;
    case 14: acc = heavy_round(acc, 0x21f57ec6u); break;
    case 15: acc = heavy_round(acc, 0x27bf476du); break;
    case 16: acc = heavy_round(acc, 0x714001e8u); break;
    case 17: acc = heavy_round(acc, 0xad197c27u); break;
    case 18: acc = heavy_round(acc, 0x4e00cb5au); break;
    case 19: acc = heavy_round(acc, 0x5f4922f1u); break;
    case 20: acc = heavy_round(acc, 0xa09abf9cu); break;
    case 21: acc = heavy_round(acc, 0xc2ded64bu); break;
    case 22: acc = heavy_round(acc, 0xd874b72eu); break;
    case 23: acc = heavy_round(acc, 0x9ed694b5u); break;
    case 24: acc = heavy_round(acc, 0x52419e90u); break;
    case 25: acc = heavy_round(acc, 0x0b0160afu); break;
    case 26: acc = heavy_round(acc, 0xc91d9642u); break;
    case 27: acc = heavy_round(acc, 0xe93fe0b9u); break;
    case 28: acc = heavy_round(acc, 0x7a4812c4u); break;
    case 29: acc = heavy_round(acc, 0xfeb5ff53u); break;
    case 30: acc = heavy_round(acc, 0x9e82fc96u); break;
    case 31: acc = heavy_round(acc, 0x245f8afdu); break;
    case 32: acc = heavy_round(acc, 0xb95ed038u); break;
    case 33: acc = heavy_round(acc, 0xc2add637u); break;
    case 34: acc = heavy_round(acc, 0x4dfbbe2au); break;
    case 35: acc = heavy_round(acc, 0x12165781u); break;
    case 36: acc = heavy_round(acc, 0x9a07caecu); break;
    case 37: acc = heavy_round(acc, 0xfaba495bu); break;
    case 38: acc = heavy_round(acc, 0x5b01eefeu); break;
    case 39: acc = heavy_round(acc, 0xf78f4a45u); break;
    case 40: acc = heavy_round(acc, 0x270a36e0u); break;
    case 41: acc = heavy_round(acc, 0xa5b0fcbfu); break;
    case 42: acc = heavy_round(acc, 0xd9c6e312u); break;
    case 43: acc = heavy_round(acc, 0xb6c3a749u); break;
    case 44: acc = heavy_round(acc, 0xcf268814u); break;
    case 45: acc = heavy_round(acc, 0x658fd463u); break;
    case 46: acc = heavy_round(acc, 0x71072e66u); break;
    case 47: acc = heavy_round(acc, 0x5e3ef28du); break;
    case 48: acc = heavy_round(acc, 0xca0a7288u); break;
    case 49: acc = heavy_round(acc, 0xd7e0f447u); break;
    case 50: acc = heavy_round(acc, 0xaf1ea4fau); break;
    case 51: acc = heavy_round(acc, 0x7322f011u); break;
    case 52: acc = heavy_round(acc, 0x7284ea3cu); break;
    case 53: acc = heavy_round(acc, 0xe25ec06bu); break;
    case 54: acc = heavy_round(acc, 0x465c5aceu); break;
    case 55: acc = heavy_round(acc, 0x796ba3d5u); break;
    case 56: acc = heavy_round(acc, 0x49fa2330u); break;
    case 57: acc = heavy_round(acc, 0x17d7dccfu); break;
    case 58: acc = heavy_round(acc, 0x0496a3e2u); break;
    case 59: acc = heavy_round(acc, 0x7e7351d9u); break;
    case 60: acc = heavy_round(acc, 0x99179164u); break;
    case 61: acc = heavy_round(acc, 0x99532d73u); break;
    case 62: acc = heavy_round(acc, 0x99ff1436u); break;
    case 63: acc = heavy_round(acc, 0xa9b67e1du); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

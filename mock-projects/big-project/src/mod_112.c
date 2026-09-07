#include "heavy.h"
#include "mods.h"

int mod_112(int x)
{
    static const uint32_t local[256] = {
        0x584c3983u, 0xb5031106u, 0x4ff534adu, 0x23c48e28u, 0x3ff61b67u, 0x37e8619au, 0x32294431u, 0xe27befdcu, 0x8ac7c98bu, 0x9174916eu, 0x450a29f5u, 0xe397b2d0u, 0xb2b1e7efu, 0xd837f482u, 0x636429f9u, 0x4a8f4b04u,
        0x70fd5a93u, 0xc3be1ed6u, 0xf045c83du, 0xcbb76c78u, 0x41af4577u, 0x30a1e46au, 0x8403c8c1u, 0x0d760b2cu, 0x0b2d0c9bu, 0xfbe1593eu, 0x877d2f85u, 0xa2b65b20u, 0x0e2053ffu, 0x0971d152u, 0x819f4089u, 0x929cd054u,
        0x819affa3u, 0x8a13e0a6u, 0x1b297fcdu, 0xa17b1ec8u, 0x7f7b3387u, 0xd4675b3au, 0x1cb1b151u, 0xcf043a7cu, 0x250f53abu, 0x653f550eu, 0xeae7d915u, 0xbdc05770u, 0x0bfa040fu, 0xdb362222u, 0x451a3b19u, 0xf7c0e9a4u,
        0x7f5628b3u, 0x01815676u, 0x49f95b5du, 0x4494a518u, 0x111ae597u, 0x3e05c60au, 0x069bfde1u, 0x847b7dccu, 0x73bf9ebbu, 0xf6ab84deu, 0x13c326a5u, 0xc4daa7c0u, 0xbc1ff81fu, 0xc1f1e6f2u, 0x055e19a9u, 0x81f096f4u,
        0x6f9fd5c3u, 0x76c38046u, 0xb04e5aedu, 0x49c8ff68u, 0x028f5ba7u, 0x6f8a24dau, 0x8a6bae71u, 0x3470d51cu, 0xaaceedcbu, 0x9482e8aeu, 0xa8c81835u, 0xe56a4c10u, 0xaab3302fu, 0x01521fc2u, 0x2033dc39u, 0x0a60d844u,
        0x782906d3u, 0x59d75e16u, 0xcc017e7du, 0x8b1d2db8u, 0x641995b7u, 0x224177aau, 0xbf09c301u, 0xdeb9406cu, 0xa60e40dbu, 0xae62807eu, 0xe2efadc5u, 0x3a144460u, 0xf014ac3fu, 0x7c43cc92u, 0x89a482c9u, 0x8b86ad94u,
        0xeee2bbe3u, 0x0df9efe6u, 0xf52bc60du, 0x77d63008u, 0x5a3a93c7u, 0x96b8be7au, 0x199f3b91u, 0xcc69bfbcu, 0x798e97ebu, 0x0f274c4eu, 0x1d72e755u, 0x1abd90b0u, 0x40e56c4fu, 0x84f3ed62u, 0x5bf90d59u, 0x711716e4u,
        0x69fdf4f3u, 0xb9a835b6u, 0xee26319du, 0x64790658u, 0x2db355d7u, 0x64bcf94au, 0xfd951821u, 0xdfd7530cu, 0x81a0f2fbu, 0xacee4c1eu, 0x65cac4e5u, 0x6c8b3100u, 0xfe06705fu, 0xaccf8232u, 0x67ba7be9u, 0xe8071434u,
        0xcfebb203u, 0x169f2f86u, 0x7389c12du, 0xdacab0a8u, 0x5b84dbe7u, 0x4b5b281au, 0x4c9458b1u, 0xe496fa5cu, 0x72d6520bu, 0x79147feeu, 0x0bb04675u, 0xf1e22550u, 0x4498b86fu, 0x94838b02u, 0xc3b1ce79u, 0x2e8ba584u,
        0x675cf313u, 0x41dbdd56u, 0xcc2f74bdu, 0xe9d02ef8u, 0xa4f025f7u, 0x00e04aeau, 0xf685fd41u, 0xdf7db5acu, 0x69ffb51bu, 0x3036e7beu, 0x311c6c05u, 0x9a676da0u, 0xfdfd447fu, 0xbbfd07d2u, 0x5ce80509u, 0xe419cad4u,
        0xe742b823u, 0x8b9b3f26u, 0x59304c4du, 0x75ce8148u, 0x1f763407u, 0x02d961bau, 0x899305d1u, 0x5ea084fcu, 0xfc2e1c2bu, 0x2a32838eu, 0x5a483595u, 0xd30009f0u, 0xefd5148fu, 0x5268f8a2u, 0x86a61f99u, 0x59668424u,
        0x86ce0133u, 0x475a54f6u, 0x25e547ddu, 0x884aa798u, 0x44d80617u, 0x66136c8au, 0xc2247261u, 0xc954684cu, 0x46b2873bu, 0x2a24535eu, 0xfdaca325u, 0xd5d0fa40u, 0xcc01289fu, 0x06345d72u, 0x8a751e29u, 0xe066d174u,
        0x0d6fce43u, 0x9bd61ec6u, 0x77e7676du, 0xa009a1e8u, 0x03169c27u, 0xa69b6b5au, 0x1ae342f1u, 0xb02e5f9cu, 0xff1df64bu, 0x2e69572eu, 0x1402b4b5u, 0xfa3f3e90u, 0x40a280afu, 0xd50c3642u, 0x381e00b9u, 0x1c4fb2c4u,
        0xe2d91f53u, 0x530b9c96u, 0x5f0faafdu, 0x01107038u, 0xcc72f637u, 0x77be5e2au, 0x5cb87781u, 0x1d036aecu, 0x8341695bu, 0x409e8efeu, 0xa8436a45u, 0x04efd6e0u, 0x081a1cbfu, 0xdbdd8312u, 0x75a9c749u, 0x51962814u,
        0x1efaf463u, 0xaa37ce66u, 0x4577128du, 0x04a41288u, 0xa76e1447u, 0x940944fau, 0x2ecd1011u, 0xe2e88a3cu, 0xe92de06bu, 0x45a0faceu, 0x67a7c3d5u, 0x77c7c330u, 0xf908fccfu, 0x26d543e2u, 0xcf6171d9u, 0xb5ef3164u,
        0x9a064d73u, 0x21d7b436u, 0x7f769e1du, 0x694988d8u, 0x3ec8f657u, 0x8d491fcau, 0xa68a0ca1u, 0xee32bd8cu, 0x0f345b7bu, 0xcd8d9a9eu, 0x31a8c165u, 0xe1ec0380u, 0x165020dfu, 0x816078b2u, 0x07ce0069u, 0xc04fceb4u,
    };
    uint32_t acc = 0x98e359b4u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 112) & 255]);
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
    case 0: acc = heavy_round(acc, 0x1796e95bu); break;
    case 1: acc = heavy_round(acc, 0x59f60efeu); break;
    case 2: acc = heavy_round(acc, 0x4eb4ea45u); break;
    case 3: acc = heavy_round(acc, 0x31b356e0u); break;
    case 4: acc = heavy_round(acc, 0xb3079cbfu); break;
    case 5: acc = heavy_round(acc, 0xaaed0312u); break;
    case 6: acc = heavy_round(acc, 0xa6734749u); break;
    case 7: acc = heavy_round(acc, 0x94d1a814u); break;
    case 8: acc = heavy_round(acc, 0xbe007463u); break;
    case 9: acc = heavy_round(acc, 0x6e7f4e66u); break;
    case 10: acc = heavy_round(acc, 0x3a18928du); break;
    case 11: acc = heavy_round(acc, 0x49d79288u); break;
    case 12: acc = heavy_round(acc, 0x300b9447u); break;
    case 13: acc = heavy_round(acc, 0xc508c4fau); break;
    case 14: acc = heavy_round(acc, 0xf8c69011u); break;
    case 15: acc = heavy_round(acc, 0x0d940a3cu); break;
    case 16: acc = heavy_round(acc, 0xe8e3606bu); break;
    case 17: acc = heavy_round(acc, 0x12d87aceu); break;
    case 18: acc = heavy_round(acc, 0x707943d5u); break;
    case 19: acc = heavy_round(acc, 0xe36b4330u); break;
    case 20: acc = heavy_round(acc, 0x15567ccfu); break;
    case 21: acc = heavy_round(acc, 0xf7c4c3e2u); break;
    case 22: acc = heavy_round(acc, 0x588af1d9u); break;
    case 23: acc = heavy_round(acc, 0xb60ab164u); break;
    case 24: acc = heavy_round(acc, 0x106bcd73u); break;
    case 25: acc = heavy_round(acc, 0x15ff3436u); break;
    case 26: acc = heavy_round(acc, 0x22781e1du); break;
    case 27: acc = heavy_round(acc, 0xc95d08d8u); break;
    case 28: acc = heavy_round(acc, 0x64c67657u); break;
    case 29: acc = heavy_round(acc, 0xfc289fcau); break;
    case 30: acc = heavy_round(acc, 0xd4e38ca1u); break;
    case 31: acc = heavy_round(acc, 0x71be3d8cu); break;
    case 32: acc = heavy_round(acc, 0xd249db7bu); break;
    case 33: acc = heavy_round(acc, 0xc6a51a9eu); break;
    case 34: acc = heavy_round(acc, 0xb4da4165u); break;
    case 35: acc = heavy_round(acc, 0xc46f8380u); break;
    case 36: acc = heavy_round(acc, 0x7bfda0dfu); break;
    case 37: acc = heavy_round(acc, 0x4c2ff8b2u); break;
    case 38: acc = heavy_round(acc, 0x81578069u); break;
    case 39: acc = heavy_round(acc, 0x354b4eb4u); break;
    case 40: acc = heavy_round(acc, 0xa231aa83u); break;
    case 41: acc = heavy_round(acc, 0xe9afce06u); break;
    case 42: acc = heavy_round(acc, 0x4508cdadu); break;
    case 43: acc = heavy_round(acc, 0x55b95328u); break;
    case 44: acc = heavy_round(acc, 0x8ce21c67u); break;
    case 45: acc = heavy_round(acc, 0x414a6e9au); break;
    case 46: acc = heavy_round(acc, 0x0251ed31u); break;
    case 47: acc = heavy_round(acc, 0x28e284dcu); break;
    case 48: acc = heavy_round(acc, 0x8a5b5a8bu); break;
    case 49: acc = heavy_round(acc, 0x80b8ee6eu); break;
    case 50: acc = heavy_round(acc, 0xbd90e2f5u); break;
    case 51: acc = heavy_round(acc, 0xc12517d0u); break;
    case 52: acc = heavy_round(acc, 0x261e08efu); break;
    case 53: acc = heavy_round(acc, 0x02dba182u); break;
    case 54: acc = heavy_round(acc, 0xa9a1f2f9u); break;
    case 55: acc = heavy_round(acc, 0x1ac88004u); break;
    case 56: acc = heavy_round(acc, 0xfc030b93u); break;
    case 57: acc = heavy_round(acc, 0x608e1bd6u); break;
    case 58: acc = heavy_round(acc, 0x7aa3a13du); break;
    case 59: acc = heavy_round(acc, 0x67f17178u); break;
    case 60: acc = heavy_round(acc, 0xcb9f8677u); break;
    case 61: acc = heavy_round(acc, 0x44bb316au); break;
    case 62: acc = heavy_round(acc, 0x22fab1c1u); break;
    case 63: acc = heavy_round(acc, 0x41d5e02cu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

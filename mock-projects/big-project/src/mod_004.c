#include "heavy.h"
#include "mods.h"

int mod_004(int x)
{
    static const uint32_t local[256] = {
        0x413c930fu, 0x0b916522u, 0xa16ea219u, 0x581424a4u, 0x501227b3u, 0x69a74976u, 0x6db8b25du, 0xd0f61018u, 0x75af5497u, 0x54c9690au, 0x0c7d44e1u, 0x823618ccu, 0xd2fb7dbbu, 0x6e8fd7deu, 0x3e6d5da5u, 0x206972c0u,
        0x1a42471fu, 0xec29e9f2u, 0xc66840a9u, 0x29fe91f4u, 0x0d5794c3u, 0x56323346u, 0x9f3f71edu, 0xba312a68u, 0x6bfb8aa7u, 0x7bc287dau, 0x4bbab571u, 0x313e301cu, 0x367e8ccbu, 0x2cc7fbaeu, 0xc4dc0f35u, 0x65d7d710u,
        0x68a53f2fu, 0x8f96e2c2u, 0xca63c339u, 0x53d99344u, 0x90cc85d3u, 0x25bed116u, 0x9994557du, 0x7c3c18b8u, 0xe74d84b7u, 0xd41e9aaau, 0x4e368a01u, 0x6a495b6cu, 0xca219fdbu, 0x8238537eu, 0x71dd64c5u, 0x12108f60u,
        0xc0c67b3fu, 0x24c54f92u, 0x7d6a29c9u, 0xfc1a2894u, 0x6c61fae3u, 0x478a22e6u, 0x50d05d0du, 0x725bdb08u, 0x082642c7u, 0x6a6aa17au, 0xe519c291u, 0x226c9abcu, 0x5df5b6ebu, 0xc5bddf4eu, 0xbcaa5e55u, 0xe8f89bb0u,
        0x5346fb4fu, 0x49e23062u, 0xd5c47459u, 0xba7551e4u, 0x7248f3f3u, 0xee1128b6u, 0x234c889du, 0xdd157158u, 0x1346c4d7u, 0xa2739c4au, 0xcfcd5f21u, 0xe7fcee0cu, 0x0a4bd1fbu, 0x79759f1eu, 0xcebbfbe5u, 0x3bb4fc00u,
        0xfd07bf5fu, 0xdc5a8532u, 0x7ffba2e9u, 0xe7e00f34u, 0xc4f27103u, 0xdf10e286u, 0x69a1d82du, 0x322ddba8u, 0x81b00ae7u, 0x07468b1au, 0x4bfa5fb1u, 0x328f555cu, 0x3fb4f10bu, 0x1abc92eeu, 0x13cb3d75u, 0x38aab050u,
        0x5729c76fu, 0xc8db4e02u, 0x6ed8b579u, 0xee8f6084u, 0xe70f7213u, 0x43865056u, 0x06a94bbdu, 0x6caa19f8u, 0x10a314f7u, 0x1b306deau, 0xa589c441u, 0xb2f8d0acu, 0xd702141bu, 0xf22fbabeu, 0xc9d12305u, 0x3b7eb8a0u,
        0xc70e137fu, 0xdb518ad2u, 0x6b64ac09u, 0x99f845d4u, 0xcb90f723u, 0x77ae7226u, 0xf77be34du, 0x5ccf2c48u, 0xd1a0e307u, 0x27be44bau, 0xc6a48cd1u, 0xa34e5ffcu, 0x21443b2bu, 0xe3ac168eu, 0x9106ac95u, 0x1d1614f0u,
        0x8e55a38fu, 0x8eea3ba2u, 0xa4e88699u, 0x66cfbf24u, 0xe5a80033u, 0xdb0647f6u, 0xe3729eddu, 0xf8221298u, 0x3a6a7517u, 0x0dbd0f8au, 0xc7b3b961u, 0x16e5034cu, 0xf7cc663bu, 0x3e4ea65eu, 0xfbe4da25u, 0x8395c540u,
        0xdae1779fu, 0xde126072u, 0x40ed4529u, 0xd30acc74u, 0x38c58d43u, 0xa04ad1c6u, 0xac267e6du, 0xa967cce8u, 0x3500cb27u, 0x1539ce5au, 0x7f6049f1u, 0x4a51ba9cu, 0xcc2b954bu, 0x8c746a2eu, 0x1f24abb5u, 0x3262c990u,
        0xd6d28fafu, 0x1276f942u, 0xeb3be7b9u, 0xadde6dc4u, 0x689a9e53u, 0x9d790f96u, 0xfd7081fdu, 0xa0a55b38u, 0x2fa4e537u, 0xbd81812au, 0x12933e81u, 0xf36985ecu, 0xb832c85bu, 0x63ba61feu, 0x21bf2145u, 0x5a2221e0u,
        0xb889ebbfu, 0x95050612u, 0x65dd6e49u, 0x67bfa314u, 0xc9183363u, 0x1bce0166u, 0xdd69a98du, 0x231fbd88u, 0x2cd7c347u, 0x8d2127fau, 0x84759711u, 0x9141653cu, 0x8df2ff6bu, 0x34fd8dceu, 0xcced3ad5u, 0xe8b8ce30u,
        0xd2a88bcfu, 0xbde986e2u, 0x191ad8d9u, 0x62636c64u, 0x6e6f4c73u, 0xa7c6a736u, 0x3c6af51du, 0xdb5bf3d8u, 0xd35a6557u, 0xe1e5c2cau, 0x467053a1u, 0xbc2e588cu, 0xe7bd3a7bu, 0x1c5aed9eu, 0x1c27f865u, 0xd94bce80u,
        0xa40f6fdfu, 0xa4917bb2u, 0xa37d2769u, 0x40bec9b4u, 0x3d10e983u, 0xe1200106u, 0x850d64adu, 0x291efe28u, 0x7e2dcb67u, 0xc0dc519au, 0xc82c7431u, 0x75c55fdcu, 0x3822798bu, 0xb12f816eu, 0xcd2859f5u, 0x844022d0u,
        0xe7df97efu, 0xefa9e482u, 0x69cd59f9u, 0x3706bb04u, 0xf9ae0a93u, 0x4ad70ed6u, 0x2c29f83du, 0x716ddc78u, 0x4c92f577u, 0xa651d46au, 0x0792f8c1u, 0x78db7b2cu, 0xd9f3bc9bu, 0xd618493eu, 0xefe75f85u, 0xef3acb20u,
        0xa57a03ffu, 0xa51fc152u, 0x27147089u, 0x5ab04054u, 0x5937afa3u, 0x1b28d0a6u, 0x40d9afcdu, 0x6e8d8ec8u, 0x320ae387u, 0x55d34b3au, 0x20cce151u, 0x8985aa7cu, 0x204203abu, 0x88f2450eu, 0x769e0915u, 0x1d20c770u,
    };
    uint32_t acc = 0xbb206270u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 4) & 255]);
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
    case 0: acc = heavy_round(acc, 0x2cb9cebfu); break;
    case 1: acc = heavy_round(acc, 0xbae58d12u); break;
    case 2: acc = heavy_round(acc, 0xf70e4949u); break;
    case 3: acc = heavy_round(acc, 0xa17cc214u); break;
    case 4: acc = heavy_round(acc, 0x190cc663u); break;
    case 5: acc = heavy_round(acc, 0xf8cb7866u); break;
    case 6: acc = heavy_round(acc, 0xb2b2b48du); break;
    case 7: acc = heavy_round(acc, 0x25374c88u); break;
    case 8: acc = heavy_round(acc, 0xa2040647u); break;
    case 9: acc = heavy_round(acc, 0xae128efau); break;
    case 10: acc = heavy_round(acc, 0x6ec1d211u); break;
    case 11: acc = heavy_round(acc, 0x99a2643cu); break;
    case 12: acc = heavy_round(acc, 0x8779f26bu); break;
    case 13: acc = heavy_round(acc, 0x60a9e4ceu); break;
    case 14: acc = heavy_round(acc, 0x2e57a5d5u); break;
    case 15: acc = heavy_round(acc, 0xb4c23d30u); break;
    case 16: acc = heavy_round(acc, 0xc85d2ecfu); break;
    case 17: acc = heavy_round(acc, 0x1c07cde2u); break;
    case 18: acc = heavy_round(acc, 0xdfee73d9u); break;
    case 19: acc = heavy_round(acc, 0xede44b64u); break;
    case 20: acc = heavy_round(acc, 0xa3d49f73u); break;
    case 21: acc = heavy_round(acc, 0xd7fdde36u); break;
    case 22: acc = heavy_round(acc, 0x0e22c01du); break;
    case 23: acc = heavy_round(acc, 0x8f9342d8u); break;
    case 24: acc = heavy_round(acc, 0xbaa36857u); break;
    case 25: acc = heavy_round(acc, 0x02cce9cau); break;
    case 26: acc = heavy_round(acc, 0xdab74ea1u); break;
    case 27: acc = heavy_round(acc, 0x0ecb178cu); break;
    case 28: acc = heavy_round(acc, 0x34cced7bu); break;
    case 29: acc = heavy_round(acc, 0xc279049eu); break;
    case 30: acc = heavy_round(acc, 0xc7d92365u); break;
    case 31: acc = heavy_round(acc, 0x5b6cfd80u); break;
    case 32: acc = heavy_round(acc, 0x0f78d2dfu); break;
    case 33: acc = heavy_round(acc, 0xc15d82b2u); break;
    case 34: acc = heavy_round(acc, 0x13a38269u); break;
    case 35: acc = heavy_round(acc, 0x1df368b4u); break;
    case 36: acc = heavy_round(acc, 0xf716fc83u); break;
    case 37: acc = heavy_round(acc, 0x9a00f806u); break;
    case 38: acc = heavy_round(acc, 0xa9e3efadu); break;
    case 39: acc = heavy_round(acc, 0x16660d28u); break;
    case 40: acc = heavy_round(acc, 0x51c38e67u); break;
    case 41: acc = heavy_round(acc, 0x3629389au); break;
    case 42: acc = heavy_round(acc, 0xf01e2f31u); break;
    case 43: acc = heavy_round(acc, 0x108ddedcu); break;
    case 44: acc = heavy_round(acc, 0x5deaec8bu); break;
    case 45: acc = heavy_round(acc, 0xb52f586eu); break;
    case 46: acc = heavy_round(acc, 0xefd044f5u); break;
    case 47: acc = heavy_round(acc, 0x216911d0u); break;
    case 48: acc = heavy_round(acc, 0x892dbaefu); break;
    case 49: acc = heavy_round(acc, 0xad93ab82u); break;
    case 50: acc = heavy_round(acc, 0xa2f674f9u); break;
    case 51: acc = heavy_round(acc, 0x21df1a04u); break;
    case 52: acc = heavy_round(acc, 0x6384dd93u); break;
    case 53: acc = heavy_round(acc, 0xddd1c5d6u); break;
    case 54: acc = heavy_round(acc, 0x66cf433du); break;
    case 55: acc = heavy_round(acc, 0x9ab4ab78u); break;
    case 56: acc = heavy_round(acc, 0xd2a57877u); break;
    case 57: acc = heavy_round(acc, 0xa0747b6au); break;
    case 58: acc = heavy_round(acc, 0xd8df73c1u); break;
    case 59: acc = heavy_round(acc, 0x95bfba2cu); break;
    case 60: acc = heavy_round(acc, 0x69a4ef9bu); break;
    case 61: acc = heavy_round(acc, 0xb769e03eu); break;
    case 62: acc = heavy_round(acc, 0xa2360a85u); break;
    case 63: acc = heavy_round(acc, 0x085b7a20u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_019(int x)
{
    static const uint32_t local[256] = {
        0xf6db14bau, 0x15fb1cd1u, 0x3813affcu, 0x1d294b2bu, 0x82ade68eu, 0xacfe3c95u, 0x3c0864f0u, 0x7c83b38fu, 0x91a10ba2u, 0xef111699u, 0x643f0f24u, 0xee2f1033u, 0xaa4217f6u, 0x8e5c2eddu, 0xc55e6298u, 0x7e5a8517u,
        0xb74ddf8au, 0x66ee4961u, 0x923e534cu, 0xa135763bu, 0x4504765eu, 0x14006a25u, 0xc85c1540u, 0x2cd3879fu, 0x09bd3072u, 0xd779d529u, 0x898e1c74u, 0x9f509d43u, 0xcdbaa1c6u, 0xd7b40e6du, 0x56f81ce8u, 0x5534db27u,
        0x063e9e5au, 0xf77ed9f1u, 0xa13f0a9cu, 0x9418a54bu, 0xb7de3a2eu, 0xcc643bb5u, 0x61fd1990u, 0x8d889fafu, 0x7415c942u, 0x772c77b9u, 0xb275bdc4u, 0xbe29ae53u, 0x861cdf96u, 0x62a211fdu, 0x9389ab38u, 0x4d1cf537u,
        0xa2fa512au, 0x2c95ce81u, 0x5aead5ecu, 0x4fa3d85bu, 0xb0d831feu, 0x3d22b145u, 0x799071e0u, 0x1503fbbfu, 0x7997d612u, 0xd031fe49u, 0x8f6af314u, 0xdeab4363u, 0x5ca5d166u, 0x753f398du, 0x00580d88u, 0xa893d347u,
        0x540df7fau, 0x495c2711u, 0x7e56b53cu, 0xe5e80f6bu, 0xe0cf5dceu, 0x6f74cad5u, 0x3cfb1e30u, 0x55e69bcfu, 0xb27056e2u, 0x8ad368d9u, 0xc222bc64u, 0x55065c73u, 0x1dd27736u, 0x3fe4851du, 0x87e843d8u, 0x4e5a7557u,
        0xb74692cau, 0xff3ae3a1u, 0xe3d7a88cu, 0x31364a7bu, 0xa3e0bd9eu, 0x9ed38865u, 0xe7621e80u, 0x0f117fdfu, 0x760c4bb2u, 0x8599b769u, 0x2d9219b4u, 0x45abf983u, 0xa95fd106u, 0x6d2af4adu, 0xc9ff4e28u, 0xd971db67u,
        0x11b1219au, 0xfddb0431u, 0xcd02afdcu, 0xe41f898bu, 0xd169516eu, 0xc8f7e9f5u, 0x112a72d0u, 0x3ba5a7efu, 0xab18b482u, 0x654de9f9u, 0x45ee0b04u, 0xb54d1a93u, 0xc24aded6u, 0xb1eb883du, 0x6ba22c78u, 0xa91b0577u,
        0x1f9aa46au, 0x832588c1u, 0x34accb2cu, 0x9974cc9bu, 0x8c06193eu, 0x3ddaef85u, 0xfff91b20u, 0x230413ffu, 0x97829152u, 0x24f90089u, 0x60ab9054u, 0x98dabfa3u, 0xded0a0a6u, 0x5d3f3fcdu, 0x6715dec8u, 0xf0d6f387u,
        0xe4901b3au, 0xeb437151u, 0x1eeafa7cu, 0xe44713abu, 0x1194150eu, 0x2fb59915u, 0xf6b31770u, 0x68cdc40fu, 0xb076e222u, 0xa5e3fb19u, 0x047fa9a4u, 0xe585e8b3u, 0xf86e1676u, 0xe87f1b5du, 0x5bdf6518u, 0xc866a597u,
        0x7b5e860au, 0x409dbde1u, 0xe9123dccu, 0x5fe75ebbu, 0x8b3044deu, 0x4300e6a5u, 0x857d67c0u, 0x1ce3b81fu, 0x6a62a6f2u, 0x3f97d9a9u, 0x395f56f4u, 0xa0bf95c3u, 0x5be04046u, 0x87441aedu, 0xdec3bf68u, 0x3bcb1ba7u,
        0xe612e4dau, 0xcbdd6e71u, 0x99b7951cu, 0xbfe6adcbu, 0xdd37a8aeu, 0x1e75d835u, 0xd9bd0c10u, 0xcb66f02fu, 0x08f2dfc2u, 0x4fdd9c39u, 0xd87f9844u, 0xf038c6d3u, 0x79241e16u, 0xb7673e7du, 0xc9c7edb8u, 0x5b4555b7u,
        0xddfa37aau, 0xa3eb8301u, 0x30b0006cu, 0xe01600dbu, 0x7747407eu, 0xfb0d6dc5u, 0x0e170460u, 0x8cb86c3fu, 0x6f148c92u, 0xcabe42c9u, 0xdc556d94u, 0x29e27be3u, 0xb376afe6u, 0xd101860du, 0x8c30f008u, 0x4b5653c7u,
        0xa3a17e7au, 0x3df0fb91u, 0xf7107fbcu, 0xd48657ebu, 0x243c0c4eu, 0x3400a755u, 0x7a7050b0u, 0x15792c4fu, 0xeef4ad62u, 0xca82cd59u, 0xb095d6e4u, 0xe3edb4f3u, 0x3154f5b6u, 0x966bf19du, 0x7a83c658u, 0x54bf15d7u,
        0xced5b94au, 0xfd56d821u, 0xcf2e130cu, 0xf988b2fbu, 0xda330c1eu, 0xd6c884e5u, 0x03edf100u, 0xc68a305fu, 0x1a004232u, 0x1fb43be9u, 0x8235d434u, 0x04cb7203u, 0xac7bef86u, 0xc43f812du, 0x1e8570a8u, 0xf4809be7u,
        0x1ea3e81au, 0xc3c618b1u, 0x849dba5cu, 0x03ae120bu, 0x8a893feeu, 0x331e0675u, 0x6cf4e550u, 0xbd0c786fu, 0x90e44b02u, 0xe11b8e79u, 0x8f6a6584u, 0xd32cb313u, 0x41e89d56u, 0xa15534bdu, 0x873aeef8u, 0xebdbe5f7u,
        0x49590aeau, 0x8127bd41u, 0x1c3475acu, 0x0fc7751bu, 0xf1dba7beu, 0x6afa2c05u, 0xa52a2da0u, 0xe261047fu, 0xd38dc7d2u, 0xfbc1c509u, 0x77a88ad4u, 0x06027823u, 0x41d7ff26u, 0x8ec60c4du, 0x98e94148u, 0x5051f407u,
    };
    uint32_t acc = 0x1a4cf307u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 19) & 255]);
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
    case 0: acc = heavy_round(acc, 0xd1a9a734u); break;
    case 1: acc = heavy_round(acc, 0xcebf2903u); break;
    case 2: acc = heavy_round(acc, 0xe7c63a86u); break;
    case 3: acc = heavy_round(acc, 0xb3e7502du); break;
    case 4: acc = heavy_round(acc, 0x5d84f3a8u); break;
    case 5: acc = heavy_round(acc, 0xc0ac42e7u); break;
    case 6: acc = heavy_round(acc, 0x3065631au); break;
    case 7: acc = heavy_round(acc, 0xc49b57b1u); break;
    case 8: acc = heavy_round(acc, 0xad8bed5cu); break;
    case 9: acc = heavy_round(acc, 0xfb18a90bu); break;
    case 10: acc = heavy_round(acc, 0x521ceaeeu); break;
    case 11: acc = heavy_round(acc, 0xdebfb575u); break;
    case 12: acc = heavy_round(acc, 0xa6e4c850u); break;
    case 13: acc = heavy_round(acc, 0x6dacff6fu); break;
    case 14: acc = heavy_round(acc, 0xadd52602u); break;
    case 15: acc = heavy_round(acc, 0xb398ad79u); break;
    case 16: acc = heavy_round(acc, 0x211ef884u); break;
    case 17: acc = heavy_round(acc, 0x86ea2a13u); break;
    case 18: acc = heavy_round(acc, 0x7ef1a856u); break;
    case 19: acc = heavy_round(acc, 0x682cc3bdu); break;
    case 20: acc = heavy_round(acc, 0x7a2731f8u); break;
    case 21: acc = heavy_round(acc, 0xef8d4cf7u); break;
    case 22: acc = heavy_round(acc, 0x376545eau); break;
    case 23: acc = heavy_round(acc, 0x3a48bc41u); break;
    case 24: acc = heavy_round(acc, 0x8f7b68acu); break;
    case 25: acc = heavy_round(acc, 0xea33cc1bu); break;
    case 26: acc = heavy_round(acc, 0xb30612beu); break;
    case 27: acc = heavy_round(acc, 0x93c39b05u); break;
    case 28: acc = heavy_round(acc, 0xd09ed0a0u); break;
    case 29: acc = heavy_round(acc, 0x7b3f4b7fu); break;
    case 30: acc = heavy_round(acc, 0x162162d2u); break;
    case 31: acc = heavy_round(acc, 0x5002a409u); break;
    case 32: acc = heavy_round(acc, 0x5ecdddd4u); break;
    case 33: acc = heavy_round(acc, 0xbcf9af23u); break;
    case 34: acc = heavy_round(acc, 0x6b4fca26u); break;
    case 35: acc = heavy_round(acc, 0x37bd5b4du); break;
    case 36: acc = heavy_round(acc, 0x6df24448u); break;
    case 37: acc = heavy_round(acc, 0x03f91b07u); break;
    case 38: acc = heavy_round(acc, 0x54891cbau); break;
    case 39: acc = heavy_round(acc, 0xf70184d1u); break;
    case 40: acc = heavy_round(acc, 0x5ad6f7fcu); break;
    case 41: acc = heavy_round(acc, 0xb7c3f32bu); break;
    case 42: acc = heavy_round(acc, 0x63786e8eu); break;
    case 43: acc = heavy_round(acc, 0x11772495u); break;
    case 44: acc = heavy_round(acc, 0x2a9c2cf0u); break;
    case 45: acc = heavy_round(acc, 0x03b4db8fu); break;
    case 46: acc = heavy_round(acc, 0xed1013a2u); break;
    case 47: acc = heavy_round(acc, 0x98e47e99u); break;
    case 48: acc = heavy_round(acc, 0x676b5724u); break;
    case 49: acc = heavy_round(acc, 0xc41eb833u); break;
    case 50: acc = heavy_round(acc, 0x6c5d9ff6u); break;
    case 51: acc = heavy_round(acc, 0xa9f216ddu); break;
    case 52: acc = heavy_round(acc, 0x8e6b2a98u); break;
    case 53: acc = heavy_round(acc, 0x53b0ad17u); break;
    case 54: acc = heavy_round(acc, 0xc89de78au); break;
    case 55: acc = heavy_round(acc, 0xf32eb161u); break;
    case 56: acc = heavy_round(acc, 0x82f39b4cu); break;
    case 57: acc = heavy_round(acc, 0x1d1a1e3bu); break;
    case 58: acc = heavy_round(acc, 0x1290fe5eu); break;
    case 59: acc = heavy_round(acc, 0xca535225u); break;
    case 60: acc = heavy_round(acc, 0xbb01dd40u); break;
    case 61: acc = heavy_round(acc, 0x14eeaf9fu); break;
    case 62: acc = heavy_round(acc, 0x8d0e3872u); break;
    case 63: acc = heavy_round(acc, 0x93c73d29u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

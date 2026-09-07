#include "heavy.h"
#include "mods.h"

int mod_094(int x)
{
    static const uint32_t local[256] = {
        0x129ed79du, 0x86bd7458u, 0xed00ebd7u, 0xab71974au, 0xf9b51e21u, 0x05dba10cu, 0xc4ece8fbu, 0x61cdca1eu, 0xef582ae5u, 0xb55d5f00u, 0xed06c65fu, 0x5817e032u, 0x1ddb41e9u, 0x8c952234u, 0x22b66803u, 0xd56e6d86u,
        0xc4c3e72du, 0xdbe29ea8u, 0x308ff1e7u, 0xadaf461au, 0xbccddeb1u, 0x98e6c85cu, 0x84f7c80bu, 0x3fcb7deeu, 0xda2f2c75u, 0x73f7d350u, 0x81068e6fu, 0x4f5b6902u, 0xf11c1479u, 0xaad53384u, 0xe3ad2913u, 0xcd729b56u,
        0x808b1abdu, 0xcc9b9cf8u, 0xf518bbf7u, 0xe4b3e8eau, 0x47390341u, 0xe2f903acu, 0x5656ab1bu, 0xdca565beu, 0x46ecd205u, 0xb4a09ba0u, 0x99389a7fu, 0xa84465d2u, 0xf9fbcb09u, 0x14fed8d4u, 0x04786e23u, 0x33d97d26u,
        0xbf0d724du, 0x752d6f48u, 0x281c4a07u, 0xc60c7fbau, 0xbf1f8bd1u, 0x2a2752fcu, 0x261a922bu, 0x0838818eu, 0xd1ca1b95u, 0x1c3cb7f0u, 0xd33dea8fu, 0x89ffd6a2u, 0x23c36599u, 0xd3c71224u, 0x14493733u, 0xd42012f6u,
        0xa3a3edddu, 0x171d1598u, 0x1b5b9c17u, 0x5e860a8au, 0x78ea7861u, 0x8dc6b64cu, 0x69947d3bu, 0xfda1d15eu, 0x09400925u, 0x1cf12840u, 0xb8f77e9fu, 0x9afabb72u, 0x4ffbe429u, 0xf122df74u, 0x32908443u, 0x4d035cc6u,
        0x8be78d6du, 0x692f8fe8u, 0x94d7b227u, 0x222d895au, 0x8742c8f1u, 0x566c2d9cu, 0x2e556c4bu, 0x333e552eu, 0xfe079ab5u, 0x4622ec90u, 0xd08656afu, 0xd0e21442u, 0xe66e46b9u, 0xc84740c4u, 0x1eff5553u, 0xe0805a96u,
        0x9fb150fdu, 0xe769de38u, 0xded18c37u, 0xbc4ffc2au, 0x4b117d81u, 0x45ecb8ecu, 0x2a2e5f5bu, 0x2aab0cfeu, 0xd319d045u, 0x947704e0u, 0xac4b72bfu, 0x40a2e112u, 0x65238d49u, 0x55a93614u, 0x4986aa63u, 0x43d40c66u,
        0x611a388du, 0x23110088u, 0xd7ca2a47u, 0xdf7a62fau, 0x037f9611u, 0xe75d583cu, 0xcb30566bu, 0x40c4f8ceu, 0x4dafa9d5u, 0xc1d27130u, 0xfae7d2cfu, 0xee6a21e2u, 0xf064b7d9u, 0x86fdbf64u, 0xe2578373u, 0x6f7b7236u,
        0x3c7b441du, 0x12a9f6d8u, 0x02828c57u, 0x1579bdcau, 0x5df612a1u, 0xdf130b8cu, 0x47ac517bu, 0x7da9189eu, 0x65422765u, 0x955a3180u, 0x973c76dfu, 0x9da4d6b2u, 0xe2bac669u, 0x8b39dcb4u, 0xe9e2e083u, 0x6f338c06u,
        0x186d73adu, 0x61f9c128u, 0x95fbb267u, 0x8f5b0c9au, 0x061df331u, 0x3aa2d2dcu, 0xae33508bu, 0x64b46c6eu, 0xd38a48f5u, 0x337345d0u, 0x986a5eefu, 0xa0ffff82u, 0x5ceeb8f9u, 0x22928e04u, 0x40d9c193u, 0x31f959d6u,
        0xe5c9c73du, 0xc2055f78u, 0x8d769c77u, 0xf56b4f6au, 0x35e037c1u, 0xc0e1ae2cu, 0xf596539bu, 0xc483f43eu, 0xa4810e85u, 0x6dc2ae20u, 0x61d28affu, 0xaa689c52u, 0xd6098f89u, 0xee7cd354u, 0xb82d26a3u, 0x5a09dba6u,
        0x2fa93ecdu, 0x3911d1c8u, 0xb8744a87u, 0x3737863au, 0x4565e051u, 0x41e49d7cu, 0x0ce65aabu, 0x86f4b00eu, 0xc65f7815u, 0x132d6a70u, 0xb315fb0fu, 0x9b0bad22u, 0xab544a19u, 0xc1adaca4u, 0x210e0fb3u, 0x0ce21176u,
        0xab64da5du, 0x72a41818u, 0xcab5bc97u, 0x5b8cb10au, 0x3b17ece1u, 0xe700a0ccu, 0xeb7465bbu, 0x81239fdeu, 0x999e85a5u, 0x3fd87ac0u, 0xb815af1fu, 0x535631f2u, 0xb057e8a9u, 0xf01a19f4u, 0x5ced7cc3u, 0xc33efb46u,
        0xc89599edu, 0x0f813268u, 0x6c3bf2a7u, 0x5077cfdau, 0x5b9f5d71u, 0x82cab81cu, 0xa0d174cbu, 0x436dc3aeu, 0x80f73735u, 0xad28df10u, 0x18f2a72fu, 0x82f52ac2u, 0xbedd6b39u, 0x9ef71b44u, 0x6d7c6dd3u, 0x191d9916u,
        0x41147d7du, 0xf5ae20b8u, 0x4947ecb7u, 0xbb45e2aau, 0xb9e53201u, 0xe117e36cu, 0x64ce87dbu, 0xe9701b7eu, 0x71628cc5u, 0x01c39760u, 0x0a0de33fu, 0x78d59792u, 0x46edd1c9u, 0x14b9b094u, 0x84abe2e3u, 0x9dbaeae6u,
        0xa8fa850du, 0xa06fe308u, 0x225aaac7u, 0xc883e97au, 0xc7126a91u, 0x16fd22bcu, 0xa77c9eebu, 0xea07a74eu, 0x82198655u, 0x218da3b0u, 0x5c08634fu, 0xf3247862u, 0xded21c59u, 0x0916d9e4u, 0x14acdbf3u, 0xa393f0b6u,
    };
    uint32_t acc = 0x838ff3b6u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 94) & 255]);
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
    case 0: acc = heavy_round(acc, 0xa015f8adu); break;
    case 1: acc = heavy_round(acc, 0x67868228u); break;
    case 2: acc = heavy_round(acc, 0xcc077f67u); break;
    case 3: acc = heavy_round(acc, 0x06a2759au); break;
    case 4: acc = heavy_round(acc, 0xc9944831u); break;
    case 5: acc = heavy_round(acc, 0x9a8323dcu); break;
    case 6: acc = heavy_round(acc, 0xd5dd6d8bu); break;
    case 7: acc = heavy_round(acc, 0x04e5e56eu); break;
    case 8: acc = heavy_round(acc, 0x7d436df5u); break;
    case 9: acc = heavy_round(acc, 0x339826d0u); break;
    case 10: acc = heavy_round(acc, 0x44efcbefu); break;
    case 11: acc = heavy_round(acc, 0x32348882u); break;
    case 12: acc = heavy_round(acc, 0x0c2fadf9u); break;
    case 13: acc = heavy_round(acc, 0xd77cff04u); break;
    case 14: acc = heavy_round(acc, 0xe2c77e93u); break;
    case 15: acc = heavy_round(acc, 0x9959f2d6u); break;
    case 16: acc = heavy_round(acc, 0x93a78c3du); break;
    case 17: acc = heavy_round(acc, 0x2fc66078u); break;
    case 18: acc = heavy_round(acc, 0x1fa9a977u); break;
    case 19: acc = heavy_round(acc, 0xfe30f86au); break;
    case 20: acc = heavy_round(acc, 0xea3fccc1u); break;
    case 21: acc = heavy_round(acc, 0x8c1a3f2cu); break;
    case 22: acc = heavy_round(acc, 0xfa3bb09bu); break;
    case 23: acc = heavy_round(acc, 0xf8f7ad3eu); break;
    case 24: acc = heavy_round(acc, 0x7b177385u); break;
    case 25: acc = heavy_round(acc, 0x1ca3cf20u); break;
    case 26: acc = heavy_round(acc, 0x2f6737ffu); break;
    case 27: acc = heavy_round(acc, 0x3ce36552u); break;
    case 28: acc = heavy_round(acc, 0xd35bc489u); break;
    case 29: acc = heavy_round(acc, 0xb9c78454u); break;
    case 30: acc = heavy_round(acc, 0x167e23a3u); break;
    case 31: acc = heavy_round(acc, 0x1df4b4a6u); break;
    case 32: acc = heavy_round(acc, 0xe60c43cdu); break;
    case 33: acc = heavy_round(acc, 0x6d1712c8u); break;
    case 34: acc = heavy_round(acc, 0xcd9e9787u); break;
    case 35: acc = heavy_round(acc, 0xaa0b6f3au); break;
    case 36: acc = heavy_round(acc, 0x49feb551u); break;
    case 37: acc = heavy_round(acc, 0x2f856e7cu); break;
    case 38: acc = heavy_round(acc, 0x9a56f7abu); break;
    case 39: acc = heavy_round(acc, 0xe93aa90eu); break;
    case 40: acc = heavy_round(acc, 0xf6231d15u); break;
    case 41: acc = heavy_round(acc, 0x90dacb70u); break;
    case 42: acc = heavy_round(acc, 0xa289e80fu); break;
    case 43: acc = heavy_round(acc, 0x195cb622u); break;
    case 44: acc = heavy_round(acc, 0x4007bf19u); break;
    case 45: acc = heavy_round(acc, 0x3c689da4u); break;
    case 46: acc = heavy_round(acc, 0x61924cb3u); break;
    case 47: acc = heavy_round(acc, 0xf8e72a76u); break;
    case 48: acc = heavy_round(acc, 0x209d1f5du); break;
    case 49: acc = heavy_round(acc, 0x8efd9918u); break;
    case 50: acc = heavy_round(acc, 0x7da74997u); break;
    case 51: acc = heavy_round(acc, 0x74feda0au); break;
    case 52: acc = heavy_round(acc, 0x033a01e1u); break;
    case 53: acc = heavy_round(acc, 0xb219b1ccu); break;
    case 54: acc = heavy_round(acc, 0xe18042bbu); break;
    case 55: acc = heavy_round(acc, 0x4ecbd8deu); break;
    case 56: acc = heavy_round(acc, 0xa2df6aa5u); break;
    case 57: acc = heavy_round(acc, 0xf0621bc0u); break;
    case 58: acc = heavy_round(acc, 0x3e38dc1fu); break;
    case 59: acc = heavy_round(acc, 0x8c0d7af2u); break;
    case 60: acc = heavy_round(acc, 0xb9bc9da9u); break;
    case 61: acc = heavy_round(acc, 0x37554af4u); break;
    case 62: acc = heavy_round(acc, 0x5974f9c3u); break;
    case 63: acc = heavy_round(acc, 0xc6ee5446u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

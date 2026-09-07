#include "heavy.h"
#include "mods.h"

int mod_034(int x)
{
    static const uint32_t local[256] = {
        0x16e53e99u, 0xd9f51724u, 0x379d7833u, 0x8a4d5ff6u, 0x759ed6ddu, 0x7ab0ea98u, 0xddbb6d17u, 0xd3a9a78au, 0xf1477161u, 0x06b55b4cu, 0xc070de3bu, 0xae78be5eu, 0xcb981225u, 0xefff9d40u, 0xa0516f9fu, 0xb991f872u,
        0x14f7fd29u, 0xd4e62474u, 0x4df90543u, 0xedb7e9c6u, 0x6a40b66du, 0x3b0ca4e8u, 0x606fc327u, 0xb8ac665au, 0x4cc201f1u, 0x9f98129cu, 0xbfce0d4bu, 0x5f84822eu, 0x9885e3b5u, 0x90a2a190u, 0x282087afu, 0x7c3c9142u,
        0xdcd49fb9u, 0xc3efc5c4u, 0x088c1653u, 0xaa8c2796u, 0x9af8b9fdu, 0x5ee03338u, 0x62b1dd37u, 0xb7fa192au, 0xaf42f681u, 0xe3a5ddecu, 0x8e53405bu, 0xeb3079feu, 0x684e5945u, 0x77b7f9e0u, 0x0535e3bfu, 0x36909e12u,
        0x10842649u, 0x7786fb14u, 0x9b47ab63u, 0x6a071966u, 0xeddfe18du, 0x8b709588u, 0xc702bb47u, 0xb81fbffau, 0xfbf34f11u, 0xb1f3bd3cu, 0xde11776bu, 0x2259a5ceu, 0xe42a72d5u, 0xf324a630u, 0x6a3283cfu, 0xa0bb1ee2u,
        0xf84f90d9u, 0xb160c464u, 0xfa5cc473u, 0x18a5bf36u, 0x334f2d1du, 0xcb42cbd8u, 0x14235d57u, 0x76ea5acau, 0x843c0ba1u, 0x02d6b08cu, 0x2959b27bu, 0x811d059eu, 0xe7933065u, 0x5e0da680u, 0xb5f767dfu, 0x322913b2u,
        0x12bfdf69u, 0x747221b4u, 0xea3c6183u, 0xb6251906u, 0xb5df9cadu, 0xde1bd628u, 0x8514c367u, 0x5966e99au, 0x97c62c31u, 0x37e3b7dcu, 0xc2bcf18bu, 0xfed7996eu, 0x104191f5u, 0x70d7fad0u, 0x83a58fefu, 0xf1877c82u,
        0xa49e11f9u, 0x54f01304u, 0x0f978293u, 0x258226d6u, 0xca6a303du, 0x8900b478u, 0x1917ed77u, 0x3be26c6au, 0x147ab0c1u, 0x6befd32cu, 0xe50c349bu, 0xde26613eu, 0x4e2e9785u, 0x9128a320u, 0xba9dfbffu, 0x44c35952u,
        0x48f32889u, 0xc84f9854u, 0xff5f27a3u, 0xfcf9e8a6u, 0x6007e7cdu, 0xe63666c8u, 0xa3addb87u, 0x41e9e33au, 0xf6829951u, 0xc310027cu, 0xc3587babu, 0x7ce65d0eu, 0x73934115u, 0x21e49f70u, 0x9e81ac0fu, 0xc109aa22u,
        0x81082319u, 0x7545b1a4u, 0x4ec450b3u, 0x56095e76u, 0x9011c35du, 0xb541ed18u, 0xdc978d97u, 0xa64a4e0au, 0xe846e5e1u, 0xba9945ccu, 0x98f2c6bbu, 0x24348cdeu, 0xc4e88ea5u, 0xd330efc0u, 0xdf31a01fu, 0xfac76ef2u,
        0x446601a9u, 0x83c75ef4u, 0xa337fdc3u, 0x9d6d8846u, 0x2e20c2edu, 0xaae84768u, 0x6fd603a7u, 0x8b10acdau, 0xd2709671u, 0x79209d1cu, 0xb96c15cbu, 0xd86df0aeu, 0x88e78035u, 0xf2729410u, 0xa8ced82fu, 0x55a9a7c2u,
        0x90d5c439u, 0xed09a044u, 0xc26b2ed3u, 0x63236616u, 0x580de67du, 0xc12e75b8u, 0x0daa3db7u, 0xc989ffaau, 0x6be8ab01u, 0x1e7b086cu, 0xa09568dbu, 0x292f887eu, 0x988915c5u, 0xba4e8c60u, 0xb3ba543fu, 0xd49d5492u,
        0xfa606ac9u, 0xcb817594u, 0xa24ee3e3u, 0x2a67f7e6u, 0x05f22e0du, 0x87597808u, 0x7a953bc7u, 0xc243467au, 0xc9d82391u, 0x13bd87bcu, 0x027fbfebu, 0x0156544eu, 0xef064f55u, 0xa2a9d8b0u, 0x5495144fu, 0xe9cf7562u,
        0x3b4ef559u, 0xaae3dee4u, 0x79141cf3u, 0x39b83db6u, 0x9a26999du, 0x71ee4e58u, 0x9f57fdd7u, 0x2d09814au, 0xefa80021u, 0x5b3d1b0cu, 0xdb7c1afbu, 0x76ff541eu, 0x39d82ce5u, 0xb0a97900u, 0x8c40185fu, 0x46ad0a32u,
        0xc42a63e9u, 0xd825dc34u, 0xcd2bda03u, 0x6ad13786u, 0x7144292du, 0x2ab1f8a8u, 0x98f383e7u, 0xe8e9b01au, 0x5f0140b1u, 0xe08ec25cu, 0x801b7a0bu, 0x9b8787eeu, 0x68b7ae75u, 0xc6b26d50u, 0x17dc606fu, 0xabe31302u,
        0x4bbbb679u, 0xb17c6d84u, 0x85471b13u, 0xfaafe556u, 0x7223dcbdu, 0xe0a976f8u, 0xc8a8cdf7u, 0xcc30d2eau, 0xa7cce541u, 0xc8877dacu, 0xad2edd1bu, 0x4b8befbeu, 0x3d9dd405u, 0xf469b5a0u, 0x80caec7fu, 0xb95e8fd2u,
        0x5f0bed09u, 0xf65c92d4u, 0xf856e023u, 0x59914726u, 0x9ddeb44du, 0x9819c948u, 0xe3f8dc07u, 0x746be9bau, 0xf833edd1u, 0xc13c4cfcu, 0x97c7442bu, 0xfee98b8eu, 0xdcc39d95u, 0xc6b451f0u, 0x2cacbc8fu, 0xbe4c80a2u,
    };
    uint32_t acc = 0x25a3d3a2u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 34) & 255]);
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
    case 0: acc = heavy_round(acc, 0x250655e1u); break;
    case 1: acc = heavy_round(acc, 0x06f1f5ccu); break;
    case 2: acc = heavy_round(acc, 0xff93b6bbu); break;
    case 3: acc = heavy_round(acc, 0xea00bcdeu); break;
    case 4: acc = heavy_round(acc, 0xdb66fea5u); break;
    case 5: acc = heavy_round(acc, 0x483c9fc0u); break;
    case 6: acc = heavy_round(acc, 0xa8e9901fu); break;
    case 7: acc = heavy_round(acc, 0xf2be9ef2u); break;
    case 8: acc = heavy_round(acc, 0x091371a9u); break;
    case 9: acc = heavy_round(acc, 0x8b360ef4u); break;
    case 10: acc = heavy_round(acc, 0x4df6edc3u); break;
    case 11: acc = heavy_round(acc, 0xccbfb846u); break;
    case 12: acc = heavy_round(acc, 0x046d32edu); break;
    case 13: acc = heavy_round(acc, 0xf169f768u); break;
    case 14: acc = heavy_round(acc, 0xe08bf3a7u); break;
    case 15: acc = heavy_round(acc, 0x31eddcdau); break;
    case 16: acc = heavy_round(acc, 0x1ccc0671u); break;
    case 17: acc = heavy_round(acc, 0x9e654d1cu); break;
    case 18: acc = heavy_round(acc, 0x2c0905cbu); break;
    case 19: acc = heavy_round(acc, 0xa20620aeu); break;
    case 20: acc = heavy_round(acc, 0x18c1f035u); break;
    case 21: acc = heavy_round(acc, 0x392a4410u); break;
    case 22: acc = heavy_round(acc, 0xa042c82fu); break;
    case 23: acc = heavy_round(acc, 0x882cd7c2u); break;
    case 24: acc = heavy_round(acc, 0x169f3439u); break;
    case 25: acc = heavy_round(acc, 0xeae45044u); break;
    case 26: acc = heavy_round(acc, 0xf8a61ed3u); break;
    case 27: acc = heavy_round(acc, 0x0fc19616u); break;
    case 28: acc = heavy_round(acc, 0xd336567du); break;
    case 29: acc = heavy_round(acc, 0x0edc25b8u); break;
    case 30: acc = heavy_round(acc, 0x639c2db7u); break;
    case 31: acc = heavy_round(acc, 0xfc732faau); break;
    case 32: acc = heavy_round(acc, 0x9ae01b01u); break;
    case 33: acc = heavy_round(acc, 0x07abb86cu); break;
    case 34: acc = heavy_round(acc, 0x0e2e58dbu); break;
    case 35: acc = heavy_round(acc, 0x1993b87eu); break;
    case 36: acc = heavy_round(acc, 0x68bf85c5u); break;
    case 37: acc = heavy_round(acc, 0xedb23c60u); break;
    case 38: acc = heavy_round(acc, 0x37ea443fu); break;
    case 39: acc = heavy_round(acc, 0x14ac8492u); break;
    case 40: acc = heavy_round(acc, 0xf845dac9u); break;
    case 41: acc = heavy_round(acc, 0x0ac82594u); break;
    case 42: acc = heavy_round(acc, 0x3305d3e3u); break;
    case 43: acc = heavy_round(acc, 0xd75227e6u); break;
    case 44: acc = heavy_round(acc, 0xccf69e0du); break;
    case 45: acc = heavy_round(acc, 0x57332808u); break;
    case 46: acc = heavy_round(acc, 0xf4c32bc7u); break;
    case 47: acc = heavy_round(acc, 0xb438767au); break;
    case 48: acc = heavy_round(acc, 0x746b9391u); break;
    case 49: acc = heavy_round(acc, 0x6bda37bcu); break;
    case 50: acc = heavy_round(acc, 0x1a14afebu); break;
    case 51: acc = heavy_round(acc, 0xfb86844eu); break;
    case 52: acc = heavy_round(acc, 0x8698bf55u); break;
    case 53: acc = heavy_round(acc, 0x9db988b0u); break;
    case 54: acc = heavy_round(acc, 0x8481044fu); break;
    case 55: acc = heavy_round(acc, 0xca6aa562u); break;
    case 56: acc = heavy_round(acc, 0x28506559u); break;
    case 57: acc = heavy_round(acc, 0x36968ee4u); break;
    case 58: acc = heavy_round(acc, 0xf3470cf3u); break;
    case 59: acc = heavy_round(acc, 0x29ee6db6u); break;
    case 60: acc = heavy_round(acc, 0x1407099du); break;
    case 61: acc = heavy_round(acc, 0xfef3fe58u); break;
    case 62: acc = heavy_round(acc, 0x3cc1edd7u); break;
    case 63: acc = heavy_round(acc, 0xd10ab14au); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

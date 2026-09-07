#include "heavy.h"
#include "mods.h"

int mod_015(int x)
{
    static const uint32_t local[256] = {
        0x49034c8eu, 0xbbf86a95u, 0x2b10baf0u, 0x5834118fu, 0x2d09d1a2u, 0xe8472499u, 0xf391c524u, 0xefe64e33u, 0xd1443df6u, 0x1a9c1cddu, 0x9b717898u, 0x1e16a317u, 0xb5cf658au, 0x04e61761u, 0x71e7c94cu, 0x07d4743bu,
        0xa24b5c5eu, 0x863e1825u, 0x26d1eb40u, 0xd213659fu, 0x8e6f7672u, 0x726b6329u, 0x84665274u, 0xc7cf5b43u, 0xe9de47c6u, 0xafa77c6du, 0x0a28b2e8u, 0x70707927u, 0x9739a45au, 0xeea227f1u, 0xdd1e009cu, 0x7a6f234bu,
        0x2e76a02eu, 0x80c569b5u, 0xc1406f90u, 0x9e37fdafu, 0x5a718f42u, 0x10b985b9u, 0x103373c4u, 0xdd4fec53u, 0x65c20596u, 0x4128fffdu, 0xe137c138u, 0xc1b81337u, 0x4aced72au, 0x75c49c81u, 0xd65f4becu, 0x8191d65bu,
        0xdb2217feu, 0x4a875f45u, 0x430147e0u, 0x2b02d9bfu, 0xd1fd1c12u, 0x7d3a8c49u, 0x9f6e2914u, 0x3c590163u, 0xe62c7766u, 0x4d39a78du, 0x7de3a388u, 0x4c6e7147u, 0x2f1bfdfau, 0x95767511u, 0x74c0ab3cu, 0xa74d8d6bu,
        0x712ac3ceu, 0x24bcf8d5u, 0xb1f97430u, 0x0314f9cfu, 0x253f1ce2u, 0x183776d9u, 0x2bcb7264u, 0xb11b9a73u, 0x4f9a9d36u, 0x3c32731du, 0xa2b159d8u, 0xef549357u, 0x79ee18cau, 0xb720b1a1u, 0xe8971e8cu, 0x3df3487bu,
        0x64ada39eu, 0x82df3665u, 0x214df480u, 0xdd4f5ddfu, 0x43a491b2u, 0x78394569u, 0xf0404fb4u, 0xd808b783u, 0x99c97706u, 0xf0ac62adu, 0xc765e428u, 0x3d6b7967u, 0x0852279au, 0x426c5231u, 0xcb77a5dcu, 0x7014078bu,
        0xa507b76eu, 0x9aa717f5u, 0x0163c8d0u, 0xacd305efu, 0xabda7a82u, 0xfa08f7f9u, 0xb901c104u, 0x2dd15893u, 0x9fb604d6u, 0x5780763du, 0x69064278u, 0x8df42377u, 0x2e952a6au, 0x2d4256c1u, 0x7037412cu, 0x5080ca9bu,
        0x6cd5ff3eu, 0xf40d9d85u, 0x6fdff120u, 0xb100f1ffu, 0x3bcdd752u, 0x50af8e89u, 0x3384c654u, 0x1f667da3u, 0xef9d46a6u, 0xf7c7adcdu, 0x59d774c8u, 0x0c6f9187u, 0x8844213au, 0x8bcbbf51u, 0x32eaf07cu, 0xea4a91abu,
        0x11f57b0eu, 0xf94bc715u, 0x87a76d70u, 0x857a220fu, 0x00aba822u, 0x15760919u, 0x3e7e5fa4u, 0x19f926b3u, 0x9afc3c76u, 0x82db095du, 0x115e7b18u, 0xc89ec397u, 0xc82c0c0au, 0x20718be1u, 0xc8e7b3ccu, 0x50c25cbbu,
        0xd5832adeu, 0x86da94a5u, 0xb0df3dc0u, 0x321f961fu, 0x06e0ecf2u, 0x57e567a9u, 0x39e38cf4u, 0x9afa53c3u, 0x068fe646u, 0x645388edu, 0xfc605568u, 0xc682b9a7u, 0x8859eadau, 0xebdcbc71u, 0x90c28b1cu, 0xaf792bcbu,
        0xb3dc0eaeu, 0x7b730635u, 0xf0ec6210u, 0x3b124e2fu, 0x2a1aa5c2u, 0x2dc6aa39u, 0x56e94e44u, 0x401b04d3u, 0xba554416u, 0x520a2c7du, 0xcce203b8u, 0x0e5c73b7u, 0x1a1abdaau, 0xbcf65101u, 0xe250766cu, 0x5a3ffedbu,
        0x349d267eu, 0x480e1bc5u, 0x3a73da60u, 0xb0b34a3fu, 0xe545d292u, 0x4322d0c9u, 0xe804a394u, 0xd74c39e3u, 0x318955e6u, 0xdc17f40du, 0xca288608u, 0xbcacf1c7u, 0x55fb847au, 0xc0e74991u, 0x5ea675bcu, 0xdd27d5ebu,
        0x3aa3724eu, 0x7fe4d555u, 0xbd5aa6b0u, 0x3fa38a4fu, 0x228f7362u, 0x6a42db59u, 0xb0ea8ce4u, 0x6ebef2f3u, 0xaaa91bb6u, 0xfcd5df9du, 0x20b8dc58u, 0x123533d7u, 0x6bc93f4au, 0x1318a621u, 0x4019890cu, 0x0c81b0fbu,
        0xd40bf21eu, 0x687032e5u, 0x36c5c700u, 0x40c40e5fu, 0x0b648832u, 0x2bafc9e9u, 0x36900a34u, 0x64e43003u, 0xf7719586u, 0xa8dcef2du, 0x325806a8u, 0x83f639e7u, 0xb290ee1au, 0x4d3366b1u, 0xaa3eb05cu, 0x14de900bu,
        0x0a33a5eeu, 0x89693475u, 0x411a3b50u, 0xc935d66fu, 0xd8721102u, 0x56329c79u, 0x0f2a1b84u, 0x786cf113u, 0x4cdfc356u, 0x5f0622bdu, 0xe60b04f8u, 0xcb3103f7u, 0x789f90eau, 0x17208b41u, 0xf9eaebacu, 0x8b0f731bu,
        0xb1b78dbeu, 0x3cc8da05u, 0xa3fd03a0u, 0xba59e27fu, 0xa1a50dd2u, 0x8ed45309u, 0x322dc0d4u, 0xd84a3623u, 0x1330a526u, 0xb86a7a4du, 0xf816d748u, 0xf5669207u, 0xd38227bau, 0xb70913d1u, 0x15333afcu, 0x7c255a2bu,
    };
    uint32_t acc = 0x57f0c92bu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 15) & 255]);
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
    case 0: acc = heavy_round(acc, 0xedc50400u); break;
    case 1: acc = heavy_round(acc, 0x3308275fu); break;
    case 2: acc = heavy_round(acc, 0xebcfcd32u); break;
    case 3: acc = heavy_round(acc, 0x0ba04ae9u); break;
    case 4: acc = heavy_round(acc, 0x022c9734u); break;
    case 5: acc = heavy_round(acc, 0xe1055903u); break;
    case 6: acc = heavy_round(acc, 0x7c76aa86u); break;
    case 7: acc = heavy_round(acc, 0x7d7d002du); break;
    case 8: acc = heavy_round(acc, 0x6e3ee3a8u); break;
    case 9: acc = heavy_round(acc, 0x1fbd72e7u); break;
    case 10: acc = heavy_round(acc, 0x8d64d31au); break;
    case 11: acc = heavy_round(acc, 0x343407b1u); break;
    case 12: acc = heavy_round(acc, 0x5e6cdd5cu); break;
    case 13: acc = heavy_round(acc, 0x0624d90bu); break;
    case 14: acc = heavy_round(acc, 0x6cdb5aeeu); break;
    case 15: acc = heavy_round(acc, 0x0b0b6575u); break;
    case 16: acc = heavy_round(acc, 0x3edcb850u); break;
    case 17: acc = heavy_round(acc, 0x5ee42f6fu); break;
    case 18: acc = heavy_round(acc, 0x9ac29602u); break;
    case 19: acc = heavy_round(acc, 0x46475d79u); break;
    case 20: acc = heavy_round(acc, 0x5e1de884u); break;
    case 21: acc = heavy_round(acc, 0xa37c5a13u); break;
    case 22: acc = heavy_round(acc, 0xe17e1856u); break;
    case 23: acc = heavy_round(acc, 0x4dee73bdu); break;
    case 24: acc = heavy_round(acc, 0x811d21f8u); break;
    case 25: acc = heavy_round(acc, 0xb7aa7cf7u); break;
    case 26: acc = heavy_round(acc, 0xb200b5eau); break;
    case 27: acc = heavy_round(acc, 0x52cd6c41u); break;
    case 28: acc = heavy_round(acc, 0xdc5858acu); break;
    case 29: acc = heavy_round(acc, 0x490bfc1bu); break;
    case 30: acc = heavy_round(acc, 0x572082beu); break;
    case 31: acc = heavy_round(acc, 0x61bb4b05u); break;
    case 32: acc = heavy_round(acc, 0x2652c0a0u); break;
    case 33: acc = heavy_round(acc, 0xf7027b7fu); break;
    case 34: acc = heavy_round(acc, 0xd42ad2d2u); break;
    case 35: acc = heavy_round(acc, 0xa91d5409u); break;
    case 36: acc = heavy_round(acc, 0xb748cdd4u); break;
    case 37: acc = heavy_round(acc, 0xa6d7df23u); break;
    case 38: acc = heavy_round(acc, 0x82b83a26u); break;
    case 39: acc = heavy_round(acc, 0xf4ab0b4du); break;
    case 40: acc = heavy_round(acc, 0xea243448u); break;
    case 41: acc = heavy_round(acc, 0xa8224b07u); break;
    case 42: acc = heavy_round(acc, 0xc3c08cbau); break;
    case 43: acc = heavy_round(acc, 0xa37234d1u); break;
    case 44: acc = heavy_round(acc, 0x32afe7fcu); break;
    case 45: acc = heavy_round(acc, 0x8d68232bu); break;
    case 46: acc = heavy_round(acc, 0x57eede8eu); break;
    case 47: acc = heavy_round(acc, 0x9c1ad495u); break;
    case 48: acc = heavy_round(acc, 0x9d0c1cf0u); break;
    case 49: acc = heavy_round(acc, 0xdd040b8fu); break;
    case 50: acc = heavy_round(acc, 0x333583a2u); break;
    case 51: acc = heavy_round(acc, 0x036b2e99u); break;
    case 52: acc = heavy_round(acc, 0xaa624724u); break;
    case 53: acc = heavy_round(acc, 0xfe48e833u); break;
    case 54: acc = heavy_round(acc, 0xdfa20ff6u); break;
    case 55: acc = heavy_round(acc, 0xb90bc6ddu); break;
    case 56: acc = heavy_round(acc, 0xbed91a98u); break;
    case 57: acc = heavy_round(acc, 0x06e5dd17u); break;
    case 58: acc = heavy_round(acc, 0xc371578au); break;
    case 59: acc = heavy_round(acc, 0xde8b6161u); break;
    case 60: acc = heavy_round(acc, 0x94c88b4cu); break;
    case 61: acc = heavy_round(acc, 0x4c8a4e3bu); break;
    case 62: acc = heavy_round(acc, 0xde636e5eu); break;
    case 63: acc = heavy_round(acc, 0xeca30225u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

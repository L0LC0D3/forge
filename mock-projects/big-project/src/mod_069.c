#include "heavy.h"
#include "mods.h"

int mod_069(int x)
{
    static const uint32_t local[256] = {
        0x6bb908d0u, 0x4aa745efu, 0x8121ba82u, 0x722737f9u, 0x200b0104u, 0x58c99893u, 0xf7d144d6u, 0xec62b63du, 0x5e038278u, 0x26506377u, 0xecc46a6au, 0xe92896c1u, 0xf868812cu, 0x1a810a9bu, 0x08593f3eu, 0x6537dd85u,
        0x44853120u, 0x94e531ffu, 0xffe51752u, 0xc95dce89u, 0x01de0654u, 0x696ebda3u, 0x3b8886a6u, 0xce39edcdu, 0x0324b4c8u, 0xacdbd187u, 0x0f43613au, 0x5a41ff51u, 0x0c6c307cu, 0xb55ad1abu, 0x1b48bb0eu, 0xde060715u,
        0x9a9cad70u, 0x736e620fu, 0xa792e822u, 0xf2b44919u, 0x88279fa4u, 0x871166b3u, 0x0eb77c76u, 0x3edd495du, 0xc2fbbb18u, 0xb51b0397u, 0x8bfb4c0au, 0xe577cbe1u, 0x87b8f3ccu, 0xa0e29cbbu, 0x00a66adeu, 0x0324d4a5u,
        0xd6247dc0u, 0xee23d61fu, 0x84982cf2u, 0xfdb3a7a9u, 0x12dcccf4u, 0x2f2293c3u, 0xd61b2646u, 0xa9e5c8edu, 0x0a4d9568u, 0x430ef9a7u, 0xfcf92adau, 0x8b72fc71u, 0xc8e3cb1cu, 0x08a96bcbu, 0xb4cf4eaeu, 0xb34d4635u,
        0xfc81a210u, 0x89268e2fu, 0x72a1e5c2u, 0x0024ea39u, 0xd3328e44u, 0xff5344d3u, 0x19b08416u, 0xc52c6c7du, 0x8b1f43b8u, 0x5ef8b3b7u, 0xb389fdaau, 0x1b1c9101u, 0x27c1b66cu, 0x40803edbu, 0xbf60667eu, 0x5f785bc5u,
        0x00591a60u, 0x54d78a3fu, 0xec9d1292u, 0xa61110c9u, 0x1b9de394u, 0xc59479e3u, 0x54b495e6u, 0x20ca340du, 0x8cb5c608u, 0x255931c7u, 0x883ac47au, 0xc19d8991u, 0x4567b5bcu, 0xd47815ebu, 0x0336b24eu, 0x9adf1555u,
        0x118fe6b0u, 0xfdd7ca4fu, 0xdcb6b362u, 0xc1c11b59u, 0xafd3cce4u, 0x901732f3u, 0xc5a45bb6u, 0xb7181f9du, 0x3b961c58u, 0xd6f173d7u, 0xaad87f4au, 0x9a5ee621u, 0x5c2ac90cu, 0x98e1f0fbu, 0x8e6f321eu, 0xaafa72e5u,
        0xed4b0700u, 0xdd084e5fu, 0x6c5bc832u, 0xdbbe09e9u, 0x14c94a34u, 0xbd4c7003u, 0x3e3cd586u, 0x7caf2f2du, 0xf98546a8u, 0xe8c279e7u, 0x72702e1au, 0x3f09a6b1u, 0x8f9ff05cu, 0xba4ed00bu, 0x6a66e5eeu, 0x17837475u,
        0x2def7b50u, 0x078a166fu, 0xd4395102u, 0xc2d0dc79u, 0xe0b35b84u, 0x0be53113u, 0xf37b0356u, 0xf06862bdu, 0xad8844f8u, 0x140d43f7u, 0x2d4ed0eau, 0x5786cb41u, 0x3c9c2bacu, 0xcd8fb31bu, 0x6bbacdbeu, 0x3a731a05u,
        0x9b2243a0u, 0x5ebe227fu, 0x2c3c4dd2u, 0x1c029309u, 0x0b0700d4u, 0xaad27623u, 0x4d9be526u, 0xab5cba4du, 0x13e41748u, 0x6652d207u, 0xf10167bau, 0x29ff53d1u, 0x49347afcu, 0xdfb59a2bu, 0x0247e98eu, 0xd0026395u,
        0x79c85ff0u, 0xa045728fu, 0x3b91bea2u, 0xf29c2d99u, 0x3c793a24u, 0x49453f33u, 0xb81c7af6u, 0xf0e535ddu, 0x0e1dbd98u, 0x51542417u, 0x6a54f28au, 0x2adc4061u, 0x74bdde4cu, 0x8611853bu, 0x092b395eu, 0x86aa5125u,
        0xdc06d040u, 0x7601069fu, 0x48a6a372u, 0x4826ac29u, 0x1eff0774u, 0x26ae8c43u, 0x71b9c4c6u, 0x3e9ad56du, 0xf2fa37e8u, 0xbb123a27u, 0xad56715au, 0x8cc690f1u, 0xa7cd559cu, 0xee34744bu, 0x96c1bd2eu, 0x8f23e2b5u,
        0xf1429490u, 0x8611deafu, 0xe927fc42u, 0xa46b0eb9u, 0xadcd68c4u, 0x22bf5d53u, 0x5c70c296u, 0xdc5698fdu, 0xde7e8638u, 0x0dce1437u, 0x0552e42au, 0xd0a74581u, 0x4437e0ecu, 0xedef675bu, 0xcca874feu, 0x2c681845u,
        0x5620ace0u, 0x82d8fabfu, 0xd202c912u, 0xa5725549u, 0x85595e14u, 0xcd68b263u, 0xcd7e7466u, 0x6c31808du, 0x01efa888u, 0x4808b247u, 0xc4d74afau, 0x55a75e11u, 0x7512803cu, 0x13535e6bu, 0xa7bc60ceu, 0x43aff1d5u,
        0x64861930u, 0x3af75acfu, 0xa76409e2u, 0x8f857fd9u, 0x3357e764u, 0x76db8b73u, 0x5d5fda36u, 0x7a848c1du, 0xf3d29ed8u, 0x0c831457u, 0x15b0a5cau, 0xe92fdaa1u, 0x7eb2338cu, 0xb4b1597bu, 0xd01a809eu, 0xec746f65u,
        0x8397d980u, 0xa94dfedfu, 0xccb8beb2u, 0xdd2d8e69u, 0x86be04b4u, 0x3f88e883u, 0xb7d1f406u, 0x0de8bbadu, 0xffec6928u, 0xb23e3a67u, 0xc8ebf49au, 0x56e9bb31u, 0x0eabfadcu, 0x009a588bu, 0x691fd46eu, 0x006e90f5u,
    };
    uint32_t acc = 0xbc4157f5u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 69) & 255]);
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
    case 0: acc = heavy_round(acc, 0xa62108f2u); break;
    case 1: acc = heavy_round(acc, 0xb54ed3a9u); break;
    case 2: acc = heavy_round(acc, 0x854608f4u); break;
    case 3: acc = heavy_round(acc, 0xc8629fc3u); break;
    case 4: acc = heavy_round(acc, 0x4f23c246u); break;
    case 5: acc = heavy_round(acc, 0x797db4edu); break;
    case 6: acc = heavy_round(acc, 0x290c9168u); break;
    case 7: acc = heavy_round(acc, 0x8729c5a7u); break;
    case 8: acc = heavy_round(acc, 0x0b9d86dau); break;
    case 9: acc = heavy_round(acc, 0xc273a871u); break;
    case 10: acc = heavy_round(acc, 0xa474871cu); break;
    case 11: acc = heavy_round(acc, 0x35eaf7cbu); break;
    case 12: acc = heavy_round(acc, 0xcaeb6aaeu); break;
    case 13: acc = heavy_round(acc, 0xc1e2b235u); break;
    case 14: acc = heavy_round(acc, 0xcf201e10u); break;
    case 15: acc = heavy_round(acc, 0x7c9ada2fu); break;
    case 16: acc = heavy_round(acc, 0x91d1c1c2u); break;
    case 17: acc = heavy_round(acc, 0x233b1639u); break;
    case 18: acc = heavy_round(acc, 0xbcdaca44u); break;
    case 19: acc = heavy_round(acc, 0xc0c650d3u); break;
    case 20: acc = heavy_round(acc, 0xef502016u); break;
    case 21: acc = heavy_round(acc, 0x726f587du); break;
    case 22: acc = heavy_round(acc, 0x0d8d3fb8u); break;
    case 23: acc = heavy_round(acc, 0x6cf67fb7u); break;
    case 24: acc = heavy_round(acc, 0x74b559aau); break;
    case 25: acc = heavy_round(acc, 0x2cf83d01u); break;
    case 26: acc = heavy_round(acc, 0x6271726cu); break;
    case 27: acc = heavy_round(acc, 0x9c54cadbu); break;
    case 28: acc = heavy_round(acc, 0xc4f3827eu); break;
    case 29: acc = heavy_round(acc, 0x0118c7c5u); break;
    case 30: acc = heavy_round(acc, 0xac869660u); break;
    case 31: acc = heavy_round(acc, 0x4e8ed63fu); break;
    case 32: acc = heavy_round(acc, 0x0f33ee92u); break;
    case 33: acc = heavy_round(acc, 0xff623cc9u); break;
    case 34: acc = heavy_round(acc, 0x48451f94u); break;
    case 35: acc = heavy_round(acc, 0x87fa85e3u); break;
    case 36: acc = heavy_round(acc, 0x08ab31e6u); break;
    case 37: acc = heavy_round(acc, 0xc278200du); break;
    case 38: acc = heavy_round(acc, 0x1a92c208u); break;
    case 39: acc = heavy_round(acc, 0x01f9fdc7u); break;
    case 40: acc = heavy_round(acc, 0xb9ad207au); break;
    case 41: acc = heavy_round(acc, 0xd1143591u); break;
    case 42: acc = heavy_round(acc, 0x22f671bcu); break;
    case 43: acc = heavy_round(acc, 0x4f9fa1ebu); break;
    case 44: acc = heavy_round(acc, 0xb200ce4eu); break;
    case 45: acc = heavy_round(acc, 0xbe4a8155u); break;
    case 46: acc = heavy_round(acc, 0x370c62b0u); break;
    case 47: acc = heavy_round(acc, 0x9a92164fu); break;
    case 48: acc = heavy_round(acc, 0x78748f62u); break;
    case 49: acc = heavy_round(acc, 0xcc0d4759u); break;
    case 50: acc = heavy_round(acc, 0xdb3a08e4u); break;
    case 51: acc = heavy_round(acc, 0x5c303ef3u); break;
    case 52: acc = heavy_round(acc, 0x49b1f7b6u); break;
    case 53: acc = heavy_round(acc, 0x13f10b9du); break;
    case 54: acc = heavy_round(acc, 0x6ca21858u); break;
    case 55: acc = heavy_round(acc, 0xb6f53fd7u); break;
    case 56: acc = heavy_round(acc, 0x7a51db4au); break;
    case 57: acc = heavy_round(acc, 0x7a309221u); break;
    case 58: acc = heavy_round(acc, 0x1058850cu); break;
    case 59: acc = heavy_round(acc, 0x541c7cfbu); break;
    case 60: acc = heavy_round(acc, 0x10304e1eu); break;
    case 61: acc = heavy_round(acc, 0xeef0dee5u); break;
    case 62: acc = heavy_round(acc, 0x1bd68300u); break;
    case 63: acc = heavy_round(acc, 0xe9859a5fu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

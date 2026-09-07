#include "heavy.h"
#include "mods.h"

int mod_003(int x)
{
    static const uint32_t local[256] = {
        0x5bbf02eau, 0x49255541u, 0x26a52dacu, 0x78d0cd1bu, 0x98651fbeu, 0x5dc54405u, 0x3d0a65a0u, 0x6713dc7fu, 0xeab2bfd2u, 0x1b725d09u, 0x483042d4u, 0xa836d023u, 0xf1907726u, 0xb2f4244du, 0x24d07948u, 0x035fcc07u,
        0x804619bau, 0x31685dd1u, 0x7d85fcfcu, 0xb3a5342bu, 0x46cebb8eu, 0x84870d95u, 0x1a4101f0u, 0xa8f1ac8fu, 0xf56cb0a2u, 0x41267799u, 0x8cfafc24u, 0x05281933u, 0xef7d8cf6u, 0x2fff1fddu, 0x6faa9f98u, 0x79879e17u,
        0xe18e248au, 0xe4afca61u, 0xa777e04cu, 0x684f9f3bu, 0xceae8b5eu, 0xe3017b25u, 0x612ff240u, 0xeea3c09fu, 0x69061572u, 0x166b7629u, 0xbaf94974u, 0x3aafe643u, 0xc9a756c6u, 0x9fd73f6du, 0x4f4799e8u, 0xd20c3427u,
        0xdba4235au, 0x3da49af1u, 0x150fd79cu, 0xac610e4bu, 0x0e618f2eu, 0xd1ed8cb5u, 0x493c3690u, 0x464b18afu, 0x232bee42u, 0xcb0a58b9u, 0x55602ac4u, 0x107f3753u, 0x2a0ad496u, 0x725582fdu, 0xe7ac6838u, 0xdf2e8e37u,
        0x01d5162au, 0x652fcf81u, 0xb022e2ecu, 0x3daa815bu, 0xef84c6feu, 0xbc444245u, 0x770acee0u, 0xca48b4bfu, 0x20cb3b12u, 0xa50c1f49u, 0x80a4a014u, 0xfe870c63u, 0x2de50666u, 0x7192ea8du, 0x721e0a88u, 0x076fac47u,
        0xeeadfcfau, 0x627a6811u, 0x2bc6023cu, 0x923cf86bu, 0x36f532ceu, 0xaf3e9bd5u, 0x4c80bb30u, 0xb13d94cfu, 0x4e10fbe2u, 0x90b9c9d9u, 0x527ba964u, 0x3cf86573u, 0x35b2ec36u, 0x51e8761du, 0x8d2180d8u, 0x55908e57u,
        0x13fbd7cau, 0xaaed64a1u, 0x544e358cu, 0xe869737bu, 0x54cfd29eu, 0xea559965u, 0x38c2fb80u, 0x5e0ab8dfu, 0x566a30b2u, 0xb09c5869u, 0x21da46b4u, 0xd4444283u, 0xb5318606u, 0x41ef25adu, 0x8c7bcb28u, 0x88923467u,
        0x8acba69au, 0xb231c531u, 0x5f507cdcu, 0x56c0f28bu, 0x3471a66eu, 0x6f423af5u, 0x08368fd0u, 0x6fd120efu, 0x7483d982u, 0xed7ccaf9u, 0xd6f57804u, 0xad1ba393u, 0x035dd3d6u, 0x7a7ff93du, 0xc931e978u, 0x23b59e77u,
        0xe36a696au, 0x7a3089c1u, 0x3ba1d82cu, 0xdc14759bu, 0x0c77ae3eu, 0x91fd8085u, 0x34807820u, 0xd1f1ccffu, 0x424af652u, 0x86642189u, 0x3b423d54u, 0xa06f88a3u, 0x2a74d5a6u, 0xceb3f0cdu, 0xf188dbc8u, 0x7e7bcc87u,
        0xf565203au, 0x2312b251u, 0xe157477cu, 0x6f74fcabu, 0x2ebeea0eu, 0x88c06a15u, 0x3485b470u, 0xcc0dbd0fu, 0x88ec8722u, 0xa09b5c19u, 0x497596a4u, 0x8770f1b3u, 0xb7f38b76u, 0x3be40c5du, 0x5905a218u, 0xd4a5be97u,
        0xaf88cb0au, 0x7b413ee1u, 0xa1c5caccu, 0x103387bbu, 0xd86459deu, 0xfc03f7a5u, 0xcc6b44c0u, 0x1205f11fu, 0x10d58bf2u, 0xd7ab7aa9u, 0x7d8483f4u, 0x4b90dec3u, 0x8c96f546u, 0x79a94bedu, 0x486d3c68u, 0x563474a7u,
        0xe7e269dau, 0x8f652f71u, 0x7782621cu, 0xd5e116cbu, 0x01c4fdaeu, 0x96812935u, 0x5d962910u, 0xd3fb692fu, 0x71b304c2u, 0xcd5d7d39u, 0x24a40544u, 0xf6804fd3u, 0xac5c1316u, 0x89dcaf7du, 0x4dc4aab8u, 0x3768eeb7u,
        0x2bbefcaau, 0x3a678401u, 0x56620d6cu, 0x004ea9dbu, 0x2e7dd57eu, 0x9530fec5u, 0x36ab6160u, 0xce4f253fu, 0xe271f192u, 0xb9ba63c9u, 0xad491a94u, 0xc23044e3u, 0x0e7fe4e6u, 0x4897370du, 0x8c50ed08u, 0xc0c42cc7u,
        0x8fab837au, 0xb5713c91u, 0x7b79ccbcu, 0x078d40ebu, 0x3d6be14eu, 0x574c7855u, 0xe38fedb0u, 0x59a2254fu, 0x093f5262u, 0xfb0b2e59u, 0xf728c3e4u, 0x28d1bdf3u, 0x6d7f6ab6u, 0xfc31e29du, 0x0c970358u, 0x5f072ed7u,
        0x7f74fe4au, 0x27eb5921u, 0xbd1ea00cu, 0xabeddbfbu, 0x38ac211eu, 0xee4c95e5u, 0x7d68ce00u, 0x7ad5695fu, 0xcb882732u, 0xa5d8dce9u, 0xa3380134u, 0xf4d5bb03u, 0x1717a486u, 0xe545b22du, 0x0c5beda8u, 0xb332f4e7u,
        0x8e286d1au, 0x377ed9b1u, 0xdae5875cu, 0x06017b0bu, 0x259b94eeu, 0xadea5775u, 0xfa9b0250u, 0xf309f16fu, 0x1df97002u, 0x14ec6f79u, 0x63abd284u, 0x50ed3c13u, 0xbc459256u, 0xceaba5bdu, 0x4ea4abf8u, 0xa2887ef7u,
    };
    uint32_t acc = 0x2193bdf7u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 3) & 255]);
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
    case 0: acc = heavy_round(acc, 0xdbafec44u); break;
    case 1: acc = heavy_round(acc, 0x8f250ad3u); break;
    case 2: acc = heavy_round(acc, 0x523b9216u); break;
    case 3: acc = heavy_round(acc, 0x69d0227du); break;
    case 4: acc = heavy_round(acc, 0xe7f381b8u); break;
    case 5: acc = heavy_round(acc, 0xb473d9b7u); break;
    case 6: acc = heavy_round(acc, 0xd1eeebaau); break;
    case 7: acc = heavy_round(acc, 0x1b10a701u); break;
    case 8: acc = heavy_round(acc, 0x8dead46cu); break;
    case 9: acc = heavy_round(acc, 0xc08ac4dbu); break;
    case 10: acc = heavy_round(acc, 0x874d347eu); break;
    case 11: acc = heavy_round(acc, 0xfe92d1c5u); break;
    case 12: acc = heavy_round(acc, 0x25b51860u); break;
    case 13: acc = heavy_round(acc, 0xafb7703fu); break;
    case 14: acc = heavy_round(acc, 0x359fc092u); break;
    case 15: acc = heavy_round(acc, 0x6a87e6c9u); break;
    case 16: acc = heavy_round(acc, 0x54eac194u); break;
    case 17: acc = heavy_round(acc, 0xfcefbfe3u); break;
    case 18: acc = heavy_round(acc, 0x583b23e6u); break;
    case 19: acc = heavy_round(acc, 0xc9336a0du); break;
    case 20: acc = heavy_round(acc, 0x4b918408u); break;
    case 21: acc = heavy_round(acc, 0xf235d7c7u); break;
    case 22: acc = heavy_round(acc, 0x0f93327au); break;
    case 23: acc = heavy_round(acc, 0x9aef1f91u); break;
    case 24: acc = heavy_round(acc, 0x765053bcu); break;
    case 25: acc = heavy_round(acc, 0x6d3c1bebu); break;
    case 26: acc = heavy_round(acc, 0x758f004eu); break;
    case 27: acc = heavy_round(acc, 0x366f0b55u); break;
    case 28: acc = heavy_round(acc, 0x59e364b0u); break;
    case 29: acc = heavy_round(acc, 0x3c49304fu); break;
    case 30: acc = heavy_round(acc, 0x2d1ce162u); break;
    case 31: acc = heavy_round(acc, 0x0b457159u); break;
    case 32: acc = heavy_round(acc, 0x8bd02ae4u); break;
    case 33: acc = heavy_round(acc, 0x775bf8f3u); break;
    case 34: acc = heavy_round(acc, 0x410669b6u); break;
    case 35: acc = heavy_round(acc, 0x6aa6d59du); break;
    case 36: acc = heavy_round(acc, 0xfc595a58u); break;
    case 37: acc = heavy_round(acc, 0x798f99d7u); break;
    case 38: acc = heavy_round(acc, 0xa6046d4au); break;
    case 39: acc = heavy_round(acc, 0x1a6dfc21u); break;
    case 40: acc = heavy_round(acc, 0x05b2e70cu); break;
    case 41: acc = heavy_round(acc, 0x5ebf76fbu); break;
    case 42: acc = heavy_round(acc, 0xf413001eu); break;
    case 43: acc = heavy_round(acc, 0x365fe8e5u); break;
    case 44: acc = heavy_round(acc, 0xf4760500u); break;
    case 45: acc = heavy_round(acc, 0x296b345fu); break;
    case 46: acc = heavy_round(acc, 0x2b057632u); break;
    case 47: acc = heavy_round(acc, 0x23afdfe9u); break;
    case 48: acc = heavy_round(acc, 0xfd552834u); break;
    case 49: acc = heavy_round(acc, 0xf4dab603u); break;
    case 50: acc = heavy_round(acc, 0x965a6386u); break;
    case 51: acc = heavy_round(acc, 0x9ac3652du); break;
    case 52: acc = heavy_round(acc, 0xd41004a8u); break;
    case 53: acc = heavy_round(acc, 0xd7821fe7u); break;
    case 54: acc = heavy_round(acc, 0x244f9c1au); break;
    case 55: acc = heavy_round(acc, 0x0b363cb1u); break;
    case 56: acc = heavy_round(acc, 0x57a78e5cu); break;
    case 57: acc = heavy_round(acc, 0x59a5d60bu); break;
    case 58: acc = heavy_round(acc, 0xc43633eeu); break;
    case 59: acc = heavy_round(acc, 0xde1e6a75u); break;
    case 60: acc = heavy_round(acc, 0x07d1f950u); break;
    case 61: acc = heavy_round(acc, 0xa43e7c6fu); break;
    case 62: acc = heavy_round(acc, 0xa0067f02u); break;
    case 63: acc = heavy_round(acc, 0x5a903279u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

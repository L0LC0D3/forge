#include "heavy.h"
#include "mods.h"

int mod_009(int x)
{
    static const uint32_t local[256] = {
        0xfde355bcu, 0x147f35ebu, 0x3a53524eu, 0x6f133555u, 0xbcf586b0u, 0xcfc0ea4fu, 0x884d5362u, 0x1c273b59u, 0x17c36ce4u, 0xf10252f3u, 0x8054fbb6u, 0x31d03f9du, 0xf3afbc58u, 0x05fe93d7u, 0x69431f4au, 0x61890621u,
        0x620e690cu, 0x373110fbu, 0x3f33d21eu, 0x9cb692e5u, 0x4898a700u, 0x0db96e5fu, 0x981a6832u, 0xa82c29e9u, 0x7720ea34u, 0x457f9003u, 0xa7957586u, 0xc5ef4f2du, 0x5e86e6a8u, 0x4f9799e7u, 0xb602ce1au, 0xb93bc6b1u,
        0xdceb905cu, 0x68e5f00bu, 0x9ed385eeu, 0xa8c79475u, 0xd3251b50u, 0x6903366fu, 0x2a1ff102u, 0xa346fc79u, 0x7772fb84u, 0xad605113u, 0x557ba356u, 0xca3082bdu, 0x9971e4f8u, 0xc4aa63f7u, 0xe00970eau, 0x66c0eb41u,
        0x4b4fcbacu, 0xbe6ed31bu, 0xadcf6dbeu, 0x6d3f3a05u, 0xa43fe3a0u, 0x42ff427fu, 0xd64aedd2u, 0x3280b309u, 0x902ea0d4u, 0xd7959623u, 0x72448526u, 0x57acda4du, 0xe0b5b748u, 0xf2b7f207u, 0x7ce407bau, 0x304173d1u,
        0x13501afcu, 0xc4dcba2bu, 0x5c04898eu, 0x26568395u, 0x80cdfff0u, 0xd94e928fu, 0xe3c85ea2u, 0xe1224d99u, 0xea08da24u, 0xf3505f33u, 0xe96d1af6u, 0x31bd55ddu, 0x95d75d98u, 0xcb814417u, 0xb95f928au, 0x0a266061u,
        0x74417e4cu, 0x9180a53bu, 0x048fd95eu, 0x02867125u, 0xfaf47040u, 0x55d2269fu, 0x19054372u, 0x30b4cc29u, 0xaef6a774u, 0xc001ac43u, 0x79b264c6u, 0x55faf56du, 0x8f9bd7e8u, 0xb5075a27u, 0x2989115au, 0xa718b0f1u,
        0xd6b8f59cu, 0xd1eb944bu, 0x3dce5d2eu, 0xb28802b5u, 0xc2183490u, 0xdeaafeafu, 0x8bae9c42u, 0x29012eb9u, 0x5a2d08c4u, 0x9d5a7d53u, 0x85116296u, 0x8c3eb8fdu, 0x6a082638u, 0x998b3437u, 0x98ad842au, 0x08016581u,
        0x1c8b80ecu, 0xdbee875bu, 0xa95d14feu, 0xf9543845u, 0xf2de4ce0u, 0xa63a1abfu, 0x70b16912u, 0xe8107549u, 0x0820fe14u, 0x9b4bd263u, 0xe0c71466u, 0xf6a1a08du, 0xd6614888u, 0xf78dd247u, 0xd959eafau, 0x0c097e11u,
        0xf0ce203cu, 0xbd9a7e6bu, 0xc41900ceu, 0x3c2411d5u, 0x672bb930u, 0xfb207acfu, 0xec3aa9e2u, 0x322b9fd9u, 0xc6878764u, 0x8a06ab73u, 0xa5507a36u, 0xa17cac1du, 0xeb2c3ed8u, 0xf1d03457u, 0x955b45cau, 0x0099faa1u,
        0x17d5d38cu, 0x4d40797bu, 0xb61f209eu, 0x12708f65u, 0x06257980u, 0x583f1edfu, 0xe1b75eb2u, 0x01dbae69u, 0xe455a4b4u, 0x09fc0883u, 0xfe6a9406u, 0x1368dbadu, 0x742e0928u, 0x5f535a67u, 0x1dbe949au, 0x315bdb31u,
        0xbf379adcu, 0x3971788bu, 0x22cc746eu, 0xd5f2b0f5u, 0x14308dd0u, 0x74b706efu, 0xc3d48782u, 0x17e9a0f9u, 0x41c05604u, 0x9bdce993u, 0xfb1261d6u, 0xdd3f2f3du, 0x426ba778u, 0xdb584477u, 0x3ad0d76au, 0x78381fc1u,
        0xcdc8762cu, 0x18fe7b9bu, 0xf8bdfc3eu, 0x32a37685u, 0x82f1f620u, 0x53e932ffu, 0x647f2452u, 0x8b5e7789u, 0xa03c9b54u, 0xb09a4ea3u, 0x5d84e3a6u, 0x2a18a6cdu, 0x7c2a19c8u, 0xd55ff287u, 0xfc1f0e3au, 0xcd57c851u,
        0x339d657cu, 0x7af882abu, 0x41d0b80eu, 0xb6bbe015u, 0x414eb270u, 0x5576a30fu, 0xc4e43522u, 0x59833219u, 0xf27f74a4u, 0xb96537b3u, 0x6b3f1976u, 0x4f4e425du, 0xecee6018u, 0xa12b6497u, 0x8876390au, 0xd723d4e1u,
        0x3a0b68ccu, 0xf6b08dbbu, 0xf321a7deu, 0x62b4eda5u, 0x8b6bc2c0u, 0x4540571fu, 0xe570b9f2u, 0xf5e0d0a9u, 0xac7de1f4u, 0x37aea4c3u, 0xbcfe0346u, 0x5c7901edu, 0x557d7a68u, 0x86bb9aa7u, 0xede357dau, 0x7a454571u,
        0xd3a7801cu, 0x3bb79ccbu, 0xbd0dcbaeu, 0x39479f35u, 0x3aae2710u, 0x6b674f2fu, 0x95d1b2c2u, 0xda405339u, 0x136ce344u, 0xcd2795d3u, 0x0ebea116u, 0xab71e57du, 0xbbdc68b8u, 0xd25194b7u, 0xf1b36aaau, 0x69a51a01u,
        0xec46ab6cu, 0x21deafdbu, 0xdb32237eu, 0xcf6cf4c5u, 0x15badf60u, 0x9c4c8b3fu, 0x44f41f92u, 0x16aab9c9u, 0x8dc17894u, 0x4bc10ae3u, 0x0fbdf2e6u, 0x7051ed0du, 0xbb502b08u, 0xe46e52c7u, 0xe073717au, 0xb66c5291u,
    };
    uint32_t acc = 0x37bfa991u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 9) & 255]);
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
    case 0: acc = heavy_round(acc, 0x23892476u); break;
    case 1: acc = heavy_round(acc, 0x3e72d15du); break;
    case 2: acc = heavy_round(acc, 0x99c3a318u); break;
    case 3: acc = heavy_round(acc, 0xebb1cb97u); break;
    case 4: acc = heavy_round(acc, 0xed53740au); break;
    case 5: acc = heavy_round(acc, 0xdee1d3e1u); break;
    case 6: acc = heavy_round(acc, 0x394b5bccu); break;
    case 7: acc = heavy_round(acc, 0x22c1e4bbu); break;
    case 8: acc = heavy_round(acc, 0x97ad12deu); break;
    case 9: acc = heavy_round(acc, 0xbd6b5ca5u); break;
    case 10: acc = heavy_round(acc, 0xade965c0u); break;
    case 11: acc = heavy_round(acc, 0xff939e1fu); break;
    case 12: acc = heavy_round(acc, 0x78f554f2u); break;
    case 13: acc = heavy_round(acc, 0x6c5eafa9u); break;
    case 14: acc = heavy_round(acc, 0x9ebc34f4u); break;
    case 15: acc = heavy_round(acc, 0x74eadbc3u); break;
    case 16: acc = heavy_round(acc, 0x35f6ce46u); break;
    case 17: acc = heavy_round(acc, 0x74fd50edu); break;
    case 18: acc = heavy_round(acc, 0x02af7d68u); break;
    case 19: acc = heavy_round(acc, 0x8a77c1a7u); break;
    case 20: acc = heavy_round(acc, 0xe4fb52dau); break;
    case 21: acc = heavy_round(acc, 0x177f0471u); break;
    case 22: acc = heavy_round(acc, 0x78b0331cu); break;
    case 23: acc = heavy_round(acc, 0x8f7ab3cbu); break;
    case 24: acc = heavy_round(acc, 0xf81ff6aeu); break;
    case 25: acc = heavy_round(acc, 0xa955ce35u); break;
    case 26: acc = heavy_round(acc, 0x29208a10u); break;
    case 27: acc = heavy_round(acc, 0xc5a8562fu); break;
    case 28: acc = heavy_round(acc, 0xc2e90dc2u); break;
    case 29: acc = heavy_round(acc, 0x55b1f239u); break;
    case 30: acc = heavy_round(acc, 0x248bf644u); break;
    case 31: acc = heavy_round(acc, 0xe84d8cd3u); break;
    case 32: acc = heavy_round(acc, 0xaf162c16u); break;
    case 33: acc = heavy_round(acc, 0x4445f47du); break;
    case 34: acc = heavy_round(acc, 0x739b2bb8u); break;
    case 35: acc = heavy_round(acc, 0x33b37bb7u); break;
    case 36: acc = heavy_round(acc, 0x74b625aau); break;
    case 37: acc = heavy_round(acc, 0x6a4a9901u); break;
    case 38: acc = heavy_round(acc, 0x4c481e6cu); break;
    case 39: acc = heavy_round(acc, 0xd0c386dbu); break;
    case 40: acc = heavy_round(acc, 0xe97b0e7eu); break;
    case 41: acc = heavy_round(acc, 0x89c2e3c5u); break;
    case 42: acc = heavy_round(acc, 0x20520260u); break;
    case 43: acc = heavy_round(acc, 0xc8eb523fu); break;
    case 44: acc = heavy_round(acc, 0x3b4e3a92u); break;
    case 45: acc = heavy_round(acc, 0x230018c9u); break;
    case 46: acc = heavy_round(acc, 0x78f14b94u); break;
    case 47: acc = heavy_round(acc, 0xe640c1e3u); break;
    case 48: acc = heavy_round(acc, 0xaa243de6u); break;
    case 49: acc = heavy_round(acc, 0x5c65bc0du); break;
    case 50: acc = heavy_round(acc, 0xd3cbae08u); break;
    case 51: acc = heavy_round(acc, 0x23e5f9c7u); break;
    case 52: acc = heavy_round(acc, 0x1510ec7au); break;
    case 53: acc = heavy_round(acc, 0x246d9191u); break;
    case 54: acc = heavy_round(acc, 0xf5281dbcu); break;
    case 55: acc = heavy_round(acc, 0x92ad5debu); break;
    case 56: acc = heavy_round(acc, 0xee9b5a4eu); break;
    case 57: acc = heavy_round(acc, 0x11eb9d55u); break;
    case 58: acc = heavy_round(acc, 0x6362ceb0u); break;
    case 59: acc = heavy_round(acc, 0xd5fd924fu); break;
    case 60: acc = heavy_round(acc, 0x6c51db62u); break;
    case 61: acc = heavy_round(acc, 0xc6922359u); break;
    case 62: acc = heavy_round(acc, 0xffa134e4u); break;
    case 63: acc = heavy_round(acc, 0x9cf57af3u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

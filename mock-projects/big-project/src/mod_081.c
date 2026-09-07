#include "heavy.h"
#include "mods.h"

int mod_081(int x)
{
    static const uint32_t local[256] = {
        0xeeb2e3e4u, 0xe3955df3u, 0x7b2e8ab6u, 0x94d6829du, 0x04b32358u, 0x4d34ced7u, 0x65861e4au, 0xc989f921u, 0xc5ecc00cu, 0x5f257bfbu, 0x1c3f411eu, 0x3b8535e5u, 0x9908ee00u, 0xceb7095fu, 0x93bd4732u, 0x1b4b7ce9u,
        0xe5ca2134u, 0xaf015b03u, 0x8d0ec486u, 0x7992522du, 0xbc000da8u, 0x234894e7u, 0x7d018d1au, 0xfb4579b1u, 0x8fbba75cu, 0xa5a11b0bu, 0x7a76b4eeu, 0x6bcaf775u, 0xbec32250u, 0x05d3916fu, 0x07f69002u, 0xf1870f79u,
        0xd345f284u, 0x8480dc13u, 0xcc84b256u, 0xe8a045bdu, 0xb7d0cbf8u, 0xae861ef7u, 0x8fb3efeau, 0xa8035e41u, 0x5081a2acu, 0xdca0be1bu, 0x0cfa5cbeu, 0xb4a75d05u, 0x2d7baaa0u, 0x7b525d7fu, 0x72454cd2u, 0x27118609u,
        0x4a9b57d4u, 0x7f04e123u, 0x9dcd5426u, 0x47195d4du, 0x106a5e48u, 0xa86e6d07u, 0x6f2a46bau, 0xa1eca6d1u, 0x0a53b1fcu, 0x7d35652bu, 0xbfa7388eu, 0x1e536695u, 0x061786f0u, 0x18d46d8fu, 0xd5d67da2u, 0xd333e099u,
        0x907f5124u, 0x39be6a33u, 0x6865a9f6u, 0xa45698ddu, 0x0351c498u, 0x2ec27f17u, 0x8431918au, 0xe96a5361u, 0x9886d54cu, 0x88b0103bu, 0xe99a485eu, 0xa3481425u, 0x36bbb740u, 0xb43ac19fu, 0xb5172272u, 0x03771f29u,
        0xeae6de74u, 0xe01e7743u, 0x670ab3c6u, 0x49f0f86du, 0x434bfee8u, 0xd3835527u, 0x9ed6d05au, 0x3d2563f1u, 0xffb00c9cu, 0x98a1bf4bu, 0x1d308c2eu, 0xc03e65b5u, 0xcacd3b90u, 0x1fa659afu, 0xe1b43b42u, 0x4ba441b9u,
        0xf106ffc4u, 0x3dd60853u, 0x77b97196u, 0x4bc17bfdu, 0x485e0d38u, 0xacf1ef37u, 0xc667032au, 0xaa06d881u, 0xbda457ecu, 0xeedb725bu, 0xf80703feu, 0x042f5b45u, 0x3af113e0u, 0x397835bfu, 0x4c9ac812u, 0x55c44849u,
        0xdb54b514u, 0xced61d63u, 0xebaee366u, 0x17e1238du, 0x9fccef88u, 0x658f4d47u, 0x096f29fau, 0x1b37b111u, 0x1978b73cu, 0x856e296bu, 0xf2faafceu, 0xa053f4d5u, 0xbd0c4030u, 0xfc5155cfu, 0xd5f7c8e2u, 0x722032d9u,
        0xd384fe64u, 0xcf4fb673u, 0x57680936u, 0x06a8ef1du, 0x3c1da5d8u, 0x4c1c6f57u, 0x4dbc44cau, 0xea20eda1u, 0x73822a8cu, 0x1eaae47bu, 0x32288f9eu, 0xf8253265u, 0x9443c080u, 0x8f12b9dfu, 0x1d383db2u, 0x27410169u,
        0x448cdbb4u, 0x4bb3d383u, 0x62a1e306u, 0xeab1deadu, 0xc5153028u, 0x639a5567u, 0x205b539au, 0x6e6b8e31u, 0x9555b1dcu, 0x5522a38bu, 0x54eda36eu, 0x315c13f5u, 0x60fc94d0u, 0x54dd61efu, 0x51092682u, 0xc1efb3f9u,
        0x2aa14d04u, 0x30b37493u, 0x985970d6u, 0xa0d4f23du, 0xe7b88e78u, 0x7349ff77u, 0x8599566au, 0x8e0092c1u, 0x01c84d2cu, 0xaba6669bu, 0x45e6eb3eu, 0xc3f19985u, 0x70dbbd20u, 0xfd124dffu, 0xff578352u, 0xe5354a89u,
        0x63375254u, 0x5b3f99a3u, 0x36cbb2a6u, 0xa02b29cdu, 0xa64cc0c8u, 0x16ac6d87u, 0xc9034d3au, 0x4d08fb51u, 0x44eefc7cu, 0x9d472dabu, 0x0af1670eu, 0x0a1ec315u, 0x0ec63970u, 0x93527e0fu, 0xe5505422u, 0x1a5ac519u,
        0xfd03eba4u, 0xa88942b3u, 0xff75a876u, 0x8a0d855du, 0xa856c718u, 0xcd829f97u, 0x4d66380au, 0x5dedc7e1u, 0x441ebfccu, 0xad55f8bbu, 0x952a16deu, 0xd05c90a5u, 0xd2e109c0u, 0x8f7ef21fu, 0xbf6098f2u, 0x60e923a9u,
        0x87fc18f4u, 0x06016fc3u, 0x07145246u, 0xba1504edu, 0x8a9ba168u, 0x0bcd95a7u, 0x5ccf16dau, 0xb157f871u, 0x8dec971cu, 0x7763c7cbu, 0x90edfaaeu, 0xe5640235u, 0xf2912e10u, 0xe5b8aa2fu, 0x193551c2u, 0xbea96639u,
        0x6554da44u, 0x815920d3u, 0x85a4b016u, 0xd61aa87du, 0x2f204fb8u, 0x49ce4fb7u, 0xf88ae9aau, 0x06308d01u, 0xaa2d826cu, 0xbf419adbu, 0x35da127eu, 0xaa2e17c5u, 0x907ba660u, 0x1660a63fu, 0x1dbb7e92u, 0xcfa48cc9u,
        0x17832f94u, 0x588155e3u, 0xa663c1e6u, 0x5e37700du, 0x0d29d208u, 0x1405cdc7u, 0xa926b07au, 0x79a08591u, 0x69f681bcu, 0x810071ebu, 0x16cb5e4eu, 0xa1f3d155u, 0x0c8572b0u, 0x3e17e64fu, 0x67201f62u, 0x56239759u,
    };
    uint32_t acc = 0xf355ce59u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 81) & 255]);
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
    case 0: acc = heavy_round(acc, 0x2b55a07eu); break;
    case 1: acc = heavy_round(acc, 0x3a084dc5u); break;
    case 2: acc = heavy_round(acc, 0x16146460u); break;
    case 3: acc = heavy_round(acc, 0x48d64c3fu); break;
    case 4: acc = heavy_round(acc, 0xc3d8ec92u); break;
    case 5: acc = heavy_round(acc, 0xb6f722c9u); break;
    case 6: acc = heavy_round(acc, 0x6478cd94u); break;
    case 7: acc = heavy_round(acc, 0x8bee5be3u); break;
    case 8: acc = heavy_round(acc, 0x49510fe6u); break;
    case 9: acc = heavy_round(acc, 0xcf58660du); break;
    case 10: acc = heavy_round(acc, 0xf3da5008u); break;
    case 11: acc = heavy_round(acc, 0x6b3033c7u); break;
    case 12: acc = heavy_round(acc, 0xf0f1de7au); break;
    case 13: acc = heavy_round(acc, 0x9145db91u); break;
    case 14: acc = heavy_round(acc, 0xe39fdfbcu); break;
    case 15: acc = heavy_round(acc, 0x580e37ebu); break;
    case 16: acc = heavy_round(acc, 0xd5626c4eu); break;
    case 17: acc = heavy_round(acc, 0xdd338755u); break;
    case 18: acc = heavy_round(acc, 0x3745b0b0u); break;
    case 19: acc = heavy_round(acc, 0x108f0c4fu); break;
    case 20: acc = heavy_round(acc, 0x46510d62u); break;
    case 21: acc = heavy_round(acc, 0x6873ad59u); break;
    case 22: acc = heavy_round(acc, 0x8f1136e4u); break;
    case 23: acc = heavy_round(acc, 0xb87194f3u); break;
    case 24: acc = heavy_round(acc, 0x674755b6u); break;
    case 25: acc = heavy_round(acc, 0x45fad19du); break;
    case 26: acc = heavy_round(acc, 0x32052658u); break;
    case 27: acc = heavy_round(acc, 0x9290f5d7u); break;
    case 28: acc = heavy_round(acc, 0x71be194au); break;
    case 29: acc = heavy_round(acc, 0x3963b821u); break;
    case 30: acc = heavy_round(acc, 0xdd15730cu); break;
    case 31: acc = heavy_round(acc, 0x3e8892fbu); break;
    case 32: acc = heavy_round(acc, 0x2e716c1eu); break;
    case 33: acc = heavy_round(acc, 0x583364e5u); break;
    case 34: acc = heavy_round(acc, 0x0b9b5100u); break;
    case 35: acc = heavy_round(acc, 0x9e98105fu); break;
    case 36: acc = heavy_round(acc, 0x79f4a232u); break;
    case 37: acc = heavy_round(acc, 0xbd5d1be9u); break;
    case 38: acc = heavy_round(acc, 0xad093434u); break;
    case 39: acc = heavy_round(acc, 0xc9c75203u); break;
    case 40: acc = heavy_round(acc, 0xe8864f86u); break;
    case 41: acc = heavy_round(acc, 0x5306612du); break;
    case 42: acc = heavy_round(acc, 0x7bded0a8u); break;
    case 43: acc = heavy_round(acc, 0xae4a7be7u); break;
    case 44: acc = heavy_round(acc, 0xdd24481au); break;
    case 45: acc = heavy_round(acc, 0xf68af8b1u); break;
    case 46: acc = heavy_round(acc, 0x69dd1a5cu); break;
    case 47: acc = heavy_round(acc, 0x4825f20bu); break;
    case 48: acc = heavy_round(acc, 0xa7df9feeu); break;
    case 49: acc = heavy_round(acc, 0x7ac0e675u); break;
    case 50: acc = heavy_round(acc, 0xd57a4550u); break;
    case 51: acc = heavy_round(acc, 0x9012586fu); break;
    case 52: acc = heavy_round(acc, 0x7f70ab02u); break;
    case 53: acc = heavy_round(acc, 0x4c7c6e79u); break;
    case 54: acc = heavy_round(acc, 0x7c95c584u); break;
    case 55: acc = heavy_round(acc, 0x86a09313u); break;
    case 56: acc = heavy_round(acc, 0x6a0afd56u); break;
    case 57: acc = heavy_round(acc, 0xbd5414bdu); break;
    case 58: acc = heavy_round(acc, 0x606c4ef8u); break;
    case 59: acc = heavy_round(acc, 0xff9dc5f7u); break;
    case 60: acc = heavy_round(acc, 0x69716aeau); break;
    case 61: acc = heavy_round(acc, 0x38a49d41u); break;
    case 62: acc = heavy_round(acc, 0x0ecbd5acu); break;
    case 63: acc = heavy_round(acc, 0x11b7551bu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_103(int x)
{
    static const uint32_t local[256] = {
        0x8aa79806u, 0xe61a0fadu, 0xd5e5ad28u, 0x84feae67u, 0x7ee9d89au, 0x01a64f31u, 0x51377edcu, 0xdc480c8bu, 0x5aa9f86eu, 0xd2ca64f5u, 0x70dcb1d0u, 0x43ccdaefu, 0xae684b82u, 0x058294f9u, 0x17bcba04u, 0xcd85fd93u,
        0xd2a065d6u, 0xc90d633du, 0x789c4b78u, 0x01289877u, 0x5bdd1b6au, 0xacef93c1u, 0xe7515a2cu, 0x33ca0f9bu, 0xe60c803eu, 0x6c382a85u, 0x43371a20u, 0x27c406ffu, 0x0b13e852u, 0x6b046b89u, 0xeee1ff54u, 0x58d862a3u,
        0x98a3e7a6u, 0xea43dacdu, 0x8913bdc8u, 0x98954687u, 0x594c523au, 0x35bc3c51u, 0xdaef497cu, 0xdef916abu, 0x04d03c0eu, 0x504d9415u, 0xaf6cd670u, 0x7356770fu, 0x2bb9f922u, 0xe2762619u, 0x880dd8a4u, 0xd1784bb3u,
        0x322f1d76u, 0x6f16765du, 0x62d10418u, 0xef05b897u, 0xae047d0au, 0x127548e1u, 0x05664cccu, 0xc52621bbu, 0xbc122bdeu, 0x4f83a1a5u, 0x81a2e6c0u, 0x42652b1fu, 0x20c77df2u, 0xaf60c4a9u, 0xe73545f4u, 0x08d6b8c3u,
        0x47ff0746u, 0x371e35edu, 0x56991e68u, 0x9c7aeea7u, 0x78129bdau, 0xf7c3b971u, 0xe94b641cu, 0xe5e230cbu, 0xcc2f4faeu, 0x3c935335u, 0x233e4b10u, 0x2d11232fu, 0xc9e976c2u, 0x1b8d4739u, 0xe18d4744u, 0xf0a4a9d3u,
        0xa610a516u, 0x6c34197du, 0xfa710cb8u, 0x3d35e8b7u, 0x8cc3aeaau, 0x68908e01u, 0x02738f6cu, 0x68fe43dbu, 0x80c4a77eu, 0x7c75a8c5u, 0xeae40360u, 0x57bb5f3fu, 0xa60ce392u, 0x0704adc9u, 0x6d8adc94u, 0xaad31ee3u,
        0x0ba0f6e6u, 0x1271210du, 0x799dcf08u, 0x81b7a6c7u, 0x48a4b57au, 0x4604c691u, 0x15f3cebcu, 0xae8b5aebu, 0x80af334eu, 0x9663a255u, 0x6c790fb0u, 0x8304df4fu, 0xa35ec462u, 0x780ff859u, 0xf2e305e4u, 0x999317f3u,
        0xfb2cfcb6u, 0x982e4c9du, 0xe4a46558u, 0x3ec128d7u, 0x5f82b04au, 0x5f896321u, 0x8221220cu, 0x5eda75fbu, 0x9e0bf31eu, 0xc3d63fe5u, 0xc9227000u, 0x1bcea35fu, 0xef4c1932u, 0x2b3826e9u, 0x9a8ac334u, 0x6f559503u,
        0x8a71b686u, 0x66049c2du, 0x8149cfa8u, 0x7d536ee7u, 0xac6a9f1au, 0x02c763b1u, 0x8e90895cu, 0x7a7c950bu, 0xa637e6eeu, 0x80868175u, 0xff452450u, 0x4b39ab6fu, 0xc681e202u, 0x23463979u, 0x9eb71484u, 0x3ecb9613u,
        0x326c2456u, 0x6ecd0fbdu, 0x1a930df8u, 0x8aaf78f7u, 0x01a981eau, 0x8ba7c841u, 0xbc1704acu, 0x6a42b81bu, 0x31d00ebeu, 0x1a6d6705u, 0x3a862ca0u, 0x06a6f77fu, 0x44ed1ed2u, 0x39433009u, 0x9adcf9d4u, 0x8ae61b23u,
        0x9f594626u, 0xbfa0a74du, 0x50c52048u, 0x08564707u, 0xf8cc58bau, 0xf45390d1u, 0x14c993fcu, 0x0f3ddf2bu, 0x74b16a8eu, 0x41c3f095u, 0x23ca88f0u, 0x1fb7878fu, 0x35bacfa2u, 0xac780a99u, 0xdbb17324u, 0x56d62433u,
        0x80b61bf6u, 0x0fd862ddu, 0xe9650698u, 0xfc08d917u, 0xc2a0238au, 0x6533bd61u, 0x7bfd374cu, 0xd2bf0a3bu, 0x0df8fa5eu, 0x99031e25u, 0x31373940u, 0x544c5b9fu, 0xe357f472u, 0xb26dc929u, 0xaf298074u, 0x360cb143u,
        0x593fa5c6u, 0x510d426du, 0x1f37c0e8u, 0xdfc82f27u, 0xf731e25au, 0xc4f14df1u, 0xfe46ee9cu, 0xb657394bu, 0xd803be2eu, 0x44e3efb5u, 0xf6313d90u, 0x5e8673afu, 0xe7718d42u, 0x06ed6bb9u, 0xb47a21c4u, 0x5c3ac253u,
        0x4ef2e396u, 0x3f1845fdu, 0xf2424f38u, 0xb1d54937u, 0x65ce952au, 0x48754281u, 0x217bb9ecu, 0x63d76c5bu, 0xb86eb5feu, 0x7c5f6545u, 0x735d95e0u, 0x04c6cfbfu, 0xfaf49a12u, 0x7bfff249u, 0x2c185714u, 0xad515763u,
        0xfb0cd566u, 0xf0126d8du, 0x77c9b188u, 0x04b12747u, 0xe5033bfau, 0x02e89b11u, 0x34b0993cu, 0x3d50a36bu, 0x7016e1ceu, 0x18ae7ed5u, 0x66a14230u, 0x29ae6fcfu, 0xc60e1ae2u, 0x89ee5cd9u, 0x47b92064u, 0xcd817073u,
        0x3a0a7b36u, 0x6454b91du, 0x2a52e7d8u, 0x0f1cc957u, 0x229cd6cau, 0x75b457a1u, 0xa03a8c8cu, 0x6d13de7bu, 0x6b19419eu, 0x254a3c65u, 0x9b214280u, 0xdc1e53dfu, 0xb02b0fb2u, 0xdf41ab69u, 0x7a517db4u, 0x313c0d83u,
    };
    uint32_t acc = 0x6e501c83u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 103) & 255]);
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
    case 0: acc = heavy_round(acc, 0x53018b58u); break;
    case 1: acc = heavy_round(acc, 0xaca016d7u); break;
    case 2: acc = heavy_round(acc, 0x04a8c64au); break;
    case 3: acc = heavy_round(acc, 0x153c8121u); break;
    case 4: acc = heavy_round(acc, 0x082da80cu); break;
    case 5: acc = heavy_round(acc, 0x40e143fbu); break;
    case 6: acc = heavy_round(acc, 0xec78691eu); break;
    case 7: acc = heavy_round(acc, 0x7c5c3de5u); break;
    case 8: acc = heavy_round(acc, 0x59245600u); break;
    case 9: acc = heavy_round(acc, 0xa38b515fu); break;
    case 10: acc = heavy_round(acc, 0xff34ef32u); break;
    case 11: acc = heavy_round(acc, 0xa54f04e9u); break;
    case 12: acc = heavy_round(acc, 0x98280934u); break;
    case 13: acc = heavy_round(acc, 0xd0362303u); break;
    case 14: acc = heavy_round(acc, 0xcc6cec86u); break;
    case 15: acc = heavy_round(acc, 0x1d4a5a2du); break;
    case 16: acc = heavy_round(acc, 0x278875a8u); break;
    case 17: acc = heavy_round(acc, 0x1aa5dce7u); break;
    case 18: acc = heavy_round(acc, 0x3f6e351au); break;
    case 19: acc = heavy_round(acc, 0x8dba01b1u); break;
    case 20: acc = heavy_round(acc, 0xb5d68f5cu); break;
    case 21: acc = heavy_round(acc, 0xf56ee30bu); break;
    case 22: acc = heavy_round(acc, 0x0d99dceeu); break;
    case 23: acc = heavy_round(acc, 0xce83ff75u); break;
    case 24: acc = heavy_round(acc, 0x43588a50u); break;
    case 25: acc = heavy_round(acc, 0x70d9d96fu); break;
    case 26: acc = heavy_round(acc, 0xfff83802u); break;
    case 27: acc = heavy_round(acc, 0x9a8c9779u); break;
    case 28: acc = heavy_round(acc, 0xe4bdda84u); break;
    case 29: acc = heavy_round(acc, 0xd607a413u); break;
    case 30: acc = heavy_round(acc, 0x2c0cda56u); break;
    case 31: acc = heavy_round(acc, 0xea7a4dbdu); break;
    case 32: acc = heavy_round(acc, 0x771333f8u); break;
    case 33: acc = heavy_round(acc, 0x025566f7u); break;
    case 34: acc = heavy_round(acc, 0x6fea97eau); break;
    case 35: acc = heavy_round(acc, 0x39b9e641u); break;
    case 36: acc = heavy_round(acc, 0xb8f68aacu); break;
    case 37: acc = heavy_round(acc, 0x6700861bu); break;
    case 38: acc = heavy_round(acc, 0xc58784beu); break;
    case 39: acc = heavy_round(acc, 0x39c26505u); break;
    case 40: acc = heavy_round(acc, 0x7d0b12a0u); break;
    case 41: acc = heavy_round(acc, 0xd10aa57fu); break;
    case 42: acc = heavy_round(acc, 0x4150f4d2u); break;
    case 43: acc = heavy_round(acc, 0xb7990e09u); break;
    case 44: acc = heavy_round(acc, 0xe9ad3fd4u); break;
    case 45: acc = heavy_round(acc, 0x5d5da923u); break;
    case 46: acc = heavy_round(acc, 0xcfff7c26u); break;
    case 47: acc = heavy_round(acc, 0xb795654du); break;
    case 48: acc = heavy_round(acc, 0xf9e6c648u); break;
    case 49: acc = heavy_round(acc, 0x3d2fb507u); break;
    case 50: acc = heavy_round(acc, 0x07aaeebau); break;
    case 51: acc = heavy_round(acc, 0x0b652ed1u); break;
    case 52: acc = heavy_round(acc, 0xb3a299fcu); break;
    case 53: acc = heavy_round(acc, 0x2ea72d2bu); break;
    case 54: acc = heavy_round(acc, 0xa01e608eu); break;
    case 55: acc = heavy_round(acc, 0xe6506e95u); break;
    case 56: acc = heavy_round(acc, 0xc720eef0u); break;
    case 57: acc = heavy_round(acc, 0xcdbeb58fu); break;
    case 58: acc = heavy_round(acc, 0x666c25a2u); break;
    case 59: acc = heavy_round(acc, 0x33bd6899u); break;
    case 60: acc = heavy_round(acc, 0x8bab3924u); break;
    case 61: acc = heavy_round(acc, 0x21693233u); break;
    case 62: acc = heavy_round(acc, 0xbfc1d1f6u); break;
    case 63: acc = heavy_round(acc, 0xb3f4a0ddu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

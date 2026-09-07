#include "heavy.h"
#include "mods.h"

int mod_014(int x)
{
    static const uint32_t local[256] = {
        0xd662a68du, 0xb1929688u, 0x5c22c847u, 0x54ee68fau, 0xcac7e411u, 0x731d4e3cu, 0x65f3d46bu, 0x4ee65eceu, 0x4a05d7d5u, 0x6686c730u, 0x985430cfu, 0x485ee7e2u, 0x5eb6c5d9u, 0x30bc7564u, 0x438ac173u, 0xd7c99836u,
        0x6197321du, 0x53e90cd8u, 0x9b7aaa57u, 0xa40743cau, 0x1489e0a1u, 0x26a8818cu, 0xfd474f7bu, 0x45bbfe9eu, 0x8bdbd565u, 0xc47c0780u, 0x5d3854dfu, 0xb3e31cb2u, 0xa9c85469u, 0xeb7e12b4u, 0x40dd9e83u, 0x4fa33206u,
        0x303ce1adu, 0xfb565728u, 0xe9735067u, 0xe362129au, 0xacdd4131u, 0x896dc8dcu, 0x9285ce8bu, 0x2918d26eu, 0xc34776f5u, 0x3e629bd0u, 0xe8d5bcefu, 0xabe7c582u, 0x9997c6f9u, 0xf0bc4404u, 0x1d7bff93u, 0x18ea7fd6u,
        0x6b2cb53du, 0x30df7578u, 0x394dba77u, 0x534bd56au, 0x85ab05c1u, 0xba42242cu, 0x9480519bu, 0xdf99da3eu, 0x3441bc85u, 0x7ddf8420u, 0x968d68ffu, 0x7a59e252u, 0x5d2e1d89u, 0x39ec0954u, 0x2256e4a3u, 0xeddc81a6u,
        0xd57faccdu, 0xd2c967c8u, 0x528ae887u, 0x7b518c3au, 0xaf1c2e51u, 0xe13a937cu, 0x6a47d8abu, 0x6b1c160eu, 0x0503a615u, 0x29d7c070u, 0x1e00590fu, 0x98667322u, 0x09d45819u, 0xf1c262a4u, 0x989f4db3u, 0x0bf63776u,
        0x5c8ec85du, 0x64992e18u, 0xe0ebda97u, 0xfa40370au, 0xe799bae1u, 0x7fac16ccu, 0x832d63bbu, 0xb8bc85deu, 0xce0633a5u, 0x367050c0u, 0xa30f8d1fu, 0x7e7a77f2u, 0x2b1376a9u, 0xc4344ff4u, 0xd9c63ac3u, 0x03f4a146u,
        0xa7f307edu, 0x5f13c868u, 0x847190a7u, 0x5624d5dau, 0x2bccab71u, 0xc02bae1cu, 0x66c1f2cbu, 0x70d829aeu, 0x2a026535u, 0x350e3510u, 0xc5dc052fu, 0x7442f0c2u, 0x52b47939u, 0x2e76d144u, 0x5f7cabd3u, 0x89d4bf16u,
        0xa9856b7du, 0x803e36b8u, 0xe15d0ab7u, 0xcc4c68aau, 0x469e0001u, 0xc68e596cu, 0xc4d685dbu, 0xc70c017eu, 0x45f13ac5u, 0xa4566d60u, 0xb2c6c13fu, 0x60acdd92u, 0xa8c05fc9u, 0xcefee694u, 0xd3b3a0e3u, 0x44d390e6u,
        0x2d5ef30du, 0x1b5d7908u, 0xb02f48c7u, 0x2143ef7au, 0x6136b891u, 0xffe918bcu, 0x857c1cebu, 0x4a350d4eu, 0x710bb455u, 0x402df9b0u, 0x3270c14fu, 0x99e53e62u, 0x7b802a59u, 0xb5818fe4u, 0x209c19f3u, 0x9f6e16b6u,
        0x69d89e9du, 0x68f68f58u, 0xcda94ad7u, 0x70d86a4au, 0x92ffd521u, 0x7290ec0cu, 0xd903b7fbu, 0xb4704d1eu, 0xaccad1e5u, 0x51b9da00u, 0xb9bb055fu, 0xb5591332u, 0xcf7cd8e9u, 0xb2f3cd34u, 0x80a71703u, 0x97615086u,
        0x8f8b6e2du, 0xd6ce79a8u, 0x4acc10e7u, 0xfe16d91au, 0x71a255b1u, 0x0e1ad35cu, 0x47fe570bu, 0xbb1ac0eeu, 0x3ce79375u, 0xff5f0e50u, 0x79c68d6fu, 0x57b55c02u, 0xef7f6b79u, 0xa98a9e84u, 0x8e859813u, 0x8daa3e56u,
        0x595061bdu, 0x57ea37f8u, 0x7cd89af7u, 0x034c3beau, 0xa1073a41u, 0xfb5bceacu, 0xc33cfa1bu, 0xded168beu, 0x375af905u, 0x9cc296a0u, 0x6ff4597fu, 0x04e718d2u, 0xfc90e209u, 0xdcbb03d4u, 0x55289d23u, 0x1685e026u,
        0x9c40794du, 0xb48eca48u, 0x0d4fe907u, 0x820592bau, 0x635782d1u, 0xec68ddfcu, 0xb3d0a12bu, 0x3b71448eu, 0x145e0295u, 0xfac972f0u, 0x75e5698fu, 0xf01b49a2u, 0x7dfa3c99u, 0x4139fd24u, 0x5fc12633u, 0xc97135f6u,
        0xd7b4b4ddu, 0xda413098u, 0x09f2fb17u, 0x130fdd8au, 0x28fc2f61u, 0x6c97014cu, 0x0b0a4c3bu, 0x5817545eu, 0x3e69b025u, 0xb798a340u, 0x517abd9fu, 0xcbbeee72u, 0xf1447b29u, 0xccfc8a74u, 0xc9c03343u, 0x11293fc6u,
        0xc546146du, 0x2bc66ae8u, 0xf4c2d127u, 0xb6781c5au, 0x209e3ff1u, 0x307b389cu, 0x527afb4bu, 0xf720982eu, 0xa23701b5u, 0x8e952790u, 0xc4d555afu, 0x997f0742u, 0x5a389db9u, 0xc737abc4u, 0x4ed6c453u, 0xfbaafd96u,
        0xe8cd97fdu, 0xd1237938u, 0xd4006b37u, 0xa38b4f2au, 0xc726b481u, 0x65ea83ecu, 0xbbf3ae5bu, 0xe62a0ffeu, 0x3ebef745u, 0xa863ffe0u, 0x9e5631bfu, 0x7a489412u, 0xd2dfa449u, 0x18606114u, 0x5af5d963u, 0x0a336f66u,
    };
    uint32_t acc = 0xaa60b266u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 14) & 255]);
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
    case 0: acc = heavy_round(acc, 0xa35aaffdu); break;
    case 1: acc = heavy_round(acc, 0xd9ddb138u); break;
    case 2: acc = heavy_round(acc, 0xefc54337u); break;
    case 3: acc = heavy_round(acc, 0x929a472au); break;
    case 4: acc = heavy_round(acc, 0x19b94c81u); break;
    case 5: acc = heavy_round(acc, 0xd7ec3becu); break;
    case 6: acc = heavy_round(acc, 0x2d5a065bu); break;
    case 7: acc = heavy_round(acc, 0x076c87feu); break;
    case 8: acc = heavy_round(acc, 0x22ef0f45u); break;
    case 9: acc = heavy_round(acc, 0xc06537e0u); break;
    case 10: acc = heavy_round(acc, 0xcab609bfu); break;
    case 11: acc = heavy_round(acc, 0x03368c12u); break;
    case 12: acc = heavy_round(acc, 0xcfc53c49u); break;
    case 13: acc = heavy_round(acc, 0x42991914u); break;
    case 14: acc = heavy_round(acc, 0x11273163u); break;
    case 15: acc = heavy_round(acc, 0x8bc4e766u); break;
    case 16: acc = heavy_round(acc, 0x6297578du); break;
    case 17: acc = heavy_round(acc, 0x17c59388u); break;
    case 18: acc = heavy_round(acc, 0x9287a147u); break;
    case 19: acc = heavy_round(acc, 0x77836dfau); break;
    case 20: acc = heavy_round(acc, 0x69572511u); break;
    case 21: acc = heavy_round(acc, 0xed499b3cu); break;
    case 22: acc = heavy_round(acc, 0xc5e1bd6bu); break;
    case 23: acc = heavy_round(acc, 0xb9d133ceu); break;
    case 24: acc = heavy_round(acc, 0x15d0a8d5u); break;
    case 25: acc = heavy_round(acc, 0xf8196430u); break;
    case 26: acc = heavy_round(acc, 0xbc5429cfu); break;
    case 27: acc = heavy_round(acc, 0x6a948ce2u); break;
    case 28: acc = heavy_round(acc, 0x982e26d9u); break;
    case 29: acc = heavy_round(acc, 0x25726264u); break;
    case 30: acc = heavy_round(acc, 0x5235ca73u); break;
    case 31: acc = heavy_round(acc, 0x9d0f0d36u); break;
    case 32: acc = heavy_round(acc, 0x7fbc231du); break;
    case 33: acc = heavy_round(acc, 0x1ccf49d8u); break;
    case 34: acc = heavy_round(acc, 0x8079c357u); break;
    case 35: acc = heavy_round(acc, 0x59f188cau); break;
    case 36: acc = heavy_round(acc, 0x65ed61a1u); break;
    case 37: acc = heavy_round(acc, 0x871c0e8cu); break;
    case 38: acc = heavy_round(acc, 0xb253787bu); break;
    case 39: acc = heavy_round(acc, 0x50b0139eu); break;
    case 40: acc = heavy_round(acc, 0x679ee665u); break;
    case 41: acc = heavy_round(acc, 0x4f29e480u); break;
    case 42: acc = heavy_round(acc, 0x431a8ddfu); break;
    case 43: acc = heavy_round(acc, 0x141601b2u); break;
    case 44: acc = heavy_round(acc, 0x309bf569u); break;
    case 45: acc = heavy_round(acc, 0xcf633fb4u); break;
    case 46: acc = heavy_round(acc, 0x886ee783u); break;
    case 47: acc = heavy_round(acc, 0xf619e706u); break;
    case 48: acc = heavy_round(acc, 0x9d6212adu); break;
    case 49: acc = heavy_round(acc, 0x20bfd428u); break;
    case 50: acc = heavy_round(acc, 0x0c9ca967u); break;
    case 51: acc = heavy_round(acc, 0xd6f1979au); break;
    case 52: acc = heavy_round(acc, 0x37250231u); break;
    case 53: acc = heavy_round(acc, 0xfef895dcu); break;
    case 54: acc = heavy_round(acc, 0xdd40378bu); break;
    case 55: acc = heavy_round(acc, 0x7b66276eu); break;
    case 56: acc = heavy_round(acc, 0x0e12c7f5u); break;
    case 57: acc = heavy_round(acc, 0xf5fbb8d0u); break;
    case 58: acc = heavy_round(acc, 0x122a35efu); break;
    case 59: acc = heavy_round(acc, 0x3e67ea82u); break;
    case 60: acc = heavy_round(acc, 0xb5d7a7f9u); break;
    case 61: acc = heavy_round(acc, 0xcca0b104u); break;
    case 62: acc = heavy_round(acc, 0xf0838893u); break;
    case 63: acc = heavy_round(acc, 0x31e274d6u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

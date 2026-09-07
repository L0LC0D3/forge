#include "heavy.h"
#include "mods.h"

int mod_099(int x)
{
    static const uint32_t local[256] = {
        0xa92745cau, 0x49f5faa1u, 0x7981d38cu, 0xcafc797bu, 0x00ab209eu, 0xa38c8f65u, 0x8c917980u, 0x33bb1edfu, 0x6f035eb2u, 0x76b7ae69u, 0x7b81a4b4u, 0x3f380883u, 0x9a769406u, 0xc804dbadu, 0xc81a0928u, 0xaa4f5a67u,
        0x548a949au, 0x41b7db31u, 0x3be39adcu, 0x162d788bu, 0x4058746eu, 0x1e0eb0f5u, 0xe59c8dd0u, 0x1f3306efu, 0xd4208782u, 0x33c5a0f9u, 0x53ec5604u, 0x1018e993u, 0xca1e61d6u, 0x28db2f3du, 0x4157a778u, 0xd5544477u,
        0x549cd76au, 0x0f941fc1u, 0x2574762cu, 0x14ba7b9bu, 0xa949fc3eu, 0xf1bf7685u, 0x5f5df620u, 0x8d6532ffu, 0xb7cb2452u, 0x0e3a7789u, 0xed689b54u, 0x23d64ea3u, 0x1f90e3a6u, 0xccb4a6cdu, 0xe61619c8u, 0x3e5bf287u,
        0xb8eb0e3au, 0xabb3c851u, 0x2649657cu, 0x55b482abu, 0x455cb80eu, 0xacd7e015u, 0xe8bab270u, 0xddf2a30fu, 0x1b303522u, 0x035f3219u, 0x3aab74a4u, 0xeba137b3u, 0xe04b1976u, 0x08ea425du, 0x81da6018u, 0x39276497u,
        0xa842390au, 0xbc7fd4e1u, 0x87b768ccu, 0x706c8dbbu, 0x09ada7deu, 0x4fd0eda5u, 0xbdd7c2c0u, 0xdcbc571fu, 0xfebcb9f2u, 0x86bcd0a9u, 0xafa9e1f4u, 0xe8eaa4c3u, 0xa50a0346u, 0xed1501edu, 0xd5697a68u, 0x0db79aa7u,
        0x30af57dau, 0x26a14571u, 0x3c53801cu, 0x14739ccbu, 0xa699cbaeu, 0xdd639f35u, 0xb81a2710u, 0xd1e34f2fu, 0x321db2c2u, 0x121c5339u, 0x9198e344u, 0xbd6395d3u, 0x29caa116u, 0xd30de57du, 0xe6c868b8u, 0x084d94b7u,
        0x177f6aaau, 0x9d011a01u, 0x2ff2ab6cu, 0x199aafdbu, 0x57be237eu, 0xea88f4c5u, 0x9e26df60u, 0x91c88b3fu, 0x24401f92u, 0xb586b9c9u, 0x46ed7894u, 0x3afd0ae3u, 0x1dc9f2e6u, 0xeeeded0du, 0x513c2b08u, 0x896a52c7u,
        0xa93f717au, 0x30c85291u, 0x97a9eabcu, 0x8ff2c6ebu, 0xb3f7af4eu, 0x2e79ee55u, 0x73e2ebb0u, 0x8d0d0b4fu, 0xb3510062u, 0xa7450459u, 0xa75ca1e4u, 0x73e803f3u, 0xf384f8b6u, 0xdf0e189du, 0x9549c158u, 0x15ced4d7u,
        0x89bc6c4au, 0xe15fef21u, 0x41ce3e0cu, 0xcfcce1fbu, 0x7d636f1eu, 0x12af8be5u, 0xca734c00u, 0xe091cf5fu, 0xfcbd5532u, 0xd3e032e9u, 0x4bdb5f34u, 0xca958103u, 0xb0b8b286u, 0x3c07682du, 0x68b62ba8u, 0x667c1ae7u,
        0x84035b1au, 0x2c70efb1u, 0xe5f4a55cu, 0x89ba010bu, 0x715e62eeu, 0x42e2cd75u, 0x103d0050u, 0x6577d76fu, 0x2d321e02u, 0x6e214579u, 0xde9eb084u, 0x01b68213u, 0xbe622056u, 0x28b2dbbdu, 0x068669f8u, 0x78b324f7u,
        0x5a613deau, 0x9de45441u, 0x74f220acu, 0xd68b241bu, 0x18858abeu, 0x3d0cb305u, 0xe0e508a0u, 0xc120237fu, 0x509c5ad2u, 0x7f113c09u, 0x6b1b95d4u, 0x4c3c0723u, 0xb8be4226u, 0xe229734du, 0x7eff7c48u, 0x9df4f307u,
        0x966314bau, 0x5fe31cd1u, 0x68dbaffcu, 0x47514b2bu, 0x96b5e68eu, 0xe1663c95u, 0x555064f0u, 0x752bb38fu, 0x22290ba2u, 0x75f91699u, 0xae070f24u, 0x5d571033u, 0x3f4a17f6u, 0x4fc42eddu, 0x07a66298u, 0x8c028517u,
        0x58d5df8au, 0xcad64961u, 0x1506534cu, 0xf55d763bu, 0x7b0c765eu, 0x02686a25u, 0x53a41540u, 0xef7b879fu, 0xdc453072u, 0xb861d529u, 0x65561c74u, 0x78789d43u, 0xc4c2a1c6u, 0x931c0e6du, 0x4b401ce8u, 0x6cdcdb27u,
        0x29c69e5au, 0xf566d9f1u, 0xf6070a9cu, 0x9240a54bu, 0x8fe63a2eu, 0xf4cc3bb5u, 0xdf451990u, 0x9a309fafu, 0x089dc942u, 0x321477b9u, 0xa03dbdc4u, 0x8151ae53u, 0x5f24df96u, 0x980a11fdu, 0xb9d1ab38u, 0xeec4f537u,
        0xc882512au, 0x447dce81u, 0x01b2d5ecu, 0x77cbd85bu, 0xaae031feu, 0x1f8ab145u, 0x68d871e0u, 0xebabfbbfu, 0x501fd612u, 0xe519fe49u, 0x0f32f314u, 0x0bd34363u, 0x97add166u, 0xa4a7398du, 0xd8a00d88u, 0x543bd347u,
        0xfb95f7fau, 0xfb442711u, 0xf71eb53cu, 0xb8100f6bu, 0x7cd75dceu, 0x8bdccad5u, 0x1e431e30u, 0x768e9bcfu, 0x4af856e2u, 0x79bb68d9u, 0x53eabc64u, 0x6c2e5c73u, 0x3ada7736u, 0xe94c851du, 0x923043d8u, 0x84027557u,
    };
    uint32_t acc = 0x4dcc3457u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 99) & 255]);
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
    case 0: acc = heavy_round(acc, 0x14cf4be4u); break;
    case 1: acc = heavy_round(acc, 0x4c76a5f3u); break;
    case 2: acc = heavy_round(acc, 0x994f32b6u); break;
    case 3: acc = heavy_round(acc, 0x876f0a9du); break;
    case 4: acc = heavy_round(acc, 0x64a20b58u); break;
    case 5: acc = heavy_round(acc, 0x04c696d7u); break;
    case 6: acc = heavy_round(acc, 0x559d464au); break;
    case 7: acc = heavy_round(acc, 0x1ca70121u); break;
    case 8: acc = heavy_round(acc, 0x5796280cu); break;
    case 9: acc = heavy_round(acc, 0x6c2fc3fbu); break;
    case 10: acc = heavy_round(acc, 0xe674e91eu); break;
    case 11: acc = heavy_round(acc, 0x492ebde5u); break;
    case 12: acc = heavy_round(acc, 0x1ed4d600u); break;
    case 13: acc = heavy_round(acc, 0x8081d15fu); break;
    case 14: acc = heavy_round(acc, 0xeeb96f32u); break;
    case 15: acc = heavy_round(acc, 0x1a0984e9u); break;
    case 16: acc = heavy_round(acc, 0x54a08934u); break;
    case 17: acc = heavy_round(acc, 0xe554a303u); break;
    case 18: acc = heavy_round(acc, 0x85f96c86u); break;
    case 19: acc = heavy_round(acc, 0x046cda2du); break;
    case 20: acc = heavy_round(acc, 0x2348f5a8u); break;
    case 21: acc = heavy_round(acc, 0x166c5ce7u); break;
    case 22: acc = heavy_round(acc, 0x9f82b51au); break;
    case 23: acc = heavy_round(acc, 0x19c481b1u); break;
    case 24: acc = heavy_round(acc, 0x815f0f5cu); break;
    case 25: acc = heavy_round(acc, 0x2e5d630bu); break;
    case 26: acc = heavy_round(acc, 0x78b65ceeu); break;
    case 27: acc = heavy_round(acc, 0x19f67f75u); break;
    case 28: acc = heavy_round(acc, 0x37290a50u); break;
    case 29: acc = heavy_round(acc, 0x6570596fu); break;
    case 30: acc = heavy_round(acc, 0xe29cb802u); break;
    case 31: acc = heavy_round(acc, 0x27e71779u); break;
    case 32: acc = heavy_round(acc, 0xa1565a84u); break;
    case 33: acc = heavy_round(acc, 0xacc62413u); break;
    case 34: acc = heavy_round(acc, 0x7ab95a56u); break;
    case 35: acc = heavy_round(acc, 0x243ccdbdu); break;
    case 36: acc = heavy_round(acc, 0x64f3b3f8u); break;
    case 37: acc = heavy_round(acc, 0x09bbe6f7u); break;
    case 38: acc = heavy_round(acc, 0x271f17eau); break;
    case 39: acc = heavy_round(acc, 0xf2646641u); break;
    case 40: acc = heavy_round(acc, 0x889f0aacu); break;
    case 41: acc = heavy_round(acc, 0x958f061bu); break;
    case 42: acc = heavy_round(acc, 0x69c404beu); break;
    case 43: acc = heavy_round(acc, 0x2bd4e505u); break;
    case 44: acc = heavy_round(acc, 0xa6fb92a0u); break;
    case 45: acc = heavy_round(acc, 0x4541257fu); break;
    case 46: acc = heavy_round(acc, 0x5f1574d2u); break;
    case 47: acc = heavy_round(acc, 0x05938e09u); break;
    case 48: acc = heavy_round(acc, 0x2e65bfd4u); break;
    case 49: acc = heavy_round(acc, 0xddbc2923u); break;
    case 50: acc = heavy_round(acc, 0x7bcbfc26u); break;
    case 51: acc = heavy_round(acc, 0x6bf7e54du); break;
    case 52: acc = heavy_round(acc, 0xe1e74648u); break;
    case 53: acc = heavy_round(acc, 0xb8363507u); break;
    case 54: acc = heavy_round(acc, 0x5dff6ebau); break;
    case 55: acc = heavy_round(acc, 0x98afaed1u); break;
    case 56: acc = heavy_round(acc, 0x0f6b19fcu); break;
    case 57: acc = heavy_round(acc, 0x3ad5ad2bu); break;
    case 58: acc = heavy_round(acc, 0x457ae08eu); break;
    case 59: acc = heavy_round(acc, 0xa702ee95u); break;
    case 60: acc = heavy_round(acc, 0x2f316ef0u); break;
    case 61: acc = heavy_round(acc, 0x2995358fu); break;
    case 62: acc = heavy_round(acc, 0x0750a5a2u); break;
    case 63: acc = heavy_round(acc, 0xea57e899u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

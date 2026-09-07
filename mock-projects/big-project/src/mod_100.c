#include "heavy.h"
#include "mods.h"

int mod_100(int x)
{
    static const uint32_t local[256] = {
        0xb4c32a6fu, 0x52175502u, 0x00af1079u, 0xa1b3ff84u, 0x1e458513u, 0x77d74756u, 0x102fd6bdu, 0x16e128f8u, 0x1c68d7f7u, 0x8aed54eau, 0x252b7f41u, 0xe1b14facu, 0x1ffa871bu, 0xdf9f91beu, 0x67290e05u, 0x3397a7a0u,
        0xa68c367fu, 0xe1ab51d2u, 0xf23dc709u, 0x96c0a4d4u, 0xbe97ca23u, 0x22192926u, 0x02d12e4du, 0x3f05fb48u, 0x5be36607u, 0x7850ebbau, 0x9ba107d1u, 0x10229efcu, 0x60256e2bu, 0xca6dad8eu, 0x2a055795u, 0x0d26c3f0u,
        0x7be8868fu, 0x50d1c2a2u, 0xec746199u, 0x252bde24u, 0x4baf9333u, 0x68fabef6u, 0x1f46a9ddu, 0x9148a198u, 0x5559b817u, 0x4b95768au, 0x33baf461u, 0x37c5024cu, 0xc9c6593bu, 0x39d1fd5eu, 0x953a4525u, 0xc88e3440u,
        0x2eb91a9fu, 0xf5f7a772u, 0xc0dbe029u, 0x86eaab74u, 0x54fde043u, 0x9b3908c6u, 0xb329496du, 0xf46e1be8u, 0x3eccce27u, 0x28c7f55au, 0xf02244f1u, 0xd12d799cu, 0xda6e484bu, 0x5429812eu, 0xa980d6b5u, 0x2532f890u,
        0xb51ef2afu, 0x76ca0042u, 0xc73d42b9u, 0x47320cc4u, 0x0a33b153u, 0xaad10696u, 0xd6520cfdu, 0x147b6a38u, 0xd27da837u, 0x6b35682au, 0x21bff981u, 0xce3104ecu, 0xb7ee3b5bu, 0x4b1138feu, 0x79d20c45u, 0x4fba10e0u,
        0x117b0ebfu, 0x9835cd12u, 0x6da18949u, 0x92770214u, 0x4b420663u, 0xfcffb866u, 0xfad9f48du, 0xb2b58c88u, 0x5eed4647u, 0x756acefau, 0xf7bd1211u, 0xe9e4a43cu, 0x4057326bu, 0x2b6624ceu, 0xbb66e5d5u, 0x32087d30u,
        0x626e6ecfu, 0x0e680de2u, 0xc851b3d9u, 0x866e8b64u, 0xb859df73u, 0x3a421e36u, 0x7d1a001du, 0xf5a182d8u, 0xd6dca857u, 0x813529cau, 0x0f828ea1u, 0xf89d578cu, 0x19fa2d7bu, 0xad45449eu, 0x55b86365u, 0xc3433d80u,
        0xf2da12dfu, 0x4ccdc2b2u, 0x21d6c269u, 0x820da8b4u, 0xc1ec3c83u, 0x1e553806u, 0x33ab2fadu, 0xb9044d28u, 0xe14cce67u, 0x6fa1789au, 0x04b96f31u, 0x37f01edcu, 0xc3682c8bu, 0x040b986eu, 0xf27f84f5u, 0x57cf51d0u,
        0x49defaefu, 0x5613eb82u, 0x8af9b4f9u, 0x75895a04u, 0xb8aa1d93u, 0x483605d6u, 0xff66833du, 0xdde2eb78u, 0xe97eb877u, 0x98fcbb6au, 0x014ab3c1u, 0x9eb1fa2cu, 0xa3722f9bu, 0xae56203eu, 0x8db54a85u, 0xf151ba20u,
        0x3ade26ffu, 0x8c278852u, 0x6ac38b89u, 0x32569f54u, 0xdd8482a3u, 0x0a2187a6u, 0x5b64facdu, 0x9a825dc8u, 0x2ef36687u, 0x9cd3f23au, 0x4d5f5c51u, 0x2cf7e97cu, 0x192936abu, 0x4601dc0eu, 0x0592b415u, 0x8eaf7670u,
        0xf578970fu, 0x80359922u, 0x0e7d4619u, 0xbb2a78a4u, 0x71ac6bb3u, 0x3994bd76u, 0xecff965du, 0xca67a418u, 0xd56bd897u, 0x31f41d0au, 0xdf6068e1u, 0x3c16ecccu, 0x8bde41bbu, 0x502bcbdeu, 0xaa90c1a5u, 0x7c0d86c0u,
        0x158f4b1fu, 0xc2ab1df2u, 0x39afe4a9u, 0x93f9e5f4u, 0xc692d8c3u, 0xff4ca746u, 0x13cf55edu, 0x3e57be68u, 0xf4e90ea7u, 0xf66a3bdau, 0xebf6d971u, 0xcea4041cu, 0x7b2250cbu, 0x0d30efaeu, 0xcf687335u, 0xa2d0eb10u,
        0xb343432fu, 0xb33516c2u, 0xb6246739u, 0x11f9e744u, 0x4de8c9d3u, 0xa7464516u, 0x79ad397du, 0x0c57acb8u, 0xa9ac08b7u, 0x3f834eaau, 0x760bae01u, 0xe0742f6cu, 0x8ec663dbu, 0x48ae477eu, 0x5912c8c5u, 0xd99ea360u,
        0x72f57f3fu, 0x50c08392u, 0xe3e3cdc9u, 0xab9f7c94u, 0xa99f3ee3u, 0x70be96e6u, 0xa2b2410du, 0xdfac6f08u, 0x2435c6c7u, 0xe9cc557au, 0xdec7e691u, 0xb69c6ebcu, 0xa6db7aebu, 0x2980d34eu, 0x4ec8c255u, 0x345bafb0u,
        0x9546ff4fu, 0x097a6462u, 0x49371859u, 0x489fa5e4u, 0xbbe737f3u, 0x5e329cb6u, 0x7d376c9du, 0x48db0558u, 0xb94748d7u, 0x2912504au, 0x75948321u, 0x2f71c20cu, 0xebb295fbu, 0x01c5931eu, 0x6a035fe5u, 0x542d1000u,
        0x0718c35fu, 0x8acfb932u, 0x22a746e9u, 0x91ef6334u, 0xb731b503u, 0x055f5686u, 0xf1d5bc2du, 0x0da86fa8u, 0xf1e18ee7u, 0x58623f1au, 0x081a83b1u, 0x1289295cu, 0xdddcb50bu, 0x1ed986eeu, 0xa67ba175u, 0xb777c450u,
    };
    uint32_t acc = 0x99bbdf50u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 100) & 255]);
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
    case 0: acc = heavy_round(acc, 0xa66450dfu); break;
    case 1: acc = heavy_round(acc, 0x8d86e8b2u); break;
    case 2: acc = heavy_round(acc, 0xe661b069u); break;
    case 3: acc = heavy_round(acc, 0x15efbeb4u); break;
    case 4: acc = heavy_round(acc, 0x7f2b5a83u); break;
    case 5: acc = heavy_round(acc, 0xce7dbe06u); break;
    case 6: acc = heavy_round(acc, 0x611dfdadu); break;
    case 7: acc = heavy_round(acc, 0xe3ecc328u); break;
    case 8: acc = heavy_round(acc, 0x341ecc67u); break;
    case 9: acc = heavy_round(acc, 0x1d7f5e9au); break;
    case 10: acc = heavy_round(acc, 0xb8a21d31u); break;
    case 11: acc = heavy_round(acc, 0x0e14f4dcu); break;
    case 12: acc = heavy_round(acc, 0x368b0a8bu); break;
    case 13: acc = heavy_round(acc, 0x6f44de6eu); break;
    case 14: acc = heavy_round(acc, 0x0c4c12f5u); break;
    case 15: acc = heavy_round(acc, 0x05c687d0u); break;
    case 16: acc = heavy_round(acc, 0xe4f0b8efu); break;
    case 17: acc = heavy_round(acc, 0xd5ae9182u); break;
    case 18: acc = heavy_round(acc, 0xd9f822f9u); break;
    case 19: acc = heavy_round(acc, 0x9648f004u); break;
    case 20: acc = heavy_round(acc, 0x5e28bb93u); break;
    case 21: acc = heavy_round(acc, 0x90980bd6u); break;
    case 22: acc = heavy_round(acc, 0x50c4d13du); break;
    case 23: acc = heavy_round(acc, 0x30c0e178u); break;
    case 24: acc = heavy_round(acc, 0x94c83677u); break;
    case 25: acc = heavy_round(acc, 0xe1ec216au); break;
    case 26: acc = heavy_round(acc, 0x0e16e1c1u); break;
    case 27: acc = heavy_round(acc, 0x1d64502cu); break;
    case 28: acc = heavy_round(acc, 0x86c48d9bu); break;
    case 29: acc = heavy_round(acc, 0x38f8e63eu); break;
    case 30: acc = heavy_round(acc, 0xc8dd5885u); break;
    case 31: acc = heavy_round(acc, 0x45ee7020u); break;
    case 32: acc = heavy_round(acc, 0xbd5764ffu); break;
    case 33: acc = heavy_round(acc, 0x8903ae52u); break;
    case 34: acc = heavy_round(acc, 0xaf157989u); break;
    case 35: acc = heavy_round(acc, 0x8d53b554u); break;
    case 36: acc = heavy_round(acc, 0x7922a0a3u); break;
    case 37: acc = heavy_round(acc, 0xdf1d0da6u); break;
    case 38: acc = heavy_round(acc, 0x798ec8cdu); break;
    case 39: acc = heavy_round(acc, 0xe8b5d3c8u); break;
    case 40: acc = heavy_round(acc, 0x2e946487u); break;
    case 41: acc = heavy_round(acc, 0x8b34d83au); break;
    case 42: acc = heavy_round(acc, 0x79ef0a51u); break;
    case 43: acc = heavy_round(acc, 0xad97bf7cu); break;
    case 44: acc = heavy_round(acc, 0x368b14abu); break;
    case 45: acc = heavy_round(acc, 0x706e220eu); break;
    case 46: acc = heavy_round(acc, 0x26f64215u); break;
    case 47: acc = heavy_round(acc, 0xc951ac70u); break;
    case 48: acc = heavy_round(acc, 0xd739550fu); break;
    case 49: acc = heavy_round(acc, 0x50b33f22u); break;
    case 50: acc = heavy_round(acc, 0xeb02b419u); break;
    case 51: acc = heavy_round(acc, 0xd5c50ea4u); break;
    case 52: acc = heavy_round(acc, 0x094a09b3u); break;
    case 53: acc = heavy_round(acc, 0x2789c376u); break;
    case 54: acc = heavy_round(acc, 0x38d4e45du); break;
    case 55: acc = heavy_round(acc, 0x3f509a18u); break;
    case 56: acc = heavy_round(acc, 0x9d445697u); break;
    case 57: acc = heavy_round(acc, 0xe826830au); break;
    case 58: acc = heavy_round(acc, 0x2a9396e1u); break;
    case 59: acc = heavy_round(acc, 0xf00442ccu); break;
    case 60: acc = heavy_round(acc, 0xa52f9fbbu); break;
    case 61: acc = heavy_round(acc, 0x32c191deu); break;
    case 62: acc = heavy_round(acc, 0x2f0fcfa5u); break;
    case 63: acc = heavy_round(acc, 0x34153cc0u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

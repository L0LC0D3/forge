#include "heavy.h"
#include "mods.h"

int mod_118(int x)
{
    static const uint32_t local[256] = {
        0xd3378c55u, 0xcc77f1b0u, 0x0302594fu, 0x0bd9f662u, 0xbe3d8259u, 0x222f07e4u, 0x7b3b31f3u, 0xf5124eb6u, 0xa97f769du, 0x367f8758u, 0x086de2d7u, 0x9964224au, 0x45682d21u, 0xaced640cu, 0x5f85cffbu, 0xb69b851eu,
        0x794ca9e5u, 0x8861d200u, 0xa5129d5fu, 0x675bcb32u, 0xe6f030e9u, 0x70df4534u, 0xaf6c2f03u, 0xd6f38886u, 0x8448462du, 0x9a7571a8u, 0xf916a8e7u, 0x6870911au, 0x8f80adb1u, 0xc1754b5cu, 0x27666f0bu, 0xe4f3f8eeu,
        0x613f6b75u, 0xefe50650u, 0x4964256fu, 0x85461402u, 0xe128c379u, 0x00341684u, 0x32f0b013u, 0xeaaa7656u, 0xa0a339bdu, 0x112f2ff8u, 0x982932f7u, 0x5af3f3eau, 0xdfdb9241u, 0x5f3446acu, 0xcd0b121bu, 0xd3d8a0beu,
        0x0108d105u, 0x36a68ea0u, 0x4d57f17fu, 0xc985d0d2u, 0x2df03a09u, 0xf3a27bd4u, 0x70b9b523u, 0xa4741826u, 0x33a9514du, 0x42f1c248u, 0xef268107u, 0x527b4abau, 0xd8a1dad1u, 0x183f55fcu, 0x1984b92bu, 0x7f267c8eu,
        0x30e1da95u, 0x0d8b6af0u, 0xea8f018fu, 0x474801a2u, 0xb48f9499u, 0x1fdf7524u, 0x53f83e33u, 0x7bcd6df6u, 0x1cb38cddu, 0xfd422898u, 0x6bcf9317u, 0xc7d3958au, 0x4a3c8761u, 0x57eb794cu, 0x5e24643bu, 0x4dfa8c5eu,
        0xbb438825u, 0xf2b89b40u, 0x46ea559fu, 0x90f9a672u, 0x528fd329u, 0x5ae00274u, 0x581d4b43u, 0xbb7377c6u, 0x755aec6du, 0x82e562e8u, 0xf0256927u, 0x9b09d45au, 0xc35497f1u, 0xb2cdb09cu, 0x847b134bu, 0xe2b1d02eu,
        0xece6d9b5u, 0x81931f90u, 0x848aedafu, 0x8847bf42u, 0x6bb9f5b9u, 0xcbd923c4u, 0x98d9dc53u, 0x51633596u, 0x21786ffdu, 0xdbe07138u, 0xe2690337u, 0xe36b072au, 0x20d30c81u, 0x36bafbecu, 0x1e59c65bu, 0xeae947feu,
        0x24c4cf45u, 0xc2bff7e0u, 0xd1d1c9bfu, 0x2e1f4c12u, 0x7a16fc49u, 0x3b3fd914u, 0xe21ef163u, 0x9ed9a766u, 0x5f25178du, 0x25785388u, 0x3d1b6147u, 0xbf842dfau, 0x1de0e511u, 0xbac85b3cu, 0x75d17d6bu, 0xef7df3ceu,
        0x641668d5u, 0x7c242430u, 0x795fe9cfu, 0x72ad4ce2u, 0x9defe6d9u, 0x62c92264u, 0xc01d8a73u, 0x4853cd36u, 0x56b9e31du, 0xe23209d8u, 0x9efd8357u, 0x252248cau, 0xe3e721a1u, 0x2f4ace8cu, 0x9d33387bu, 0x248cd39eu,
        0xde54a665u, 0x80e4a480u, 0xf2164ddfu, 0x055ec1b2u, 0x2dcdb569u, 0x3d69ffb4u, 0x8f46a783u, 0x058ea706u, 0xaacfd2adu, 0x49d29428u, 0x5b106967u, 0xb152579au, 0x9a8ec231u, 0xedd755dcu, 0x7f0ff78bu, 0x3972e76eu,
        0x893887f5u, 0x016678d0u, 0xef15f5efu, 0x24e0aa82u, 0x467967f9u, 0x57577104u, 0x8c4b4893u, 0x718734d6u, 0x083fe63du, 0x995ef278u, 0x88951377u, 0x78615a6au, 0xf7c0c6c1u, 0x0942f12cu, 0xee38ba9bu, 0x28cd2f3eu,
        0xacbb0d85u, 0xdb4ea120u, 0x6fbfe1ffu, 0x6f200752u, 0x5afbfe89u, 0x1e067654u, 0xe41c6da3u, 0xda7a76a6u, 0xb6231dcdu, 0x631c24c8u, 0x130c8187u, 0xd5dc513au, 0xcfa62f51u, 0x9da2a07cu, 0xb5be81abu, 0x0878ab0eu,
        0x73153715u, 0xe9821d70u, 0xcfb5120fu, 0xb149d822u, 0xc49e7919u, 0x302c0fa4u, 0xc3eb16b3u, 0x11e56c76u, 0x25d2795du, 0xde8f2b18u, 0xca37b397u, 0x3c903c0au, 0xa4a7fbe1u, 0x204b63ccu, 0xa8f24cbbu, 0xd9925adeu,
        0x78c004a5u, 0x5425edc0u, 0xd6d6861fu, 0xb7cb1cf2u, 0x52e9d7a9u, 0xadbd3cf4u, 0x692843c3u, 0x3c851646u, 0x82e6f8edu, 0x387d0568u, 0x7217a9a7u, 0x068a1adau, 0x376f2c71u, 0xafd23b1cu, 0xb3651bcbu, 0x58773eaeu,
        0x5c747635u, 0xe09f1210u, 0xc9453e2fu, 0x1e50d5c2u, 0xdba71a39u, 0x87eefe44u, 0x3184f4d3u, 0xa2567416u, 0x43399c7du, 0xe2eab3b8u, 0xd2ed63b7u, 0x4516edaau, 0x16e4c101u, 0x640c266cu, 0xe8e7eedbu, 0xccc4567eu,
        0x4f2b8bc5u, 0x41928a60u, 0x77623a3fu, 0x1fc80292u, 0xcadf40c9u, 0xd1365394u, 0xaaf229e3u, 0x7e9685e6u, 0xb6e3640du, 0xe51d3608u, 0xc939e1c7u, 0x90c3b47au, 0x3031b991u, 0x9e0e25bcu, 0x958bc5ebu, 0xd956a24eu,
    };
    uint32_t acc = 0xe832454eu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 118) & 255]);
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
    case 0: acc = heavy_round(acc, 0x3af3d165u); break;
    case 1: acc = heavy_round(acc, 0xd31bd380u); break;
    case 2: acc = heavy_round(acc, 0xb29db0dfu); break;
    case 3: acc = heavy_round(acc, 0x68b0c8b2u); break;
    case 4: acc = heavy_round(acc, 0x96c21069u); break;
    case 5: acc = heavy_round(acc, 0xd1149eb4u); break;
    case 6: acc = heavy_round(acc, 0x914aba83u); break;
    case 7: acc = heavy_round(acc, 0x9a559e06u); break;
    case 8: acc = heavy_round(acc, 0x9e545dadu); break;
    case 9: acc = heavy_round(acc, 0x09efa328u); break;
    case 10: acc = heavy_round(acc, 0x27842c67u); break;
    case 11: acc = heavy_round(acc, 0x3de53e9au); break;
    case 12: acc = heavy_round(acc, 0xd50e7d31u); break;
    case 13: acc = heavy_round(acc, 0x0dd5d4dcu); break;
    case 14: acc = heavy_round(acc, 0xec966a8bu); break;
    case 15: acc = heavy_round(acc, 0x9618be6eu); break;
    case 16: acc = heavy_round(acc, 0x504e72f5u); break;
    case 17: acc = heavy_round(acc, 0xcc2567d0u); break;
    case 18: acc = heavy_round(acc, 0xa50218efu); break;
    case 19: acc = heavy_round(acc, 0xe2d07182u); break;
    case 20: acc = heavy_round(acc, 0xe3f082f9u); break;
    case 21: acc = heavy_round(acc, 0x6e25d004u); break;
    case 22: acc = heavy_round(acc, 0x35a01b93u); break;
    case 23: acc = heavy_round(acc, 0x71e7ebd6u); break;
    case 24: acc = heavy_round(acc, 0x7513313du); break;
    case 25: acc = heavy_round(acc, 0xa2fbc178u); break;
    case 26: acc = heavy_round(acc, 0xb7059677u); break;
    case 27: acc = heavy_round(acc, 0x734a016au); break;
    case 28: acc = heavy_round(acc, 0xb71b41c1u); break;
    case 29: acc = heavy_round(acc, 0xd0dd302cu); break;
    case 30: acc = heavy_round(acc, 0xad27ed9bu); break;
    case 31: acc = heavy_round(acc, 0x2444c63eu); break;
    case 32: acc = heavy_round(acc, 0xd6f7b885u); break;
    case 33: acc = heavy_round(acc, 0xdf855020u); break;
    case 34: acc = heavy_round(acc, 0x8740c4ffu); break;
    case 35: acc = heavy_round(acc, 0x261d8e52u); break;
    case 36: acc = heavy_round(acc, 0xd8a5d989u); break;
    case 37: acc = heavy_round(acc, 0x8fe89554u); break;
    case 38: acc = heavy_round(acc, 0xcbf200a3u); break;
    case 39: acc = heavy_round(acc, 0x13e4eda6u); break;
    case 40: acc = heavy_round(acc, 0xaaf528cdu); break;
    case 41: acc = heavy_round(acc, 0x9528b3c8u); break;
    case 42: acc = heavy_round(acc, 0x95a9c487u); break;
    case 43: acc = heavy_round(acc, 0xab8ab83au); break;
    case 44: acc = heavy_round(acc, 0x358b6a51u); break;
    case 45: acc = heavy_round(acc, 0xe2c89f7cu); break;
    case 46: acc = heavy_round(acc, 0x434674abu); break;
    case 47: acc = heavy_round(acc, 0x1e32020eu); break;
    case 48: acc = heavy_round(acc, 0xe528a215u); break;
    case 49: acc = heavy_round(acc, 0xe4208c70u); break;
    case 50: acc = heavy_round(acc, 0x80fab50fu); break;
    case 51: acc = heavy_round(acc, 0x5bc51f22u); break;
    case 52: acc = heavy_round(acc, 0x7a2b1419u); break;
    case 53: acc = heavy_round(acc, 0x9111eea4u); break;
    case 54: acc = heavy_round(acc, 0x0d7169b3u); break;
    case 55: acc = heavy_round(acc, 0x6dc9a376u); break;
    case 56: acc = heavy_round(acc, 0x1d53445du); break;
    case 57: acc = heavy_round(acc, 0x93fb7a18u); break;
    case 58: acc = heavy_round(acc, 0xdf31b697u); break;
    case 59: acc = heavy_round(acc, 0x3574630au); break;
    case 60: acc = heavy_round(acc, 0xfec7f6e1u); break;
    case 61: acc = heavy_round(acc, 0xf4ed22ccu); break;
    case 62: acc = heavy_round(acc, 0x8e42ffbbu); break;
    case 63: acc = heavy_round(acc, 0x20fd71deu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_050(int x)
{
    static const uint32_t local[256] = {
        0x18bfa4e9u, 0xf4a02934u, 0x7f0fc303u, 0x033a0c86u, 0xc074fa2du, 0x0c7295a8u, 0x23497ce7u, 0x817d551au, 0x0f3ea1b1u, 0xc152af5cu, 0x1f7c830bu, 0x3e0afceeu, 0x77029f75u, 0xe586aa50u, 0x2df1796fu, 0xa3eb5802u,
        0xeca53779u, 0x7fbdfa84u, 0xe1c94413u, 0x8aa1fa56u, 0x42ccedbdu, 0x7f0553f8u, 0x026106f7u, 0xb241b7eau, 0x6ee68641u, 0xd3faaaacu, 0x8af6261bu, 0x16c0a4beu, 0x3c690505u, 0xa34132a0u, 0x728a457fu, 0xee8c14d2u,
        0x3259ae09u, 0x85355fd4u, 0xa0074923u, 0x685c9c26u, 0xaf10054du, 0x06e0e648u, 0xaea35507u, 0x7c4a0ebau, 0x7e39ced1u, 0xe02eb9fcu, 0x6684cd2bu, 0x641f808eu, 0x6d1f0e95u, 0x935f0ef0u, 0x0da6558fu, 0x8eef45a2u,
        0xa1260899u, 0x69bb5924u, 0xf4fad233u, 0x23e6f1f6u, 0xb49740ddu, 0x018a4c98u, 0xe5d16717u, 0x6863598au, 0xdda17b61u, 0xe143dd4cu, 0x5379783bu, 0x9d44905eu, 0xa39dbc25u, 0xc4053f40u, 0x7526a99fu, 0x2781ea72u,
        0xe6934729u, 0x9344e674u, 0xac14df43u, 0x17fdfbc6u, 0x3cfba06du, 0x41c686e8u, 0xd9ec3d27u, 0x669a985au, 0xebc68bf1u, 0xfbcf149cu, 0x8b65274bu, 0x748cd42eu, 0xfc9e0db5u, 0x6098c390u, 0x1b2c41afu, 0xa9f10342u,
        0x366a69b9u, 0xb90707c4u, 0x31067053u, 0x429eb996u, 0xfc1623fdu, 0x5f9a9538u, 0x4134d737u, 0x9e3ccb2au, 0x55920081u, 0xcda55fecu, 0xf018da5bu, 0xa7954bfeu, 0xa7190345u, 0x01be9be0u, 0x7e181dbfu, 0x27299012u,
        0xdab47049u, 0x3376bd14u, 0x9fc08563u, 0x15062b66u, 0xffffcb8du, 0x084b7788u, 0x662c3547u, 0x3dd6f1fau, 0xa62cd911u, 0xbddbbf3cu, 0x1ba5916bu, 0xcf3af7ceu, 0x74479cd5u, 0xfd5bc830u, 0x388b3dcfu, 0x9f5890e2u,
        0xc3ba5ad9u, 0x4c490664u, 0xd4741e73u, 0x43b15136u, 0x4111971du, 0x4e5e2dd8u, 0x37935757u, 0x4b360ccau, 0xd70015a1u, 0x4cc7328cu, 0x705c4c7bu, 0x2f9ad79eu, 0x67a2da65u, 0xb6954880u, 0x1166a1dfu, 0xd1eb05b2u,
        0x18052969u, 0x8e72e3b4u, 0x7b923b83u, 0x965d2b06u, 0x31e486adu, 0xf997b828u, 0x586b3d67u, 0x73671b9au, 0xdfb4b631u, 0x63fcb9dcu, 0x28ce0b8bu, 0x8811eb6eu, 0x46e3bbf5u, 0xedd01cd0u, 0x0bcb49efu, 0x0d8dee82u,
        0xc45ddbf9u, 0x16295504u, 0x21cbdc93u, 0xb806b8d6u, 0x4f519a3du, 0xd6fd1678u, 0x2ff4e777u, 0xdab71e6au, 0x4633bac1u, 0xa651552cu, 0x67cbce9bu, 0xe33d333eu, 0x2a034185u, 0x10b14520u, 0x771a35ffu, 0x002e4b52u,
        0x0bcd7289u, 0xe0e15a54u, 0x441201a3u, 0x06eafaa6u, 0xb071d1cdu, 0x08d348c8u, 0xf9b15587u, 0xecb3153au, 0xaea62351u, 0xbfda047cu, 0x486695abu, 0x66f9af0eu, 0x0b3a6b15u, 0x8a1dc170u, 0xfef4660fu, 0x86f91c22u,
        0x179ced19u, 0x1d4ff3a4u, 0x5f95aab3u, 0x6486f076u, 0x969e2d5du, 0x569f4f18u, 0xd5618797u, 0x2c28000au, 0x6b74efe1u, 0xb5ebc7ccu, 0xedef60bbu, 0x24645edeu, 0x570238a5u, 0x123a91c0u, 0xbb3ada1fu, 0x7e5b60f2u,
        0x87554ba9u, 0x7b6a20f4u, 0x01c7d7c3u, 0x05979a46u, 0xfd6facedu, 0x7d262968u, 0xd7067da7u, 0x0322dedau, 0x0d492071u, 0x371b9f1cu, 0x93f72fcbu, 0xe7da42aeu, 0x7c13aa35u, 0xfe6cb610u, 0x400e922fu, 0x920219c2u,
        0x00bf8e39u, 0x7c64e244u, 0xd85988d3u, 0x4219f816u, 0x2abf507du, 0x7e6cd7b8u, 0x16e137b7u, 0x92f0b1aau, 0xf30bb501u, 0xeb3e8a6cu, 0x9e4f02dbu, 0x08f85a7eu, 0x7b67bfc5u, 0x91592e60u, 0xadd08e3fu, 0x0cda4692u,
        0xbfe4b4c9u, 0xc2b53794u, 0xc13bbde3u, 0x654b09e6u, 0x3ea6180du, 0xf1b85a08u, 0xc172b5c7u, 0x841e787au, 0xd9e5ad91u, 0xc36989bcu, 0xa907d9ebu, 0x3a9ba64eu, 0x78377955u, 0x4ae4fab0u, 0xc121ce4fu, 0xa910e762u,
        0x270dbf59u, 0x621020e4u, 0xda9f76f3u, 0x7da7cfb6u, 0xc37d039du, 0x538db058u, 0x277bf7d7u, 0xd679334au, 0x6d400a21u, 0x49f19d0cu, 0x9872b4fbu, 0x5ae1261eu, 0x47fbd6e5u, 0x38351b00u, 0xe2e3525fu, 0x6012fc32u,
    };
    uint32_t acc = 0x8be00f32u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 50) & 255]);
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
    case 0: acc = heavy_round(acc, 0x3b42fad1u); break;
    case 1: acc = heavy_round(acc, 0x6d2df5fcu); break;
    case 2: acc = heavy_round(acc, 0x1d62d92bu); break;
    case 3: acc = heavy_round(acc, 0x522e1c8eu); break;
    case 4: acc = heavy_round(acc, 0x9204fa95u); break;
    case 5: acc = heavy_round(acc, 0x1b140af0u); break;
    case 6: acc = heavy_round(acc, 0xaa3f218fu); break;
    case 7: acc = heavy_round(acc, 0x4ff9a1a2u); break;
    case 8: acc = heavy_round(acc, 0x8b54b499u); break;
    case 9: acc = heavy_round(acc, 0xb2a21524u); break;
    case 10: acc = heavy_round(acc, 0xf39a5e33u); break;
    case 11: acc = heavy_round(acc, 0x4fc90df6u); break;
    case 12: acc = heavy_round(acc, 0xc23aacddu); break;
    case 13: acc = heavy_round(acc, 0x5bdec898u); break;
    case 14: acc = heavy_round(acc, 0x4183b317u); break;
    case 15: acc = heavy_round(acc, 0x86b9358au); break;
    case 16: acc = heavy_round(acc, 0x19a5a761u); break;
    case 17: acc = heavy_round(acc, 0xe302194cu); break;
    case 18: acc = heavy_round(acc, 0x120a843bu); break;
    case 19: acc = heavy_round(acc, 0x416a2c5eu); break;
    case 20: acc = heavy_round(acc, 0x31aea825u); break;
    case 21: acc = heavy_round(acc, 0xc4e93b40u); break;
    case 22: acc = heavy_round(acc, 0xf322759fu); break;
    case 23: acc = heavy_round(acc, 0xcc934672u); break;
    case 24: acc = heavy_round(acc, 0x2f1cf329u); break;
    case 25: acc = heavy_round(acc, 0xe8caa274u); break;
    case 26: acc = heavy_round(acc, 0xa8c76b43u); break;
    case 27: acc = heavy_round(acc, 0xbcd717c6u); break;
    case 28: acc = heavy_round(acc, 0xd92a0c6du); break;
    case 29: acc = heavy_round(acc, 0x3b2a02e8u); break;
    case 30: acc = heavy_round(acc, 0x43618927u); break;
    case 31: acc = heavy_round(acc, 0xe9d7745au); break;
    case 32: acc = heavy_round(acc, 0x5185b7f1u); break;
    case 33: acc = heavy_round(acc, 0x9e0c509cu); break;
    case 34: acc = heavy_round(acc, 0x0a69334bu); break;
    case 35: acc = heavy_round(acc, 0xb089702eu); break;
    case 36: acc = heavy_round(acc, 0xea99f9b5u); break;
    case 37: acc = heavy_round(acc, 0xe26bbf90u); break;
    case 38: acc = heavy_round(acc, 0x5f4b0dafu); break;
    case 39: acc = heavy_round(acc, 0x50c95f42u); break;
    case 40: acc = heavy_round(acc, 0xe00f15b9u); break;
    case 41: acc = heavy_round(acc, 0xbeebc3c4u); break;
    case 42: acc = heavy_round(acc, 0xfc8bfc53u); break;
    case 43: acc = heavy_round(acc, 0x7a2ed596u); break;
    case 44: acc = heavy_round(acc, 0xf58f8ffdu); break;
    case 45: acc = heavy_round(acc, 0xf7cd1138u); break;
    case 46: acc = heavy_round(acc, 0x352d2337u); break;
    case 47: acc = heavy_round(acc, 0x5c20a72au); break;
    case 48: acc = heavy_round(acc, 0x3fcc2c81u); break;
    case 49: acc = heavy_round(acc, 0x2c219becu); break;
    case 50: acc = heavy_round(acc, 0x184fe65bu); break;
    case 51: acc = heavy_round(acc, 0xcd28e7feu); break;
    case 52: acc = heavy_round(acc, 0x9bbfef45u); break;
    case 53: acc = heavy_round(acc, 0xfc4097e0u); break;
    case 54: acc = heavy_round(acc, 0x9d19e9bfu); break;
    case 55: acc = heavy_round(acc, 0x5d88ec12u); break;
    case 56: acc = heavy_round(acc, 0x98341c49u); break;
    case 57: acc = heavy_round(acc, 0x7d7a7914u); break;
    case 58: acc = heavy_round(acc, 0x3ad91163u); break;
    case 59: acc = heavy_round(acc, 0x690d4766u); break;
    case 60: acc = heavy_round(acc, 0xd584378du); break;
    case 61: acc = heavy_round(acc, 0x2f0cf388u); break;
    case 62: acc = heavy_round(acc, 0x91678147u); break;
    case 63: acc = heavy_round(acc, 0x7c21cdfau); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

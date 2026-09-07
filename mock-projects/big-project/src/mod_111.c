#include "heavy.h"
#include "mods.h"

int mod_111(int x)
{
    static const uint32_t local[256] = {
        0x3a6b8f6eu, 0x10c90ff5u, 0xc1ed60d0u, 0x1e5fbdefu, 0x794fd282u, 0xc20e6ff9u, 0xc718d904u, 0x708d9093u, 0x7994dcd6u, 0x49e16e3du, 0x92c2da78u, 0xa917db77u, 0xc2b5826au, 0x2df6cec1u, 0x1931592cu, 0xe2c4029bu,
        0x1a8fd73eu, 0xea8d9585u, 0x292f8920u, 0xa89ba9ffu, 0x6bf92f52u, 0x9ff30689u, 0xd3c1de54u, 0xf210b5a3u, 0xec921ea6u, 0x7646a5cdu, 0x951a0cc8u, 0x6f614987u, 0xd5da793au, 0xfb7e3751u, 0xb2cb087cu, 0x0a3bc9abu,
        0x4585530eu, 0xffa9bf15u, 0x833d0570u, 0xbea2da0fu, 0x190d0022u, 0xb3778119u, 0x926177a4u, 0x30115eb3u, 0xd8871476u, 0x0cf8015du, 0xd7a71318u, 0x9ede7b97u, 0x04b8640au, 0xb6a203e1u, 0x712dcbccu, 0x21e194bbu,
        0x5c6902deu, 0x0c968ca5u, 0x983ad5c0u, 0x48564e1fu, 0xecf844f2u, 0xec24dfa9u, 0xc2eca4f4u, 0x88008bc3u, 0x0230be46u, 0x598e80edu, 0x272eed68u, 0x1b9071a7u, 0x495c42dau, 0x400b3471u, 0x12eea31cu, 0x354663cbu,
        0xbb97e6aeu, 0xd00cfe35u, 0xcd8dfa10u, 0xa9d7062fu, 0x2367fdc2u, 0x3fc42239u, 0xf6986644u, 0x778f3cd3u, 0x518c1c16u, 0xf1e3247du, 0x95b69bb8u, 0xcdb82bb7u, 0x551315aau, 0x46a2c901u, 0x4fe28e6cu, 0x783b36dbu,
        0x4aaefe7eu, 0x9b0613c5u, 0x75db7260u, 0xd386023fu, 0x97492a92u, 0x3a5e48c9u, 0xdfd9bb94u, 0xacae71e3u, 0xa1d62de6u, 0x460eec0du, 0xca831e08u, 0xb1d6a9c7u, 0x6069dc7au, 0xd791c191u, 0x291e8dbcu, 0x56d10debu,
        0x4c8b4a4eu, 0xe0bacd55u, 0x21083eb0u, 0x5204424fu, 0x92c8cb62u, 0x8e3c5359u, 0xa265a4e4u, 0x158f2af3u, 0x918bf3b6u, 0x306ad79du, 0x52197458u, 0xe8acebd7u, 0xfb2d974au, 0xee411e21u, 0x38f7a10cu, 0x8558e8fbu,
        0x2f49ca1eu, 0xc6a42ae5u, 0xec395f00u, 0x5e32c65fu, 0x9f53e032u, 0xa3e741e9u, 0x23312234u, 0xf0a26803u, 0x526a6d86u, 0x858fe72du, 0xee3e9ea8u, 0xc73bf1e7u, 0xdc6b461au, 0x0459deb1u, 0x0302c85cu, 0x1063c80bu,
        0x5c477deeu, 0xb47b2c75u, 0xd1d3d350u, 0xed328e6fu, 0x55976902u, 0x2a281479u, 0x58713384u, 0xdc992913u, 0x796e9b56u, 0xa4571abdu, 0xe5f79cf8u, 0xe6c4bbf7u, 0xb26fe8eau, 0xa1c50341u, 0x441503acu, 0x6cc2ab1bu,
        0x082165beu, 0xe438d205u, 0xf97c9ba0u, 0xc0649a7fu, 0x2d8065d2u, 0xa607cb09u, 0x999ad8d4u, 0xe8646e23u, 0xced57d26u, 0x05d9724du, 0x55896f48u, 0x34c84a07u, 0xf2c87fbau, 0xecab8bd1u, 0x424352fcu, 0x8786922bu,
        0x02b4818eu, 0xf2161b95u, 0x0818b7f0u, 0x7569ea8fu, 0x4e3bd6a2u, 0x02cf6599u, 0xef631224u, 0xa3353733u, 0x1e1c12f6u, 0xcd6fedddu, 0x7e791598u, 0x03079c17u, 0xaa420a8au, 0x39767861u, 0x1ce2b64cu, 0xd6007d3bu,
        0x871dd15eu, 0x6c8c0925u, 0x6fcd2840u, 0x96237e9fu, 0x5e36bb72u, 0x2207e429u, 0x63bedf74u, 0x2c7c8443u, 0x05ff5cc6u, 0x58b38d6du, 0x178b8fe8u, 0x1783b227u, 0x4ce9895au, 0x9acec8f1u, 0x1c882d9cu, 0x65c16c4bu,
        0x0bba552eu, 0x64539ab5u, 0xbffeec90u, 0xa8b256afu, 0x531e1442u, 0x6b7a46b9u, 0x51e340c4u, 0x43eb5553u, 0xc87c5a96u, 0xcf7d50fdu, 0x9cc5de38u, 0xbc7d8c37u, 0x860bfc2au, 0x719d7d81u, 0x0308b8ecu, 0xec9a5f5bu,
        0x12270cfeu, 0xfc65d045u, 0xf55304e0u, 0x3f7772bfu, 0x41dee112u, 0x5d2f8d49u, 0xb6453614u, 0x5972aa63u, 0x1ad00c66u, 0xb3e6388du, 0x9f6d0088u, 0xd0762a47u, 0x083662fau, 0xfd0b9611u, 0x5b79583cu, 0xd89c566bu,
        0xf740f8ceu, 0xf9fba9d5u, 0xc9ae7130u, 0x0913d2cfu, 0x2ea621e2u, 0x1b70b7d9u, 0x7e99bf64u, 0x9d438373u, 0xf5777236u, 0x7247441du, 0x1605f6d8u, 0xd62e8c57u, 0x5d35bdcau, 0xea8212a1u, 0xca2f0b8cu, 0x6018517bu,
        0xc325189eu, 0x548e2765u, 0x04363180u, 0xe06876dfu, 0xdce0d6b2u, 0x00c6c669u, 0xd9d5dcb4u, 0x0fcee083u, 0x642f8c06u, 0xf13973adu, 0xac55c128u, 0x04a7b267u, 0xb6170c9au, 0xe5a9f331u, 0x5cbed2dcu, 0x919f508bu,
    };
    uint32_t acc = 0xb8293f8bu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 111) & 255]);
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
    case 0: acc = heavy_round(acc, 0x13f3a7a0u); break;
    case 1: acc = heavy_round(acc, 0xb338367fu); break;
    case 2: acc = heavy_round(acc, 0x0e6751d2u); break;
    case 3: acc = heavy_round(acc, 0x1fc9c709u); break;
    case 4: acc = heavy_round(acc, 0xaedca4d4u); break;
    case 5: acc = heavy_round(acc, 0x2003ca23u); break;
    case 6: acc = heavy_round(acc, 0x1c952926u); break;
    case 7: acc = heavy_round(acc, 0x231d2e4du); break;
    case 8: acc = heavy_round(acc, 0x2ae1fb48u); break;
    case 9: acc = heavy_round(acc, 0xfe0f6607u); break;
    case 10: acc = heavy_round(acc, 0x3c8cebbau); break;
    case 11: acc = heavy_round(acc, 0x7aad07d1u); break;
    case 12: acc = heavy_round(acc, 0x2bbe9efcu); break;
    case 13: acc = heavy_round(acc, 0xef116e2bu); break;
    case 14: acc = heavy_round(acc, 0x1469ad8eu); break;
    case 15: acc = heavy_round(acc, 0x53d15795u); break;
    case 16: acc = heavy_round(acc, 0x7482c3f0u); break;
    case 17: acc = heavy_round(acc, 0x6394868fu); break;
    case 18: acc = heavy_round(acc, 0x9c8dc2a2u); break;
    case 19: acc = heavy_round(acc, 0xad006199u); break;
    case 20: acc = heavy_round(acc, 0xb447de24u); break;
    case 21: acc = heavy_round(acc, 0xb81b9333u); break;
    case 22: acc = heavy_round(acc, 0xf276bef6u); break;
    case 23: acc = heavy_round(acc, 0x8292a9ddu); break;
    case 24: acc = heavy_round(acc, 0xe424a198u); break;
    case 25: acc = heavy_round(acc, 0x3285b817u); break;
    case 26: acc = heavy_round(acc, 0x0ed1768au); break;
    case 27: acc = heavy_round(acc, 0x05c6f461u); break;
    case 28: acc = heavy_round(acc, 0xaa61024cu); break;
    case 29: acc = heavy_round(acc, 0xc3b2593bu); break;
    case 30: acc = heavy_round(acc, 0xf2cdfd5eu); break;
    case 31: acc = heavy_round(acc, 0x62064525u); break;
    case 32: acc = heavy_round(acc, 0x76ea3440u); break;
    case 33: acc = heavy_round(acc, 0xb1651a9fu); break;
    case 34: acc = heavy_round(acc, 0x20b3a772u); break;
    case 35: acc = heavy_round(acc, 0xd467e029u); break;
    case 36: acc = heavy_round(acc, 0x4d06ab74u); break;
    case 37: acc = heavy_round(acc, 0x8c69e043u); break;
    case 38: acc = heavy_round(acc, 0x73b508c6u); break;
    case 39: acc = heavy_round(acc, 0x1975496du); break;
    case 40: acc = heavy_round(acc, 0x6e4a1be8u); break;
    case 41: acc = heavy_round(acc, 0x16f8ce27u); break;
    case 42: acc = heavy_round(acc, 0xab03f55au); break;
    case 43: acc = heavy_round(acc, 0x752e44f1u); break;
    case 44: acc = heavy_round(acc, 0x5ac9799cu); break;
    case 45: acc = heavy_round(acc, 0xff5a484bu); break;
    case 46: acc = heavy_round(acc, 0x3c25812eu); break;
    case 47: acc = heavy_round(acc, 0xd94cd6b5u); break;
    case 48: acc = heavy_round(acc, 0xda8ef890u); break;
    case 49: acc = heavy_round(acc, 0x92caf2afu); break;
    case 50: acc = heavy_round(acc, 0x40860042u); break;
    case 51: acc = heavy_round(acc, 0xedc942b9u); break;
    case 52: acc = heavy_round(acc, 0x044e0cc4u); break;
    case 53: acc = heavy_round(acc, 0xcc9fb153u); break;
    case 54: acc = heavy_round(acc, 0x924d0696u); break;
    case 55: acc = heavy_round(acc, 0xff9e0cfdu); break;
    case 56: acc = heavy_round(acc, 0x75576a38u); break;
    case 57: acc = heavy_round(acc, 0x65a9a837u); break;
    case 58: acc = heavy_round(acc, 0x6c71682au); break;
    case 59: acc = heavy_round(acc, 0x19cbf981u); break;
    case 60: acc = heavy_round(acc, 0x2ecd04ecu); break;
    case 61: acc = heavy_round(acc, 0xc7da3b5bu); break;
    case 62: acc = heavy_round(acc, 0x220d38feu); break;
    case 63: acc = heavy_round(acc, 0xcc9e0c45u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

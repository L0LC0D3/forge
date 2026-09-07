#include "heavy.h"
#include "mods.h"

int mod_102(int x)
{
    static const uint32_t local[256] = {
        0x2e062605u, 0xbc61dfa0u, 0xa3210e7fu, 0x1b4a49d2u, 0x6e205f09u, 0x01d25cd4u, 0x35ce2223u, 0x6eeba126u, 0x7d51464du, 0xd9173348u, 0x83133e07u, 0x9dcee3bau, 0xebd69fd1u, 0x556b56fcu, 0xd626c62bu, 0xe98f258eu,
        0xcc886f95u, 0xe15efbf0u, 0x21135e8fu, 0xde0ebaa2u, 0x9b5cf999u, 0x8b8b9624u, 0x99dbeb33u, 0xa44b36f6u, 0xea2cc1ddu, 0xe487d998u, 0x37df9017u, 0x38716e8au, 0x17b68c61u, 0xe21bba4cu, 0xf57db13bu, 0x1731755eu,
        0x94e35d25u, 0x7bb46c40u, 0xf9f9f29fu, 0x36529f72u, 0x7c4a7829u, 0xf4186374u, 0x0fa03843u, 0x5c8780c6u, 0x7ff5616du, 0x045b53e8u, 0x0a28a627u, 0x2c81ed5au, 0x7163dcf1u, 0x5c12319cu, 0x015ba04bu, 0x7746f92eu,
        0xe7cfeeb5u, 0x2ac73090u, 0x83f5caafu, 0xa9c2f842u, 0xc8b1dab9u, 0xa6adc4c4u, 0x26cc0953u, 0x699d7e96u, 0xb68424fdu, 0xc496a238u, 0x142f8037u, 0xb54d602au, 0xa9c79181u, 0x9523bcecu, 0x7f91935bu, 0x1b6cb0feu,
        0x38472445u, 0xfb3c48e0u, 0x2167e6bfu, 0xdd4cc512u, 0x4e9c2149u, 0xafc0ba14u, 0x1f505e63u, 0x10ca3066u, 0x5ff20c8du, 0xc67ec488u, 0x04751e47u, 0x1560c6fau, 0x500aaa11u, 0x28655c3cu, 0xae308a6bu, 0xf07f9cceu,
        0x9b81fdd5u, 0xb6f8b530u, 0x50f146cfu, 0x651d05e2u, 0x82524bd9u, 0x0d064364u, 0xf95e3773u, 0xda8a9636u, 0x3898181du, 0x1098bad8u, 0x2dba8057u, 0x668921cau, 0x619626a1u, 0xca2c0f8cu, 0x9389857bu, 0x8e9cbc9eu,
        0x58f97b65u, 0x35217580u, 0xbd72eadfu, 0x94a0bab2u, 0x0e5d5a69u, 0xfd7360b4u, 0x85669483u, 0x629bb006u, 0x770f47adu, 0x5ea98528u, 0x9700a667u, 0x69d3709au, 0xda130731u, 0x980cd6dcu, 0x0e2d848bu, 0x0921106eu,
        0x7a669cf5u, 0xaa1b89d0u, 0x4e0dd2efu, 0x4e84e382u, 0x63864cf9u, 0x513d1204u, 0x741a7593u, 0x27fa7dd6u, 0x5c309b3du, 0x71b62378u, 0x0b889077u, 0x578cb36au, 0x436a4bc1u, 0x68dcb22cu, 0xe4ed879bu, 0xbea9983eu,
        0x5bc26285u, 0xf78bf220u, 0x3622feffu, 0xd4b68052u, 0x48d62389u, 0xb9d85754u, 0x666adaa3u, 0x5ce3ffa6u, 0xc31512cdu, 0x600395c8u, 0x2ad33e87u, 0xaf41ea3au, 0x45c4f451u, 0x1cb0a17cu, 0xd6da8eabu, 0x2913540eu,
        0x3b45cc15u, 0xfc57ae70u, 0x05536f0fu, 0x98629122u, 0x6b95de19u, 0x19fa30a4u, 0xfd88c3b3u, 0xb6d53576u, 0xb115ae5du, 0xe516dc18u, 0x78a1b097u, 0x07c0150au, 0x378c00e1u, 0xecdda4ccu, 0xab4599bbu, 0xad7b43deu,
        0xc969d9a5u, 0xe4a3bec0u, 0xb780231fu, 0x09f615f2u, 0xef4e7ca9u, 0xd5979df4u, 0xeae530c3u, 0x3e8b1f46u, 0xe5cb6dedu, 0xb1b4f668u, 0x6cf4e6a7u, 0xdf1433dau, 0xad687171u, 0xbbf8bc1cu, 0x41bfa8cbu, 0x6c3e67aeu,
        0xb8e78b35u, 0x79d52310u, 0xc4ca1b2fu, 0x691e0ec2u, 0xfdc8ff39u, 0x21e59f44u, 0x003121d3u, 0x2002bd16u, 0x6b0f517du, 0xbbe2e4b8u, 0x840de0b7u, 0x6a8b46aau, 0x0a434601u, 0x65d6e76cu, 0xa219bbdbu, 0x10f9bf7eu,
        0x4eb7e0c5u, 0x7290db60u, 0x3192573fu, 0x94c77b92u, 0x570e65c9u, 0x55593494u, 0x3f5d96e3u, 0x7a790ee6u, 0x24fa590du, 0x8ee5a708u, 0x4e6d9ec7u, 0x66b24d7au, 0x0f457e91u, 0x0f8d26bcu, 0x0c64d2ebu, 0xa28a4b4eu,
        0xf213da55u, 0xc2bbe7b0u, 0x9e79d74fu, 0xdb1f5c62u, 0xe167b059u, 0x37a75de4u, 0xea9b8ff3u, 0x306b14b6u, 0x61e5849du, 0x9b423d58u, 0x80d520d7u, 0xe756484au, 0x6bd81b21u, 0x77707a0cu, 0x08f1edfbu, 0x530d0b1eu,
        0xbc7477e5u, 0xeb7b4800u, 0x58619b5fu, 0xc992b132u, 0x395ddee9u, 0x51c51b34u, 0x945c0d03u, 0xb795ce86u, 0x6a69d42du, 0x86bda7a8u, 0x044566e7u, 0x2784371au, 0x4da41bb1u, 0x4515e15cu, 0x78520d0bu, 0x4fdefeeeu,
        0x0992b975u, 0x4b33fc50u, 0x686aa36fu, 0xfcce7a02u, 0x41b9f179u, 0x3de76c84u, 0x2f500e13u, 0xe8f63c56u, 0x116047bdu, 0x7c5ce5f8u, 0x05ff70f7u, 0x598919eau, 0xf0928041u, 0x59525cacu, 0xa356301bu, 0x919d26beu,
    };
    uint32_t acc = 0xe80309beu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 102) & 255]);
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
    case 0: acc = heavy_round(acc, 0x7235b7f5u); break;
    case 1: acc = heavy_round(acc, 0x6761e8d0u); break;
    case 2: acc = heavy_round(acc, 0x3b7aa5efu); break;
    case 3: acc = heavy_round(acc, 0x541d9a82u); break;
    case 4: acc = heavy_round(acc, 0x643197f9u); break;
    case 5: acc = heavy_round(acc, 0xecd1e104u); break;
    case 6: acc = heavy_round(acc, 0xdc22f893u); break;
    case 7: acc = heavy_round(acc, 0x9f9b24d6u); break;
    case 8: acc = heavy_round(acc, 0xc0e3163du); break;
    case 9: acc = heavy_round(acc, 0xaec86278u); break;
    case 10: acc = heavy_round(acc, 0x918fc377u); break;
    case 11: acc = heavy_round(acc, 0xff3c4a6au); break;
    case 12: acc = heavy_round(acc, 0x7c7ef6c1u); break;
    case 13: acc = heavy_round(acc, 0x3e0b612cu); break;
    case 14: acc = heavy_round(acc, 0x69066a9bu); break;
    case 15: acc = heavy_round(acc, 0x895f1f3eu); break;
    case 16: acc = heavy_round(acc, 0x29c43d85u); break;
    case 17: acc = heavy_round(acc, 0x8de61120u); break;
    case 18: acc = heavy_round(acc, 0xc81091ffu); break;
    case 19: acc = heavy_round(acc, 0x4158f752u); break;
    case 20: acc = heavy_round(acc, 0x27802e89u); break;
    case 21: acc = heavy_round(acc, 0xdbdce654u); break;
    case 22: acc = heavy_round(acc, 0xe8a01da3u); break;
    case 23: acc = heavy_round(acc, 0xbd4a66a6u); break;
    case 24: acc = heavy_round(acc, 0x84524dcdu); break;
    case 25: acc = heavy_round(acc, 0x58a194c8u); break;
    case 26: acc = heavy_round(acc, 0xa5733187u); break;
    case 27: acc = heavy_round(acc, 0x5f33413au); break;
    case 28: acc = heavy_round(acc, 0xdcb05f51u); break;
    case 29: acc = heavy_round(acc, 0x0647107cu); break;
    case 30: acc = heavy_round(acc, 0x7ab831abu); break;
    case 31: acc = heavy_round(acc, 0xb5469b0eu); break;
    case 32: acc = heavy_round(acc, 0xb72a6715u); break;
    case 33: acc = heavy_round(acc, 0x7fb58d70u); break;
    case 34: acc = heavy_round(acc, 0xdef1c20fu); break;
    case 35: acc = heavy_round(acc, 0xd57ec822u); break;
    case 36: acc = heavy_round(acc, 0x22eea919u); break;
    case 37: acc = heavy_round(acc, 0x9d5e7fa4u); break;
    case 38: acc = heavy_round(acc, 0x581ac6b3u); break;
    case 39: acc = heavy_round(acc, 0xc8715c76u); break;
    case 40: acc = heavy_round(acc, 0x9c8da95du); break;
    case 41: acc = heavy_round(acc, 0x2b309b18u); break;
    case 42: acc = heavy_round(acc, 0xf10a6397u); break;
    case 43: acc = heavy_round(acc, 0x57632c0au); break;
    case 44: acc = heavy_round(acc, 0x7cfe2be1u); break;
    case 45: acc = heavy_round(acc, 0x23cbd3ccu); break;
    case 46: acc = heavy_round(acc, 0xf317fcbbu); break;
    case 47: acc = heavy_round(acc, 0xd19c4adeu); break;
    case 48: acc = heavy_round(acc, 0x76e134a5u); break;
    case 49: acc = heavy_round(acc, 0x24f55dc0u); break;
    case 50: acc = heavy_round(acc, 0x07ff361fu); break;
    case 51: acc = heavy_round(acc, 0x9cfc0cf2u); break;
    case 52: acc = heavy_round(acc, 0xe60607a9u); break;
    case 53: acc = heavy_round(acc, 0x114bacf4u); break;
    case 54: acc = heavy_round(acc, 0x2803f3c3u); break;
    case 55: acc = heavy_round(acc, 0xa5cd0646u); break;
    case 56: acc = heavy_round(acc, 0xf52e28edu); break;
    case 57: acc = heavy_round(acc, 0x133a7568u); break;
    case 58: acc = heavy_round(acc, 0xf85659a7u); break;
    case 59: acc = heavy_round(acc, 0x01d90adau); break;
    case 60: acc = heavy_round(acc, 0xde115c71u); break;
    case 61: acc = heavy_round(acc, 0x752eab1cu); break;
    case 62: acc = heavy_round(acc, 0x7db6cbcbu); break;
    case 63: acc = heavy_round(acc, 0x5abd2eaeu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

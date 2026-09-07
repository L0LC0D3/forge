#include "heavy.h"
#include "mods.h"

int mod_008(int x)
{
    static const uint32_t local[256] = {
        0xc95e53bbu, 0x38d8b5deu, 0x3a94a3a5u, 0x6a4c00c0u, 0xfd577d1fu, 0x2dc1a7f2u, 0x1ed0e6a9u, 0x8f72fff4u, 0x56152ac3u, 0x3796d146u, 0x964f77edu, 0x3e657868u, 0x97b780a7u, 0x9e5205dau, 0x87381b71u, 0x23405e1cu,
        0xdceee2cbu, 0xc8c059aeu, 0xd3ecd535u, 0x2e95e510u, 0xb1dff52fu, 0x721620c2u, 0x0b8de939u, 0x24218144u, 0x0b479bd3u, 0x8ec2ef16u, 0x80bddb7du, 0xdabbe6b8u, 0xbddefab7u, 0x348598aau, 0x0aa57001u, 0xa18f096cu,
        0x59ff75dbu, 0x19c0317eu, 0xf437aac5u, 0x7e8a1d60u, 0x8f86b13fu, 0x800c0d92u, 0xddb5cfc9u, 0x3a159694u, 0x7dfa90e3u, 0x9e0dc0e6u, 0x9473630du, 0x6c072908u, 0x94ed38c7u, 0xdc891f7au, 0x24da2891u, 0xfdd5c8bcu,
        0xe8a10cebu, 0x7ab53d4eu, 0xaaae2455u, 0xd60da9b0u, 0x1eecb14fu, 0x6dd06e62u, 0xa3919a59u, 0xa1043fe4u, 0x585f09f3u, 0x8ff446b6u, 0xc7c90e9du, 0xeacc3f58u, 0xb9a33ad7u, 0x72299a4au, 0xad3f4521u, 0xfe699c0cu,
        0x7924a7fbu, 0x65bc7d1eu, 0xb8c941e5u, 0x3e458a00u, 0x94f2f55fu, 0x90d04332u, 0x21aa48e9u, 0xe9e27d34u, 0x94e60703u, 0x22338086u, 0x0b57de2du, 0x84d029a8u, 0xfd0200e7u, 0xf874091au, 0xf97dc5b1u, 0x52df835cu,
        0x541b470bu, 0x5032f0eeu, 0x22420375u, 0x9d96be50u, 0xe2ba7d6fu, 0x4db88c02u, 0x62c8db79u, 0xb6e54e84u, 0x8e408813u, 0x75c86e56u, 0xd9f8d1bdu, 0xed17e7f8u, 0x744a8af7u, 0x69b56beau, 0x6d7eaa41u, 0xe40c7eacu,
        0x2a55ea1bu, 0x7ab598beu, 0xbd116905u, 0x07a646a0u, 0xc5a4497fu, 0xe87648d2u, 0x47f65209u, 0x0b81b3d4u, 0x0f5f8d23u, 0xdef01026u, 0xc8c4e94du, 0xabe87a48u, 0x88fdd907u, 0x877ac2bau, 0x0b6af2d1u, 0x24058dfcu,
        0x24e5912bu, 0xc121748eu, 0xc1707295u, 0x0d5922f0u, 0xd751598fu, 0x543679a2u, 0x187bac99u, 0x9c6cad24u, 0x63741633u, 0xb52765f6u, 0x171524ddu, 0x6ec6e098u, 0x08dceb17u, 0xaa910d8au, 0x03ab9f61u, 0x5e1fb14cu,
        0xf51b3c3bu, 0x6a93845eu, 0x59d82025u, 0x0cd45340u, 0x9da2ad9fu, 0x03661e72u, 0x11e1eb29u, 0x1f9b3a74u, 0x65ef2343u, 0x232b6fc6u, 0x3e82846du, 0x58781ae8u, 0x35e8c127u, 0x93054c5au, 0x44e9aff1u, 0x06efe89cu,
        0xe487eb4bu, 0xf968c82eu, 0x330171b5u, 0x817cd790u, 0x9ab945afu, 0xb7b23742u, 0xf7f20db9u, 0x9c425bc4u, 0x9281b453u, 0xf6f92d96u, 0x82e607fdu, 0x51012938u, 0xd6625b37u, 0x38247f2au, 0x0c0e2481u, 0x0c4b33ecu,
        0xe4fc9e5bu, 0xfb3e3ffeu, 0x0be56745u, 0x53f7afe0u, 0x5cf621bfu, 0x5207c412u, 0xa4b51449u, 0xbad71114u, 0x151cc963u, 0x71cd9f66u, 0x8258af8du, 0x55a70b88u, 0x44cab947u, 0x987ba5fau, 0x7441fd11u, 0x2546933cu,
        0xa08a556bu, 0xd8f0ebceu, 0x45bd00d5u, 0x2a29dc30u, 0x8efa41cfu, 0xa293c4e2u, 0x9873fed9u, 0x150e5a64u, 0xd9f16273u, 0x1825c536u, 0xc5337b1du, 0xc8eec1d8u, 0x7fe2db57u, 0x89d7c0cau, 0x06ee39a1u, 0x2237068cu,
        0x8982107bu, 0xa69dcb9eu, 0x74013e65u, 0xb7385c80u, 0x07a6a5dfu, 0x38c339b2u, 0x89b7cd69u, 0x85dd37b4u, 0x9d707f83u, 0x81be9f06u, 0x4e0f6aadu, 0xc29d4c28u, 0x3aabc167u, 0x8945cf9au, 0x4bbbda31u, 0x3cb18ddcu,
        0xea74cf8bu, 0xf3a1df6eu, 0xec6b1ff5u, 0x0b8830d0u, 0xda1c4defu, 0x33432282u, 0xf5497ff9u, 0x7978a904u, 0xfc4b2093u, 0x29952cd6u, 0x29c57e3du, 0x5fb7aa78u, 0xec666b77u, 0x8b12d26au, 0x5893dec1u, 0x678b292cu,
        0xf633929bu, 0x9a9a273eu, 0x56f3a585u, 0xe4be5920u, 0x65bc39ffu, 0x10007f52u, 0xae321689u, 0x3d55ae54u, 0x837245a3u, 0x3de66ea6u, 0xff6eb5cdu, 0x1282dcc8u, 0xe093d987u, 0xcacbc93au, 0x619f4751u, 0x9ed8d87cu,
        0xd7cf59abu, 0x9163a30eu, 0x3dd3cf15u, 0xfdbfd570u, 0x66276a0fu, 0x7c285022u, 0x6dba9119u, 0x502947a4u, 0xc016eeb3u, 0x702f6476u, 0xa064115du, 0xf283e318u, 0x46f50b97u, 0x9b3db40au, 0x494713e1u, 0x37ef9bccu,
    };
    uint32_t acc = 0x55d4c6ccu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 8) & 255]);
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
    case 0: acc = heavy_round(acc, 0x5d1cf193u); break;
    case 1: acc = heavy_round(acc, 0x1682c9d6u); break;
    case 2: acc = heavy_round(acc, 0x3364773du); break;
    case 3: acc = heavy_round(acc, 0x85004f78u); break;
    case 4: acc = heavy_round(acc, 0xdfd4cc77u); break;
    case 5: acc = heavy_round(acc, 0x5b53bf6au); break;
    case 6: acc = heavy_round(acc, 0xef4de7c1u); break;
    case 7: acc = heavy_round(acc, 0x0f939e2cu); break;
    case 8: acc = heavy_round(acc, 0x4a3f839bu); break;
    case 9: acc = heavy_round(acc, 0x2a3b643eu); break;
    case 10: acc = heavy_round(acc, 0xd571be85u); break;
    case 11: acc = heavy_round(acc, 0x001b9e20u); break;
    case 12: acc = heavy_round(acc, 0xaff6baffu); break;
    case 13: acc = heavy_round(acc, 0xbd5f0c52u); break;
    case 14: acc = heavy_round(acc, 0xed2d3f89u); break;
    case 15: acc = heavy_round(acc, 0x836cc354u); break;
    case 16: acc = heavy_round(acc, 0x51fc56a3u); break;
    case 17: acc = heavy_round(acc, 0x66af4ba6u); break;
    case 18: acc = heavy_round(acc, 0xaeafeecdu); break;
    case 19: acc = heavy_round(acc, 0x8688c1c8u); break;
    case 20: acc = heavy_round(acc, 0x7b1e7a87u); break;
    case 21: acc = heavy_round(acc, 0x98fbf63au); break;
    case 22: acc = heavy_round(acc, 0x70ff9051u); break;
    case 23: acc = heavy_round(acc, 0xe4d28d7cu); break;
    case 24: acc = heavy_round(acc, 0x909b8aabu); break;
    case 25: acc = heavy_round(acc, 0x1848200eu); break;
    case 26: acc = heavy_round(acc, 0x563c2815u); break;
    case 27: acc = heavy_round(acc, 0x7f825a70u); break;
    case 28: acc = heavy_round(acc, 0x7b062b0fu); break;
    case 29: acc = heavy_round(acc, 0x255e1d22u); break;
    case 30: acc = heavy_round(acc, 0x7a23fa19u); break;
    case 31: acc = heavy_round(acc, 0x32599ca4u); break;
    case 32: acc = heavy_round(acc, 0xcb693fb3u); break;
    case 33: acc = heavy_round(acc, 0xb8a38176u); break;
    case 34: acc = heavy_round(acc, 0x66d78a5du); break;
    case 35: acc = heavy_round(acc, 0xd9970818u); break;
    case 36: acc = heavy_round(acc, 0x40abec97u); break;
    case 37: acc = heavy_round(acc, 0x202d210au); break;
    case 38: acc = heavy_round(acc, 0x13dd9ce1u); break;
    case 39: acc = heavy_round(acc, 0xdd2a90ccu); break;
    case 40: acc = heavy_round(acc, 0x913595bbu); break;
    case 41: acc = heavy_round(acc, 0x95130fdeu); break;
    case 42: acc = heavy_round(acc, 0xf36735a5u); break;
    case 43: acc = heavy_round(acc, 0xf5296ac0u); break;
    case 44: acc = heavy_round(acc, 0x9cd1df1fu); break;
    case 45: acc = heavy_round(acc, 0x9c04a1f2u); break;
    case 46: acc = heavy_round(acc, 0xd1d398a9u); break;
    case 47: acc = heavy_round(acc, 0x1b8209f4u); break;
    case 48: acc = heavy_round(acc, 0x6ad4acc3u); break;
    case 49: acc = heavy_round(acc, 0x451c6b46u); break;
    case 50: acc = heavy_round(acc, 0x8b7449edu); break;
    case 51: acc = heavy_round(acc, 0xdef02268u); break;
    case 52: acc = heavy_round(acc, 0x987e22a7u); break;
    case 53: acc = heavy_round(acc, 0x9ef43fdau); break;
    case 54: acc = heavy_round(acc, 0xdc910d71u); break;
    case 55: acc = heavy_round(acc, 0x8b30a81cu); break;
    case 56: acc = heavy_round(acc, 0x1b9ea4cbu); break;
    case 57: acc = heavy_round(acc, 0xf0f933aeu); break;
    case 58: acc = heavy_round(acc, 0xcfabe735u); break;
    case 59: acc = heavy_round(acc, 0xda75cf10u); break;
    case 60: acc = heavy_round(acc, 0x7d7ad72fu); break;
    case 61: acc = heavy_round(acc, 0x90ff9ac2u); break;
    case 62: acc = heavy_round(acc, 0x8e051b39u); break;
    case 63: acc = heavy_round(acc, 0x241b0b44u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

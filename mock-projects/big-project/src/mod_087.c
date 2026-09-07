#include "heavy.h"
#include "mods.h"

int mod_087(int x)
{
    static const uint32_t local[256] = {
        0x79d2dab6u, 0xcb0e929du, 0xabebf358u, 0xbdf75ed7u, 0xb4c76e4au, 0xa5bb0921u, 0x10ca900cu, 0xdd490bfbu, 0xbf6d911eu, 0xc8bf45e5u, 0x775bbe00u, 0x67cb995fu, 0x9b289732u, 0x0d9e8ce9u, 0xdc61f134u, 0x0196eb03u,
        0x66071486u, 0x3e0e622du, 0xb4acdda8u, 0xeeef24e7u, 0x41d6dd1au, 0xc7fa89b1u, 0xa94d775cu, 0x5ae8ab0bu, 0x427904eeu, 0x4fc90775u, 0x1d09f250u, 0x564c216fu, 0x3775e002u, 0xe4de1f79u, 0x6f11c284u, 0xf2ba6c13u,
        0x64d10256u, 0xdc6055bdu, 0x2ef19bf8u, 0x1e10aef7u, 0x7f1d3feau, 0x963c6e41u, 0xb5c772acu, 0x220c4e1bu, 0x7ed0acbeu, 0xb0696d05u, 0xd8b67aa0u, 0xec2eed7fu, 0x1ed89cd2u, 0x6c6c9609u, 0xa89b27d4u, 0x81e27123u,
        0x1a6da426u, 0x4b1d6d4du, 0x72ff2e48u, 0x44dcfd07u, 0x7e2796bau, 0x22a9b6d1u, 0x784d81fcu, 0xebc4f52bu, 0xa051888eu, 0x32d97695u, 0x0b4656f0u, 0x5314fd8fu, 0x947dcda2u, 0xfb92f099u, 0x0db32124u, 0x8a3ffa33u,
        0x2e59f9f6u, 0xd99ea8ddu, 0xfe5a9498u, 0xc1150f17u, 0xe7c2e18au, 0xadab6361u, 0x0c34a54cu, 0xf963a03bu, 0x3e18985eu, 0x11922425u, 0xe2de8740u, 0xa0df519fu, 0x5ad27272u, 0xdfda2f29u, 0x244eae74u, 0x77440743u,
        0x1b5303c6u, 0x117d086du, 0xc3c8cee8u, 0x64b9e527u, 0xcbfc205au, 0x35ea73f1u, 0xb611dc9cu, 0x24794f4bu, 0x2a82dc2eu, 0x094c75b5u, 0xaae40b90u, 0xe7aee9afu, 0x83838b42u, 0xed0b51b9u, 0xc3a2cfc4u, 0x549f9853u,
        0xff55c196u, 0x46918bfdu, 0x7b4edd38u, 0x860c7f37u, 0x7220532au, 0x084fe881u, 0x33ba27ecu, 0xeed7025bu, 0x432d53feu, 0xe9016b45u, 0x1bfbe3e0u, 0x45e4c5bfu, 0x3f7e1812u, 0x0d2f5849u, 0x64248514u, 0xde43ad63u,
        0x6b9f3366u, 0x26f5338du, 0xf231bf88u, 0x0f8ddd47u, 0x28bc79fau, 0x5004c111u, 0x0c42873cu, 0x928db96bu, 0x40f4ffceu, 0x21ea04d5u, 0xac0b1030u, 0xf621e5cfu, 0xaeef18e2u, 0xd08f42d9u, 0x6f88ce64u, 0x90614673u,
        0x34ac5936u, 0x4b00ff1du, 0x5af675d8u, 0x8ffeff57u, 0x159d94cau, 0xa671fda1u, 0xdffffa8cu, 0x11ee747bu, 0x87f6df9eu, 0x577f4265u, 0xde369080u, 0x5f4749dfu, 0xb1438db2u, 0xfdb41169u, 0x90c4abb4u, 0xb7696383u,
        0x423a3306u, 0xc54deeadu, 0x9d620028u, 0x4a60e567u, 0x05d0a39au, 0xa3409e31u, 0xb88781dcu, 0x478a338bu, 0xf78ff36eu, 0xef7a23f5u, 0x92e364d0u, 0x2475f1efu, 0xb5287682u, 0x2166c3f9u, 0x040d1d04u, 0x800d0493u,
        0x5f45c0d6u, 0xb2b5023du, 0xa6795e78u, 0x45f48f77u, 0x3da2a66au, 0x6c59a2c1u, 0x58ae1d2cu, 0xf631f69bu, 0xba5d3b3eu, 0xa1d3a985u, 0x57b68d20u, 0x350eddffu, 0x888ad352u, 0x1eb05a89u, 0xe6d72254u, 0x073d29a3u,
        0x0a0c02a6u, 0xca4f39cdu, 0xb88190c8u, 0x5e3afd87u, 0x48a09d3au, 0x45e60b51u, 0x8c88cc7cu, 0xd8f6bdabu, 0x163bb70eu, 0x08c4d315u, 0xb7950970u, 0xdcb30e0fu, 0x2897a422u, 0xbed9d519u, 0x87d7bba4u, 0x6a2ad2b3u,
        0x4409f876u, 0xed75955du, 0xbaff9718u, 0x52f52f97u, 0xc997880au, 0x224ed7e1u, 0x796c8fccu, 0xb32988bbu, 0x3c4866deu, 0x30c6a0a5u, 0x8aa3d9c0u, 0xd343821fu, 0x91bbe8f2u, 0x416c33a9u, 0xb703e8f4u, 0xd646ffc3u,
        0x61fca246u, 0xb7c114edu, 0x8ab87168u, 0xd82425a7u, 0x4a9466dau, 0x323d0871u, 0xedee671cu, 0x605b57cbu, 0x18e04aaeu, 0x28921235u, 0x4647fe10u, 0x4ce13a2fu, 0x8fa4a1c2u, 0xec307639u, 0x1590aa44u, 0x9942b0d3u,
        0xdbe10016u, 0x0f0ab87du, 0x49b11fb8u, 0xa608dfb7u, 0x0ce439aau, 0x74999d01u, 0xb1e3526cu, 0xe45d2adbu, 0x23a0627eu, 0x912027c5u, 0x4d267660u, 0x09ed363fu, 0x8d3ece92u, 0x9b2f9cc9u, 0x65f2ff94u, 0x310ee5e3u,
        0x1cf411e6u, 0xb36b800du, 0xaf2ea208u, 0x89245dc7u, 0xd914007au, 0x468d9591u, 0xd66051bcu, 0x7b4001ebu, 0x2f65ae4eu, 0x2da9e155u, 0x3f2442b0u, 0x6708764fu, 0x64b76f62u, 0x50b2a759u, 0xdbdfe8e4u, 0x5bdc9ef3u,
    };
    uint32_t acc = 0x5386edf3u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 87) & 255]);
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
    case 0: acc = heavy_round(acc, 0x887c0ee8u); break;
    case 1: acc = heavy_round(acc, 0x0d542527u); break;
    case 2: acc = heavy_round(acc, 0x1151605au); break;
    case 3: acc = heavy_round(acc, 0xf2beb3f1u); break;
    case 4: acc = heavy_round(acc, 0x1e591c9cu); break;
    case 5: acc = heavy_round(acc, 0x13978f4bu); break;
    case 6: acc = heavy_round(acc, 0x9c8c1c2eu); break;
    case 7: acc = heavy_round(acc, 0xc344b5b5u); break;
    case 8: acc = heavy_round(acc, 0x45ff4b90u); break;
    case 9: acc = heavy_round(acc, 0xe39129afu); break;
    case 10: acc = heavy_round(acc, 0xb380cb42u); break;
    case 11: acc = heavy_round(acc, 0x846791b9u); break;
    case 12: acc = heavy_round(acc, 0x74d20fc4u); break;
    case 13: acc = heavy_round(acc, 0x6785d853u); break;
    case 14: acc = heavy_round(acc, 0xf2870196u); break;
    case 15: acc = heavy_round(acc, 0x7f91cbfdu); break;
    case 16: acc = heavy_round(acc, 0xb9d21d38u); break;
    case 17: acc = heavy_round(acc, 0x3e36bf37u); break;
    case 18: acc = heavy_round(acc, 0xe1c5932au); break;
    case 19: acc = heavy_round(acc, 0xcb342881u); break;
    case 20: acc = heavy_round(acc, 0x4ad167ecu); break;
    case 21: acc = heavy_round(acc, 0x9e85425bu); break;
    case 22: acc = heavy_round(acc, 0xdc8693feu); break;
    case 23: acc = heavy_round(acc, 0x8209ab45u); break;
    case 24: acc = heavy_round(acc, 0x6ae723e0u); break;
    case 25: acc = heavy_round(acc, 0x435705bfu); break;
    case 26: acc = heavy_round(acc, 0xe3cb5812u); break;
    case 27: acc = heavy_round(acc, 0x6c9b9849u); break;
    case 28: acc = heavy_round(acc, 0x9e23c514u); break;
    case 29: acc = heavy_round(acc, 0xc3b9ed63u); break;
    case 30: acc = heavy_round(acc, 0x70207366u); break;
    case 31: acc = heavy_round(acc, 0x2105738du); break;
    case 32: acc = heavy_round(acc, 0x5e84ff88u); break;
    case 33: acc = heavy_round(acc, 0xfb481d47u); break;
    case 34: acc = heavy_round(acc, 0x96b1b9fau); break;
    case 35: acc = heavy_round(acc, 0xdcf90111u); break;
    case 36: acc = heavy_round(acc, 0xc629c73cu); break;
    case 37: acc = heavy_round(acc, 0x66cbf96bu); break;
    case 38: acc = heavy_round(acc, 0x159e3fceu); break;
    case 39: acc = heavy_round(acc, 0x9e0244d5u); break;
    case 40: acc = heavy_round(acc, 0xe2c65030u); break;
    case 41: acc = heavy_round(acc, 0x992425cfu); break;
    case 42: acc = heavy_round(acc, 0x1b8c58e2u); break;
    case 43: acc = heavy_round(acc, 0x3c0b82d9u); break;
    case 44: acc = heavy_round(acc, 0xa6580e64u); break;
    case 45: acc = heavy_round(acc, 0x2c678673u); break;
    case 46: acc = heavy_round(acc, 0xde7d9936u); break;
    case 47: acc = heavy_round(acc, 0x8a213f1du); break;
    case 48: acc = heavy_round(acc, 0xa919b5d8u); break;
    case 49: acc = heavy_round(acc, 0xd3493f57u); break;
    case 50: acc = heavy_round(acc, 0x55e2d4cau); break;
    case 51: acc = heavy_round(acc, 0xc1763da1u); break;
    case 52: acc = heavy_round(acc, 0x30b73a8cu); break;
    case 53: acc = heavy_round(acc, 0x6ebcb47bu); break;
    case 54: acc = heavy_round(acc, 0xabf01f9eu); break;
    case 55: acc = heavy_round(acc, 0xbaa78265u); break;
    case 56: acc = heavy_round(acc, 0x30c1d080u); break;
    case 57: acc = heavy_round(acc, 0x4bd989dfu); break;
    case 58: acc = heavy_round(acc, 0x3a30cdb2u); break;
    case 59: acc = heavy_round(acc, 0xb9405169u); break;
    case 60: acc = heavy_round(acc, 0x3863ebb4u); break;
    case 61: acc = heavy_round(acc, 0xedffa383u); break;
    case 62: acc = heavy_round(acc, 0x255b7306u); break;
    case 63: acc = heavy_round(acc, 0xcd7e2eadu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

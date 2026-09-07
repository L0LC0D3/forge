#include "heavy.h"
#include "mods.h"

int mod_007(int x)
{
    static const uint32_t local[256] = {
        0x3d96a9a6u, 0xf5e3b4cdu, 0x1b0dcfc8u, 0x67743087u, 0x85da343au, 0x12fcb651u, 0xb1d17b7cu, 0xca61a0abu, 0x1a1b3e0eu, 0x79e8ae15u, 0x22a92870u, 0x5812a10fu, 0xdc041b22u, 0xb1c5e019u, 0xfd364aa4u, 0x03f215b3u,
        0x02da5f76u, 0xb614d05du, 0x1f979618u, 0xe5472297u, 0x9992df0au, 0x55bc42e1u, 0x219cfeccu, 0x60d92bbbu, 0xf425addeu, 0xa04d3ba5u, 0xf93bb8c0u, 0xbad3d51fu, 0xf0221ff2u, 0x2586fea9u, 0xcc4237f4u, 0x74eb02c3u,
        0x1482c946u, 0x0b1b0fedu, 0x234c3068u, 0x1cbed8a7u, 0xe4c17ddau, 0x3cb13371u, 0xf1f6961cu, 0x6e7fbacbu, 0xfb2b51aeu, 0x3a2b6d35u, 0x28539d10u, 0xefd24d2fu, 0xbe7498c2u, 0x482a0139u, 0xc19eb944u, 0x66f373d3u,
        0xc68ce716u, 0x06cf737du, 0x84309eb8u, 0xd21c52b7u, 0x44b310aau, 0xb2c48801u, 0xe6b3416cu, 0xc3264ddbu, 0x02c9297eu, 0x947c42c5u, 0xce95d560u, 0x436f093fu, 0xcde88592u, 0x61b7e7c9u, 0x1bc0ce94u, 0xa3fc68e3u,
        0x6035b8e6u, 0x954afb0du, 0x3589e108u, 0xdde090c7u, 0x1df4977au, 0x011f4091u, 0x0ce800bcu, 0x66dde4ebu, 0x39dc354eu, 0x1e78bc55u, 0x47e761b0u, 0x9e4b094fu, 0x14aae662u, 0xe079b259u, 0x8a5d77e4u, 0x3636e1f3u,
        0xebfa3eb6u, 0x0ce6a69du, 0x0fdcf758u, 0x3ccc92d7u, 0x2c53124au, 0x5f2a5d21u, 0x0ae9d40cu, 0xa9f77ffbu, 0xfa81751eu, 0xf999d9e5u, 0x7d6d4200u, 0x95474d5fu, 0xc828bb32u, 0xe8f860e9u, 0x7e69b534u, 0x7813df03u,
        0x07977886u, 0xbe3b762du, 0x20eee1a8u, 0x1fe158e7u, 0x52db811au, 0x828eddb1u, 0x704dbb5cu, 0x35041f0bu, 0x9a15e8eeu, 0x89989b75u, 0x358c7650u, 0x7984d56fu, 0x2d0f0402u, 0xe5fcf379u, 0x7a1a8684u, 0x24446013u,
        0xb40a6656u, 0x842269bdu, 0xfbc49ff8u, 0xfc5fe2f7u, 0x6bdae3eau, 0x2f35c241u, 0x05e8b6acu, 0x18d4c21bu, 0x393690beu, 0x046e0105u, 0x63e9fea0u, 0x6864a17fu, 0x674ac0d2u, 0x18906a09u, 0x60e4ebd4u, 0x65b96523u,
        0x25900826u, 0x53b4814du, 0x08a33248u, 0x9bc93107u, 0x18de3abau, 0xc7480ad1u, 0x1dcfc5fcu, 0xde7a692bu, 0x93c06c8eu, 0x02530a95u, 0x796adaf0u, 0x5b87b18fu, 0x4a08f1a2u, 0x27fbc499u, 0xc77de524u, 0xe7a3ee33u,
        0x93a55df6u, 0xcc4abcddu, 0xd50f9898u, 0x2bde4317u, 0x92b2858au, 0xdb2eb761u, 0xe357e94cu, 0x9746143bu, 0xd0d07c5eu, 0x0dc0b825u, 0xb4340b40u, 0x38cf059fu, 0x27b69672u, 0xb1c80329u, 0x43da7274u, 0xe574fb43u,
        0x090767c6u, 0xc77e1c6du, 0x63ced2e8u, 0x4ea01927u, 0x7964c45au, 0xb992c7f1u, 0xab16209cu, 0xecc8c34bu, 0x52c3c02eu, 0x337009b5u, 0x6faa8f90u, 0xe25b9dafu, 0xa200af42u, 0xd9be25b9u, 0xbd2f93c4u, 0x3add8c53u,
        0x33b32596u, 0xe9279ffdu, 0x7ce5e138u, 0x2a4fb337u, 0xa441f72au, 0xff5d3c81u, 0x42df6becu, 0x30d3765bu, 0x873737feu, 0x9259ff45u, 0x747367e0u, 0x468e79bfu, 0x79d43c12u, 0xd9e72c49u, 0xbbf24914u, 0x73cea163u,
        0x34e59766u, 0x2f60478du, 0xfd99c388u, 0x796e1147u, 0xf1d71dfau, 0x27b71511u, 0x41c8cb3cu, 0x6d772d6bu, 0xb707e3ceu, 0xebb798d5u, 0x48739430u, 0x700899cfu, 0x5f5e3ce2u, 0x928c16d9u, 0xb9d79264u, 0xdc793a73u,
        0x711bbd36u, 0x8281131du, 0x286f79d8u, 0x9abc3357u, 0x17f138cau, 0x1c0951a1u, 0x58273e8cu, 0x7504e87bu, 0xd652c39eu, 0x3301d665u, 0x7ed01480u, 0x95aafddfu, 0xc20bb1b2u, 0x1a35e569u, 0x71d46fb4u, 0x914e5783u,
        0x60129706u, 0x452302adu, 0xf52c0428u, 0xa13b1967u, 0x739d479au, 0xc3fcf231u, 0x9f8fc5dcu, 0xf20da78bu, 0x5474d76eu, 0x1df1b7f5u, 0x07ede8d0u, 0x2a96a5efu, 0xa0899a82u, 0x4dad97f9u, 0x301de104u, 0x8efef893u,
        0x5cc724d6u, 0xe41f163du, 0x60d46278u, 0x642bc377u, 0xd9284a6au, 0x957af6c1u, 0xead7612cu, 0x77626a9bu, 0xec0b1f3eu, 0xb4803d85u, 0x81721120u, 0xee2c91ffu, 0x58c4f752u, 0x5ffc2e89u, 0x2228e654u, 0xc27c1da3u,
    };
    uint32_t acc = 0x7a57aca3u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 7) & 255]);
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
    case 0: acc = heavy_round(acc, 0xae3cc638u); break;
    case 1: acc = heavy_round(acc, 0xa7f75437u); break;
    case 2: acc = heavy_round(acc, 0x88eb242au); break;
    case 3: acc = heavy_round(acc, 0x68e28581u); break;
    case 4: acc = heavy_round(acc, 0xdaba20ecu); break;
    case 5: acc = heavy_round(acc, 0xb80ca75bu); break;
    case 6: acc = heavy_round(acc, 0xf7a4b4feu); break;
    case 7: acc = heavy_round(acc, 0x1cb75845u); break;
    case 8: acc = heavy_round(acc, 0x5da6ece0u); break;
    case 9: acc = heavy_round(acc, 0xa22a3abfu); break;
    case 10: acc = heavy_round(acc, 0x08a30912u); break;
    case 11: acc = heavy_round(acc, 0x85159549u); break;
    case 12: acc = heavy_round(acc, 0x2c239e14u); break;
    case 13: acc = heavy_round(acc, 0x1b2df263u); break;
    case 14: acc = heavy_round(acc, 0x9802b466u); break;
    case 15: acc = heavy_round(acc, 0xa668c08du); break;
    case 16: acc = heavy_round(acc, 0x3a3de888u); break;
    case 17: acc = heavy_round(acc, 0x9181f247u); break;
    case 18: acc = heavy_round(acc, 0x0f7f8afau); break;
    case 19: acc = heavy_round(acc, 0x69b29e11u); break;
    case 20: acc = heavy_round(acc, 0x3524c03cu); break;
    case 21: acc = heavy_round(acc, 0x59c09e6bu); break;
    case 22: acc = heavy_round(acc, 0x02c8a0ceu); break;
    case 23: acc = heavy_round(acc, 0x04cf31d5u); break;
    case 24: acc = heavy_round(acc, 0xe69c5930u); break;
    case 25: acc = heavy_round(acc, 0xf3989acfu); break;
    case 26: acc = heavy_round(acc, 0x871449e2u); break;
    case 27: acc = heavy_round(acc, 0x64f8bfd9u); break;
    case 28: acc = heavy_round(acc, 0x35b22764u); break;
    case 29: acc = heavy_round(acc, 0xcaf0cb73u); break;
    case 30: acc = heavy_round(acc, 0x59f41a36u); break;
    case 31: acc = heavy_round(acc, 0x9f8bcc1du); break;
    case 32: acc = heavy_round(acc, 0xf8b0ded8u); break;
    case 33: acc = heavy_round(acc, 0x194c5457u); break;
    case 34: acc = heavy_round(acc, 0x2b68e5cau); break;
    case 35: acc = heavy_round(acc, 0xad0b1aa1u); break;
    case 36: acc = heavy_round(acc, 0x0c54738cu); break;
    case 37: acc = heavy_round(acc, 0xcb6e997bu); break;
    case 38: acc = heavy_round(acc, 0x9f36c09eu); break;
    case 39: acc = heavy_round(acc, 0xf263af65u); break;
    case 40: acc = heavy_round(acc, 0x643e1980u); break;
    case 41: acc = heavy_round(acc, 0x8f3f3edfu); break;
    case 42: acc = heavy_round(acc, 0xd978feb2u); break;
    case 43: acc = heavy_round(acc, 0x5c70ce69u); break;
    case 44: acc = heavy_round(acc, 0x08a844b4u); break;
    case 45: acc = heavy_round(acc, 0x6dee2883u); break;
    case 46: acc = heavy_round(acc, 0xaa763406u); break;
    case 47: acc = heavy_round(acc, 0x11bffbadu); break;
    case 48: acc = heavy_round(acc, 0x355aa928u); break;
    case 49: acc = heavy_round(acc, 0x96577a67u); break;
    case 50: acc = heavy_round(acc, 0xadb4349au); break;
    case 51: acc = heavy_round(acc, 0xfe94fb31u); break;
    case 52: acc = heavy_round(acc, 0x0dde3adcu); break;
    case 53: acc = heavy_round(acc, 0x3ba7988bu); break;
    case 54: acc = heavy_round(acc, 0xf04c146eu); break;
    case 55: acc = heavy_round(acc, 0xbf2dd0f5u); break;
    case 56: acc = heavy_round(acc, 0x9af12dd0u); break;
    case 57: acc = heavy_round(acc, 0xac3f26efu); break;
    case 58: acc = heavy_round(acc, 0xf27e2782u); break;
    case 59: acc = heavy_round(acc, 0xac46c0f9u); break;
    case 60: acc = heavy_round(acc, 0x053af604u); break;
    case 61: acc = heavy_round(acc, 0x04d70993u); break;
    case 62: acc = heavy_round(acc, 0x188601d6u); break;
    case 63: acc = heavy_round(acc, 0x0dde4f3du); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

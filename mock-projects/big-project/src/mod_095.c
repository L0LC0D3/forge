#include "heavy.h"
#include "mods.h"

int mod_095(int x)
{
    static const uint32_t local[256] = {
        0xaaf5851eu, 0xbddea9e5u, 0x2fcbd200u, 0x61749d5fu, 0x0455cb32u, 0x7ba230e9u, 0xe9e94534u, 0xd0ee2f03u, 0x568d8886u, 0x5b1a462du, 0x2f1f71a8u, 0x41b8a8e7u, 0xa4aa911au, 0xba72adb1u, 0x5bbf4b5cu, 0x79286f0bu,
        0x57cdf8eeu, 0x12516b75u, 0x19cf0650u, 0xa646256fu, 0x48c01402u, 0x6a5ac379u, 0xe3be1684u, 0xbcf2b013u, 0xb8c47656u, 0x73f539bdu, 0x78592ff8u, 0x914b32f7u, 0x8dadf3eau, 0x8f4d9241u, 0xb3fe46acu, 0x974d121bu,
        0x6532a0beu, 0x3e9ad105u, 0x83108ea0u, 0x6ab9f17fu, 0x537fd0d2u, 0xcba23a09u, 0xe1ac7bd4u, 0x833bb523u, 0x610e1826u, 0x237b514du, 0x1c9bc248u, 0xb8c88107u, 0x1bb54abau, 0x2c93dad1u, 0xc78955fcu, 0x7c46b92bu,
        0xcf007c8eu, 0x1af3da95u, 0x1c756af0u, 0xe871018fu, 0x37c201a2u, 0x86c19499u, 0xb8697524u, 0x0efa3e33u, 0xc6e76df6u, 0x49058cddu, 0xe96c2898u, 0x25f19317u, 0xc78d958au, 0x62ae8761u, 0x01b5794cu, 0x7966643bu,
        0xfc548c5eu, 0x71d58825u, 0x64229b40u, 0x454c559fu, 0x87f3a672u, 0x7941d329u, 0x3dea0274u, 0xdb9f4b43u, 0x350d77c6u, 0xfe2cec6du, 0x218f62e8u, 0xbac76927u, 0x7143d45au, 0xc04697f1u, 0xf717b09cu, 0x783d134bu,
        0x8f8bd02eu, 0x8ff8d9b5u, 0xf57d1f90u, 0xa36cedafu, 0x25c1bf42u, 0x06ebf5b9u, 0x996323c4u, 0x04dbdc53u, 0x997d3596u, 0x26ca6ffdu, 0xcd0a7138u, 0xdd8b0337u, 0x3025072au, 0x22450c81u, 0xb584fbecu, 0x0a9bc65bu,
        0x364347feu, 0xd456cf45u, 0xd929f7e0u, 0x3133c9bfu, 0x12194c12u, 0xa9c8fc49u, 0x9349d914u, 0x56a0f163u, 0x5573a766u, 0x00f7178du, 0x09225388u, 0x88bd6147u, 0x22be2dfau, 0x43d2e511u, 0x14125b3cu, 0x7a937d6bu,
        0x7957f3ceu, 0x402868d5u, 0xd50e2430u, 0x3941e9cfu, 0x3d274ce2u, 0x8221e6d9u, 0xe5532264u, 0x5d1f8a73u, 0x0d6dcd36u, 0xb50be31du, 0x585c09d8u, 0x5b1f8357u, 0x3edc48cau, 0x4e5921a1u, 0x0314ce8cu, 0xda75387bu,
        0x8ce6d39eu, 0x06e6a665u, 0xbc4ea480u, 0x32784ddfu, 0x5658c1b2u, 0xe67fb569u, 0x8a73ffb4u, 0x74c8a783u, 0x7928a706u, 0xe5a1d2adu, 0xf27c9428u, 0xa7b26967u, 0x218c579au, 0x6980c231u, 0xdc2155dcu, 0x14d1f78bu,
        0x204ce76eu, 0x1e4a87f5u, 0xbf5078d0u, 0xcff7f5efu, 0x9c5aaa82u, 0xf3ab67f9u, 0x0ee17104u, 0xda4d4893u, 0x33a134d6u, 0x3f91e63du, 0x1488f278u, 0x85b71377u, 0xdf1b5a6au, 0x4b32c6c1u, 0xb20cf12cu, 0xfc7aba9bu,
        0x2e272f3eu, 0xce4d0d85u, 0xbbb8a120u, 0x1121e1ffu, 0xad1a0752u, 0x1cadfe89u, 0xe0107654u, 0xba9e6da3u, 0x8b1476a6u, 0x09f51dcdu, 0x50c624c8u, 0xe0ae8187u, 0xd316513au, 0xc7982f51u, 0xa0eca07cu, 0x5c8081abu,
        0xcc52ab0eu, 0x41273715u, 0x8c6c1d70u, 0x5197120fu, 0x55c3d822u, 0xbad07919u, 0x9cb60fa4u, 0x42ed16b3u, 0x50ff6c76u, 0xb624795du, 0xdeb92b18u, 0x8859b397u, 0x704a3c0au, 0x6119fbe1u, 0x1e1563ccu, 0x08344cbbu,
        0xfbec5adeu, 0x135204a5u, 0x598fedc0u, 0x5938861fu, 0x62c51cf2u, 0x9d9bd7a9u, 0x64c73cf4u, 0xb0aa43c3u, 0xaa1f1646u, 0x6fb8f8edu, 0xeb270568u, 0x40b9a9a7u, 0x10c41adau, 0xd8612c71u, 0x481c3b1cu, 0xeb271bcbu,
        0x79513eaeu, 0xe3867635u, 0xe8891210u, 0x6c273e2fu, 0x6fcad5c2u, 0x9ad91a39u, 0x2978fe44u, 0x6186f4d3u, 0xde707416u, 0xac8b9c7du, 0xe814b3b8u, 0xd20f63b7u, 0xc5d0edaau, 0xbc56c101u, 0x36d6266cu, 0x1929eedbu,
        0x8c1e567eu, 0xe2bd8bc5u, 0xebfc8a60u, 0x5ac43a3fu, 0xb7c20292u, 0x1e9140c9u, 0xfd405394u, 0xe37429e3u, 0x293085e6u, 0xbcb5640du, 0xdcc73608u, 0x18dbe1c7u, 0x27fdb47au, 0xfa23b991u, 0x4b5825bcu, 0xde4dc5ebu,
        0xd730a24eu, 0x64304555u, 0x53cf56b0u, 0x91b07a4fu, 0xe4d7a362u, 0xbb0d4b59u, 0x63d23ce4u, 0x04a2e2f3u, 0x88dc4bb6u, 0x5a8f4f9du, 0xb5c38c58u, 0x15e023d7u, 0x27176f4au, 0x6d311621u, 0x7ff7390cu, 0xcee3a0fbu,
    };
    uint32_t acc = 0x58c7cffbu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 95) & 255]);
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
    case 0: acc = heavy_round(acc, 0x5503c230u); break;
    case 1: acc = heavy_round(acc, 0x03aeefcfu); break;
    case 2: acc = heavy_round(acc, 0x8b149ae2u); break;
    case 3: acc = heavy_round(acc, 0xa242dcd9u); break;
    case 4: acc = heavy_round(acc, 0xaf03a064u); break;
    case 5: acc = heavy_round(acc, 0x3b49f073u); break;
    case 6: acc = heavy_round(acc, 0x3038fb36u); break;
    case 7: acc = heavy_round(acc, 0xebb1391du); break;
    case 8: acc = heavy_round(acc, 0x650567d8u); break;
    case 9: acc = heavy_round(acc, 0xa92d4957u); break;
    case 10: acc = heavy_round(acc, 0x087356cau); break;
    case 11: acc = heavy_round(acc, 0x1898d7a1u); break;
    case 12: acc = heavy_round(acc, 0x70d50c8cu); break;
    case 13: acc = heavy_round(acc, 0x13ec5e7bu); break;
    case 14: acc = heavy_round(acc, 0xa717c19eu); break;
    case 15: acc = heavy_round(acc, 0x1836bc65u); break;
    case 16: acc = heavy_round(acc, 0xac23c280u); break;
    case 17: acc = heavy_round(acc, 0x383ed3dfu); break;
    case 18: acc = heavy_round(acc, 0xd0d18fb2u); break;
    case 19: acc = heavy_round(acc, 0x5eb62b69u); break;
    case 20: acc = heavy_round(acc, 0xde3bfdb4u); break;
    case 21: acc = heavy_round(acc, 0x33248d83u); break;
    case 22: acc = heavy_round(acc, 0x37775506u); break;
    case 23: acc = heavy_round(acc, 0xe6f4a8adu); break;
    case 24: acc = heavy_round(acc, 0xeaf57228u); break;
    case 25: acc = heavy_round(acc, 0x1c49af67u); break;
    case 26: acc = heavy_round(acc, 0x291ee59au); break;
    case 27: acc = heavy_round(acc, 0x0e85f831u); break;
    case 28: acc = heavy_round(acc, 0x96e913dcu); break;
    case 29: acc = heavy_round(acc, 0xb4aa9d8bu); break;
    case 30: acc = heavy_round(acc, 0xc671556eu); break;
    case 31: acc = heavy_round(acc, 0xcff81df5u); break;
    case 32: acc = heavy_round(acc, 0x94e516d0u); break;
    case 33: acc = heavy_round(acc, 0x4d77fbefu); break;
    case 34: acc = heavy_round(acc, 0x943ef882u); break;
    case 35: acc = heavy_round(acc, 0x1f575df9u); break;
    case 36: acc = heavy_round(acc, 0xd0a0ef04u); break;
    case 37: acc = heavy_round(acc, 0x4b3aae93u); break;
    case 38: acc = heavy_round(acc, 0x7c5362d6u); break;
    case 39: acc = heavy_round(acc, 0x6cf23c3du); break;
    case 40: acc = heavy_round(acc, 0x2ab15078u); break;
    case 41: acc = heavy_round(acc, 0xe937d977u); break;
    case 42: acc = heavy_round(acc, 0x9189686au); break;
    case 43: acc = heavy_round(acc, 0x925d7cc1u); break;
    case 44: acc = heavy_round(acc, 0x19bc2f2cu); break;
    case 45: acc = heavy_round(acc, 0x2114e09bu); break;
    case 46: acc = heavy_round(acc, 0x2b1f1d3eu); break;
    case 47: acc = heavy_round(acc, 0xadb82385u); break;
    case 48: acc = heavy_round(acc, 0xe4ecbf20u); break;
    case 49: acc = heavy_round(acc, 0xdabb67ffu); break;
    case 50: acc = heavy_round(acc, 0x2b49d552u); break;
    case 51: acc = heavy_round(acc, 0xaf2f7489u); break;
    case 52: acc = heavy_round(acc, 0x6ba77454u); break;
    case 53: acc = heavy_round(acc, 0xc87d53a3u); break;
    case 54: acc = heavy_round(acc, 0x850a24a6u); break;
    case 55: acc = heavy_round(acc, 0x9cc2f3cdu); break;
    case 56: acc = heavy_round(acc, 0xae7e02c8u); break;
    case 57: acc = heavy_round(acc, 0x9378c787u); break;
    case 58: acc = heavy_round(acc, 0x553fdf3au); break;
    case 59: acc = heavy_round(acc, 0xd0486551u); break;
    case 60: acc = heavy_round(acc, 0x8d635e7cu); break;
    case 61: acc = heavy_round(acc, 0x3c3c27abu); break;
    case 62: acc = heavy_round(acc, 0x22fe190eu); break;
    case 63: acc = heavy_round(acc, 0xb3afcd15u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

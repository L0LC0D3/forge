#include "heavy.h"
#include "mods.h"

int mod_001(int x)
{
    static const uint32_t local[256] = {
        0x309256d4u, 0x7d29d423u, 0xf97fab26u, 0x7cd1c84du, 0xb869cd48u, 0xcda11007u, 0x6aae8dbau, 0x0aee41d1u, 0x262a90fcu, 0x4af8b82bu, 0x20a46f8eu, 0x4e193195u, 0x1504d5f0u, 0x1f5b708fu, 0x40e3a4a2u, 0x4f68db99u,
        0x7e321024u, 0x2aec1d33u, 0x5809c0f6u, 0x6fd5c3ddu, 0x36e8f398u, 0xa129e217u, 0x2fe3988au, 0x3f3eae61u, 0x7391744cu, 0x6a94233bu, 0x1cc13f5eu, 0xe1ac9f25u, 0x0438c640u, 0x6e8e849fu, 0x960a0972u, 0xc6d6da29u,
        0x3e455d74u, 0x2984ea43u, 0x2e108ac6u, 0xb7e6e36du, 0xc76aede8u, 0x334f7827u, 0x3d26975au, 0x7f7c7ef1u, 0xb5de6b9cu, 0x99d6924bu, 0xd3f1432eu, 0xaff1b0b5u, 0xb9ca0a90u, 0x33f6dcafu, 0xc8fce242u, 0x4bdebcb9u,
        0x44013ec4u, 0x50a53b53u, 0xf5910896u, 0x54de26fdu, 0xddf4bc38u, 0x6652d237u, 0xf5c48a2au, 0x8490b381u, 0x26e676ecu, 0xa691055bu, 0xffd17afeu, 0xb3e16645u, 0x2a5da2e0u, 0x99f578bfu, 0xa6a92f12u, 0xb4898349u,
        0x03dab414u, 0x283e1063u, 0x9bc83a66u, 0xa0d48e8du, 0x03cb5e88u, 0xb0b4f047u, 0xc44a70fau, 0xe5a44c11u, 0xc9be963cu, 0x16d47c6bu, 0x353ee6ceu, 0x8ab4bfd5u, 0x07d88f30u, 0xe72b58cfu, 0xeb3befe2u, 0x7d202dd9u,
        0xe386bd64u, 0xf8806973u, 0x51332036u, 0xe0231a1du, 0x2773d4d8u, 0x2d36d257u, 0xea854bcau, 0xa82048a1u, 0xbabbc98cu, 0x38f1f77bu, 0xb456869eu, 0x03e4bd65u, 0x115fcf80u, 0x8e797cdfu, 0x122224b2u, 0x582bbc69u,
        0x89fa5ab4u, 0xd9dd4683u, 0x598eba06u, 0xd162c9adu, 0xecb31f28u, 0xaad97867u, 0x51821a9au, 0xcfada931u, 0x7f7310dcu, 0x337a768bu, 0x38755a6eu, 0xb12a5ef5u, 0x635863d0u, 0x3f00e4efu, 0x2608cd82u, 0xbe752ef9u,
        0x2f6a8c04u, 0xc505a793u, 0xdbd807d6u, 0x3d6c9d3du, 0xfc8e3d78u, 0xbcdde277u, 0x598ddd6au, 0xee356dc1u, 0x56b96c2cu, 0x153ef99bu, 0xc838623eu, 0x767ea485u, 0xc7674c20u, 0xf42290ffu, 0x90dcea52u, 0x7f058589u,
        0xed4c5154u, 0xa2ea8ca3u, 0xb24c09a6u, 0x875994cdu, 0x554a2fc8u, 0xcac51087u, 0xaa35943au, 0xb3e09651u, 0x88a3db7cu, 0xe55080abu, 0x857c9e0eu, 0x1a1a8e15u, 0x04718870u, 0x057f810fu, 0xebcb7b22u, 0x4f25c019u,
        0x0e54aaa4u, 0x5cbcf5b3u, 0x3a67bf76u, 0x3c82b05du, 0x9a6bf618u, 0x20500297u, 0x02463f0au, 0x7f1822e1u, 0xb6875eccu, 0xb3000bbbu, 0x7d5f0ddeu, 0xd4771ba5u, 0x2e9c18c0u, 0x36f8b51fu, 0xcf417ff2u, 0x5a5edea9u,
        0x5e7897f4u, 0xebede2c3u, 0x24e82946u, 0xa480efedu, 0x64b89068u, 0xfd7fb8a7u, 0x07ccdddau, 0xec851371u, 0x2af8f61cu, 0xa5de9acbu, 0x783cb1aeu, 0xe04d4d35u, 0xf74bfd10u, 0xc8af2d2fu, 0xa2ebf8c2u, 0xd279e139u,
        0x7aed1944u, 0x6a2e53d3u, 0x45ca4716u, 0x512d537du, 0x9234feb8u, 0xa69532b7u, 0x181670aau, 0x67106801u, 0x29cda16cu, 0x0dbd2ddbu, 0xc9b2897eu, 0x0a9622c5u, 0xfd263560u, 0x8703e93fu, 0x6db7e592u, 0x7f7fc7c9u,
        0x22272e94u, 0x216f48e3u, 0x644b18e6u, 0xaea0db0du, 0x96264108u, 0x741170c7u, 0x17aff77au, 0xb7e32091u, 0x401a60bcu, 0x72acc4ebu, 0x209d954eu, 0x428a9c55u, 0x1c0fc1b0u, 0xda97e94fu, 0xa5d24662u, 0x4fb99259u,
        0x83dbd7e4u, 0x9be1c1f3u, 0x0ae79eb6u, 0x9334869du, 0xc9115758u, 0xe2b572d7u, 0x4266724au, 0x96663d21u, 0x9434340cu, 0xa4fe5ffbu, 0x571ad51eu, 0x29a3b9e5u, 0xbd2da200u, 0xd84c2d5fu, 0x00a81b32u, 0xe7b040e9u,
        0x91001534u, 0xb3f6bf03u, 0x575cd886u, 0xcf81562du, 0xb8bb41a8u, 0xa38238e7u, 0xfb46e11au, 0x3842bdb1u, 0x35b01b5cu, 0xcd42ff0bu, 0x428748eeu, 0xa39a7b75u, 0x26e4d650u, 0x5141b56fu, 0x42e66402u, 0x322cd379u,
        0x4bc8e684u, 0xa45f4013u, 0xcaa7c656u, 0xbe6049bdu, 0x7828fff8u, 0xabb8c2f7u, 0x9c9e43eau, 0xe161a241u, 0x6d6316acu, 0x7c4ba21bu, 0x837ff0beu, 0x6667e105u, 0xccda5ea0u, 0xe2d9817fu, 0x107a20d2u, 0xf0384a09u,
    };
    uint32_t acc = 0x25cbc109u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 1) & 255]);
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
    case 0: acc = heavy_round(acc, 0x739427ceu); break;
    case 1: acc = heavy_round(acc, 0x05ef0cd5u); break;
    case 2: acc = heavy_round(acc, 0x097c7830u); break;
    case 3: acc = heavy_round(acc, 0x0c542dcfu); break;
    case 4: acc = heavy_round(acc, 0xe02cc0e2u); break;
    case 5: acc = heavy_round(acc, 0x49a0cad9u); break;
    case 6: acc = heavy_round(acc, 0xd99cb664u); break;
    case 7: acc = heavy_round(acc, 0x89d40e73u); break;
    case 8: acc = heavy_round(acc, 0x23308136u); break;
    case 9: acc = heavy_round(acc, 0xf7a7071du); break;
    case 10: acc = heavy_round(acc, 0x0e94ddd8u); break;
    case 11: acc = heavy_round(acc, 0xf47a4757u); break;
    case 12: acc = heavy_round(acc, 0x56903ccau); break;
    case 13: acc = heavy_round(acc, 0x09b485a1u); break;
    case 14: acc = heavy_round(acc, 0xb490e28cu); break;
    case 15: acc = heavy_round(acc, 0x41ba3c7bu); break;
    case 16: acc = heavy_round(acc, 0xaf00079eu); break;
    case 17: acc = heavy_round(acc, 0xe0e64a65u); break;
    case 18: acc = heavy_round(acc, 0xada1f880u); break;
    case 19: acc = heavy_round(acc, 0xdb2b91dfu); break;
    case 20: acc = heavy_round(acc, 0xf88b35b2u); break;
    case 21: acc = heavy_round(acc, 0x91479969u); break;
    case 22: acc = heavy_round(acc, 0x1f7293b4u); break;
    case 23: acc = heavy_round(acc, 0xe8ae2b83u); break;
    case 24: acc = heavy_round(acc, 0xb2685b06u); break;
    case 25: acc = heavy_round(acc, 0xc395f6adu); break;
    case 26: acc = heavy_round(acc, 0x023a6828u); break;
    case 27: acc = heavy_round(acc, 0xcace2d67u); break;
    case 28: acc = heavy_round(acc, 0x1e0d4b9au); break;
    case 29: acc = heavy_round(acc, 0x71452631u); break;
    case 30: acc = heavy_round(acc, 0x44f269dcu); break;
    case 31: acc = heavy_round(acc, 0xa967fb8bu); break;
    case 32: acc = heavy_round(acc, 0xd5831b6eu); break;
    case 33: acc = heavy_round(acc, 0xfec32bf5u); break;
    case 34: acc = heavy_round(acc, 0x3ac8ccd0u); break;
    case 35: acc = heavy_round(acc, 0x3a8c39efu); break;
    case 36: acc = heavy_round(acc, 0xbcfa1e82u); break;
    case 37: acc = heavy_round(acc, 0x77fc4bf9u); break;
    case 38: acc = heavy_round(acc, 0x45d50504u); break;
    case 39: acc = heavy_round(acc, 0x25a3cc93u); break;
    case 40: acc = heavy_round(acc, 0x639de8d6u); break;
    case 41: acc = heavy_round(acc, 0xf31f0a3du); break;
    case 42: acc = heavy_round(acc, 0xf30bc678u); break;
    case 43: acc = heavy_round(acc, 0xa6d3d777u); break;
    case 44: acc = heavy_round(acc, 0x27a94e6au); break;
    case 45: acc = heavy_round(acc, 0x5da02ac1u); break;
    case 46: acc = heavy_round(acc, 0xfb73052cu); break;
    case 47: acc = heavy_round(acc, 0x56a1be9bu); break;
    case 48: acc = heavy_round(acc, 0xb1ba633eu); break;
    case 49: acc = heavy_round(acc, 0x377eb185u); break;
    case 50: acc = heavy_round(acc, 0xde95f520u); break;
    case 51: acc = heavy_round(acc, 0x39d725ffu); break;
    case 52: acc = heavy_round(acc, 0x9b667b52u); break;
    case 53: acc = heavy_round(acc, 0x00c7e289u); break;
    case 54: acc = heavy_round(acc, 0x0a390a54u); break;
    case 55: acc = heavy_round(acc, 0x7da5f1a3u); break;
    case 56: acc = heavy_round(acc, 0x550e2aa6u); break;
    case 57: acc = heavy_round(acc, 0x5d5b41cdu); break;
    case 58: acc = heavy_round(acc, 0xc34df8c8u); break;
    case 59: acc = heavy_round(acc, 0x840c4587u); break;
    case 60: acc = heavy_round(acc, 0x9ef1453au); break;
    case 61: acc = heavy_round(acc, 0x32ee9351u); break;
    case 62: acc = heavy_round(acc, 0x4427b47cu); break;
    case 63: acc = heavy_round(acc, 0x247885abu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

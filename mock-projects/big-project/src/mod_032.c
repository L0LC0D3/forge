#include "heavy.h"
#include "mods.h"

int mod_032(int x)
{
    static const uint32_t local[256] = {
        0xbf670873u, 0xd5433336u, 0xd786111du, 0x44e45fd8u, 0x164fe157u, 0x33c50ecau, 0xd30f2fa1u, 0xa7e7848cu, 0xf3ac767bu, 0xe568f99eu, 0x16a69465u, 0x3fe1ba80u, 0xa1b46bdfu, 0xde5a47b2u, 0x7ff78369u, 0x2f9d75b4u,
        0xe2e7a583u, 0x37ef8d06u, 0x4b5f80adu, 0xae726a28u, 0x0c724767u, 0x5fbe9d9au, 0x6ff25031u, 0x4c798bdcu, 0x34d0b58bu, 0xcdf08d6eu, 0x59bdf5f5u, 0x80010ed0u, 0x9ab393efu, 0x16d5b082u, 0xc64eb5f9u, 0x70406704u,
        0xa823c693u, 0x6bb99ad6u, 0xc773143du, 0x314c4878u, 0x35e67177u, 0xdef7206au, 0x303fd4c1u, 0xe54aa72cu, 0xf320f89bu, 0xff4c553eu, 0xf053fb85u, 0x76e6b720u, 0x153cffffu, 0x9e6e8d52u, 0x215ccc89u, 0xe104ec54u,
        0xb40c6ba3u, 0xd6de5ca6u, 0xcad9cbcdu, 0x37b6fac8u, 0x762d5f87u, 0xa4fb973au, 0xa020bd51u, 0xe66fd67cu, 0x71ae3fabu, 0xa759510eu, 0x3ca1a515u, 0xd777b370u, 0x64f1b00fu, 0xda51de22u, 0xa26ac719u, 0x78a005a4u,
        0xabd294b3u, 0x62dad276u, 0xfeeca75du, 0xd1378118u, 0x95081197u, 0xbc99020au, 0xf9fe09e1u, 0x1d3e19ccu, 0xfbc98abbu, 0xdf3480deu, 0x131ff2a5u, 0xa1d903c0u, 0x49b2a41fu, 0x2eeca2f2u, 0xd101a5a9u, 0xaf06b2f4u,
        0x44e741c3u, 0x4c6bfc46u, 0xc744a6edu, 0x0292db68u, 0x4e7787a7u, 0x17dc60dau, 0xb680ba71u, 0x004a711cu, 0xf503d9cbu, 0x7b3ae4aeu, 0x4a87e435u, 0x736fa810u, 0xffa0dc2fu, 0xcfebdbc2u, 0x3aea6839u, 0xcd6df444u,
        0x54fb72d3u, 0xf38eda16u, 0xd1baca7du, 0x15ce09b8u, 0x62bcc1b7u, 0x6012b3aau, 0x1c91cf01u, 0xff69dc6cu, 0xe92e2cdbu, 0xdb097c7eu, 0x4bd279c5u, 0xd6e0a060u, 0x4f1d583fu, 0x903c8892u, 0x042e0ec9u, 0x3e4ac994u,
        0xe20027e3u, 0xab806be6u, 0xa668120du, 0xea2e0c08u, 0xa658bfc7u, 0xc5c8fa7au, 0xd15a4791u, 0xd3b15bbcu, 0x9c5983ebu, 0xb97d484eu, 0xa238b355u, 0x9410ecb0u, 0x9cc9184fu, 0xb20ba962u, 0x77159959u, 0xdd5232e4u,
        0x322660f3u, 0x8abdb1b6u, 0x37a57d9du, 0x4437e258u, 0x120c81d7u, 0xd0cc354au, 0x68432421u, 0xcf75ef0cu, 0x1ad6defbu, 0xfcb3481eu, 0x8b3390e5u, 0x00258d00u, 0xf9851c5fu, 0xb6c63e32u, 0x942a07e9u, 0x47793034u,
        0xdbdf1e03u, 0x3b03ab86u, 0x720c0d2du, 0x1db08ca8u, 0xd2d907e7u, 0x3029641au, 0xf2f564b1u, 0x2e4c965cu, 0xc9373e0bu, 0x86087beeu, 0x867c1275u, 0x4d838150u, 0x3272646fu, 0x2f194702u, 0xa2345a79u, 0x2af4c184u,
        0xd5db5f13u, 0xc94f5956u, 0xcc74c0bdu, 0xf59d0af8u, 0x59ff51f7u, 0x8a2d86eau, 0x915a0941u, 0x650a51acu, 0x744ba11bu, 0x0219e3beu, 0xe60b3805u, 0xdbcfc9a0u, 0xe0f1f07fu, 0x8af1c3d2u, 0xbe3d9109u, 0x9739e6d4u,
        0x870c2423u, 0x75ddbb26u, 0xd7f8984du, 0x20425d48u, 0x6d006007u, 0x4c659dbau, 0x019a11d1u, 0x71c420fcu, 0x6125082bu, 0xb8c47f8eu, 0x5e1a0195u, 0x87ef65f0u, 0x7aa4c08fu, 0xe97cb4a2u, 0x6b8eab99u, 0x4cfda024u,
        0xd6a26d33u, 0x842bd0f6u, 0xcff093ddu, 0x17258398u, 0x359d3217u, 0x7b9ea88au, 0x301e7e61u, 0x2bcf044cu, 0x5d14733bu, 0x5d254f5eu, 0x95216f25u, 0xfc075640u, 0x616bd49fu, 0xe9271972u, 0x23b0aa29u, 0x0e34ed74u,
        0x3c0f3a43u, 0x0af69ac6u, 0x29f5b36du, 0xc90b7de8u, 0x51d6c827u, 0x83e5a75au, 0xc7904ef1u, 0x93bffb9cu, 0xcdaae24bu, 0xdd99532eu, 0xb3da80b5u, 0xff7c9a90u, 0xf3682cafu, 0x779df242u, 0xe66c8cb9u, 0xee14cec4u,
        0xcf038b53u, 0xc43b1896u, 0x25e0f6fdu, 0xe9f94c38u, 0xe3ee2237u, 0x08879a2au, 0xc0d88381u, 0x236c06ecu, 0xc0b9555bu, 0x33bd8afeu, 0xf53e3645u, 0xc6f432e0u, 0x9afac8bfu, 0xa1ce3f12u, 0xc9cb5349u, 0xa1124414u,
        0x57706063u, 0xdd364a66u, 0x5dcb5e8du, 0x4333ee88u, 0xa2644047u, 0xb41180fau, 0xf3201c11u, 0x1de8263cu, 0xfc50cc6bu, 0x346ef6ceu, 0x36858fd5u, 0x44531f30u, 0xdec4a8cfu, 0x63e4ffe2u, 0x8a15fdd9u, 0xcce24d64u,
    };
    uint32_t acc = 0x59a71864u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 32) & 255]);
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
    case 0: acc = heavy_round(acc, 0x9ee2a0abu); break;
    case 1: acc = heavy_round(acc, 0x4aa83e0eu); break;
    case 2: acc = heavy_round(acc, 0x1f11ae15u); break;
    case 3: acc = heavy_round(acc, 0xdbbe2870u); break;
    case 4: acc = heavy_round(acc, 0x1c23a10fu); break;
    case 5: acc = heavy_round(acc, 0x96e11b22u); break;
    case 6: acc = heavy_round(acc, 0x3cfee019u); break;
    case 7: acc = heavy_round(acc, 0xc51b4aa4u); break;
    case 8: acc = heavy_round(acc, 0x689315b3u); break;
    case 9: acc = heavy_round(acc, 0x45075f76u); break;
    case 10: acc = heavy_round(acc, 0x005dd05du); break;
    case 11: acc = heavy_round(acc, 0xfb4c9618u); break;
    case 12: acc = heavy_round(acc, 0x2b782297u); break;
    case 13: acc = heavy_round(acc, 0xb00fdf0au); break;
    case 14: acc = heavy_round(acc, 0x481542e1u); break;
    case 15: acc = heavy_round(acc, 0xe621feccu); break;
    case 16: acc = heavy_round(acc, 0x599a2bbbu); break;
    case 17: acc = heavy_round(acc, 0x7bf2addeu); break;
    case 18: acc = heavy_round(acc, 0x33b63ba5u); break;
    case 19: acc = heavy_round(acc, 0x4b90b8c0u); break;
    case 20: acc = heavy_round(acc, 0xc724d51fu); break;
    case 21: acc = heavy_round(acc, 0xd63f1ff2u); break;
    case 22: acc = heavy_round(acc, 0x62fffea9u); break;
    case 23: acc = heavy_round(acc, 0x216737f4u); break;
    case 24: acc = heavy_round(acc, 0x85cc02c3u); break;
    case 25: acc = heavy_round(acc, 0x95efc946u); break;
    case 26: acc = heavy_round(acc, 0x0ba40fedu); break;
    case 27: acc = heavy_round(acc, 0xc0413068u); break;
    case 28: acc = heavy_round(acc, 0xb32fd8a7u); break;
    case 29: acc = heavy_round(acc, 0x8e7e7ddau); break;
    case 30: acc = heavy_round(acc, 0x294a3371u); break;
    case 31: acc = heavy_round(acc, 0xebbb961cu); break;
    case 32: acc = heavy_round(acc, 0x9b80bacbu); break;
    case 33: acc = heavy_round(acc, 0xaa3851aeu); break;
    case 34: acc = heavy_round(acc, 0x4bd46d35u); break;
    case 35: acc = heavy_round(acc, 0x63e89d10u); break;
    case 36: acc = heavy_round(acc, 0x54634d2fu); break;
    case 37: acc = heavy_round(acc, 0x9fd198c2u); break;
    case 38: acc = heavy_round(acc, 0xc7e30139u); break;
    case 39: acc = heavy_round(acc, 0xf403b944u); break;
    case 40: acc = heavy_round(acc, 0x341473d3u); break;
    case 41: acc = heavy_round(acc, 0x5739e716u); break;
    case 42: acc = heavy_round(acc, 0x4d98737du); break;
    case 43: acc = heavy_round(acc, 0x32659eb8u); break;
    case 44: acc = heavy_round(acc, 0xc8cd52b7u); break;
    case 45: acc = heavy_round(acc, 0x51b010aau); break;
    case 46: acc = heavy_round(acc, 0x299d8801u); break;
    case 47: acc = heavy_round(acc, 0x65b8416cu); break;
    case 48: acc = heavy_round(acc, 0x34674ddbu); break;
    case 49: acc = heavy_round(acc, 0xa916297eu); break;
    case 50: acc = heavy_round(acc, 0xb46542c5u); break;
    case 51: acc = heavy_round(acc, 0x436ad560u); break;
    case 52: acc = heavy_round(acc, 0x1040093fu); break;
    case 53: acc = heavy_round(acc, 0x7a858592u); break;
    case 54: acc = heavy_round(acc, 0xb3b0e7c9u); break;
    case 55: acc = heavy_round(acc, 0x7b65ce94u); break;
    case 56: acc = heavy_round(acc, 0x3d5d68e3u); break;
    case 57: acc = heavy_round(acc, 0xd022b8e6u); break;
    case 58: acc = heavy_round(acc, 0xb253fb0du); break;
    case 59: acc = heavy_round(acc, 0x44fee108u); break;
    case 60: acc = heavy_round(acc, 0x44d190c7u); break;
    case 61: acc = heavy_round(acc, 0x5e31977au); break;
    case 62: acc = heavy_round(acc, 0x92384091u); break;
    case 63: acc = heavy_round(acc, 0x612d00bcu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

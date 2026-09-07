#include "heavy.h"
#include "mods.h"

int mod_109(int x)
{
    static const uint32_t local[256] = {
        0x1d767ad8u, 0xef7d4057u, 0x95ece1cau, 0x4826e6a1u, 0xec05cf8cu, 0xce18457bu, 0x285c7c9eu, 0x4e363b65u, 0x9db73580u, 0x778daadfu, 0x707c7ab2u, 0x87061a69u, 0x1a8520b4u, 0xd1cd5483u, 0xf4537006u, 0xd3e407adu,
        0x99f74528u, 0x54736667u, 0x8127309au, 0x27d3c731u, 0x175696dcu, 0xa76c448bu, 0x91d0d06eu, 0x31d35cf5u, 0x0f2149d0u, 0x79d892efu, 0x1050a382u, 0x295f0cf9u, 0x79bed204u, 0xf5313593u, 0x86a23dd6u, 0xc1355b3du,
        0x3773e378u, 0x70ab5077u, 0x12d0736au, 0x845b0bc1u, 0x6196722cu, 0x48dc479bu, 0xb249583eu, 0x215f2285u, 0x3501b220u, 0xff9dbeffu, 0xb8724052u, 0x67dee389u, 0x89ca1754u, 0x08319aa3u, 0x847bbfa6u, 0xfc49d2cdu,
        0x0c3155c8u, 0xe3a5fe87u, 0xca75aa3au, 0x05e5b451u, 0xaada617cu, 0x71794eabu, 0x03a3140eu, 0x5b128c15u, 0xee3d6e70u, 0x987e2f0fu, 0xda0e5122u, 0xefce9e19u, 0x2d5bf0a4u, 0xabff83b3u, 0xa35cf576u, 0x8a7a6e5du,
        0xd3b49c18u, 0x31247097u, 0x3ee3d50au, 0x02dcc0e1u, 0x2c7764ccu, 0xe89459bbu, 0xeafb03deu, 0x8f6699a5u, 0x66f97ec0u, 0x405ae31fu, 0xe591d5f2u, 0xe4b73ca9u, 0xc8695df4u, 0x920bf0c3u, 0xec02df46u, 0x2b602dedu,
        0x3ec2b668u, 0xd127a6a7u, 0xee27f3dau, 0x0fe93171u, 0xc9027c1cu, 0x8dbe68cbu, 0x88ae27aeu, 0x71144b35u, 0x689ae310u, 0x6f54db2fu, 0x1aa9cec2u, 0x7061bf39u, 0x90275f44u, 0x8c07e1d3u, 0x8a6a7d16u, 0xe8d4117du,
        0x4360a4b8u, 0x3ff0a0b7u, 0x0d8f06aau, 0x8ff40601u, 0x5c50a76cu, 0x68c87bdbu, 0x88597f7eu, 0x4514a0c5u, 0xa9c69b60u, 0x29cd173fu, 0x58433b92u, 0x52d725c9u, 0xdb0af494u, 0x9be456e3u, 0x9dd0cee6u, 0xa6ef190du,
        0x6cd36708u, 0x0e005ec7u, 0x59a60d7au, 0x44263e91u, 0x0b76e6bcu, 0xb9c392ebu, 0xf0da0b4eu, 0x72a09a55u, 0x1e61a7b0u, 0x1064974fu, 0xec8b1c62u, 0x72607059u, 0x70c91de4u, 0x03d24ff3u, 0x08b2d4b6u, 0xb40a449du,
        0x2b9ffd58u, 0xf017e0d7u, 0xe63a084au, 0xdbe8db21u, 0x94ca3a0cu, 0x0900adfbu, 0xf44ccb1eu, 0x133137e5u, 0x47910800u, 0x6ffc5b5fu, 0x64ee7132u, 0x6b869ee9u, 0xda56db34u, 0x5642cd03u, 0x40cd8e86u, 0x58be942du,
        0x258b67a8u, 0xcf3826e7u, 0xee57f71au, 0x84e4dbb1u, 0x9fdfa15cu, 0x3710cd0bu, 0xc00ebeeeu, 0x827f7975u, 0x83b9bc50u, 0x51b5636fu, 0x5e1a3a02u, 0x2112b179u, 0xb1e92c84u, 0x85e6ce13u, 0x1f1dfc56u, 0x67e507bdu,
        0x859aa5f8u, 0xd8a230f7u, 0xa44cd9eau, 0x7b034041u, 0x0d8c1cacu, 0x8cc4f01bu, 0x4cbce6beu, 0xee845f05u, 0x5e80c4a0u, 0x8af0af7fu, 0x53fb76d2u, 0x4c0da809u, 0xf2f511d4u, 0xf5af5323u, 0xafe11e26u, 0xce969f4du,
        0x4c12b848u, 0x8dd6ff07u, 0x01a5b0bau, 0x986d08d1u, 0x47e4abfcu, 0xcb2e172bu, 0x2e34428eu, 0xe778e895u, 0xe0cb20f0u, 0xcd4f3f8fu, 0x71bf27a2u, 0x0bc08299u, 0x4a2f8b24u, 0x88cd5c33u, 0x0293f3f6u, 0x242c5addu,
        0x9e789e98u, 0xd4979117u, 0x972f7b8au, 0xe58b3561u, 0x923e4f4cu, 0x3b9d423bu, 0x6391d25eu, 0xefd61625u, 0xe0bdd140u, 0xb6b2139fu, 0x61d24c72u, 0x75b44129u, 0x658d9874u, 0xb2b1e943u, 0xf9f37dc6u, 0x3a3f3a6du,
        0x179158e8u, 0x06e4e727u, 0x5cf73a5au, 0x2906c5f1u, 0x592e069cu, 0xbfa3714bu, 0x2732962eu, 0x0c54e7b5u, 0x51bdd590u, 0xe13a2bafu, 0x1de1e542u, 0x25b1e3b9u, 0x444439c4u, 0x870dfa53u, 0x1bfcbb96u, 0xaca83dfdu,
        0x1761e738u, 0x03000137u, 0x8249ed2au, 0x77c8ba81u, 0x8288d1ecu, 0xe111a45bu, 0xbeb38dfeu, 0x53ee5d45u, 0x94702de0u, 0xf34887bfu, 0xbedaf212u, 0xcdc26a49u, 0x86c86f14u, 0xc9d28f63u, 0x61ecad66u, 0x7180658du,
        0x132f4988u, 0x3b69df47u, 0x3db493fau, 0xc4fa1311u, 0xbd63b13cu, 0xe1f8db6bu, 0x4af1b9ceu, 0x7fdb76d5u, 0xc6b9da30u, 0xaf7e27cfu, 0x4cea72e2u, 0xc62ed4d9u, 0xbecf3864u, 0xff30a873u, 0x08405336u, 0x6920b11du,
    };
    uint32_t acc = 0x593cd81du ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 109) & 255]);
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
    case 0: acc = heavy_round(acc, 0x9b92899au); break;
    case 1: acc = heavy_round(acc, 0xf5bd4c31u); break;
    case 2: acc = heavy_round(acc, 0x943057dcu); break;
    case 3: acc = heavy_round(acc, 0x9a61118bu); break;
    case 4: acc = heavy_round(acc, 0x76ed396eu); break;
    case 5: acc = heavy_round(acc, 0x671ab1f5u); break;
    case 6: acc = heavy_round(acc, 0x7c9e9ad0u); break;
    case 7: acc = heavy_round(acc, 0xe07bafefu); break;
    case 8: acc = heavy_round(acc, 0x19271c82u); break;
    case 9: acc = heavy_round(acc, 0xe17931f9u); break;
    case 10: acc = heavy_round(acc, 0xdad0b304u); break;
    case 11: acc = heavy_round(acc, 0xfbbfa293u); break;
    case 12: acc = heavy_round(acc, 0x404bc6d6u); break;
    case 13: acc = heavy_round(acc, 0x1c67503du); break;
    case 14: acc = heavy_round(acc, 0xad9b5478u); break;
    case 15: acc = heavy_round(acc, 0x30b20d77u); break;
    case 16: acc = heavy_round(acc, 0xf7760c6au); break;
    case 17: acc = heavy_round(acc, 0x0cb9d0c1u); break;
    case 18: acc = heavy_round(acc, 0x4de4732cu); break;
    case 19: acc = heavy_round(acc, 0x7638549bu); break;
    case 20: acc = heavy_round(acc, 0xf224013eu); break;
    case 21: acc = heavy_round(acc, 0xffcfb785u); break;
    case 22: acc = heavy_round(acc, 0xe9174320u); break;
    case 23: acc = heavy_round(acc, 0xe57c1bffu); break;
    case 24: acc = heavy_round(acc, 0x12caf952u); break;
    case 25: acc = heavy_round(acc, 0x69164889u); break;
    case 26: acc = heavy_round(acc, 0x88d83854u); break;
    case 27: acc = heavy_round(acc, 0xd60f47a3u); break;
    case 28: acc = heavy_round(acc, 0x30ab88a6u); break;
    case 29: acc = heavy_round(acc, 0x65cd07cdu); break;
    case 30: acc = heavy_round(acc, 0xdbf906c8u); break;
    case 31: acc = heavy_round(acc, 0x4a4ffb87u); break;
    case 32: acc = heavy_round(acc, 0x70e5833au); break;
    case 33: acc = heavy_round(acc, 0x3b09b951u); break;
    case 34: acc = heavy_round(acc, 0x34aca27cu); break;
    case 35: acc = heavy_round(acc, 0x900c9babu); break;
    case 36: acc = heavy_round(acc, 0xc6cbfd0eu); break;
    case 37: acc = heavy_round(acc, 0x51fc6115u); break;
    case 38: acc = heavy_round(acc, 0x6ffb3f70u); break;
    case 39: acc = heavy_round(acc, 0x3967cc0fu); break;
    case 40: acc = heavy_round(acc, 0x6f794a22u); break;
    case 41: acc = heavy_round(acc, 0x76734319u); break;
    case 42: acc = heavy_round(acc, 0xba7651a4u); break;
    case 43: acc = heavy_round(acc, 0xd1fc70b3u); break;
    case 44: acc = heavy_round(acc, 0x7ca2fe76u); break;
    case 45: acc = heavy_round(acc, 0x5b9ee35du); break;
    case 46: acc = heavy_round(acc, 0x662c8d18u); break;
    case 47: acc = heavy_round(acc, 0xf441ad97u); break;
    case 48: acc = heavy_round(acc, 0xc2adee0au); break;
    case 49: acc = heavy_round(acc, 0xab1605e1u); break;
    case 50: acc = heavy_round(acc, 0x45dde5ccu); break;
    case 51: acc = heavy_round(acc, 0xa32ee6bbu); break;
    case 52: acc = heavy_round(acc, 0xbe022cdeu); break;
    case 53: acc = heavy_round(acc, 0x2219aea5u); break;
    case 54: acc = heavy_round(acc, 0x416f8fc0u); break;
    case 55: acc = heavy_round(acc, 0x0c1fc01fu); break;
    case 56: acc = heavy_round(acc, 0x439f0ef2u); break;
    case 57: acc = heavy_round(acc, 0x811921a9u); break;
    case 58: acc = heavy_round(acc, 0x179ffef4u); break;
    case 59: acc = heavy_round(acc, 0x14f81dc3u); break;
    case 60: acc = heavy_round(acc, 0x10ef2846u); break;
    case 61: acc = heavy_round(acc, 0x5175e2edu); break;
    case 62: acc = heavy_round(acc, 0x80fae768u); break;
    case 63: acc = heavy_round(acc, 0x5a8823a7u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_026(int x)
{
    static const uint32_t local[256] = {
        0xed718031u, 0x090efbdcu, 0x4307658bu, 0x80d77d6eu, 0xe31825f5u, 0x18b57ed0u, 0x307d43efu, 0x3e33a082u, 0xa3b3e5f9u, 0xaf83d704u, 0xad307693u, 0xeb7e8ad6u, 0x2c13443du, 0xd08eb878u, 0xb4e62177u, 0x6213106au,
        0x6a4b04c1u, 0xfcfc172cu, 0xc9c3a89bu, 0xe7af453eu, 0x98fa2b85u, 0xee772720u, 0xa432afffu, 0xf5087d52u, 0x4ccdfc89u, 0xdee45c54u, 0x8f051ba3u, 0x3b9f4ca6u, 0x3845fbcdu, 0x91556ac8u, 0x13d90f87u, 0x3ed3873au,
        0xe9b7ed51u, 0x903d467cu, 0xdbbcefabu, 0x1438410eu, 0x0793d515u, 0x54e42370u, 0xe813600fu, 0x1f27ce22u, 0xcee7f719u, 0x4c1b75a4u, 0x87b744b3u, 0xdb97c276u, 0xd824d75du, 0xec31f118u, 0xac5fc197u, 0x0c2cf20au,
        0x662139e1u, 0x502789ccu, 0x84443abbu, 0xdf8f70deu, 0xc35e22a5u, 0x0c2173c0u, 0x7c00541fu, 0xe0fe92f2u, 0x718ad5a9u, 0x2f1e22f4u, 0x0cb7f1c3u, 0xc824ec46u, 0x2f48d6edu, 0xa5e94b68u, 0xfa7b37a7u, 0x7c2c50dau,
        0x182fea71u, 0x734fe11cu, 0xe6ea89cbu, 0xde11d4aeu, 0x63121435u, 0x71941810u, 0x5c1a8c2fu, 0x2e39cbc2u, 0x827f9839u, 0x91216444u, 0xb3b822d3u, 0x2143ca16u, 0xab8afa7du, 0xc88079b8u, 0x7e6c71b7u, 0xf81ea3aau,
        0x06ccff01u, 0x298b4c6cu, 0x4f80dcdbu, 0x2f5c6c7eu, 0x0fa8a9c5u, 0xcfe11060u, 0x10c3083fu, 0x99c67892u, 0xe5cf3ec9u, 0x9c9a3994u, 0x42a8d7e3u, 0xfa315be6u, 0x9504420du, 0xf33c7c08u, 0xccb46fc7u, 0x7090ea7au,
        0x97217791u, 0xebeecbbcu, 0x421833ebu, 0x4e4c384eu, 0x145ae355u, 0xaeed5cb0u, 0xbe9ac84fu, 0x25d19962u, 0xa5c2c959u, 0xed3da2e4u, 0xbfbb10f3u, 0x296aa1b6u, 0x9e0dad9du, 0xaaa25258u, 0x9e1431d7u, 0x2d50254au,
        0x1c965421u, 0xcccf5f0cu, 0x8b018efbu, 0xe0fe381eu, 0x6ea1c0e5u, 0x23ddfd00u, 0x3682cc5fu, 0x13c82e32u, 0x82e337e9u, 0xe000a034u, 0x815fce03u, 0x18ac9b86u, 0x73403d2du, 0xa876fca8u, 0xdf8cb7e7u, 0x9d69541au,
        0x68d494b1u, 0xc7c2065cu, 0x4ecdee0bu, 0x88cf6beeu, 0x5e364275u, 0x2117f150u, 0x059c146fu, 0xb4573702u, 0x83f98a79u, 0xe3183184u, 0x3e480f13u, 0x94f44956u, 0x4b74f0bdu, 0x2bbf7af8u, 0xc25f01f7u, 0x272976eau,
        0x5bc53941u, 0x119bc1acu, 0x1a4e511bu, 0xb25cd3beu, 0xf5116805u, 0xc64039a0u, 0x8547a07fu, 0x376bb3d2u, 0x860ec109u, 0xc5f956d4u, 0x1d64d423u, 0x9e7eab26u, 0x77c4c84du, 0x48c0cd48u, 0xcc0c1007u, 0xf81d8dbau,
        0x739141d1u, 0x687190fcu, 0xf293b82bu, 0x65836f8eu, 0xa76c3195u, 0xb03bd5f0u, 0xeb26708fu, 0x7c32a4a2u, 0xcc6bdb99u, 0x09591024u, 0xc5e71d33u, 0x38c8c0f6u, 0xf388c3ddu, 0x38fff398u, 0xe654e217u, 0xd512988au,
        0x5ca1ae61u, 0x6398744cu, 0x64ef233bu, 0x15603f5eu, 0xdbbf9f25u, 0x492fc640u, 0x5919849fu, 0xe1190972u, 0x9099da29u, 0x2f2c5d74u, 0x6f3fea43u, 0x3a8f8ac6u, 0xf459e36du, 0xab41ede8u, 0x6f3a7827u, 0xea15975au,
        0x819f7ef1u, 0xc3a56b9cu, 0x96f1924bu, 0x7050432eu, 0x7ac4b0b5u, 0x18810a90u, 0xed41dcafu, 0x13cbe242u, 0x9261bcb9u, 0x0aa83ec4u, 0xf1203b53u, 0x1dd00896u, 0x7a1126fdu, 0x138bbc38u, 0x48fdd237u, 0x9a738a2au,
        0x9b73b381u, 0xc26d76ecu, 0x566c055bu, 0x2ff07afeu, 0x7f746645u, 0x12d4a2e0u, 0xd20078bfu, 0xe1382f12u, 0xa7cc8349u, 0x1041b414u, 0xd3791063u, 0xcfc73a66u, 0xdec78e8du, 0xfb225e88u, 0xea1ff047u, 0x50b970fau,
        0x41474c11u, 0x6305963cu, 0x296f7c6bu, 0xe91de6ceu, 0x8707bfd5u, 0xea0f8f30u, 0x4df658cfu, 0x058aefe2u, 0x4d232dd9u, 0xa5adbd64u, 0x5e7b6973u, 0x80f22036u, 0x66d61a1du, 0x508ad4d8u, 0x6d61d257u, 0x4eb44bcau,
        0x788348a1u, 0xc1c2c98cu, 0x5e4cf77bu, 0xdbf5869eu, 0x60f7bd65u, 0x5d56cf80u, 0xd4047cdfu, 0xfc3124b2u, 0x34eebc69u, 0x71e15ab4u, 0xaa984683u, 0x750dba06u, 0xd0d5c9adu, 0xb78a1f28u, 0xa1c47867u, 0x7d711a9au,
    };
    uint32_t acc = 0xab1e8d9au ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 26) & 255]);
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
    case 0: acc = heavy_round(acc, 0x6e0e9bb9u); break;
    case 1: acc = heavy_round(acc, 0xda4991c4u); break;
    case 2: acc = heavy_round(acc, 0xde637253u); break;
    case 3: acc = heavy_round(acc, 0x5123d396u); break;
    case 4: acc = heavy_round(acc, 0x4b3475fdu); break;
    case 5: acc = heavy_round(acc, 0x7ad0bf38u); break;
    case 6: acc = heavy_round(acc, 0x51b0f937u); break;
    case 7: acc = heavy_round(acc, 0x3c16852au); break;
    case 8: acc = heavy_round(acc, 0x43bc7281u); break;
    case 9: acc = heavy_round(acc, 0xf13929ecu); break;
    case 10: acc = heavy_round(acc, 0x5b161c5bu); break;
    case 11: acc = heavy_round(acc, 0x70bda5feu); break;
    case 12: acc = heavy_round(acc, 0xbc019545u); break;
    case 13: acc = heavy_round(acc, 0xfdba05e0u); break;
    case 14: acc = heavy_round(acc, 0xd0187fbfu); break;
    case 15: acc = heavy_round(acc, 0x0a3a8a12u); break;
    case 16: acc = heavy_round(acc, 0x902d2249u); break;
    case 17: acc = heavy_round(acc, 0xe383c714u); break;
    case 18: acc = heavy_round(acc, 0xbc660763u); break;
    case 19: acc = heavy_round(acc, 0x2d39c566u); break;
    case 20: acc = heavy_round(acc, 0xd3fa9d8du); break;
    case 21: acc = heavy_round(acc, 0x3db42188u); break;
    case 22: acc = heavy_round(acc, 0x6a38d747u); break;
    case 23: acc = heavy_round(acc, 0x4d072bfau); break;
    case 24: acc = heavy_round(acc, 0x4cbbcb11u); break;
    case 25: acc = heavy_round(acc, 0xc98a093cu); break;
    case 26: acc = heavy_round(acc, 0x5efb536bu); break;
    case 27: acc = heavy_round(acc, 0x57e1d1ceu); break;
    case 28: acc = heavy_round(acc, 0x299caed5u); break;
    case 29: acc = heavy_round(acc, 0xd9d9b230u); break;
    case 30: acc = heavy_round(acc, 0x702c1fcfu); break;
    case 31: acc = heavy_round(acc, 0x9e900ae2u); break;
    case 32: acc = heavy_round(acc, 0xbe278cd9u); break;
    case 33: acc = heavy_round(acc, 0x67c09064u); break;
    case 34: acc = heavy_round(acc, 0x54822073u); break;
    case 35: acc = heavy_round(acc, 0x8b336b36u); break;
    case 36: acc = heavy_round(acc, 0x4308e91du); break;
    case 37: acc = heavy_round(acc, 0xf49957d8u); break;
    case 38: acc = heavy_round(acc, 0x55507957u); break;
    case 39: acc = heavy_round(acc, 0x7b5cc6cau); break;
    case 40: acc = heavy_round(acc, 0xe11387a1u); break;
    case 41: acc = heavy_round(acc, 0xb12ffc8cu); break;
    case 42: acc = heavy_round(acc, 0x042a8e7bu); break;
    case 43: acc = heavy_round(acc, 0x5160319eu); break;
    case 44: acc = heavy_round(acc, 0x8a846c65u); break;
    case 45: acc = heavy_round(acc, 0x9e35b280u); break;
    case 46: acc = heavy_round(acc, 0x18c803dfu); break;
    case 47: acc = heavy_round(acc, 0x90e8ffb2u); break;
    case 48: acc = heavy_round(acc, 0x6686db69u); break;
    case 49: acc = heavy_round(acc, 0x99f4edb4u); break;
    case 50: acc = heavy_round(acc, 0xdb28bd83u); break;
    case 51: acc = heavy_round(acc, 0x1acdc506u); break;
    case 52: acc = heavy_round(acc, 0xd2f858adu); break;
    case 53: acc = heavy_round(acc, 0x8f456228u); break;
    case 54: acc = heavy_round(acc, 0xbdf8df67u); break;
    case 55: acc = heavy_round(acc, 0xdc24559au); break;
    case 56: acc = heavy_round(acc, 0x406ca831u); break;
    case 57: acc = heavy_round(acc, 0x39c003dcu); break;
    case 58: acc = heavy_round(acc, 0x0d34cd8bu); break;
    case 59: acc = heavy_round(acc, 0x0495c56eu); break;
    case 60: acc = heavy_round(acc, 0x6c71cdf5u); break;
    case 61: acc = heavy_round(acc, 0x333306d0u); break;
    case 62: acc = heavy_round(acc, 0xd50d2befu); break;
    case 63: acc = heavy_round(acc, 0x97f26882u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

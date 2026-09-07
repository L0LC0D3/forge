#include "heavy.h"
#include "mods.h"

int mod_027(int x)
{
    static const uint32_t local[256] = {
        0x968d27a2u, 0xfe368299u, 0x9e2d8b24u, 0x00b35c33u, 0xbd41f3f6u, 0xf3025addu, 0x63569e98u, 0x47dd9117u, 0x55bd7b8au, 0x26c13561u, 0x65fc4f4cu, 0xb043423bu, 0x73ffd25eu, 0x996c1625u, 0x415bd140u, 0x92b8139fu,
        0xf2204c72u, 0xddaa4129u, 0xb10b9874u, 0xbc17e943u, 0x18217dc6u, 0x16953a6du, 0x8bef58e8u, 0x63aae727u, 0xf7053a5au, 0x8fbcc5f1u, 0x146c069cu, 0xf5c9714bu, 0x0b20962eu, 0x736ae7b5u, 0x51dbd590u, 0xd6c02bafu,
        0xf9afe542u, 0x6327e3b9u, 0x674239c4u, 0x81f3fa53u, 0x7daabb96u, 0xf67e3dfdu, 0x1b3fe738u, 0xa9460137u, 0xd7d7ed2au, 0x63feba81u, 0x0546d1ecu, 0x38b7a45bu, 0x56218dfeu, 0xd8845d45u, 0x140e2de0u, 0x624e87bfu,
        0xc628f212u, 0x40b86a49u, 0x61466f14u, 0x16388f63u, 0xe71aad66u, 0x88d6658du, 0x868d4988u, 0x8b2fdf47u, 0x2ec293fau, 0x96b01311u, 0xe7a1b13cu, 0xbb1edb6bu, 0x75dfb9ceu, 0x81f176d5u, 0xa5d7da30u, 0xf80427cfu,
        0x5fb872e2u, 0xcea4d4d9u, 0x30cd3864u, 0xfd16a873u, 0x90ee5336u, 0xadf6b11du, 0xa85c7fd8u, 0x20298157u, 0x09922ecau, 0x8939cfa1u, 0x83d1a48cu, 0x8750167bu, 0x3678199eu, 0x5b2b3465u, 0x325dda80u, 0x86c20bdfu,
        0x8dcb67b2u, 0x9b762369u, 0xa8cb95b4u, 0x8aff4583u, 0xcae2ad06u, 0xc07820adu, 0x10728a28u, 0x3333e767u, 0x1d53bd9au, 0x9b44f031u, 0x0b6babdcu, 0x7fdc558bu, 0xdf47ad6eu, 0x11ea95f5u, 0x42052ed0u, 0x39a933efu,
        0xa70ed082u, 0xfbf555f9u, 0x2d768704u, 0xf4a36693u, 0xc7f4bad6u, 0x2533b43du, 0x53d46878u, 0x53901177u, 0x9654406au, 0xbaba74c1u, 0x6944c72cu, 0x6f94989bu, 0x02eb753eu, 0xa6289b85u, 0x0a72d720u, 0x881a9fffu,
        0x616fad52u, 0x9b2b6c89u, 0x04430c54u, 0x5ef40ba3u, 0x6e617ca6u, 0xdb426bcdu, 0x5cc71ac8u, 0xe4beff87u, 0xe820b73au, 0xf3c35d51u, 0x9171f67cu, 0x1989dfabu, 0x4f40710eu, 0xfa1e4515u, 0xbe8bd370u, 0x45b7500fu,
        0xa21afe22u, 0x0a616719u, 0xa3e625a4u, 0xef2234b3u, 0x27a5f276u, 0x0bfd475du, 0xbacfa118u, 0x2e81b197u, 0x9d86220au, 0x00c8a9e1u, 0xd14839ccu, 0x490d2abbu, 0x5d63a0deu, 0x624492a5u, 0xde7523c0u, 0xb260441fu,
        0x4d7dc2f2u, 0x512045a9u, 0x0454d2f4u, 0xda9ee1c3u, 0xb07f1c46u, 0x9afd46edu, 0xf2b2fb68u, 0x6cd927a7u, 0x289180dau, 0xda735a71u, 0x1f5c911cu, 0xe1af79cbu, 0x81b204aeu, 0x35548435u, 0x8793c810u, 0x8a367c2fu,
        0x1744fbc2u, 0x7d310839u, 0xeec41444u, 0x771b12d3u, 0xe8e9fa16u, 0xb61b6a7du, 0xce7629b8u, 0xe00661b7u, 0xb28fd3aau, 0x47ac6f01u, 0x6b83fc6cu, 0xef41ccdbu, 0x9bc89c7eu, 0x5c4719c5u, 0xc48cc060u, 0x159af83fu,
        0x525da892u, 0x329caec9u, 0x4da8e994u, 0x4a87c7e3u, 0xa4238be6u, 0x6570b20du, 0xad5e2c08u, 0xdc8a5fc7u, 0xec0e1a7au, 0x6d9ce791u, 0xeed37bbcu, 0xb5d523ebu, 0xe684684eu, 0xe2555355u, 0xdd450cb0u, 0x392eb84fu,
        0xc0f4c962u, 0x3bac3959u, 0x7cb852e4u, 0x1b1600f3u, 0x78a8d1b6u, 0x1b561d9du, 0xd3f00258u, 0xdb2621d7u, 0xdcd9554au, 0x5fadc421u, 0x7ba00f0cu, 0xc1ba7efbu, 0xc802681eu, 0x84f830e5u, 0xa6e1ad00u, 0x85d2bc5fu,
        0x64775e32u, 0x18e8a7e9u, 0x98e75034u, 0xff36be03u, 0x9036cb86u, 0x4464ad2du, 0xbbf0aca8u, 0x88daa7e7u, 0xb3fe841au, 0xaf8804b1u, 0xcd7eb65cu, 0xf782de0bu, 0xa19f9beeu, 0x43e8b275u, 0xd3c7a150u, 0x48a8046fu,
        0x4d926702u, 0x911afa79u, 0xd06ae184u, 0x6d9aff13u, 0x77ca7956u, 0xd77560bdu, 0x64652af8u, 0xd6e8f1f7u, 0x97caa6eau, 0xfd14a941u, 0xd94471acu, 0xa3ff411bu, 0x9ff903beu, 0xf11fd805u, 0x439be9a0u, 0x9b0f907fu,
        0x6c32e3d2u, 0x414c3109u, 0xb2b806d4u, 0x4d33c423u, 0xefa0db26u, 0xe5a1384du, 0xa1927d48u, 0x0ad20007u, 0x75cabdbau, 0x867cb1d1u, 0x1d0640fcu, 0x8c40a82bu, 0x8aeb9f8eu, 0xc0d6a195u, 0x534385f0u, 0x72aa608fu,
    };
    uint32_t acc = 0xefd53f8fu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 27) & 255]);
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
    case 0: acc = heavy_round(acc, 0x0fbe34fcu); break;
    case 1: acc = heavy_round(acc, 0xfed00c2bu); break;
    case 2: acc = heavy_round(acc, 0x420bb38eu); break;
    case 3: acc = heavy_round(acc, 0xc96fa595u); break;
    case 4: acc = heavy_round(acc, 0x1ea0b9f0u); break;
    case 5: acc = heavy_round(acc, 0xfd1e048fu); break;
    case 6: acc = heavy_round(acc, 0x7ebd28a2u); break;
    case 7: acc = heavy_round(acc, 0x020c8f99u); break;
    case 8: acc = heavy_round(acc, 0x5e3a3424u); break;
    case 9: acc = heavy_round(acc, 0x4dadf133u); break;
    case 10: acc = heavy_round(acc, 0x0a5984f6u); break;
    case 11: acc = heavy_round(acc, 0x69fab7ddu); break;
    case 12: acc = heavy_round(acc, 0x78015798u); break;
    case 13: acc = heavy_round(acc, 0x6b3ef617u); break;
    case 14: acc = heavy_round(acc, 0xcced9c8au); break;
    case 15: acc = heavy_round(acc, 0x9a58e261u); break;
    case 16: acc = heavy_round(acc, 0x989e184cu); break;
    case 17: acc = heavy_round(acc, 0x5990773bu); break;
    case 18: acc = heavy_round(acc, 0xfd09835eu); break;
    case 19: acc = heavy_round(acc, 0xb4701325u); break;
    case 20: acc = heavy_round(acc, 0xec5daa40u); break;
    case 21: acc = heavy_round(acc, 0x2f46189fu); break;
    case 22: acc = heavy_round(acc, 0xf8548d72u); break;
    case 23: acc = heavy_round(acc, 0x59378e29u); break;
    case 24: acc = heavy_round(acc, 0xc8e68174u); break;
    case 25: acc = heavy_round(acc, 0xec0bbe43u); break;
    case 26: acc = heavy_round(acc, 0x7b614ec6u); break;
    case 27: acc = heavy_round(acc, 0xf718d76du); break;
    case 28: acc = heavy_round(acc, 0xb82c51e8u); break;
    case 29: acc = heavy_round(acc, 0x3ef98c27u); break;
    case 30: acc = heavy_round(acc, 0x8cc19b5au); break;
    case 31: acc = heavy_round(acc, 0xb1f3b2f1u); break;
    case 32: acc = heavy_round(acc, 0xd8a40f9cu); break;
    case 33: acc = heavy_round(acc, 0x2137e64bu); break;
    case 34: acc = heavy_round(acc, 0xaf5a872eu); break;
    case 35: acc = heavy_round(acc, 0x696224b5u); break;
    case 36: acc = heavy_round(acc, 0x46b7ee90u); break;
    case 37: acc = heavy_round(acc, 0x68e370afu); break;
    case 38: acc = heavy_round(acc, 0x2ff86642u); break;
    case 39: acc = heavy_round(acc, 0xa13c70b9u); break;
    case 40: acc = heavy_round(acc, 0x837b62c4u); break;
    case 41: acc = heavy_round(acc, 0xb8310f53u); break;
    case 42: acc = heavy_round(acc, 0xa222cc96u); break;
    case 43: acc = heavy_round(acc, 0x505d1afdu); break;
    case 44: acc = heavy_round(acc, 0x0c9f2038u); break;
    case 45: acc = heavy_round(acc, 0x6cd1e637u); break;
    case 46: acc = heavy_round(acc, 0xe0308e2au); break;
    case 47: acc = heavy_round(acc, 0xd9a4e781u); break;
    case 48: acc = heavy_round(acc, 0x99a51aecu); break;
    case 49: acc = heavy_round(acc, 0x7397595bu); break;
    case 50: acc = heavy_round(acc, 0x229bbefeu); break;
    case 51: acc = heavy_round(acc, 0xb33eda45u); break;
    case 52: acc = heavy_round(acc, 0xb25486e0u); break;
    case 53: acc = heavy_round(acc, 0x24570cbfu); break;
    case 54: acc = heavy_round(acc, 0x0295b312u); break;
    case 55: acc = heavy_round(acc, 0x80243749u); break;
    case 56: acc = heavy_round(acc, 0x926dd814u); break;
    case 57: acc = heavy_round(acc, 0x8a0ee463u); break;
    case 58: acc = heavy_round(acc, 0x7bdafe66u); break;
    case 59: acc = heavy_round(acc, 0x9fe0828du); break;
    case 60: acc = heavy_round(acc, 0x8e9ec288u); break;
    case 61: acc = heavy_round(acc, 0xbb490447u); break;
    case 62: acc = heavy_round(acc, 0x41c774fau); break;
    case 63: acc = heavy_round(acc, 0x78958011u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

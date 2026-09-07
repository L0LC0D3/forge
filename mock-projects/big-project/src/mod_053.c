#include "heavy.h"
#include "mods.h"

int mod_053(int x)
{
    static const uint32_t local[256] = {
        0xe4141280u, 0x9f52e3dfu, 0x9b365fb2u, 0x20b4bb69u, 0x35894db4u, 0x3ff19d83u, 0x22412506u, 0x8c1438adu, 0xf0efc228u, 0xf5dfbf67u, 0x901db59au, 0x20568831u, 0xa7e063dcu, 0xeb19ad8bu, 0x5a75256eu, 0x2909adf5u,
        0x2a2966d0u, 0xe9d00befu, 0x2b17c882u, 0x7b39edf9u, 0xd0823f04u, 0xdf8bbe93u, 0xe0d132d6u, 0xf835cc3du, 0x387fa078u, 0xa091e977u, 0x537c386au, 0x7a920cc1u, 0xe5c77f2cu, 0xcf87f09bu, 0x6f56ed3eu, 0xb16db385u,
        0x7c850f20u, 0x0d5777ffu, 0x7b96a552u, 0xadf60489u, 0x891cc454u, 0xd55263a3u, 0xa03bf4a6u, 0x272a83cdu, 0x092052c8u, 0xa996d787u, 0xff26af3au, 0xb7e0f551u, 0x2982ae7cu, 0x73b337abu, 0xf469e90eu, 0x9b095d15u,
        0xee0c0b70u, 0x3d8a280fu, 0x51dff622u, 0xaa31ff19u, 0xb60ddda4u, 0xa6768cb3u, 0xa9fe6a76u, 0xa24b5f5du, 0xd256d918u, 0xb8af8997u, 0xfdea1a0au, 0xf2ac41e1u, 0xa066f1ccu, 0x02ec82bbu, 0x62cb18deu, 0x9a55aaa5u,
        0xdee35bc0u, 0x1a491c1fu, 0x7260baf2u, 0xd776dda9u, 0x2f4a8af4u, 0xe86939c3u, 0x9ad59446u, 0xad315eedu, 0xf8e83368u, 0x69dcffa7u, 0xa1d378dau, 0x839cf271u, 0x2109491cu, 0xc0c4d1cbu, 0xeed77caeu, 0x660b9c35u,
        0x4c700010u, 0xbfb5542fu, 0x70c5f3c2u, 0xa38da039u, 0x9e07cc44u, 0x50db6ad3u, 0x32be7216u, 0xd5b5827du, 0x26d961b8u, 0x5d6039b7u, 0xf42fcbaau, 0x919c0701u, 0x7b3eb46cu, 0x190d24dbu, 0x582c147eu, 0x472431c5u,
        0x2156f860u, 0xd62fd03fu, 0x7ffca092u, 0x127f46c9u, 0xccbaa194u, 0xc5be1fe3u, 0x24f603e6u, 0x83f0ca0du, 0x9b6f6408u, 0x47ba37c7u, 0x858c127au, 0xa1d27f91u, 0xc81c33bcu, 0xafd67bebu, 0xb9a5e04eu, 0xa8d86b55u,
        0x857d44b0u, 0xa259904fu, 0x4231c162u, 0x4e94d159u, 0xf7180ae4u, 0x6d4258f3u, 0xe7f949b6u, 0x8a3c359du, 0x7b2f3a58u, 0x01abf9d7u, 0x3db54d4au, 0x27a95c21u, 0xb9f6c70cu, 0x7171d6fbu, 0x5961e01eu, 0xa8a148e5u,
        0x2e07e500u, 0x1513945fu, 0x98d25632u, 0x38573fe9u, 0x1a150834u, 0xbdd91603u, 0x85854386u, 0xb530c52du, 0x1fdde4a8u, 0x98367fe7u, 0x2bb87c1au, 0x14c99cb1u, 0xec636e5cu, 0xa270360bu, 0x78bd13eeu, 0xa637ca75u,
        0xad5bd950u, 0xdb7edc6fu, 0x748b5f02u, 0xf68f9279u, 0x43e69984u, 0x8e335713u, 0x6a96f156u, 0x5ba778bdu, 0x688062f8u, 0x5c9ac9f7u, 0x55e29eeau, 0x691c4141u, 0x343729acu, 0xefa2991bu, 0x24547bbeu, 0xd394f005u,
        0xc31e21a0u, 0x6efc687fu, 0xa549dbd2u, 0x8646c909u, 0xe401bed4u, 0x25421c23u, 0x376b5326u, 0xeeb9504du, 0x095bb548u, 0xf459d807u, 0x89c0b5bau, 0xc2ca49d1u, 0xef86f8fcu, 0x7e1a002bu, 0x0405178eu, 0xc4f1b995u,
        0xac33bdf0u, 0x252d388fu, 0xaa3acca2u, 0x4ac5e399u, 0x1b1b7824u, 0x4a366533u, 0x8f7f68f6u, 0x89bf4bddu, 0xdbf4db98u, 0x6934aa17u, 0x2c1fc08au, 0xee3cb661u, 0x55a7dc4cu, 0xfb276b3bu, 0x2aebe75eu, 0x00c72725u,
        0x72c1ae40u, 0x3ff24c9fu, 0x81cb3172u, 0x9d95e229u, 0x0b28c574u, 0x54813243u, 0xe99032c6u, 0x82526b6du, 0x2f10d5e8u, 0x392c4027u, 0x090cbf5au, 0x761c86f1u, 0xc72ed39cu, 0xac5bda4bu, 0xe765eb2eu, 0x8fce38b5u,
        0x3e2cf290u, 0xfd6ca4afu, 0x79a80a42u, 0x5e7fc4b9u, 0x275ea6c4u, 0x3bd38353u, 0x5f9ab096u, 0xf84baefdu, 0x16b4a438u, 0x66819a37u, 0x23d4b22au, 0x3352bb81u, 0x1df0deecu, 0x7f884d5bu, 0x931022feu, 0x8cffee45u,
        0xa31a8ae0u, 0xa7fd40bfu, 0xfebe5712u, 0x838c8b49u, 0x84321c14u, 0xa81e5863u, 0x7edbe266u, 0x65c4168du, 0xbc254688u, 0x87b5b847u, 0x870498fau, 0xdd085411u, 0xfd02fe3cu, 0x1abdc46bu, 0x62c78eceu, 0xb59547d5u,
        0xf36f7730u, 0xa64520cfu, 0x6d3b17e2u, 0xa90535d9u, 0x27582564u, 0x0192b173u, 0x17d0c836u, 0x2f14a21du, 0xade7bcd8u, 0xd7899a57u, 0x146973cau, 0x98a650a1u, 0x20ba318cu, 0xec4d3f7bu, 0x36a92e9eu, 0xf9074565u,
    };
    uint32_t acc = 0xbfa44c65u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 53) & 255]);
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
    case 0: acc = heavy_round(acc, 0xc6405002u); break;
    case 1: acc = heavy_round(acc, 0xbdc5cf79u); break;
    case 2: acc = heavy_round(acc, 0xf2f5b284u); break;
    case 3: acc = heavy_round(acc, 0xe6ed9c13u); break;
    case 4: acc = heavy_round(acc, 0xe08a7256u); break;
    case 5: acc = heavy_round(acc, 0xf76b05bdu); break;
    case 6: acc = heavy_round(acc, 0x009c8bf8u); break;
    case 7: acc = heavy_round(acc, 0x4f5edef7u); break;
    case 8: acc = heavy_round(acc, 0xd735afeau); break;
    case 9: acc = heavy_round(acc, 0xbc1a1e41u); break;
    case 10: acc = heavy_round(acc, 0x262962acu); break;
    case 11: acc = heavy_round(acc, 0x4ca57e1bu); break;
    case 12: acc = heavy_round(acc, 0x61b81cbeu); break;
    case 13: acc = heavy_round(acc, 0x5cca1d05u); break;
    case 14: acc = heavy_round(acc, 0x4fbf6aa0u); break;
    case 15: acc = heavy_round(acc, 0xf7431d7fu); break;
    case 16: acc = heavy_round(acc, 0x69ff0cd2u); break;
    case 17: acc = heavy_round(acc, 0x7e004609u); break;
    case 18: acc = heavy_round(acc, 0x953b17d4u); break;
    case 19: acc = heavy_round(acc, 0xafa1a123u); break;
    case 20: acc = heavy_round(acc, 0x4a431426u); break;
    case 21: acc = heavy_round(acc, 0xb3941d4du); break;
    case 22: acc = heavy_round(acc, 0x3b261e48u); break;
    case 23: acc = heavy_round(acc, 0x62772d07u); break;
    case 24: acc = heavy_round(acc, 0x1e1c06bau); break;
    case 25: acc = heavy_round(acc, 0x96b366d1u); break;
    case 26: acc = heavy_round(acc, 0x68eb71fcu); break;
    case 27: acc = heavy_round(acc, 0x816a252bu); break;
    case 28: acc = heavy_round(acc, 0xbad4f88eu); break;
    case 29: acc = heavy_round(acc, 0xda262695u); break;
    case 30: acc = heavy_round(acc, 0x484b46f0u); break;
    case 31: acc = heavy_round(acc, 0xd3f52d8fu); break;
    case 32: acc = heavy_round(acc, 0x23003da2u); break;
    case 33: acc = heavy_round(acc, 0x20d2a099u); break;
    case 34: acc = heavy_round(acc, 0x820f1124u); break;
    case 35: acc = heavy_round(acc, 0x848b2a33u); break;
    case 36: acc = heavy_round(acc, 0x894b69f6u); break;
    case 37: acc = heavy_round(acc, 0x9a8158ddu); break;
    case 38: acc = heavy_round(acc, 0x4bfd8498u); break;
    case 39: acc = heavy_round(acc, 0x0dfb3f17u); break;
    case 40: acc = heavy_round(acc, 0x3693518au); break;
    case 41: acc = heavy_round(acc, 0xaae11361u); break;
    case 42: acc = heavy_round(acc, 0x7c0e954cu); break;
    case 43: acc = heavy_round(acc, 0xed14d03bu); break;
    case 44: acc = heavy_round(acc, 0xe738085eu); break;
    case 45: acc = heavy_round(acc, 0x1ecad425u); break;
    case 46: acc = heavy_round(acc, 0x54df7740u); break;
    case 47: acc = heavy_round(acc, 0x3a8b819fu); break;
    case 48: acc = heavy_round(acc, 0x73b0e272u); break;
    case 49: acc = heavy_round(acc, 0xb3c5df29u); break;
    case 50: acc = heavy_round(acc, 0xff669e74u); break;
    case 51: acc = heavy_round(acc, 0x911b3743u); break;
    case 52: acc = heavy_round(acc, 0xd86073c6u); break;
    case 53: acc = heavy_round(acc, 0xf5cbb86du); break;
    case 54: acc = heavy_round(acc, 0xe5e7bee8u); break;
    case 55: acc = heavy_round(acc, 0xe3ec1527u); break;
    case 56: acc = heavy_round(acc, 0xf0a8905au); break;
    case 57: acc = heavy_round(acc, 0xb74c23f1u); break;
    case 58: acc = heavy_round(acc, 0x6427cc9cu); break;
    case 59: acc = heavy_round(acc, 0x29367f4bu); break;
    case 60: acc = heavy_round(acc, 0x793e4c2eu); break;
    case 61: acc = heavy_round(acc, 0xa77125b5u); break;
    case 62: acc = heavy_round(acc, 0x80e0fb90u); break;
    case 63: acc = heavy_round(acc, 0xfd2719afu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

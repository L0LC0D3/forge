#include "heavy.h"
#include "mods.h"

int mod_002(int x)
{
    static const uint32_t local[256] = {
        0xf768cb79u, 0x6ca47e84u, 0xa615f813u, 0xa63f1e56u, 0xca1fc1bdu, 0x12b217f8u, 0x7c3efaf7u, 0x25bf1beau, 0x061c9a41u, 0x01b1aeacu, 0x2cd95a1bu, 0xea0248beu, 0x22165905u, 0x908676a0u, 0xbc26b97fu, 0x55b5f8d2u,
        0x64524209u, 0x8dcce3d4u, 0x5250fd23u, 0x67d2c026u, 0x3e67d94du, 0x00ceaa48u, 0x3fce4907u, 0xccb072bau, 0x2344e2d1u, 0x9fb6bdfcu, 0xb605012bu, 0x965a248eu, 0x5b716295u, 0xaf0552f0u, 0x582fc98fu, 0x702229a2u,
        0x9b939c99u, 0x3e43dd24u, 0x08818633u, 0x617615f6u, 0x613414ddu, 0xf5f91098u, 0x95895b17u, 0x73f2bd8au, 0x59c18f61u, 0xeadce14cu, 0x2bd6ac3bu, 0xd0b8345eu, 0x57d51025u, 0x2a4c8340u, 0xafdd1d9fu, 0x28fdce72u,
        0x9ab5db29u, 0xf3fe6a74u, 0x64189343u, 0x7de61fc6u, 0x6c1d746du, 0xd4f64ae8u, 0x7f713127u, 0x9b92fc5au, 0x583b9ff1u, 0x17b9189cu, 0x97df5b4bu, 0xdb79782eu, 0x83fa61b5u, 0x3dc10790u, 0x054fb5afu, 0x01f5e742u,
        0xe581fdb9u, 0x76318bc4u, 0xa0c72453u, 0x4b1fdd96u, 0x62fcf7fdu, 0x45cb5938u, 0x83c6cb37u, 0xfade2f2au, 0x1b9c1481u, 0xd42063ecu, 0xabf00e5bu, 0x043aeffeu, 0x5eda5745u, 0x9207dfe0u, 0xa6e891bfu, 0x9bf77412u,
        0x16010449u, 0x2d524114u, 0xaa7e3963u, 0xca604f66u, 0xa3eb9f8du, 0x05bd3b88u, 0xbd0b2947u, 0x506155fau, 0x7f0bed11u, 0x9727c33cu, 0xd219c56bu, 0x73d99bceu, 0x09adf0d5u, 0x8d060c30u, 0xff48b1cfu, 0x872f74e2u,
        0x6c7beed9u, 0x73158a64u, 0x2d6ed273u, 0x40247536u, 0x77426b1du, 0x3750f1d8u, 0xe9ff4b57u, 0x31e970cau, 0xcbf429a1u, 0xf124368cu, 0x3cad807bu, 0xfe727b9eu, 0xd7ee2e65u, 0xa1e08c80u, 0xa55115dfu, 0x130ae9b2u,
        0x5f7bbd69u, 0xe27067b4u, 0xa609ef83u, 0x04294f06u, 0x9f9a5aadu, 0xb24b7c28u, 0x7da43167u, 0xdc837f9au, 0x49fdca31u, 0xdbaabddcu, 0xf63c3f8bu, 0xf3628f6eu, 0xdf540ff5u, 0xa0fc60d0u, 0x6c22bdefu, 0x1e36d282u,
        0x2bc96ff9u, 0xa797d904u, 0x71009093u, 0x516bdcd6u, 0xe9cc6e3du, 0x53b1da78u, 0xaf3adb77u, 0x047c826au, 0xcf11cec1u, 0x0990592cu, 0xf197029bu, 0xed46d73eu, 0x87d89585u, 0x07fe8920u, 0x731ea9ffu, 0xe6a02f52u,
        0x646e0689u, 0xd000de54u, 0xdb43b5a3u, 0x16291ea6u, 0xbcf1a5cdu, 0x4dc90cc8u, 0x8a444987u, 0xa561793au, 0x4f593751u, 0x36ea087cu, 0x19cec9abu, 0xa1fc530eu, 0x1bb4bf15u, 0x51cc0570u, 0x35e5da0fu, 0xd9740022u,
        0x82b28119u, 0x9a6077a4u, 0x32045eb3u, 0xc3de1476u, 0xaa63015du, 0x78161318u, 0xfe817b97u, 0xd1ff640au, 0x6d3d03e1u, 0x790ccbccu, 0x623494bbu, 0xb2a002deu, 0x57618ca5u, 0x4689d5c0u, 0x9c594e1fu, 0x631f44f2u,
        0x761fdfa9u, 0xc6aba4f4u, 0xd2b38bc3u, 0x1f47be46u, 0xfdb980edu, 0x9f5ded68u, 0xeff371a7u, 0x846342dau, 0x09663471u, 0x8e8da31cu, 0xd65963cbu, 0x7b8ee6aeu, 0xf997fe35u, 0x4b9cfa10u, 0x0a9a062fu, 0xbf4efdc2u,
        0x347f2239u, 0xe6176644u, 0x3b023cd3u, 0x10631c16u, 0x4cce247du, 0xd5a59bb8u, 0x46db2bb7u, 0x6dda15aau, 0xd2bdc901u, 0x2f418e6cu, 0xaa0e36dbu, 0xe465fe7eu, 0x535113c5u, 0xb3aa7260u, 0x7109023fu, 0xc8f02a92u,
        0x49d948c9u, 0xab18bb94u, 0x18e171e3u, 0x726d2de6u, 0x07b9ec0du, 0xc2321e08u, 0xffb9a9c7u, 0xc6f0dc7au, 0xd66cc191u, 0x5c3d8dbcu, 0x49640debu, 0x30024a4eu, 0xd7c5cd55u, 0x0e973eb0u, 0x5c47424fu, 0xca2fcb62u,
        0x68775359u, 0x3964a4e4u, 0x5a822af3u, 0xe3e2f3b6u, 0x08d5d79du, 0xf1887458u, 0x3b4febd7u, 0x1f74974au, 0x0fdc1e21u, 0xafd6a10cu, 0x68abe8fbu, 0xcc80ca1eu, 0xac6f2ae5u, 0x79885f00u, 0x0535c65fu, 0x4c7ae032u,
        0xf8e241e9u, 0x75f02234u, 0x3e556803u, 0x96816d86u, 0x24bae72du, 0x256d9ea8u, 0x4e9ef1e7u, 0x2e72461au, 0xf8b4deb1u, 0xada1c85cu, 0x1476c80bu, 0x233e7deeu, 0x39062c75u, 0xeee2d350u, 0x60f58e6fu, 0xe87e6902u,
    };
    uint32_t acc = 0xa74c3c02u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 2) & 255]);
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
    case 0: acc = heavy_round(acc, 0x05f27381u); break;
    case 1: acc = heavy_round(acc, 0x6b5d36ecu); break;
    case 2: acc = heavy_round(acc, 0x3118c55bu); break;
    case 3: acc = heavy_round(acc, 0xdf363afeu); break;
    case 4: acc = heavy_round(acc, 0xf07f2645u); break;
    case 5: acc = heavy_round(acc, 0xd8e062e0u); break;
    case 6: acc = heavy_round(acc, 0x4f1938bfu); break;
    case 7: acc = heavy_round(acc, 0xd7f9ef12u); break;
    case 8: acc = heavy_round(acc, 0x22234349u); break;
    case 9: acc = heavy_round(acc, 0x97297414u); break;
    case 10: acc = heavy_round(acc, 0xc3bdd063u); break;
    case 11: acc = heavy_round(acc, 0x27c4fa66u); break;
    case 12: acc = heavy_round(acc, 0x312a4e8du); break;
    case 13: acc = heavy_round(acc, 0x42a61e88u); break;
    case 14: acc = heavy_round(acc, 0xca50b047u); break;
    case 15: acc = heavy_round(acc, 0xdfb330fau); break;
    case 16: acc = heavy_round(acc, 0xc6760c11u); break;
    case 17: acc = heavy_round(acc, 0x86e5563cu); break;
    case 18: acc = heavy_round(acc, 0xe24c3c6bu); break;
    case 19: acc = heavy_round(acc, 0x00d3a6ceu); break;
    case 20: acc = heavy_round(acc, 0xe5c27fd5u); break;
    case 21: acc = heavy_round(acc, 0xe20b4f30u); break;
    case 22: acc = heavy_round(acc, 0xf43f18cfu); break;
    case 23: acc = heavy_round(acc, 0x33bcafe2u); break;
    case 24: acc = heavy_round(acc, 0x3829edd9u); break;
    case 25: acc = heavy_round(acc, 0x05857d64u); break;
    case 26: acc = heavy_round(acc, 0xf2f02973u); break;
    case 27: acc = heavy_round(acc, 0x4f5fe036u); break;
    case 28: acc = heavy_round(acc, 0x5ce8da1du); break;
    case 29: acc = heavy_round(acc, 0x07fe94d8u); break;
    case 30: acc = heavy_round(acc, 0x9cc29257u); break;
    case 31: acc = heavy_round(acc, 0x031e0bcau); break;
    case 32: acc = heavy_round(acc, 0x846208a1u); break;
    case 33: acc = heavy_round(acc, 0xdc92898cu); break;
    case 34: acc = heavy_round(acc, 0x4159b77bu); break;
    case 35: acc = heavy_round(acc, 0x381b469eu); break;
    case 36: acc = heavy_round(acc, 0xd9627d65u); break;
    case 37: acc = heavy_round(acc, 0xc3428f80u); break;
    case 38: acc = heavy_round(acc, 0xaf7d3cdfu); break;
    case 39: acc = heavy_round(acc, 0xfdd2e4b2u); break;
    case 40: acc = heavy_round(acc, 0x7ca57c69u); break;
    case 41: acc = heavy_round(acc, 0xa6a91ab4u); break;
    case 42: acc = heavy_round(acc, 0xaf3d0683u); break;
    case 43: acc = heavy_round(acc, 0x15eb7a06u); break;
    case 44: acc = heavy_round(acc, 0x169889adu); break;
    case 45: acc = heavy_round(acc, 0x9aeddf28u); break;
    case 46: acc = heavy_round(acc, 0xac553867u); break;
    case 47: acc = heavy_round(acc, 0x734ada9au); break;
    case 48: acc = heavy_round(acc, 0x435f6931u); break;
    case 49: acc = heavy_round(acc, 0xf1f9d0dcu); break;
    case 50: acc = heavy_round(acc, 0x74d2368bu); break;
    case 51: acc = heavy_round(acc, 0x406a1a6eu); break;
    case 52: acc = heavy_round(acc, 0x5d181ef5u); break;
    case 53: acc = heavy_round(acc, 0x98eb23d0u); break;
    case 54: acc = heavy_round(acc, 0x2ff4a4efu); break;
    case 55: acc = heavy_round(acc, 0x40e98d82u); break;
    case 56: acc = heavy_round(acc, 0x685eeef9u); break;
    case 57: acc = heavy_round(acc, 0xb2c94c04u); break;
    case 58: acc = heavy_round(acc, 0xf1556793u); break;
    case 59: acc = heavy_round(acc, 0xa264c7d6u); break;
    case 60: acc = heavy_round(acc, 0x27125d3du); break;
    case 61: acc = heavy_round(acc, 0xa478fd78u); break;
    case 62: acc = heavy_round(acc, 0x8c49a277u); break;
    case 63: acc = heavy_round(acc, 0x90869d6au); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

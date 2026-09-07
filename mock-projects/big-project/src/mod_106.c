#include "heavy.h"
#include "mods.h"

int mod_106(int x)
{
    static const uint32_t local[256] = {
        0xa3e32141u, 0x4d9089acu, 0x356c791bu, 0xfed4dbbeu, 0x7259d005u, 0x245d81a0u, 0xff74487fu, 0x9ea03bd2u, 0xf9e9a909u, 0x88871ed4u, 0x0447fc23u, 0xc1f7b326u, 0x461a304du, 0xf2871548u, 0x73cdb807u, 0x0de315bau,
        0x8ac929d1u, 0x84b858fcu, 0x1ddbe02bu, 0x401d778eu, 0xe86e9995u, 0x1acb1df0u, 0x731d188fu, 0x12a92ca2u, 0xf2a0c399u, 0xb678d824u, 0xc2344533u, 0xaea3c8f6u, 0xfcd82bddu, 0x7d783b98u, 0x55208a17u, 0x025a208au,
        0x71739661u, 0xbcb13c4cu, 0x52e14b3bu, 0x8e9c475eu, 0xb6fc0725u, 0xa4b10e40u, 0x895a2c9fu, 0x7f519172u, 0x67a8c229u, 0xb35e2574u, 0x83771243u, 0x234c92c6u, 0xdf234b6du, 0xfeec35e8u, 0x8f902027u, 0x175f1f5au,
        0x628b66f1u, 0xd610339cu, 0x9a0dba4bu, 0xb8ae4b2eu, 0x66bb18b5u, 0x69745290u, 0x004c84afu, 0xb2466a42u, 0xb8caa4b9u, 0x726c06c4u, 0xbfc16353u, 0xb9ef1096u, 0x8cd48efdu, 0x0ae80438u, 0xa55d7a37u, 0xd03f122au,
        0xb6f99b81u, 0x2aaa3eecu, 0x61322d5bu, 0x97f082feu, 0x92a4ce45u, 0x7db9eae0u, 0xa25520bfu, 0x9874b712u, 0x5c0f6b49u, 0x88177c14u, 0x9f043863u, 0x7fc84266u, 0x0004f68du, 0x4ab0a688u, 0xad099847u, 0xb786f8fau,
        0xa5e73411u, 0xdd945e3cu, 0xce5fa46bu, 0xe13feeceu, 0x77f227d5u, 0xb366d730u, 0x561500cfu, 0x0e0977e2u, 0x6dc015d9u, 0x7a158564u, 0x09709173u, 0xc5552836u, 0x1d0d821du, 0xcccb1cd8u, 0x61557a57u, 0x2f03d3cau,
        0xd4bd30a1u, 0x2b23918cu, 0xcfe71f7bu, 0xf4b98e9eu, 0x861c2565u, 0xe9a01780u, 0x2e6d24dfu, 0xae71acb2u, 0x4065a469u, 0x0f5b22b4u, 0xb7776e83u, 0xee52c206u, 0x428731adu, 0x54fc6728u, 0x31422067u, 0x3fc2a29au,
        0xe7249131u, 0xb8ecd8dcu, 0x2c599e8bu, 0xadba626eu, 0xeedbc6f5u, 0x5ccaabd0u, 0x7a7e8cefu, 0xa45a5582u, 0xecc916f9u, 0xa01d5404u, 0x41c9cf93u, 0x41be0fd6u, 0xd94b053du, 0xac498578u, 0x50108a77u, 0x6a10656au,
        0x0f0655c1u, 0xe5c5342cu, 0x9288219bu, 0x32df6a3eu, 0x362a0c85u, 0xf68b9420u, 0xd5aa38ffu, 0x79b07252u, 0xe1f36d89u, 0x65d11954u, 0x3158b4a3u, 0xb9d411a6u, 0xe471fccdu, 0xf0f777c8u, 0xc541b887u, 0x757a1c3au,
        0x9c8b7e51u, 0x19c1a37cu, 0xa983a8abu, 0xc605a60eu, 0xc23ff615u, 0x9dc7d070u, 0x3791290fu, 0xe7a10322u, 0x752da819u, 0xcb2b72a4u, 0x0f551db3u, 0xd411c776u, 0x9155185du, 0xe68b3e18u, 0x7c96aa97u, 0x40ccc70au,
        0x8e1d0ae1u, 0x163726ccu, 0x209d33bbu, 0x944a15deu, 0x6b9683a5u, 0x86a460c0u, 0x04145d1fu, 0xa69907f2u, 0x7200c6a9u, 0xbc215ff4u, 0x75300ac3u, 0x61343146u, 0xc78d57edu, 0x45c9d868u, 0x561060a7u, 0x921565dau,
        0x2063fb71u, 0x45babe1cu, 0xbf65c2cbu, 0x8609b9aeu, 0x0ce6b535u, 0x82864510u, 0x1b54d52fu, 0x3e4580c2u, 0xaa35c939u, 0xf5e7e144u, 0x1c9a7bd3u, 0x55384f16u, 0xb8f3bb7du, 0x0cb846b8u, 0x35efdab7u, 0xe6a0f8aau,
        0x5e495001u, 0x0c21696cu, 0x75ae55dbu, 0x0ee1917eu, 0x13298ac5u, 0x50127d60u, 0xe9b3913fu, 0xd5936d92u, 0x85d5afc9u, 0x56f3f694u, 0xef8570e3u, 0x975b20e6u, 0x71a1430du, 0xce9b8908u, 0x14b618c7u, 0x42fc7f7au,
        0xb0f60891u, 0x168028bcu, 0x6b87ecebu, 0xfdae9d4eu, 0x0d980455u, 0xeb2e09b0u, 0x77d1914fu, 0x02afce62u, 0x93297a59u, 0x2efa9fe4u, 0x1821e9f3u, 0xd219a6b6u, 0x67eeee9du, 0x03f89f58u, 0x0f241ad7u, 0x02f4fa4au,
        0x6fd32521u, 0xab2bfc0cu, 0x114387fbu, 0x4c8ddd1eu, 0x3dab21e5u, 0xdcfdea00u, 0x7a8fd55fu, 0x9b07a332u, 0x16ba28e9u, 0x8ef0dd34u, 0x10e0e703u, 0x4330e086u, 0x0c75be2du, 0x5a9489a8u, 0x763ae0e7u, 0xa997691au,
        0x7089a5b1u, 0xf9b9e35cu, 0x2f72270bu, 0xf0dc50eeu, 0x271be375u, 0x8be71e50u, 0x630f5d6fu, 0x8347ec02u, 0x9b50bb79u, 0x990bae84u, 0xb4736813u, 0x8b9dce56u, 0x5a0eb1bdu, 0x057447f8u, 0xdf3b6af7u, 0xb130cbeau,
    };
    uint32_t acc = 0xedecfeeau ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 106) & 255]);
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
    case 0: acc = heavy_round(acc, 0x2b6bb069u); break;
    case 1: acc = heavy_round(acc, 0x9371beb4u); break;
    case 2: acc = heavy_round(acc, 0xaac55a83u); break;
    case 3: acc = heavy_round(acc, 0x614fbe06u); break;
    case 4: acc = heavy_round(acc, 0x81c7fdadu); break;
    case 5: acc = heavy_round(acc, 0x488ec328u); break;
    case 6: acc = heavy_round(acc, 0xdc58cc67u); break;
    case 7: acc = heavy_round(acc, 0xc4715e9au); break;
    case 8: acc = heavy_round(acc, 0x9eec1d31u); break;
    case 9: acc = heavy_round(acc, 0x3bd6f4dcu); break;
    case 10: acc = heavy_round(acc, 0xd5650a8bu); break;
    case 11: acc = heavy_round(acc, 0x5c56de6eu); break;
    case 12: acc = heavy_round(acc, 0x423612f5u); break;
    case 13: acc = heavy_round(acc, 0xfea887d0u); break;
    case 14: acc = heavy_round(acc, 0x946ab8efu); break;
    case 15: acc = heavy_round(acc, 0x5ae09182u); break;
    case 16: acc = heavy_round(acc, 0x898222f9u); break;
    case 17: acc = heavy_round(acc, 0x7c4af004u); break;
    case 18: acc = heavy_round(acc, 0xd842bb93u); break;
    case 19: acc = heavy_round(acc, 0x1fea0bd6u); break;
    case 20: acc = heavy_round(acc, 0x43eed13du); break;
    case 21: acc = heavy_round(acc, 0x45e2e178u); break;
    case 22: acc = heavy_round(acc, 0x33823677u); break;
    case 23: acc = heavy_round(acc, 0x0d5e216au); break;
    case 24: acc = heavy_round(acc, 0xaee0e1c1u); break;
    case 25: acc = heavy_round(acc, 0xc3a6502cu); break;
    case 26: acc = heavy_round(acc, 0x441e8d9bu); break;
    case 27: acc = heavy_round(acc, 0xb28ae63eu); break;
    case 28: acc = heavy_round(acc, 0x21475885u); break;
    case 29: acc = heavy_round(acc, 0xff507020u); break;
    case 30: acc = heavy_round(acc, 0x335164ffu); break;
    case 31: acc = heavy_round(acc, 0x22b5ae52u); break;
    case 32: acc = heavy_round(acc, 0x691f7989u); break;
    case 33: acc = heavy_round(acc, 0xfbd5b554u); break;
    case 34: acc = heavy_round(acc, 0xe1bca0a3u); break;
    case 35: acc = heavy_round(acc, 0x8aef0da6u); break;
    case 36: acc = heavy_round(acc, 0xdf38c8cdu); break;
    case 37: acc = heavy_round(acc, 0xce57d3c8u); break;
    case 38: acc = heavy_round(acc, 0x63ce6487u); break;
    case 39: acc = heavy_round(acc, 0x5b26d83au); break;
    case 40: acc = heavy_round(acc, 0x75390a51u); break;
    case 41: acc = heavy_round(acc, 0xec59bf7cu); break;
    case 42: acc = heavy_round(acc, 0xb26514abu); break;
    case 43: acc = heavy_round(acc, 0x9680220eu); break;
    case 44: acc = heavy_round(acc, 0x41e04215u); break;
    case 45: acc = heavy_round(acc, 0x6333ac70u); break;
    case 46: acc = heavy_round(acc, 0xb3b3550fu); break;
    case 47: acc = heavy_round(acc, 0x1ee53f22u); break;
    case 48: acc = heavy_round(acc, 0x4f8cb419u); break;
    case 49: acc = heavy_round(acc, 0xecc70ea4u); break;
    case 50: acc = heavy_round(acc, 0x006409b3u); break;
    case 51: acc = heavy_round(acc, 0x0fdbc376u); break;
    case 52: acc = heavy_round(acc, 0xb0fee45du); break;
    case 53: acc = heavy_round(acc, 0x15729a18u); break;
    case 54: acc = heavy_round(acc, 0x08fe5697u); break;
    case 55: acc = heavy_round(acc, 0x7c98830au); break;
    case 56: acc = heavy_round(acc, 0x205d96e1u); break;
    case 57: acc = heavy_round(acc, 0xe74642ccu); break;
    case 58: acc = heavy_round(acc, 0x7f899fbbu); break;
    case 59: acc = heavy_round(acc, 0x255391deu); break;
    case 60: acc = heavy_round(acc, 0xac79cfa5u); break;
    case 61: acc = heavy_round(acc, 0xce773cc0u); break;
    case 62: acc = heavy_round(acc, 0x2971891fu); break;
    case 63: acc = heavy_round(acc, 0xf7dc43f2u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_013(int x)
{
    static const uint32_t local[256] = {
        0x08dc8c78u, 0x4751e577u, 0xe5a4046au, 0xaddf68c1u, 0x4f5d2b2cu, 0x9aa9ac9bu, 0x8cf5793eu, 0x0a42cf85u, 0xa47f7b20u, 0x6816f3ffu, 0x7eb7f152u, 0x86eee089u, 0x3167f054u, 0xa0ab9fa3u, 0x5dac00a6u, 0x96a31fcdu,
        0xfc683ec8u, 0xb845d387u, 0x12717b3au, 0x6bf55151u, 0x67335a7cu, 0xc633f3abu, 0xcbdb750eu, 0x75957915u, 0x96517770u, 0xfe18a40fu, 0xfa844222u, 0x1cd1db19u, 0xb5d409a4u, 0xe50ec8b3u, 0x5ba17676u, 0xca5afb5du,
        0x4f49c518u, 0xe70d8597u, 0x6717e60au, 0x75479de1u, 0x24f29dccu, 0x308c3ebbu, 0xb4cfa4deu, 0x4058c6a5u, 0x4633c7c0u, 0xf066981fu, 0x2d4806f2u, 0xe97db9a9u, 0x514bb6f4u, 0x660075c3u, 0x196ba046u, 0x0f97faedu,
        0x16461f68u, 0x5fa9fba7u, 0x65a444dau, 0x927f4e71u, 0x0f2ff51cu, 0x0d438dcbu, 0xac2f08aeu, 0x9145b835u, 0x618b6c10u, 0x4b21d02fu, 0xdab03fc2u, 0xcabb7c39u, 0x5d03f844u, 0xc931a6d3u, 0x87077e16u, 0x64331e7du,
        0xab624db8u, 0xb25c35b7u, 0x476397aau, 0x5a856301u, 0xa5c0606cu, 0xb82ae0dbu, 0xa196a07eu, 0x21554dc5u, 0x82fd6460u, 0xa6ab4c3fu, 0x65a9ec92u, 0x349422c9u, 0x5371cd94u, 0xe4935be3u, 0x87b20fe6u, 0xa045660du,
        0xfde35008u, 0x83a533c7u, 0xcce2de7au, 0xc282db91u, 0xb1b8dfbcu, 0xc55337ebu, 0xdfe36c4eu, 0xcbc08755u, 0x826eb0b0u, 0x37a40c4fu, 0xa0620d62u, 0xc150ad59u, 0x204a36e4u, 0xce5694f3u, 0xc1e855b6u, 0x0627d19du,
        0xe24e2658u, 0x9c45f5d7u, 0x0def194au, 0xade0b821u, 0x956e730cu, 0x110d92fbu, 0xdd326c1eu, 0x1e0064e5u, 0xc5045100u, 0xdeed105fu, 0x9c45a232u, 0xc17a1be9u, 0x70823434u, 0xecec5203u, 0x6f674f86u, 0xd273612du,
        0x6267d0a8u, 0xf93f7be7u, 0x4995481au, 0x7e47f8b1u, 0x9c761a5cu, 0xcfeaf20bu, 0x0ae09feeu, 0xe7cde675u, 0x8d234550u, 0x39a7586fu, 0x7a01ab02u, 0xcbd96e79u, 0x024ec584u, 0x07059313u, 0x2d2bfd56u, 0xcc0114bdu,
        0x0d354ef8u, 0xdbd2c5f7u, 0xb6226aeau, 0xa3a19d41u, 0x4ba4d5acu, 0x9ebc551bu, 0xa58b07beu, 0xcb220c05u, 0x4a708da0u, 0xb133e47fu, 0x398327d2u, 0x4d77a509u, 0xf524ead4u, 0x53935823u, 0xcb735f26u, 0xd3e9ec4du,
        0x46fba148u, 0xd980d407u, 0x512381bau, 0x2c16a5d1u, 0xb10fa4fcu, 0x9292bc2bu, 0x850ea38eu, 0xcc35d595u, 0xe9d129f0u, 0x8b33b48fu, 0x89f718a2u, 0x199dbf99u, 0x19b9a424u, 0x89c6a133u, 0x1dba74f6u, 0x7586e7ddu,
        0x993fc798u, 0xec0aa617u, 0xaf658c8au, 0x54101261u, 0xb40b884cu, 0x48bf273bu, 0xec88735eu, 0xe1824325u, 0x256a1a40u, 0xf987c89fu, 0x99ca7d72u, 0xf9d4be29u, 0x4201f174u, 0xf1106e43u, 0xcabe3ec6u, 0x7671076du,
        0x02c6c1e8u, 0x81713c27u, 0xccf58b5au, 0x1636e2f1u, 0x652d7f9cu, 0xf6d2964bu, 0x5a55772eu, 0x83c054b5u, 0xd4a05e90u, 0x2a5120afu, 0xe6aa5642u, 0x3de5a0b9u, 0x9132d2c4u, 0x7121bf53u, 0x1c7bbc96u, 0x66814afdu,
        0x47959038u, 0x8bf59637u, 0xdd207e2au, 0xbb741781u, 0x4e4a8aecu, 0x7a9e095bu, 0x5812aefeu, 0x3de90a45u, 0x3c18f6e0u, 0x57f0bcbfu, 0x0d83a312u, 0x4bd96749u, 0xcbc14814u, 0xa1eb9463u, 0xd02fee66u, 0x2fd0b28du,
        0x40f13288u, 0x9218b447u, 0x1a7364fau, 0x6af0b011u, 0xc277aa3cu, 0x6a32806bu, 0x4a9d1aceu, 0x3d3563d5u, 0x5db8e330u, 0xd9079ccfu, 0x9a8363e2u, 0x2ff911d9u, 0xa7625164u, 0xdb9eed73u, 0xe657d436u, 0xa6b83e1du,
        0x2d5ea8d8u, 0xbe9b9657u, 0x96bb3fcau, 0xba15aca1u, 0x2e09dd8cu, 0x23e0fb7bu, 0x4211ba9eu, 0xe11e6165u, 0x48a52380u, 0x3076c0dfu, 0xd91698b2u, 0x2ccda069u, 0x1b0aeeb4u, 0x46acca83u, 0x72b06e06u, 0x19d0edadu,
        0x00a2f328u, 0xf07f3c67u, 0x0b050e9au, 0x3c8c0d31u, 0x669624dcu, 0xde3a7a8bu, 0xc9cd8e6eu, 0x4b5d02f5u, 0x6942b7d0u, 0x1d5f28efu, 0xa3ea4182u, 0x4b2012f9u, 0xaef02004u, 0xebc62b93u, 0x6c36bbd6u, 0xe1f3c13du,
    };
    uint32_t acc = 0xc0d7683du ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 13) & 255]);
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
    case 0: acc = heavy_round(acc, 0x796ac47au); break;
    case 1: acc = heavy_round(acc, 0x210d8991u); break;
    case 2: acc = heavy_round(acc, 0xbe17b5bcu); break;
    case 3: acc = heavy_round(acc, 0x156815ebu); break;
    case 4: acc = heavy_round(acc, 0xef66b24eu); break;
    case 5: acc = heavy_round(acc, 0xb94f1555u); break;
    case 6: acc = heavy_round(acc, 0x3d3fe6b0u); break;
    case 7: acc = heavy_round(acc, 0x55c7ca4fu); break;
    case 8: acc = heavy_round(acc, 0xf3e6b362u); break;
    case 9: acc = heavy_round(acc, 0x0f311b59u); break;
    case 10: acc = heavy_round(acc, 0x3e83cce4u); break;
    case 11: acc = heavy_round(acc, 0xef0732f3u); break;
    case 12: acc = heavy_round(acc, 0x37d45bb6u); break;
    case 13: acc = heavy_round(acc, 0xa3881f9du); break;
    case 14: acc = heavy_round(acc, 0xdd461c58u); break;
    case 15: acc = heavy_round(acc, 0x2ce173d7u); break;
    case 16: acc = heavy_round(acc, 0xa8087f4au); break;
    case 17: acc = heavy_round(acc, 0x95cee621u); break;
    case 18: acc = heavy_round(acc, 0xc0dac90cu); break;
    case 19: acc = heavy_round(acc, 0xd5d1f0fbu); break;
    case 20: acc = heavy_round(acc, 0x469f321eu); break;
    case 21: acc = heavy_round(acc, 0x256a72e5u); break;
    case 22: acc = heavy_round(acc, 0xc4fb0700u); break;
    case 23: acc = heavy_round(acc, 0xf0f84e5fu); break;
    case 24: acc = heavy_round(acc, 0x0f8bc832u); break;
    case 25: acc = heavy_round(acc, 0x452e09e9u); break;
    case 26: acc = heavy_round(acc, 0x0f794a34u); break;
    case 27: acc = heavy_round(acc, 0x983c7003u); break;
    case 28: acc = heavy_round(acc, 0xfc6cd586u); break;
    case 29: acc = heavy_round(acc, 0x451f2f2du); break;
    case 30: acc = heavy_round(acc, 0xc73546a8u); break;
    case 31: acc = heavy_round(acc, 0x7ab279e7u); break;
    case 32: acc = heavy_round(acc, 0x7ba02e1au); break;
    case 33: acc = heavy_round(acc, 0xd679a6b1u); break;
    case 34: acc = heavy_round(acc, 0xe04ff05cu); break;
    case 35: acc = heavy_round(acc, 0xf33ed00bu); break;
    case 36: acc = heavy_round(acc, 0xee96e5eeu); break;
    case 37: acc = heavy_round(acc, 0xedf37475u); break;
    case 38: acc = heavy_round(acc, 0xb19f7b50u); break;
    case 39: acc = heavy_round(acc, 0xd77a166fu); break;
    case 40: acc = heavy_round(acc, 0x03695102u); break;
    case 41: acc = heavy_round(acc, 0x4840dc79u); break;
    case 42: acc = heavy_round(acc, 0x47635b84u); break;
    case 43: acc = heavy_round(acc, 0x62d53113u); break;
    case 44: acc = heavy_round(acc, 0xfdab0356u); break;
    case 45: acc = heavy_round(acc, 0x94d862bdu); break;
    case 46: acc = heavy_round(acc, 0xa73844f8u); break;
    case 47: acc = heavy_round(acc, 0xe1fd43f7u); break;
    case 48: acc = heavy_round(acc, 0x427ed0eau); break;
    case 49: acc = heavy_round(acc, 0x8af6cb41u); break;
    case 50: acc = heavy_round(acc, 0x794c2bacu); break;
    case 51: acc = heavy_round(acc, 0x027fb31bu); break;
    case 52: acc = heavy_round(acc, 0xbbeacdbeu); break;
    case 53: acc = heavy_round(acc, 0x6ce31a05u); break;
    case 54: acc = heavy_round(acc, 0xcad243a0u); break;
    case 55: acc = heavy_round(acc, 0xeaae227fu); break;
    case 56: acc = heavy_round(acc, 0xe76c4dd2u); break;
    case 57: acc = heavy_round(acc, 0xbd729309u); break;
    case 58: acc = heavy_round(acc, 0xddb700d4u); break;
    case 59: acc = heavy_round(acc, 0x7dc27623u); break;
    case 60: acc = heavy_round(acc, 0xa3cbe526u); break;
    case 61: acc = heavy_round(acc, 0x2bccba4du); break;
    case 62: acc = heavy_round(acc, 0x39941748u); break;
    case 63: acc = heavy_round(acc, 0x7042d207u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

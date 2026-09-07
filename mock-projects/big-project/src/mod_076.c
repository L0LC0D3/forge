#include "heavy.h"
#include "mods.h"

int mod_076(int x)
{
    static const uint32_t local[256] = {
        0x79f505b7u, 0x9d0627aau, 0x8926b301u, 0x19d1706cu, 0xf968b0dbu, 0xe29a307eu, 0xe9e39dc5u, 0x36177460u, 0xb15e1c3fu, 0x7f9e7c92u, 0x075f72c9u, 0xd9a4dd94u, 0x9d8b2be3u, 0xf9279fe6u, 0x4a9db60du, 0xa43f6008u,
        0x34b203c7u, 0x35696e7au, 0xbeb82b91u, 0x8e4defbcu, 0xed4507ebu, 0x900afc4eu, 0x9122d755u, 0x844cc0b0u, 0x5a4adc4fu, 0x29ba9d62u, 0x142ffd59u, 0x1f8146e4u, 0x448264f3u, 0x8701e5b6u, 0x47d4219du, 0xafee3658u,
        0x63c6c5d7u, 0xd259a94au, 0x2caa0821u, 0x0b87830cu, 0x9cb362fbu, 0x557dfc1eu, 0x6536b4e5u, 0xd6a66100u, 0xe687e05fu, 0xfe023232u, 0xe96d6be9u, 0x39bd4434u, 0x3d4c2203u, 0x0124df86u, 0xd073b12du, 0x384be0a8u,
        0x44344be7u, 0xf2e3d81au, 0x74a548b1u, 0x1d132a5cu, 0x7c44c20bu, 0xe4502feeu, 0x75d83675u, 0xaf895550u, 0x3336286fu, 0x5d223b02u, 0x5de0be79u, 0x268dd584u, 0x8e996313u, 0x448d8d56u, 0xeb5564bdu, 0x0c5d5ef8u,
        0x573b95f7u, 0x0d54faeau, 0x4692ed41u, 0x87c5e5acu, 0x68ca251bu, 0xb91e97beu, 0xa5005c05u, 0xbe9a9da0u, 0xe9b6b47fu, 0x8707b7d2u, 0x1e92f509u, 0x4567fad4u, 0xaf5b2823u, 0x6178ef26u, 0xb9923c4du, 0xd067b148u,
        0x725da407u, 0x5f3a11bau, 0xf09bf5d1u, 0x99b4b4fcu, 0xb7548c2bu, 0xebc6338eu, 0x36e82595u, 0x30bf39f0u, 0x8faa848fu, 0x6adfa8a2u, 0x3ecd0f99u, 0xa700b424u, 0x96c27133u, 0x6b6404f6u, 0x068337ddu, 0x4defd798u,
        0xcf5b7617u, 0xbd601c8au, 0xef296261u, 0x7a34984cu, 0x4534f73bu, 0xff64035eu, 0x62089325u, 0x001c2a40u, 0x96f2989fu, 0x77170d72u, 0xc8180e29u, 0x5d4d0174u, 0xcc403e43u, 0x490bcec6u, 0xd7c1576du, 0xc3bad1e8u,
        0x1c360c27u, 0x63d41b5au, 0x7ce432f1u, 0x79da8f9cu, 0x87fc664bu, 0xb255072eu, 0xdf1aa4b5u, 0x44166e90u, 0x6daff0afu, 0x695ae642u, 0x4a3cf0b9u, 0xcb81e2c4u, 0x77858f53u, 0x846d4c96u, 0xfd259afdu, 0x35cda038u,
        0x8b2e6637u, 0xc5e30e2au, 0x22b56781u, 0x627b9aecu, 0x9d7bd95bu, 0xce363efeu, 0x79175a45u, 0x815306e0u, 0x8e438cbfu, 0x1e983312u, 0x6b44b749u, 0xf6145814u, 0x70836463u, 0x1ac57e66u, 0xa0c9028du, 0xbd6d4288u,
        0xe2c58447u, 0x5e19f4fau, 0x47c60011u, 0xc72cba3cu, 0x5bc4506bu, 0xf7e4aaceu, 0x9d37b3d5u, 0xf9b6f330u, 0x8f4e6ccfu, 0x62fbf3e2u, 0x777861d9u, 0xd2b96164u, 0x4f6abd73u, 0x4c916436u, 0xd7048e1du, 0xd91eb8d8u,
        0x8dbc6657u, 0x7e45cfcau, 0xc17efca1u, 0x5442ed8cu, 0x6126cb7bu, 0x7f7d4a9eu, 0xeaf4b165u, 0xfc673380u, 0x33b190dfu, 0xc1f328b2u, 0xf160f069u, 0x9865feb4u, 0x7cac9a83u, 0x6d8dfe06u, 0x2e713dadu, 0xbca70328u,
        0xab140c67u, 0x1f739e9au, 0x63895d31u, 0x1f5334dcu, 0x24344a8bu, 0x305d1e6eu, 0xc40752f5u, 0x35c8c7d0u, 0x7a8df8efu, 0x562ad182u, 0x21c762f9u, 0x0f4f3004u, 0x40f9fb93u, 0xb4b84bd6u, 0x3fe8113du, 0xa10b2178u,
        0x1e0d7677u, 0xb1f0616au, 0x8fce21c1u, 0xf732902cu, 0x03bdcd9bu, 0x2121263eu, 0xdc689885u, 0xff80b020u, 0xaf44a4ffu, 0x998fee52u, 0xa7b4b989u, 0xe0e9f554u, 0xd543e0a3u, 0x0c4d4da6u, 0x3e8208cdu, 0x149013c8u,
        0x9e29a487u, 0xed49183au, 0xc6764a51u, 0xb3f5ff7cu, 0x56d454abu, 0x83a6620eu, 0xca518215u, 0xb073ec70u, 0x7976950fu, 0x354f7f22u, 0x0871f419u, 0xe7eb4ea4u, 0x72bb49b3u, 0xe1ca0376u, 0x8798245du, 0x4abada18u,
        0xc7299697u, 0xa04ac30au, 0x35ead6e1u, 0x86f282ccu, 0x7cc8dfbbu, 0x7509d1deu, 0x963b0fa5u, 0xecc77cc0u, 0xed04c91fu, 0xd1d683f2u, 0x3f8812a9u, 0x80483bf4u, 0x62d136c3u, 0xf5eb6d46u, 0x32c363edu, 0x6c507468u,
        0x290e4ca7u, 0x810261dau, 0x4ad4c771u, 0x4abd1a1cu, 0xed2c6ecbu, 0xcda875aeu, 0x4ade4135u, 0xf5e06110u, 0x9a10412fu, 0xe6d1fcc2u, 0x4ec01539u, 0xd735bd44u, 0x0f36a7d3u, 0x2cae8b16u, 0xa1dcc77du, 0xe755e2b8u,
    };
    uint32_t acc = 0xcb7a5db8u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 76) & 255]);
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
    case 0: acc = heavy_round(acc, 0xe6579d47u); break;
    case 1: acc = heavy_round(acc, 0x337b39fau); break;
    case 2: acc = heavy_round(acc, 0x9c348111u); break;
    case 3: acc = heavy_round(acc, 0xb12f473cu); break;
    case 4: acc = heavy_round(acc, 0x0713796bu); break;
    case 5: acc = heavy_round(acc, 0x363fbfceu); break;
    case 6: acc = heavy_round(acc, 0x1f35c4d5u); break;
    case 7: acc = heavy_round(acc, 0x7763d030u); break;
    case 8: acc = heavy_round(acc, 0x6623a5cfu); break;
    case 9: acc = heavy_round(acc, 0xd185d8e2u); break;
    case 10: acc = heavy_round(acc, 0x62b702d9u); break;
    case 11: acc = heavy_round(acc, 0x720d8e64u); break;
    case 12: acc = heavy_round(acc, 0x559f0673u); break;
    case 13: acc = heavy_round(acc, 0x934f1936u); break;
    case 14: acc = heavy_round(acc, 0xb1c4bf1du); break;
    case 15: acc = heavy_round(acc, 0x516735d8u); break;
    case 16: acc = heavy_round(acc, 0xc038bf57u); break;
    case 17: acc = heavy_round(acc, 0x4b0c54cau); break;
    case 18: acc = heavy_round(acc, 0x3d91bda1u); break;
    case 19: acc = heavy_round(acc, 0xf31cba8cu); break;
    case 20: acc = heavy_round(acc, 0x3ee4347bu); break;
    case 21: acc = heavy_round(acc, 0x7af19f9eu); break;
    case 22: acc = heavy_round(acc, 0x56bb0265u); break;
    case 23: acc = heavy_round(acc, 0x62bf5080u); break;
    case 24: acc = heavy_round(acc, 0x56b909dfu); break;
    case 25: acc = heavy_round(acc, 0x548a4db2u); break;
    case 26: acc = heavy_round(acc, 0x38cbd169u); break;
    case 27: acc = heavy_round(acc, 0xc7796bb4u); break;
    case 28: acc = heavy_round(acc, 0x43172383u); break;
    case 29: acc = heavy_round(acc, 0x548cf306u); break;
    case 30: acc = heavy_round(acc, 0x6c01aeadu); break;
    case 31: acc = heavy_round(acc, 0x7302c028u); break;
    case 32: acc = heavy_round(acc, 0xf00aa567u); break;
    case 33: acc = heavy_round(acc, 0xd1ef639au); break;
    case 34: acc = heavy_round(acc, 0x01505e31u); break;
    case 35: acc = heavy_round(acc, 0x85d441dcu); break;
    case 36: acc = heavy_round(acc, 0x08eff38bu); break;
    case 37: acc = heavy_round(acc, 0x143ab36eu); break;
    case 38: acc = heavy_round(acc, 0x2ca5e3f5u); break;
    case 39: acc = heavy_round(acc, 0xdc9c24d0u); break;
    case 40: acc = heavy_round(acc, 0x3f57b1efu); break;
    case 41: acc = heavy_round(acc, 0xc51f3682u); break;
    case 42: acc = heavy_round(acc, 0x016e83f9u); break;
    case 43: acc = heavy_round(acc, 0x3af1dd04u); break;
    case 44: acc = heavy_round(acc, 0x2e2ac493u); break;
    case 45: acc = heavy_round(acc, 0xd14880d6u); break;
    case 46: acc = heavy_round(acc, 0x5558c23du); break;
    case 47: acc = heavy_round(acc, 0xe74a1e78u); break;
    case 48: acc = heavy_round(acc, 0x7d0e4f77u); break;
    case 49: acc = heavy_round(acc, 0x0c71666au); break;
    case 50: acc = heavy_round(acc, 0x0d5962c1u); break;
    case 51: acc = heavy_round(acc, 0x2c2add2cu); break;
    case 52: acc = heavy_round(acc, 0x2807b69bu); break;
    case 53: acc = heavy_round(acc, 0x2cb7fb3eu); break;
    case 54: acc = heavy_round(acc, 0x58ef6985u); break;
    case 55: acc = heavy_round(acc, 0x729f4d20u); break;
    case 56: acc = heavy_round(acc, 0x0f609dffu); break;
    case 57: acc = heavy_round(acc, 0xf1319352u); break;
    case 58: acc = heavy_round(acc, 0x9fa81a89u); break;
    case 59: acc = heavy_round(acc, 0xe9ebe254u); break;
    case 60: acc = heavy_round(acc, 0x33cae9a3u); break;
    case 61: acc = heavy_round(acc, 0x87bec2a6u); break;
    case 62: acc = heavy_round(acc, 0x24e2f9cdu); break;
    case 63: acc = heavy_round(acc, 0xf08250c8u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

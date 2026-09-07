#include "heavy.h"
#include "mods.h"

int mod_021(int x)
{
    static const uint32_t local[256] = {
        0x20979f60u, 0xde024b3fu, 0xc5aedf92u, 0xc8a679c9u, 0xa60a3894u, 0x43f2cae3u, 0x3cc4b2e6u, 0x2a29ad0du, 0xe1c4eb08u, 0x1cdc12c7u, 0x3886317au, 0x67e01291u, 0x9a5eaabcu, 0x77a086ebu, 0x724a6f4eu, 0x912dae55u,
        0xd583abb0u, 0x4eb6cb4fu, 0xeb6fc062u, 0x8154c459u, 0xc0a961e4u, 0x114dc3f3u, 0x3c2fb8b6u, 0x5839d89du, 0xeb028158u, 0xccb094d7u, 0x85b32c4au, 0xbd67af21u, 0x44b2fe0cu, 0xd9eaa1fbu, 0x9b662f1eu, 0x71534be5u,
        0x97440c00u, 0x33ab8f5fu, 0x378c1532u, 0xf0dff2e9u, 0x6b581f34u, 0xd86b4103u, 0x4f137286u, 0x2f23282du, 0x8f9eeba8u, 0xdccddae7u, 0xd8aa1b1au, 0xa968afb1u, 0xb509655cu, 0x1247c10bu, 0x9b1122eeu, 0x59768d75u,
        0xd43dc050u, 0x6601976fu, 0xd6b0de02u, 0x4a110579u, 0x504b7084u, 0x5bfc4213u, 0xde6ce056u, 0xd1be9bbdu, 0x0a9f29f8u, 0x4a74e4f7u, 0xf3b7fdeau, 0xb7cc1441u, 0xdc36e0acu, 0x3988e41bu, 0xf9e84abeu, 0xc7907305u,
        0x2815c8a0u, 0x8b19e37fu, 0xd4cb1ad2u, 0x95f0fc09u, 0x7af855d4u, 0xcef1c723u, 0x86790226u, 0x7d25334du, 0x6c483c48u, 0x6726b307u, 0x6069d4bau, 0x12badcd1u, 0x34506ffcu, 0xe0bf0b2bu, 0xdbc8a68eu, 0x9bd9fc95u,
        0xabb124f0u, 0x2495738fu, 0xed07cba2u, 0x43c8d699u, 0xa813cf24u, 0xe47cd033u, 0xe6b4d7f6u, 0x18afeeddu, 0xea1f2298u, 0xe8a44517u, 0x3f8c9f8au, 0x129e0961u, 0x10ab134cu, 0x213b363bu, 0xcfcf365eu, 0xa8cc2a25u,
        0x4534d540u, 0xa055479fu, 0x59d3f072u, 0xb9219529u, 0x9592dc74u, 0xe00e5d43u, 0x71dd61c6u, 0xc5f7ce6du, 0x2ee8dce8u, 0xf8ee9b27u, 0x192d5e5au, 0xce1e99f1u, 0xeddbca9cu, 0xac8e654bu, 0xa058fa2eu, 0x431ffbb5u,
        0xf805d990u, 0x687a5fafu, 0xa4dc8942u, 0xe1c437b9u, 0x52aa7dc4u, 0xa5576e53u, 0x3def9f96u, 0x70d5d1fdu, 0xaaaa6b38u, 0x4646b537u, 0xac99112au, 0xaa258e81u, 0xc1b795ecu, 0xdc89985bu, 0x2302f1feu, 0xd1ce7145u,
        0x34c931e0u, 0xf365bbbfu, 0x770e9612u, 0xbfb9be49u, 0x8fcfb314u, 0xc8490363u, 0xd4289166u, 0x5f62f98du, 0xe2a8cd88u, 0x132d9347u, 0xc05cb7fau, 0xe9dbe711u, 0x4b53753cu, 0xc33dcf6bu, 0x08aa1dceu, 0x5e108ad5u,
        0x2963de30u, 0xd3b85bcfu, 0x689716e2u, 0xfb4b28d9u, 0xeeb77c64u, 0x9d141c73u, 0x01053736u, 0xc1f8451du, 0xc16903d8u, 0x46643557u, 0xf24552cau, 0x3eaaa3a1u, 0x6304688cu, 0x3afc0a7bu, 0xad6b7d9eu, 0x235f4865u,
        0x10fade80u, 0xc8533fdfu, 0xd0e30bb2u, 0x73017769u, 0x5256d9b4u, 0x4829b983u, 0xa4429106u, 0x432eb4adu, 0xe6b00e28u, 0x7aeb9b67u, 0x875fe19au, 0x583ac431u, 0x4a5f6fdcu, 0xf655498bu, 0xe8a4116eu, 0x1f73a9f5u,
        0x83f332d0u, 0xcc5767efu, 0x969f7482u, 0xcba5a9f9u, 0x2ee2cb04u, 0xce3ada93u, 0x80dd9ed6u, 0x97df483du, 0xf782ec78u, 0x1004c577u, 0x3bf9646au, 0x747548c1u, 0xfc398b2cu, 0x901a8c9bu, 0xdcf0d93eu, 0xa246af85u,
        0xc7f1db20u, 0x2725d3ffu, 0xffb95152u, 0x0040c089u, 0xd9d05054u, 0x24387fa3u, 0x0d1360a6u, 0x0f22ffcdu, 0xee269ec8u, 0x3930b387u, 0x139edb3au, 0xef833151u, 0x7ca7ba7cu, 0x9b5cd3abu, 0xc82ed50eu, 0xde115915u,
        0x1fdbd770u, 0x7c5f840fu, 0x815da222u, 0xf21bbb19u, 0xd9d469a4u, 0x3f53a8b3u, 0x4260d676u, 0x2252db5du, 0x6a202518u, 0x0e306597u, 0x291d460au, 0xd3cd7de1u, 0x28fefdccu, 0xb36d1ebbu, 0xd37b04deu, 0x774ca6a5u,
        0x1bd627c0u, 0xdbe5781fu, 0x8ff966f2u, 0xf8bf99a9u, 0x36e416f4u, 0x24fd55c3u, 0x6d830046u, 0x0507daedu, 0x00347f68u, 0x9b04dba7u, 0x7e81a4dau, 0x69fd2e71u, 0x07d4551cu, 0x8bdc6dcbu, 0xe33268aeu, 0x14b19835u,
        0xe945cc10u, 0xd1d8b02fu, 0x6f399fc2u, 0x71f55c39u, 0xca345844u, 0xfae686d3u, 0xfe76de16u, 0x351afe7du, 0x8a68adb8u, 0xefef15b7u, 0xcd18f7aau, 0xc8fb4301u, 0x18fcc06cu, 0x007bc0dbu, 0x66f2007eu, 0xef392dc5u,
    };
    uint32_t acc = 0x0d4cb4c5u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 21) & 255]);
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
    case 0: acc = heavy_round(acc, 0x5c3e31a2u); break;
    case 1: acc = heavy_round(acc, 0x8c300499u); break;
    case 2: acc = heavy_round(acc, 0xefa52524u); break;
    case 3: acc = heavy_round(acc, 0xd5222e33u); break;
    case 4: acc = heavy_round(acc, 0x308e9df6u); break;
    case 5: acc = heavy_round(acc, 0xf3a2fcddu); break;
    case 6: acc = heavy_round(acc, 0x3e0ad898u); break;
    case 7: acc = heavy_round(acc, 0xdc208317u); break;
    case 8: acc = heavy_round(acc, 0x2b8fc58au); break;
    case 9: acc = heavy_round(acc, 0x05eaf761u); break;
    case 10: acc = heavy_round(acc, 0x5067294cu); break;
    case 11: acc = heavy_round(acc, 0x748c543bu); break;
    case 12: acc = heavy_round(acc, 0x4ae1bc5eu); break;
    case 13: acc = heavy_round(acc, 0x6020f825u); break;
    case 14: acc = heavy_round(acc, 0x7c974b40u); break;
    case 15: acc = heavy_round(acc, 0x3159459fu); break;
    case 16: acc = heavy_round(acc, 0x1c3bd672u); break;
    case 17: acc = heavy_round(acc, 0x740c4329u); break;
    case 18: acc = heavy_round(acc, 0x92d1b274u); break;
    case 19: acc = heavy_round(acc, 0xab833b43u); break;
    case 20: acc = heavy_round(acc, 0x0540a7c6u); break;
    case 21: acc = heavy_round(acc, 0xa5e65c6du); break;
    case 22: acc = heavy_round(acc, 0x789a12e8u); break;
    case 23: acc = heavy_round(acc, 0x98725927u); break;
    case 24: acc = heavy_round(acc, 0x3e92045au); break;
    case 25: acc = heavy_round(acc, 0x045f07f1u); break;
    case 26: acc = heavy_round(acc, 0x18f5609cu); break;
    case 27: acc = heavy_round(acc, 0xb49f034bu); break;
    case 28: acc = heavy_round(acc, 0x1625002eu); break;
    case 29: acc = heavy_round(acc, 0x1ee049b5u); break;
    case 30: acc = heavy_round(acc, 0x5dddcf90u); break;
    case 31: acc = heavy_round(acc, 0xa675ddafu); break;
    case 32: acc = heavy_round(acc, 0x4cd5ef42u); break;
    case 33: acc = heavy_round(acc, 0xbe1265b9u); break;
    case 34: acc = heavy_round(acc, 0x26f6d3c4u); break;
    case 35: acc = heavy_round(acc, 0x3d7bcc53u); break;
    case 36: acc = heavy_round(acc, 0xa33c6596u); break;
    case 37: acc = heavy_round(acc, 0x829fdffdu); break;
    case 38: acc = heavy_round(acc, 0x71812138u); break;
    case 39: acc = heavy_round(acc, 0xb1b1f337u); break;
    case 40: acc = heavy_round(acc, 0xe9bf372au); break;
    case 41: acc = heavy_round(acc, 0xae397c81u); break;
    case 42: acc = heavy_round(acc, 0x258eabecu); break;
    case 43: acc = heavy_round(acc, 0xc739b65bu); break;
    case 44: acc = heavy_round(acc, 0x27e877feu); break;
    case 45: acc = heavy_round(acc, 0x9ada3f45u); break;
    case 46: acc = heavy_round(acc, 0x3c76a7e0u); break;
    case 47: acc = heavy_round(acc, 0xfa38b9bfu); break;
    case 48: acc = heavy_round(acc, 0xaef97c12u); break;
    case 49: acc = heavy_round(acc, 0xa44b6c49u); break;
    case 50: acc = heavy_round(acc, 0x34898914u); break;
    case 51: acc = heavy_round(acc, 0x16fce163u); break;
    case 52: acc = heavy_round(acc, 0x2bbed766u); break;
    case 53: acc = heavy_round(acc, 0x87e8878du); break;
    case 54: acc = heavy_round(acc, 0x06050388u); break;
    case 55: acc = heavy_round(acc, 0xe2605147u); break;
    case 56: acc = heavy_round(acc, 0x0ba45dfau); break;
    case 57: acc = heavy_round(acc, 0x7ea35511u); break;
    case 58: acc = heavy_round(acc, 0x0d480b3cu); break;
    case 59: acc = heavy_round(acc, 0xb66d6d6bu); break;
    case 60: acc = heavy_round(acc, 0xc90923ceu); break;
    case 61: acc = heavy_round(acc, 0x9547d8d5u); break;
    case 62: acc = heavy_round(acc, 0x9e46d430u); break;
    case 63: acc = heavy_round(acc, 0x3742d9cfu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

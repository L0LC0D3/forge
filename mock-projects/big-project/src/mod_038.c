#include "heavy.h"
#include "mods.h"

int mod_038(int x)
{
    static const uint32_t local[256] = {
        0x60eb5b45u, 0xd87d13e0u, 0x019435bfu, 0x9e06c812u, 0x80404849u, 0x6ba0b514u, 0x6ab21d63u, 0x7ddae366u, 0x0c1d238du, 0xeed8ef88u, 0x312b4d47u, 0x885b29fau, 0x9533b111u, 0xb344b73cu, 0x9cca296bu, 0xcaa6afceu,
        0x1c0ff4d5u, 0xed984030u, 0x3b6d55cfu, 0x3263c8e2u, 0x2b9c32d9u, 0xa6d0fe64u, 0xd22bb673u, 0x24940936u, 0xf9e4ef1du, 0x7e29a5d8u, 0x6eb86f57u, 0x37a844cau, 0xd31ceda1u, 0xb04e2a8cu, 0x7d06e47bu, 0xa4d48f9eu,
        0x52e13265u, 0x17cfc080u, 0x052eb9dfu, 0x44a43db2u, 0x2fbd0169u, 0x1ad8dbb4u, 0x758fd383u, 0x2acde306u, 0x9ceddeadu, 0xba213028u, 0x9d365567u, 0x3547539au, 0x86678e31u, 0x3521b1dcu, 0xba7ea38bu, 0x2299a36eu,
        0x2b1813f5u, 0xf78894d0u, 0xc1f961efu, 0x03752682u, 0xd96bb3f9u, 0xc3ed4d04u, 0x418f7493u, 0x1b8570d6u, 0xd210f23du, 0x4fc48e78u, 0x83e5ff77u, 0x8585566au, 0x94fc92c1u, 0xc4944d2cu, 0xd802669bu, 0x2e92eb3eu,
        0x1cad9985u, 0xda67bd20u, 0x212e4dffu, 0xfcc38352u, 0xcbb14a89u, 0x7f835254u, 0x131b99a3u, 0x34f7b2a6u, 0x106729cdu, 0x4158c0c8u, 0xbe486d87u, 0x73ef4d3au, 0x0304fb51u, 0xeabafc7cu, 0x50a32dabu, 0xce9d670eu,
        0x81dac315u, 0x0b523970u, 0x2e6e7e0fu, 0xedbc5422u, 0x8fd6c519u, 0x5c4feba4u, 0xc76542b3u, 0x38a1a876u, 0xf949855du, 0x3662c718u, 0xcc1e9f97u, 0x6352380au, 0x82e9c7e1u, 0x8ceabfccu, 0xa7b1f8bbu, 0xf3d616deu,
        0x271890a5u, 0x226d09c0u, 0x619af21fu, 0x92cc98f2u, 0x256523a9u, 0xea4818f4u, 0x4bdd6fc3u, 0x3b405246u, 0xe85104edu, 0xcba7a168u, 0x216995a7u, 0x9dbb16dau, 0x0553f871u, 0x39b8971cu, 0x78bfc7cbu, 0x4a99faaeu,
        0xdb200235u, 0x551d2e10u, 0xaed4aa2fu, 0x77a151c2u, 0x92256639u, 0x8aa0da44u, 0xae3520d3u, 0x74d0b016u, 0x8356a87du, 0xe32c4fb8u, 0x366a4fb7u, 0x2476e9aau, 0x492c8d01u, 0x78f9826cu, 0x879d9adbu, 0x0a86127eu,
        0xfeea17c5u, 0xc607a660u, 0x967ca63fu, 0xc7277e92u, 0x72208cc9u, 0xbfcf2f94u, 0x2c5d55e3u, 0x108fc1e6u, 0x4a73700du, 0xf435d208u, 0x97a1cdc7u, 0x8012b07au, 0x6b9c8591u, 0x1bc281bcu, 0xd05c71ebu, 0xc6775e4eu,
        0x15afd155u, 0xd51172b0u, 0x3533e64fu, 0x1b8c1f62u, 0x879f9759u, 0x7d8818e4u, 0x44870ef3u, 0xfcfa87b6u, 0x28005b9du, 0x5b492858u, 0xf5d10fd7u, 0x905b6b4au, 0x780ce221u, 0x8c68950cu, 0x974d4cfbu, 0x3c8ade1eu,
        0x54ea2ee5u, 0x6f5f9300u, 0x53db6a5fu, 0x4e3c3432u, 0x4b2b85e9u, 0x78c09634u, 0xc5234c03u, 0xbbce0186u, 0x00966b2du, 0xaa2b52a8u, 0x35f915e7u, 0x5c5e1a1au, 0xf826a2b1u, 0x1e80bc5cu, 0x79012c0bu, 0x261d91eeu,
        0x34523075u, 0x5f570750u, 0x7794326fu, 0x47e4bd02u, 0x7b8d5879u, 0x77ada784u, 0xdce30d13u, 0x32072f56u, 0x430e9ebdu, 0xf7e150f8u, 0x815adff7u, 0xe267bceau, 0x83d2c741u, 0x5edff7acu, 0x7a490f1bu, 0x07cc79beu,
        0xfde0d605u, 0x9c9ccfa0u, 0xf1bf3e7fu, 0xd072b9d2u, 0xadce0f09u, 0xa1c44cd4u, 0x2ab75223u, 0x77e31126u, 0x7881f64du, 0x30b02348u, 0x55776e07u, 0xe80553bau, 0x513a4fd1u, 0x639b46fcu, 0x1835f62bu, 0x0174958eu,
        0x5dcf1f95u, 0x9c15ebf0u, 0xeffd8e8fu, 0x5f132aa2u, 0xdd36a999u, 0xcfb98624u, 0xcdd11b33u, 0xa8dea6f6u, 0xd44971ddu, 0x661cc998u, 0x940fc017u, 0xca03de8au, 0xc4c63c61u, 0x1c07aa4cu, 0x5818e13bu, 0x9e32e55eu,
        0xf2960d25u, 0x9fe75c40u, 0x8c30229fu, 0xea330f72u, 0xfb502829u, 0xdb825374u, 0x75a16843u, 0xb3b6f0c6u, 0xc3fe116du, 0x1eec43e8u, 0x9324d627u, 0x4c705d5au, 0x011f8cf1u, 0xa0ba219cu, 0xd782d04bu, 0xa464692eu,
        0xdcee9eb5u, 0x07762090u, 0xdc77faafu, 0xb77f6842u, 0x7fe38ab9u, 0xf053b4c4u, 0x71d93953u, 0x2a68ee96u, 0x7f78d4fdu, 0xa7239238u, 0x2cf7b037u, 0x6a97d02au, 0x772f4181u, 0x8387acecu, 0xdc44c35bu, 0xe5a620feu,
    };
    uint32_t acc = 0xf4b303feu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 38) & 255]);
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
    case 0: acc = heavy_round(acc, 0xca48d835u); break;
    case 1: acc = heavy_round(acc, 0xa5740c10u); break;
    case 2: acc = heavy_round(acc, 0x0db1f02fu); break;
    case 3: acc = heavy_round(acc, 0x48c1dfc2u); break;
    case 4: acc = heavy_round(acc, 0x07609c39u); break;
    case 5: acc = heavy_round(acc, 0x5c269844u); break;
    case 6: acc = heavy_round(acc, 0x29b3c6d3u); break;
    case 7: acc = heavy_round(acc, 0x66631e16u); break;
    case 8: acc = heavy_round(acc, 0xdd9a3e7du); break;
    case 9: acc = heavy_round(acc, 0x0c5eedb8u); break;
    case 10: acc = heavy_round(acc, 0xe6f055b7u); break;
    case 11: acc = heavy_round(acc, 0x17a937aau); break;
    case 12: acc = heavy_round(acc, 0x4bce8301u); break;
    case 13: acc = heavy_round(acc, 0x2937006cu); break;
    case 14: acc = heavy_round(acc, 0x48f100dbu); break;
    case 15: acc = heavy_round(acc, 0x0c66407eu); break;
    case 16: acc = heavy_round(acc, 0xe7a06dc5u); break;
    case 17: acc = heavy_round(acc, 0xa38e0460u); break;
    case 18: acc = heavy_round(acc, 0x8dc36c3fu); break;
    case 19: acc = heavy_round(acc, 0xdea38c92u); break;
    case 20: acc = heavy_round(acc, 0x6f0142c9u); break;
    case 21: acc = heavy_round(acc, 0xe5bc6d94u); break;
    case 22: acc = heavy_round(acc, 0xae1d7be3u); break;
    case 23: acc = heavy_round(acc, 0xec75afe6u); break;
    case 24: acc = heavy_round(acc, 0x4ff4860du); break;
    case 25: acc = heavy_round(acc, 0xd087f008u); break;
    case 26: acc = heavy_round(acc, 0x6dc153c7u); break;
    case 27: acc = heavy_round(acc, 0x05107e7au); break;
    case 28: acc = heavy_round(acc, 0x6a93fb91u); break;
    case 29: acc = heavy_round(acc, 0x2d577fbcu); break;
    case 30: acc = heavy_round(acc, 0xe02157ebu); break;
    case 31: acc = heavy_round(acc, 0x7d1b0c4eu); break;
    case 32: acc = heavy_round(acc, 0x9153a755u); break;
    case 33: acc = heavy_round(acc, 0x49a750b0u); break;
    case 34: acc = heavy_round(acc, 0x85442c4fu); break;
    case 35: acc = heavy_round(acc, 0x7e43ad62u); break;
    case 36: acc = heavy_round(acc, 0x8b85cd59u); break;
    case 37: acc = heavy_round(acc, 0xafbcd6e4u); break;
    case 38: acc = heavy_round(acc, 0x62e8b4f3u); break;
    case 39: acc = heavy_round(acc, 0xa613f5b6u); break;
    case 40: acc = heavy_round(acc, 0x9e1ef19du); break;
    case 41: acc = heavy_round(acc, 0x309ac658u); break;
    case 42: acc = heavy_round(acc, 0xbdea15d7u); break;
    case 43: acc = heavy_round(acc, 0x4804b94au); break;
    case 44: acc = heavy_round(acc, 0xdeb9d821u); break;
    case 45: acc = heavy_round(acc, 0xb335130cu); break;
    case 46: acc = heavy_round(acc, 0x57e3b2fbu); break;
    case 47: acc = heavy_round(acc, 0xe6d20c1eu); break;
    case 48: acc = heavy_round(acc, 0xd4db84e5u); break;
    case 49: acc = heavy_round(acc, 0x7ce4f100u); break;
    case 50: acc = heavy_round(acc, 0x5515305fu); break;
    case 51: acc = heavy_round(acc, 0xb90f4232u); break;
    case 52: acc = heavy_round(acc, 0x2d773be9u); break;
    case 53: acc = heavy_round(acc, 0xe71cd434u); break;
    case 54: acc = heavy_round(acc, 0x2e867203u); break;
    case 55: acc = heavy_round(acc, 0x4cfaef86u); break;
    case 56: acc = heavy_round(acc, 0x84b2812du); break;
    case 57: acc = heavy_round(acc, 0xb65c70a8u); break;
    case 58: acc = heavy_round(acc, 0x546b9be7u); break;
    case 59: acc = heavy_round(acc, 0x9f92e81au); break;
    case 60: acc = heavy_round(acc, 0x89e918b1u); break;
    case 61: acc = heavy_round(acc, 0x8664ba5cu); break;
    case 62: acc = heavy_round(acc, 0x64c9120bu); break;
    case 63: acc = heavy_round(acc, 0x3ae83feeu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

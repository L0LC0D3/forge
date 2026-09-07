#include "heavy.h"
#include "mods.h"

int mod_035(int x)
{
    static const uint32_t local[256] = {
        0x4df4760au, 0x1fdaede1u, 0x504dadccu, 0x3c8c0ebbu, 0x8dad34deu, 0x9af916a5u, 0x9037d7c0u, 0xe0fb681fu, 0xffb696f2u, 0xb67b09a9u, 0x7808c6f4u, 0x41fa45c3u, 0x1dfb3046u, 0x8e424aedu, 0x30cc2f68u, 0xb2d8cba7u,
        0x95e4d4dau, 0xcf269e71u, 0x9d8f051cu, 0xb8775dcbu, 0x52b098aeu, 0xb53a0835u, 0x5cd37c10u, 0x542aa02fu, 0x2302cfc2u, 0x6c4ccc39u, 0x47450844u, 0x2adf76d3u, 0x0dbb0e16u, 0xd6b16e7du, 0x9fac5db8u, 0x2c7f05b7u,
        0xaa0827aau, 0xfe40b301u, 0x6823706cu, 0x9f92b0dbu, 0x0ebc307eu, 0xb39d9dc5u, 0x90897460u, 0xb5281c3fu, 0x2ce07c92u, 0x1fb972c9u, 0xf236dd94u, 0x08f52be3u, 0xa9899fe6u, 0x4b97b60du, 0x4cf16008u, 0xb1bc03c7u,
        0x8aeb6e7au, 0xe2522b91u, 0xb91fefbcu, 0xc5ef07ebu, 0x4cacfc4eu, 0xb15cd755u, 0x433ec0b0u, 0x7894dc4fu, 0x2f7c9d62u, 0xab09fd59u, 0xa49346e4u, 0x326c64f3u, 0xd7e3e5b6u, 0x6f4e219du, 0x4d203658u, 0x4b50c5d7u,
        0x905ba94au, 0x9ec40821u, 0x32d9830cu, 0x47dd62fbu, 0xc29ffc1eu, 0x7bf0b4e5u, 0x1a186100u, 0xbf51e05fu, 0x7c443232u, 0x9ec76be9u, 0x4b4f4434u, 0x4db62203u, 0x1286df86u, 0xbe6db12du, 0xe9fde0a8u, 0x363e4be7u,
        0x3965d81au, 0xd53f48b1u, 0x60e52a5cu, 0x99eec20bu, 0x21f22feeu, 0x23123675u, 0x977b5550u, 0x6680286fu, 0x73e43b02u, 0xd1babe79u, 0xe49fd584u, 0x61836313u, 0x366f8d56u, 0x3fcf64bdu, 0xf28f5ef8u, 0xf3c595f7u,
        0xfc56faeau, 0x35aced41u, 0x0817e5acu, 0x98f4251bu, 0xe74097beu, 0x88ba5c05u, 0x6b0c9da0u, 0x1780b47fu, 0x5649b7d2u, 0xf0ecf509u, 0xcff9fad4u, 0xe4c52823u, 0x53daef26u, 0x148c3c4du, 0x0b19b148u, 0x5967a407u,
        0x16bc11bau, 0x0e35f5d1u, 0x7686b4fcu, 0x99fe8c2bu, 0x2a68338eu, 0xf1222595u, 0xc1b139f0u, 0x57f4848fu, 0x12a1a8a2u, 0x0fa70f99u, 0x1e12b424u, 0xceac7133u, 0x7e4604f6u, 0x07fd37ddu, 0xfd21d798u, 0xa0e57617u,
        0x5d621c8au, 0xdb436261u, 0xd386984cu, 0x7a5ef73bu, 0x6e86035eu, 0x92c29325u, 0x958e2a40u, 0x99bc989fu, 0x17590d72u, 0x37720e29u, 0xe0df0174u, 0xa6aa3e43u, 0x9c6dcec6u, 0x1fbb576du, 0x076cd1e8u, 0x78400c27u,
        0x0c561b5au, 0xd77e32f1u, 0x6fac8f9cu, 0xafa6664bu, 0x71f7072eu, 0x2654a4b5u, 0xfe086e90u, 0x4af9f0afu, 0x221ce642u, 0xf816f0b9u, 0x7b93e2c4u, 0x946f8f53u, 0x384f4c96u, 0x2b9f9afdu, 0x2dffa038u, 0x11b86637u,
        0x96e50e2au, 0x8bcf6781u, 0x14cd9aecu, 0x57a5d95bu, 0xfe583efeu, 0x76d15a45u, 0x7fc506e0u, 0xe60d8cbfu, 0x0fda3312u, 0xf79eb749u, 0xf2a65814u, 0x6fed6463u, 0x4f277e66u, 0x55c3028du, 0x8a1f4288u, 0x33cf8447u,
        0x779bf4fau, 0x5f600011u, 0x55feba3cu, 0x486e506bu, 0xb886aaceu, 0xf171b3d5u, 0x5ca8f330u, 0x01986ccfu, 0xacbdf3e2u, 0x825261d9u, 0x3bcb6164u, 0xd154bd73u, 0x21736436u, 0xb27e8e1du, 0x9a50b8d8u, 0x49466657u,
        0x0047cfcau, 0x2798fca1u, 0xdf94ed8cu, 0x2050cb7bu, 0xf09f4a9eu, 0x35aeb165u, 0xe3d93380u, 0x607b90dfu, 0x843528b2u, 0x1abaf069u, 0x8df7feb4u, 0x21169a83u, 0x02effe06u, 0xd06b3dadu, 0x92590328u, 0x711e0c67u,
        0x29f59e9au, 0xb8235d31u, 0xc72534dcu, 0x55de4a8bu, 0x71ff1e6eu, 0xa54152f5u, 0xc1bac7d0u, 0x01d7f8efu, 0xb0ecd182u, 0x09a162f9u, 0xb1613004u, 0xa7e3fb93u, 0x2a9a4bd6u, 0x4862113du, 0xab3d2178u, 0x8e977677u,
        0x64f2616au, 0x72e821c1u, 0xdb84902cu, 0x47e7cd9bu, 0x5343263eu, 0xf4229885u, 0x4ff2b020u, 0x310ea4ffu, 0xacd1ee52u, 0xee0eb989u, 0x4f7bf554u, 0x9eade0a3u, 0x82af4da6u, 0x4d7c08cdu, 0x734213c8u, 0x5933a487u,
        0x68cb183au, 0xd8104a51u, 0xf4c7ff7cu, 0x4d7e54abu, 0xc648620eu, 0xb88b8215u, 0xe565ec70u, 0x95c0950fu, 0x21117f22u, 0x4d4bf419u, 0x42fd4ea4u, 0x3ea549b3u, 0x78ac0376u, 0x3d12245du, 0x1decda18u, 0x6cb39697u,
    };
    uint32_t acc = 0x60485597u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 35) & 255]);
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
    case 0: acc = heavy_round(acc, 0xaade7f24u); break;
    case 1: acc = heavy_round(acc, 0xfae7c033u); break;
    case 2: acc = heavy_round(acc, 0x15c307f6u); break;
    case 3: acc = heavy_round(acc, 0xd3885eddu); break;
    case 4: acc = heavy_round(acc, 0x93bcd298u); break;
    case 5: acc = heavy_round(acc, 0x89c63517u); break;
    case 6: acc = heavy_round(acc, 0x63e5cf8au); break;
    case 7: acc = heavy_round(acc, 0x24457961u); break;
    case 8: acc = heavy_round(acc, 0x9ccbc34cu); break;
    case 9: acc = heavy_round(acc, 0x7504263bu); break;
    case 10: acc = heavy_round(acc, 0x90a3665eu); break;
    case 11: acc = heavy_round(acc, 0xaeb29a25u); break;
    case 12: acc = heavy_round(acc, 0x52888540u); break;
    case 13: acc = heavy_round(acc, 0xd5b5379fu); break;
    case 14: acc = heavy_round(acc, 0xb9532072u); break;
    case 15: acc = heavy_round(acc, 0xefb70529u); break;
    case 16: acc = heavy_round(acc, 0xd5c98c74u); break;
    case 17: acc = heavy_round(acc, 0x1cf54d43u); break;
    case 18: acc = heavy_round(acc, 0xfd3791c6u); break;
    case 19: acc = heavy_round(acc, 0x78ac3e6du); break;
    case 20: acc = heavy_round(acc, 0x16b28ce8u); break;
    case 21: acc = heavy_round(acc, 0x4a4c8b27u); break;
    case 22: acc = heavy_round(acc, 0x18928e5au); break;
    case 23: acc = heavy_round(acc, 0xc76209f1u); break;
    case 24: acc = heavy_round(acc, 0x64e87a9cu); break;
    case 25: acc = heavy_round(acc, 0xf653554bu); break;
    case 26: acc = heavy_round(acc, 0x46f92a2eu); break;
    case 27: acc = heavy_round(acc, 0x3c626bb5u); break;
    case 28: acc = heavy_round(acc, 0x09058990u); break;
    case 29: acc = heavy_round(acc, 0x55964fafu); break;
    case 30: acc = heavy_round(acc, 0x40e7b942u); break;
    case 31: acc = heavy_round(acc, 0xf375a7b9u); break;
    case 32: acc = heavy_round(acc, 0xdb4d2dc4u); break;
    case 33: acc = heavy_round(acc, 0x97ba5e53u); break;
    case 34: acc = heavy_round(acc, 0x6895cf96u); break;
    case 35: acc = heavy_round(acc, 0x826641fdu); break;
    case 36: acc = heavy_round(acc, 0x0ba01b38u); break;
    case 37: acc = heavy_round(acc, 0x46e0a537u); break;
    case 38: acc = heavy_round(acc, 0x7a0a412au); break;
    case 39: acc = heavy_round(acc, 0xe204fe81u); break;
    case 40: acc = heavy_round(acc, 0x8eb045ecu); break;
    case 41: acc = heavy_round(acc, 0x8b4a885bu); break;
    case 42: acc = heavy_round(acc, 0x526f21feu); break;
    case 43: acc = heavy_round(acc, 0x056ce145u); break;
    case 44: acc = heavy_round(acc, 0xe474e1e0u); break;
    case 45: acc = heavy_round(acc, 0x773dabbfu); break;
    case 46: acc = heavy_round(acc, 0xa2a5c612u); break;
    case 47: acc = heavy_round(acc, 0xe3872e49u); break;
    case 48: acc = heavy_round(acc, 0x2bde6314u); break;
    case 49: acc = heavy_round(acc, 0xbf27f363u); break;
    case 50: acc = heavy_round(acc, 0xa11ac166u); break;
    case 51: acc = heavy_round(acc, 0xf6cf698du); break;
    case 52: acc = heavy_round(acc, 0xb7ca7d88u); break;
    case 53: acc = heavy_round(acc, 0x82038347u); break;
    case 54: acc = heavy_round(acc, 0x0ed9e7fau); break;
    case 55: acc = heavy_round(acc, 0x77575711u); break;
    case 56: acc = heavy_round(acc, 0x9938253cu); break;
    case 57: acc = heavy_round(acc, 0x05fabf6bu); break;
    case 58: acc = heavy_round(acc, 0x23e24dceu); break;
    case 59: acc = heavy_round(acc, 0xd30afad5u); break;
    case 60: acc = heavy_round(acc, 0xd2bb8e30u); break;
    case 61: acc = heavy_round(acc, 0x8d4c4bcfu); break;
    case 62: acc = heavy_round(acc, 0x36ba46e2u); break;
    case 63: acc = heavy_round(acc, 0x283498d9u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

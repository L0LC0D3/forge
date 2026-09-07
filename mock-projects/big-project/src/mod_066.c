#include "heavy.h"
#include "mods.h"

int mod_066(int x)
{
    static const uint32_t local[256] = {
        0xe4cef239u, 0xf704f644u, 0xce728cd3u, 0x1cf72c16u, 0x7eb2f47du, 0xd9242bb8u, 0xf1a87bb7u, 0xb82725aau, 0xdd079901u, 0x6de11e6cu, 0x7b8886dbu, 0x137c0e7eu, 0x11cfe3c5u, 0x36fb0260u, 0x4580523fu, 0xecdf3a92u,
        0xed5d18c9u, 0xcdaa4b94u, 0xe9a5c1e3u, 0x14453de6u, 0xe612bc0du, 0xbf94ae08u, 0x331af9c7u, 0xf8c1ec7au, 0x3a6a9191u, 0xe1011dbcu, 0x02b25debu, 0x9cdc5a4eu, 0xd1389d55u, 0xc84bceb0u, 0xcbd2924fu, 0xc622db62u,
        0x9c2f2359u, 0x669a34e4u, 0x0d9a7af3u, 0x7bff03b6u, 0x80a2a79du, 0xf1cf0458u, 0x6c453bd7u, 0x29c9a74au, 0x0a8dee21u, 0x93be310cu, 0x4ece38fbu, 0xf81eda1eu, 0x6dd5fae5u, 0x92a0ef00u, 0x24d5165fu, 0x3171f032u,
        0x99ce11e9u, 0xe6c9b234u, 0xb8c1b803u, 0xc5e17d86u, 0x62fbb72du, 0x71982ea8u, 0x322841e7u, 0x424b561au, 0x071aaeb1u, 0x49ad585cu, 0xac6d180bu, 0xcea08deeu, 0x8f60fc75u, 0xd05f6350u, 0x85a8de6fu, 0x07797902u,
        0xd502e479u, 0x846dc384u, 0xc9cc7913u, 0xc6e9ab56u, 0x2bf6eabdu, 0xc5f52cf8u, 0x5e050bf7u, 0x3093f8eau, 0xf7f9d341u, 0xffa393acu, 0xd05ffb1bu, 0x94fe75beu, 0xafd2a205u, 0xe92c2ba0u, 0xefaeea7fu, 0x002675d2u,
        0x12d69b09u, 0xd6fb68d4u, 0x8fabbe23u, 0x87548d26u, 0x94ad424du, 0x4b2aff48u, 0x1d5c9a07u, 0xaa308fbau, 0x43545bd1u, 0x3bb5e2fcu, 0xe7b7e22bu, 0x5b15918eu, 0xab63eb95u, 0xc1ec47f0u, 0x40883a8fu, 0x82a5e6a2u,
        0x7e923599u, 0x2727a224u, 0xd9908733u, 0x129f22f6u, 0x0077bdddu, 0x82bea598u, 0x01efec17u, 0xfbee1a8au, 0x7d934861u, 0x5d39464cu, 0xa7c5cd3bu, 0x9c02e15eu, 0x508dd925u, 0x0cc4b840u, 0x4215ce9fu, 0x7564cb72u,
        0x39beb429u, 0xbee76f74u, 0x06ebd443u, 0x47866cc6u, 0x0cef5d6du, 0x63751fe8u, 0x11c00227u, 0xd9d9995au, 0xf95f98f1u, 0xecc2bd9cu, 0x5e1abc4bu, 0x0e23652eu, 0xf0096ab5u, 0x991a7c90u, 0xba78a6afu, 0x0e102442u,
        0xec2516b9u, 0x396fd0c4u, 0x176ea553u, 0xa8076a96u, 0x21ed20fdu, 0xa9536e38u, 0xd70ddc37u, 0x2f400c2au, 0x57a24d81u, 0xec2748ecu, 0x0087af5bu, 0x73141cfeu, 0xeccfa045u, 0xa39294e0u, 0x7c11c2bfu, 0xa194f112u,
        0x53ce5d49u, 0xd335c614u, 0xbb09fa63u, 0x295f1c66u, 0x018a088du, 0x259e9088u, 0x705a7a47u, 0xeeae72fau, 0x17846611u, 0x267be83cu, 0x3d1da66bu, 0x67b208ceu, 0x4c1979d5u, 0x26120130u, 0x758222cfu, 0x742031e2u,
        0xd50387d9u, 0xb9ee4f64u, 0x61eed373u, 0x040a8236u, 0x581f141du, 0x0edb86d8u, 0xa066dc57u, 0xe1f1cdcau, 0x266ee2a1u, 0x80159b8cu, 0x8a2da17bu, 0x341a289eu, 0x455ff765u, 0x27bdc180u, 0xc1aac6dfu, 0x891ee6b2u,
        0x0a4d9669u, 0x5c8e6cb4u, 0x4c8e3083u, 0x83c69c06u, 0x4c4543adu, 0x50cf5128u, 0xde340267u, 0x7a171c9au, 0x700ac331u, 0x468962dcu, 0x3648a08bu, 0x9ba97c6eu, 0xd25c18f5u, 0x0cfad5d0u, 0xb7acaeefu, 0x733e0f82u,
        0x547588f9u, 0xbb4b1e04u, 0x9b991193u, 0xd79069d6u, 0x0ed5973du, 0xdc7eef78u, 0x6502ec77u, 0x9f6b5f6au, 0x6e4107c1u, 0x80ac3e2cu, 0x783fa39bu, 0xacfd043eu, 0x3f06de85u, 0xe76e3e20u, 0xfae8daffu, 0x246aac52u,
        0x6a845f89u, 0xb7996354u, 0x600076a3u, 0xe1a4eba6u, 0x6ae90ecdu, 0xf82f61c8u, 0x44549a87u, 0x817b963au, 0xb93ab051u, 0x3e932d7cu, 0x7f23aaabu, 0x91f1c00eu, 0xb9994815u, 0xc5fcfa70u, 0x8b004b0fu, 0xbdd1bd22u,
        0xe9c31a19u, 0x642e3ca4u, 0xaaf55fb3u, 0x07812176u, 0x55d8aa5du, 0x8f65a818u, 0x6fea0c97u, 0x6714c10au, 0x9760bce1u, 0xe99330ccu, 0x8245b5bbu, 0x5fa4afdeu, 0xe28c55a5u, 0x04cc0ac0u, 0xd3d3ff1fu, 0x5fe041f2u,
        0xe5bab8a9u, 0x54fea9f4u, 0x9de8ccc3u, 0x01e20b46u, 0x7f3d69edu, 0x82e6c268u, 0xcfc442a7u, 0x7e43dfdau, 0x8d5c2d71u, 0x9441481cu, 0xd136c4cbu, 0xe672d3aeu, 0x5c990735u, 0x9d406f10u, 0xbd84f72fu, 0xfa433ac2u,
    };
    uint32_t acc = 0xdc3a0dc2u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 66) & 255]);
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
    case 0: acc = heavy_round(acc, 0x99792b41u); break;
    case 1: acc = heavy_round(acc, 0x882b0bacu); break;
    case 2: acc = heavy_round(acc, 0x7111131bu); break;
    case 3: acc = heavy_round(acc, 0xa58cadbeu); break;
    case 4: acc = heavy_round(acc, 0xa95b7a05u); break;
    case 5: acc = heavy_round(acc, 0x332f23a0u); break;
    case 6: acc = heavy_round(acc, 0x18a5827fu); break;
    case 7: acc = heavy_round(acc, 0x2d3c2dd2u); break;
    case 8: acc = heavy_round(acc, 0xfc40f309u); break;
    case 9: acc = heavy_round(acc, 0xa871e0d4u); break;
    case 10: acc = heavy_round(acc, 0x1e7fd623u); break;
    case 11: acc = heavy_round(acc, 0xa1a9c526u); break;
    case 12: acc = heavy_round(acc, 0x57511a4du); break;
    case 13: acc = heavy_round(acc, 0x8d8cf748u); break;
    case 14: acc = heavy_round(acc, 0xbd263207u); break;
    case 15: acc = heavy_round(acc, 0xf1fd47bau); break;
    case 16: acc = heavy_round(acc, 0x7209b3d1u); break;
    case 17: acc = heavy_round(acc, 0x73fb5afcu); break;
    case 18: acc = heavy_round(acc, 0x290efa2bu); break;
    case 19: acc = heavy_round(acc, 0xb811c98eu); break;
    case 20: acc = heavy_round(acc, 0x5a82c395u); break;
    case 21: acc = heavy_round(acc, 0x088d3ff0u); break;
    case 22: acc = heavy_round(acc, 0x3184d28fu); break;
    case 23: acc = heavy_round(acc, 0x3c099ea2u); break;
    case 24: acc = heavy_round(acc, 0x9bf28d99u); break;
    case 25: acc = heavy_round(acc, 0xa01c1a24u); break;
    case 26: acc = heavy_round(acc, 0x1dca9f33u); break;
    case 27: acc = heavy_round(acc, 0x07225af6u); break;
    case 28: acc = heavy_round(acc, 0x2b7195ddu); break;
    case 29: acc = heavy_round(acc, 0x557e9d98u); break;
    case 30: acc = heavy_round(acc, 0x6a7f8417u); break;
    case 31: acc = heavy_round(acc, 0x59c8d28au); break;
    case 32: acc = heavy_round(acc, 0x5efea061u); break;
    case 33: acc = heavy_round(acc, 0x2cbcbe4cu); break;
    case 34: acc = heavy_round(acc, 0x4b42e53bu); break;
    case 35: acc = heavy_round(acc, 0x18ed195eu); break;
    case 36: acc = heavy_round(acc, 0x72c2b125u); break;
    case 37: acc = heavy_round(acc, 0xef83b040u); break;
    case 38: acc = heavy_round(acc, 0x1498669fu); break;
    case 39: acc = heavy_round(acc, 0x06968372u); break;
    case 40: acc = heavy_round(acc, 0x60950c29u); break;
    case 41: acc = heavy_round(acc, 0xb6d9e774u); break;
    case 42: acc = heavy_round(acc, 0xf20bec43u); break;
    case 43: acc = heavy_round(acc, 0x59b7a4c6u); break;
    case 44: acc = heavy_round(acc, 0x0dbf356du); break;
    case 45: acc = heavy_round(acc, 0x561317e8u); break;
    case 46: acc = heavy_round(acc, 0x8c959a27u); break;
    case 47: acc = heavy_round(acc, 0x0942515au); break;
    case 48: acc = heavy_round(acc, 0x1300f0f1u); break;
    case 49: acc = heavy_round(acc, 0x1b04359cu); break;
    case 50: acc = heavy_round(acc, 0x853dd44bu); break;
    case 51: acc = heavy_round(acc, 0x5e7b9d2eu); break;
    case 52: acc = heavy_round(acc, 0xa2d442b5u); break;
    case 53: acc = heavy_round(acc, 0x97777490u); break;
    case 54: acc = heavy_round(acc, 0xe8013eafu); break;
    case 55: acc = heavy_round(acc, 0xa28fdc42u); break;
    case 56: acc = heavy_round(acc, 0x51f16eb9u); break;
    case 57: acc = heavy_round(acc, 0x67e048c4u); break;
    case 58: acc = heavy_round(acc, 0xfaf4bd53u); break;
    case 59: acc = heavy_round(acc, 0xfb66a296u); break;
    case 60: acc = heavy_round(acc, 0xc612f8fdu); break;
    case 61: acc = heavy_round(acc, 0x2b4f6638u); break;
    case 62: acc = heavy_round(acc, 0x0da97437u); break;
    case 63: acc = heavy_round(acc, 0xcbb6c42au); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

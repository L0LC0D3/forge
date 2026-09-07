#include "heavy.h"
#include "mods.h"

int mod_085(int x)
{
    static const uint32_t local[256] = {
        0xb1fdc620u, 0xbc62c2ffu, 0x320b7452u, 0xb35e8789u, 0x3e9d6b54u, 0x9e64dea3u, 0x362e33a6u, 0x7091b6cdu, 0xdcafe9c8u, 0x5d0b8287u, 0x4b355e3au, 0x8559d851u, 0xee18357cu, 0x321512abu, 0xffa4080eu, 0x5c56f015u,
        0x028e8270u, 0xe294330fu, 0xc6c48522u, 0xa1c74219u, 0x4c5444a4u, 0x6413c7b3u, 0xb37c6976u, 0x384b525du, 0x26283018u, 0xe1faf497u, 0x9660890au, 0xb7e9e4e1u, 0x1e7a38ccu, 0x07311dbbu, 0x1308f7deu, 0xfb53fda5u,
        0x3bdf92c0u, 0xb001e71fu, 0x80a509f2u, 0x7f68e0a9u, 0x6ec6b1f4u, 0x684134c3u, 0xa9cf5346u, 0x98fa11edu, 0x646b4a68u, 0x59af2aa7u, 0xbfa1a7dau, 0xc4cf5571u, 0x2f0a501cu, 0x8e9c2ccbu, 0x14091baeu, 0x95eaaf35u,
        0x7755f710u, 0xacccdf2fu, 0x6f5a02c2u, 0x060c6339u, 0x2b29b344u, 0x8c9e25d3u, 0x1523f116u, 0x2c76f57du, 0xdd7e38b8u, 0x506924b7u, 0xcc45baaau, 0x9ef32a01u, 0x4b9d7b6cu, 0xe0273fdbu, 0x7e41737eu, 0x011404c5u,
        0xbb96af60u, 0xed561b3fu, 0x41d06f92u, 0x85bac9c9u, 0x27f24894u, 0xe31b9ae3u, 0xe4b742e6u, 0x66dafd0du, 0x6ca5fb08u, 0x66a9e2c7u, 0x48d9c17au, 0x977e6291u, 0xe948babcu, 0x4be356ebu, 0x288eff4eu, 0x3408fe55u,
        0x4c86bbb0u, 0x223e9b4fu, 0x16355062u, 0x74bd1459u, 0x7cd571e4u, 0xbdea93f3u, 0xcb0648b6u, 0x267f289du, 0xd2679158u, 0x613264d7u, 0x192abc4au, 0xedd9ff21u, 0x16610e0cu, 0x6a2171fbu, 0x150ebf1eu, 0xd8429be5u,
        0xfb4b1c00u, 0xa8675f5fu, 0x49f5a532u, 0xff9c42e9u, 0x02c82f34u, 0xbf7c1103u, 0x0dce0286u, 0x43fc782du, 0x0487fba8u, 0x3903aae7u, 0x4845ab1au, 0x5faeffb1u, 0xca7b755cu, 0x2b72910bu, 0x411db2eeu, 0xd979dd75u,
        0x7648d050u, 0x98f1676fu, 0x49be6e02u, 0x99215579u, 0xa3ff8084u, 0xea811213u, 0x560b7056u, 0x222bebbdu, 0x7e0c39f8u, 0x2b5eb4f7u, 0xd8778deau, 0xb8e66441u, 0x366cf0acu, 0xe8a7b41bu, 0x7558dabeu, 0xf5a7c305u,
        0x9924d8a0u, 0xd93db37fu, 0x617caad2u, 0x8a554c09u, 0xabf065d4u, 0xb1ea9723u, 0x7ffb9226u, 0x3e26834du, 0x8f394c48u, 0xc9c48307u, 0x934d64bau, 0x63a92cd1u, 0x144a7ffcu, 0x72d1db2bu, 0x159d368eu, 0x4d054c95u,
        0xbcc434f0u, 0x2aed438fu, 0x8c5d5ba2u, 0x82812699u, 0x174fdf24u, 0x08e9a033u, 0x6b1b67f6u, 0xbf453eddu, 0xad943298u, 0x09f61517u, 0xd9942f8au, 0xf8605961u, 0xf769234cu, 0x2342063bu, 0xf107c65eu, 0xf20b7a25u,
        0x074be540u, 0x3be1179fu, 0x44cd8072u, 0x272de529u, 0xe412ec74u, 0x72ef2d43u, 0xca27f1c6u, 0x07211e6du, 0xc3e1ece8u, 0x55f46b27u, 0x7358ee5au, 0xcdb4e9f1u, 0x9c5dda9cu, 0xeb89354bu, 0x11f58a2eu, 0x79734bb5u,
        0xbc20e990u, 0xb63a2fafu, 0x547a1942u, 0xa42487b9u, 0x616e8dc4u, 0x13ac3e53u, 0xf31e2f96u, 0x419321fdu, 0x82277b38u, 0x9c008537u, 0x5fe8a12au, 0x888fde81u, 0x38fda5ecu, 0x6578685bu, 0x8e0381feu, 0x8a35c145u,
        0x8be841e0u, 0x50598bbfu, 0xa4502612u, 0x3b6e0e49u, 0x7fd7c314u, 0xbf11d363u, 0xaf3b2166u, 0xf4b4498du, 0xada9dd88u, 0x5e9b6347u, 0xa5d047fau, 0xac1a3711u, 0xcc5d853cu, 0xe3209f6bu, 0x560eadceu, 0x6d8bdad5u,
        0xe486ee30u, 0xdce02bcfu, 0x0c7ca6e2u, 0xd55378d9u, 0x21038c64u, 0x0950ec73u, 0x0afbc736u, 0x90dd951du, 0x70ee13d8u, 0xc4860557u, 0x22dce2cau, 0x29bcf3a1u, 0x6ed2788cu, 0x7ed2da7bu, 0x06340d9eu, 0x9eee9865u,
        0x4121ee80u, 0x5aaf0fdfu, 0x246c9bb2u, 0x905dc769u, 0x67e6e9b4u, 0x56da8983u, 0x261d2106u, 0x00a804adu, 0xabb91e28u, 0xa8c16b67u, 0x5c1b719au, 0xf1211431u, 0xa1f17fdcu, 0x2b20198bu, 0xb5d0a16eu, 0x5c16f9f5u,
        0x7a1e42d0u, 0x04e737efu, 0x12cd0482u, 0x5155f9f9u, 0x08b6db04u, 0xec5faa93u, 0x039c2ed6u, 0x38ec983du, 0x430ffc78u, 0xaa8e9577u, 0x4dd8f46au, 0x802f98c1u, 0xa08f9b2cu, 0xc2d95c9bu, 0xc781693eu, 0x34fdff85u,
    };
    uint32_t acc = 0x763a8685u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 85) & 255]);
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
    case 0: acc = heavy_round(acc, 0x1a524562u); break;
    case 1: acc = heavy_round(acc, 0x20d38559u); break;
    case 2: acc = heavy_round(acc, 0x33ff2ee4u); break;
    case 3: acc = heavy_round(acc, 0x21572cf3u); break;
    case 4: acc = heavy_round(acc, 0x0d800db6u); break;
    case 5: acc = heavy_round(acc, 0x482c299du); break;
    case 6: acc = heavy_round(acc, 0x8f969e58u); break;
    case 7: acc = heavy_round(acc, 0x00c40dd7u); break;
    case 8: acc = heavy_round(acc, 0xbde6514au); break;
    case 9: acc = heavy_round(acc, 0x95be9021u); break;
    case 10: acc = heavy_round(acc, 0xd7c26b0cu); break;
    case 11: acc = heavy_round(acc, 0x1c212afbu); break;
    case 12: acc = heavy_round(acc, 0x13c1241eu); break;
    case 13: acc = heavy_round(acc, 0xb88fbce5u); break;
    case 14: acc = heavy_round(acc, 0x535bc900u); break;
    case 15: acc = heavy_round(acc, 0xab2e285fu); break;
    case 16: acc = heavy_round(acc, 0x4323da32u); break;
    case 17: acc = heavy_round(acc, 0x3d12f3e9u); break;
    case 18: acc = heavy_round(acc, 0xb5552c34u); break;
    case 19: acc = heavy_round(acc, 0xb272ea03u); break;
    case 20: acc = heavy_round(acc, 0xefcd0786u); break;
    case 21: acc = heavy_round(acc, 0xd6edb92du); break;
    case 22: acc = heavy_round(acc, 0xf3ae48a8u); break;
    case 23: acc = heavy_round(acc, 0x25a393e7u); break;
    case 24: acc = heavy_round(acc, 0xc43a801au); break;
    case 25: acc = heavy_round(acc, 0x04fbd0b1u); break;
    case 26: acc = heavy_round(acc, 0x33a8125cu); break;
    case 27: acc = heavy_round(acc, 0x9e448a0bu); break;
    case 28: acc = heavy_round(acc, 0x0ffd57eeu); break;
    case 29: acc = heavy_round(acc, 0x93933e75u); break;
    case 30: acc = heavy_round(acc, 0x7f38bd50u); break;
    case 31: acc = heavy_round(acc, 0xca8e706fu); break;
    case 32: acc = heavy_round(acc, 0x414de302u); break;
    case 33: acc = heavy_round(acc, 0xc1084679u); break;
    case 34: acc = heavy_round(acc, 0x37bfbd84u); break;
    case 35: acc = heavy_round(acc, 0xf8922b13u); break;
    case 36: acc = heavy_round(acc, 0x4ddfb556u); break;
    case 37: acc = heavy_round(acc, 0x08716cbdu); break;
    case 38: acc = heavy_round(acc, 0x79f9c6f8u); break;
    case 39: acc = heavy_round(acc, 0x619cddf7u); break;
    case 40: acc = heavy_round(acc, 0x5ef5a2eau); break;
    case 41: acc = heavy_round(acc, 0xd6ab7541u); break;
    case 42: acc = heavy_round(acc, 0xe734cdacu); break;
    case 43: acc = heavy_round(acc, 0x19dbed1bu); break;
    case 44: acc = heavy_round(acc, 0x54b5bfbeu); break;
    case 45: acc = heavy_round(acc, 0xad9d6405u); break;
    case 46: acc = heavy_round(acc, 0x87c405a0u); break;
    case 47: acc = heavy_round(acc, 0xc840fc7fu); break;
    case 48: acc = heavy_round(acc, 0xf4bd5fd2u); break;
    case 49: acc = heavy_round(acc, 0x79bc7d09u); break;
    case 50: acc = heavy_round(acc, 0xbab3e2d4u); break;
    case 51: acc = heavy_round(acc, 0x8aa5f023u); break;
    case 52: acc = heavy_round(acc, 0xd7f51726u); break;
    case 53: acc = heavy_round(acc, 0x1dd0444du); break;
    case 54: acc = heavy_round(acc, 0x66be1948u); break;
    case 55: acc = heavy_round(acc, 0xaa30ec07u); break;
    case 56: acc = heavy_round(acc, 0x6ba4b9bau); break;
    case 57: acc = heavy_round(acc, 0x78f67dd1u); break;
    case 58: acc = heavy_round(acc, 0xe07d9cfcu); break;
    case 59: acc = heavy_round(acc, 0x03f8542bu); break;
    case 60: acc = heavy_round(acc, 0x99c75b8eu); break;
    case 61: acc = heavy_round(acc, 0x6ae72d95u); break;
    case 62: acc = heavy_round(acc, 0x39e2a1f0u); break;
    case 63: acc = heavy_round(acc, 0x49e6cc8fu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_000(int x)
{
    static const uint32_t local[256] = {
        0xe9260053u, 0x3f990996u, 0x60ac33fdu, 0xd5996538u, 0x16056737u, 0x96341b2au, 0x47011081u, 0xe0a92fecu, 0xbc2a6a5bu, 0x13d99bfeu, 0x2e711345u, 0x87976be0u, 0xfcfaadbfu, 0xee0ae012u, 0x8a058049u, 0xf6f48d14u,
        0xfe041563u, 0xd9d47b66u, 0x0259db8du, 0x993e4788u, 0xd160c547u, 0xb0e241fau, 0xcf9fe911u, 0x41138f3cu, 0x525b216bu, 0xfdd347ceu, 0x51e3acd5u, 0xfca89830u, 0x1a51cdcfu, 0x43cde0e2u, 0xab8f6ad9u, 0x867ad664u,
        0xf1dbae73u, 0x1553a136u, 0x622fa71du, 0x8744fdd8u, 0x622be757u, 0x4e555ccau, 0x497725a1u, 0x1d33028cu, 0x4ab5dc7bu, 0x0587279eu, 0x3c82ea65u, 0x5c561880u, 0x9f1131dfu, 0x08f455b2u, 0x695e3969u, 0xbc58b3b4u,
        0xb11dcb83u, 0xf9d37b06u, 0x32c696adu, 0xa7728828u, 0xab67cd67u, 0x5b9a6b9au, 0xec2fc631u, 0x9e9c89dcu, 0x1fcb9b8bu, 0x2a523b6eu, 0xf407cbf5u, 0xa704ecd0u, 0xce59d9efu, 0xcc2b3e82u, 0xf03aebf9u, 0xf4c32504u,
        0x087b6c93u, 0x725108d6u, 0x30f7aa3du, 0x06cbe678u, 0x54557777u, 0x3cfe6e6au, 0x7db2cac1u, 0xa825252cu, 0x346d5e9bu, 0xb6d1833eu, 0xd06b5185u, 0x8a5a1520u, 0x378cc5ffu, 0x7b5f9b52u, 0xc32e8289u, 0x6d2f2a54u,
        0xb4e591a3u, 0x1d094aa6u, 0xb3dbe1cdu, 0x079618c8u, 0xd875e587u, 0x9e0e653au, 0xe2293351u, 0x25e1d47cu, 0xe3ac25abu, 0x10e1ff0eu, 0x0be67b15u, 0xb13a9170u, 0xc64af60fu, 0x33be6c22u, 0x4b81fd19u, 0x9451c3a4u,
        0x738d3ab3u, 0x1b794076u, 0x3ccc3d5du, 0xb1561f18u, 0x978a1797u, 0x4197500au, 0xabfbffe1u, 0x5d2797ccu, 0x90d8f0bbu, 0x89a0aedeu, 0x52f248a5u, 0x13cb61c0u, 0xd2756a1fu, 0x11b4b0f2u, 0x68be5ba9u, 0x5a1ff0f4u,
        0x11e367c3u, 0xe25dea46u, 0x0761bcedu, 0x00d0f968u, 0xe5930da7u, 0xd1a62edau, 0xabd43071u, 0x3c8b6f1cu, 0xb784bfcbu, 0x2d6a92aeu, 0x5447ba35u, 0x47718610u, 0x302d222fu, 0x00ef69c2u, 0x00ac9e39u, 0x7fceb244u,
        0x7d9918d3u, 0x09b44816u, 0x9975607du, 0x380ba7b8u, 0x1ad1c7b7u, 0xaf8801aau, 0x809ac501u, 0xabe25a6cu, 0xfb8092dbu, 0x93dcaa7eu, 0x50dfcfc5u, 0xced1fe60u, 0x3fd31e3fu, 0x8c5b9692u, 0x8f55c4c9u, 0xe7d30794u,
        0xd49f4de3u, 0x1cb959e6u, 0x5320280du, 0x2e4b2a08u, 0xa3c745c7u, 0xc3c9c87au, 0x2778bd91u, 0xdc4159bcu, 0x38dd69ebu, 0xafd3f64eu, 0xabf38955u, 0x69d1cab0u, 0xfe085e4fu, 0xae263762u, 0xb702cf59u, 0xe5e1f0e4u,
        0x752706f3u, 0x69ea1fb6u, 0xfebb139du, 0xa0148058u, 0x113487d7u, 0x4e38834au, 0x8bd71a21u, 0x97fd6d0cu, 0x93ec44fbu, 0x9f6d761eu, 0x7afbe6e5u, 0x6595eb00u, 0x13ade25fu, 0x9fbc4c32u, 0xd03cbde9u, 0x8ef06e34u,
        0x0da14403u, 0xd3039986u, 0x60df232du, 0x7f2caaa8u, 0x281a8de7u, 0xb5e1321au, 0x175edab1u, 0x92ab945cu, 0x893e240bu, 0x7c0629eeu, 0x15b1e875u, 0xec835f50u, 0xe5e4aa6fu, 0xa9cad502u, 0x79cc9079u, 0x09337f84u,
        0xacbf0513u, 0x9d02c756u, 0xc86556bdu, 0x4298a8f8u, 0xf1ba57f7u, 0x5910d4eau, 0x41f8ff41u, 0xb920cfacu, 0xfda4071bu, 0x2a3b11beu, 0xa60e8e05u, 0x563f27a0u, 0xa60db67fu, 0xf43ed1d2u, 0x28bb4709u, 0xdc2024d4u,
        0xd1714a23u, 0x4024a926u, 0x9e66ae4du, 0x369d7b48u, 0xcb94e607u, 0x5d546bbau, 0x21ce87d1u, 0x81721efcu, 0x4e2eee2bu, 0x29e92d8eu, 0xb84ad795u, 0x77ae43f0u, 0x61ca068fu, 0x564542a2u, 0xb851e199u, 0x406b5e24u,
        0x7ae91333u, 0x37e63ef6u, 0xf63c29ddu, 0xccc02198u, 0x776b3817u, 0x7f78f68au, 0xfb487461u, 0x3af4824cu, 0x602fd93bu, 0x662d7d5eu, 0xcadfc525u, 0xf2f5b440u, 0x12fa9a9fu, 0x264b2772u, 0xfa196029u, 0x700a2b74u,
        0x38976043u, 0xd30488c6u, 0x1d7ec96du, 0xebc59be8u, 0x2b3e4e27u, 0xe38b755au, 0xd10fc4f1u, 0x5e3cf99cu, 0xb137c84bu, 0x0565012eu, 0xde8656b5u, 0x877a7890u, 0xafc072afu, 0x09fd8042u, 0x45dac2b9u, 0xf6318cc4u,
    };
    uint32_t acc = 0x42d0d7c4u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 0) & 255]);
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
    case 0: acc = heavy_round(acc, 0xbfdd454bu); break;
    case 1: acc = heavy_round(acc, 0xe89a5a2eu); break;
    case 2: acc = heavy_round(acc, 0x5ab1dbb5u); break;
    case 3: acc = heavy_round(acc, 0x29ae3990u); break;
    case 4: acc = heavy_round(acc, 0x64473fafu); break;
    case 5: acc = heavy_round(acc, 0xef83e942u); break;
    case 6: acc = heavy_round(acc, 0xbc8417b9u); break;
    case 7: acc = heavy_round(acc, 0xc1a8ddc4u); break;
    case 8: acc = heavy_round(acc, 0x02824e53u); break;
    case 9: acc = heavy_round(acc, 0xee5cff96u); break;
    case 10: acc = heavy_round(acc, 0x5aa3b1fdu); break;
    case 11: acc = heavy_round(acc, 0x715ecb38u); break;
    case 12: acc = heavy_round(acc, 0x9baf9537u); break;
    case 13: acc = heavy_round(acc, 0xac2c712au); break;
    case 14: acc = heavy_round(acc, 0xbce16e81u); break;
    case 15: acc = heavy_round(acc, 0x7081f5ecu); break;
    case 16: acc = heavy_round(acc, 0xbf10785bu); break;
    case 17: acc = heavy_round(acc, 0x411c51feu); break;
    case 18: acc = heavy_round(acc, 0xd5585145u); break;
    case 19: acc = heavy_round(acc, 0x320991e0u); break;
    case 20: acc = heavy_round(acc, 0xd5ea9bbfu); break;
    case 21: acc = heavy_round(acc, 0xc90df612u); break;
    case 22: acc = heavy_round(acc, 0x09f19e49u); break;
    case 23: acc = heavy_round(acc, 0x77e61314u); break;
    case 24: acc = heavy_round(acc, 0xdbabe363u); break;
    case 25: acc = heavy_round(acc, 0x156df166u); break;
    case 26: acc = heavy_round(acc, 0xb428d98du); break;
    case 27: acc = heavy_round(acc, 0xe7f52d88u); break;
    case 28: acc = heavy_round(acc, 0x264e7347u); break;
    case 29: acc = heavy_round(acc, 0xb24817fau); break;
    case 30: acc = heavy_round(acc, 0x5b0fc711u); break;
    case 31: acc = heavy_round(acc, 0x9635d53cu); break;
    case 32: acc = heavy_round(acc, 0x22fcaf6bu); break;
    case 33: acc = heavy_round(acc, 0xd29b7dceu); break;
    case 34: acc = heavy_round(acc, 0x2b926ad5u); break;
    case 35: acc = heavy_round(acc, 0x383c3e30u); break;
    case 36: acc = heavy_round(acc, 0x2af53bcfu); break;
    case 37: acc = heavy_round(acc, 0xf7ee76e2u); break;
    case 38: acc = heavy_round(acc, 0x72fb08d9u); break;
    case 39: acc = heavy_round(acc, 0xf5e5dc64u); break;
    case 40: acc = heavy_round(acc, 0xd4aefc73u); break;
    case 41: acc = heavy_round(acc, 0x69229736u); break;
    case 42: acc = heavy_round(acc, 0x1fb6251du); break;
    case 43: acc = heavy_round(acc, 0x0b4d63d8u); break;
    case 44: acc = heavy_round(acc, 0x653d1557u); break;
    case 45: acc = heavy_round(acc, 0xcc88b2cau); break;
    case 46: acc = heavy_round(acc, 0x8c5683a1u); break;
    case 47: acc = heavy_round(acc, 0xaffec88cu); break;
    case 48: acc = heavy_round(acc, 0x45f2ea7bu); break;
    case 49: acc = heavy_round(acc, 0x7934dd9eu); break;
    case 50: acc = heavy_round(acc, 0x18d92865u); break;
    case 51: acc = heavy_round(acc, 0xf76b3e80u); break;
    case 52: acc = heavy_round(acc, 0xa2481fdfu); break;
    case 53: acc = heavy_round(acc, 0x53926bb2u); break;
    case 54: acc = heavy_round(acc, 0x56295769u); break;
    case 55: acc = heavy_round(acc, 0x9e9d39b4u); break;
    case 56: acc = heavy_round(acc, 0x91fc9983u); break;
    case 57: acc = heavy_round(acc, 0x4937f106u); break;
    case 58: acc = heavy_round(acc, 0xc7e494adu); break;
    case 59: acc = heavy_round(acc, 0xfb2c6e28u); break;
    case 60: acc = heavy_round(acc, 0x737c7b67u); break;
    case 61: acc = heavy_round(acc, 0xbffb419au); break;
    case 62: acc = heavy_round(acc, 0x805ea431u); break;
    case 63: acc = heavy_round(acc, 0x7f71cfdcu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

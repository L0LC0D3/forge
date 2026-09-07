#include "heavy.h"
#include "mods.h"

int mod_075(int x)
{
    static const uint32_t local[256] = {
        0xa88e9112u, 0xc43b7d49u, 0x23806614u, 0x2a941a63u, 0xfc22bc66u, 0x4739288du, 0x96433088u, 0x60769a47u, 0x74dc12fau, 0xb5958611u, 0x201a883cu, 0xbdebc66bu, 0x32e9a8ceu, 0x67ac99d5u, 0x4b4aa130u, 0x892242cfu,
        0x6001d1e2u, 0x5538a7d9u, 0x8760ef64u, 0x1c80f373u, 0xd6362236u, 0x0616341du, 0x7b2826d8u, 0x480afc57u, 0xea076dcau, 0xcd4802a1u, 0x9bdc3b8cu, 0xb703c17bu, 0xebb9c89eu, 0xd23b1765u, 0xbd9e6180u, 0x7dd2e6dfu,
        0x33e886b2u, 0xac4ab669u, 0x91290cb4u, 0x34285083u, 0xcf5a3c06u, 0x948463adu, 0x42c3f128u, 0x3f602267u, 0x1e14bc9au, 0x71abe331u, 0xae7802dcu, 0x3126c08bu, 0xf9b11c6eu, 0x427f38f5u, 0xdd8375d0u, 0x5e5cceefu,
        0x36efaf82u, 0xaa3aa8f9u, 0xc10dbe04u, 0x123b3193u, 0x968c09d6u, 0xa35cb73du, 0x5e1b8f78u, 0x01b70c77u, 0x7950ff6au, 0x9caa27c1u, 0xdec2de2cu, 0xe325c39bu, 0xeb6ca43eu, 0x8471fe85u, 0x3c9ede20u, 0x4e20faffu,
        0xdb044c52u, 0x86117f89u, 0x78840354u, 0x47aa96a3u, 0x8e088ba6u, 0x7db82ecdu, 0x937401c8u, 0x1e90ba87u, 0xab49363au, 0x666bd051u, 0xbcd1cd7cu, 0x7c11caabu, 0x6ac9600eu, 0x464c6815u, 0x69d59a70u, 0xccc06b0fu,
        0xc1535d22u, 0x5d183a19u, 0x4a40dca4u, 0x65a77fb3u, 0x9b4cc176u, 0x98efca5du, 0x4e524818u, 0x09ae2c97u, 0x7aca610au, 0x9559dce1u, 0x31f9d0ccu, 0xb33bd5bbu, 0x0ce44fdeu, 0xa88775a5u, 0x414caac0u, 0xc61c1f1fu,
        0x8a49e1f2u, 0xc2d7d8a9u, 0x4a3949f4u, 0x0da2ecc3u, 0xf715ab46u, 0x249c89edu, 0xef7b6268u, 0x2b1062a7u, 0x95e17fdau, 0x2e1d4d71u, 0xd0cfe81cu, 0x5834e4cbu, 0x221a73aeu, 0xcddc2735u, 0x3c690f10u, 0xa255172fu,
        0xa594dac2u, 0x51195b39u, 0x5da24b44u, 0x014dddd3u, 0xfd604916u, 0x9a976d7du, 0x1cf450b8u, 0xeef85cb7u, 0x61db92aau, 0x039f2201u, 0x2529136cu, 0x62cdf7dbu, 0x8608cb7eu, 0x6b437cc5u, 0xc1cfc760u, 0x55cc533fu,
        0x22214792u, 0x37e5c1c9u, 0x8af0e094u, 0x329952e3u, 0xfd699ae6u, 0x4ef9750du, 0x12021308u, 0xd5e71ac7u, 0xcb45997au, 0x47085a91u, 0x041a52bcu, 0x03180eebu, 0x6f8c574eu, 0x57f67655u, 0x7565d3b0u, 0x7122d34fu,
        0x7e1c2862u, 0xcd860c59u, 0x49da09e4u, 0xd3b64bf3u, 0x09aea0b6u, 0x001ba09du, 0xef29a958u, 0x849d9cd7u, 0x15ec944au, 0x17c1f721u, 0xdbf8a60cu, 0xb16429fbu, 0x40c2171eu, 0x1d6e13e5u, 0x88503400u, 0x3139975fu,
        0x76f27d32u, 0x1e833ae9u, 0xd352c734u, 0x6715c903u, 0xc7ec5a86u, 0x6696f02du, 0x0a3013a8u, 0xd41ce2e7u, 0xacdd831au, 0x1374f7b1u, 0x04590d5cu, 0x3e43490bu, 0x57070aeeu, 0x87635575u, 0x08f3e850u, 0x8f319f6fu,
        0xd9514602u, 0x7da64d79u, 0x71901884u, 0xcf68ca13u, 0x411fc856u, 0xc54463bdu, 0x3e1a51f8u, 0xe1a5ecf7u, 0xf26565eau, 0xe60a5c41u, 0x0e1088acu, 0xe2866c1bu, 0xdaf832beu, 0x33cf3b05u, 0x32f5f0a0u, 0x506beb7fu,
        0x512582d2u, 0x13f84409u, 0xd006fdd4u, 0x5fa04f23u, 0xb185ea26u, 0x793cfb4du, 0x3b2d6448u, 0x1eb9bb07u, 0x10113cbau, 0xd9ab24d1u, 0x133417fcu, 0x4f3e932bu, 0x90728e8eu, 0x22eac495u, 0xbf3b4cf0u, 0x16897b8fu,
        0x399c33a2u, 0x70c21e99u, 0x4b6c7724u, 0xeaed5833u, 0x589bbff6u, 0x89d9b6ddu, 0xd6ee4a98u, 0x61194d17u, 0xc6ae078au, 0x66c05161u, 0x0718bb4cu, 0xbdbcbe3bu, 0xa6931e5eu, 0x472ef225u, 0x33e8fd40u, 0x6f6b4f9fu,
        0x6d225872u, 0x198cdd29u, 0x41b58474u, 0xd4c0e543u, 0x491e49c6u, 0x38b3966du, 0x5c2204e8u, 0xf2c5a327u, 0x3e48c65au, 0xc3f2e1f1u, 0x0653729cu, 0xff91ed4bu, 0x87b6e22eu, 0x1554c3b5u, 0x34640190u, 0xe53267afu,
        0x1564f142u, 0x1a217fb9u, 0x621725c4u, 0x20cbf653u, 0x390a8796u, 0x91a399fdu, 0xdacd9338u, 0xa1ffbd37u, 0xd62e792au, 0x762bd681u, 0xa6b93decu, 0x8e8f205bu, 0xa97ad9feu, 0x14553945u, 0xd15159e0u, 0x0e3fc3bfu,
    };
    uint32_t acc = 0xa929e2bfu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 75) & 255]);
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
    case 0: acc = heavy_round(acc, 0x4487484cu); break;
    case 1: acc = heavy_round(acc, 0xad87e73bu); break;
    case 2: acc = heavy_round(acc, 0xc73a335eu); break;
    case 3: acc = heavy_round(acc, 0x8f090325u); break;
    case 4: acc = heavy_round(acc, 0x65c1da40u); break;
    case 5: acc = heavy_round(acc, 0xf47c889fu); break;
    case 6: acc = heavy_round(acc, 0x9cb83d72u); break;
    case 7: acc = heavy_round(acc, 0x9a677e29u); break;
    case 8: acc = heavy_round(acc, 0xa1f5b174u); break;
    case 9: acc = heavy_round(acc, 0xaef12e43u); break;
    case 10: acc = heavy_round(acc, 0xbba7fec6u); break;
    case 11: acc = heavy_round(acc, 0x94cfc76du); break;
    case 12: acc = heavy_round(acc, 0x0e1681e8u); break;
    case 13: acc = heavy_round(acc, 0x9afdfc27u); break;
    case 14: acc = heavy_round(acc, 0xed9b4b5au); break;
    case 15: acc = heavy_round(acc, 0x8921a2f1u); break;
    case 16: acc = heavy_round(acc, 0x83993f9cu); break;
    case 17: acc = heavy_round(acc, 0x30cb564bu); break;
    case 18: acc = heavy_round(acc, 0x2877372eu); break;
    case 19: acc = heavy_round(acc, 0x2df714b5u); break;
    case 20: acc = heavy_round(acc, 0x09e81e90u); break;
    case 21: acc = heavy_round(acc, 0x3575e0afu); break;
    case 22: acc = heavy_round(acc, 0xdc081642u); break;
    case 23: acc = heavy_round(acc, 0xce2860b9u); break;
    case 24: acc = heavy_round(acc, 0x3d1692c4u); break;
    case 25: acc = heavy_round(acc, 0xaa327f53u); break;
    case 26: acc = heavy_round(acc, 0x6ed57c96u); break;
    case 27: acc = heavy_round(acc, 0x17900afdu); break;
    case 28: acc = heavy_round(acc, 0xe5d55038u); break;
    case 29: acc = heavy_round(acc, 0xbbb25637u); break;
    case 30: acc = heavy_round(acc, 0x3e363e2au); break;
    case 31: acc = heavy_round(acc, 0x140ed781u); break;
    case 32: acc = heavy_round(acc, 0x36a64aecu); break;
    case 33: acc = heavy_round(acc, 0x95c6c95bu); break;
    case 34: acc = heavy_round(acc, 0xb5a46efeu); break;
    case 35: acc = heavy_round(acc, 0xd0cfca45u); break;
    case 36: acc = heavy_round(acc, 0x6250b6e0u); break;
    case 37: acc = heavy_round(acc, 0x3f457cbfu); break;
    case 38: acc = heavy_round(acc, 0x51516312u); break;
    case 39: acc = heavy_round(acc, 0x77cc2749u); break;
    case 40: acc = heavy_round(acc, 0x7f950814u); break;
    case 41: acc = heavy_round(acc, 0xe22c5463u); break;
    case 42: acc = heavy_round(acc, 0x9ff9ae66u); break;
    case 43: acc = heavy_round(acc, 0xdf8f728du); break;
    case 44: acc = heavy_round(acc, 0xee20f288u); break;
    case 45: acc = heavy_round(acc, 0x24057447u); break;
    case 46: acc = heavy_round(acc, 0x97f924fau); break;
    case 47: acc = heavy_round(acc, 0xd53b7011u); break;
    case 48: acc = heavy_round(acc, 0xb0c36a3cu); break;
    case 49: acc = heavy_round(acc, 0x728b406bu); break;
    case 50: acc = heavy_round(acc, 0xd39edaceu); break;
    case 51: acc = heavy_round(acc, 0xa4cc23d5u); break;
    case 52: acc = heavy_round(acc, 0x70e0a330u); break;
    case 53: acc = heavy_round(acc, 0x688c5ccfu); break;
    case 54: acc = heavy_round(acc, 0x88c123e2u); break;
    case 55: acc = heavy_round(acc, 0xa39bd1d9u); break;
    case 56: acc = heavy_round(acc, 0x1f261164u); break;
    case 57: acc = heavy_round(acc, 0xaf0fad73u); break;
    case 58: acc = heavy_round(acc, 0x4f919436u); break;
    case 59: acc = heavy_round(acc, 0xc126fe1du); break;
    case 60: acc = heavy_round(acc, 0x657e68d8u); break;
    case 61: acc = heavy_round(acc, 0xfeb85657u); break;
    case 62: acc = heavy_round(acc, 0x0cb0ffcau); break;
    case 63: acc = heavy_round(acc, 0x62106ca1u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

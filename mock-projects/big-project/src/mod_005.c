#include "heavy.h"
#include "mods.h"

int mod_005(int x)
{
    static const uint32_t local[256] = {
        0xb3dd3910u, 0x15f7392fu, 0x705c94c2u, 0x5b59cd39u, 0xb2541544u, 0xded11fd3u, 0xfb56a316u, 0x71f5ff7du, 0xfcedbab8u, 0x08debeb7u, 0x0f9a8caau, 0x57edd401u, 0x2a141d6cu, 0x42b979dbu, 0x6cca657eu, 0x50744ec5u,
        0x5af67160u, 0x1e7ef53fu, 0x51bf8192u, 0x580ab3c9u, 0x873d2a94u, 0xa1f514e3u, 0x265e74e6u, 0x3c44870du, 0xc9fdfd08u, 0x66edfcc7u, 0xf8ab137au, 0xedcb8c91u, 0x23efdcbcu, 0x2fec10ebu, 0x611c714eu, 0x90a3c855u,
        0x66defdb0u, 0x1505f54fu, 0xa230e262u, 0x0eaf7e59u, 0x3e60d3e4u, 0xad0a8df3u, 0x1741fab6u, 0x3073329du, 0x89c81358u, 0xd6e4fed7u, 0x46988e4au, 0x8019a921u, 0x7b58b00cu, 0x0740abfbu, 0x2ac0b11eu, 0x7ab7e5e5u,
        0x30bbde00u, 0x3e6d395fu, 0x871db732u, 0xd3d12ce9u, 0xb8b41134u, 0x0a828b03u, 0x5bbe3486u, 0xcf1b022du, 0xba10fda8u, 0x39c4c4e7u, 0xcc6ffd1au, 0xf48129b1u, 0x2fe3975cu, 0x21484b0bu, 0x0f1424eeu, 0xa269a775u,
        0xeef21250u, 0x9bd5c16fu, 0x35330002u, 0x4238bf79u, 0xe86be284u, 0x250e0c13u, 0xe4d02256u, 0x2314f5bdu, 0x5dddbbf8u, 0xb4ce4ef7u, 0x547e5feau, 0x3eeb0e41u, 0x7a6592acu, 0x3ed3ee1bu, 0x1eb3ccbeu, 0x6db20d05u,
        0x05269aa0u, 0xfaa08d7fu, 0xc05dbcd2u, 0xcaef3609u, 0x20fd47d4u, 0xd79e1123u, 0xd6b4c426u, 0x517a0d4du, 0x4d734e48u, 0xc1829d07u, 0x7050b6bau, 0xf18056d1u, 0x1cf3a1fcu, 0x98f4952bu, 0x057ca88eu, 0xa4ca1695u,
        0x543e76f0u, 0x046e9d8fu, 0xebcaeda2u, 0x453d9099u, 0x671d4124u, 0x7d639a33u, 0x58e919f6u, 0x29a348ddu, 0x8656b498u, 0x3da2af17u, 0x48b4018au, 0xccaa0361u, 0xb2e2c54cu, 0xf0fb403bu, 0xda8bb85eu, 0x022ac425u,
        0x8a5ea740u, 0x4f20f19fu, 0xf9e79272u, 0x7eaccf29u, 0xc0c0ce74u, 0x01cfa743u, 0x662a23c6u, 0xb529a86du, 0x7b4ceee8u, 0x7b2f8527u, 0x6db5405au, 0x4f1113f1u, 0x00c7fc9cu, 0xa078ef4bu, 0xf03dfc2eu, 0xc28d15b5u,
        0x72ec2b90u, 0x6cd889afu, 0x7c60ab42u, 0xcb05f1b9u, 0x851cefc4u, 0xf0933853u, 0x9c74e196u, 0xc7e62bfdu, 0x645afd38u, 0x506a1f37u, 0xa6a1732au, 0x459e8881u, 0x447847ecu, 0xa93ea25bu, 0xa43073feu, 0x34ea0b45u,
        0x468c03e0u, 0xfbf665bfu, 0x24233812u, 0x9451f849u, 0xaca6a514u, 0x859f4d63u, 0x0d065366u, 0x8ff1d38du, 0x8ec5df88u, 0x27d37d47u, 0xc20599fau, 0x5b7b6111u, 0x8508a73cu, 0xc55d596bu, 0x2f401fceu, 0x4a7aa4d5u,
        0xfb233030u, 0xb71b85cfu, 0x915c38e2u, 0xead9e2d9u, 0x2112ee64u, 0xbd24e673u, 0x0c5b7936u, 0x25a59f1du, 0xad1295d8u, 0x102c9f57u, 0x65aeb4cau, 0xaa109da1u, 0xe2ce1a8cu, 0x7726147bu, 0x7589ff9eu, 0x26b7e265u,
        0x93d6b080u, 0x8528e9dfu, 0x2378adb2u, 0x1526b169u, 0x0d56cbb4u, 0x63950383u, 0x02315306u, 0x1b9a8eadu, 0x27062028u, 0xcc768567u, 0xdea9c39au, 0x49073e31u, 0xe75da1dcu, 0x1929d38bu, 0xd66b136eu, 0xaf5ac3f5u,
        0x710b84d0u, 0x893f91efu, 0xc9259682u, 0x200163f9u, 0x2da73d04u, 0x25a0a493u, 0x3984e0d6u, 0x0ea9a23du, 0x69a57e78u, 0xe3f22f77u, 0xf143c66au, 0xde4842c1u, 0xd58c3d2cu, 0xee39969bu, 0xfc805b3eu, 0x1c5c4985u,
        0xa066ad20u, 0x32c07dffu, 0xd04ff352u, 0x6e72fa89u, 0x1f794254u, 0xa038c9a3u, 0xb09322a6u, 0x35ebd9cdu, 0x3735b0c8u, 0xb2209d87u, 0xa909bd3au, 0x2dfcab51u, 0xf96eec7cu, 0x31665dabu, 0xada6d70eu, 0x87f57315u,
        0x2ccd2970u, 0x4d4cae0fu, 0xb624c422u, 0x49c47519u, 0xb181dba4u, 0x708e72b3u, 0xe8d91876u, 0xf2ba355du, 0xf73bb718u, 0x76c2cf97u, 0x28c8a80au, 0xaa8d77e1u, 0xf85aafccu, 0x260128bbu, 0x9afb86deu, 0x7e9f40a5u,
        0x6e63f9c0u, 0x10c5221fu, 0xf71108f2u, 0x717ed3a9u, 0x33b608f4u, 0x44129fc3u, 0xb713c246u, 0x60adb4edu, 0x067c9168u, 0x65d9c5a7u, 0x7a8d86dau, 0x04a3a871u, 0x20e4871cu, 0x279af7cbu, 0x30db6aaeu, 0x8f12b235u,
    };
    uint32_t acc = 0x68b07935u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 5) & 255]);
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
    case 0: acc = heavy_round(acc, 0x90741832u); break;
    case 1: acc = heavy_round(acc, 0x30da19e9u); break;
    case 2: acc = heavy_round(acc, 0x25961a34u); break;
    case 3: acc = heavy_round(acc, 0x82930003u); break;
    case 4: acc = heavy_round(acc, 0x70322586u); break;
    case 5: acc = heavy_round(acc, 0x94043f2du); break;
    case 6: acc = heavy_round(acc, 0x9d3716a8u); break;
    case 7: acc = heavy_round(acc, 0x61aa09e7u); break;
    case 8: acc = heavy_round(acc, 0xe9927e1au); break;
    case 9: acc = heavy_round(acc, 0xc7a7b6b1u); break;
    case 10: acc = heavy_round(acc, 0x0a06c05cu); break;
    case 11: acc = heavy_round(acc, 0x3867600bu); break;
    case 12: acc = heavy_round(acc, 0xab0635eeu); break;
    case 13: acc = heavy_round(acc, 0xa97a8475u); break;
    case 14: acc = heavy_round(acc, 0x97db4b50u); break;
    case 15: acc = heavy_round(acc, 0xad63a66fu); break;
    case 16: acc = heavy_round(acc, 0xffa5a102u); break;
    case 17: acc = heavy_round(acc, 0xef30ec79u); break;
    case 18: acc = heavy_round(acc, 0xf7f42b84u); break;
    case 19: acc = heavy_round(acc, 0x5d0fc113u); break;
    case 20: acc = heavy_round(acc, 0x18045356u); break;
    case 21: acc = heavy_round(acc, 0x514172bdu); break;
    case 22: acc = heavy_round(acc, 0xa4ee14f8u); break;
    case 23: acc = heavy_round(acc, 0x8518d3f7u); break;
    case 24: acc = heavy_round(acc, 0x964520eau); break;
    case 25: acc = heavy_round(acc, 0x9fe8db41u); break;
    case 26: acc = heavy_round(acc, 0x8bf6fbacu); break;
    case 27: acc = heavy_round(acc, 0x540c431bu); break;
    case 28: acc = heavy_round(acc, 0xf16e1dbeu); break;
    case 29: acc = heavy_round(acc, 0x466e2a05u); break;
    case 30: acc = heavy_round(acc, 0xcf4213a0u); break;
    case 31: acc = heavy_round(acc, 0x013bb27fu); break;
    case 32: acc = heavy_round(acc, 0x83fc9dd2u); break;
    case 33: acc = heavy_round(acc, 0x00a6a309u); break;
    case 34: acc = heavy_round(acc, 0x95bbd0d4u); break;
    case 35: acc = heavy_round(acc, 0x10e10623u); break;
    case 36: acc = heavy_round(acc, 0x59b93526u); break;
    case 37: acc = heavy_round(acc, 0xc6b9ca4du); break;
    case 38: acc = heavy_round(acc, 0x1bfde748u); break;
    case 39: acc = heavy_round(acc, 0x68826207u); break;
    case 40: acc = heavy_round(acc, 0x10cbb7bau); break;
    case 41: acc = heavy_round(acc, 0x332563d1u); break;
    case 42: acc = heavy_round(acc, 0x7a834afcu); break;
    case 43: acc = heavy_round(acc, 0x17962a2bu); break;
    case 44: acc = heavy_round(acc, 0x620f398eu); break;
    case 45: acc = heavy_round(acc, 0xe7017395u); break;
    case 46: acc = heavy_round(acc, 0xd51c2ff0u); break;
    case 47: acc = heavy_round(acc, 0xf867028fu); break;
    case 48: acc = heavy_round(acc, 0x24a60ea2u); break;
    case 49: acc = heavy_round(acc, 0xb0843d99u); break;
    case 50: acc = heavy_round(acc, 0xe7a20a24u); break;
    case 51: acc = heavy_round(acc, 0x8d37cf33u); break;
    case 52: acc = heavy_round(acc, 0xe0cdcaf6u); break;
    case 53: acc = heavy_round(acc, 0x77c645ddu); break;
    case 54: acc = heavy_round(acc, 0x23eb8d98u); break;
    case 55: acc = heavy_round(acc, 0xbda7b417u); break;
    case 56: acc = heavy_round(acc, 0x45f3428au); break;
    case 57: acc = heavy_round(acc, 0x35c65061u); break;
    case 58: acc = heavy_round(acc, 0xd500ae4cu); break;
    case 59: acc = heavy_round(acc, 0x5856153bu); break;
    case 60: acc = heavy_round(acc, 0x1806895eu); break;
    case 61: acc = heavy_round(acc, 0x79ad6125u); break;
    case 62: acc = heavy_round(acc, 0xfb8ea040u); break;
    case 63: acc = heavy_round(acc, 0x7cc6969fu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

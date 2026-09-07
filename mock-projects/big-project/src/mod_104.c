#include "heavy.h"
#include "mods.h"

int mod_104(int x)
{
    static const uint32_t local[256] = {
        0x44b6969bu, 0x2ed95b3eu, 0x20e14985u, 0xd927ad20u, 0xfa8d7dffu, 0xa3b8f352u, 0x00c7fa89u, 0x6bca4254u, 0xc655c9a3u, 0x2e0c22a6u, 0xcb10d9cdu, 0x8816b0c8u, 0x738d9d87u, 0xe992bd3au, 0x0af1ab51u, 0xcfdfec7cu,
        0x1b235dabu, 0xda3fd70eu, 0xc1ba7315u, 0x99ce2970u, 0x3c59ae0fu, 0x07cdc422u, 0xc5597519u, 0x5612dba4u, 0x91eb72b3u, 0xa8921876u, 0x651f355du, 0x045cb718u, 0x476fcf97u, 0xaf91a80au, 0x98c277e1u, 0x2f0bafccu,
        0x72fe28bbu, 0x51d486deu, 0x3da440a5u, 0x1fa4f9c0u, 0xf712221fu, 0x56fa08f2u, 0x2653d3a9u, 0x408708f4u, 0x30af9fc3u, 0x490cc246u, 0x0052b4edu, 0xdfdd9168u, 0x15c6c5a7u, 0xd79686dau, 0x5418a871u, 0xc7d5871cu,
        0xa7d7f7cbu, 0x01f46aaeu, 0x2357b235u, 0x60111e10u, 0xded7da2fu, 0xdceac1c2u, 0xe9801639u, 0x4c5bca44u, 0x705350d3u, 0x07792016u, 0x0284587du, 0xbc9e3fb8u, 0x16d37fb7u, 0x22ee59aau, 0xbbdd3d01u, 0xe212726cu,
        0x3d81cadbu, 0xe23c827eu, 0x93cdc7c5u, 0x3db79660u, 0x340bd63fu, 0x848cee92u, 0x6ae73cc9u, 0xbc061f94u, 0x4ec785e3u, 0xcf1431e6u, 0xabcd200du, 0xd1e3c208u, 0x9716fdc7u, 0xda26207au, 0xad393591u, 0x0ed771bcu,
        0xf00ca1ebu, 0x4589ce4eu, 0xd23f8155u, 0xd87d62b0u, 0xd34f164fu, 0xa80d8f62u, 0x2cd24759u, 0x433b08e4u, 0x0a3d3ef3u, 0x4e5af7b6u, 0xa6860b9du, 0x3c331858u, 0x07523fd7u, 0x9d0adb4au, 0xf3959221u, 0x7879850cu,
        0xc3c97cfbu, 0xa9f94e1eu, 0xd425dee5u, 0xdd878300u, 0x45829a5fu, 0xe0d9a432u, 0x67ca35e9u, 0x56ef8634u, 0x31257c03u, 0xc70a7186u, 0x97481b2du, 0x4d5142a8u, 0x0c8645e7u, 0x32a98a1au, 0xd89b52b1u, 0x328dac5cu,
        0x15495c0bu, 0x88e801eeu, 0xd139e075u, 0xd73af750u, 0xcfc7626fu, 0xd79e2d02u, 0x9a980879u, 0x7d589784u, 0xb2313d13u, 0xde1f9f56u, 0xacec4ebdu, 0xdc4340f8u, 0x8ff40ff7u, 0x594f2ceau, 0xb4337741u, 0x89e8e7acu,
        0xa95d3f1bu, 0x26f2e9beu, 0xd3748605u, 0x7d3cbfa0u, 0x837e6e7fu, 0x144829d2u, 0x1a44bf09u, 0x9deb3cd4u, 0xec518223u, 0x6bd78126u, 0x308ba64du, 0x954e1348u, 0xcf1c9e07u, 0x9688c3bau, 0x7c86ffd1u, 0x54a036fcu,
        0xbd16262bu, 0x63f7058eu, 0x470ecf95u, 0x0471dbf0u, 0x4e48be8fu, 0xce049aa2u, 0xa2195999u, 0x515c7624u, 0xbeb74b33u, 0x4baf16f6u, 0x157f21ddu, 0x49f6b998u, 0x6bc0f017u, 0x07234e8au, 0x55feec61u, 0x42089a4cu,
        0x15c5113bu, 0x8b11555eu, 0x8a81bd25u, 0x6eff4c40u, 0x0a07529fu, 0xbb407f72u, 0xe39ed829u, 0x31a14374u, 0x98d39843u, 0x2c6360c6u, 0x895fc16du, 0x410233e8u, 0x7be20627u, 0x2f2bcd5au, 0x23443cf1u, 0x2ab7119cu,
        0x10fb004bu, 0x229ed92eu, 0x7e864eb5u, 0xdc4a1090u, 0x8cdb2aafu, 0xe1a8d842u, 0x169e3ab9u, 0x29eea4c4u, 0x8a576953u, 0x5ff15e96u, 0x840684fdu, 0x86758238u, 0x99c0e037u, 0xc9ef402au, 0x153ff181u, 0x60809cecu,
        0xb488f35bu, 0xbc3c90feu, 0x16158445u, 0xd8f728e0u, 0xb92546bfu, 0x662aa512u, 0x89208149u, 0xc6b99a14u, 0x5333be63u, 0xab961066u, 0x578c6c8du, 0x3b95a488u, 0xf3de7e47u, 0x99faa6fau, 0x3b1b0a11u, 0xfe7a3c3cu,
        0xbe7fea6bu, 0xc4c77cceu, 0xe6685dd5u, 0xaeeb9530u, 0x8d86a6cfu, 0x5cf2e5e2u, 0x2f6eabd9u, 0x85b72364u, 0x73999773u, 0x17ce7636u, 0x404a781du, 0xe6e79ad8u, 0x5cfbe057u, 0x391b01cau, 0x123e86a1u, 0x38f8ef8cu,
        0xb530e57bu, 0x545c9c9eu, 0xb6f7db65u, 0xb54c5580u, 0x34e04adfu, 0x996e9ab2u, 0x3411ba69u, 0x25dc40b4u, 0x3bf9f483u, 0xc0579006u, 0xf4d9a7adu, 0xc4306528u, 0x5c1a0667u, 0xe85d509au, 0x16536731u, 0xad91b6dcu,
        0xf72ce48bu, 0xfe58f06eu, 0x117cfcf5u, 0xa07e69d0u, 0x165332efu, 0x7e4ac382u, 0x87d2acf9u, 0xf75df204u, 0xdd05d593u, 0xa42e5dd6u, 0x3612fb3du, 0x14750378u, 0x3c79f077u, 0x600e936au, 0x5142abc1u, 0xb319922cu,
    };
    uint32_t acc = 0x5bbd3d2cu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 104) & 255]);
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
    case 0: acc = heavy_round(acc, 0x57ed40b3u); break;
    case 1: acc = heavy_round(acc, 0x8cbd8e76u); break;
    case 2: acc = heavy_round(acc, 0xd258335du); break;
    case 3: acc = heavy_round(acc, 0x13759d18u); break;
    case 4: acc = heavy_round(acc, 0x6d577d97u); break;
    case 5: acc = heavy_round(acc, 0xe9a97e0au); break;
    case 6: acc = heavy_round(acc, 0xf13c55e1u); break;
    case 7: acc = heavy_round(acc, 0xe9aff5ccu); break;
    case 8: acc = heavy_round(acc, 0x3739b6bbu); break;
    case 9: acc = heavy_round(acc, 0xe16ebcdeu); break;
    case 10: acc = heavy_round(acc, 0x3ffcfea5u); break;
    case 11: acc = heavy_round(acc, 0x27da9fc0u); break;
    case 12: acc = heavy_round(acc, 0xf7ef901fu); break;
    case 13: acc = heavy_round(acc, 0x5a0c9ef2u); break;
    case 14: acc = heavy_round(acc, 0x5c0971a9u); break;
    case 15: acc = heavy_round(acc, 0xc5b40ef4u); break;
    case 16: acc = heavy_round(acc, 0x7a5cedc3u); break;
    case 17: acc = heavy_round(acc, 0xb1edb846u); break;
    case 18: acc = heavy_round(acc, 0xfbc332edu); break;
    case 19: acc = heavy_round(acc, 0xc4c7f768u); break;
    case 20: acc = heavy_round(acc, 0x1051f3a7u); break;
    case 21: acc = heavy_round(acc, 0x82fbdcdau); break;
    case 22: acc = heavy_round(acc, 0xce820671u); break;
    case 23: acc = heavy_round(acc, 0x28a34d1cu); break;
    case 24: acc = heavy_round(acc, 0xe52f05cbu); break;
    case 25: acc = heavy_round(acc, 0x2cf420aeu); break;
    case 26: acc = heavy_round(acc, 0xfad7f035u); break;
    case 27: acc = heavy_round(acc, 0x78484410u); break;
    case 28: acc = heavy_round(acc, 0xc8c8c82fu); break;
    case 29: acc = heavy_round(acc, 0xfafad7c2u); break;
    case 30: acc = heavy_round(acc, 0xff153439u); break;
    case 31: acc = heavy_round(acc, 0xbce25044u); break;
    case 32: acc = heavy_round(acc, 0xd68c1ed3u); break;
    case 33: acc = heavy_round(acc, 0xf86f9616u); break;
    case 34: acc = heavy_round(acc, 0xf80c567du); break;
    case 35: acc = heavy_round(acc, 0x31ba25b8u); break;
    case 36: acc = heavy_round(acc, 0x9ce22db7u); break;
    case 37: acc = heavy_round(acc, 0xc9012faau); break;
    case 38: acc = heavy_round(acc, 0x92161b01u); break;
    case 39: acc = heavy_round(acc, 0x1969b86cu); break;
    case 40: acc = heavy_round(acc, 0xa8d458dbu); break;
    case 41: acc = heavy_round(acc, 0x1801b87eu); break;
    case 42: acc = heavy_round(acc, 0x285585c5u); break;
    case 43: acc = heavy_round(acc, 0x6c503c60u); break;
    case 44: acc = heavy_round(acc, 0x99f0443fu); break;
    case 45: acc = heavy_round(acc, 0x72fa8492u); break;
    case 46: acc = heavy_round(acc, 0xd63bdac9u); break;
    case 47: acc = heavy_round(acc, 0x54462594u); break;
    case 48: acc = heavy_round(acc, 0x226bd3e3u); break;
    case 49: acc = heavy_round(acc, 0xa38027e6u); break;
    case 50: acc = heavy_round(acc, 0x7f4c9e0du); break;
    case 51: acc = heavy_round(acc, 0xa9912808u); break;
    case 52: acc = heavy_round(acc, 0x97892bc7u); break;
    case 53: acc = heavy_round(acc, 0xdc46767au); break;
    case 54: acc = heavy_round(acc, 0x11219391u); break;
    case 55: acc = heavy_round(acc, 0xe51837bcu); break;
    case 56: acc = heavy_round(acc, 0xf63aafebu); break;
    case 57: acc = heavy_round(acc, 0x4d74844eu); break;
    case 58: acc = heavy_round(acc, 0x83aebf55u); break;
    case 59: acc = heavy_round(acc, 0x3bd788b0u); break;
    case 60: acc = heavy_round(acc, 0x8007044fu); break;
    case 61: acc = heavy_round(acc, 0xf438a562u); break;
    case 62: acc = heavy_round(acc, 0x5bc66559u); break;
    case 63: acc = heavy_round(acc, 0xd7948ee4u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

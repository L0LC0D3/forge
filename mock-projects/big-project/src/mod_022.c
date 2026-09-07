#include "heavy.h"
#include "mods.h"

int mod_022(int x)
{
    static const uint32_t local[256] = {
        0x85a0f4f5u, 0x132201d0u, 0xef31eaefu, 0x36ea1b82u, 0xfcfa24f9u, 0x5c2f0a04u, 0xa3340d93u, 0x96d735d6u, 0xe6b5f33du, 0x338b9b78u, 0xa92fa877u, 0x4498eb6au, 0xa35923c1u, 0x8a0daa2cu, 0x4f3a1f9bu, 0x811d503eu,
        0x4ef2ba85u, 0x2c106a20u, 0x60ad16ffu, 0x5b49b852u, 0x3e9ffb89u, 0xb9284f54u, 0x724a72a3u, 0xe5ceb7a6u, 0x34506acdu, 0x5d170dc8u, 0x7ea05687u, 0x003c223au, 0x8cc9cc51u, 0xbdff997cu, 0xb6ad26abu, 0x47550c0eu,
        0xebec2415u, 0xd3da2670u, 0xaac3870fu, 0x00a3c922u, 0x2b35b619u, 0x9d2828a4u, 0x2fae5bb3u, 0x154ded76u, 0x8e87065du, 0xe4e85418u, 0xa414c897u, 0x70284d0au, 0x8326d8e1u, 0x8dca9cccu, 0x7a1e31bbu, 0x530afbdeu,
        0x6d0631a5u, 0x16a436c0u, 0x29563b1fu, 0x77654df2u, 0x464454a9u, 0x4c2395f4u, 0xecd0c8c3u, 0x0e11d746u, 0x14f2c5edu, 0x5bc46e68u, 0xf18dfea7u, 0xf26a6bdau, 0x7b194971u, 0xbc03b41cu, 0xd91e40cbu, 0xa49c1faeu,
        0xe4f9e335u, 0x9dd39b10u, 0xb486332fu, 0xdf3b46c2u, 0x1994d739u, 0xdb4f9744u, 0xdb62b9d3u, 0xdc177516u, 0x316ca97du, 0x97b05cb8u, 0x434cf8b7u, 0x9c4f7eaau, 0x378a1e01u, 0x047fdf6cu, 0x3b7e53dbu, 0xc7a5777eu,
        0xf8c038c5u, 0x000d5360u, 0xb0b46f3fu, 0xf712b392u, 0xc5303dc9u, 0x81212c94u, 0x5d552ee3u, 0x7e9bc6e6u, 0x280db10du, 0x03f11f08u, 0x89d2b6c7u, 0x0a64857au, 0xd9a25691u, 0x6c541ebcu, 0x414f6aebu, 0xa304034eu,
        0x6f923255u, 0x11365fb0u, 0x1e81ef4fu, 0xed189462u, 0x8f5f8859u, 0xe54d55e4u, 0x14d927f3u, 0xb81bccb6u, 0xa72edc9du, 0xf10bb558u, 0xd9e038d7u, 0x3076804au, 0x70caf321u, 0x91d5720cu, 0xd2e285fbu, 0x48d4c31eu,
        0xc2e8cfe5u, 0x3273c000u, 0xaacfb35fu, 0x2eb9e932u, 0x74abb6e9u, 0x70c91334u, 0xf45fa503u, 0xde548686u, 0x57692c2du, 0xe4c51fa8u, 0x7c767ee7u, 0x29926f1au, 0x8aacf3b1u, 0xfc98d95cu, 0x30c8a50bu, 0xc674b6eeu,
        0xae7d1175u, 0xa22a7450u, 0xbebebb6fu, 0x38a3b202u, 0xb7ddc979u, 0x9dc96484u, 0x4e99a613u, 0xaa42f456u, 0x6b959fbdu, 0xea225df8u, 0xfed688f7u, 0x080551eau, 0xc3315841u, 0x6d7354acu, 0x03d2c81bu, 0xf480debeu,
        0xc047f705u, 0xcbff7ca0u, 0x8fb0077fu, 0x66c2eed2u, 0x71fec009u, 0x47c349d4u, 0xe6782b23u, 0x08241626u, 0x30cd374du, 0xe1687048u, 0x42815707u, 0xa55c28bau, 0x548120d1u, 0x2e79e3fcu, 0x6d11ef2bu, 0x46d63a8eu,
        0xe8828095u, 0x98d7d8f0u, 0x2f44978fu, 0xc4449fa2u, 0x22579a99u, 0xfb6bc324u, 0xff2c3433u, 0xe774ebf6u, 0x9e68f2ddu, 0xd01c5698u, 0x8d37e917u, 0x7263f38au, 0xa7054d61u, 0x6301874cu, 0x15d71a3bu, 0x9c91ca5eu,
        0x09a5ae25u, 0xbed88940u, 0x9b5d6b9fu, 0xdb95c472u, 0x3e715929u, 0x46b7d074u, 0x6c26c143u, 0x0af275c6u, 0xe601d26du, 0x310310e8u, 0x98fb3f27u, 0x4729b25au, 0xe166ddf1u, 0x579f3e9cu, 0x3fb3494bu, 0x10108e2eu,
        0x886a7fb5u, 0x11668d90u, 0xce1b83afu, 0x86635d42u, 0xc214fbb9u, 0x08dc71c4u, 0xa118d253u, 0xd899b396u, 0x0370d5fdu, 0x44219f38u, 0xa40c5937u, 0x32fa652au, 0x788ed281u, 0xd22809ecu, 0xd4777c5bu, 0xc6ef85feu,
        0xdbc9f545u, 0xd126e5e0u, 0xcddfdfbfu, 0xbd9a6a12u, 0xbf4b8249u, 0xc24ea714u, 0xc1f36763u, 0x29a7a566u, 0x4ccefd8du, 0x5ebd0188u, 0x80ec3747u, 0x4c630bfau, 0xbfa62b11u, 0x61b0e93cu, 0x7634b36bu, 0xc20bb1ceu,
        0x1cfd0ed5u, 0xfbfe9230u, 0xbd4b7fcfu, 0x6967eae2u, 0xee5decd9u, 0xe4c37064u, 0xb2e78073u, 0x1a994b36u, 0x0275491du, 0x3b5a37d8u, 0xa65bd957u, 0x8130a6cau, 0x7815e7a1u, 0xae8edc8cu, 0x8f3bee7bu, 0xad82119eu,
        0x977ccc65u, 0x9d129280u, 0xeb3f63dfu, 0x3138dfb2u, 0x3dd53b69u, 0x232fcdb4u, 0x28661d83u, 0xdb2ba506u, 0xdefcb8adu, 0x49be4228u, 0x3f5c3f67u, 0x6670359au, 0x61870831u, 0xca56e3dcu, 0x621e2d8bu, 0xb0afa56eu,
    };
    uint32_t acc = 0xbb46c86eu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 22) & 255]);
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
    case 0: acc = heavy_round(acc, 0x2f586f45u); break;
    case 1: acc = heavy_round(acc, 0xbdff17e0u); break;
    case 2: acc = heavy_round(acc, 0xdac669bfu); break;
    case 3: acc = heavy_round(acc, 0xba4b6c12u); break;
    case 4: acc = heavy_round(acc, 0x4d149c49u); break;
    case 5: acc = heavy_round(acc, 0x9fe0f914u); break;
    case 6: acc = heavy_round(acc, 0x510d9163u); break;
    case 7: acc = heavy_round(acc, 0xf4b7c766u); break;
    case 8: acc = heavy_round(acc, 0x5c2cb78du); break;
    case 9: acc = heavy_round(acc, 0xa89b7388u); break;
    case 10: acc = heavy_round(acc, 0x04a40147u); break;
    case 11: acc = heavy_round(acc, 0xf1344dfau); break;
    case 12: acc = heavy_round(acc, 0xf0928511u); break;
    case 13: acc = heavy_round(acc, 0xd38d7b3cu); break;
    case 14: acc = heavy_round(acc, 0x62941d6bu); break;
    case 15: acc = heavy_round(acc, 0x212013ceu); break;
    case 16: acc = heavy_round(acc, 0xa21208d5u); break;
    case 17: acc = heavy_round(acc, 0x83ab4430u); break;
    case 18: acc = heavy_round(acc, 0xd1fc89cfu); break;
    case 19: acc = heavy_round(acc, 0xfa616ce2u); break;
    case 20: acc = heavy_round(acc, 0x66d586d9u); break;
    case 21: acc = heavy_round(acc, 0xb4324264u); break;
    case 22: acc = heavy_round(acc, 0xe5342a73u); break;
    case 23: acc = heavy_round(acc, 0xce39ed36u); break;
    case 24: acc = heavy_round(acc, 0xf429831du); break;
    case 25: acc = heavy_round(acc, 0xfa9d29d8u); break;
    case 26: acc = heavy_round(acc, 0xab2e2357u); break;
    case 27: acc = heavy_round(acc, 0xc35a68cau); break;
    case 28: acc = heavy_round(acc, 0x6980c1a1u); break;
    case 29: acc = heavy_round(acc, 0xcdd7ee8cu); break;
    case 30: acc = heavy_round(acc, 0x051dd87bu); break;
    case 31: acc = heavy_round(acc, 0x8736f39eu); break;
    case 32: acc = heavy_round(acc, 0xc9b84665u); break;
    case 33: acc = heavy_round(acc, 0xc6b3c480u); break;
    case 34: acc = heavy_round(acc, 0x245aeddfu); break;
    case 35: acc = heavy_round(acc, 0x8a9ae1b2u); break;
    case 36: acc = heavy_round(acc, 0x069b5569u); break;
    case 37: acc = heavy_round(acc, 0xcd9b1fb4u); break;
    case 38: acc = heavy_round(acc, 0x94854783u); break;
    case 39: acc = heavy_round(acc, 0xdd7cc706u); break;
    case 40: acc = heavy_round(acc, 0xa2a772adu); break;
    case 41: acc = heavy_round(acc, 0x6985b428u); break;
    case 42: acc = heavy_round(acc, 0x75e90967u); break;
    case 43: acc = heavy_round(acc, 0xfe12779au); break;
    case 44: acc = heavy_round(acc, 0x2d106231u); break;
    case 45: acc = heavy_round(acc, 0xa42c75dcu); break;
    case 46: acc = heavy_round(acc, 0xcc22978bu); break;
    case 47: acc = heavy_round(acc, 0x2f25076eu); break;
    case 48: acc = heavy_round(acc, 0x1c0427f5u); break;
    case 49: acc = heavy_round(acc, 0x377d98d0u); break;
    case 50: acc = heavy_round(acc, 0x050295efu); break;
    case 51: acc = heavy_round(acc, 0x29a4ca82u); break;
    case 52: acc = heavy_round(acc, 0xc92f07f9u); break;
    case 53: acc = heavy_round(acc, 0xf8509104u); break;
    case 54: acc = heavy_round(acc, 0x1bb1e893u); break;
    case 55: acc = heavy_round(acc, 0x3d7d54d6u); break;
    case 56: acc = heavy_round(acc, 0x947f863du); break;
    case 57: acc = heavy_round(acc, 0xb25a1278u); break;
    case 58: acc = heavy_round(acc, 0xfc15b377u); break;
    case 59: acc = heavy_round(acc, 0x35a97a6au); break;
    case 60: acc = heavy_round(acc, 0x712a66c1u); break;
    case 61: acc = heavy_round(acc, 0xe960112cu); break;
    case 62: acc = heavy_round(acc, 0x0a735a9bu); break;
    case 63: acc = heavy_round(acc, 0x93874f3eu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

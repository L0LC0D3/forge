#include "heavy.h"
#include "mods.h"

int mod_045(int x)
{
    static const uint32_t local[256] = {
        0x56a05418u, 0xba6cc897u, 0xa2a04d0au, 0xe33ed8e1u, 0xff029cccu, 0x89f631bbu, 0x3102fbdeu, 0x829e31a5u, 0xbf5c36c0u, 0x0aae3b1fu, 0xf8dd4df2u, 0xa95c54a9u, 0xe45b95f4u, 0xf7a8c8c3u, 0xab09d746u, 0xdd8ac5edu,
        0x1b7c6e68u, 0xfde5fea7u, 0xa2e26bdau, 0x41314971u, 0x5b3bb41cu, 0x3ef640cbu, 0xe0941faeu, 0xc091e335u, 0x548b9b10u, 0x4bde332fu, 0x9eb346c2u, 0xa2acd739u, 0x61879744u, 0xfc3ab9d3u, 0x970f7516u, 0x8004a97du,
        0x25685cb8u, 0xc5a4f8b7u, 0x4ac77eaau, 0xe3a21e01u, 0x51b7df6cu, 0x775653dbu, 0xe19d777eu, 0x1a5838c5u, 0x44c55360u, 0x7e0c6f3fu, 0x748ab392u, 0xf4483dc9u, 0x75592c94u, 0x142d2ee3u, 0xd793c6e6u, 0x7ca5b10du,
        0xdfa91f08u, 0x022ab6c7u, 0x36dc857au, 0xebba5691u, 0xe78c1ebcu, 0xd3276aebu, 0x1afc034eu, 0x572a3255u, 0x63ee5fb0u, 0xa1d9ef4fu, 0xa8909462u, 0xe4778859u, 0xc78555e4u, 0xe1b127f3u, 0x2f13ccb6u, 0x81c6dc9du,
        0x9ac3b558u, 0xc83838d7u, 0x5aee804au, 0x68e2f321u, 0xbb0d720cu, 0x3aba85fbu, 0x9eccc31eu, 0xf080cfe5u, 0x132bc000u, 0x6427b35fu, 0xa831e932u, 0x6fc3b6e9u, 0xc1011334u, 0x5737a503u, 0xf34c8686u, 0x38012c2du,
        0xdc7d1fa8u, 0x60ce7ee7u, 0xd20a6f1au, 0xe8c4f3b1u, 0x53d0d95cu, 0xeea0a50bu, 0x7a6cb6eeu, 0xa2151175u, 0x90e27450u, 0x2e16bb6fu, 0xf01bb202u, 0xd8f5c979u, 0xdc016484u, 0xc771a613u, 0xdd3af456u, 0xd22d9fbdu,
        0xafda5df8u, 0x592e88f7u, 0xae7d51eau, 0x07495841u, 0x72ab54acu, 0x97aac81bu, 0x8678debeu, 0xf9dff705u, 0x48b77ca0u, 0x3508077fu, 0xdc3aeed2u, 0x3916c009u, 0xf3fb49d4u, 0xf5502b23u, 0xd91c1626u, 0x9d65374du,
        0xf5207048u, 0x92d95707u, 0xc9d428bau, 0xfe9920d1u, 0x61b1e3fcu, 0x56e9ef2bu, 0x36ce3a8eu, 0xe81a8095u, 0x238fd8f0u, 0x8a9c978fu, 0x77bc9fa2u, 0x0f6f9a99u, 0x95a3c324u, 0x24043433u, 0xd66cebf6u, 0x9100f2ddu,
        0xb1d45698u, 0x538fe917u, 0x94dbf38au, 0x371d4d61u, 0x4439874cu, 0xd5af1a3bu, 0x6a89ca5eu, 0x4f3dae25u, 0xd7908940u, 0x2cb56b9fu, 0x4d0dc472u, 0xd1895929u, 0x4eefd074u, 0x26fec143u, 0x97ea75c6u, 0xde99d26du,
        0x60bb10e8u, 0x55533f27u, 0xe7a1b25au, 0xd77eddf1u, 0x66d73e9cu, 0x558b494bu, 0x3c088e2eu, 0x94027fb5u, 0x381e8d90u, 0x157383afu, 0x35db5d42u, 0x7b2cfbb9u, 0xff1471c4u, 0x71f0d253u, 0x8391b396u, 0x8208d5fdu,
        0x41d99f38u, 0xd6645937u, 0xd172652au, 0x54a6d281u, 0x8f6009ecu, 0xc04f7c5bu, 0xd0e785feu, 0x2d61f545u, 0x85dee5e0u, 0x4b37dfbfu, 0x2b126a12u, 0x1e638249u, 0x2686a714u, 0x28cb6763u, 0x729fa566u, 0xd166fd8du,
        0xaa750188u, 0xa9443747u, 0x68db0bfau, 0x01be2b11u, 0x4ce8e93cu, 0xb80cb36bu, 0x2a03b1ceu, 0x34950ed5u, 0xbeb69230u, 0xf0a37fcfu, 0x14dfeae2u, 0x7375ecd9u, 0x36fb7064u, 0x2fbf8073u, 0x81914b36u, 0x0d0d491du,
        0x551237d8u, 0x44b3d957u, 0x9ba8a6cau, 0xa02de7a1u, 0x47c6dc8cu, 0xa713ee7bu, 0xf37a119eu, 0xf514cc65u, 0xedca9280u, 0x549763dfu, 0x9ab0dfb2u, 0x68ed3b69u, 0xe367cdb4u, 0x3b3e1d83u, 0xe023a506u, 0xef94b8adu,
        0xb1764228u, 0xd3b43f67u, 0xfee8359au, 0xef9f0831u, 0x918ee3dcu, 0xcff62d8bu, 0x54a7a56eu, 0x7c9a2df5u, 0x7b7fe6d0u, 0x02348befu, 0xf3324882u, 0xb3926df9u, 0x7000bf04u, 0xdff83e93u, 0xa153b2d6u, 0x3dd64c3du,
        0x34a62078u, 0x45866977u, 0x9ee6b86au, 0x3dfa8cc1u, 0xf515ff2cu, 0x5d84709bu, 0xc0296d3eu, 0x2b1e3385u, 0x7d7b8f20u, 0xd0dbf7ffu, 0xb4512552u, 0x5e6e8489u, 0x023b4454u, 0xa2dee3a3u, 0x8b5e74a6u, 0x56eb03cdu,
        0xa8e6d2c8u, 0x5dab5787u, 0xcf312f3au, 0xf7697551u, 0x46712e7cu, 0x72cfb7abu, 0xc3dc690eu, 0x42d9dd15u, 0x06a28b70u, 0xf42ea80fu, 0xa33a7622u, 0x5aca7f19u, 0xf0cc5da4u, 0x09230cb3u, 0xe7c0ea76u, 0xc42bdf5du,
    };
    uint32_t acc = 0x511f065du ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 45) & 255]);
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
    case 0: acc = heavy_round(acc, 0x5c39b5dau); break;
    case 1: acc = heavy_round(acc, 0xac1c0b71u); break;
    case 2: acc = heavy_round(acc, 0x44738e1cu); break;
    case 3: acc = heavy_round(acc, 0xa1a852cbu); break;
    case 4: acc = heavy_round(acc, 0x98cb09aeu); break;
    case 5: acc = heavy_round(acc, 0xd697c535u); break;
    case 6: acc = heavy_round(acc, 0xdce41510u); break;
    case 7: acc = heavy_round(acc, 0x62f8652fu); break;
    case 8: acc = heavy_round(acc, 0x1cf3d0c2u); break;
    case 9: acc = heavy_round(acc, 0x3cefd939u); break;
    case 10: acc = heavy_round(acc, 0x1bbab144u); break;
    case 11: acc = heavy_round(acc, 0x572f0bd3u); break;
    case 12: acc = heavy_round(acc, 0x90239f16u); break;
    case 13: acc = heavy_round(acc, 0x48c6cb7du); break;
    case 14: acc = heavy_round(acc, 0x02d016b8u); break;
    case 15: acc = heavy_round(acc, 0x82056ab7u); break;
    case 16: acc = heavy_round(acc, 0x6b1948aau); break;
    case 17: acc = heavy_round(acc, 0xd8456001u); break;
    case 18: acc = heavy_round(acc, 0x3c4e396cu); break;
    case 19: acc = heavy_round(acc, 0x12d4e5dbu); break;
    case 20: acc = heavy_round(acc, 0x7736e17eu); break;
    case 21: acc = heavy_round(acc, 0x2d5e9ac5u); break;
    case 22: acc = heavy_round(acc, 0x59244d60u); break;
    case 23: acc = heavy_round(acc, 0xc87b213fu); break;
    case 24: acc = heavy_round(acc, 0xb915bd92u); break;
    case 25: acc = heavy_round(acc, 0xcf53bfc9u); break;
    case 26: acc = heavy_round(acc, 0xdcbac694u); break;
    case 27: acc = heavy_round(acc, 0x417e00e3u); break;
    case 28: acc = heavy_round(acc, 0xda5a70e6u); break;
    case 29: acc = heavy_round(acc, 0x6278530du); break;
    case 30: acc = heavy_round(acc, 0x49e75908u); break;
    case 31: acc = heavy_round(acc, 0xdc6fa8c7u); break;
    case 32: acc = heavy_round(acc, 0x66c8cf7au); break;
    case 33: acc = heavy_round(acc, 0xba361891u); break;
    case 34: acc = heavy_round(acc, 0xa520f8bcu); break;
    case 35: acc = heavy_round(acc, 0x0c927cebu); break;
    case 36: acc = heavy_round(acc, 0x7097ed4eu); break;
    case 37: acc = heavy_round(acc, 0xa9511455u); break;
    case 38: acc = heavy_round(acc, 0x1ff3d9b0u); break;
    case 39: acc = heavy_round(acc, 0x46bd214fu); break;
    case 40: acc = heavy_round(acc, 0x70061e62u); break;
    case 41: acc = heavy_round(acc, 0x546b8a59u); break;
    case 42: acc = heavy_round(acc, 0xe1b56fe4u); break;
    case 43: acc = heavy_round(acc, 0xea7e79f3u); break;
    case 44: acc = heavy_round(acc, 0x722cf6b6u); break;
    case 45: acc = heavy_round(acc, 0x0ac9fe9du); break;
    case 46: acc = heavy_round(acc, 0x21786f58u); break;
    case 47: acc = heavy_round(acc, 0xcb81aad7u); break;
    case 48: acc = heavy_round(acc, 0xeb154a4au); break;
    case 49: acc = heavy_round(acc, 0xe9573521u); break;
    case 50: acc = heavy_round(acc, 0x0540cc0cu); break;
    case 51: acc = heavy_round(acc, 0x3f3217fbu); break;
    case 52: acc = heavy_round(acc, 0xbf0b2d1eu); break;
    case 53: acc = heavy_round(acc, 0xcbe831e5u); break;
    case 54: acc = heavy_round(acc, 0xfa77ba00u); break;
    case 55: acc = heavy_round(acc, 0xd29f655fu); break;
    case 56: acc = heavy_round(acc, 0x5731f332u); break;
    case 57: acc = heavy_round(acc, 0x50c038e9u); break;
    case 58: acc = heavy_round(acc, 0x7b9fad34u); break;
    case 59: acc = heavy_round(acc, 0x0ca17703u); break;
    case 60: acc = heavy_round(acc, 0xd5583086u); break;
    case 61: acc = heavy_round(acc, 0xf254ce2du); break;
    case 62: acc = heavy_round(acc, 0x774859a8u); break;
    case 63: acc = heavy_round(acc, 0xe03c70e7u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

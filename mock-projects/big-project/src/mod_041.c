#include "heavy.h"
#include "mods.h"

int mod_041(int x)
{
    static const uint32_t local[256] = {
        0x52cfc8dcu, 0xd87fce8bu, 0x52cad26eu, 0xcd5176f5u, 0xbce49bd0u, 0x216fbcefu, 0xe7b9c582u, 0x4f41c6f9u, 0xe65e4404u, 0x22b5ff93u, 0x78dc7fd6u, 0xb676b53du, 0x7fa17578u, 0x8527ba77u, 0x095dd56au, 0xf09505c1u,
        0x6424242cu, 0x40fa519bu, 0x3dcbda3eu, 0xe8cbbc85u, 0xa4e18420u, 0x5da768ffu, 0xf2abe252u, 0x25581d89u, 0x200e0954u, 0x5e10e4a3u, 0x124e81a6u, 0x1b49accdu, 0xda0b67c8u, 0xfce4e887u, 0xfde38c3au, 0x7c862e51u,
        0x8b9c937cu, 0x1d41d8abu, 0x1dce160eu, 0x040da615u, 0x1959c070u, 0x139a590fu, 0x6d387322u, 0x847e5819u, 0xe86462a4u, 0xaad94db3u, 0x14e83776u, 0x3cd8c85du, 0x445b2e18u, 0x89c5da97u, 0x6952370au, 0xb783bae1u,
        0x4a8e16ccu, 0xdca763bbu, 0xdfee85deu, 0xb79033a5u, 0x0e7250c0u, 0x67298d1fu, 0xcfcc77f2u, 0xf83d76a9u, 0xeb564ff4u, 0x62803ac3u, 0x1166a146u, 0xc2bd07edu, 0x3755c868u, 0xcbcb90a7u, 0xd1b6d5dau, 0x9e36ab71u,
        0xcb8dae1cu, 0x06bbf2cbu, 0x2c8a29aeu, 0x9e0c6535u, 0x15903510u, 0xf876052fu, 0x6214f0c2u, 0x125e7939u, 0xa618d144u, 0xfeb6abd3u, 0xbbc6bf16u, 0x9ecf6b7du, 0x710036b8u, 0x67370ab7u, 0x745e68aau, 0xfb880001u,
        0x3270596cu, 0x4b5085dbu, 0x373e017eu, 0xe47b3ac5u, 0xad586d60u, 0xf3e0c13fu, 0x0afedd92u, 0xfaea5fc9u, 0xb720e694u, 0x296da0e3u, 0xbb4590e6u, 0x9d28f30du, 0x449f7908u, 0x148948c7u, 0x15d5ef7au, 0xf8a0b891u,
        0xec4b18bcu, 0x92761cebu, 0x8ee70d4eu, 0xda15b455u, 0x91aff9b0u, 0x220ac14fu, 0x20b73e62u, 0x002a2a59u, 0x2e238fe4u, 0xccd619f3u, 0x7a6016b6u, 0xf4229e9du, 0xeab88f58u, 0xb0834ad7u, 0xd1ea6a4au, 0xace9d521u,
        0xff72ec0cu, 0x0c7db7fbu, 0xeda24d1eu, 0x8054d1e5u, 0x0bbbda00u, 0xf7d5055fu, 0x38ab1332u, 0x26a6d8e9u, 0xdc15cd34u, 0x23611703u, 0xf6d35086u, 0xd4556e2du, 0xd11079a8u, 0x4c2610e7u, 0xeba8d91au, 0xae0c55b1u,
        0x5b7cd35cu, 0x41f8570bu, 0x08ccc0eeu, 0x1af19375u, 0x41e10e50u, 0xa6608d6fu, 0xf7875c02u, 0xb9296b79u, 0xa32c9e84u, 0xc7bf9813u, 0x919c3e56u, 0xf89a61bdu, 0xeaac37f8u, 0x3cb29af7u, 0x9d5e3beau, 0x9ff13a41u,
        0x293dceacu, 0x23b6fa1bu, 0x610368beu, 0xbfe4f905u, 0x87c496a0u, 0x2b0e597fu, 0xe13918d2u, 0xd8bae209u, 0xc6dd03d4u, 0xc4e29d23u, 0xdef7e026u, 0x360a794du, 0xffd0ca48u, 0x2ba9e907u, 0xe89792bau, 0xc4c182d1u,
        0x1acaddfcu, 0x1acaa12bu, 0x1223448eu, 0xe7680295u, 0xae4b72f0u, 0x5f7f698fu, 0x28ed49a2u, 0x0ca43c99u, 0x3bdbfd24u, 0xa5fb2633u, 0x766335f6u, 0x0bfeb4ddu, 0xfe033098u, 0x26ccfb17u, 0x6621dd8au, 0x8ce62f61u,
        0xbb79014cu, 0x18844c3bu, 0xa349545eu, 0xfbf3b025u, 0x539aa340u, 0x0994bd9fu, 0x8110ee72u, 0xd26e7b29u, 0xf81e8a74u, 0x867a3343u, 0xc29b3fc6u, 0x3410146du, 0x48086ae8u, 0xb01cd127u, 0x160a1c5au, 0x27083ff1u,
        0xbfdd389cu, 0xa674fb4bu, 0xd6d2982eu, 0xea4101b5u, 0x33172790u, 0xeb6f55afu, 0xeb510742u, 0x2de29db9u, 0x42d9abc4u, 0x2210c453u, 0xd19cfd96u, 0x321797fdu, 0x05e57938u, 0xcdda6b37u, 0x2f9d4f2au, 0x1010b481u,
        0x55cc83ecu, 0xf66dae5bu, 0x7a5c0ffeu, 0xb148f745u, 0x7565ffe0u, 0xd37031bfu, 0x889a9412u, 0x3909a449u, 0x04826114u, 0xe4afd963u, 0x24a56f66u, 0xe42e3f8du, 0x74df5b88u, 0x1a86c947u, 0xf16875fau, 0xa3288d11u,
        0x745be33cu, 0xf27f656bu, 0x36c2bbceu, 0xf24490d5u, 0x006c2c30u, 0xac3851cfu, 0x691a94e2u, 0xb42c8ed9u, 0x16cdaa64u, 0xfa887273u, 0x80319536u, 0x12ad0b1du, 0x377b11d8u, 0xd4e2eb57u, 0x713890cau, 0xa9b8c9a1u,
        0x2be0568cu, 0x4cfb207bu, 0x60239b9eu, 0x80acce65u, 0xc74eac80u, 0x8ca8b5dfu, 0x5c3e09b2u, 0x95d45d69u, 0x94b087b4u, 0x600b8f83u, 0xbbfe6f06u, 0x002cfaadu, 0xa57d9c28u, 0xefefd167u, 0x6c1a9f9au, 0xeb6a6a31u,
    };
    uint32_t acc = 0x55474131u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 41) & 255]);
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
    case 0: acc = heavy_round(acc, 0x9f7062d6u); break;
    case 1: acc = heavy_round(acc, 0xc36b3c3du); break;
    case 2: acc = heavy_round(acc, 0xc4d65078u); break;
    case 3: acc = heavy_round(acc, 0x7b18d977u); break;
    case 4: acc = heavy_round(acc, 0x9ff6686au); break;
    case 5: acc = heavy_round(acc, 0xbbe67cc1u); break;
    case 6: acc = heavy_round(acc, 0xcbb12f2cu); break;
    case 7: acc = heavy_round(acc, 0xc885e09bu); break;
    case 8: acc = heavy_round(acc, 0xb1dc1d3eu); break;
    case 9: acc = heavy_round(acc, 0xd3512385u); break;
    case 10: acc = heavy_round(acc, 0xc3b1bf20u); break;
    case 11: acc = heavy_round(acc, 0xa8bc67ffu); break;
    case 12: acc = heavy_round(acc, 0x0756d552u); break;
    case 13: acc = heavy_round(acc, 0x09d87489u); break;
    case 14: acc = heavy_round(acc, 0x5c3c7454u); break;
    case 15: acc = heavy_round(acc, 0x5e0e53a3u); break;
    case 16: acc = heavy_round(acc, 0xe36724a6u); break;
    case 17: acc = heavy_round(acc, 0x757bf3cdu); break;
    case 18: acc = heavy_round(acc, 0x65e302c8u); break;
    case 19: acc = heavy_round(acc, 0x2199c787u); break;
    case 20: acc = heavy_round(acc, 0xb2ecdf3au); break;
    case 21: acc = heavy_round(acc, 0x80116551u); break;
    case 22: acc = heavy_round(acc, 0x90985e7cu); break;
    case 23: acc = heavy_round(acc, 0x83ed27abu); break;
    case 24: acc = heavy_round(acc, 0x4cfb190eu); break;
    case 25: acc = heavy_round(acc, 0xa388cd15u); break;
    case 26: acc = heavy_round(acc, 0x1324bb70u); break;
    case 27: acc = heavy_round(acc, 0x25eb180fu); break;
    case 28: acc = heavy_round(acc, 0x2e6c2622u); break;
    case 29: acc = heavy_round(acc, 0x68706f19u); break;
    case 30: acc = heavy_round(acc, 0x2fd98da4u); break;
    case 31: acc = heavy_round(acc, 0x2dee7cb3u); break;
    case 32: acc = heavy_round(acc, 0xc4b59a76u); break;
    case 33: acc = heavy_round(acc, 0xaab8cf5du); break;
    case 34: acc = heavy_round(acc, 0xca858918u); break;
    case 35: acc = heavy_round(acc, 0x1d2e7997u); break;
    case 36: acc = heavy_round(acc, 0x1bfc4a0au); break;
    case 37: acc = heavy_round(acc, 0x68b8b1e1u); break;
    case 38: acc = heavy_round(acc, 0x83a8a1ccu); break;
    case 39: acc = heavy_round(acc, 0xe96272bbu); break;
    case 40: acc = heavy_round(acc, 0x846848deu); break;
    case 41: acc = heavy_round(acc, 0xa0711aa5u); break;
    case 42: acc = heavy_round(acc, 0x0ce80bc0u); break;
    case 43: acc = heavy_round(acc, 0x7ea60c1fu); break;
    case 44: acc = heavy_round(acc, 0x02b8eaf2u); break;
    case 45: acc = heavy_round(acc, 0xff114da9u); break;
    case 46: acc = heavy_round(acc, 0xaac23af4u); break;
    case 47: acc = heavy_round(acc, 0x0d9d29c3u); break;
    case 48: acc = heavy_round(acc, 0xa018c446u); break;
    case 49: acc = heavy_round(acc, 0x66baceedu); break;
    case 50: acc = heavy_round(acc, 0x1782e368u); break;
    case 51: acc = heavy_round(acc, 0xc9d7efa7u); break;
    case 52: acc = heavy_round(acc, 0xed31a8dau); break;
    case 53: acc = heavy_round(acc, 0x8e856271u); break;
    case 54: acc = heavy_round(acc, 0x3b76f91cu); break;
    case 55: acc = heavy_round(acc, 0xfc76c1cbu); break;
    case 56: acc = heavy_round(acc, 0x4c80acaeu); break;
    case 57: acc = heavy_round(acc, 0x40c30c35u); break;
    case 58: acc = heavy_round(acc, 0x6e60b010u); break;
    case 59: acc = heavy_round(acc, 0x8f0e442fu); break;
    case 60: acc = heavy_round(acc, 0xd7ea23c2u); break;
    case 61: acc = heavy_round(acc, 0xfb841039u); break;
    case 62: acc = heavy_round(acc, 0x362b7c44u); break;
    case 63: acc = heavy_round(acc, 0x72cb5ad3u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_115(int x)
{
    static const uint32_t local[256] = {
        0x8a30a71au, 0xf505cbb1u, 0xe12bd15cu, 0x930f3d0bu, 0xbc9a6eeeu, 0x2db76975u, 0xef30ec50u, 0xf3e2d36fu, 0xa508ea02u, 0x0551a179u, 0xccbb5c84u, 0x51b33e13u, 0xdd1fac56u, 0xea1af7bdu, 0x0ff7d5f8u, 0xb07da0f7u,
        0xf91189eau, 0x57203041u, 0x32a44cacu, 0xc21f601bu, 0xfaf496beu, 0x27784f05u, 0xe483f4a0u, 0x4e3a1f7fu, 0x715626d2u, 0x1bc89809u, 0x6b1341d4u, 0xc657c323u, 0x550ece26u, 0x96088f4du, 0x427be848u, 0xaa4e6f07u,
        0xfa5660bau, 0xcf85f8d1u, 0x73c8dbfcu, 0xa0e4872bu, 0xa917f28eu, 0x0d28d895u, 0x545a50f0u, 0x68b4af8fu, 0xb085d7a2u, 0x95f77299u, 0xa299bb24u, 0x0551cc33u, 0x09eda3f6u, 0x6fda4addu, 0x33edce98u, 0xccab0117u,
        0xdecc2b8au, 0x26a02561u, 0xa7ee7f4cu, 0x38afb23bu, 0x8621825eu, 0x21420625u, 0xd4d90140u, 0xa133839fu, 0xcd04fc72u, 0x49673129u, 0xe143c874u, 0x42125943u, 0x9e792dc6u, 0x09292a6du, 0x3f1288e8u, 0x31945727u,
        0x5e7fea5au, 0xe317b5f1u, 0xfbaa369cu, 0x2b11e14bu, 0x8c6e462eu, 0x287cd7b5u, 0x19650590u, 0x51d79bafu, 0x80809542u, 0x91e0d3b9u, 0xe64669c4u, 0x504a6a53u, 0x58ae6b96u, 0xbdce2dfdu, 0x83ef1738u, 0x774b7137u,
        0x68be9d2au, 0xd9d5aa81u, 0x14d101ecu, 0xc1dc145bu, 0xc19b3dfeu, 0xf9d24d45u, 0x42a35de0u, 0xe101f7bfu, 0xa3e5a212u, 0xe16d5a49u, 0x12169f14u, 0xb3eaff63u, 0xf1ca5d66u, 0x43e2558du, 0x37c87988u, 0xd0514f47u,
        0xf41543fau, 0xbe030311u, 0x6277e13cu, 0xff1f4b6bu, 0x068569ceu, 0x0e7b66d5u, 0x2e790a30u, 0xd15397cfu, 0xff6122e2u, 0x5055c4d9u, 0xb6696864u, 0xb1251873u, 0x664a0336u, 0x3bbea11du, 0xf523afd8u, 0x1366f157u,
        0xce50decau, 0xb108bfa1u, 0x6cf3d48cu, 0xad2c867bu, 0xe749c99eu, 0x11f12465u, 0xc80b0a80u, 0xd1ad7bdfu, 0x1a6017b2u, 0x2d231369u, 0x6633c5b4u, 0x5c69b583u, 0xc5ea5d06u, 0xbffc10adu, 0x0bc5ba28u, 0xcb8d5767u,
        0x6c7e6d9au, 0xd28fe031u, 0x25d9dbdcu, 0x6e94c58bu, 0x6b455d6eu, 0x71ec85f5u, 0x57be5ed0u, 0xcd30a3efu, 0x0b8f8082u, 0x8c9e45f9u, 0x45aab704u, 0xaa69d693u, 0x03a86ad6u, 0xf573a43du, 0xd0b39878u, 0x48058177u,
        0xbaeaf06au, 0xd08164c1u, 0x37fef72cu, 0xce29089bu, 0xe515253eu, 0xee668b85u, 0xd3380720u, 0xfb3e0fffu, 0x48dc5d52u, 0xd9d05c89u, 0x5a433c54u, 0x80167ba3u, 0xc5c12ca6u, 0x9b3e5bcdu, 0xee324ac8u, 0xac506f87u,
        0xed23673au, 0x77064d51u, 0x5778267cu, 0x4efa4fabu, 0xc296210eu, 0x29983515u, 0x2d5d0370u, 0xef76c00fu, 0x7773ae22u, 0x66025719u, 0xdab255a4u, 0xc2a0a4b3u, 0x35b1a276u, 0x9ab5375du, 0xb3c6d118u, 0x002f2197u,
        0x4df4d20au, 0x408799e1u, 0x919a69ccu, 0x7c599abbu, 0x5ce550deu, 0x37fa82a5u, 0xa65253c0u, 0xa9bbb41fu, 0x3bc272f2u, 0xf8bd35a9u, 0x7eed02f4u, 0x677951c3u, 0xd036cc46u, 0x977136edu, 0x66362b68u, 0x3fa297a7u,
        0x0f6c30dau, 0xe5ae4a71u, 0x9cfac11cu, 0xf9d7e9cbu, 0xc85fb4aeu, 0x30467435u, 0x1b7cf810u, 0xa62dec2fu, 0x0975abc2u, 0x5fc9f839u, 0xd0284444u, 0x845182d3u, 0x354daa16u, 0x7f4b5a7du, 0x8f8559b8u, 0x6aebd1b7u,
        0x1ad683aau, 0xed635f01u, 0x296e2c6cu, 0x93463cdbu, 0xa4a24c7eu, 0xbb7509c5u, 0x5781f060u, 0xed2e683fu, 0xf37a5892u, 0xff319ec9u, 0x78d91994u, 0x5f1a37e3u, 0xf8333be6u, 0x1a5ca20du, 0x4ef95c08u, 0x968bcfc7u,
        0xe0c0ca7au, 0x3ccfd791u, 0x3009abbcu, 0x4cb593ebu, 0xec8a184eu, 0xa4bf4355u, 0x62463cb0u, 0x235e284fu, 0x7bfd7962u, 0x613d2959u, 0x94b482e4u, 0x7e0470f3u, 0x6f6481b6u, 0x9afe0d9du, 0xa9173258u, 0xfb4391d7u,
        0x28f8054au, 0xa75cb421u, 0x43223f0cu, 0x7276eefbu, 0xc634181eu, 0x699e20e5u, 0xd0eedd00u, 0x999e2c5fu, 0x646c0e32u, 0xc67597e9u, 0x00af8034u, 0xb7812e03u, 0x849e7b86u, 0x2dc89d2du, 0xd7a3dca8u, 0x061417e7u,
    };
    uint32_t acc = 0x397796e7u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 115) & 255]);
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
    case 0: acc = heavy_round(acc, 0xa8de23d4u); break;
    case 1: acc = heavy_round(acc, 0xd1b13d23u); break;
    case 2: acc = heavy_round(acc, 0x79360026u); break;
    case 3: acc = heavy_round(acc, 0xebf2194du); break;
    case 4: acc = heavy_round(acc, 0x2653ea48u); break;
    case 5: acc = heavy_round(acc, 0x7f128907u); break;
    case 6: acc = heavy_round(acc, 0x74a7b2bau); break;
    case 7: acc = heavy_round(acc, 0x6e5322d1u); break;
    case 8: acc = heavy_round(acc, 0x5ceffdfcu); break;
    case 9: acc = heavy_round(acc, 0x616d412bu); break;
    case 10: acc = heavy_round(acc, 0x1425648eu); break;
    case 11: acc = heavy_round(acc, 0xfa43a295u); break;
    case 12: acc = heavy_round(acc, 0xc53292f0u); break;
    case 13: acc = heavy_round(acc, 0xbffc098fu); break;
    case 14: acc = heavy_round(acc, 0x570169a2u); break;
    case 15: acc = heavy_round(acc, 0x8869dc99u); break;
    case 16: acc = heavy_round(acc, 0xe2a51d24u); break;
    case 17: acc = heavy_round(acc, 0x60f1c633u); break;
    case 18: acc = heavy_round(acc, 0xd8a955f6u); break;
    case 19: acc = heavy_round(acc, 0x1a4e54ddu); break;
    case 20: acc = heavy_round(acc, 0x11ce5098u); break;
    case 21: acc = heavy_round(acc, 0x36dd9b17u); break;
    case 22: acc = heavy_round(acc, 0x76b9fd8au); break;
    case 23: acc = heavy_round(acc, 0x215fcf61u); break;
    case 24: acc = heavy_round(acc, 0x5b66214cu); break;
    case 25: acc = heavy_round(acc, 0xd24eec3bu); break;
    case 26: acc = heavy_round(acc, 0x6e53745eu); break;
    case 27: acc = heavy_round(acc, 0x74375025u); break;
    case 28: acc = heavy_round(acc, 0x00c9c340u); break;
    case 29: acc = heavy_round(acc, 0xbbb95d9fu); break;
    case 30: acc = heavy_round(acc, 0xc4ad0e72u); break;
    case 31: acc = heavy_round(acc, 0x961c1b29u); break;
    case 32: acc = heavy_round(acc, 0xb5afaa74u); break;
    case 33: acc = heavy_round(acc, 0x1998d343u); break;
    case 34: acc = heavy_round(acc, 0x0ee95fc6u); break;
    case 35: acc = heavy_round(acc, 0x54c7b46du); break;
    case 36: acc = heavy_round(acc, 0xbb1b8ae8u); break;
    case 37: acc = heavy_round(acc, 0x46d57127u); break;
    case 38: acc = heavy_round(acc, 0xed2a3c5au); break;
    case 39: acc = heavy_round(acc, 0x0069dff1u); break;
    case 40: acc = heavy_round(acc, 0x4f92589cu); break;
    case 41: acc = heavy_round(acc, 0x3d679b4bu); break;
    case 42: acc = heavy_round(acc, 0xcce4b82eu); break;
    case 43: acc = heavy_round(acc, 0xc1eca1b5u); break;
    case 44: acc = heavy_round(acc, 0x288e4790u); break;
    case 45: acc = heavy_round(acc, 0xf93bf5afu); break;
    case 46: acc = heavy_round(acc, 0xc6752742u); break;
    case 47: acc = heavy_round(acc, 0xd3783db9u); break;
    case 48: acc = heavy_round(acc, 0xe932cbc4u); break;
    case 49: acc = heavy_round(acc, 0x37576453u); break;
    case 50: acc = heavy_round(acc, 0xa9f31d96u); break;
    case 51: acc = heavy_round(acc, 0x9f3737fdu); break;
    case 52: acc = heavy_round(acc, 0xca409938u); break;
    case 53: acc = heavy_round(acc, 0x353b0b37u); break;
    case 54: acc = heavy_round(acc, 0x8f456f2au); break;
    case 55: acc = heavy_round(acc, 0x085a5481u); break;
    case 56: acc = heavy_round(acc, 0xe749a3ecu); break;
    case 57: acc = heavy_round(acc, 0x54884e5bu); break;
    case 58: acc = heavy_round(acc, 0x7d762ffeu); break;
    case 59: acc = heavy_round(acc, 0x625c9745u); break;
    case 60: acc = heavy_round(acc, 0xe5251fe0u); break;
    case 61: acc = heavy_round(acc, 0xc6e4d1bfu); break;
    case 62: acc = heavy_round(acc, 0xfd46b412u); break;
    case 63: acc = heavy_round(acc, 0xda874449u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

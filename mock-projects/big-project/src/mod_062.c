#include "heavy.h"
#include "mods.h"

int mod_062(int x)
{
    static const uint32_t local[256] = {
        0x21840ffdu, 0x1e379138u, 0x1795a337u, 0xfe6f272au, 0x44c8ac81u, 0x87f41becu, 0x2100665bu, 0x111f67feu, 0xc6446f45u, 0x6ffb17e0u, 0x4c9269bfu, 0xc9a76c12u, 0xbcc09c49u, 0xd39cf914u, 0xd9999163u, 0xabd3c766u,
        0xd098b78du, 0x9a177388u, 0xaff00147u, 0xec104dfau, 0x55be8511u, 0x7ec97b3cu, 0xfca01d6bu, 0xbbbc13ceu, 0xa3fe08d5u, 0xa4a74430u, 0xe6c889cfu, 0x50bd6ce2u, 0x718186d9u, 0xc6ee4264u, 0xc0c02a73u, 0xbc55ed36u,
        0x3395831du, 0x3b1929d8u, 0x597a2357u, 0xe53668cau, 0xc9acc1a1u, 0x3813ee8cu, 0x5229d87bu, 0x38d2f39eu, 0xf6a44665u, 0x16afc480u, 0x9c26eddfu, 0xe7f6e1b2u, 0x6c475569u, 0x7f571fb4u, 0x83114783u, 0xc298c706u,
        0x6d1372adu, 0xb901b428u, 0xe7350967u, 0x06ee779au, 0x483c6231u, 0x8d6875dcu, 0x8c2e978bu, 0xb7c1076eu, 0x33f027f5u, 0x767998d0u, 0x9fce95efu, 0x4e00ca82u, 0x49db07f9u, 0x090c9104u, 0xdd3de893u, 0xd99954d6u,
        0xa9eb863du, 0xd0d61278u, 0xf061b377u, 0xe5857a6au, 0x075666c1u, 0x119c112cu, 0xfd7f5a9bu, 0xb3234f3eu, 0x23daad85u, 0x21a9c120u, 0x712081ffu, 0xa0c82752u, 0xfd459e89u, 0x51839654u, 0x7c370da3u, 0xcf9496a6u,
        0xb136bdcdu, 0x94db44c8u, 0xe0812187u, 0x5c88713au, 0x5b23cf51u, 0x60c3c07cu, 0xf12d21abu, 0xc0d6cb0eu, 0x709cd715u, 0x73253d70u, 0xebbdb20fu, 0x2d79f822u, 0x5fd01919u, 0x77712fa4u, 0x0d2db6b3u, 0xf6078c76u,
        0x744e195du, 0xbc964b18u, 0x07545397u, 0x5ec45c0au, 0x460d9be1u, 0x703483ccu, 0xba88ecbbu, 0x61f87adeu, 0x36afa4a5u, 0x13110dc0u, 0x5787261fu, 0x40833cf2u, 0xc10377a9u, 0x1aca5cf4u, 0x4d92e3c3u, 0xf1af3646u,
        0x9eca98edu, 0xf4cc2568u, 0xa8dc49a7u, 0xc6463adau, 0x08bccc71u, 0xde835b1cu, 0xc523bbcbu, 0xd2e55eaeu, 0x94cc1635u, 0x46d23210u, 0x789dde2fu, 0xf590f5c2u, 0x76a8ba39u, 0xacc41e44u, 0x1b1794d3u, 0x8a889416u,
        0x26853c7du, 0x2f81d3b8u, 0x0d5a03b7u, 0x245b0daau, 0xb21a6101u, 0x4385466cu, 0xa4ce8edbu, 0xdb3a767eu, 0x3beb2bc5u, 0x410daa60u, 0x9f62da3fu, 0x07902292u, 0x6cc8e0c9u, 0xbfd37394u, 0x83acc9e3u, 0x7bd0a5e6u,
        0xdb97040du, 0xf3fc5608u, 0x914e81c7u, 0x918fd47au, 0xaf4f5991u, 0x804f45bcu, 0x259a65ebu, 0x9dd4c24eu, 0xff45e555u, 0x71a876b0u, 0xb8771a4fu, 0xa0adc362u, 0xb5aceb59u, 0x57ad5ce4u, 0xd58382f3u, 0x44046bb6u,
        0xf858ef9du, 0xaec0ac58u, 0xb57ac3d7u, 0x7db18f4au, 0x5bc4b621u, 0x0f36590cu, 0x5bd840fbu, 0x68d1421eu, 0x645542e5u, 0xd5c79700u, 0x5cbb9e5fu, 0x2a56d832u, 0x19ddd9e9u, 0x3946da34u, 0xaf0cc003u, 0xf4e0e586u,
        0xb163ff2du, 0x0193d6a8u, 0x2edfc9e7u, 0x7fcd3e1au, 0x912376b1u, 0x53cf805cu, 0xb419200bu, 0x858cf5eeu, 0x32d24475u, 0x47d00b50u, 0xe151666fu, 0x1d386102u, 0xa824ac79u, 0x3ad4eb84u, 0x0ef98113u, 0x03631356u,
        0xc59132bdu, 0x137ad4f8u, 0xf6be93f7u, 0x262fe0eau, 0x37549b41u, 0xeaefbbacu, 0x032e031bu, 0x08a4ddbeu, 0x04b5ea05u, 0xcf66d3a0u, 0x6799727fu, 0xd13f5dd2u, 0x458a6309u, 0x93cc90d4u, 0x643ac623u, 0x17c7f526u,
        0x0df98a4du, 0xe0baa748u, 0x5a982207u, 0xc66677bau, 0xd48123d1u, 0xfaac0afcu, 0x9627ea2bu, 0xa1f5f98eu, 0xd6393395u, 0xf170eff0u, 0xed34c28fu, 0x4d98cea2u, 0x3d57fd99u, 0x2ce2ca24u, 0x9e018f33u, 0xdd8c8af6u,
        0x0df605ddu, 0x8ad84d98u, 0x0c2d7417u, 0x4d3e028au, 0x1d121061u, 0x82596e4cu, 0x4257d53bu, 0x6c9d495eu, 0x95d52125u, 0x00136040u, 0x5c04569fu, 0x18b1b372u, 0xd1167c29u, 0xf00c9774u, 0x3bbedc43u, 0xd36dd4c6u,
        0x831fa56du, 0xa898c7e8u, 0x317f8a27u, 0x0ec3815au, 0x83b060f1u, 0xaa8ce59cu, 0x754ec44bu, 0xbef7cd2eu, 0xb442b2b5u, 0x6ab32490u, 0x9a292eafu, 0x08370c42u, 0xc88edeb9u, 0x187ef8c4u, 0x5d23ad53u, 0x1b68d296u,
    };
    uint32_t acc = 0x59555596u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 62) & 255]);
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
    case 0: acc = heavy_round(acc, 0x428bdbcdu); break;
    case 1: acc = heavy_round(acc, 0xce21cac8u); break;
    case 2: acc = heavy_round(acc, 0xf879ef87u); break;
    case 3: acc = heavy_round(acc, 0xd43ee73au); break;
    case 4: acc = heavy_round(acc, 0xa86bcd51u); break;
    case 5: acc = heavy_round(acc, 0xca9fa67cu); break;
    case 6: acc = heavy_round(acc, 0x64fbcfabu); break;
    case 7: acc = heavy_round(acc, 0xf9a9a10eu); break;
    case 8: acc = heavy_round(acc, 0x3a95b515u); break;
    case 9: acc = heavy_round(acc, 0x8b3c8370u); break;
    case 10: acc = heavy_round(acc, 0x40d0400fu); break;
    case 11: acc = heavy_round(acc, 0xc1ff2e22u); break;
    case 12: acc = heavy_round(acc, 0x4417d719u); break;
    case 13: acc = heavy_round(acc, 0x32c9d5a4u); break;
    case 14: acc = heavy_round(acc, 0x18d224b3u); break;
    case 15: acc = heavy_round(acc, 0xcf352276u); break;
    case 16: acc = heavy_round(acc, 0x4b62b75du); break;
    case 17: acc = heavy_round(acc, 0x4d965118u); break;
    case 18: acc = heavy_round(acc, 0xfcb8a197u); break;
    case 19: acc = heavy_round(acc, 0x69f0520au); break;
    case 20: acc = heavy_round(acc, 0x614d19e1u); break;
    case 21: acc = heavy_round(acc, 0x6ca1e9ccu); break;
    case 22: acc = heavy_round(acc, 0x18bb1abbu); break;
    case 23: acc = heavy_round(acc, 0xa6d8d0deu); break;
    case 24: acc = heavy_round(acc, 0x7e5802a5u); break;
    case 25: acc = heavy_round(acc, 0xfa11d3c0u); break;
    case 26: acc = heavy_round(acc, 0xb775341fu); break;
    case 27: acc = heavy_round(acc, 0x572df2f2u); break;
    case 28: acc = heavy_round(acc, 0xb232b5a9u); break;
    case 29: acc = heavy_round(acc, 0x3ae482f4u); break;
    case 30: acc = heavy_round(acc, 0x100ad1c3u); break;
    case 31: acc = heavy_round(acc, 0xd89a4c46u); break;
    case 32: acc = heavy_round(acc, 0x297eb6edu); break;
    case 33: acc = heavy_round(acc, 0xb1e5ab68u); break;
    case 34: acc = heavy_round(acc, 0x848c17a7u); break;
    case 35: acc = heavy_round(acc, 0x1847b0dau); break;
    case 36: acc = heavy_round(acc, 0x4dd3ca71u); break;
    case 37: acc = heavy_round(acc, 0x57e2411cu); break;
    case 38: acc = heavy_round(acc, 0x349969cbu); break;
    case 39: acc = heavy_round(acc, 0x5d3334aeu); break;
    case 40: acc = heavy_round(acc, 0x8403f435u); break;
    case 41: acc = heavy_round(acc, 0x5d1c7810u); break;
    case 42: acc = heavy_round(acc, 0x08476c2fu); break;
    case 43: acc = heavy_round(acc, 0xadc12bc2u); break;
    case 44: acc = heavy_round(acc, 0x4c9f7839u); break;
    case 45: acc = heavy_round(acc, 0x67ffc444u); break;
    case 46: acc = heavy_round(acc, 0x974302d3u); break;
    case 47: acc = heavy_round(acc, 0xe4912a16u); break;
    case 48: acc = heavy_round(acc, 0xcab8da7du); break;
    case 49: acc = heavy_round(acc, 0x8514d9b8u); break;
    case 50: acc = heavy_round(acc, 0x903551b7u); break;
    case 51: acc = heavy_round(acc, 0xc89203aau); break;
    case 52: acc = heavy_round(acc, 0xf4e8df01u); break;
    case 53: acc = heavy_round(acc, 0x3c35ac6cu); break;
    case 54: acc = heavy_round(acc, 0x8467bcdbu); break;
    case 55: acc = heavy_round(acc, 0xbc55cc7eu); break;
    case 56: acc = heavy_round(acc, 0xf49289c5u); break;
    case 57: acc = heavy_round(acc, 0x7f017060u); break;
    case 58: acc = heavy_round(acc, 0x3ba7e83fu); break;
    case 59: acc = heavy_round(acc, 0xd8a5d892u); break;
    case 60: acc = heavy_round(acc, 0x77671ec9u); break;
    case 61: acc = heavy_round(acc, 0x64909994u); break;
    case 62: acc = heavy_round(acc, 0xf46bb7e3u); break;
    case 63: acc = heavy_round(acc, 0x8656bbe6u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

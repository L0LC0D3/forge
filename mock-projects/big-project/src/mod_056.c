#include "heavy.h"
#include "mods.h"

int mod_056(int x)
{
    static const uint32_t local[256] = {
        0x7f5fbd2bu, 0x52ddb08eu, 0x03e77e95u, 0x082cbef0u, 0x2038458fu, 0x15f875a2u, 0xd5bd7899u, 0x5c0c0924u, 0x9933c233u, 0x9a6b21f6u, 0x146db0ddu, 0x400dfc98u, 0xbaa15717u, 0x8092898au, 0x9526eb61u, 0x4daa8d4cu,
        0xeed0683bu, 0x944ec05eu, 0xee422c25u, 0x02feef40u, 0x53f4999fu, 0xf5971a72u, 0x7ec6b729u, 0xbc819674u, 0x2249cf43u, 0xa04e2bc6u, 0xcc2e106du, 0x8ff636e8u, 0x02782d27u, 0xa755c85au, 0x7a67fbf1u, 0x7ca1c49cu,
        0x3838174bu, 0xb6e3042eu, 0x621e7db5u, 0xa4be7390u, 0xc53631afu, 0xb2123342u, 0x8939d9b9u, 0x842fb7c4u, 0xe8376053u, 0x7fbae996u, 0x01a493fdu, 0x58764538u, 0x9c7cc737u, 0x5a83fb2au, 0xf24f7081u, 0x2de40fecu,
        0xfd67ca5bu, 0x38377bfeu, 0x4e757345u, 0x46104be0u, 0xb25e0dbfu, 0x1c56c012u, 0xff1fe049u, 0xcb8b6d14u, 0xc6ed7563u, 0x69ee5b66u, 0x82ea3b8du, 0x06d32788u, 0x93302547u, 0x88aa21fau, 0x48064911u, 0x88866f3cu,
        0x9870816bu, 0x712927ceu, 0x44800cd5u, 0xfcd97830u, 0x760d2dcfu, 0xf491c0e2u, 0x90c1cad9u, 0x9c49b664u, 0x5a9d0e73u, 0xd3658136u, 0x0858071du, 0x6d91ddd8u, 0x95534757u, 0xf7953ccau, 0x34f585a1u, 0xccdde28cu,
        0x2ba33c7bu, 0x65d5079eu, 0x07b74a65u, 0xec3ef880u, 0x972491dfu, 0xba3035b2u, 0x24a89969u, 0x415f93b4u, 0x0fb72b83u, 0x43dd5b06u, 0xc486f6adu, 0x14776828u, 0x05e72d67u, 0x14524b9au, 0x70c62631u, 0xa47f69dcu,
        0xb190fb8bu, 0x95981b6eu, 0x1dd42bf5u, 0x94a5ccd0u, 0xd8c539efu, 0x7bdf1e82u, 0x679d4bf9u, 0x97020504u, 0x32eccc93u, 0x2652e8d6u, 0xf4500a3du, 0x8888c678u, 0x0c2cd777u, 0xc32e4e6au, 0x41612ac1u, 0x7240052cu,
        0x0d0abe9bu, 0xcb0f633eu, 0x5ecfb185u, 0x23b2f520u, 0x4a5025ffu, 0xa78b7b52u, 0x5ca8e289u, 0x5aa60a54u, 0x012ef1a3u, 0x99032aa6u, 0x6ecc41cdu, 0xac0af8c8u, 0xa3a54587u, 0x2fb6453au, 0x0aef9351u, 0xa234b47cu,
        0x192185abu, 0xec17df0eu, 0x84e2db15u, 0xc44b7170u, 0x5766560fu, 0xda624c22u, 0xed145d19u, 0x7b00a3a4u, 0xb7ae9ab3u, 0x3d6b2076u, 0x35549d5du, 0x0682ff18u, 0xac117797u, 0x9cb7300au, 0xdfda5fe1u, 0xf9b277ccu,
        0xb92650bbu, 0xc9ce8edeu, 0xbc86a8a5u, 0xee9441c0u, 0xd7e8ca1fu, 0xb0d090f2u, 0x7868bba9u, 0x6806d0f4u, 0xa3dcc7c3u, 0x0847ca46u, 0x03821cedu, 0x14b5d968u, 0xf9726da7u, 0x343e0edau, 0x10ca9071u, 0xe74e4f1cu,
        0xe8aa1fcbu, 0xf09072aeu, 0x34741a35u, 0xb7f26610u, 0x1ff8822fu, 0x968349c2u, 0x646efe39u, 0x62ed9244u, 0x336a78d3u, 0x11962816u, 0xdf2dc07du, 0x98a887b8u, 0x640927b7u, 0xd797e1aau, 0xbca92501u, 0xd2dd3a6cu,
        0xcb7df2dbu, 0x77fa8a7eu, 0xada42fc5u, 0x230ade60u, 0x0ff67e3fu, 0x96677692u, 0xad3024c9u, 0xce29e794u, 0x0448ade3u, 0x649339e6u, 0xa870880du, 0xe9a00a08u, 0xd856a5c7u, 0xef51a87au, 0x609f1d91u, 0x6d7439bcu,
        0xbdb2c9ebu, 0xd2e9d64eu, 0x0b4fe955u, 0x6fc2aab0u, 0x2483be4fu, 0x2aaa1762u, 0x74f52f59u, 0x7d70d0e4u, 0xf4a866f3u, 0xcfbbffb6u, 0xa9a3739du, 0x44216058u, 0x671be7d7u, 0x3b38634au, 0x68157a21u, 0x01684d0cu,
        0x6399a4fbu, 0x9f7b561eu, 0xe2f046e5u, 0x6b3ecb00u, 0x8681425fu, 0x0cb82c32u, 0x94471de9u, 0x05b74e34u, 0x32faa403u, 0xb4cd7986u, 0x275f832du, 0x19f18aa8u, 0x5559ede7u, 0xa259121au, 0xbcb53ab1u, 0xc24e745cu,
        0xb9c3840bu, 0x770c09eeu, 0x0c3e4875u, 0xbfe43f50u, 0x1b100a6fu, 0x053eb502u, 0x29eef079u, 0x0d325f84u, 0x4df06513u, 0xd8c4a756u, 0xf07db6bdu, 0x621588f8u, 0x2c51b7f7u, 0x0300b4eau, 0x56675f41u, 0x1cfbafacu,
        0x2501671bu, 0xbe38f1beu, 0x3132ee05u, 0x455807a0u, 0x9391167fu, 0xbc2ab1d2u, 0x2af5a709u, 0x9b5704d4u, 0x447aaa23u, 0x33de8926u, 0xee170e4du, 0xe8d25b48u, 0xc9844607u, 0x02bc4bbau, 0xcb54e7d1u, 0x0784fefcu,
    };
    uint32_t acc = 0x432969fcu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 56) & 255]);
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
    case 0: acc = heavy_round(acc, 0x95eb48e3u); break;
    case 1: acc = heavy_round(acc, 0xb69718e6u); break;
    case 2: acc = heavy_round(acc, 0x247cdb0du); break;
    case 3: acc = heavy_round(acc, 0x3a524108u); break;
    case 4: acc = heavy_round(acc, 0x524d70c7u); break;
    case 5: acc = heavy_round(acc, 0x48bbf77au); break;
    case 6: acc = heavy_round(acc, 0xfd7f2091u); break;
    case 7: acc = heavy_round(acc, 0xf10660bcu); break;
    case 8: acc = heavy_round(acc, 0x76a8c4ebu); break;
    case 9: acc = heavy_round(acc, 0xbc69954eu); break;
    case 10: acc = heavy_round(acc, 0x73e69c55u); break;
    case 11: acc = heavy_round(acc, 0x45bbc1b0u); break;
    case 12: acc = heavy_round(acc, 0x8053e94fu); break;
    case 13: acc = heavy_round(acc, 0xf85e4662u); break;
    case 14: acc = heavy_round(acc, 0x48d59259u); break;
    case 15: acc = heavy_round(acc, 0x5247d7e4u); break;
    case 16: acc = heavy_round(acc, 0x1f5dc1f3u); break;
    case 17: acc = heavy_round(acc, 0x20339eb6u); break;
    case 18: acc = heavy_round(acc, 0xf010869du); break;
    case 19: acc = heavy_round(acc, 0x283d5758u); break;
    case 20: acc = heavy_round(acc, 0x3ff172d7u); break;
    case 21: acc = heavy_round(acc, 0xe672724au); break;
    case 22: acc = heavy_round(acc, 0xb3023d21u); break;
    case 23: acc = heavy_round(acc, 0x3020340cu); break;
    case 24: acc = heavy_round(acc, 0x97fa5ffbu); break;
    case 25: acc = heavy_round(acc, 0x15e6d51eu); break;
    case 26: acc = heavy_round(acc, 0x21ffb9e5u); break;
    case 27: acc = heavy_round(acc, 0x01d9a200u); break;
    case 28: acc = heavy_round(acc, 0xdd082d5fu); break;
    case 29: acc = heavy_round(acc, 0x26341b32u); break;
    case 30: acc = heavy_round(acc, 0x97cc40e9u); break;
    case 31: acc = heavy_round(acc, 0xaa6c1534u); break;
    case 32: acc = heavy_round(acc, 0x0672bf03u); break;
    case 33: acc = heavy_round(acc, 0xefa8d886u); break;
    case 34: acc = heavy_round(acc, 0xd35d562du); break;
    case 35: acc = heavy_round(acc, 0x92e741a8u); break;
    case 36: acc = heavy_round(acc, 0x3fbe38e7u); break;
    case 37: acc = heavy_round(acc, 0xd252e11au); break;
    case 38: acc = heavy_round(acc, 0xebdebdb1u); break;
    case 39: acc = heavy_round(acc, 0x7c9c1b5cu); break;
    case 40: acc = heavy_round(acc, 0x6f3eff0bu); break;
    case 41: acc = heavy_round(acc, 0xe45348eeu); break;
    case 42: acc = heavy_round(acc, 0x22f67b75u); break;
    case 43: acc = heavy_round(acc, 0x4690d650u); break;
    case 44: acc = heavy_round(acc, 0x74fdb56fu); break;
    case 45: acc = heavy_round(acc, 0xfb726402u); break;
    case 46: acc = heavy_round(acc, 0x5948d379u); break;
    case 47: acc = heavy_round(acc, 0x7034e684u); break;
    case 48: acc = heavy_round(acc, 0x85db4013u); break;
    case 49: acc = heavy_round(acc, 0xa5f3c656u); break;
    case 50: acc = heavy_round(acc, 0x293c49bdu); break;
    case 51: acc = heavy_round(acc, 0x8d54fff8u); break;
    case 52: acc = heavy_round(acc, 0x46f4c2f7u); break;
    case 53: acc = heavy_round(acc, 0x66aa43eau); break;
    case 54: acc = heavy_round(acc, 0xebfda241u); break;
    case 55: acc = heavy_round(acc, 0x1f4f16acu); break;
    case 56: acc = heavy_round(acc, 0x8d47a21bu); break;
    case 57: acc = heavy_round(acc, 0xc84bf0beu); break;
    case 58: acc = heavy_round(acc, 0x2cc3e105u); break;
    case 59: acc = heavy_round(acc, 0x87865ea0u); break;
    case 60: acc = heavy_round(acc, 0xe595817fu); break;
    case 61: acc = heavy_round(acc, 0x1c0620d2u); break;
    case 62: acc = heavy_round(acc, 0x4e544a09u); break;
    case 63: acc = heavy_round(acc, 0x07174bd4u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

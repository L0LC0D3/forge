#include "heavy.h"
#include "mods.h"

int mod_089(int x)
{
    static const uint32_t local[256] = {
        0x4971324cu, 0xfaa4c93bu, 0x45bdad5eu, 0x48523525u, 0xda656440u, 0x83c68a9fu, 0x92465772u, 0x3afad029u, 0x7e1cdb74u, 0x91aa5043u, 0x549ab8c6u, 0x393f396du, 0xf12b4be8u, 0x25883e27u, 0x7eeca55au, 0x1e1f34f1u,
        0x5ea5a99cu, 0x9ca8b84bu, 0x69c1312eu, 0x6254c6b5u, 0x69962890u, 0x634862afu, 0xc184b042u, 0x24d832b9u, 0x33b03cc4u, 0x03bc2153u, 0xa35eb696u, 0x19a3fcfdu, 0x95449a38u, 0x35d51837u, 0x3d46182au, 0xa2b8e981u,
        0xfa7534ecu, 0xd284ab5bu, 0x8554e8feu, 0x9761fc45u, 0x99a940e0u, 0xcfc07ebfu, 0xdc5c7d12u, 0x7db87949u, 0xf7413214u, 0xa8a67663u, 0xafb96866u, 0x3a67e48du, 0xea8abc88u, 0xd5e0b647u, 0x6e677efau, 0x7ab20211u,
        0x97f4d43cu, 0x3a49a26bu, 0x6555d4ceu, 0x5cb2d5d5u, 0x1483ad30u, 0xa7cfdecfu, 0x56fabde2u, 0x19e4a3d9u, 0xa684bb64u, 0xe09a4f73u, 0xe227ce36u, 0xb7e3f01du, 0xd782b2d8u, 0xb86c1857u, 0x0c1dd9cau, 0x03737ea1u,
        0xcb79878cu, 0x3a489d7bu, 0x81e0f49eu, 0x59c05365u, 0x914a6d80u, 0xf65782dfu, 0x64cc72b2u, 0x03e5b269u, 0x606fd8b4u, 0xdc08ac83u, 0xb666e806u, 0x28b11fadu, 0xf7f17d28u, 0x44783e67u, 0xb776289au, 0x98a65f31u,
        0x92984edcu, 0x11129c8bu, 0xce53486eu, 0xf84374f5u, 0x246281d0u, 0x02786aefu, 0xc87e9b82u, 0x0c84a4f9u, 0xd5378a04u, 0xaba28d93u, 0x8b73b5d6u, 0x2da8733du, 0xecdc1b78u, 0xa5462877u, 0x88bd6b6au, 0x2433a3c1u,
        0xa4262a2cu, 0xe5789f9bu, 0x8949d03eu, 0xf4353a85u, 0x8f70ea20u, 0x5f9396ffu, 0xa3fe3852u, 0x5aca7b89u, 0x9650cf54u, 0x5058f2a3u, 0x738b37a6u, 0x01e2eacdu, 0xac878dc8u, 0xda56d687u, 0xdf80a23au, 0xae444c51u,
        0xc038197cu, 0xd68ba6abu, 0x0ca18c0eu, 0xebcea415u, 0x915aa670u, 0xfd4a070fu, 0x48784922u, 0xfc003619u, 0x6670a8a4u, 0xcb5cdbb3u, 0x042a6d76u, 0x0ab9865du, 0xd278d418u, 0xc76b4897u, 0x328ccd0au, 0xed4158e1u,
        0x00231cccu, 0x0b9cb1bbu, 0x9d777bdeu, 0xef88b1a5u, 0x3644b6c0u, 0x377cbb1fu, 0x0659cdf2u, 0x73aed4a9u, 0x898c15f4u, 0x2e1f48c3u, 0x260e5746u, 0x67c545edu, 0xef74ee68u, 0x44847ea7u, 0xdfeeebdau, 0xd5d3c971u,
        0x267c341cu, 0xc43cc0cbu, 0x3c289faeu, 0x121c6335u, 0x27941b10u, 0xe64cb32fu, 0xfd4fc6c2u, 0x4b9f5739u, 0x14d81744u, 0xaa5139d3u, 0xe533f516u, 0x82df297du, 0xd980dcb8u, 0x2de378b7u, 0xfcf3feaau, 0x2ae49e01u,
        0xef185f6cu, 0x683cd3dbu, 0x7451f77eu, 0xf882b8c5u, 0xfbedd360u, 0x6e1aef3fu, 0xec473392u, 0xa3dabdc9u, 0x3ec9ac94u, 0xa1e3aee3u, 0x40d846e6u, 0xa020310du, 0xfbe19f08u, 0x740936c7u, 0x2629057au, 0x0d9cd691u,
        0x5f0c9ebcu, 0x97adeaebu, 0x2cd0834eu, 0x69f4b255u, 0x8736dfb0u, 0xcf886f4fu, 0x016d1462u, 0xc2aa0859u, 0xaf15d5e4u, 0xb707a7f3u, 0xfb784cb6u, 0x6de15c9du, 0xa71c3558u, 0x2bb6b8d7u, 0x4f5b004au, 0x8d657321u,
        0x14adf20cu, 0x3ae105fbu, 0x77c1431eu, 0xdfeb4fe5u, 0x2a944000u, 0xb776335fu, 0xaa2e6932u, 0xa49636e9u, 0xceb19334u, 0xdc2e2503u, 0x6ad10686u, 0x94bbac2du, 0x60f59fa8u, 0x9decfee7u, 0x9396ef1au, 0x37e773b1u,
        0x9791595cu, 0x9267250bu, 0x628136eeu, 0x161f9175u, 0x246af450u, 0x8f053b6fu, 0x63383202u, 0x8c684979u, 0x17d1e484u, 0x64082613u, 0x47df7456u, 0x47881fbdu, 0x3472ddf8u, 0x57ed08f7u, 0x0529d1eau, 0xa90bd841u,
        0xa88bd4acu, 0x4711481bu, 0xc5ad5ebeu, 0x9a8a7705u, 0xe05ffca0u, 0x8b96877fu, 0x88776ed2u, 0x93294009u, 0x65ebc9d4u, 0x1186ab23u, 0x7ee09626u, 0xd35fb74du, 0x01d8f048u, 0x3b37d707u, 0x7da0a8bau, 0x1afba0d1u,
        0x91b263fcu, 0x79f06f2bu, 0x1522ba8eu, 0x5d650095u, 0x475858f0u, 0xbecb178fu, 0x25191fa2u, 0x38221a99u, 0x45b44324u, 0x27dab433u, 0xff516bf6u, 0x2f9b72ddu, 0xceacd698u, 0x8d8e6917u, 0x6dc8738au, 0xf61fcd61u,
    };
    uint32_t acc = 0xfdbbe461u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 89) & 255]);
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
    case 0: acc = heavy_round(acc, 0x09886aa6u); break;
    case 1: acc = heavy_round(acc, 0x7d1081cdu); break;
    case 2: acc = heavy_round(acc, 0xd70238c8u); break;
    case 3: acc = heavy_round(acc, 0x95b38587u); break;
    case 4: acc = heavy_round(acc, 0x67ef853au); break;
    case 5: acc = heavy_round(acc, 0xf557d351u); break;
    case 6: acc = heavy_round(acc, 0x52fff47cu); break;
    case 7: acc = heavy_round(acc, 0x4ef3c5abu); break;
    case 8: acc = heavy_round(acc, 0xad451f0eu); break;
    case 9: acc = heavy_round(acc, 0x9baf1b15u); break;
    case 10: acc = heavy_round(acc, 0x8e2ab170u); break;
    case 11: acc = heavy_round(acc, 0xcb3c960fu); break;
    case 12: acc = heavy_round(acc, 0x59c38c22u); break;
    case 13: acc = heavy_round(acc, 0x64849d19u); break;
    case 14: acc = heavy_round(acc, 0x8533e3a4u); break;
    case 15: acc = heavy_round(acc, 0xe7c8dab3u); break;
    case 16: acc = heavy_round(acc, 0x64406076u); break;
    case 17: acc = heavy_round(acc, 0x65a8dd5du); break;
    case 18: acc = heavy_round(acc, 0x4c4a3f18u); break;
    case 19: acc = heavy_round(acc, 0xdaafb797u); break;
    case 20: acc = heavy_round(acc, 0x4840700au); break;
    case 21: acc = heavy_round(acc, 0x85529fe1u); break;
    case 22: acc = heavy_round(acc, 0x8a4db7ccu); break;
    case 23: acc = heavy_round(acc, 0x2c8890bbu); break;
    case 24: acc = heavy_round(acc, 0x0b4bcedeu); break;
    case 25: acc = heavy_round(acc, 0x3762e8a5u); break;
    case 26: acc = heavy_round(acc, 0x2d4381c0u); break;
    case 27: acc = heavy_round(acc, 0x1a4f0a1fu); break;
    case 28: acc = heavy_round(acc, 0x0d81d0f2u); break;
    case 29: acc = heavy_round(acc, 0x0ce8fba9u); break;
    case 30: acc = heavy_round(acc, 0x4c0a10f4u); break;
    case 31: acc = heavy_round(acc, 0xc38707c3u); break;
    case 32: acc = heavy_round(acc, 0xb96d0a46u); break;
    case 33: acc = heavy_round(acc, 0x19e65cedu); break;
    case 34: acc = heavy_round(acc, 0x694d1968u); break;
    case 35: acc = heavy_round(acc, 0xc8a0ada7u); break;
    case 36: acc = heavy_round(acc, 0x67174edau); break;
    case 37: acc = heavy_round(acc, 0x7552d071u); break;
    case 38: acc = heavy_round(acc, 0x8bb98f1cu); break;
    case 39: acc = heavy_round(acc, 0x3d9c5fcbu); break;
    case 40: acc = heavy_round(acc, 0x065db2aeu); break;
    case 41: acc = heavy_round(acc, 0x57605a35u); break;
    case 42: acc = heavy_round(acc, 0xdf71a610u); break;
    case 43: acc = heavy_round(acc, 0x14eec22fu); break;
    case 44: acc = heavy_round(acc, 0x648489c2u); break;
    case 45: acc = heavy_round(acc, 0x99ff3e39u); break;
    case 46: acc = heavy_round(acc, 0xd4c0d244u); break;
    case 47: acc = heavy_round(acc, 0x66a4b8d3u); break;
    case 48: acc = heavy_round(acc, 0x210b6816u); break;
    case 49: acc = heavy_round(acc, 0x9fa2007du); break;
    case 50: acc = heavy_round(acc, 0xf00fc7b8u); break;
    case 51: acc = heavy_round(acc, 0x37c767b7u); break;
    case 52: acc = heavy_round(acc, 0xa5c121aau); break;
    case 53: acc = heavy_round(acc, 0xe4416501u); break;
    case 54: acc = heavy_round(acc, 0xbf187a6cu); break;
    case 55: acc = heavy_round(acc, 0xa60032dbu); break;
    case 56: acc = heavy_round(acc, 0xb617ca7eu); break;
    case 57: acc = heavy_round(acc, 0xbca06fc5u); break;
    case 58: acc = heavy_round(acc, 0xa75a1e60u); break;
    case 59: acc = heavy_round(acc, 0x9b7cbe3fu); break;
    case 60: acc = heavy_round(acc, 0x69b8b692u); break;
    case 61: acc = heavy_round(acc, 0x07d064c9u); break;
    case 62: acc = heavy_round(acc, 0x81cd2794u); break;
    case 63: acc = heavy_round(acc, 0x6f12ede3u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_072(int x)
{
    static const uint32_t local[256] = {
        0xbc691e7bu, 0xa9ed819eu, 0x27917c65u, 0x5c3f8280u, 0xf82793dfu, 0x0c234fb2u, 0xb45ceb69u, 0x6833bdb4u, 0xab394d83u, 0x55051506u, 0xa1a768adu, 0x5e893228u, 0x994a6f67u, 0x8ea8a59au, 0xd904b831u, 0x1fd8d3dcu,
        0xef575d8bu, 0x55b7156eu, 0xa102ddf5u, 0x3af0d6d0u, 0x2a90bbefu, 0x6b00b882u, 0xf9ae1df9u, 0x3788af04u, 0x9b7f6e93u, 0xb45122d6u, 0x1f54fc3du, 0x52351078u, 0x29689977u, 0x0083286au, 0x778c3cc1u, 0x1d9bef2cu,
        0x39f1a09bu, 0x22d4dd3eu, 0x6c72e385u, 0xbce87f20u, 0xe10427ffu, 0x397b9552u, 0xfa363489u, 0xab7f3454u, 0xbcf213a3u, 0x3377e4a6u, 0xf2d5b3cdu, 0x45f1c2c8u, 0x22d98787u, 0xe9a99f3au, 0x3c272551u, 0x88331e7cu,
        0x7f48e7abu, 0x5f23d90eu, 0x8c1a8d15u, 0xb50b7b70u, 0x0f22d80fu, 0xfcc0e622u, 0x673e2f19u, 0xdacc4da4u, 0x54c23cb3u, 0xdbf65a76u, 0x65828f5du, 0x69444918u, 0xed5e3997u, 0x74e90a0au, 0x013e71e1u, 0x4cf361ccu,
        0xaaae32bbu, 0x43c108deu, 0x7472daa5u, 0x437ecbc0u, 0x14cdcc1fu, 0x393daaf2u, 0x684f0da9u, 0x5d64faf4u, 0xb860e9c3u, 0x0a898446u, 0x7af48eedu, 0xe0f1a368u, 0xe4f7afa7u, 0xb44e68dau, 0xdf7b2271u, 0x0271b91cu,
        0xbfb281cbu, 0xc5096caeu, 0x9c34cc35u, 0x25a77010u, 0xce26042fu, 0x429ee3c2u, 0x2b31d039u, 0x9c7e3c44u, 0x5d7f1ad3u, 0x3f2e6216u, 0x8104b27du, 0x16fed1b8u, 0x69e6e9b7u, 0x7126bbaau, 0xbdc63701u, 0x3883246cu,
        0xea26d4dbu, 0x629a047eu, 0x0c5961c5u, 0x062a6860u, 0xa38c803fu, 0x0bd19092u, 0x73ef76c9u, 0x228d1194u, 0xea0dcfe3u, 0xed21f3e6u, 0x9fcbfa0du, 0x0ab0d408u, 0xf0ace7c7u, 0xfbff027au, 0xe148af91u, 0xc83ca3bcu,
        0x8e1c2bebu, 0xf74fd04eu, 0xf0199b55u, 0xccecb4b0u, 0x99a2404fu, 0xf702b162u, 0x2cd10159u, 0xeb467ae4u, 0x443e08f3u, 0x4ae139b6u, 0x69a3659du, 0xa08caa58u, 0x120aa9d7u, 0xfca43d4au, 0x7d6b8c21u, 0x23f3370cu,
        0x57e386fbu, 0x8947d01eu, 0x24ee78e5u, 0xef135500u, 0x6148445fu, 0xa59f4632u, 0xf65f6fe9u, 0xb39f7834u, 0xa280c603u, 0x22293386u, 0x6b23f52du, 0xf25754a8u, 0x9b012fe7u, 0x42236c1au, 0x43d7ccb1u, 0xa73bde5cu,
        0x4c0de60bu, 0x19df03eeu, 0xca90fa75u, 0xbf034950u, 0x679f8c6fu, 0xc8544f02u, 0xb763c279u, 0x49cd0984u, 0x9b870713u, 0x9ff6e156u, 0xbb26a8bdu, 0x9f15d2f8u, 0x9cd179f7u, 0x92c98eeau, 0xf4767141u, 0xe6eb99acu,
        0xd76c491bu, 0x75b26bbeu, 0xd2fa2005u, 0xbc6191a0u, 0xe609187fu, 0xef0ecbd2u, 0x2ce6f909u, 0xdd442ed4u, 0x3641cc23u, 0x24874326u, 0x8ac4804du, 0x1b0d2548u, 0x7cfc8807u, 0x7c23a5bau, 0xed7079d1u, 0x011768fcu,
        0xdf0fb02bu, 0x049f078eu, 0x9262e995u, 0xe4132df0u, 0xf225e88fu, 0x58fbbca2u, 0x7a321399u, 0x4eb9e824u, 0xf9e21533u, 0x135758f6u, 0xb5567bddu, 0xffc24b98u, 0x05435a17u, 0x22feb08au, 0xbb2ee661u, 0xed144c4cu,
        0xd0491b3bu, 0x99c1d75eu, 0x4f445725u, 0x003d1e40u, 0x8dd6fc9fu, 0xc4882172u, 0xb8ce1229u, 0x80233574u, 0xfdd8e243u, 0xa32422c6u, 0x50759b6du, 0x5bfa45e8u, 0x73a6f027u, 0x1367af5au, 0xa85ab6f1u, 0xcb77439cu,
        0xb0a98a4bu, 0x4377db2eu, 0xd25768b5u, 0xf8446290u, 0xb73d54afu, 0x3f60fa42u, 0x8883f4b9u, 0xa4b516c4u, 0xf9d73353u, 0xadeaa096u, 0x3bfadefdu, 0x03ba1438u, 0x8a684a37u, 0x10aba22au, 0x4ddceb81u, 0x36154eecu,
        0x2e01fd5bu, 0x1b5e12feu, 0xf6951e45u, 0x20cdfae0u, 0x78b9f0bfu, 0xf6734712u, 0x9f5cbb49u, 0x90e48c14u, 0x55ce0863u, 0x80e7d266u, 0xb1ff468du, 0xe046b688u, 0xa0086847u, 0xe55788fau, 0x22de8411u, 0x90036e3cu,
        0xae63746bu, 0x16517eceu, 0x393677d5u, 0x8bbee730u, 0xf8edd0cfu, 0x05ec07e2u, 0x59a165d9u, 0x0a669564u, 0x39ee6173u, 0xac98b836u, 0xd6dbd21du, 0x40252cd8u, 0xaf484a57u, 0x333863cau, 0x0cc880a1u, 0x5596a18cu,
    };
    uint32_t acc = 0xfad4cc8cu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 72) & 255]);
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
    case 0: acc = heavy_round(acc, 0x85d9d153u); break;
    case 1: acc = heavy_round(acc, 0x4300a696u); break;
    case 2: acc = heavy_round(acc, 0x2a7d2cfdu); break;
    case 3: acc = heavy_round(acc, 0xa96c0a38u); break;
    case 4: acc = heavy_round(acc, 0xe275c837u); break;
    case 5: acc = heavy_round(acc, 0x378f082au); break;
    case 6: acc = heavy_round(acc, 0xd80d1981u); break;
    case 7: acc = heavy_round(acc, 0xeadba4ecu); break;
    case 8: acc = heavy_round(acc, 0xc8585b5bu); break;
    case 9: acc = heavy_round(acc, 0x8934d8feu); break;
    case 10: acc = heavy_round(acc, 0x73612c45u); break;
    case 11: acc = heavy_round(acc, 0x22beb0e0u); break;
    case 12: acc = heavy_round(acc, 0x40772ebfu); break;
    case 13: acc = heavy_round(acc, 0x8fc36d12u); break;
    case 14: acc = heavy_round(acc, 0x0d92a949u); break;
    case 15: acc = heavy_round(acc, 0xe475a214u); break;
    case 16: acc = heavy_round(acc, 0x88f02663u); break;
    case 17: acc = heavy_round(acc, 0x9f975866u); break;
    case 18: acc = heavy_round(acc, 0x464d148du); break;
    case 19: acc = heavy_round(acc, 0x864e2c88u); break;
    case 20: acc = heavy_round(acc, 0x8d6d6647u); break;
    case 21: acc = heavy_round(acc, 0xfeac6efau); break;
    case 22: acc = heavy_round(acc, 0xb5d23211u); break;
    case 23: acc = heavy_round(acc, 0x1bb7443cu); break;
    case 24: acc = heavy_round(acc, 0x53c9526bu); break;
    case 25: acc = heavy_round(acc, 0xc0f1c4ceu); break;
    case 26: acc = heavy_round(acc, 0x953e05d5u); break;
    case 27: acc = heavy_round(acc, 0x18b51d30u); break;
    case 28: acc = heavy_round(acc, 0x80f28ecfu); break;
    case 29: acc = heavy_round(acc, 0x5fddade2u); break;
    case 30: acc = heavy_round(acc, 0x690ad3d9u); break;
    case 31: acc = heavy_round(acc, 0x92952b64u); break;
    case 32: acc = heavy_round(acc, 0x5a0fff73u); break;
    case 33: acc = heavy_round(acc, 0x2141be36u); break;
    case 34: acc = heavy_round(acc, 0xb1d5201du); break;
    case 35: acc = heavy_round(acc, 0x51e222d8u); break;
    case 36: acc = heavy_round(acc, 0xe5e4c857u); break;
    case 37: acc = heavy_round(acc, 0xa15ec9cau); break;
    case 38: acc = heavy_round(acc, 0xe75faea1u); break;
    case 39: acc = heavy_round(acc, 0x2997f78cu); break;
    case 40: acc = heavy_round(acc, 0x12744d7bu); break;
    case 41: acc = heavy_round(acc, 0x1438e49eu); break;
    case 42: acc = heavy_round(acc, 0x41d78365u); break;
    case 43: acc = heavy_round(acc, 0x4797dd80u); break;
    case 44: acc = heavy_round(acc, 0x02e632dfu); break;
    case 45: acc = heavy_round(acc, 0x122b62b2u); break;
    case 46: acc = heavy_round(acc, 0x1557e269u); break;
    case 47: acc = heavy_round(acc, 0x725c48b4u); break;
    case 48: acc = heavy_round(acc, 0xe9aa5c83u); break;
    case 49: acc = heavy_round(acc, 0x03bcd806u); break;
    case 50: acc = heavy_round(acc, 0xc3ae4fadu); break;
    case 51: acc = heavy_round(acc, 0x67eced28u); break;
    case 52: acc = heavy_round(acc, 0x12dcee67u); break;
    case 53: acc = heavy_round(acc, 0x80b3189au); break;
    case 54: acc = heavy_round(acc, 0x885e8f31u); break;
    case 55: acc = heavy_round(acc, 0xd212bedcu); break;
    case 56: acc = heavy_round(acc, 0x02ea4c8bu); break;
    case 57: acc = heavy_round(acc, 0x3667386eu); break;
    case 58: acc = heavy_round(acc, 0xa2e6a4f5u); break;
    case 59: acc = heavy_round(acc, 0x83cbf1d0u); break;
    case 60: acc = heavy_round(acc, 0xcd731aefu); break;
    case 61: acc = heavy_round(acc, 0x29598b82u); break;
    case 62: acc = heavy_round(acc, 0xa342d4f9u); break;
    case 63: acc = heavy_round(acc, 0xf3fffa04u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

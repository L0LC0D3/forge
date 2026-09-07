#include "heavy.h"
#include "mods.h"

int mod_065(int x)
{
    static const uint32_t local[256] = {
        0x53687d94u, 0x5e3a4be3u, 0xa8cc3fe6u, 0x6db9d60du, 0xc16d0008u, 0x7dc323c7u, 0xde080e7au, 0x22864b91u, 0xe0858fbcu, 0xe3d827ebu, 0xd4439c4eu, 0x37c2f755u, 0xe72e60b0u, 0xe57ffc4fu, 0x862d3d62u, 0x11c21d59u,
        0x58ace6e4u, 0x2d7984f3u, 0xf24e85b6u, 0xe278419du, 0x0f03d658u, 0x759fe5d7u, 0x5d20494au, 0xfc802821u, 0x0a27230cu, 0xc48e82fbu, 0xca5e9c1eu, 0x745ed4e5u, 0xb8700100u, 0x5385005fu, 0x819cd232u, 0xd4078be9u,
        0xac50e434u, 0x808b4203u, 0xb2197f86u, 0xe49fd12du, 0xf34980a8u, 0x70d56be7u, 0x89d2781au, 0xd28368b1u, 0x821aca5cu, 0x4767e20bu, 0x53d8cfeeu, 0x2f885675u, 0x6a3af550u, 0x13fb486fu, 0x71e4db02u, 0x9782de79u,
        0xcc897584u, 0xde208313u, 0x452a2d56u, 0xfb0984bdu, 0xbd42fef8u, 0x70a4b5f7u, 0x5a6b9aeau, 0xd4790d41u, 0x8d3585acu, 0xc935451bu, 0x6d4f37beu, 0xcb387c05u, 0x2c343da0u, 0x5043d47fu, 0x16f257d2u, 0x893d1509u,
        0x98cb9ad4u, 0x3d2a4823u, 0x3bbd8f26u, 0xc6ce5c4du, 0x91355148u, 0xca8ec407u, 0x8c78b1bau, 0xd08a15d1u, 0xf98c54fcu, 0x1f07ac2bu, 0xae9ed38eu, 0x0ba84595u, 0xab40d9f0u, 0x0dffa48fu, 0xdff248a2u, 0x3c7f2f99u,
        0xa1cc5424u, 0x14d99133u, 0x2950a4f6u, 0x934757ddu, 0xb8a57798u, 0x38549617u, 0x74c6bc8au, 0xc31f8261u, 0x6e74384cu, 0xa630173bu, 0x1ae4a35eu, 0xa750b325u, 0x6185ca40u, 0x3f0fb89fu, 0xbb51ad72u, 0x3ad22e29u,
        0x7980a174u, 0x6c9f5e43u, 0x74a06ec6u, 0xe60d776du, 0xf25871e8u, 0xe7f72c27u, 0xcf62bb5au, 0x66e252f1u, 0xbc822f9cu, 0x543f864bu, 0xf07da72eu, 0xd6eac4b5u, 0xe6680e90u, 0xd19510afu, 0xe6bd8642u, 0x93ff10b9u,
        0x031d82c4u, 0xec2caf53u, 0x27a9ec96u, 0x0ef9bafdu, 0xc2534038u, 0x8bb78637u, 0x8f99ae2au, 0xc4bb8781u, 0x2d8b3aecu, 0xc706f95bu, 0x7906defeu, 0xe56f7a45u, 0x3e8ca6e0u, 0xbff0acbfu, 0xbf22d312u, 0x6e0ed749u,
        0xc317f814u, 0xeb728463u, 0xbfaa1e66u, 0xb825228du, 0xc1dae288u, 0x6a16a447u, 0xaff894fau, 0xc3d42011u, 0xd4a45a3cu, 0x5497706bu, 0xd95d4aceu, 0xc017d3d5u, 0x2bd89330u, 0x20c38ccfu, 0x90ae93e2u, 0x954a81d9u,
        0x2f250164u, 0x82a1dd73u, 0xfd1e0436u, 0x75e8ae1du, 0xef7458d8u, 0x6dd58657u, 0x024c6fcau, 0xb9951ca1u, 0xde228d8cu, 0x1b41eb7bu, 0xe19dea9eu, 0x865cd165u, 0x7d70d380u, 0x36eeb0dfu, 0x66cdc8b2u, 0x0c3b1069u,
        0xfe399eb4u, 0x9a2bba83u, 0xb3c29e06u, 0x56dd5dadu, 0xfee4a328u, 0x35f52c67u, 0xffa23e9au, 0xf9a77d31u, 0xdf9ad4dcu, 0x11976a8bu, 0xdd25be6eu, 0x19f772f5u, 0x5fba67d0u, 0x819318efu, 0xdc2d7182u, 0x9ba982f9u,
        0x788ad004u, 0xfac11b93u, 0x9a94ebd6u, 0x73dc313du, 0xa930c178u, 0x25b69677u, 0x9847016au, 0x65f441c1u, 0x27e2302cu, 0x1668ed9bu, 0x6291c63eu, 0xaee0b885u, 0xac5a5020u, 0xcc11c4ffu, 0xeaba8e52u, 0x629ed989u,
        0xc78d9554u, 0x5d5300a3u, 0x1bd1eda6u, 0x7ffe28cdu, 0xfc9db3c8u, 0x749ac487u, 0x03c7b83au, 0xfea46a51u, 0x0f0d9f7cu, 0x00c774abu, 0x23bf020eu, 0x5b51a215u, 0x3a358c70u, 0x3e0bb50fu, 0xbba21f22u, 0x66641419u,
        0x45f6eea4u, 0x7b1269b3u, 0x24f6a376u, 0x589c445du, 0xacb07a18u, 0x3e62b697u, 0x90f1630au, 0x7220f6e1u, 0x467222ccu, 0xb003ffbbu, 0xbdca71deu, 0xa7c32fa5u, 0x2d711cc0u, 0x6b61e91fu, 0x775123f2u, 0x228232a9u,
        0xcfbbdbf4u, 0x1d7056c3u, 0xf6c00d46u, 0x954f83edu, 0x622e1468u, 0x930f6ca7u, 0x75d101dau, 0xad12e771u, 0x28a4ba1cu, 0x1baf8ecbu, 0x891115aeu, 0x1eee6135u, 0x47720110u, 0x6435612fu, 0x15749cc2u, 0x18c23539u,
        0x12115d44u, 0x2e1dc7d3u, 0xf52b2b16u, 0x17f0e77du, 0x0b1b82b8u, 0x86e1e6b7u, 0x9fb394aau, 0x6a633c01u, 0x097a656cu, 0x639b21dbu, 0x692fed7eu, 0xddcc36c5u, 0x36dd3960u, 0xc4e71d3fu, 0x2cf98992u, 0x612d1bc9u,
    };
    uint32_t acc = 0xf9e992c9u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 65) & 255]);
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
    case 0: acc = heavy_round(acc, 0x3b95fb8eu); break;
    case 1: acc = heavy_round(acc, 0x96254d95u); break;
    case 2: acc = heavy_round(acc, 0x4cca41f0u); break;
    case 3: acc = heavy_round(acc, 0x2969ec8fu); break;
    case 4: acc = heavy_round(acc, 0xa507f0a2u); break;
    case 5: acc = heavy_round(acc, 0x4788b799u); break;
    case 6: acc = heavy_round(acc, 0x45783c24u); break;
    case 7: acc = heavy_round(acc, 0x8b045933u); break;
    case 8: acc = heavy_round(acc, 0xbd2cccf6u); break;
    case 9: acc = heavy_round(acc, 0xb5655fddu); break;
    case 10: acc = heavy_round(acc, 0x335bdf98u); break;
    case 11: acc = heavy_round(acc, 0x4907de17u); break;
    case 12: acc = heavy_round(acc, 0xc491648au); break;
    case 13: acc = heavy_round(acc, 0xf75a0a61u); break;
    case 14: acc = heavy_round(acc, 0xaf9d204cu); break;
    case 15: acc = heavy_round(acc, 0xe9b3df3bu); break;
    case 16: acc = heavy_round(acc, 0x9245cb5eu); break;
    case 17: acc = heavy_round(acc, 0x552fbb25u); break;
    case 18: acc = heavy_round(acc, 0xdb093240u); break;
    case 19: acc = heavy_round(acc, 0xee2c009fu); break;
    case 20: acc = heavy_round(acc, 0xec715572u); break;
    case 21: acc = heavy_round(acc, 0xbe5db629u); break;
    case 22: acc = heavy_round(acc, 0x07c68974u); break;
    case 23: acc = heavy_round(acc, 0x289c2643u); break;
    case 24: acc = heavy_round(acc, 0x402696c6u); break;
    case 25: acc = heavy_round(acc, 0x97cd7f6du); break;
    case 26: acc = heavy_round(acc, 0x4448d9e8u); break;
    case 27: acc = heavy_round(acc, 0x029c7427u); break;
    case 28: acc = heavy_round(acc, 0x0c77635au); break;
    case 29: acc = heavy_round(acc, 0x23dedaf1u); break;
    case 30: acc = heavy_round(acc, 0x3b85179cu); break;
    case 31: acc = heavy_round(acc, 0x97d54e4bu); break;
    case 32: acc = heavy_round(acc, 0x94c8cf2eu); break;
    case 33: acc = heavy_round(acc, 0x08abccb5u); break;
    case 34: acc = heavy_round(acc, 0x1e657690u); break;
    case 35: acc = heavy_round(acc, 0xc8e358afu); break;
    case 36: acc = heavy_round(acc, 0xae672e42u); break;
    case 37: acc = heavy_round(acc, 0xb88c98b9u); break;
    case 38: acc = heavy_round(acc, 0x8a7d6ac4u); break;
    case 39: acc = heavy_round(acc, 0xaa7b7753u); break;
    case 40: acc = heavy_round(acc, 0xbd5a1496u); break;
    case 41: acc = heavy_round(acc, 0xc0dbc2fdu); break;
    case 42: acc = heavy_round(acc, 0xa1fda838u); break;
    case 43: acc = heavy_round(acc, 0xf4cece37u); break;
    case 44: acc = heavy_round(acc, 0x3478562au); break;
    case 45: acc = heavy_round(acc, 0x42fa0f81u); break;
    case 46: acc = heavy_round(acc, 0xc8e822ecu); break;
    case 47: acc = heavy_round(acc, 0x572ec15bu); break;
    case 48: acc = heavy_round(acc, 0x2cbc06feu); break;
    case 49: acc = heavy_round(acc, 0x1b928245u); break;
    case 50: acc = heavy_round(acc, 0xbb840ee0u); break;
    case 51: acc = heavy_round(acc, 0xd3f0f4bfu); break;
    case 52: acc = heavy_round(acc, 0xe7d67b12u); break;
    case 53: acc = heavy_round(acc, 0x7c1e5f49u); break;
    case 54: acc = heavy_round(acc, 0xf211e014u); break;
    case 55: acc = heavy_round(acc, 0x88934c63u); break;
    case 56: acc = heavy_round(acc, 0x52044666u); break;
    case 57: acc = heavy_round(acc, 0xfaa92a8du); break;
    case 58: acc = heavy_round(acc, 0x85bf4a88u); break;
    case 59: acc = heavy_round(acc, 0x861fec47u); break;
    case 60: acc = heavy_round(acc, 0xd7213cfau); break;
    case 61: acc = heavy_round(acc, 0x5bd4a811u); break;
    case 62: acc = heavy_round(acc, 0x0adb423cu); break;
    case 63: acc = heavy_round(acc, 0x9dd1386bu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_091(int x)
{
    static const uint32_t local[256] = {
        0x8997f262u, 0x6f4b4e59u, 0x8b2a63e4u, 0xf2a6ddf3u, 0xb8120ab6u, 0xd164029du, 0xf8e2a358u, 0x209e4ed7u, 0xaae19e4au, 0x442f7921u, 0x7154400cu, 0xd066fbfbu, 0x7592c11eu, 0x89c2b5e5u, 0x93286e00u, 0x8f50895fu,
        0x0488c732u, 0x6aa0fce9u, 0x7e21a134u, 0xc872db03u, 0x90d24486u, 0x0f7fd22du, 0x7a0f8da8u, 0x771214e7u, 0x873d0d1au, 0xb54af9b1u, 0xb303275cu, 0x6d429b0bu, 0x76aa34eeu, 0x3f687775u, 0xbec2a250u, 0x52cd116fu,
        0xd9a21002u, 0x6c3c8f79u, 0xdf7d7284u, 0xc0525c13u, 0xcf283256u, 0xafedc5bdu, 0x37c04bf8u, 0x1aaf9ef7u, 0x16cf6feau, 0xf968de41u, 0x63a922acu, 0x12a23e1bu, 0xe40ddcbeu, 0xe5a4dd05u, 0x2b5b2aa0u, 0xecabdd7fu,
        0x5cd0ccd2u, 0x25270609u, 0x42b2d7d4u, 0xf5366123u, 0xd750d426u, 0x17c6dd4du, 0x4a39de48u, 0xc4f7ed07u, 0x2b25c6bau, 0xe2b226d1u, 0x855b31fcu, 0x3996e52bu, 0xa99ab88eu, 0x84b0e695u, 0xf9d706f0u, 0x468ded8fu,
        0x9141fda2u, 0xaca96099u, 0xec76d124u, 0x024fea33u, 0x10c929f6u, 0x566418ddu, 0xef014498u, 0x93abff17u, 0x2d0d118au, 0x718fd361u, 0xf36e554cu, 0xe371903bu, 0x1e6dc85eu, 0x17059425u, 0x185b3740u, 0x3654419fu,
        0xf962a272u, 0x104c9f29u, 0x22be5e74u, 0x130ff743u, 0xb64e33c6u, 0xb55e786du, 0xd8db7ee8u, 0x18ccd527u, 0xec92505au, 0x64aae3f1u, 0xb2778c9cu, 0xa9c33f4bu, 0xd4e40c2eu, 0x195be5b5u, 0x924cbb90u, 0x8e1fd9afu,
        0x66dfbb42u, 0xe3d9c1b9u, 0x7cbe7fc4u, 0xf3278853u, 0xa5dcf196u, 0x488efbfdu, 0x7fcd8d38u, 0x6a9b6f37u, 0x7102832au, 0xc8ec5881u, 0x404bd7ecu, 0xce5cf25bu, 0x6a9a83feu, 0x1aacdb45u, 0xe05093e0u, 0x2c51b5bfu,
        0xcaa64812u, 0xd159c849u, 0x32ec3514u, 0x1e879d63u, 0x30b26366u, 0x7e0ea38du, 0x711c6f88u, 0x3398cd47u, 0xc8eaa9fau, 0x897d3111u, 0xe400373cu, 0x4b4fa96bu, 0x586e2fceu, 0x4c3174d5u, 0x384bc030u, 0x0b8ad5cfu,
        0x04e348e2u, 0x2915b2d9u, 0x6efc7e64u, 0xd1613673u, 0xeb4b8936u, 0xae366f1du, 0x9f4d25d8u, 0xc285ef57u, 0xda17c4cau, 0xffc66da1u, 0xfde9aa8cu, 0xe2ec647bu, 0xc27c0f9eu, 0x1162b265u, 0xdd634080u, 0x52ac39dfu,
        0xb503bdb2u, 0x71968169u, 0x9be45bb4u, 0x18255383u, 0x7d656306u, 0xab9f5eadu, 0xb224b028u, 0x1a63d567u, 0x3196d39au, 0x83710e31u, 0x579d31dcu, 0x2fc4238bu, 0x4821236eu, 0x8ff993f5u, 0x6ffc14d0u, 0x64d6e1efu,
        0x09b4a682u, 0xf7a533f9u, 0xb5d8cd04u, 0xdf84f493u, 0x71fcf0d6u, 0x5322723du, 0x56a80e78u, 0x02737f77u, 0xd3b4d66au, 0xfa6612c1u, 0x73efcd2cu, 0xb4a7e69bu, 0xd3fa6b3eu, 0x3fef1985u, 0x3dbb3d20u, 0xf16bcdffu,
        0x90e30352u, 0x5e4aca89u, 0x9a4ed254u, 0x047119a3u, 0x074f32a6u, 0x1bd8a9cdu, 0x8f1c40c8u, 0x1635ed87u, 0x0bfecd3au, 0x68ce7b51u, 0xdef67c7cu, 0xeca8adabu, 0x6be4e70eu, 0x7b7c4315u, 0x9185b970u, 0x040bfe0fu,
        0x07bbd422u, 0x2ed04519u, 0x57fb6ba4u, 0x641ac2b3u, 0xfed92876u, 0xa71b055du, 0x03064718u, 0xd56c1f97u, 0x3d41b80au, 0x811347e1u, 0x7e063fccu, 0x5b1778bbu, 0x00fd96deu, 0x0f1a10a5u, 0x038089c0u, 0x1498721fu,
        0x2aac18f2u, 0x68bea3a9u, 0x7ed398f4u, 0xebf2efc3u, 0x6d57d246u, 0x508284edu, 0x4f2b2168u, 0xb41715a7u, 0xb18a96dau, 0x33dd7871u, 0xdfb4171cu, 0x9b8547cbu, 0x3fa17aaeu, 0xc9818235u, 0xc910ae10u, 0x17322a2fu,
        0x8560d1c2u, 0x11dee639u, 0x700c5a44u, 0xa9aaa0d3u, 0x8ac83016u, 0xbde8287du, 0x558fcfb8u, 0x2a77cfb7u, 0x6a2669aau, 0x40160d01u, 0x8bd5026cu, 0x71c31adbu, 0x5f6d927eu, 0x0bab97c5u, 0x04db2660u, 0x8c3a263fu,
        0x42c6fe92u, 0xc63a0cc9u, 0xae1aaf94u, 0xdb32d5e3u, 0x826741e6u, 0x6f64f00du, 0x8d795208u, 0xc50f4dc7u, 0xefa2307au, 0xc2e60591u, 0x537e01bcu, 0xd9e1f1ebu, 0xf33ede4eu, 0x58d15155u, 0x16c4f2b0u, 0x9051664fu,
    };
    uint32_t acc = 0x94d5454fu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 91) & 255]);
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
    case 0: acc = heavy_round(acc, 0x233a74bcu); break;
    case 1: acc = heavy_round(acc, 0xb745c8ebu); break;
    case 2: acc = heavy_round(acc, 0xf7fac94eu); break;
    case 3: acc = heavy_round(acc, 0x68fe4055u); break;
    case 4: acc = heavy_round(acc, 0x274715b0u); break;
    case 5: acc = heavy_round(acc, 0xabdf2d4fu); break;
    case 6: acc = heavy_round(acc, 0x4f88ba62u); break;
    case 7: acc = heavy_round(acc, 0xf4357659u); break;
    case 8: acc = heavy_round(acc, 0x7efe6be4u); break;
    case 9: acc = heavy_round(acc, 0x979b45f3u); break;
    case 10: acc = heavy_round(acc, 0xa1eb52b6u); break;
    case 11: acc = heavy_round(acc, 0x4c1caa9du); break;
    case 12: acc = heavy_round(acc, 0x2f332b58u); break;
    case 13: acc = heavy_round(acc, 0x40e536d7u); break;
    case 14: acc = heavy_round(acc, 0x36eb664au); break;
    case 15: acc = heavy_round(acc, 0xce5ea121u); break;
    case 16: acc = heavy_round(acc, 0x27a9480cu); break;
    case 17: acc = heavy_round(acc, 0xbbe863fbu); break;
    case 18: acc = heavy_round(acc, 0x2295091eu); break;
    case 19: acc = heavy_round(acc, 0x43905de5u); break;
    case 20: acc = heavy_round(acc, 0x5b89f600u); break;
    case 21: acc = heavy_round(acc, 0xe074715fu); break;
    case 22: acc = heavy_round(acc, 0x19cb8f32u); break;
    case 23: acc = heavy_round(acc, 0xa2b524e9u); break;
    case 24: acc = heavy_round(acc, 0x4717a934u); break;
    case 25: acc = heavy_round(acc, 0xcc214303u); break;
    case 26: acc = heavy_round(acc, 0x661d8c86u); break;
    case 27: acc = heavy_round(acc, 0xeb027a2du); break;
    case 28: acc = heavy_round(acc, 0x16a215a8u); break;
    case 29: acc = heavy_round(acc, 0x14b2fce7u); break;
    case 30: acc = heavy_round(acc, 0x4cd8d51au); break;
    case 31: acc = heavy_round(acc, 0x57e421b1u); break;
    case 32: acc = heavy_round(acc, 0xe2ba2f5cu); break;
    case 33: acc = heavy_round(acc, 0x8ebe030bu); break;
    case 34: acc = heavy_round(acc, 0x7d5e7ceeu); break;
    case 35: acc = heavy_round(acc, 0x73401f75u); break;
    case 36: acc = heavy_round(acc, 0xb5a62a50u); break;
    case 37: acc = heavy_round(acc, 0xcc8af96fu); break;
    case 38: acc = heavy_round(acc, 0x5ab6d802u); break;
    case 39: acc = heavy_round(acc, 0xc9fab779u); break;
    case 40: acc = heavy_round(acc, 0x4e157a84u); break;
    case 41: acc = heavy_round(acc, 0xb93ac413u); break;
    case 42: acc = heavy_round(acc, 0x34657a56u); break;
    case 43: acc = heavy_round(acc, 0x46ba6dbdu); break;
    case 44: acc = heavy_round(acc, 0xd314d3f8u); break;
    case 45: acc = heavy_round(acc, 0xf42a86f7u); break;
    case 46: acc = heavy_round(acc, 0xc27d37eau); break;
    case 47: acc = heavy_round(acc, 0x76ec0641u); break;
    case 48: acc = heavy_round(acc, 0xed422aacu); break;
    case 49: acc = heavy_round(acc, 0xd097a61bu); break;
    case 50: acc = heavy_round(acc, 0x78f424beu); break;
    case 51: acc = heavy_round(acc, 0x3e068505u); break;
    case 52: acc = heavy_round(acc, 0xf940b2a0u); break;
    case 53: acc = heavy_round(acc, 0x1d83c57fu); break;
    case 54: acc = heavy_round(acc, 0x863794d2u); break;
    case 55: acc = heavy_round(acc, 0xbb0f2e09u); break;
    case 56: acc = heavy_round(acc, 0x476cdfd4u); break;
    case 57: acc = heavy_round(acc, 0x19d8c923u); break;
    case 58: acc = heavy_round(acc, 0x91001c26u); break;
    case 59: acc = heavy_round(acc, 0x645d854du); break;
    case 60: acc = heavy_round(acc, 0x9cd06648u); break;
    case 61: acc = heavy_round(acc, 0x38ccd507u); break;
    case 62: acc = heavy_round(acc, 0x89658ebau); break;
    case 63: acc = heavy_round(acc, 0x9d9f4ed1u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

#include "heavy.h"
#include "mods.h"

int mod_098(int x)
{
    static const uint32_t local[256] = {
        0x72180e59u, 0x041023e4u, 0x60d19df3u, 0x18bdcab6u, 0xe89cc29du, 0x83446358u, 0xda150ed7u, 0x26695e4au, 0x60943921u, 0xc6f2000cu, 0xc3e9bbfbu, 0xabb6811eu, 0x481375e5u, 0x29c22e00u, 0x379f495fu, 0xb1088732u,
        0xd39dbce9u, 0x47776134u, 0xec4d9b03u, 0x4b6e0486u, 0x57e8922du, 0xa3e14da8u, 0xe938d4e7u, 0x83b4cd1au, 0xfddfb9b1u, 0x6710e75cu, 0xcc755b0bu, 0x44bdf4eeu, 0x54e93775u, 0xe2cc6250u, 0xc9cbd16fu, 0x2511d002u,
        0x87694f79u, 0xd5433284u, 0xc5dd1c13u, 0x1fb3f256u, 0x358685bdu, 0x9d020bf8u, 0x31865ef7u, 0x90372feau, 0x3a2d9e41u, 0xd226e2acu, 0x8984fe1bu, 0x06119cbeu, 0xde559d05u, 0xf8d4eaa0u, 0x9e5a9d7fu, 0xc3308cd2u,
        0x3e83c609u, 0x40e897d4u, 0x08712123u, 0xf9cc9426u, 0xe68f9d4du, 0x86eb9e48u, 0x6c7ead07u, 0x1d7d86bau, 0xe7a6e6d1u, 0x0a48f1fcu, 0x7429a52bu, 0xdb8e788eu, 0xec91a695u, 0x8cc0c6f0u, 0x9eecad8fu, 0x8e91bda2u,
        0x10362099u, 0xcf1c9124u, 0x4f3aaa33u, 0x4134e9f6u, 0x7a5cd8ddu, 0x9f230498u, 0xb7e2bf17u, 0x9454d18au, 0x06b49361u, 0xeacc154cu, 0x8db4503bu, 0x1c51885eu, 0x7a165425u, 0x8cb4f740u, 0xa163019fu, 0x09a26272u,
        0x0a095f29u, 0xc5d41e74u, 0xc5aab743u, 0x30a9f3c6u, 0x3a87386du, 0x986d3ee8u, 0xa5b39527u, 0xc4ca105au, 0x55ffa3f1u, 0x78454c9cu, 0x6fb5ff4bu, 0x5ab7cc2eu, 0x039ca5b5u, 0x04167b90u, 0x77de99afu, 0x060f7b42u,
        0xbfc681b9u, 0xbc443fc4u, 0x37724853u, 0xa628b196u, 0x3ae7bbfdu, 0xeacf4d38u, 0x4c322f37u, 0xb62a432au, 0xe2711881u, 0x308997ecu, 0x5bffb25bu, 0x345e43feu, 0x181d9b45u, 0x6b8a53e0u, 0x00c075bfu, 0x74c60812u,
        0xdb768849u, 0xeae1f514u, 0x20825d63u, 0xf2ee2366u, 0xe997638du, 0x238e2f88u, 0x55df8d47u, 0x770269fau, 0x9731f111u, 0x5aadf73cu, 0x4ca2696bu, 0x2221efceu, 0xe8d234d5u, 0xf8f58030u, 0x36a995cfu, 0x35f308e2u,
        0xad6272d9u, 0x7b623e64u, 0xbd0bf673u, 0xab774936u, 0x9eef2f1du, 0x352ee5d8u, 0x117caf57u, 0xed1f84cau, 0xcdab2da1u, 0x57076a8cu, 0x03ef247bu, 0x481fcf9eu, 0xd9337265u, 0xef7d0080u, 0x407af9dfu, 0xe9037db2u,
        0xbc134169u, 0xd8ba1bb4u, 0x19801383u, 0x77812306u, 0x2d881eadu, 0xc7767028u, 0x820a9567u, 0xa58e939au, 0xdd85ce31u, 0xef2af1dcu, 0x1c76e38bu, 0x45b4e36eu, 0x0efa53f5u, 0xef85d4d0u, 0x8155a1efu, 0xbca46682u,
        0x5451f3f9u, 0xff1e8d04u, 0x228fb493u, 0xe208b0d6u, 0x723b323du, 0x8769ce78u, 0x6eca3f77u, 0xa49c966au, 0xacaad2c1u, 0xa5ed8d2cu, 0x190aa69bu, 0x057e2b3eu, 0x021fd985u, 0x46b4fd20u, 0xa89a8dffu, 0x3ec2c352u,
        0x19278a89u, 0xcc049254u, 0xb52bd9a3u, 0x294af2a6u, 0xe42169cdu, 0x774e00c8u, 0x733cad87u, 0x35d68d3au, 0x3f433b51u, 0x07643c7cu, 0x74bb6dabu, 0x8d58a70eu, 0x0cdd0315u, 0x3fef7970u, 0xc1eabe0fu, 0x2c8b9422u,
        0x93dd0519u, 0x4e212ba4u, 0xae8582b3u, 0x0ec4e876u, 0x2493c55du, 0x3ea80718u, 0x0f22df97u, 0xbc09780au, 0x47b807e1u, 0xf8e3ffccu, 0xb2da38bbu, 0xce6156deu, 0xfbaad0a5u, 0x735a49c0u, 0x4527321fu, 0x426bd8f2u,
        0xc3fb63a9u, 0x156958f4u, 0xfc0dafc3u, 0xa7339246u, 0x8f2b44edu, 0x7a3ce168u, 0xb67dd5a7u, 0x814256dau, 0xb6b23871u, 0x0901d71cu, 0x6ef807cbu, 0x74f53aaeu, 0x9d424235u, 0x165a6e10u, 0x2670ea2fu, 0x0c1091c2u,
        0xaf4ba639u, 0x83121a44u, 0xab7560d3u, 0x2a93f016u, 0xc9c0e87du, 0x0c118fb8u, 0xe18e8fb7u, 0x86ce29aau, 0x4b1acd01u, 0xbf92c26cu, 0x6ce5dadbu, 0xb8b1527eu, 0x529c57c5u, 0x4b94e660u, 0xe628e63fu, 0xb466be92u,
        0xf1d6ccc9u, 0x19906f94u, 0xfaad95e3u, 0xc42301e6u, 0x546db00du, 0x6b6b1208u, 0x1cd60dc7u, 0x5539f07au, 0x221ac591u, 0xedabc1bcu, 0xa8b4b1ebu, 0x2c729e4eu, 0x9ef21155u, 0x72eeb2b0u, 0xa0f0264fu, 0xd59b5f62u,
    };
    uint32_t acc = 0x1327b262u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 98) & 255]);
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
    case 0: acc = heavy_round(acc, 0x3cf722a1u); break;
    case 1: acc = heavy_round(acc, 0x2e80db8cu); break;
    case 2: acc = heavy_round(acc, 0x611fe17bu); break;
    case 3: acc = heavy_round(acc, 0xe3e7689eu); break;
    case 4: acc = heavy_round(acc, 0x3a4c3765u); break;
    case 5: acc = heavy_round(acc, 0xf93d0180u); break;
    case 6: acc = heavy_round(acc, 0x58a106dfu); break;
    case 7: acc = heavy_round(acc, 0x912026b2u); break;
    case 8: acc = heavy_round(acc, 0x31ddd669u); break;
    case 9: acc = heavy_round(acc, 0x1861acb4u); break;
    case 10: acc = heavy_round(acc, 0x41c87083u); break;
    case 11: acc = heavy_round(acc, 0x6d3bdc06u); break;
    case 12: acc = heavy_round(acc, 0x1eb983adu); break;
    case 13: acc = heavy_round(acc, 0x92369128u); break;
    case 14: acc = heavy_round(acc, 0x93f24267u); break;
    case 15: acc = heavy_round(acc, 0xc2405c9au); break;
    case 16: acc = heavy_round(acc, 0xc9a30331u); break;
    case 17: acc = heavy_round(acc, 0xbcc4a2dcu); break;
    case 18: acc = heavy_round(acc, 0x12cae08bu); break;
    case 19: acc = heavy_round(acc, 0xf3c6bc6eu); break;
    case 20: acc = heavy_round(acc, 0x335858f5u); break;
    case 21: acc = heavy_round(acc, 0xbb4a15d0u); break;
    case 22: acc = heavy_round(acc, 0x6532eeefu); break;
    case 23: acc = heavy_round(acc, 0x008f4f82u); break;
    case 24: acc = heavy_round(acc, 0x2115c8f9u); break;
    case 25: acc = heavy_round(acc, 0x38ee5e04u); break;
    case 26: acc = heavy_round(acc, 0x48635193u); break;
    case 27: acc = heavy_round(acc, 0x7355a9d6u); break;
    case 28: acc = heavy_round(acc, 0xcf59d73du); break;
    case 29: acc = heavy_round(acc, 0x94b62f78u); break;
    case 30: acc = heavy_round(acc, 0x03512c77u); break;
    case 31: acc = heavy_round(acc, 0x16e49f6au); break;
    case 32: acc = heavy_round(acc, 0x0ee947c1u); break;
    case 33: acc = heavy_round(acc, 0xf2b77e2cu); break;
    case 34: acc = heavy_round(acc, 0xfe51e39bu); break;
    case 35: acc = heavy_round(acc, 0x016a443eu); break;
    case 36: acc = heavy_round(acc, 0x50131e85u); break;
    case 37: acc = heavy_round(acc, 0xe68d7e20u); break;
    case 38: acc = heavy_round(acc, 0xa2ff1affu); break;
    case 39: acc = heavy_round(acc, 0xcb0bec52u); break;
    case 40: acc = heavy_round(acc, 0x60349f89u); break;
    case 41: acc = heavy_round(acc, 0xab0ca354u); break;
    case 42: acc = heavy_round(acc, 0xe85ab6a3u); break;
    case 43: acc = heavy_round(acc, 0x03ba2ba6u); break;
    case 44: acc = heavy_round(acc, 0xdd7d4ecdu); break;
    case 45: acc = heavy_round(acc, 0x1b36a1c8u); break;
    case 46: acc = heavy_round(acc, 0x2f32da87u); break;
    case 47: acc = heavy_round(acc, 0x3c44d63au); break;
    case 48: acc = heavy_round(acc, 0xa4f2f051u); break;
    case 49: acc = heavy_round(acc, 0xe06e6d7cu); break;
    case 50: acc = heavy_round(acc, 0x52c5eaabu); break;
    case 51: acc = heavy_round(acc, 0x36af000eu); break;
    case 52: acc = heavy_round(acc, 0xbeb58815u); break;
    case 53: acc = heavy_round(acc, 0x89ec3a70u); break;
    case 54: acc = heavy_round(acc, 0x11a68b0fu); break;
    case 55: acc = heavy_round(acc, 0x11c2fd22u); break;
    case 56: acc = heavy_round(acc, 0x8c835a19u); break;
    case 57: acc = heavy_round(acc, 0x81717ca4u); break;
    case 58: acc = heavy_round(acc, 0x32df9fb3u); break;
    case 59: acc = heavy_round(acc, 0x83e66176u); break;
    case 60: acc = heavy_round(acc, 0x3e7cea5du); break;
    case 61: acc = heavy_round(acc, 0x113ce818u); break;
    case 62: acc = heavy_round(acc, 0x0b584c97u); break;
    case 63: acc = heavy_round(acc, 0x792e010au); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

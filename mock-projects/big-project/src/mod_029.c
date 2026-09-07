#include "heavy.h"
#include "mods.h"

int mod_029(int x)
{
    static const uint32_t local[256] = {
        0x1f55edc8u, 0x4911b687u, 0xd43e023au, 0xf0222c51u, 0x5fbc797cu, 0x0e8486abu, 0xed84ec0eu, 0x4f9a8415u, 0xbdf50670u, 0x2360e70fu, 0x34e1a922u, 0x599a1619u, 0x568108a4u, 0xe271bbb3u, 0x6179cd76u, 0xc801665du,
        0xf25f3418u, 0x905e2897u, 0x0c222d0au, 0xde1738e1u, 0x523f7cccu, 0xe54d91bbu, 0x04b2dbdeu, 0x35cc91a5u, 0xb2f716c0u, 0xfecb9b1fu, 0x729b2df2u, 0x5f40b4a9u, 0x7f3475f4u, 0x1dec28c3u, 0xd4b5b746u, 0x568525edu,
        0x62734e68u, 0xd5af5ea7u, 0x345c4bdau, 0x13a1a971u, 0x3130941cu, 0x8da5a0cbu, 0x1fbbffaeu, 0xb8d84335u, 0x5a5e7b10u, 0x7cd3932fu, 0x3f6926c2u, 0x23293739u, 0xd6187744u, 0x80d619d3u, 0x9b335516u, 0xe117097du,
        0xc5973cb8u, 0x754658b7u, 0xe2395eaau, 0xd3aa7e01u, 0x3864bf6cu, 0xef5db3dbu, 0x4a3d577eu, 0xfdb698c5u, 0xcad03360u, 0x81d9cf3fu, 0xda389392u, 0x455c9dc9u, 0x11a20c94u, 0xed208ee3u, 0x342fa6e6u, 0x2bd0110du,
        0x070fff08u, 0xdfa416c7u, 0x3246657au, 0xbf5ab691u, 0xecf0febcu, 0x2a86caebu, 0xeb13e34eu, 0x4ba09255u, 0x58313fb0u, 0x8e7f4f4fu, 0xf1367462u, 0x8c23e859u, 0x598635e4u, 0x84fc87f3u, 0xe227acb6u, 0x65093c9du,
        0xf7629558u, 0xa98998d7u, 0x9850604au, 0x661b5321u, 0x6d2a520cu, 0xa771e5fbu, 0x945ca31eu, 0x9c0f2fe5u, 0xe3a6a000u, 0xcfa5135fu, 0x71cfc932u, 0x740816e9u, 0x96b9f334u, 0xbadb0503u, 0x7ad86686u, 0xb55b8c2du,
        0x9c53ffa8u, 0x9bf7dee7u, 0xaf644f1au, 0xd59553b1u, 0xc0a5b95cu, 0x26b0050bu, 0xd37496eeu, 0x2abb7175u, 0x2b955450u, 0x2e6c1b6fu, 0x58b19202u, 0xbfd22979u, 0xc3724484u, 0x616d0613u, 0x373ed456u, 0xcf9fffbdu,
        0x80e93df8u, 0xc42fe8f7u, 0x09cf31eau, 0x29b1b841u, 0x283834acu, 0xd112281bu, 0x00f8bebeu, 0x059e5705u, 0x1ba25ca0u, 0x6035677fu, 0x81c8ced2u, 0x088b2009u, 0x3b2429d4u, 0xbba38b23u, 0x8397f626u, 0x80ef974du,
        0x05675048u, 0x83b2b707u, 0x011e08bau, 0x1c9980d1u, 0x6df6c3fcu, 0x47a94f2bu, 0x10c61a8eu, 0x9cf0e095u, 0x1cb2b8f0u, 0xf6a1f78fu, 0x78427fa2u, 0x4d7bfa99u, 0x0a84a324u, 0x8caf9433u, 0xcf60cbf6u, 0x40a352ddu,
        0xaf533698u, 0xa0414917u, 0x861dd38au, 0x96b5ad61u, 0x3536674cu, 0xb3c67a3bu, 0x61f9aa5eu, 0x532c0e25u, 0x64eb6940u, 0x6f92cb9fu, 0x468ba472u, 0x842db929u, 0x3f88b074u, 0x28022143u, 0x5d5655c6u, 0xc054326du,
        0x7971f0e8u, 0x53dc9f27u, 0xf0db925au, 0x3eaf3df1u, 0x4a8c1e9cu, 0xd6faa94bu, 0x8ef06e2eu, 0x0d08dfb5u, 0x47b16d90u, 0x4528e3afu, 0x46513d42u, 0x28695bb9u, 0x396551c4u, 0x814c3253u, 0x13759396u, 0x7bdb35fdu,
        0x23c87f38u, 0x5cc5b937u, 0xd0a4452au, 0x096f3281u, 0xf3cce9ecu, 0x1b16dc5bu, 0x3d4765feu, 0xc1805545u, 0x85a9c5e0u, 0xfdc53fbfu, 0xf0804a12u, 0xcc37e249u, 0xf88f8714u, 0x3c7ec763u, 0x4afb8566u, 0x49515d8du,
        0x839be188u, 0x0d7d9747u, 0xbc04ebfau, 0xca1e8b11u, 0x400dc93cu, 0xa22c136bu, 0xeddb91ceu, 0x09cb6ed5u, 0x9cb97230u, 0x3c08dfcfu, 0xad45cae2u, 0xa7e24cd9u, 0x6ebc5064u, 0xbdcae073u, 0xa0652b36u, 0xe90fa91du,
        0xd37117d8u, 0x5cc53957u, 0x20ca86cau, 0xc22647a1u, 0x57a3bc8cu, 0x568b4e7bu, 0xccc9f19eu, 0xb1632c65u, 0x18057280u, 0xced4c3dfu, 0xa40ebfb2u, 0x29f19b69u, 0xcee0adb4u, 0x39a17d83u, 0xc36f8506u, 0x95af18adu,
        0x030d2228u, 0xf59d9f67u, 0x1402159au, 0x312f6831u, 0xcc23c3dcu, 0xfac58d8bu, 0x816f856eu, 0x46008df5u, 0xdff2c6d0u, 0xc149ebefu, 0x8b882882u, 0x872ecdf9u, 0xdd319f04u, 0xc4b39e93u, 0x471792d6u, 0x9408ac3du,
        0x07750078u, 0x4747c977u, 0x21f8986au, 0xe522ecc1u, 0xe862df2cu, 0x39abd09bu, 0xfe694d3eu, 0xa79c9385u, 0x8a266f20u, 0x6ac957ffu, 0x799f0552u, 0x4aa2e489u, 0x3f242454u, 0x63f243a3u, 0x719a54a6u, 0xc33563cdu,
    };
    uint32_t acc = 0x4bb2cacdu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 29) & 255]);
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
    case 0: acc = heavy_round(acc, 0x3b1bf0eau); break;
    case 1: acc = heavy_round(acc, 0xe5b16b41u); break;
    case 2: acc = heavy_round(acc, 0x10864bacu); break;
    case 3: acc = heavy_round(acc, 0xf933531bu); break;
    case 4: acc = heavy_round(acc, 0x74c9edbeu); break;
    case 5: acc = heavy_round(acc, 0xd6f7ba05u); break;
    case 6: acc = heavy_round(acc, 0x059e63a0u); break;
    case 7: acc = heavy_round(acc, 0x5bcbc27fu); break;
    case 8: acc = heavy_round(acc, 0x13ad6dd2u); break;
    case 9: acc = heavy_round(acc, 0x0f813309u); break;
    case 10: acc = heavy_round(acc, 0x7c3520d4u); break;
    case 11: acc = heavy_round(acc, 0xeaea1623u); break;
    case 12: acc = heavy_round(acc, 0x988f0526u); break;
    case 13: acc = heavy_round(acc, 0x78755a4du); break;
    case 14: acc = heavy_round(acc, 0xede43748u); break;
    case 15: acc = heavy_round(acc, 0xa5147207u); break;
    case 16: acc = heavy_round(acc, 0xe69687bau); break;
    case 17: acc = heavy_round(acc, 0x2d51f3d1u); break;
    case 18: acc = heavy_round(acc, 0x00269afcu); break;
    case 19: acc = heavy_round(acc, 0xc2c13a2bu); break;
    case 20: acc = heavy_round(acc, 0xcb9f098eu); break;
    case 21: acc = heavy_round(acc, 0xe02f0395u); break;
    case 22: acc = heavy_round(acc, 0xb3cc7ff0u); break;
    case 23: acc = heavy_round(acc, 0x573b128fu); break;
    case 24: acc = heavy_round(acc, 0x03cadea2u); break;
    case 25: acc = heavy_round(acc, 0x0042cd99u); break;
    case 26: acc = heavy_round(acc, 0xf1af5a24u); break;
    case 27: acc = heavy_round(acc, 0x2dc4df33u); break;
    case 28: acc = heavy_round(acc, 0xcc579af6u); break;
    case 29: acc = heavy_round(acc, 0xa6a5d5ddu); break;
    case 30: acc = heavy_round(acc, 0xa8a5dd98u); break;
    case 31: acc = heavy_round(acc, 0x86fdc417u); break;
    case 32: acc = heavy_round(acc, 0x59b2128au); break;
    case 33: acc = heavy_round(acc, 0x8d56e061u); break;
    case 34: acc = heavy_round(acc, 0xf0b7fe4cu); break;
    case 35: acc = heavy_round(acc, 0x9a85253bu); break;
    case 36: acc = heavy_round(acc, 0xc4ca595eu); break;
    case 37: acc = heavy_round(acc, 0x947ef125u); break;
    case 38: acc = heavy_round(acc, 0xe792f040u); break;
    case 39: acc = heavy_round(acc, 0x00dea69fu); break;
    case 40: acc = heavy_round(acc, 0x43a7c372u); break;
    case 41: acc = heavy_round(acc, 0x99f54c29u); break;
    case 42: acc = heavy_round(acc, 0x3a3d2774u); break;
    case 43: acc = heavy_round(acc, 0x69962c43u); break;
    case 44: acc = heavy_round(acc, 0xc13ce4c6u); break;
    case 45: acc = heavy_round(acc, 0xa703756du); break;
    case 46: acc = heavy_round(acc, 0x900a57e8u); break;
    case 47: acc = heavy_round(acc, 0x41a3da27u); break;
    case 48: acc = heavy_round(acc, 0x287b915au); break;
    case 49: acc = heavy_round(acc, 0xb86930f1u); break;
    case 50: acc = heavy_round(acc, 0x4acf759cu); break;
    case 51: acc = heavy_round(acc, 0x2e10144bu); break;
    case 52: acc = heavy_round(acc, 0xf6a8dd2eu); break;
    case 53: acc = heavy_round(acc, 0xa4a082b5u); break;
    case 54: acc = heavy_round(acc, 0x5056b490u); break;
    case 55: acc = heavy_round(acc, 0x7ed77eafu); break;
    case 56: acc = heavy_round(acc, 0xe8f11c42u); break;
    case 57: acc = heavy_round(acc, 0xe461aeb9u); break;
    case 58: acc = heavy_round(acc, 0xd11388c4u); break;
    case 59: acc = heavy_round(acc, 0xfe0efd53u); break;
    case 60: acc = heavy_round(acc, 0xd93be296u); break;
    case 61: acc = heavy_round(acc, 0x416738fdu); break;
    case 62: acc = heavy_round(acc, 0x4016a638u); break;
    case 63: acc = heavy_round(acc, 0xbf47b437u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

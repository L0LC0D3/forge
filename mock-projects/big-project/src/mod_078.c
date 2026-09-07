#include "heavy.h"
#include "mods.h"

int mod_078(int x)
{
    static const uint32_t local[256] = {
        0x37fd714du, 0x1ff76248u, 0x062fa107u, 0x40b1eabau, 0x5527fad1u, 0xfbcef5fcu, 0x818fd92bu, 0x56771c8eu, 0xdfb9fa95u, 0x2b450af0u, 0x02bc218fu, 0x9c52a1a2u, 0xe1d9b499u, 0x15631524u, 0xdd675e33u, 0xdd320df6u,
        0xc68facddu, 0x722fc898u, 0xa9a0b317u, 0x5e32358au, 0x40caa761u, 0x9de3194cu, 0x3577843bu, 0x7bf32c5eu, 0xc0a3a825u, 0xa55a3b40u, 0x5edf759fu, 0x932c4672u, 0x3ae1f329u, 0xffcba274u, 0x39d46b43u, 0x488017c6u,
        0x46bf0c6du, 0x29bb02e8u, 0x26be8927u, 0x8390745au, 0xd5eab7f1u, 0x952d509cu, 0xbd16334bu, 0xb152702eu, 0x0acef9b5u, 0xa31cbf90u, 0xae480dafu, 0x21a25f42u, 0xf11415b9u, 0x9a2cc3c4u, 0x04d8fc53u, 0x9417d596u,
        0x1c648ffdu, 0xce9e1138u, 0x63ca2337u, 0x4819a72au, 0x71712c81u, 0x6f829becu, 0x2a3ce65bu, 0x2431e7feu, 0x9d34ef45u, 0xad3197e0u, 0x9f56e9bfu, 0xc8a1ec12u, 0xfe791c49u, 0x2cfb7914u, 0x8a661163u, 0xa1364766u,
        0x0599378du, 0xfe1df388u, 0xdb448147u, 0x4a5acdfau, 0x4e870511u, 0x83f7fb3cu, 0x46fc9d6bu, 0xdd6e93ceu, 0xf90e88d5u, 0x097dc430u, 0xfcad09cfu, 0xf857ece2u, 0x035a06d9u, 0xf1ecc264u, 0xd6acaa73u, 0x94586d36u,
        0xaab6031du, 0xbabfa9d8u, 0xabeea357u, 0x0020e8cau, 0x169541a1u, 0x42e26e8cu, 0xa5a6587bu, 0x9125739eu, 0xd1d4c665u, 0x0b264480u, 0xbd2b6ddfu, 0xe03161b2u, 0xd63fd569u, 0x63f59fb4u, 0xc61dc783u, 0xa53b4706u,
        0x2e53f2adu, 0xbc483428u, 0xa8c98967u, 0x8678f79au, 0x7144e231u, 0x85d6f5dcu, 0xb0cb178bu, 0x6eb3876eu, 0x9d40a7f5u, 0x629018d0u, 0x13f315efu, 0x3edb4a82u, 0x13f387f9u, 0x8f4b1104u, 0x156a6893u, 0xeedbd4d6u,
        0xbd4c063du, 0xbfbc9278u, 0x69163377u, 0x71affa6au, 0x947ee6c1u, 0xdfaa912cu, 0xbb3bda9bu, 0xf0b5cf3eu, 0x234b2d85u, 0x6d604120u, 0x806501ffu, 0x3242a752u, 0xaf7e1e89u, 0x61621654u, 0x71838da3u, 0x3f7716a6u,
        0x1eb73dcdu, 0xd761c4c8u, 0x5855a187u, 0x9d52f13au, 0xd46c4f51u, 0xec72407cu, 0x1009a1abu, 0xad094b0eu, 0x0e2d5715u, 0x867bbd70u, 0xde22320fu, 0x07947822u, 0x82289919u, 0xf8efafa4u, 0x879a36b3u, 0xe88a0c76u,
        0x43ee995du, 0xbabccb18u, 0xc648d397u, 0xfc2edc0au, 0x33761be1u, 0xa18303ccu, 0x02856cbbu, 0x24cafadeu, 0x7a6024a5u, 0x56078dc0u, 0x750ba61fu, 0x0b3dbcf2u, 0xdb7bf7a9u, 0xf5e8dcf4u, 0x151f63c3u, 0x8ed1b646u,
        0xd88b18edu, 0x1692a568u, 0xf6f0c9a7u, 0x6850badau, 0xf2454c71u, 0x9d71db1cu, 0xfe403bcbu, 0x9457deaeu, 0x869c9635u, 0x2168b210u, 0x09425e2fu, 0x58eb75c2u, 0x11413a39u, 0xc9829e44u, 0xf7c414d3u, 0xfa4b1416u,
        0xd265bc7du, 0xdce853b8u, 0x328e83b7u, 0x73058daau, 0x1fc2e101u, 0x7813c66cu, 0x970b0edbu, 0xc34cf67eu, 0xe3dbabc5u, 0x1b442a60u, 0xeb275a3fu, 0xab8aa292u, 0x0f8160c9u, 0x0631f394u, 0x3d7949e3u, 0xe63325e6u,
        0x0197840du, 0x9502d608u, 0xd5a301c7u, 0x34da547au, 0x2917d991u, 0x127dc5bcu, 0x98f6e5ebu, 0xd487424eu, 0x65566555u, 0xb37ef6b0u, 0x075b9a4fu, 0x2d484362u, 0xe8856b59u, 0xafabdce4u, 0x347002f3u, 0xd106ebb6u,
        0xa0796f9du, 0xab672c58u, 0x60ef43d7u, 0x1d9c0f4au, 0x69ad3621u, 0xe704d90cu, 0x1854c0fbu, 0x1623c21eu, 0x9085c2e5u, 0xe73e1700u, 0xf6c01e5fu, 0x47915832u, 0x64d659e9u, 0x8ae55a34u, 0x7b194003u, 0xcc836586u,
        0xe3a47f2du, 0xc1da56a8u, 0x897449e7u, 0xc457be1au, 0xbb2bf6b1u, 0x593e005cu, 0x81b5a00bu, 0xd17f75eeu, 0x2d22c475u, 0x90e68b50u, 0x0e75e66fu, 0x7312e102u, 0x933d2c79u, 0x6e136b84u, 0x10260113u, 0x4da59356u,
        0x89f1b2bdu, 0xff6154f8u, 0x487313f7u, 0xb75a60eau, 0x057d1b41u, 0x05fe3bacu, 0xa9ea831bu, 0x1b375dbeu, 0xd5266a05u, 0xb81d53a0u, 0x6fddf27fu, 0x07b9ddd2u, 0x58c2e309u, 0x90ab10d4u, 0x62874623u, 0xfcaa7526u,
    };
    uint32_t acc = 0xe430b826u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 78) & 255]);
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
    case 0: acc = heavy_round(acc, 0xfc478fbdu); break;
    case 1: acc = heavy_round(acc, 0x98cb8df8u); break;
    case 2: acc = heavy_round(acc, 0xf68df8f7u); break;
    case 3: acc = heavy_round(acc, 0xa2f601eau); break;
    case 4: acc = heavy_round(acc, 0xb78a4841u); break;
    case 5: acc = heavy_round(acc, 0xb59784acu); break;
    case 6: acc = heavy_round(acc, 0xc8c9381bu); break;
    case 7: acc = heavy_round(acc, 0x15a48ebeu); break;
    case 8: acc = heavy_round(acc, 0xd737e705u); break;
    case 9: acc = heavy_round(acc, 0xffceaca0u); break;
    case 10: acc = heavy_round(acc, 0x6e55777fu); break;
    case 11: acc = heavy_round(acc, 0x8fc99ed2u); break;
    case 12: acc = heavy_round(acc, 0x6175b009u); break;
    case 13: acc = heavy_round(acc, 0x446d79d4u); break;
    case 14: acc = heavy_round(acc, 0x3a3c9b23u); break;
    case 15: acc = heavy_round(acc, 0x7dbdc626u); break;
    case 16: acc = heavy_round(acc, 0x95bb274du); break;
    case 17: acc = heavy_round(acc, 0x3f1da048u); break;
    case 18: acc = heavy_round(acc, 0xe5d4c707u); break;
    case 19: acc = heavy_round(acc, 0x1f38d8bau); break;
    case 20: acc = heavy_round(acc, 0xa2d610d1u); break;
    case 21: acc = heavy_round(acc, 0x706a13fcu); break;
    case 22: acc = heavy_round(acc, 0x29645f2bu); break;
    case 23: acc = heavy_round(acc, 0x9fa5ea8eu); break;
    case 24: acc = heavy_round(acc, 0x5b2e7095u); break;
    case 25: acc = heavy_round(acc, 0x5d3308f0u); break;
    case 26: acc = heavy_round(acc, 0x2d06078fu); break;
    case 27: acc = heavy_round(acc, 0xa9b74fa2u); break;
    case 28: acc = heavy_round(acc, 0xab4a8a99u); break;
    case 29: acc = heavy_round(acc, 0x2b61f324u); break;
    case 30: acc = heavy_round(acc, 0x35cca433u); break;
    case 31: acc = heavy_round(acc, 0x8a3a9bf6u); break;
    case 32: acc = heavy_round(acc, 0xd692e2ddu); break;
    case 33: acc = heavy_round(acc, 0xcfdd8698u); break;
    case 34: acc = heavy_round(acc, 0x33275917u); break;
    case 35: acc = heavy_round(acc, 0x362ca38au); break;
    case 36: acc = heavy_round(acc, 0xbe563d61u); break;
    case 37: acc = heavy_round(acc, 0x41bdb74cu); break;
    case 38: acc = heavy_round(acc, 0x10858a3bu); break;
    case 39: acc = heavy_round(acc, 0xc80d7a5eu); break;
    case 40: acc = heavy_round(acc, 0xb70d9e25u); break;
    case 41: acc = heavy_round(acc, 0x66bfb940u); break;
    case 42: acc = heavy_round(acc, 0xef3adb9fu); break;
    case 43: acc = heavy_round(acc, 0x48747472u); break;
    case 44: acc = heavy_round(acc, 0xafe04929u); break;
    case 45: acc = heavy_round(acc, 0xacfa0074u); break;
    case 46: acc = heavy_round(acc, 0xaca33143u); break;
    case 47: acc = heavy_round(acc, 0xd5e425c6u); break;
    case 48: acc = heavy_round(acc, 0xb067c26du); break;
    case 49: acc = heavy_round(acc, 0x85d040e8u); break;
    case 50: acc = heavy_round(acc, 0x5886af27u); break;
    case 51: acc = heavy_round(acc, 0x7fde625au); break;
    case 52: acc = heavy_round(acc, 0xf0b3cdf1u); break;
    case 53: acc = heavy_round(acc, 0x36276e9cu); break;
    case 54: acc = heavy_round(acc, 0x7fbdb94bu); break;
    case 55: acc = heavy_round(acc, 0x69383e2eu); break;
    case 56: acc = heavy_round(acc, 0x0f8e6fb5u); break;
    case 57: acc = heavy_round(acc, 0xafd9bd90u); break;
    case 58: acc = heavy_round(acc, 0x6f14f3afu); break;
    case 59: acc = heavy_round(acc, 0x05ae0d42u); break;
    case 60: acc = heavy_round(acc, 0x2affebb9u); break;
    case 61: acc = heavy_round(acc, 0x686aa1c4u); break;
    case 62: acc = heavy_round(acc, 0xd2714253u); break;
    case 63: acc = heavy_round(acc, 0x86b76396u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

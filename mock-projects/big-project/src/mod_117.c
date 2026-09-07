#include "heavy.h"
#include "mods.h"

int mod_117(int x)
{
    static const uint32_t local[256] = {
        0x9befe240u, 0xd402f09fu, 0xabfb8572u, 0x37822629u, 0xa3403974u, 0xb9ea1643u, 0x1ebbc6c6u, 0x0680ef6du, 0x520589e8u, 0x13516427u, 0x6d47935au, 0xb1914af1u, 0x7634c79cu, 0xc2e13e4bu, 0xf603ff2eu, 0x3dcd3cb5u,
        0x13b82690u, 0x603648afu, 0xd93d5e42u, 0xec8d08b9u, 0x4b231ac4u, 0xa7056753u, 0xf5fb4496u, 0x8a2b32fdu, 0x71a65838u, 0xe67fbe37u, 0x6a14862au, 0xe7087f81u, 0xce43d2ecu, 0x54f6b15bu, 0x298336feu, 0xfecff245u,
        0xb042bee0u, 0x6bbfe4bfu, 0x80f8ab12u, 0x91facf49u, 0xd2e39014u, 0xaf593c63u, 0x97b17666u, 0x35949a8du, 0x4253fa88u, 0x87ccdc47u, 0x44896cfau, 0x1d3f1811u, 0x35e2f23cu, 0x0d55286bu, 0xca4fa2ceu, 0x23764bd5u,
        0x9374ab30u, 0xed40c4cfu, 0x4f5a6be2u, 0xd41479d9u, 0x10369964u, 0xcb169573u, 0x245b5c36u, 0x7d16261du, 0x229370d8u, 0xc1f9be57u, 0x2e7347cau, 0x899e14a1u, 0x3967258cu, 0xea4da37bu, 0x0886429eu, 0xab394965u,
        0xec72eb80u, 0x0799e8dfu, 0xafcfa0b2u, 0x95630869u, 0x1a1136b4u, 0xc2ae7283u, 0xcfb5f606u, 0x4f48d5adu, 0x2629bb28u, 0x14076467u, 0x00df169au, 0x5fce7531u, 0xce656cdcu, 0xc271228bu, 0x8f84166eu, 0x57d1eaf5u,
        0x47a27fd0u, 0x19ec50efu, 0x9d054982u, 0x7eaf7af9u, 0x98a86804u, 0x3ed1d393u, 0xb0be43d6u, 0xa505a93du, 0x661bd978u, 0xc136ce77u, 0x0c19d96au, 0x61b939c1u, 0xa3b2c82cu, 0x5490a59bu, 0x55e61e3eu, 0x3d393085u,
        0xdea86820u, 0xcf98fcffu, 0x70e86652u, 0x8f02d189u, 0x15712d54u, 0xd871b8a3u, 0x91b145a6u, 0x1165a0cdu, 0x50aecbc8u, 0xe108fc87u, 0xe7b0903au, 0x6f876251u, 0x7164377cu, 0x57bd2cabu, 0x6d895a0eu, 0x51a81a15u,
        0xe869a470u, 0x3040ed0fu, 0xb4a5f722u, 0xaba60c19u, 0x4b2086a4u, 0x28bf21b3u, 0xc00bfb76u, 0x51c1bc5du, 0xf9679218u, 0x6f3eee97u, 0x42703b0au, 0x17a1eee1u, 0x48cebaccu, 0x8b47b7bbu, 0xd38ac9deu, 0xfd97a7a5u,
        0xe90b34c0u, 0xafc5211fu, 0xf0aafbf2u, 0x30222aa9u, 0x75ab73f4u, 0xd92b0ec3u, 0xdc8b6546u, 0xddb2fbedu, 0x690b2c68u, 0x5bd9a4a7u, 0xb265d9dau, 0x26b1df71u, 0xe487521cu, 0xc6c146cbu, 0x40476daeu, 0xabc0d935u,
        0x01f21910u, 0x3e46992fu, 0x7ca474c2u, 0x7e402d39u, 0xa246f544u, 0xb3667fd3u, 0xab2c8316u, 0x77125f7du, 0xed9e9ab8u, 0x9b1a1eb7u, 0x84de6caau, 0x37a03401u, 0xf862fd6cu, 0x09fad9dbu, 0xf75c457eu, 0x591caec5u,
        0x41c35160u, 0x5826553fu, 0x4f7f6192u, 0x8e0913c9u, 0xff680a94u, 0xb16274e3u, 0xe32c54e6u, 0xb9f8e70du, 0x6a66dd08u, 0x35815cc7u, 0x8e66f37au, 0x4395ec91u, 0x8176bcbcu, 0x8d0570ebu, 0x97a6514eu, 0x24e42855u,
        0xf463ddb0u, 0x1605554fu, 0xcf68c262u, 0x7dc5de59u, 0x2cc3b3e4u, 0x0d4fedf3u, 0xff07dab6u, 0xacbf929du, 0xa7e8f358u, 0x57d05ed7u, 0xfacc6e4au, 0x31fc0921u, 0x1617900cu, 0xd0320bfbu, 0xeb42911eu, 0xe09045e5u,
        0xf2f8be00u, 0x3cc4995fu, 0xa1cd9732u, 0x21ff8ce9u, 0x8b4ef134u, 0x519feb03u, 0x0c7c1486u, 0x4fff622du, 0xa3e9dda8u, 0x630824e7u, 0x1d1bdd1au, 0x687b89b1u, 0x35da775cu, 0xac11ab0bu, 0xb78e04eeu, 0x9fda0775u,
        0xf3e6f250u, 0x4d85216fu, 0x7b5ae002u, 0x957f1f79u, 0x8d3ec284u, 0x69036c13u, 0x7c860256u, 0x2e9155bdu, 0xe16e9bf8u, 0xfc69aef7u, 0x3fa23feau, 0x5afd6e41u, 0x999472acu, 0x61754e1bu, 0x8d25acbeu, 0x48ba6d05u,
        0xdad37aa0u, 0x95a7ed7fu, 0xeffd9cd2u, 0xc94d9609u, 0x060827d4u, 0xae6b7123u, 0xf362a426u, 0xed8e6d4du, 0xb8bc2e48u, 0x1d75fd07u, 0x73ec96bau, 0x1baab6d1u, 0x835a81fcu, 0xa96df52bu, 0x97e6888eu, 0x236a7695u,
        0x08a356f0u, 0x3ecdfd8fu, 0x42e2cda2u, 0x14b3f099u, 0x7a602124u, 0xfd08fa33u, 0x188ef9f6u, 0xdc4fa8ddu, 0xa7579498u, 0x23ee0f17u, 0x62c7e18au, 0xeaec6361u, 0x0e81a54cu, 0xc54ca03bu, 0x6eed985eu, 0x6a632425u,
    };
    uint32_t acc = 0x13352b25u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 117) & 255]);
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
    case 0: acc = heavy_round(acc, 0xd918c0c2u); break;
    case 1: acc = heavy_round(acc, 0xf2700939u); break;
    case 2: acc = heavy_round(acc, 0x165d2144u); break;
    case 3: acc = heavy_round(acc, 0xba0ebbd3u); break;
    case 4: acc = heavy_round(acc, 0xe59f8f16u); break;
    case 5: acc = heavy_round(acc, 0x71b1fb7du); break;
    case 6: acc = heavy_round(acc, 0x7be186b8u); break;
    case 7: acc = heavy_round(acc, 0x8a881ab7u); break;
    case 8: acc = heavy_round(acc, 0x1bdc38aau); break;
    case 9: acc = heavy_round(acc, 0xedcb9001u); break;
    case 10: acc = heavy_round(acc, 0x7b3ea96cu); break;
    case 11: acc = heavy_round(acc, 0x01aa95dbu); break;
    case 12: acc = heavy_round(acc, 0xec30d17eu); break;
    case 13: acc = heavy_round(acc, 0x23afcac5u); break;
    case 14: acc = heavy_round(acc, 0xe463bd60u); break;
    case 15: acc = heavy_round(acc, 0x1153d13fu); break;
    case 16: acc = heavy_round(acc, 0xf236ad92u); break;
    case 17: acc = heavy_round(acc, 0x459fefc9u); break;
    case 18: acc = heavy_round(acc, 0xe9b93694u); break;
    case 19: acc = heavy_round(acc, 0x3b09b0e3u); break;
    case 20: acc = heavy_round(acc, 0x5e9260e6u); break;
    case 21: acc = heavy_round(acc, 0xd2ef830du); break;
    case 22: acc = heavy_round(acc, 0x2d14c908u); break;
    case 23: acc = heavy_round(acc, 0x705e58c7u); break;
    case 24: acc = heavy_round(acc, 0x3407bf7au); break;
    case 25: acc = heavy_round(acc, 0xaa084891u); break;
    case 26: acc = heavy_round(acc, 0x41ed68bcu); break;
    case 27: acc = heavy_round(acc, 0x67942cebu); break;
    case 28: acc = heavy_round(acc, 0xebcddd4eu); break;
    case 29: acc = heavy_round(acc, 0xd8ae4455u); break;
    case 30: acc = heavy_round(acc, 0x58cf49b0u); break;
    case 31: acc = heavy_round(acc, 0x8881d14fu); break;
    case 32: acc = heavy_round(acc, 0x55230e62u); break;
    case 33: acc = heavy_round(acc, 0xee83ba59u); break;
    case 34: acc = heavy_round(acc, 0x080fdfe4u); break;
    case 35: acc = heavy_round(acc, 0xd5b629f3u); break;
    case 36: acc = heavy_round(acc, 0xc420e6b6u); break;
    case 37: acc = heavy_round(acc, 0xd5cd2e9du); break;
    case 38: acc = heavy_round(acc, 0x65c1df58u); break;
    case 39: acc = heavy_round(acc, 0x75dc5ad7u); break;
    case 40: acc = heavy_round(acc, 0xe3d03a4au); break;
    case 41: acc = heavy_round(acc, 0x76756521u); break;
    case 42: acc = heavy_round(acc, 0xe6e93c0cu); break;
    case 43: acc = heavy_round(acc, 0xc15fc7fbu); break;
    case 44: acc = heavy_round(acc, 0xbf7d1d1eu); break;
    case 45: acc = heavy_round(acc, 0xa75161e5u); break;
    case 46: acc = heavy_round(acc, 0xb7ef2a00u); break;
    case 47: acc = heavy_round(acc, 0xf850155fu); break;
    case 48: acc = heavy_round(acc, 0xd74ae332u); break;
    case 49: acc = heavy_round(acc, 0x31a468e9u); break;
    case 50: acc = heavy_round(acc, 0x82561d34u); break;
    case 51: acc = heavy_round(acc, 0x04852703u); break;
    case 52: acc = heavy_round(acc, 0x54082086u); break;
    case 53: acc = heavy_round(acc, 0xeae3fe2du); break;
    case 54: acc = heavy_round(acc, 0xd3adc9a8u); break;
    case 55: acc = heavy_round(acc, 0xec0320e7u); break;
    case 56: acc = heavy_round(acc, 0xae42a91au); break;
    case 57: acc = heavy_round(acc, 0x28bbe5b1u); break;
    case 58: acc = heavy_round(acc, 0x99c7235cu); break;
    case 59: acc = heavy_round(acc, 0xd79e670bu); break;
    case 60: acc = heavy_round(acc, 0x5c9b90eeu); break;
    case 61: acc = heavy_round(acc, 0x13522375u); break;
    case 62: acc = heavy_round(acc, 0x68285e50u); break;
    case 63: acc = heavy_round(acc, 0xd1df9d6fu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

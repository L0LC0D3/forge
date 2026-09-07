#include "heavy.h"
#include "mods.h"

int mod_063(int x)
{
    static const uint32_t local[256] = {
        0x43ca25feu, 0xeea41545u, 0xcefa85e0u, 0xa35effbfu, 0x5bcf0a12u, 0x5fb7a249u, 0x1c8c4714u, 0x84d48763u, 0xe1d64566u, 0xdaed1d8du, 0xb704a188u, 0x264f5747u, 0x512babfau, 0x8d964b11u, 0xa3a2893cu, 0xb539d36bu,
        0x200e51ceu, 0x8edf2ed5u, 0xfd3a3230u, 0x2f129fcfu, 0xa7448ae2u, 0x9a520cd9u, 0x04e91064u, 0xf290a073u, 0xd8efeb36u, 0xd09b691du, 0x0409d7d8u, 0x7106f957u, 0x1aa146cau, 0xc28e07a1u, 0x73687c8cu, 0xe4090e7bu,
        0xd6acb19eu, 0x4a66ec65u, 0x1bb63280u, 0x2b4e83dfu, 0x98bd7fb2u, 0xf7515b69u, 0x233d6db4u, 0x36d73d83u, 0xc9aa4506u, 0x0f2ad8adu, 0x3cd5e228u, 0xa14f5f67u, 0x5e88d59au, 0x6a872831u, 0x6c1883dcu, 0x5eb34d8bu,
        0x0f02456eu, 0xaef44df5u, 0x12d386d0u, 0xa333abefu, 0xe6e6e882u, 0xab7e8df9u, 0x3bbe5f04u, 0x66595e93u, 0x470252d6u, 0xdb746c3du, 0x566dc078u, 0x26698977u, 0xa92f586au, 0x536aacc1u, 0xd8879f2cu, 0xd009909bu,
        0xbbac0d3eu, 0x9c805385u, 0x78372f20u, 0xee2317ffu, 0xa7adc552u, 0x41e2a489u, 0xf3e0e454u, 0x860803a3u, 0x973514a6u, 0x149123cdu, 0x9b1672c8u, 0x43d67787u, 0xce21cf3au, 0x69619551u, 0x0ccace7cu, 0xdb1cd7abu,
        0xea87090eu, 0xd543fd15u, 0xdec62b70u, 0xbfbdc80fu, 0x203f1622u, 0x2bc69f19u, 0x2259fda4u, 0x9b142cb3u, 0x83bf8a76u, 0xc3d9ff5du, 0xfa54f918u, 0x21572997u, 0xb82d3a0au, 0x46d4e1e1u, 0xb63711ccu, 0x2b3e22bbu,
        0x94b038deu, 0x8db84aa5u, 0x26a57bc0u, 0x37e4bc1fu, 0x9507daf2u, 0x50b37da9u, 0x1f1eaaf4u, 0xbaeed9c3u, 0x295eb446u, 0xace7feedu, 0x58ee5368u, 0xdaec9fa7u, 0x395e98dau, 0xc46d9271u, 0x2b61691cu, 0x83fe71cbu,
        0x6e849caeu, 0xfc963c35u, 0xcd3a2010u, 0xf2b8f42fu, 0x19b513c2u, 0x9e724039u, 0x1363ec44u, 0x1b490ad3u, 0xc80f9216u, 0xdd94227du, 0xe0e781b8u, 0x90d7d9b7u, 0xdb02ebaau, 0x8914a701u, 0xbc1ed46cu, 0xd12ec4dbu,
        0xb7a1347eu, 0xead6d1c5u, 0x3d291860u, 0x189b703fu, 0x6133c092u, 0x990be6c9u, 0x499ec194u, 0x2213bfe3u, 0x930f23e6u, 0x3df76a0du, 0x51858408u, 0x7799d7c7u, 0xada7327au, 0x99f31f91u, 0x018453bcu, 0x36e01bebu,
        0x0ae3004eu, 0x43b30b55u, 0x1e5764b0u, 0x6e2d304fu, 0x8db0e162u, 0xeac97159u, 0x7d842ae4u, 0x757ff8f3u, 0x80da69b6u, 0x206ad59du, 0x4f4d5a58u, 0xe7f399d7u, 0x19186d4au, 0xea71fc21u, 0x2de6e70cu, 0x216376fbu,
        0x2e67001eu, 0xa4a3e8e5u, 0xa5ea0500u, 0x644f345fu, 0x00997632u, 0xf433dfe9u, 0x2c092834u, 0x0bfeb603u, 0x1b2e6386u, 0xd187652du, 0xb40404a8u, 0x6ee61fe7u, 0xac639c1au, 0xec3a3cb1u, 0x5cdb8e5cu, 0x5549d60bu,
        0xe38a33eeu, 0xed626a75u, 0xe645f950u, 0x28227c6fu, 0x2a9a7f02u, 0x5c143279u, 0xe362b984u, 0x3c40f713u, 0x4f081156u, 0x282618bdu, 0xdeae82f8u, 0xddb269f7u, 0xedd5beeau, 0x1f34e141u, 0xe33749acu, 0xff64391bu,
        0xb6e99bbeu, 0xcfe79005u, 0x1f1041a0u, 0xb308087fu, 0x5ba0fbd2u, 0x9f736909u, 0x9305ded4u, 0xcd37bc23u, 0x3ca47326u, 0x155ff04du, 0x0391d548u, 0x59d97807u, 0x2afbd5bau, 0xa18ae9d1u, 0x9f0f18fcu, 0xc4c3a02bu,
        0xd062378eu, 0x606c5995u, 0x0d2dddf0u, 0xdaa0d88fu, 0x92d9eca2u, 0xa19a8399u, 0xdba79824u, 0x06140533u, 0x078088f6u, 0x348debddu, 0x7c32fb98u, 0x6d1c4a17u, 0x48a2e08au, 0xbfa55661u, 0x47b7fc4cu, 0xd2b90b3bu,
        0xc311075eu, 0xa569c725u, 0x3ac3ce40u, 0x60cdec9fu, 0x4eb25172u, 0x3c128229u, 0x5f3ce574u, 0xbe46d243u, 0xa65952c6u, 0x5b490b6du, 0x1756f5e8u, 0x157be027u, 0x92d7df5au, 0x842d26f1u, 0xbdc6f39cu, 0xeed57a4bu,
        0x5d530b2eu, 0x2798d8b5u, 0x4f371290u, 0x03b044afu, 0x5cd72a42u, 0xcea464b9u, 0x10fac6c4u, 0x6d812353u, 0xb32bd096u, 0x296a4efdu, 0x6902c438u, 0xd5393a37u, 0x8ce7d22au, 0x480b5b81u, 0x5b10feecu, 0x86e9ed5bu,
    };
    uint32_t acc = 0x0fb49c5bu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 63) & 255]);
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
    case 0: acc = heavy_round(acc, 0xc496fbd0u); break;
    case 1: acc = heavy_round(acc, 0xf7be9cefu); break;
    case 2: acc = heavy_round(acc, 0x16fb2582u); break;
    case 3: acc = heavy_round(acc, 0x21d3a6f9u); break;
    case 4: acc = heavy_round(acc, 0x9706a404u); break;
    case 5: acc = heavy_round(acc, 0x9182df93u); break;
    case 6: acc = heavy_round(acc, 0x9a83dfd6u); break;
    case 7: acc = heavy_round(acc, 0x7c36953du); break;
    case 8: acc = heavy_round(acc, 0xdd9fd578u); break;
    case 9: acc = heavy_round(acc, 0x05529a77u); break;
    case 10: acc = heavy_round(acc, 0x80cb356au); break;
    case 11: acc = heavy_round(acc, 0xf562e5c1u); break;
    case 12: acc = heavy_round(acc, 0x89d8842cu); break;
    case 13: acc = heavy_round(acc, 0x6963319bu); break;
    case 14: acc = heavy_round(acc, 0xf45f3a3eu); break;
    case 15: acc = heavy_round(acc, 0x46879c85u); break;
    case 16: acc = heavy_round(acc, 0x22abe420u); break;
    case 17: acc = heavy_round(acc, 0xc32e48ffu); break;
    case 18: acc = heavy_round(acc, 0xb7c54252u); break;
    case 19: acc = heavy_round(acc, 0xa3e1fd89u); break;
    case 20: acc = heavy_round(acc, 0x5c4e6954u); break;
    case 21: acc = heavy_round(acc, 0x7395c4a3u); break;
    case 22: acc = heavy_round(acc, 0xfb4de1a6u); break;
    case 23: acc = heavy_round(acc, 0x10818ccdu); break;
    case 24: acc = heavy_round(acc, 0x7121c7c8u); break;
    case 25: acc = heavy_round(acc, 0xf347c887u); break;
    case 26: acc = heavy_round(acc, 0xc628ec3au); break;
    case 27: acc = heavy_round(acc, 0xac4c0e51u); break;
    case 28: acc = heavy_round(acc, 0xafe8f37cu); break;
    case 29: acc = heavy_round(acc, 0xc362b8abu); break;
    case 30: acc = heavy_round(acc, 0x86b9760eu); break;
    case 31: acc = heavy_round(acc, 0x80418615u); break;
    case 32: acc = heavy_round(acc, 0xf33c2070u); break;
    case 33: acc = heavy_round(acc, 0xb659390fu); break;
    case 34: acc = heavy_round(acc, 0x9e29d322u); break;
    case 35: acc = heavy_round(acc, 0x8d003819u); break;
    case 36: acc = heavy_round(acc, 0xf63cc2a4u); break;
    case 37: acc = heavy_round(acc, 0xf5162db3u); break;
    case 38: acc = heavy_round(acc, 0xfb3f9776u); break;
    case 39: acc = heavy_round(acc, 0x1f88a85du); break;
    case 40: acc = heavy_round(acc, 0xba898e18u); break;
    case 41: acc = heavy_round(acc, 0x6460ba97u); break;
    case 42: acc = heavy_round(acc, 0x186f970au); break;
    case 43: acc = heavy_round(acc, 0xb0419ae1u); break;
    case 44: acc = heavy_round(acc, 0x737276ccu); break;
    case 45: acc = heavy_round(acc, 0x4e8043bbu); break;
    case 46: acc = heavy_round(acc, 0xf131e5deu); break;
    case 47: acc = heavy_round(acc, 0xd03c13a5u); break;
    case 48: acc = heavy_round(acc, 0xaa6cb0c0u); break;
    case 49: acc = heavy_round(acc, 0x75206d1fu); break;
    case 50: acc = heavy_round(acc, 0xc295d7f2u); break;
    case 51: acc = heavy_round(acc, 0xe8b756a9u); break;
    case 52: acc = heavy_round(acc, 0x90c6aff4u); break;
    case 53: acc = heavy_round(acc, 0xef751ac3u); break;
    case 54: acc = heavy_round(acc, 0xab160146u); break;
    case 55: acc = heavy_round(acc, 0xd0e4e7edu); break;
    case 56: acc = heavy_round(acc, 0xb29c2868u); break;
    case 57: acc = heavy_round(acc, 0x789e70a7u); break;
    case 58: acc = heavy_round(acc, 0x7dac35dau); break;
    case 59: acc = heavy_round(acc, 0x7dec8b71u); break;
    case 60: acc = heavy_round(acc, 0x7f0a0e1cu); break;
    case 61: acc = heavy_round(acc, 0x124cd2cbu); break;
    case 62: acc = heavy_round(acc, 0x5c2589aeu); break;
    case 63: acc = heavy_round(acc, 0x51304535u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

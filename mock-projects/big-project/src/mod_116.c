#include "heavy.h"
#include "mods.h"

int mod_116(int x)
{
    static const uint32_t local[256] = {
        0x676ae03fu, 0xf85c7092u, 0xac3cd6c9u, 0x32baf194u, 0xe3a22fe3u, 0x17ead3e6u, 0xb53f5a0du, 0x79ccb408u, 0x905747c7u, 0x59e5e27au, 0x83420f91u, 0xbe2683bcu, 0x1a3c8bebu, 0x5b34b04eu, 0x13f8fb55u, 0xff8494b0u,
        0x8e98a04fu, 0xf1c59162u, 0x6df66159u, 0x7e6c5ae4u, 0xb46a68f3u, 0x0b6219b6u, 0x696ec59du, 0x06208a58u, 0x05cd09d7u, 0x2fc31d4au, 0x433cec21u, 0xfbd5170cu, 0x2d9be6fbu, 0x39e4b01eu, 0x7e25d8e5u, 0xe7233500u,
        0x2d56a45fu, 0x1c9a2632u, 0xd65ccfe9u, 0x67bd5834u, 0x8f452603u, 0xc6621386u, 0x4b47552du, 0xcc6334a8u, 0x48db8fe7u, 0x787a4c1au, 0x83812cb1u, 0xbf15be5cu, 0x315e460bu, 0x2533e3eeu, 0x0f205a75u, 0xba8b2950u,
        0x30c5ec6fu, 0xa9872f02u, 0x4c392279u, 0x3ce2e984u, 0x8ae36713u, 0xf5e7c156u, 0xf1a208bdu, 0xeb99b2f8u, 0xeac3d9f7u, 0x7a586eeau, 0x83f7d141u, 0x1cbd79acu, 0x1254a91bu, 0x69bf4bbeu, 0x38e18005u, 0x796171a0u,
        0x5247787fu, 0xa879abd2u, 0x0c945909u, 0xad520ed4u, 0x2e362c23u, 0x7a302326u, 0x0d97e04du, 0x58090548u, 0xd106e807u, 0x42ea85bau, 0x22c9d9d1u, 0xb2e148fcu, 0x3590102bu, 0xef63e78eu, 0xcfa24995u, 0xa08b0df0u,
        0x277c488fu, 0xd89e9ca2u, 0xbab77399u, 0x19bfc824u, 0x806e7533u, 0x36b838f6u, 0xfa81dbddu, 0x2b362b98u, 0x4565ba17u, 0x76fd908au, 0x6c604661u, 0xf8d62c4cu, 0x88617b3bu, 0x093eb75eu, 0x99dbb725u, 0x7a2cfe40u,
        0x32455c9fu, 0x78630172u, 0xf02b7229u, 0xe4211574u, 0x18fd4243u, 0xe23d02c6u, 0x4df8fb6du, 0xf3e625e8u, 0x05e15027u, 0x229e8f5au, 0x2b6416f1u, 0x8f31239cu, 0x9059ea4bu, 0x45acbb2eu, 0xe046c8b5u, 0x6dac4290u,
        0xf0c3b4afu, 0x1573da42u, 0xccb954b9u, 0xbfaaf6c4u, 0x2f939353u, 0xd6bb8096u, 0x67d63efdu, 0x061df438u, 0x54baaa37u, 0x891a822au, 0x78be4b81u, 0x8fc72eecu, 0x7b4a5d5bu, 0x3e4af2feu, 0xfddc7e45u, 0x4faddae0u,
        0xed5850bfu, 0x5cbe2712u, 0x866a1b49u, 0x00d26c14u, 0xac226863u, 0xe170b266u, 0x0232a68du, 0xcb229688u, 0x0872c847u, 0xf4fe68fau, 0x4b97e411u, 0xddad4e3cu, 0x2f43d46bu, 0x67f65eceu, 0xefd5d7d5u, 0xb216c730u,
        0xcea430cfu, 0xea6ee7e2u, 0xf986c5d9u, 0xed4c7564u, 0x36dac173u, 0x12d99836u, 0xc167321du, 0x11790cd8u, 0x9bcaaa57u, 0x881743cau, 0x0959e0a1u, 0x7538818cu, 0x5a974f7bu, 0xe2cbfe9eu, 0xe5abd565u, 0x340c0780u,
        0x678854dfu, 0x19f31cb2u, 0x38985469u, 0x0c0e12b4u, 0x482d9e83u, 0x8eb33206u, 0xc40ce1adu, 0x5ce65728u, 0x3dc35067u, 0x0b72129au, 0x15ad4131u, 0xbbfdc8dcu, 0x83d5ce8bu, 0x4a28d26eu, 0xd11776f5u, 0xd1f29bd0u,
        0xc725bcefu, 0xd5f7c582u, 0x1c67c6f9u, 0x754c4404u, 0x38cbff93u, 0x5bfa7fd6u, 0x32fcb53du, 0x366f7578u, 0xe19dba77u, 0xbf5bd56au, 0x627b05c1u, 0xd0d2242cu, 0x19d0519bu, 0x84a9da3eu, 0xf611bc85u, 0x356f8420u,
        0x48dd68ffu, 0x6869e252u, 0xd3fe1d89u, 0x227c0954u, 0x51a6e4a3u, 0x34ec81a6u, 0xd14faccdu, 0x7c5967c8u, 0x4edae887u, 0x2b618c3au, 0xffec2e51u, 0xdbca937cu, 0x8397d8abu, 0x942c160eu, 0x7ad3a615u, 0x0567c070u,
        0xa450590fu, 0x4a767322u, 0x74a45819u, 0x3e5262a4u, 0xdbef4db3u, 0x57063776u, 0x8c5ec85du, 0xb2292e18u, 0x313bda97u, 0xee50370au, 0xac69bae1u, 0x5e3c16ccu, 0x307d63bbu, 0x65cc85deu, 0xf7d633a5u, 0x360050c0u,
        0xfd5f8d1fu, 0xf48a77f2u, 0x89e376a9u, 0x74c44ff4u, 0x31163ac3u, 0x5304a146u, 0x0bc307edu, 0x50a3c868u, 0x28c190a7u, 0x8e34d5dau, 0x649cab71u, 0x82bbae1cu, 0xa811f2cbu, 0xa1e829aeu, 0x07d26535u, 0x589e3510u,
        0xf42c052fu, 0xae52f0c2u, 0xa5847939u, 0x4306d144u, 0xcaccabd3u, 0xdce4bf16u, 0x41556b7du, 0x15ce36b8u, 0xd9ad0ab7u, 0x485c68aau, 0xf36e0001u, 0x6d1e596cu, 0x9a2685dbu, 0x7c1c017eu, 0xd7c13ac5u, 0xebe66d60u,
    };
    uint32_t acc = 0x314a4860u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 116) & 255]);
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
    case 0: acc = heavy_round(acc, 0xcefec34fu); break;
    case 1: acc = heavy_round(acc, 0x53e75862u); break;
    case 2: acc = heavy_round(acc, 0x4df77c59u); break;
    case 3: acc = heavy_round(acc, 0xf23cb9e4u); break;
    case 4: acc = heavy_round(acc, 0xe2d93bf3u); break;
    case 5: acc = heavy_round(acc, 0x2a14d0b6u); break;
    case 6: acc = heavy_round(acc, 0x0c6c109du); break;
    case 7: acc = heavy_round(acc, 0x8bdf5958u); break;
    case 8: acc = heavy_round(acc, 0x0df78cd7u); break;
    case 9: acc = heavy_round(acc, 0x551dc44au); break;
    case 10: acc = heavy_round(acc, 0x96616721u); break;
    case 11: acc = heavy_round(acc, 0xc0b1560cu); break;
    case 12: acc = heavy_round(acc, 0x14e519fbu); break;
    case 13: acc = heavy_round(acc, 0x1dee471eu); break;
    case 14: acc = heavy_round(acc, 0xa3cc83e5u); break;
    case 15: acc = heavy_round(acc, 0xebbbe400u); break;
    case 16: acc = heavy_round(acc, 0x55d1875fu); break;
    case 17: acc = heavy_round(acc, 0x4c49ad32u); break;
    case 18: acc = heavy_round(acc, 0x6110aae9u); break;
    case 19: acc = heavy_round(acc, 0x7f217734u); break;
    case 20: acc = heavy_round(acc, 0xaab4b903u); break;
    case 21: acc = heavy_round(acc, 0xfa9e8a86u); break;
    case 22: acc = heavy_round(acc, 0xa8c3602du); break;
    case 23: acc = heavy_round(acc, 0x0b11c3a8u); break;
    case 24: acc = heavy_round(acc, 0xfbb2d2e7u); break;
    case 25: acc = heavy_round(acc, 0xdd1ab31au); break;
    case 26: acc = heavy_round(acc, 0x97b067b1u); break;
    case 27: acc = heavy_round(acc, 0x59fdbd5cu); break;
    case 28: acc = heavy_round(acc, 0x65c0390bu); break;
    case 29: acc = heavy_round(acc, 0x8fff3aeeu); break;
    case 30: acc = heavy_round(acc, 0xff1dc575u); break;
    case 31: acc = heavy_round(acc, 0x560b9850u); break;
    case 32: acc = heavy_round(acc, 0x19858f6fu); break;
    case 33: acc = heavy_round(acc, 0xc1347602u); break;
    case 34: acc = heavy_round(acc, 0x794fbd79u); break;
    case 35: acc = heavy_round(acc, 0xabcac884u); break;
    case 36: acc = heavy_round(acc, 0x5683ba13u); break;
    case 37: acc = heavy_round(acc, 0x491df856u); break;
    case 38: acc = heavy_round(acc, 0x244cd3bdu); break;
    case 39: acc = heavy_round(acc, 0x5e2801f8u); break;
    case 40: acc = heavy_round(acc, 0x2677dcf7u); break;
    case 41: acc = heavy_round(acc, 0x86ae95eau); break;
    case 42: acc = heavy_round(acc, 0x46e1cc41u); break;
    case 43: acc = heavy_round(acc, 0xbfa138acu); break;
    case 44: acc = heavy_round(acc, 0xbcff5c1bu); break;
    case 45: acc = heavy_round(acc, 0x92bc62beu); break;
    case 46: acc = heavy_round(acc, 0x63e5ab05u); break;
    case 47: acc = heavy_round(acc, 0x84b9a0a0u); break;
    case 48: acc = heavy_round(acc, 0x9f7bdb7fu); break;
    case 49: acc = heavy_round(acc, 0x1e94b2d2u); break;
    case 50: acc = heavy_round(acc, 0x7fbdb409u); break;
    case 51: acc = heavy_round(acc, 0xe3adadd4u); break;
    case 52: acc = heavy_round(acc, 0xf9373f23u); break;
    case 53: acc = heavy_round(acc, 0x11d01a26u); break;
    case 54: acc = heavy_round(acc, 0x9c216b4du); break;
    case 55: acc = heavy_round(acc, 0xf5671448u); break;
    case 56: acc = heavy_round(acc, 0xbfc7ab07u); break;
    case 57: acc = heavy_round(acc, 0x3b666cbau); break;
    case 58: acc = heavy_round(acc, 0xae1e94d1u); break;
    case 59: acc = heavy_round(acc, 0xcbb0c7fcu); break;
    case 60: acc = heavy_round(acc, 0x8bb3832bu); break;
    case 61: acc = heavy_round(acc, 0xaa02be8eu); break;
    case 62: acc = heavy_round(acc, 0x925d3495u); break;
    case 63: acc = heavy_round(acc, 0xf0aafcf0u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

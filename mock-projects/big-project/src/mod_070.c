#include "heavy.h"
#include "mods.h"

int mod_070(int x)
{
    static const uint32_t local[256] = {
        0x52a622e5u, 0x0922f700u, 0xc09f7e5fu, 0xe8293832u, 0xefccb9e9u, 0x23a83a34u, 0xc23ea003u, 0xada94586u, 0x49d0df2du, 0x005b36a8u, 0xef3fa9e7u, 0x57eb9e1au, 0x04ee56b1u, 0xea5ce05cu, 0x0d87000bu, 0xb76155eeu,
        0xb8db2475u, 0x7f836b50u, 0x8dad466fu, 0x5922c102u, 0x754b8c79u, 0x030e4b84u, 0x76236113u, 0xcfc37356u, 0xecb612bdu, 0xa19a34f8u, 0x0e9673f7u, 0x3f6640eau, 0x89577b41u, 0x1a551bacu, 0x2f93e31bu, 0xc1113dbeu,
        0xf076ca05u, 0x817233a0u, 0x5a6d527fu, 0x7141bdd2u, 0xb7e94309u, 0x0fddf0d4u, 0xfd5ca623u, 0x3dc05526u, 0x51d66a4du, 0x34320748u, 0x87e80207u, 0xc6b4d7bau, 0x72bc03d1u, 0x58e96afcu, 0x3385ca2bu, 0xe6fa598eu,
        0x75b21395u, 0x13d44ff0u, 0xa480a28fu, 0xb7b32ea2u, 0x82eedd99u, 0xb2cc2a24u, 0xc71b6f33u, 0x231ceaf6u, 0x7c8ae5ddu, 0x59a7ad98u, 0x8cf55417u, 0x5aa4628au, 0xf584f061u, 0x256ece4cu, 0x6eadb53bu, 0xc439a95eu,
        0xb7060125u, 0x08cec040u, 0xd5c8369fu, 0x32e41372u, 0x97e55c29u, 0x55cdf774u, 0xd2d0bc43u, 0x7e9634c6u, 0xaa6c856du, 0x28c027e8u, 0xc3bf6a27u, 0xcf41e15au, 0x045b40f1u, 0x287a459cu, 0xce9ca44bu, 0x2f2c2d2eu,
        0xa52b92b5u, 0x4fc68490u, 0x54650eafu, 0x38816c42u, 0x3e95beb9u, 0xb41858c4u, 0xc02d8d53u, 0xf2293296u, 0xe35448fdu, 0x7d807638u, 0x56874437u, 0x2fda542au, 0xe027f581u, 0x83e0d0ecu, 0xe923975bu, 0x096ee4feu,
        0x431bc845u, 0x45609ce0u, 0x92b82abfu, 0x3d783912u, 0xd5090549u, 0x2a204e14u, 0xdf22e263u, 0x9312e466u, 0x895b308du, 0x492d9888u, 0x03cde247u, 0x8efabafau, 0xa8140e11u, 0x22b7703cu, 0x0c538e6bu, 0x0fded0ceu,
        0x360fa1d5u, 0x03820930u, 0x1f628acfu, 0xa5f579e2u, 0x5f882fd9u, 0x059ad764u, 0x3fe1bb73u, 0xb9d04a36u, 0xe8da3c1du, 0xe24c8ed8u, 0x2e544457u, 0xd67015cau, 0xe9888aa1u, 0x0953238cu, 0x4e7d897bu, 0xaa98f09eu,
        0x55801f65u, 0xb14fc980u, 0xb5452edfu, 0x95662eb2u, 0x189c3e69u, 0xd57cf4b4u, 0xc2db1883u, 0xd21e6406u, 0xc86a6badu, 0x54a25928u, 0xed1b6a67u, 0x9747649au, 0x302e6b31u, 0xa548eadcu, 0x9e32888bu, 0xbcfa446eu,
        0x3b2640f5u, 0xd32eddd0u, 0x4b8116efu, 0xbe775782u, 0x010e30f9u, 0xb9fba604u, 0x28bff993u, 0x2afa31d6u, 0xf8e4bf3du, 0xb133f778u, 0x1b645477u, 0xd9cda76au, 0x95eeafc1u, 0x1d6dc62cu, 0xd2438b9bu, 0x759fcc3eu,
        0xd2fb0685u, 0x9ac44620u, 0x257742ffu, 0x3315f452u, 0x6fe70789u, 0xb48beb54u, 0x22815ea3u, 0xc6a0b3a6u, 0xe56236cdu, 0x5e4669c8u, 0x68b00287u, 0xed8fde3au, 0x52f25851u, 0xa1d6b57cu, 0xb9c192abu, 0x1e66880eu,
        0xeb377015u, 0x36f50270u, 0xe2c8b30fu, 0x346f0522u, 0xa26fc219u, 0xf7e2c4a4u, 0x615047b3u, 0x2a8ee976u, 0x233bd25du, 0x675eb018u, 0x68bf7497u, 0x395b090au, 0x4da264e1u, 0xbbd8b8ccu, 0x2bfd9dbbu, 0xec6b77deu,
        0xc4547da5u, 0x23e612c0u, 0x8f56671fu, 0x02ef89f2u, 0x4c3160a9u, 0x37f531f4u, 0xa69db4c3u, 0x2f81d346u, 0x020a91edu, 0xcd41ca68u, 0xa393aaa7u, 0x0b3c27dau, 0xaaa7d571u, 0x9e08d01cu, 0x1888accbu, 0xd00b9baeu,
        0xa10b2f35u, 0x7afc7710u, 0xb3415f2fu, 0xae4482c2u, 0x26f4e339u, 0xf9f83344u, 0xd41aa5d3u, 0xd1767116u, 0x1ba7757du, 0xd5f4b8b8u, 0xa56da4b7u, 0x68803aaau, 0x5cebaa01u, 0x743bfb6cu, 0x9733bfdbu, 0x44e3f37eu,
        0x565484c5u, 0x42dd2f60u, 0x62ea9b3fu, 0xe55aef92u, 0x82c349c9u, 0xe460c894u, 0xfbb81ae3u, 0xffa9c2e6u, 0xe42b7d0du, 0x5cbc7b08u, 0x0ece62c7u, 0xddb4417au, 0xb596e291u, 0xb3873abcu, 0xf80fd6ebu, 0x21d17f4eu,
        0xdb697e55u, 0xbf6d3bb0u, 0x4ef31b4fu, 0xc65fd062u, 0xd5e59459u, 0x0ee3f1e4u, 0x6fa713f3u, 0x6c98c8b6u, 0x39efa89du, 0x221e1158u, 0xa476e4d7u, 0x4ea53c4au, 0xf4127f21u, 0x6a3f8e0cu, 0xd36df1fbu, 0x68f13f1eu,
    };
    uint32_t acc = 0x9a0da21eu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 70) & 255]);
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
    case 0: acc = heavy_round(acc, 0x0c36a595u); break;
    case 1: acc = heavy_round(acc, 0xccbbb9f0u); break;
    case 2: acc = heavy_round(acc, 0x967d048fu); break;
    case 3: acc = heavy_round(acc, 0x229028a2u); break;
    case 4: acc = heavy_round(acc, 0x65c38f99u); break;
    case 5: acc = heavy_round(acc, 0x58853424u); break;
    case 6: acc = heavy_round(acc, 0xe57cf133u); break;
    case 7: acc = heavy_round(acc, 0x39dc84f6u); break;
    case 8: acc = heavy_round(acc, 0x05a1b7ddu); break;
    case 9: acc = heavy_round(acc, 0xe97c5798u); break;
    case 10: acc = heavy_round(acc, 0x307df617u); break;
    case 11: acc = heavy_round(acc, 0xeb209c8au); break;
    case 12: acc = heavy_round(acc, 0x74efe261u); break;
    case 13: acc = heavy_round(acc, 0xdc49184cu); break;
    case 14: acc = heavy_round(acc, 0xeb3f773bu); break;
    case 15: acc = heavy_round(acc, 0x1cec835eu); break;
    case 16: acc = heavy_round(acc, 0xc4f71325u); break;
    case 17: acc = heavy_round(acc, 0x8d38aa40u); break;
    case 18: acc = heavy_round(acc, 0x9c65189fu); break;
    case 19: acc = heavy_round(acc, 0xdce78d72u); break;
    case 20: acc = heavy_round(acc, 0x86ae8e29u); break;
    case 21: acc = heavy_round(acc, 0x81f18174u); break;
    case 22: acc = heavy_round(acc, 0xb39abe43u); break;
    case 23: acc = heavy_round(acc, 0x97a44ec6u); break;
    case 24: acc = heavy_round(acc, 0x187fd76du); break;
    case 25: acc = heavy_round(acc, 0x746751e8u); break;
    case 26: acc = heavy_round(acc, 0x4ff88c27u); break;
    case 27: acc = heavy_round(acc, 0x03b49b5au); break;
    case 28: acc = heavy_round(acc, 0x8e4ab2f1u); break;
    case 29: acc = heavy_round(acc, 0xb30f0f9cu); break;
    case 30: acc = heavy_round(acc, 0xdaa6e64bu); break;
    case 31: acc = heavy_round(acc, 0x53fd872eu); break;
    case 32: acc = heavy_round(acc, 0xb7a924b5u); break;
    case 33: acc = heavy_round(acc, 0x8a52ee90u); break;
    case 34: acc = heavy_round(acc, 0x99c270afu); break;
    case 35: acc = heavy_round(acc, 0x854b6642u); break;
    case 36: acc = heavy_round(acc, 0x087370b9u); break;
    case 37: acc = heavy_round(acc, 0xab4662c4u); break;
    case 38: acc = heavy_round(acc, 0x9f800f53u); break;
    case 39: acc = heavy_round(acc, 0xdb25cc96u); break;
    case 40: acc = heavy_round(acc, 0x67841afdu); break;
    case 41: acc = heavy_round(acc, 0xc39a2038u); break;
    case 42: acc = heavy_round(acc, 0xb990e637u); break;
    case 43: acc = heavy_round(acc, 0xdfe38e2au); break;
    case 44: acc = heavy_round(acc, 0x27bbe781u); break;
    case 45: acc = heavy_round(acc, 0xbad01aecu); break;
    case 46: acc = heavy_round(acc, 0x44c6595bu); break;
    case 47: acc = heavy_round(acc, 0x7bfebefeu); break;
    case 48: acc = heavy_round(acc, 0xaf45da45u); break;
    case 49: acc = heavy_round(acc, 0x48af86e0u); break;
    case 50: acc = heavy_round(acc, 0x08f60cbfu); break;
    case 51: acc = heavy_round(acc, 0xf8a8b312u); break;
    case 52: acc = heavy_round(acc, 0x911b3749u); break;
    case 53: acc = heavy_round(acc, 0xd8f8d814u); break;
    case 54: acc = heavy_round(acc, 0x811de463u); break;
    case 55: acc = heavy_round(acc, 0x019dfe66u); break;
    case 56: acc = heavy_round(acc, 0x1cc7828du); break;
    case 57: acc = heavy_round(acc, 0xf059c288u); break;
    case 58: acc = heavy_round(acc, 0x33c80447u); break;
    case 59: acc = heavy_round(acc, 0xfa3a74fau); break;
    case 60: acc = heavy_round(acc, 0xa86c8011u); break;
    case 61: acc = heavy_round(acc, 0x86a13a3cu); break;
    case 62: acc = heavy_round(acc, 0xffaed06bu); break;
    case 63: acc = heavy_round(acc, 0x39cd2aceu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

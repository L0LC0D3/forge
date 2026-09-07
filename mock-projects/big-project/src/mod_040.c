#include "heavy.h"
#include "mods.h"

int mod_040(int x)
{
    static const uint32_t local[256] = {
        0x7af3c6dbu, 0x076e4e7eu, 0x3a9d23c5u, 0x50e74260u, 0xf7ff923fu, 0xf0d57a92u, 0x7e5e58c9u, 0xea3a8b94u, 0x167901e3u, 0xc67f7de6u, 0x6887fc0du, 0x5708ee08u, 0x758239c7u, 0xbb802c7au, 0x2b93d191u, 0xcf995dbcu,
        0x09ed9debu, 0xd65e9a4eu, 0xe255dd55u, 0x8e480eb0u, 0x9b21d24fu, 0x20a91b62u, 0xf2806359u, 0x683a74e4u, 0x3c3dbaf3u, 0x25c943b6u, 0xf567e79du, 0xb7534458u, 0x657c7bd7u, 0x1517e74au, 0x6b072e21u, 0x0966710cu,
        0x91d978fbu, 0x1b311a1eu, 0xbb433ae5u, 0x48ad2f00u, 0x84f4565fu, 0xc6883032u, 0x496f51e9u, 0x5179f234u, 0x9d34f803u, 0x8b3bbd86u, 0x9e10f72du, 0x292c6ea8u, 0xd62f81e7u, 0xba29961au, 0xeae3eeb1u, 0x4a65985cu,
        0x5f48580bu, 0x7f42cdeeu, 0x6d1e3c75u, 0xba7ba350u, 0xea981e6fu, 0xbb1fb902u, 0x71f42479u, 0xdc2e0384u, 0x180fb913u, 0xcbd3eb56u, 0x015c2abdu, 0x33996cf8u, 0xa0dc4bf7u, 0x990238eau, 0x73131341u, 0x8f6bd3acu,
        0x270b3b1bu, 0x7730b5beu, 0x71dfe205u, 0x4b586ba0u, 0xcd6e2a7fu, 0xb65cb5d2u, 0x3117db09u, 0x9fcba8d4u, 0xfbbefe23u, 0xefcecd26u, 0xd862824du, 0x32df3f48u, 0xf303da07u, 0x672ecfbau, 0x69bd9bd1u, 0x5e8e22fcu,
        0x1633222bu, 0x12d7d18eu, 0xa5c12b95u, 0xe02887f0u, 0x0b177a8fu, 0x1f6c26a2u, 0xb2237599u, 0xe507e224u, 0x1773c733u, 0x02a962f6u, 0x867cfdddu, 0xa882e598u, 0x5e672c17u, 0x717c5a8au, 0x634c8861u, 0x1721864cu,
        0xe2110d3bu, 0xcd55215eu, 0xd73b1925u, 0x2b10f840u, 0x6d750e9fu, 0xdcbb0b72u, 0x169ff429u, 0xf5d7af74u, 0xca9f1443u, 0xe320acc6u, 0xa9449d6du, 0x8b495fe8u, 0xe9074227u, 0x6bf7d95au, 0xb268d8f1u, 0x41bafd9cu,
        0xd835fc4bu, 0x5d05a52eu, 0x5706aab5u, 0xfb76bc90u, 0xbaa7e6afu, 0x23f66442u, 0x065656b9u, 0x6d7010c4u, 0x14f1e553u, 0x1331aa96u, 0xa89260fdu, 0x9737ae38u, 0x1d251c37u, 0x41ee4c2au, 0xf7fb8d81u, 0xe02f88ecu,
        0xee72ef5bu, 0x83865cfeu, 0x881ce045u, 0x8dfed4e0u, 0xc51102bfu, 0x4a0b3112u, 0x3f4f9d49u, 0x88460614u, 0xa65d3a63u, 0x88195c66u, 0x467f488du, 0x9d92d088u, 0x1941ba47u, 0xe5ecb2fau, 0xb32da611u, 0xbd94283cu,
        0xd2d8e66bu, 0xddb448ceu, 0x6fb6b9d5u, 0xdc8e4130u, 0x7b5162cfu, 0x932671e2u, 0x25d4c7d9u, 0x740e8f64u, 0xef121373u, 0x7a54c236u, 0x2f64541du, 0xd4dfc6d8u, 0xa01e1c57u, 0x21c00dcau, 0xd16822a1u, 0xbe3ddb8cu,
        0xfbb8e17bu, 0xb3ac689eu, 0x454d3765u, 0xee4a0180u, 0xf84a06dfu, 0x02b526b2u, 0x546ed669u, 0x9fbeacb4u, 0x2f817083u, 0x35a0dc06u, 0x89da83adu, 0x28e39128u, 0x28bb4267u, 0x66755c9au, 0x3e540331u, 0x2fc1a2dcu,
        0xb7a3e08bu, 0xc8cbbc6eu, 0x029958f5u, 0x279715d0u, 0x931beeefu, 0x2b644f82u, 0x2be6c8f9u, 0x0b8b5e04u, 0x885c5193u, 0xe8faa9d6u, 0x86bad73du, 0x8aa32f78u, 0xee5a2c77u, 0x9c599f6au, 0x73da47c1u, 0x18f47e2cu,
        0x3d6ae39bu, 0x2baf443eu, 0xf3941e85u, 0x9a1a7e20u, 0xef281affu, 0xff20ec52u, 0x63459f89u, 0x98e9a354u, 0x0a93b6a3u, 0x769f2ba6u, 0xf11e4ecdu, 0x4063a1c8u, 0x007bda87u, 0xf2f9d63au, 0x0a23f051u, 0x89eb6d7cu,
        0xbc1eeaabu, 0x0634000eu, 0x46768815u, 0x54b93a70u, 0x0c0f8b0fu, 0x9f17fd22u, 0x97d45a19u, 0x5a8e7ca4u, 0xc7589fb3u, 0x440b6176u, 0xbe5dea5du, 0x35a9e818u, 0x52e14c97u, 0xb123010au, 0x4799fce1u, 0xebfb70ccu,
        0x6b10f5bbu, 0x6d76efdeu, 0x9bb995a5u, 0xb3984ac0u, 0x55b33f1fu, 0x2bb681f2u, 0xdd1bf8a9u, 0xe46ee9f4u, 0xe01c0cc3u, 0x09fc4b46u, 0x9e12a9edu, 0x4b3b0268u, 0xcd8b82a7u, 0x04e21fdau, 0xb0e56d71u, 0x51b9881cu,
        0x99d204cbu, 0x31d513aeu, 0x96164735u, 0xb01caf10u, 0xb434372fu, 0x94a97ac2u, 0x4ce57b39u, 0x9bbfeb44u, 0x968efdd3u, 0xa46ee916u, 0x8a158d7du, 0xa71bf0b8u, 0x5cbb7cb7u, 0xd38432aau, 0x98ef4201u, 0xc6fab36cu,
    };
    uint32_t acc = 0xd9695e6cu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 40) & 255]);
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
    case 0: acc = heavy_round(acc, 0x4859cff3u); break;
    case 1: acc = heavy_round(acc, 0x009454b6u); break;
    case 2: acc = heavy_round(acc, 0xa37dc49du); break;
    case 3: acc = heavy_round(acc, 0xd97d7d58u); break;
    case 4: acc = heavy_round(acc, 0x855760d7u); break;
    case 5: acc = heavy_round(acc, 0x4773884au); break;
    case 6: acc = heavy_round(acc, 0x34d45b21u); break;
    case 7: acc = heavy_round(acc, 0x6dbfba0cu); break;
    case 8: acc = heavy_round(acc, 0x5e782dfbu); break;
    case 9: acc = heavy_round(acc, 0x685e4b1eu); break;
    case 10: acc = heavy_round(acc, 0x7114b7e5u); break;
    case 11: acc = heavy_round(acc, 0x311e8800u); break;
    case 12: acc = heavy_round(acc, 0x2d2bdb5fu); break;
    case 13: acc = heavy_round(acc, 0x6d57f132u); break;
    case 14: acc = heavy_round(acc, 0x61e21ee9u); break;
    case 15: acc = heavy_round(acc, 0x51fc5b34u); break;
    case 16: acc = heavy_round(acc, 0xdaaa4d03u); break;
    case 17: acc = heavy_round(acc, 0xb70f0e86u); break;
    case 18: acc = heavy_round(acc, 0xf312142du); break;
    case 19: acc = heavy_round(acc, 0xc0c8e7a8u); break;
    case 20: acc = heavy_round(acc, 0xb257a6e7u); break;
    case 21: acc = heavy_round(acc, 0x83f1771au); break;
    case 22: acc = heavy_round(acc, 0xc6b05bb1u); break;
    case 23: acc = heavy_round(acc, 0x8c35215cu); break;
    case 24: acc = heavy_round(acc, 0xc8684d0bu); break;
    case 25: acc = heavy_round(acc, 0x7e803eeeu); break;
    case 26: acc = heavy_round(acc, 0xe742f975u); break;
    case 27: acc = heavy_round(acc, 0x06a73c50u); break;
    case 28: acc = heavy_round(acc, 0x18c4e36fu); break;
    case 29: acc = heavy_round(acc, 0x26e3ba02u); break;
    case 30: acc = heavy_round(acc, 0x1c4e3179u); break;
    case 31: acc = heavy_round(acc, 0xa8eeac84u); break;
    case 32: acc = heavy_round(acc, 0xc22e4e13u); break;
    case 33: acc = heavy_round(acc, 0x2bbf7c56u); break;
    case 34: acc = heavy_round(acc, 0xe51887bdu); break;
    case 35: acc = heavy_round(acc, 0xe63825f8u); break;
    case 36: acc = heavy_round(acc, 0x01a1b0f7u); break;
    case 37: acc = heavy_round(acc, 0x064659eau); break;
    case 38: acc = heavy_round(acc, 0x5daec041u); break;
    case 39: acc = heavy_round(acc, 0x65419cacu); break;
    case 40: acc = heavy_round(acc, 0xd1fc701bu); break;
    case 41: acc = heavy_round(acc, 0x6d8e66beu); break;
    case 42: acc = heavy_round(acc, 0x9227df05u); break;
    case 43: acc = heavy_round(acc, 0x52ce44a0u); break;
    case 44: acc = heavy_round(acc, 0x53e02f7fu); break;
    case 45: acc = heavy_round(acc, 0x7524f6d2u); break;
    case 46: acc = heavy_round(acc, 0x04292809u); break;
    case 47: acc = heavy_round(acc, 0xc15a91d4u); break;
    case 48: acc = heavy_round(acc, 0x61d6d323u); break;
    case 49: acc = heavy_round(acc, 0x6ae29e26u); break;
    case 50: acc = heavy_round(acc, 0x66aa1f4du); break;
    case 51: acc = heavy_round(acc, 0x4a103848u); break;
    case 52: acc = heavy_round(acc, 0xf4b67f07u); break;
    case 53: acc = heavy_round(acc, 0xc7ff30bau); break;
    case 54: acc = heavy_round(acc, 0xd3f888d1u); break;
    case 55: acc = heavy_round(acc, 0x62fa2bfcu); break;
    case 56: acc = heavy_round(acc, 0x3c45972bu); break;
    case 57: acc = heavy_round(acc, 0xc965c28eu); break;
    case 58: acc = heavy_round(acc, 0x01fc6895u); break;
    case 59: acc = heavy_round(acc, 0x1e78a0f0u); break;
    case 60: acc = heavy_round(acc, 0x901ebf8fu); break;
    case 61: acc = heavy_round(acc, 0x8348a7a2u); break;
    case 62: acc = heavy_round(acc, 0x38bc0299u); break;
    case 63: acc = heavy_round(acc, 0x47f50b24u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

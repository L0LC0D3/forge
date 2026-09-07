#include "heavy.h"
#include "mods.h"

int mod_058(int x)
{
    static const uint32_t local[256] = {
        0xd77df351u, 0x1faf947cu, 0x4d9ee5abu, 0xeab5bf0eu, 0x3a273b15u, 0x97045170u, 0x9409b60fu, 0x66ee2c22u, 0xab6ebd19u, 0x87d783a4u, 0xdbd7fab3u, 0xefc50076u, 0xf324fd5du, 0x1057df18u, 0xdd20d797u, 0x9abf100au,
        0xc980bfe1u, 0x816557ccu, 0xc27bb0bbu, 0xa7646edeu, 0x946308a5u, 0x130521c0u, 0x8ae42a1fu, 0x4fd470f2u, 0xf6db1ba9u, 0xc615b0f4u, 0x37de27c3u, 0x7899aa46u, 0x36ea7cedu, 0xa742b968u, 0x6bd9cda7u, 0x93bdeedau,
        0xbd88f071u, 0xe7392f1cu, 0x5cd77fcbu, 0x4b1e52aeu, 0x34e87a35u, 0x7c1b4610u, 0x3f4be22fu, 0xc5ff29c2u, 0x08f95e39u, 0x40347244u, 0x8d43d8d3u, 0x9de00816u, 0x4e2e207du, 0xc1ed67b8u, 0xcdc887b7u, 0xd68fc1aau,
        0x527f8501u, 0x39001a6cu, 0xc08352dbu, 0x6d806a7eu, 0x5cb08fc5u, 0x54ebbe60u, 0x11a1de3fu, 0x545b5692u, 0x5dd284c9u, 0xd8a8c794u, 0xf9fa0de3u, 0xead519e6u, 0x9908e80du, 0x379cea08u, 0x6f6e05c7u, 0x4bc1887au,
        0x858d7d91u, 0xa7cf19bcu, 0xc99029ebu, 0x0167b64eu, 0x6ef44955u, 0x5d5b8ab0u, 0xfe871e4fu, 0xf515f762u, 0x97af8f59u, 0xe327b0e4u, 0xdc31c6f3u, 0xadf5dfb6u, 0xe1d3d39du, 0xc4d64058u, 0xe18b47d7u, 0x3320434au,
        0x421bda21u, 0xfdfb2d0cu, 0x9c4f04fbu, 0x24f1361eu, 0x812ca6e5u, 0xe28fab00u, 0xaedca25fu, 0xe19c0c32u, 0x0f197de9u, 0x74a62e34u, 0xe25c0403u, 0xc8ff5986u, 0xed27e32du, 0x5b5e6aa8u, 0xe9214de7u, 0xf3b8f21au,
        0xf1d39ab1u, 0xef19545cu, 0xb550e40bu, 0xf179e9eeu, 0xeb12a875u, 0x0eed1f50u, 0x87c36a6fu, 0x629a9502u, 0x62d95079u, 0xb3593f84u, 0x1b29c513u, 0x80ee8756u, 0x09de16bdu, 0x723a68f8u, 0x8f7117f7u, 0xebd894eau,
        0x0c9dbf41u, 0x67fe8facu, 0xf966c71bu, 0x4b9ed1beu, 0xd69f4e05u, 0x3a18e7a0u, 0xba9c767fu, 0x9ffe91d2u, 0x07f80709u, 0x26b5e4d4u, 0x058c0a23u, 0x4e006926u, 0xa10f6e4du, 0x55af3b48u, 0x31fba607u, 0x410c2bbau,
        0xa8a347d1u, 0xdebfdefcu, 0xc5a1ae2bu, 0xb33ced8eu, 0xd00b9795u, 0x38f803f0u, 0x5508c68fu, 0x70f502a2u, 0xd9bea199u, 0x07711e24u, 0xa0b3d333u, 0xabb1fef6u, 0xc614e9ddu, 0x7741e198u, 0x9281f817u, 0xb020b68au,
        0x0a4d3461u, 0xa2b2424cu, 0xff52993bu, 0x13713d5eu, 0x55d08525u, 0xadaf7440u, 0x50e95a9fu, 0x2beae772u, 0xa9b62029u, 0x8f7feb74u, 0x7c122043u, 0xe8c048c6u, 0xc687896du, 0xbdb75be8u, 0xe7050e27u, 0x5d23355au,
        0x344484f1u, 0x2c6ab99cu, 0x240a884bu, 0x9298c12eu, 0x68a716b5u, 0x57a43890u, 0xa45f32afu, 0x768d4042u, 0xcfa782b9u, 0x4a174cc4u, 0xc757f153u, 0xf7284696u, 0xba404cfdu, 0xd514aa38u, 0xe9c5e837u, 0xa360a82au,
        0x77723981u, 0x6dbe44ecu, 0x599a7b5bu, 0x625078feu, 0x1b884c45u, 0x637b50e0u, 0x51cb4ebfu, 0x15c90d12u, 0xb99bc949u, 0x63ac4214u, 0x62764663u, 0x3c26f866u, 0x1358348du, 0x7e9ecc88u, 0xe9458647u, 0xe5660efau,
        0x02ff5211u, 0x21c1e43cu, 0x7e13726bu, 0x8f7564ceu, 0x23ad25d5u, 0xbb19bd30u, 0x77ceaecfu, 0xbdcb4de2u, 0x7bdbf3d9u, 0xf9f3cb64u, 0xed9e1f73u, 0x60395e36u, 0x2e28401du, 0xe0dac2d8u, 0xd844e857u, 0x5d0069cau,
        0x7454cea1u, 0x1cca978cu, 0x37c66d7bu, 0xd224849eu, 0x688ea365u, 0x55a47d80u, 0x614a52dfu, 0xe20102b2u, 0x60f10269u, 0x6be2e8b4u, 0xd9407c83u, 0x1f1c7806u, 0xe1496fadu, 0xd78d8d28u, 0x5dc50e67u, 0xeb3cb89au,
        0x671baf31u, 0x9c6d5edcu, 0x05446c8bu, 0x5dbad86eu, 0x93e5c4f5u, 0x878091d0u, 0x955f3aefu, 0x85172b82u, 0x79a3f4f9u, 0xa9ae9a04u, 0x760e5d93u, 0x17cd45d6u, 0x0d94c33du, 0x43bc2b78u, 0xe506f877u, 0xe867fb6au,
        0x053cf3c1u, 0x977f3a2cu, 0x4d5e6f9bu, 0xb0d5603eu, 0xa1ab8a85u, 0x5252fa20u, 0xe76e66ffu, 0x08fac852u, 0x2cfdcb89u, 0x84cbdf54u, 0x04f8c2a3u, 0x9c88c7a6u, 0x2e233acdu, 0x5bab9dc8u, 0xad8ba687u, 0xf40f323au,
    };
    uint32_t acc = 0x8a46253au ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 58) & 255]);
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
    case 0: acc = heavy_round(acc, 0x17015a19u); break;
    case 1: acc = heavy_round(acc, 0xbdd77ca4u); break;
    case 2: acc = heavy_round(acc, 0xe80d9fb3u); break;
    case 3: acc = heavy_round(acc, 0x0b3c6176u); break;
    case 4: acc = heavy_round(acc, 0x61daea5du); break;
    case 5: acc = heavy_round(acc, 0x5102e818u); break;
    case 6: acc = heavy_round(acc, 0x2c664c97u); break;
    case 7: acc = heavy_round(acc, 0xbae4010au); break;
    case 8: acc = heavy_round(acc, 0xac66fce1u); break;
    case 9: acc = heavy_round(acc, 0xb86470ccu); break;
    case 10: acc = heavy_round(acc, 0xa265f5bbu); break;
    case 11: acc = heavy_round(acc, 0x1ac7efdeu); break;
    case 12: acc = heavy_round(acc, 0xaed695a5u); break;
    case 13: acc = heavy_round(acc, 0x3a114ac0u); break;
    case 14: acc = heavy_round(acc, 0x5fd83f1fu); break;
    case 15: acc = heavy_round(acc, 0x6d9781f2u); break;
    case 16: acc = heavy_round(acc, 0xdb88f8a9u); break;
    case 17: acc = heavy_round(acc, 0x3df7e9f4u); break;
    case 18: acc = heavy_round(acc, 0x02110cc3u); break;
    case 19: acc = heavy_round(acc, 0x616d4b46u); break;
    case 20: acc = heavy_round(acc, 0x14cfa9edu); break;
    case 21: acc = heavy_round(acc, 0xa0d40268u); break;
    case 22: acc = heavy_round(acc, 0x1c5082a7u); break;
    case 23: acc = heavy_round(acc, 0x82e31fdau); break;
    case 24: acc = heavy_round(acc, 0x7cf26d71u); break;
    case 25: acc = heavy_round(acc, 0xdc62881cu); break;
    case 26: acc = heavy_round(acc, 0xfa6704cbu); break;
    case 27: acc = heavy_round(acc, 0x776613aeu); break;
    case 28: acc = heavy_round(acc, 0xe4734735u); break;
    case 29: acc = heavy_round(acc, 0xb8d5af10u); break;
    case 30: acc = heavy_round(acc, 0xdb99372fu); break;
    case 31: acc = heavy_round(acc, 0xd2ca7ac2u); break;
    case 32: acc = heavy_round(acc, 0x9a927b39u); break;
    case 33: acc = heavy_round(acc, 0x7b88eb44u); break;
    case 34: acc = heavy_round(acc, 0x09c3fdd3u); break;
    case 35: acc = heavy_round(acc, 0x9c1fe916u); break;
    case 36: acc = heavy_round(acc, 0xa4128d7du); break;
    case 37: acc = heavy_round(acc, 0xc6f4f0b8u); break;
    case 38: acc = heavy_round(acc, 0x70c07cb7u); break;
    case 39: acc = heavy_round(acc, 0xd5c532aau); break;
    case 40: acc = heavy_round(acc, 0x9c3c4201u); break;
    case 41: acc = heavy_round(acc, 0x9fe3b36cu); break;
    case 42: acc = heavy_round(acc, 0x9a0817dbu); break;
    case 43: acc = heavy_round(acc, 0x9cbc6b7eu); break;
    case 44: acc = heavy_round(acc, 0xc4229cc5u); break;
    case 45: acc = heavy_round(acc, 0x4be46760u); break;
    case 46: acc = heavy_round(acc, 0x3098733fu); break;
    case 47: acc = heavy_round(acc, 0xb33ee792u); break;
    case 48: acc = heavy_round(acc, 0x0426e1c9u); break;
    case 49: acc = heavy_round(acc, 0xfcff8094u); break;
    case 50: acc = heavy_round(acc, 0x711772e3u); break;
    case 51: acc = heavy_round(acc, 0x8a913ae6u); break;
    case 52: acc = heavy_round(acc, 0xe3bc950du); break;
    case 53: acc = heavy_round(acc, 0x7eaab308u); break;
    case 54: acc = heavy_round(acc, 0x2a373ac7u); break;
    case 55: acc = heavy_round(acc, 0x2017397au); break;
    case 56: acc = heavy_round(acc, 0xbb6d7a91u); break;
    case 57: acc = heavy_round(acc, 0x57fcf2bcu); break;
    case 58: acc = heavy_round(acc, 0x315a2eebu); break;
    case 59: acc = heavy_round(acc, 0x41a7f74eu); break;
    case 60: acc = heavy_round(acc, 0xa51d9655u); break;
    case 61: acc = heavy_round(acc, 0x172273b0u); break;
    case 62: acc = heavy_round(acc, 0x6f76f34fu); break;
    case 63: acc = heavy_round(acc, 0x0d21c862u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

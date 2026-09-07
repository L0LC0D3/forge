#include "heavy.h"
#include "mods.h"

int mod_119(int x)
{
    static const uint32_t local[256] = {
        0xab8e39d6u, 0x4399273du, 0x85cd3f78u, 0x01dcfc77u, 0x08de2f6au, 0xd7f597c1u, 0xe0378e2cu, 0xa432b39bu, 0x50b4d43eu, 0x1c3c6e85u, 0x8a868e20u, 0xc304eaffu, 0x0c377c52u, 0x1acaef89u, 0xd88eb354u, 0x9a5586a3u,
        0x4c56bba6u, 0xfed09ecdu, 0xce51b1c8u, 0x9ff2aa87u, 0xb2e2663au, 0x82534051u, 0x4e327d7cu, 0x941abaabu, 0xa2dd900eu, 0xda72d815u, 0x30694a70u, 0xea605b0fu, 0x6c128d22u, 0xe5edaa19u, 0x37b78ca4u, 0xeece6fb3u,
        0x85e6f176u, 0xa1e43a5du, 0x175bf818u, 0x4b4c1c97u, 0x2d6f910au, 0x28dd4ce1u, 0xfe4680ccu, 0xd140c5bbu, 0xfac47fdeu, 0xc009e5a5u, 0x5b8c5ac0u, 0xab780f1fu, 0x419511f2u, 0xb6c948a9u, 0xd01bf9f4u, 0x5c45dcc3u,
        0x50fbdb46u, 0x1c6cf9edu, 0x81b11268u, 0x2bea52a7u, 0xe692afdau, 0x903cbd71u, 0x4308981cu, 0xeb35d4cbu, 0x68c6a3aeu, 0xafba9735u, 0x4554bf10u, 0x2e6d072fu, 0xbc6c0ac2u, 0xe726cb39u, 0x46f0fb44u, 0x646ccdd3u,
        0xc9927916u, 0xa843dd7du, 0x735600b8u, 0x6e0e4cb7u, 0x0398c2aau, 0x4b5a9201u, 0x684dc36cu, 0x99cae7dbu, 0x8880fb7eu, 0x1e7decc5u, 0x14677760u, 0x27a0433fu, 0xab847792u, 0x670f31c9u, 0x62ab9094u, 0xb93442e3u,
        0xfee7cae6u, 0x5981e50du, 0xe78fc308u, 0x52390ac7u, 0x310ec97au, 0x4b5fca91u, 0x032b02bcu, 0xcd10feebu, 0x50d0874eu, 0xa38ce655u, 0x2ca983b0u, 0xe7b2c34fu, 0x4d0b5862u, 0x4ccb7c59u, 0x5b00b9e4u, 0x4ccd3bf3u,
        0xc378d0b6u, 0xae80109du, 0xbee35958u, 0x3d2b8cd7u, 0x72c1c44au, 0x6fb56721u, 0x41f5560cu, 0xbd5919fbu, 0xe3d2471eu, 0x886083e5u, 0x7f3fe400u, 0x6b85875fu, 0x1e6dad32u, 0x64e4aae9u, 0x28e57734u, 0x61a8b903u,
        0x7d028a86u, 0x1fd7602du, 0x0f15c3a8u, 0xc7e6d2e7u, 0xf3beb31au, 0x160467b1u, 0x3c41bd5cu, 0xfb34390bu, 0x5ee33aeeu, 0x58b1c575u, 0xda8f9850u, 0x6c398f6fu, 0xac587602u, 0xc223bd79u, 0xd68ec884u, 0x9a77ba13u,
        0xf481f856u, 0xb060d3bdu, 0x732c01f8u, 0xcfabdcf7u, 0xd65295eau, 0xaa35cc41u, 0x42e538acu, 0x7f735c1bu, 0xaaa062beu, 0x7279ab05u, 0x3a3da0a0u, 0x6f2fdb7fu, 0x62b8b2d2u, 0x4d91b409u, 0xcf71add4u, 0x0a2b3f23u,
        0x26341a26u, 0x7d356b4du, 0x5b6b1448u, 0x85fbab07u, 0x040a6cbau, 0x367294d1u, 0x2ff4c7fcu, 0xbb27832bu, 0x4ae6be8eu, 0x95f13495u, 0x172efcf0u, 0xd6096b8fu, 0x5cbb63a2u, 0x56778e99u, 0x30432724u, 0x43f44833u,
        0x1195eff6u, 0x4dae26ddu, 0x5d57fa98u, 0x80973d17u, 0xfdb3378au, 0xf323c161u, 0xb6c56b4cu, 0xa7a1ae3bu, 0x2ed34e5eu, 0x75916225u, 0xb788ad40u, 0xeea73f9fu, 0x34cd8872u, 0x225e4d29u, 0x16f83474u, 0x6b43d543u,
        0x896479c6u, 0x2364066du, 0x83b7b4e8u, 0xc97f9327u, 0xab59f65au, 0xd6f251f1u, 0xb3ec229cu, 0xd672dd4bu, 0x80c3122eu, 0x461333b5u, 0x7eafb190u, 0x032a57afu, 0xd49c2142u, 0x7d0eefb9u, 0xf2c5d5c4u, 0x43cae653u,
        0x039cb796u, 0xca3009fdu, 0x9e8f4338u, 0xeef5ad37u, 0x2c4ba92au, 0x26c74681u, 0x7d3dedecu, 0x816c105bu, 0x765309feu, 0x4e6fa945u, 0x3d4909e0u, 0x69f3b3bfu, 0x45142e12u, 0x48927649u, 0xd4210b14u, 0x417a7b63u,
        0x697ba966u, 0x682b318du, 0x9323a588u, 0x137a8b47u, 0xa7154ffau, 0x05cb9f11u, 0x31cfcd3cu, 0x9a9e476bu, 0x206035ceu, 0x77dfc2d5u, 0x8139b630u, 0x95a453cfu, 0x7e62aee2u, 0x0d31e0d9u, 0xbcbed464u, 0x98839473u,
        0xe77e4f36u, 0x0dae7d1du, 0xabf9dbd8u, 0xfdcf2d57u, 0x1983eacau, 0x05685ba1u, 0x09f6c08cu, 0xdc5a827bu, 0x3b07959eu, 0xdddc8065u, 0xe5a6b680u, 0x251d37dfu, 0x37f4a3b2u, 0x89762f69u, 0xef9431b4u, 0x4d573183u,
        0xbd61a906u, 0x4552ecadu, 0xe8d6e628u, 0x28f49367u, 0x28a4799au, 0xb5467c31u, 0xa747c7dcu, 0xd931c18bu, 0xfda6296eu, 0x5e1ee1f5u, 0x62f50ad0u, 0xf37f5fefu, 0xb8770c82u, 0x422861f9u, 0x40d62304u, 0x44a65293u,
    };
    uint32_t acc = 0xfd6a2193u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 119) & 255]);
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
    case 0: acc = heavy_round(acc, 0x9736a5c8u); break;
    case 1: acc = heavy_round(acc, 0xe0cb0e87u); break;
    case 2: acc = heavy_round(acc, 0xf9b77a3au); break;
    case 3: acc = heavy_round(acc, 0xf51d4451u); break;
    case 4: acc = heavy_round(acc, 0x040cb17cu); break;
    case 5: acc = heavy_round(acc, 0xd4e75eabu); break;
    case 6: acc = heavy_round(acc, 0x7a99e40eu); break;
    case 7: acc = heavy_round(acc, 0x0c7b1c15u); break;
    case 8: acc = heavy_round(acc, 0xa9ecbe70u); break;
    case 9: acc = heavy_round(acc, 0xca453f0fu); break;
    case 10: acc = heavy_round(acc, 0x418a2122u); break;
    case 11: acc = heavy_round(acc, 0xd5f82e19u); break;
    case 12: acc = heavy_round(acc, 0x7cd840a4u); break;
    case 13: acc = heavy_round(acc, 0x0d2f93b3u); break;
    case 14: acc = heavy_round(acc, 0x492dc576u); break;
    case 15: acc = heavy_round(acc, 0x78f4fe5du); break;
    case 16: acc = heavy_round(acc, 0xd54dec18u); break;
    case 17: acc = heavy_round(acc, 0x2bcd8097u); break;
    case 18: acc = heavy_round(acc, 0xe5d9a50au); break;
    case 19: acc = heavy_round(acc, 0xbe3850e1u); break;
    case 20: acc = heavy_round(acc, 0x3b7db4ccu); break;
    case 21: acc = heavy_round(acc, 0xffc669bbu); break;
    case 22: acc = heavy_round(acc, 0x9ae5d3deu); break;
    case 23: acc = heavy_round(acc, 0x5d3329a5u); break;
    case 24: acc = heavy_round(acc, 0x6bbccec0u); break;
    case 25: acc = heavy_round(acc, 0x2025f31fu); break;
    case 26: acc = heavy_round(acc, 0xbb41a5f2u); break;
    case 27: acc = heavy_round(acc, 0x1b84cca9u); break;
    case 28: acc = heavy_round(acc, 0x8839adf4u); break;
    case 29: acc = heavy_round(acc, 0x1f8000c3u); break;
    case 30: acc = heavy_round(acc, 0xe947af46u); break;
    case 31: acc = heavy_round(acc, 0xc2bebdedu); break;
    case 32: acc = heavy_round(acc, 0xabf00668u); break;
    case 33: acc = heavy_round(acc, 0x3a54b6a7u); break;
    case 34: acc = heavy_round(acc, 0xc9d1c3dau); break;
    case 35: acc = heavy_round(acc, 0x3068c171u); break;
    case 36: acc = heavy_round(acc, 0x52dccc1cu); break;
    case 37: acc = heavy_round(acc, 0x59b478cbu); break;
    case 38: acc = heavy_round(acc, 0x7e8cf7aeu); break;
    case 39: acc = heavy_round(acc, 0x0444db35u); break;
    case 40: acc = heavy_round(acc, 0x4b723310u); break;
    case 41: acc = heavy_round(acc, 0x8e23eb2fu); break;
    case 42: acc = heavy_round(acc, 0xbb8d9ec2u); break;
    case 43: acc = heavy_round(acc, 0xb0d34f39u); break;
    case 44: acc = heavy_round(acc, 0x254baf44u); break;
    case 45: acc = heavy_round(acc, 0x66bff1d3u); break;
    case 46: acc = heavy_round(acc, 0x8c234d16u); break;
    case 47: acc = heavy_round(acc, 0xf216a17du); break;
    case 48: acc = heavy_round(acc, 0x5121f4b8u); break;
    case 49: acc = heavy_round(acc, 0xc8a1b0b7u); break;
    case 50: acc = heavy_round(acc, 0x1aecd6aau); break;
    case 51: acc = heavy_round(acc, 0xee979601u); break;
    case 52: acc = heavy_round(acc, 0x65fef76cu); break;
    case 53: acc = heavy_round(acc, 0x2a828bdbu); break;
    case 54: acc = heavy_round(acc, 0x112c4f7eu); break;
    case 55: acc = heavy_round(acc, 0x86a930c5u); break;
    case 56: acc = heavy_round(acc, 0x3fb1eb60u); break;
    case 57: acc = heavy_round(acc, 0x58a0273fu); break;
    case 58: acc = heavy_round(acc, 0x615b0b92u); break;
    case 59: acc = heavy_round(acc, 0x95ecb5c9u); break;
    case 60: acc = heavy_round(acc, 0xea834494u); break;
    case 61: acc = heavy_round(acc, 0x24e066e3u); break;
    case 62: acc = heavy_round(acc, 0x90fd9ee6u); break;
    case 63: acc = heavy_round(acc, 0x2b15a90du); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

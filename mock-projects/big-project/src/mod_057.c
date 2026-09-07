#include "heavy.h"
#include "mods.h"

int mod_057(int x)
{
    static const uint32_t local[256] = {
        0x2e1a2f2cu, 0x9ddae09bu, 0x652d1d3eu, 0x346e2385u, 0x402abf20u, 0x30e167ffu, 0xaf37d552u, 0x36457489u, 0x0bc57454u, 0xde0353a3u, 0x00d824a6u, 0xfa38f3cdu, 0x717c02c8u, 0xae5ec787u, 0x56eddf3au, 0x3a1e6551u,
        0x31415e7cu, 0x028227abu, 0x188c190eu, 0xbfe5cd15u, 0x91ddbb70u, 0x4b50180fu, 0x528d2622u, 0x641d6f19u, 0xe5a28da4u, 0x7f237cb3u, 0x02669a76u, 0x52b5cf5du, 0x205e8918u, 0xef337997u, 0xc43d4a0au, 0xda05b1e1u,
        0xf291a1ccu, 0x613772bbu, 0x783948deu, 0x480e1aa5u, 0x1de10bc0u, 0x914b0c1fu, 0xb319eaf2u, 0x99fe4da9u, 0xf6cb3af4u, 0x801229c3u, 0x0e09c446u, 0x01f7ceedu, 0x479be368u, 0x311cefa7u, 0xa9b2a8dau, 0x87126271u,
        0x089ff91cu, 0xbd8bc1cbu, 0x7891acaeu, 0x43a00c35u, 0xa199b010u, 0xdef3442fu, 0x248b23c2u, 0x05b11039u, 0xa8747c44u, 0x56805ad3u, 0xa3bea216u, 0x55d7f27du, 0x513911b8u, 0xd45c29b7u, 0xd09afbaau, 0x282d7701u,
        0x0341646cu, 0x435014dbu, 0x9932447eu, 0xbb94a1c5u, 0xc7aca860u, 0x9ca9c03fu, 0x99cdd092u, 0x6b3eb6c9u, 0x85135194u, 0xa85f0fe3u, 0x36c233e6u, 0x766f3a0du, 0x3c7b1408u, 0x4d7227c7u, 0x8983427au, 0x027fef91u,
        0xbb8ae3bcu, 0x56956bebu, 0xb4f8104eu, 0xdb24db55u, 0x77fef4b0u, 0xcf0f804fu, 0x750ef162u, 0xb4f04159u, 0x885cbae4u, 0x5bdf48f3u, 0xfd9179b6u, 0xf616a59du, 0xede6ea58u, 0x351fe9d7u, 0x7c387d4au, 0x4972cc21u,
        0xa3d1770cu, 0xa3acc6fbu, 0xd200101eu, 0x7fc9b8e5u, 0x27b59500u, 0x2705845fu, 0x57bb8632u, 0x834eafe9u, 0x6f45b834u, 0xa7720603u, 0xc1e97386u, 0x6167352du, 0x7f4194a8u, 0x58666fe7u, 0x77c7ac1au, 0xaeaf0cb1u,
        0x17aa1e5cu, 0x2f27260bu, 0xf1a743eeu, 0xc93c3a75u, 0x29358950u, 0x11accc6fu, 0xf2808f02u, 0xbd230279u, 0x08034984u, 0x21c84713u, 0xb0c72156u, 0xcf39e8bdu, 0x8f9012f8u, 0xc886b9f7u, 0x427dceeau, 0xf21db141u,
        0xabe9d9acu, 0x65d5891bu, 0xe08aabbeu, 0xa9756005u, 0xfc23d1a0u, 0xc866587fu, 0xd54b0bd2u, 0x1f763909u, 0x820a6ed4u, 0xd1d30c23u, 0x2a678326u, 0x70a7c04du, 0x93176548u, 0xeb01c807u, 0x69e7e5bau, 0x71e7b9d1u,
        0x7ea5a8fcu, 0x2cc8f02bu, 0x0687478eu, 0x74ae2995u, 0x9d656df0u, 0x60d3288fu, 0x3f47fca2u, 0xcd915399u, 0xbe102824u, 0x3ec35533u, 0x924798f6u, 0x2109bbddu, 0x235c8b98u, 0x89989a17u, 0x12d2f08au, 0xba762661u,
        0x87328c4cu, 0xf1525b3bu, 0x36ba175eu, 0x715f9725u, 0xd71f5e40u, 0xdcd43c9fu, 0xeee46172u, 0xe0fd5229u, 0x9e097574u, 0x800a2243u, 0x1f2462c6u, 0xf5f8db6du, 0x4f2485e8u, 0xe24c3027u, 0xc94bef5au, 0x1671f6f1u,
        0xe625839cu, 0xb902ca4bu, 0x7f801b2eu, 0x6842a8b5u, 0x90b6a290u, 0x3a8a94afu, 0xf1cd3a42u, 0xf98334b9u, 0x552b56c4u, 0x4d587353u, 0xaafae096u, 0xcf4e1efdu, 0xea745438u, 0xb75d8a37u, 0x509fe22au, 0x1ec42b81u,
        0x35538eecu, 0x31ab3d5bu, 0xfa7652feu, 0x34505e45u, 0x1ed03ae0u, 0x845730bfu, 0x74ef8712u, 0xcd2bfb49u, 0xb7eacc14u, 0x0e9f4863u, 0x83081266u, 0xe722868du, 0xde90f688u, 0x5f4da847u, 0x735bc8fau, 0x4a95c411u,
        0xd7d1ae3cu, 0xc15cb46bu, 0x9c79beceu, 0x52c1b7d5u, 0x93512730u, 0xe0db10cfu, 0x947847e2u, 0xb840a5d9u, 0x8bfcd564u, 0xec0fa173u, 0x37c8f836u, 0x61cf121du, 0x79ff6cd8u, 0xd4dd8a57u, 0xd34ca3cau, 0x7f4fc0a1u,
        0x49f4e18cu, 0x96682f7bu, 0x05a75e9eu, 0x730fb565u, 0x0d5e6780u, 0xa2f734dfu, 0x2bd47cb2u, 0x4d4a3469u, 0xd85672b4u, 0xde1a7e83u, 0x6cfa9206u, 0xddecc1adu, 0xc084b728u, 0xc70e3067u, 0xb97f729au, 0xa09b2131u,
        0x715228dcu, 0xb75eae8bu, 0x515c326eu, 0x06f356f5u, 0x095cfbd0u, 0x59cc9cefu, 0xa5b12582u, 0xe511a6f9u, 0x352ca404u, 0xbd70df93u, 0xa999dfd6u, 0x0454953du, 0xbb25d578u, 0xa9209a77u, 0xe641356au, 0x2060e5c1u,
    };
    uint32_t acc = 0x8eb37cc1u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 57) & 255]);
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
    case 0: acc = heavy_round(acc, 0x2db41c46u); break;
    case 1: acc = heavy_round(acc, 0x14ae46edu); break;
    case 2: acc = heavy_round(acc, 0xa6affb68u); break;
    case 3: acc = heavy_round(acc, 0x5eb227a7u); break;
    case 4: acc = heavy_round(acc, 0xe69680dau); break;
    case 5: acc = heavy_round(acc, 0x7eb45a71u); break;
    case 6: acc = heavy_round(acc, 0x5ca9911cu); break;
    case 7: acc = heavy_round(acc, 0xac9879cbu); break;
    case 8: acc = heavy_round(acc, 0xa58704aeu); break;
    case 9: acc = heavy_round(acc, 0xe5258435u); break;
    case 10: acc = heavy_round(acc, 0xbb30c810u); break;
    case 11: acc = heavy_round(acc, 0xb72f7c2fu); break;
    case 12: acc = heavy_round(acc, 0x95e9fbc2u); break;
    case 13: acc = heavy_round(acc, 0xa9920839u); break;
    case 14: acc = heavy_round(acc, 0xd5b11444u); break;
    case 15: acc = heavy_round(acc, 0x9f2412d3u); break;
    case 16: acc = heavy_round(acc, 0x875efa16u); break;
    case 17: acc = heavy_round(acc, 0x600c6a7du); break;
    case 18: acc = heavy_round(acc, 0x75b329b8u); break;
    case 19: acc = heavy_round(acc, 0xac1f61b7u); break;
    case 20: acc = heavy_round(acc, 0x05d4d3aau); break;
    case 21: acc = heavy_round(acc, 0x002d6f01u); break;
    case 22: acc = heavy_round(acc, 0x3010fc6cu); break;
    case 23: acc = heavy_round(acc, 0x186accdbu); break;
    case 24: acc = heavy_round(acc, 0x08dd9c7eu); break;
    case 25: acc = heavy_round(acc, 0x445819c5u); break;
    case 26: acc = heavy_round(acc, 0x5369c060u); break;
    case 27: acc = heavy_round(acc, 0x64d3f83fu); break;
    case 28: acc = heavy_round(acc, 0x0e42a892u); break;
    case 29: acc = heavy_round(acc, 0xfb3daec9u); break;
    case 30: acc = heavy_round(acc, 0xa3d5e994u); break;
    case 31: acc = heavy_round(acc, 0x98d0c7e3u); break;
    case 32: acc = heavy_round(acc, 0xb3d88be6u); break;
    case 33: acc = heavy_round(acc, 0x4fa1b20du); break;
    case 34: acc = heavy_round(acc, 0x17db2c08u); break;
    case 35: acc = heavy_round(acc, 0x12e35fc7u); break;
    case 36: acc = heavy_round(acc, 0x24931a7au); break;
    case 37: acc = heavy_round(acc, 0x4a5de791u); break;
    case 38: acc = heavy_round(acc, 0x0aa07bbcu); break;
    case 39: acc = heavy_round(acc, 0xcd3e23ebu); break;
    case 40: acc = heavy_round(acc, 0xecd9684eu); break;
    case 41: acc = heavy_round(acc, 0x12a65355u); break;
    case 42: acc = heavy_round(acc, 0x97620cb0u); break;
    case 43: acc = heavy_round(acc, 0x3aa7b84fu); break;
    case 44: acc = heavy_round(acc, 0x0a19c962u); break;
    case 45: acc = heavy_round(acc, 0xb08d3959u); break;
    case 46: acc = heavy_round(acc, 0x122552e4u); break;
    case 47: acc = heavy_round(acc, 0x1f9f00f3u); break;
    case 48: acc = heavy_round(acc, 0x499dd1b6u); break;
    case 49: acc = heavy_round(acc, 0x55c71d9du); break;
    case 50: acc = heavy_round(acc, 0xd1ad0258u); break;
    case 51: acc = heavy_round(acc, 0x0bbf21d7u); break;
    case 52: acc = heavy_round(acc, 0x4a9e554au); break;
    case 53: acc = heavy_round(acc, 0x70aec421u); break;
    case 54: acc = heavy_round(acc, 0xbead0f0cu); break;
    case 55: acc = heavy_round(acc, 0x57637efbu); break;
    case 56: acc = heavy_round(acc, 0xb797681eu); break;
    case 57: acc = heavy_round(acc, 0x0d8930e5u); break;
    case 58: acc = heavy_round(acc, 0x5c3ead00u); break;
    case 59: acc = heavy_round(acc, 0xc98bbc5fu); break;
    case 60: acc = heavy_round(acc, 0x8adc5e32u); break;
    case 61: acc = heavy_round(acc, 0x4a09a7e9u); break;
    case 62: acc = heavy_round(acc, 0x3d945034u); break;
    case 63: acc = heavy_round(acc, 0x49ffbe03u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

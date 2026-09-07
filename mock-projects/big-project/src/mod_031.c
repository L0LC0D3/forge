#include "heavy.h"
#include "mods.h"

int mod_031(int x)
{
    static const uint32_t local[256] = {
        0x52af5e5eu, 0x861e3225u, 0xf98f3d40u, 0xf65c8f9fu, 0xa6e29872u, 0xe1d01d29u, 0x789fc474u, 0x34262543u, 0xb8c289c6u, 0x958ad66du, 0x169044e8u, 0x97dee327u, 0xf011065au, 0xd49e21f1u, 0x5a85b29cu, 0x8b9f2d4bu,
        0x2be3222eu, 0x4d1403b5u, 0x7c9a4190u, 0x6d73a7afu, 0x40353142u, 0x8034bfb9u, 0x7c9165c4u, 0x6e813653u, 0xa2bec796u, 0x014ad9fdu, 0x69cbd338u, 0x7268fd37u, 0x9b06b92au, 0xdea71681u, 0x507b7decu, 0xd2ec605bu,
        0x89b719feu, 0xb8e47945u, 0x801799e0u, 0x2bd103bfu, 0x1b313e12u, 0x4c6c4649u, 0x1f109b14u, 0x9304cb63u, 0x7961b966u, 0x713a018du, 0x3fc43588u, 0xe101db47u, 0xd0d45ffau, 0xd4df6f11u, 0xeab15d3cu, 0xed72976bu,
        0xbd0845ceu, 0xf2c892d5u, 0xd1ec4630u, 0xe415a3cfu, 0x7003bee2u, 0x0ebfb0d9u, 0xa1d26464u, 0x15e1e473u, 0xa9285f36u, 0x35b14d1du, 0x22fe6bd8u, 0xea6a7d57u, 0xcf46facau, 0x88b02ba1u, 0xa17c508cu, 0xd582d27bu,
        0xc1f3a59eu, 0x56395065u, 0x4d3d4680u, 0x752287dfu, 0x3619b3b2u, 0xc5b7ff69u, 0x87cbc1b4u, 0x3b898183u, 0xb1cfb906u, 0x1949bcadu, 0x533f7628u, 0x49a3e367u, 0x7b6b899au, 0xc9c24c31u, 0x567157dcu, 0x5dae118bu,
        0x0fd6396eu, 0x00efb1f5u, 0x2a6f9ad0u, 0xfa18afefu, 0xf4201c82u, 0x361e31f9u, 0xe531b304u, 0x28aca293u, 0xf654c6d6u, 0xf0dc503du, 0x158c5478u, 0x7def0d77u, 0x318f0c6au, 0xf5fed0c1u, 0xa465732cu, 0x40c5549bu,
        0x694d013eu, 0x62e4b785u, 0x4f284320u, 0xda591bffu, 0x9003f952u, 0x7afb4889u, 0xaf793854u, 0xf23c47a3u, 0x8cf488a6u, 0x2b8207cdu, 0x042a06c8u, 0xdaccfb87u, 0x953e833au, 0x898eb951u, 0x2f6da27cu, 0x31d99babu,
        0xac34fd0eu, 0xce516115u, 0x9e4c3f70u, 0xd984cc0fu, 0x1ef24a22u, 0x95984319u, 0x0d5751a4u, 0xad6970b3u, 0x0f2bfe76u, 0x6293e35du, 0x5e9d8d18u, 0x97fead97u, 0x6146ee0au, 0xaedb05e1u, 0xf4dee5ccu, 0xec3be6bbu,
        0xa1ab2cdeu, 0x07aeaea5u, 0x48008fc0u, 0x277cc01fu, 0xb5580ef2u, 0xfd7e21a9u, 0xa6c0fef4u, 0x7fa51dc3u, 0x69b82846u, 0xe9aae2edu, 0x59abe768u, 0xe18523a7u, 0x37b54cdau, 0xce8cb671u, 0x9b4e3d1cu, 0x437d35cbu,
        0xce0c90aeu, 0xd5b5a035u, 0x19aa3410u, 0x7061f82fu, 0x36e247c2u, 0x3075e439u, 0xf4eb4044u, 0xaea04ed3u, 0xac960616u, 0x5ea0067du, 0x6f5a15b8u, 0xe7a15db7u, 0x71d69faau, 0x1f8ccb01u, 0xc290a86cu, 0x336e88dbu,
        0x40f6287eu, 0x915f35c5u, 0xcdee2c60u, 0xec95743fu, 0x267df492u, 0x42888ac9u, 0x924b1594u, 0xb04c03e3u, 0xdb0297e6u, 0x398c4e0du, 0xaeed1808u, 0xeed45bc7u, 0xf037e67au, 0x37044391u, 0x53bb27bcu, 0xf020dfebu,
        0x6544f44eu, 0xb5e46f55u, 0x5cb178b0u, 0x70b8344fu, 0x76581562u, 0x6dff1559u, 0x8a957ee4u, 0x3ad93cf3u, 0xbb7addb6u, 0x5cc8b99du, 0x0ce9ee58u, 0x5fdf1dd7u, 0xeaa6214au, 0x985c2021u, 0xd122bb0cu, 0xf5e53afbu,
        0xd115f41eu, 0x70be4ce5u, 0x4b191900u, 0x7dab385fu, 0x57ddaa32u, 0xa36283e9u, 0xaabf7c34u, 0x54b8fa03u, 0xa7bbd786u, 0xa4ee492du, 0xb31598a8u, 0xd7c2a3e7u, 0xc02e501au, 0x453d60b1u, 0xa65c625cu, 0x194c9a0bu,
        0x15c627eeu, 0x31a5ce75u, 0xfb8a0d50u, 0x508f806fu, 0x0bbbb302u, 0x197bd679u, 0xd0fe0d84u, 0x649c3b13u, 0x5cc28556u, 0x78d5fcbdu, 0x507516f8u, 0x37bfedf7u, 0xc71d72eau, 0x4d910541u, 0x783d1dacu, 0x9727fd1bu,
        0x8ff28fbeu, 0x3a93f405u, 0xfda955a0u, 0xf2c60c7fu, 0xb1df2fd2u, 0xdd540d09u, 0x3cc632d4u, 0x41740023u, 0xcacbe726u, 0x5998d44du, 0x694d6948u, 0xb557fc07u, 0x1d0089bau, 0x5f800dd1u, 0x74d9ecfcu, 0x2488642bu,
        0x37782b8eu, 0x2fc1bd95u, 0x5e5bf1f0u, 0x49efdc8fu, 0x197520a2u, 0x62342799u, 0xdeccec24u, 0x42714933u, 0xe554fcf6u, 0x728fcfddu, 0xa7238f98u, 0xea4bce17u, 0x76a4948au, 0x57737a61u, 0xa387d04cu, 0xfebecf3bu,
    };
    uint32_t acc = 0xe579fe3bu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 31) & 255]);
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
    case 0: acc = heavy_round(acc, 0x625d0a70u); break;
    case 1: acc = heavy_round(acc, 0x52411b0fu); break;
    case 2: acc = heavy_round(acc, 0xfefc4d22u); break;
    case 3: acc = heavy_round(acc, 0x3e4c6a19u); break;
    case 4: acc = heavy_round(acc, 0x35074ca4u); break;
    case 5: acc = heavy_round(acc, 0x525b2fb3u); break;
    case 6: acc = heavy_round(acc, 0x688cb176u); break;
    case 7: acc = heavy_round(acc, 0xeecefa5du); break;
    case 8: acc = heavy_round(acc, 0x47c7b818u); break;
    case 9: acc = heavy_round(acc, 0x6f44dc97u); break;
    case 10: acc = heavy_round(acc, 0xdd91510au); break;
    case 11: acc = heavy_round(acc, 0x4d140ce1u); break;
    case 12: acc = heavy_round(acc, 0x658e40ccu); break;
    case 13: acc = heavy_round(acc, 0x666585bbu); break;
    case 14: acc = heavy_round(acc, 0xf2223fdeu); break;
    case 15: acc = heavy_round(acc, 0x6a4ca5a5u); break;
    case 16: acc = heavy_round(acc, 0x59701ac0u); break;
    case 17: acc = heavy_round(acc, 0x0e88cf1fu); break;
    case 18: acc = heavy_round(acc, 0xb5eed1f2u); break;
    case 19: acc = heavy_round(acc, 0x21d808a9u); break;
    case 20: acc = heavy_round(acc, 0xe05bb9f4u); break;
    case 21: acc = heavy_round(acc, 0x56029cc3u); break;
    case 22: acc = heavy_round(acc, 0xf4119b46u); break;
    case 23: acc = heavy_round(acc, 0xcf07b9edu); break;
    case 24: acc = heavy_round(acc, 0xfc0cd268u); break;
    case 25: acc = heavy_round(acc, 0xb11312a7u); break;
    case 26: acc = heavy_round(acc, 0xa6246fdau); break;
    case 27: acc = heavy_round(acc, 0x1d237d71u); break;
    case 28: acc = heavy_round(acc, 0x1b40581cu); break;
    case 29: acc = heavy_round(acc, 0xdc8a94cbu); break;
    case 30: acc = heavy_round(acc, 0x2e9463aeu); break;
    case 31: acc = heavy_round(acc, 0x75ad5735u); break;
    case 32: acc = heavy_round(acc, 0xcb287f10u); break;
    case 33: acc = heavy_round(acc, 0x18adc72fu); break;
    case 34: acc = heavy_round(acc, 0x2e35cac2u); break;
    case 35: acc = heavy_round(acc, 0xd0e58b39u); break;
    case 36: acc = heavy_round(acc, 0xe620bb44u); break;
    case 37: acc = heavy_round(acc, 0x40598dd3u); break;
    case 38: acc = heavy_round(acc, 0x09183916u); break;
    case 39: acc = heavy_round(acc, 0xec8e9d7du); break;
    case 40: acc = heavy_round(acc, 0x73a1c0b8u); break;
    case 41: acc = heavy_round(acc, 0x60670cb7u); break;
    case 42: acc = heavy_round(acc, 0x6e9a82aau); break;
    case 43: acc = heavy_round(acc, 0x2cf15201u); break;
    case 44: acc = heavy_round(acc, 0xad75836cu); break;
    case 45: acc = heavy_round(acc, 0xb34fa7dbu); break;
    case 46: acc = heavy_round(acc, 0x78bebb7eu); break;
    case 47: acc = heavy_round(acc, 0xac20acc5u); break;
    case 48: acc = heavy_round(acc, 0xde2b3760u); break;
    case 49: acc = heavy_round(acc, 0x2511033fu); break;
    case 50: acc = heavy_round(acc, 0x36be3792u); break;
    case 51: acc = heavy_round(acc, 0x3b7df1c9u); break;
    case 52: acc = heavy_round(acc, 0x0ccb5094u); break;
    case 53: acc = heavy_round(acc, 0xc35102e3u); break;
    case 54: acc = heavy_round(acc, 0xb6dd8ae6u); break;
    case 55: acc = heavy_round(acc, 0x5b7ca50du); break;
    case 56: acc = heavy_round(acc, 0xa9cb8308u); break;
    case 57: acc = heavy_round(acc, 0xbdc1cac7u); break;
    case 58: acc = heavy_round(acc, 0xe380897au); break;
    case 59: acc = heavy_round(acc, 0x6da68a91u); break;
    case 60: acc = heavy_round(acc, 0xb142c2bcu); break;
    case 61: acc = heavy_round(acc, 0xdac5beebu); break;
    case 62: acc = heavy_round(acc, 0xc77e474eu); break;
    case 63: acc = heavy_round(acc, 0xa4dfa655u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

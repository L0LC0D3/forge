#include "heavy.h"
#include "mods.h"

int mod_074(int x)
{
    static const uint32_t local[256] = {
        0x0ec859a1u, 0x910aa68cu, 0x1c01307bu, 0xddd26b9eu, 0xd96d5e65u, 0x1275fc80u, 0xd787c5dfu, 0x99f1d9b2u, 0xacd5ed69u, 0x6f24d7b4u, 0x9fd39f83u, 0x3f873f06u, 0x80ff8aadu, 0x258eec28u, 0x26b0e167u, 0xb0486f9au,
        0xf29dfa31u, 0xeeed2ddcu, 0x593bef8bu, 0x0a7e7f6eu, 0x9d5f3ff5u, 0x6cadd0d0u, 0x66c56defu, 0xda99c282u, 0x986f9ff9u, 0x13284904u, 0x63f64093u, 0xbc05ccd6u, 0x193d9e3du, 0x85914a78u, 0x2e338b77u, 0xbd3d726au,
        0x807dfec1u, 0xd72ec92cu, 0x7342b29bu, 0x1b1ec73eu, 0x556fc585u, 0x65cbf920u, 0x012d59ffu, 0x277f1f52u, 0xf3603689u, 0x416d4e54u, 0xc26565a3u, 0x6eff0ea6u, 0xed6ed5cdu, 0x55447cc8u, 0x0a28f987u, 0x721e693au,
        0x6c916751u, 0xc5e4787cu, 0x152679abu, 0x8590430eu, 0x0bd7ef15u, 0x38b57570u, 0xe2608a0fu, 0xadcef022u, 0xf6f0b119u, 0xf8a8e7a4u, 0xc8520eb3u, 0x89f00476u, 0x4eec315du, 0x2c2d8318u, 0x6a522b97u, 0xa1b8540au,
        0x194133e1u, 0x90633bccu, 0xf23844bbu, 0xaaeff2deu, 0x3d10bca5u, 0x6d8f45c0u, 0xb23ffe1fu, 0x99f634f2u, 0x52aa0fa9u, 0xb8d014f4u, 0x932d3bc3u, 0x9195ae46u, 0x494eb0edu, 0x97115d68u, 0xf2b021a7u, 0x061832dau,
        0x27366471u, 0xb540131cu, 0xd60913cbu, 0xa79ad6aeu, 0x67d32e35u, 0x29be6a10u, 0x94ecb62fu, 0xe7a1edc2u, 0xbc555239u, 0xd317d644u, 0x60a7ecd3u, 0x2ded0c16u, 0x326f547du, 0x67f50bb8u, 0x4b83dbb7u, 0x108b05aau,
        0x0559f901u, 0xac4ffe6cu, 0xb469e6dbu, 0x232dee7eu, 0x9d1843c5u, 0x7fe7e260u, 0x3ac7b23fu, 0x31bf1a92u, 0x7ffb78c9u, 0xb9f52b94u, 0x9eb321e3u, 0xfa331de6u, 0x3a671c0du, 0x061d8e08u, 0x314e59c7u, 0xb99dcc7au,
        0x80d4f191u, 0x36a7fdbcu, 0xb96bbdebu, 0x20863a4eu, 0x1018fd55u, 0xbff0aeb0u, 0xf071f24fu, 0x827abb62u, 0x0fe58359u, 0x511d14e4u, 0xfb7fdaf3u, 0x54e4e3b6u, 0xfb8f079du, 0xbe0fe458u, 0x84d09bd7u, 0x511d874au,
        0x55104e21u, 0xae9d110cu, 0x595f98fbu, 0xcdc0ba1eu, 0xa64e5ae5u, 0xc6fdcf00u, 0xaecc765fu, 0x2341d032u, 0x949c71e9u, 0x3d849234u, 0x757f1803u, 0x2fbf5d86u, 0x0a80172du, 0x11910ea8u, 0x5b0ba1e7u, 0x4e17361au,
        0xbbb50eb1u, 0x57c4385cu, 0x60d6780bu, 0x543a6deeu, 0x87715c75u, 0x4f744350u, 0x2af83e6fu, 0x6cc15902u, 0x7ce94479u, 0x3560a384u, 0x6b61d913u, 0xdfbf8b56u, 0x86134abdu, 0x07a60cf8u, 0x0d406bf7u, 0x1ed7d8eau,
        0xfcac3341u, 0xaef273acu, 0x04a15b1bu, 0xa89055beu, 0xad7b0205u, 0x40f90ba0u, 0xe6564a7fu, 0x96e655d2u, 0x0dd4fb09u, 0x502648d4u, 0xac191e23u, 0xed226d26u, 0xa761a24du, 0x7c93df48u, 0x48effa07u, 0xf8ec6fbau,
        0xfe1ebbd1u, 0xba3cc2fcu, 0xf1d1422bu, 0x5a9f718eu, 0x74a44b95u, 0x007127f0u, 0x3e879a8fu, 0x88ddc6a2u, 0xf2a89599u, 0x568a8224u, 0x86d5e733u, 0xe36502f6u, 0x51c41dddu, 0x71df8598u, 0x1fdb4c17u, 0xa921fa8au,
        0xd475a861u, 0x58f8264cu, 0x5db72d3bu, 0x6584c15eu, 0x2b663925u, 0xc0019840u, 0x7d6d2e9fu, 0xa914ab72u, 0xcced1429u, 0x12824f74u, 0xdb093443u, 0x21444cc6u, 0xa2d3bd6du, 0x5e4dffe8u, 0x18036227u, 0x6385795au,
        0x5259f8f1u, 0x93b99d9cu, 0x15e41c4bu, 0xff9d452eu, 0xa279cab5u, 0xcf0f5c90u, 0xe92806afu, 0xad380442u, 0xc46b76b9u, 0x9f42b0c4u, 0x28640553u, 0xa8bd4a96u, 0x826980fdu, 0x7de44e38u, 0x3ba93c37u, 0x9363ec2au,
        0x98b4ad81u, 0xec5628ecu, 0x90290f5bu, 0x6a85fcfeu, 0xbcd80045u, 0xea3f74e0u, 0xd41922bfu, 0x6a34d112u, 0x172cbd49u, 0xb940a614u, 0x9ed75a63u, 0xef0cfc66u, 0x329e688du, 0x21e77088u, 0x294dda47u, 0xab4a52fau,
        0xa6aec611u, 0xade2c83cu, 0xfa97066bu, 0xc31be8ceu, 0xffb9d9d5u, 0x8b76e130u, 0xace182cfu, 0xa43811e2u, 0xa979e7d9u, 0x0e312f64u, 0x2e943373u, 0xacb06236u, 0xdfcb741du, 0x00dc66d8u, 0x23b23c57u, 0xf505adcau,
    };
    uint32_t acc = 0x8fb260cau ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 74) & 255]);
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
    case 0: acc = heavy_round(acc, 0x98047389u); break;
    case 1: acc = heavy_round(acc, 0x03126754u); break;
    case 2: acc = heavy_round(acc, 0xd0bdaaa3u); break;
    case 3: acc = heavy_round(acc, 0x11f88fa6u); break;
    case 4: acc = heavy_round(acc, 0x368062cdu); break;
    case 5: acc = heavy_round(acc, 0xce56a5c8u); break;
    case 6: acc = heavy_round(acc, 0x6d6b0e87u); break;
    case 7: acc = heavy_round(acc, 0xddd77a3au); break;
    case 8: acc = heavy_round(acc, 0x4abd4451u); break;
    case 9: acc = heavy_round(acc, 0x1d2cb17cu); break;
    case 10: acc = heavy_round(acc, 0xdb875eabu); break;
    case 11: acc = heavy_round(acc, 0x90b9e40eu); break;
    case 12: acc = heavy_round(acc, 0xec1b1c15u); break;
    case 13: acc = heavy_round(acc, 0xc50cbe70u); break;
    case 14: acc = heavy_round(acc, 0xeae53f0fu); break;
    case 15: acc = heavy_round(acc, 0xa9aa2122u); break;
    case 16: acc = heavy_round(acc, 0xdf982e19u); break;
    case 17: acc = heavy_round(acc, 0xb9f840a4u); break;
    case 18: acc = heavy_round(acc, 0xe7cf93b3u); break;
    case 19: acc = heavy_round(acc, 0x234dc576u); break;
    case 20: acc = heavy_round(acc, 0x4c94fe5du); break;
    case 21: acc = heavy_round(acc, 0x546dec18u); break;
    case 22: acc = heavy_round(acc, 0x606d8097u); break;
    case 23: acc = heavy_round(acc, 0x51f9a50au); break;
    case 24: acc = heavy_round(acc, 0xfbd850e1u); break;
    case 25: acc = heavy_round(acc, 0x1c9db4ccu); break;
    case 26: acc = heavy_round(acc, 0x2e6669bbu); break;
    case 27: acc = heavy_round(acc, 0xb905d3deu); break;
    case 28: acc = heavy_round(acc, 0xa4d329a5u); break;
    case 29: acc = heavy_round(acc, 0xcedccec0u); break;
    case 30: acc = heavy_round(acc, 0xe8c5f31fu); break;
    case 31: acc = heavy_round(acc, 0xab61a5f2u); break;
    case 32: acc = heavy_round(acc, 0x0d24cca9u); break;
    case 33: acc = heavy_round(acc, 0x8d59adf4u); break;
    case 34: acc = heavy_round(acc, 0x222000c3u); break;
    case 35: acc = heavy_round(acc, 0xcb67af46u); break;
    case 36: acc = heavy_round(acc, 0xfe5ebdedu); break;
    case 37: acc = heavy_round(acc, 0x73100668u); break;
    case 38: acc = heavy_round(acc, 0x16f4b6a7u); break;
    case 39: acc = heavy_round(acc, 0xbdf1c3dau); break;
    case 40: acc = heavy_round(acc, 0x5608c171u); break;
    case 41: acc = heavy_round(acc, 0xfbfccc1cu); break;
    case 42: acc = heavy_round(acc, 0xb05478cbu); break;
    case 43: acc = heavy_round(acc, 0xa4acf7aeu); break;
    case 44: acc = heavy_round(acc, 0xb3e4db35u); break;
    case 45: acc = heavy_round(acc, 0xf6923310u); break;
    case 46: acc = heavy_round(acc, 0xfec3eb2fu); break;
    case 47: acc = heavy_round(acc, 0x33ad9ec2u); break;
    case 48: acc = heavy_round(acc, 0x8a734f39u); break;
    case 49: acc = heavy_round(acc, 0xf26baf44u); break;
    case 50: acc = heavy_round(acc, 0x915ff1d3u); break;
    case 51: acc = heavy_round(acc, 0x76434d16u); break;
    case 52: acc = heavy_round(acc, 0x95b6a17du); break;
    case 53: acc = heavy_round(acc, 0x6041f4b8u); break;
    case 54: acc = heavy_round(acc, 0x4d41b0b7u); break;
    case 55: acc = heavy_round(acc, 0x970cd6aau); break;
    case 56: acc = heavy_round(acc, 0xfc379601u); break;
    case 57: acc = heavy_round(acc, 0xd71ef76cu); break;
    case 58: acc = heavy_round(acc, 0xa9228bdbu); break;
    case 59: acc = heavy_round(acc, 0x3f4c4f7eu); break;
    case 60: acc = heavy_round(acc, 0x9e4930c5u); break;
    case 61: acc = heavy_round(acc, 0x32d1eb60u); break;
    case 62: acc = heavy_round(acc, 0x7140273fu); break;
    case 63: acc = heavy_round(acc, 0x617b0b92u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

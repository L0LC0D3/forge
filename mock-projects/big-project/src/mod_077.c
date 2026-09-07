#include "heavy.h"
#include "mods.h"

int mod_077(int x)
{
    static const uint32_t local[256] = {
        0xe4acc738u, 0x250d6137u, 0xf137cd2au, 0xc11d1a81u, 0x3a11b1ecu, 0x9c45045bu, 0x188f6dfeu, 0x5f58bd45u, 0xeb170de0u, 0xb701e7bfu, 0xeb84d212u, 0xa1a2ca49u, 0x0f6d4f14u, 0x4b71ef63u, 0xd7448d66u, 0x4a36c58du,
        0x1eb22988u, 0xd64f3f47u, 0xdf9a73fau, 0x74e67311u, 0x3aa4913cu, 0xf7843b6bu, 0x4b4599ceu, 0xcf5dd6d5u, 0x2298ba30u, 0x070f87cfu, 0x0b8c52e2u, 0xd3a734d9u, 0xc42c1864u, 0x26280873u, 0xf3103336u, 0x08ef111du,
        0x9d395fd8u, 0x70a0e157u, 0x0fe20ecau, 0x8e882fa1u, 0x630c848cu, 0x328d767bu, 0xbcd5f99eu, 0x752f9465u, 0xa2d6ba80u, 0x46256bdfu, 0x3e1747b2u, 0xaa908369u, 0x4f6275b4u, 0xfde8a583u, 0xfcfc8d06u, 0x7b0880adu,
        0x70076a28u, 0x3f034767u, 0xb71b9d9au, 0xedab5031u, 0x64de8bdcu, 0xaff1b58bu, 0x349d8d6eu, 0x7e86f5f5u, 0x74360ed0u, 0x1f6493efu, 0x59d2b082u, 0xfb27b5f9u, 0x95456704u, 0x8764c693u, 0xa8069ad6u, 0x855c143du,
        0xac214878u, 0x50b77177u, 0x8194206au, 0x0038d4c1u, 0xaaefa72cu, 0xba81f89bu, 0xc539553eu, 0x6b5cfb85u, 0x4c5bb720u, 0x8a2dffffu, 0x94ab8d52u, 0xf075cc89u, 0x5b49ec54u, 0x678d6ba3u, 0x5a6b5ca6u, 0xa702cbcdu,
        0xbbcbfac8u, 0x893e5f87u, 0x62d8973au, 0x5259bd51u, 0xa954d67cu, 0x954f3fabu, 0x9c86510eu, 0x9deaa515u, 0xde2cb370u, 0xda22b00fu, 0x53cede22u, 0x9bc3c719u, 0x982505a4u, 0x439394b3u, 0xfda7d276u, 0x8955a75du,
        0xae8c8118u, 0xb0591197u, 0x65b6020au, 0x1e7709e1u, 0x2d6319ccu, 0x8baa8abbu, 0xd3a180deu, 0xeaa8f2a5u, 0x29ce03c0u, 0xcf23a41fu, 0xfba9a2f2u, 0x849aa5a9u, 0xc3cbb2f4u, 0xd0e841c3u, 0xce78fc46u, 0x8feda6edu,
        0x8927db68u, 0x820887a7u, 0x7c3960dau, 0xdd39ba71u, 0xadaf711cu, 0x0124d9cbu, 0x3ee7e4aeu, 0x2850e435u, 0xcca4a810u, 0xa551dc2fu, 0xbfe8dbc2u, 0x38c36839u, 0x2772f444u, 0xe53c72d3u, 0x2cdbda16u, 0x68a3ca7du,
        0x95a309b8u, 0xbe8dc1b7u, 0x4fafb3aau, 0xd58acf01u, 0x9a0edc6cu, 0x818f2cdbu, 0x3df67c7eu, 0xbfdb79c5u, 0x5155a060u, 0x250e583fu, 0x73798892u, 0xdc470ec9u, 0x2d8fc994u, 0x868127e3u, 0x6c0d6be6u, 0x9b91120du,
        0xb3430c08u, 0x3a69bfc7u, 0x10a5fa7au, 0xac934791u, 0xab965bbcu, 0xd0fa83ebu, 0x8baa484eu, 0x3c81b355u, 0x7fc5ecb0u, 0xb2fa184fu, 0x5888a962u, 0xb96e9959u, 0xb1d732e4u, 0xfae760f3u, 0xa28ab1b6u, 0x1b0e7d9du,
        0xa68ce258u, 0xee5d81d7u, 0x46e9354au, 0xf5bc2421u, 0x349aef0cu, 0xfbb7defbu, 0x0e20481eu, 0xdbbc90e5u, 0xad1a8d00u, 0x5ff61c5fu, 0xf0833e32u, 0xd0c307e9u, 0x513e3034u, 0xd8e01e03u, 0x7a10ab86u, 0xd3b50d2du,
        0x69458ca8u, 0x076a07e7u, 0xa186641au, 0xc2ae64b1u, 0x70b1965cu, 0x66583e0bu, 0xa6b57beeu, 0x1d451275u, 0x0bb88150u, 0xf923646fu, 0xcc164702u, 0x690d5a79u, 0xb9f9c184u, 0x171c5f13u, 0xff9c5956u, 0x3c5dc0bdu,
        0x7a720af8u, 0xf6d051f7u, 0xc6ca86eau, 0x33530941u, 0xd4af51acu, 0xddaca11bu, 0x0206e3beu, 0x53143805u, 0xfb44c9a0u, 0x17e2f07fu, 0x5b2ec3d2u, 0x9f569109u, 0xfb7ee6d4u, 0x1c8d2423u, 0x736abb26u, 0xe621984du,
        0x2e575d48u, 0x82116007u, 0x24429dbau, 0x05d311d1u, 0x5ea920fcu, 0xa6c6082bu, 0x67f17f8eu, 0x31630195u, 0x58a465f0u, 0x31d5c08fu, 0xbcf9b4a2u, 0xf6e7ab99u, 0xd682a024u, 0xd0636d33u, 0x18f8d0f6u, 0x0c5993ddu,
        0xfe7a8398u, 0xd2ee3217u, 0xbebba88au, 0x26977e61u, 0xe5f4044cu, 0x8ef5733bu, 0x8b924f5eu, 0x5eaa6f25u, 0xcdfc5640u, 0xa8dcd49fu, 0x8fe41972u, 0xe949aa29u, 0x0cf9ed74u, 0xaa103a43u, 0x07039ac6u, 0x249eb36du,
        0xd9a07de8u, 0x8767c827u, 0x0242a75au, 0x40494ef1u, 0x6b24fb9cu, 0xfbcbe24bu, 0x5b46532eu, 0x03a380b5u, 0x22b19a90u, 0xdb192cafu, 0xc19af242u, 0x76458cb9u, 0xb219cec4u, 0xc1448b53u, 0xf7881896u, 0x6ec9f6fdu,
    };
    uint32_t acc = 0x64469dfdu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 77) & 255]);
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
    case 0: acc = heavy_round(acc, 0x8ce2383au); break;
    case 1: acc = heavy_round(acc, 0x03fcea51u); break;
    case 2: acc = heavy_round(acc, 0x178c1f7cu); break;
    case 3: acc = heavy_round(acc, 0x5633f4abu); break;
    case 4: acc = heavy_round(acc, 0x3541820eu); break;
    case 5: acc = heavy_round(acc, 0xbdf22215u); break;
    case 6: acc = heavy_round(acc, 0xaf5c0c70u); break;
    case 7: acc = heavy_round(acc, 0x0800350fu); break;
    case 8: acc = heavy_round(acc, 0xe80c9f22u); break;
    case 9: acc = heavy_round(acc, 0x96cc9419u); break;
    case 10: acc = heavy_round(acc, 0xde456ea4u); break;
    case 11: acc = heavy_round(acc, 0xfe0ee9b3u); break;
    case 12: acc = heavy_round(acc, 0xe6c92376u); break;
    case 13: acc = heavy_round(acc, 0x8f4cc45du); break;
    case 14: acc = heavy_round(acc, 0x46a6fa18u); break;
    case 15: acc = heavy_round(acc, 0xc6e73697u); break;
    case 16: acc = heavy_round(acc, 0xcaabe30au); break;
    case 17: acc = heavy_round(acc, 0x2f9976e1u); break;
    case 18: acc = heavy_round(acc, 0x6890a2ccu); break;
    case 19: acc = heavy_round(acc, 0x12907fbbu); break;
    case 20: acc = heavy_round(acc, 0x39ecf1deu); break;
    case 21: acc = heavy_round(acc, 0x3483afa5u); break;
    case 22: acc = heavy_round(acc, 0x86379cc0u); break;
    case 23: acc = heavy_round(acc, 0x8476691fu); break;
    case 24: acc = heavy_round(acc, 0x685ba3f2u); break;
    case 25: acc = heavy_round(acc, 0x0f0ab2a9u); break;
    case 26: acc = heavy_round(acc, 0xb5aa5bf4u); break;
    case 27: acc = heavy_round(acc, 0x518cd6c3u); break;
    case 28: acc = heavy_round(acc, 0x77328d46u); break;
    case 29: acc = heavy_round(acc, 0x3a2003edu); break;
    case 30: acc = heavy_round(acc, 0x53c49468u); break;
    case 31: acc = heavy_round(acc, 0x4eb3eca7u); break;
    case 32: acc = heavy_round(acc, 0x082b81dau); break;
    case 33: acc = heavy_round(acc, 0xaaab6771u); break;
    case 34: acc = heavy_round(acc, 0x4c633a1cu); break;
    case 35: acc = heavy_round(acc, 0x535c0ecbu); break;
    case 36: acc = heavy_round(acc, 0x97d395aeu); break;
    case 37: acc = heavy_round(acc, 0xddcee135u); break;
    case 38: acc = heavy_round(acc, 0xebd88110u); break;
    case 39: acc = heavy_round(acc, 0x1469e12fu); break;
    case 40: acc = heavy_round(acc, 0x731f1cc2u); break;
    case 41: acc = heavy_round(acc, 0x496ab539u); break;
    case 42: acc = heavy_round(acc, 0x2d9fdd44u); break;
    case 43: acc = heavy_round(acc, 0xdb5a47d3u); break;
    case 44: acc = heavy_round(acc, 0x5c3dab16u); break;
    case 45: acc = heavy_round(acc, 0x32e1677du); break;
    case 46: acc = heavy_round(acc, 0xbc5202b8u); break;
    case 47: acc = heavy_round(acc, 0xbda666b7u); break;
    case 48: acc = heavy_round(acc, 0x32ae14aau); break;
    case 49: acc = heavy_round(acc, 0x301bbc01u); break;
    case 50: acc = heavy_round(acc, 0x16d8e56cu); break;
    case 51: acc = heavy_round(acc, 0x3867a1dbu); break;
    case 52: acc = heavy_round(acc, 0x32926d7eu); break;
    case 53: acc = heavy_round(acc, 0xd6ccb6c5u); break;
    case 54: acc = heavy_round(acc, 0x8ee3b960u); break;
    case 55: acc = heavy_round(acc, 0x543b9d3fu); break;
    case 56: acc = heavy_round(acc, 0x9f440992u); break;
    case 57: acc = heavy_round(acc, 0x5df59bc9u); break;
    case 58: acc = heavy_round(acc, 0x149af294u); break;
    case 59: acc = heavy_round(acc, 0xb5683ce3u); break;
    case 60: acc = heavy_round(acc, 0xed277ce6u); break;
    case 61: acc = heavy_round(acc, 0x35a9ef0du); break;
    case 62: acc = heavy_round(acc, 0x03944508u); break;
    case 63: acc = heavy_round(acc, 0x3c3fa4c7u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

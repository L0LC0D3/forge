#include "heavy.h"
#include "mods.h"

int mod_061(int x)
{
    static const uint32_t local[256] = {
        0x03a365e8u, 0x79fd9027u, 0x898dcf5au, 0xf90a56f1u, 0x7e22639cu, 0x121a2a4bu, 0xb5effb2eu, 0x9f3108b5u, 0xb5118290u, 0x2867f4afu, 0x9a4b1a42u, 0x8f2794b9u, 0xccc436c4u, 0x295bd353u, 0x8f66c096u, 0x44087efdu,
        0x7a2b3438u, 0xc0e6ea37u, 0xe8d9c22au, 0xc8f48b81u, 0x80086eecu, 0xee1a9d5bu, 0x4c5e32feu, 0xa056be45u, 0x85631ae0u, 0x1f0c90bfu, 0xf4656712u, 0x1d685b49u, 0x393bac14u, 0xb8faa863u, 0xf1ebf266u, 0x33f4e68du,
        0xf77fd688u, 0xb0af0847u, 0xc18da8fau, 0x025e2411u, 0x633e8e3cu, 0x1724146bu, 0xc7d99eceu, 0x99e017d5u, 0xaa1c0730u, 0xbe6870cfu, 0x88e627e2u, 0xc91505d9u, 0x6505b564u, 0x5ac30173u, 0xaf24d836u, 0xecb9721du,
        0x4a264cd8u, 0xc416ea57u, 0x357683cau, 0x0ab020a1u, 0x2419c18cu, 0x3b878f7bu, 0x487f3e9eu, 0xbb461565u, 0xc2614780u, 0xd95c94dfu, 0xb33a5cb2u, 0xa4b69469u, 0xd71752b4u, 0x8725de83u, 0xeace7206u, 0x8cef21adu,
        0xf5e39728u, 0x2a1f9067u, 0x0da1529au, 0x45938131u, 0x282f08dcu, 0xe1d60e8bu, 0x69ac126eu, 0xf641b6f5u, 0xca97dbd0u, 0x7f09fcefu, 0x5e0f0582u, 0x891606f9u, 0xa7a58404u, 0x96d43f93u, 0xabe5bfd6u, 0x3d6ef53du,
        0x83bcb578u, 0xd609fa77u, 0x8a5b156au, 0xa4f145c1u, 0x8e53642cu, 0x78e0919bu, 0x11fd1a3eu, 0x8ecbfc85u, 0x6c64c420u, 0x0ad1a8ffu, 0xd3512252u, 0xa53c5d89u, 0xd0254954u, 0xd2bf24a3u, 0xaca7c1a6u, 0xc151eccdu,
        0xd1f6a7c8u, 0x8f572887u, 0x3330cc3au, 0x38f26e51u, 0x7e9bd37cu, 0x67b818abu, 0x434f560eu, 0xab1de615u, 0x4ead0070u, 0x3454990fu, 0x8c2db322u, 0x0e729819u, 0x7b4ba2a4u, 0x84178db3u, 0x2a917776u, 0x05f1085du,
        0x64166e18u, 0x01c81a97u, 0xa6ef770au, 0xbffffae1u, 0x7a5d56ccu, 0x1dada3bbu, 0xeabfc5deu, 0xe3b073a5u, 0x659590c0u, 0x1f73cd1fu, 0x0111b7f2u, 0x5041b6a9u, 0x550d8ff4u, 0x044e7ac3u, 0xb65fe146u, 0xb2e547edu,
        0xb2e10868u, 0xcd5dd0a7u, 0x6ba415dau, 0x36c2eb71u, 0xac2cee1cu, 0x225232cbu, 0xb0ab69aeu, 0xd33ca535u, 0x42837510u, 0x6c50452fu, 0x79aa30c2u, 0xfc72b939u, 0xdaa01144u, 0xcd14ebd3u, 0x040fff16u, 0xba07ab7du,
        0x7c5b76b8u, 0x96594ab7u, 0xbe9ba8aau, 0x68244001u, 0x37df996cu, 0x2576c5dbu, 0xc8af417eu, 0xa6bb7ac5u, 0x641bad60u, 0x474b013fu, 0xdce41d92u, 0x3b0e9fc9u, 0xaa782694u, 0x885be0e3u, 0xbaded0e6u, 0xe771330du,
        0x13cab908u, 0x153b88c7u, 0x64632f7au, 0x7d4cf891u, 0x8a8a58bcu, 0x0f2c5cebu, 0xc1a84d4eu, 0xad65f455u, 0x864339b0u, 0x7905014fu, 0x80ec7e62u, 0x5a5e6a59u, 0xd44acfe4u, 0x205459f3u, 0x454956b6u, 0x717ade9du,
        0xb1b3cf58u, 0x26c58ad7u, 0x78c7aa4au, 0x8da61521u, 0xaa822c0cu, 0x0fc3f7fbu, 0x55b38d1eu, 0xe8b511e5u, 0xf21f1a00u, 0x765f455fu, 0xfb305332u, 0x5eeb18e9u, 0x290d0d34u, 0xcf6f5703u, 0xa10c9086u, 0x88bdae2du,
        0xc3dbb9a8u, 0xdbf850e7u, 0x3ed6191au, 0x2ed895b1u, 0x875c135cu, 0xafce970bu, 0x3a2e00eeu, 0x9c61d375u, 0xce144e50u, 0x707acd6fu, 0xf05c9c02u, 0x937dab79u, 0x8af3de84u, 0x305dd813u, 0x2f257e56u, 0xe812a1bdu,
        0x3d4777f8u, 0x8a14daf7u, 0xf0db7beau, 0x04cd7a41u, 0x49ed0eacu, 0xe01d3a1bu, 0xefb4a8beu, 0xde653905u, 0x6dc7d6a0u, 0x64b8997fu, 0xe45e58d2u, 0x191f2209u, 0x3d7443d4u, 0x4e10dd23u, 0x83d12026u, 0x6492b94du,
        0xe63c0a48u, 0xda9c2907u, 0x9064d2bau, 0x51adc2d1u, 0xa44a1dfcu, 0x09c0e12bu, 0x9224848eu, 0x26f84295u, 0xa21eb2f0u, 0x2cb9a98fu, 0x0a6289a2u, 0x77187c99u, 0x35433d24u, 0xb3b96633u, 0x368c75f6u, 0x7d96f4ddu,
        0xac3e7098u, 0xdb4f3b17u, 0xb63f1d8au, 0x85e26f61u, 0x21c8414cu, 0x1e0a8c3bu, 0xa89a945eu, 0xe093f025u, 0x093de340u, 0x8e5efd9fu, 0x14d62e72u, 0x2af2bb29u, 0x6855ca74u, 0x7cc87343u, 0xb2147fc6u, 0xecb8546du,
    };
    uint32_t acc = 0x789b3b6du ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 61) & 255]);
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
    case 0: acc = heavy_round(acc, 0xb1af604au); break;
    case 1: acc = heavy_round(acc, 0x89ee5321u); break;
    case 2: acc = heavy_round(acc, 0x50e1520cu); break;
    case 3: acc = heavy_round(acc, 0x21bce5fbu); break;
    case 4: acc = heavy_round(acc, 0xac2ba31eu); break;
    case 5: acc = heavy_round(acc, 0x4b922fe5u); break;
    case 6: acc = heavy_round(acc, 0xff4da000u); break;
    case 7: acc = heavy_round(acc, 0xc120135fu); break;
    case 8: acc = heavy_round(acc, 0xb70ec932u); break;
    case 9: acc = heavy_round(acc, 0x123b16e9u); break;
    case 10: acc = heavy_round(acc, 0xf150f334u); break;
    case 11: acc = heavy_round(acc, 0x7e860503u); break;
    case 12: acc = heavy_round(acc, 0x8c876686u); break;
    case 13: acc = heavy_round(acc, 0x553e8c2du); break;
    case 14: acc = heavy_round(acc, 0x2cdaffa8u); break;
    case 15: acc = heavy_round(acc, 0xbcd2dee7u); break;
    case 16: acc = heavy_round(acc, 0x9c834f1au); break;
    case 17: acc = heavy_round(acc, 0x3a2853b1u); break;
    case 18: acc = heavy_round(acc, 0x6e1cb95cu); break;
    case 19: acc = heavy_round(acc, 0x5fbb050bu); break;
    case 20: acc = heavy_round(acc, 0x1b0396eeu); break;
    case 21: acc = heavy_round(acc, 0xc6fe7175u); break;
    case 22: acc = heavy_round(acc, 0xccfc5450u); break;
    case 23: acc = heavy_round(acc, 0x6aa71b6fu); break;
    case 24: acc = heavy_round(acc, 0xe9b09202u); break;
    case 25: acc = heavy_round(acc, 0xb6c52979u); break;
    case 26: acc = heavy_round(acc, 0x1fc94484u); break;
    case 27: acc = heavy_round(acc, 0xbbd80613u); break;
    case 28: acc = heavy_round(acc, 0x70add456u); break;
    case 29: acc = heavy_round(acc, 0xf442ffbdu); break;
    case 30: acc = heavy_round(acc, 0x4f303df8u); break;
    case 31: acc = heavy_round(acc, 0x87cae8f7u); break;
    case 32: acc = heavy_round(acc, 0xbaae31eau); break;
    case 33: acc = heavy_round(acc, 0xff04b841u); break;
    case 34: acc = heavy_round(acc, 0x0f6f34acu); break;
    case 35: acc = heavy_round(acc, 0x78dd281bu); break;
    case 36: acc = heavy_round(acc, 0x6847bebeu); break;
    case 37: acc = heavy_round(acc, 0xbea15705u); break;
    case 38: acc = heavy_round(acc, 0xb2c95ca0u); break;
    case 39: acc = heavy_round(acc, 0x9730677fu); break;
    case 40: acc = heavy_round(acc, 0x4e87ced2u); break;
    case 41: acc = heavy_round(acc, 0x883e2009u); break;
    case 42: acc = heavy_round(acc, 0x093b29d4u); break;
    case 43: acc = heavy_round(acc, 0x5cce8b23u); break;
    case 44: acc = heavy_round(acc, 0xd4c6f626u); break;
    case 45: acc = heavy_round(acc, 0x5a52974du); break;
    case 46: acc = heavy_round(acc, 0x816e5048u); break;
    case 47: acc = heavy_round(acc, 0x9a0db707u); break;
    case 48: acc = heavy_round(acc, 0x65bd08bau); break;
    case 49: acc = heavy_round(acc, 0x92ac80d1u); break;
    case 50: acc = heavy_round(acc, 0xfeedc3fcu); break;
    case 51: acc = heavy_round(acc, 0x0e344f2bu); break;
    case 52: acc = heavy_round(acc, 0x87d51a8eu); break;
    case 53: acc = heavy_round(acc, 0xa2b3e095u); break;
    case 54: acc = heavy_round(acc, 0x1999b8f0u); break;
    case 55: acc = heavy_round(acc, 0xd85cf78fu); break;
    case 56: acc = heavy_round(acc, 0x70c17fa2u); break;
    case 57: acc = heavy_round(acc, 0x85eefa99u); break;
    case 58: acc = heavy_round(acc, 0xba5ba324u); break;
    case 59: acc = heavy_round(acc, 0x249a9433u); break;
    case 60: acc = heavy_round(acc, 0x284fcbf6u); break;
    case 61: acc = heavy_round(acc, 0xfec652ddu); break;
    case 62: acc = heavy_round(acc, 0x491a3698u); break;
    case 63: acc = heavy_round(acc, 0xb95c4917u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

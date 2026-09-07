#include "heavy.h"
#include "mods.h"

int mod_048(int x)
{
    static const uint32_t local[256] = {
        0x31e069c3u, 0x83030446u, 0x82200eedu, 0x13272368u, 0x42af2fa7u, 0x139fe8dau, 0xaf9ea271u, 0x393f391cu, 0xe92201cbu, 0xccb2ecaeu, 0x08d04c35u, 0x1e8cf010u, 0x62cd842fu, 0x0c2063c2u, 0x7fc55039u, 0x2cfbbc44u,
        0x34de9ad3u, 0xbc07e216u, 0x0110327du, 0xac9451b8u, 0x137e69b7u, 0xead83baau, 0x24c9b701u, 0x58b0a46cu, 0x2d7654dbu, 0xfaa3847eu, 0x0dd4e1c5u, 0xce6fe860u, 0x0014003fu, 0x3bb31092u, 0x3b62f6c9u, 0xc86a9194u,
        0x174d4fe3u, 0x065b73e6u, 0x50b77a0du, 0x5ba65408u, 0x5e2467c7u, 0xa810827au, 0x172c2f91u, 0xa9ca23bcu, 0xe34babebu, 0xb7b9504eu, 0x3e751b55u, 0xbc9234b0u, 0x3609c04fu, 0xa5443162u, 0x9f248159u, 0x7e83fae4u,
        0xbf5d88f3u, 0x987ab9b6u, 0x036ee59du, 0x04e22a58u, 0xbb6229d7u, 0xf315bd4au, 0xba2f0c21u, 0x9ee0b70cu, 0xb6f306fbu, 0x0a11501eu, 0x7829f8e5u, 0x5e18d500u, 0xb58fc45fu, 0xea40c632u, 0x4b92efe9u, 0x0c3cf834u,
        0x63804603u, 0x3c22b386u, 0xa5cf752du, 0xc20cd4a8u, 0xf838afe7u, 0x9af4ec1au, 0xbf7b4cb1u, 0x93895e5cu, 0xacfd660bu, 0xf30883eeu, 0xdaac7a75u, 0x0568c950u, 0xebc70c6fu, 0xbb55cf02u, 0x27774279u, 0x3fca8984u,
        0x9a668713u, 0x1e506156u, 0x4eb228bdu, 0x322b52f8u, 0x25e8f9f7u, 0x65fb0eeau, 0xe6f9f141u, 0x1c9919acu, 0x323bc91bu, 0x3f3bebbeu, 0x57f5a005u, 0x322711a0u, 0x1210987fu, 0xa8704bd2u, 0xefda7909u, 0x48a1aed4u,
        0x6b014c23u, 0x9f40c326u, 0x2f30004du, 0xc982a548u, 0xa9f40807u, 0xe1b525bau, 0x8ed3f9d1u, 0x5824e8fcu, 0x2bbf302bu, 0x5688878eu, 0x443e6995u, 0xe138adf0u, 0x3e0d688fu, 0xf0bd3ca2u, 0xc8059399u, 0x07776824u,
        0x5c819533u, 0x2270d8f6u, 0x22a1fbddu, 0x2197cb98u, 0x4e1ada17u, 0x32f0308au, 0x43726661u, 0x3d81cc4cu, 0x06d89b3bu, 0x0c0b575eu, 0xe5ffd725u, 0xdcc29e40u, 0x719e7c9fu, 0x52a9a172u, 0xc9819229u, 0x5e40b574u,
        0x86586243u, 0xde9da2c6u, 0x3ea11b6du, 0x492fc5e8u, 0x505e7027u, 0xe5b92f5au, 0x4f7e36f1u, 0xed44c39cu, 0xc9190a4bu, 0x6e215b2eu, 0x05f2e8b5u, 0x0c29e290u, 0xaae4d4afu, 0xdbe27a42u, 0x941774b9u, 0x803296c4u,
        0xa036b353u, 0xadc42096u, 0x63065efdu, 0x144f9438u, 0x72ffca37u, 0xbd5d222au, 0x4be06b81u, 0x0142ceecu, 0x20517d5bu, 0x966792feu, 0x7f109e45u, 0xc4137ae0u, 0xf44170bfu, 0xb954c712u, 0xddd03b49u, 0x41c20c14u,
        0x120d8863u, 0xdd215266u, 0xc9eac68du, 0x6c3c3688u, 0x0c7fe847u, 0x846908fau, 0xafc20411u, 0xdc90ee3cu, 0x7292f46bu, 0x79bafeceu, 0xce91f7d5u, 0x16646730u, 0x745550cfu, 0x072d87e2u, 0x02f4e5d9u, 0x68a41564u,
        0x040de173u, 0xfd323836u, 0x97a7521du, 0x9f7aacd8u, 0x179fca57u, 0xdca9e3cau, 0x608c00a1u, 0xfb84218cu, 0xee2e6f7bu, 0xb8389e9eu, 0xa3eff565u, 0x2241a780u, 0x7e0174dfu, 0xa0d9bcb2u, 0x960e7469u, 0xfbcdb2b4u,
        0x6ea8be83u, 0xb1b3d206u, 0x6ad501adu, 0xb1cff728u, 0x43607067u, 0x0f2cb29au, 0x41e76131u, 0x43b168dcu, 0x99b4ee8bu, 0x6d3d726eu, 0x70e396f5u, 0x64103bd0u, 0xa066dcefu, 0xf1066582u, 0xefe5e6f9u, 0x9373e404u,
        0x2a8f1f93u, 0x81a31fd6u, 0xec4cd53du, 0xac411578u, 0x0302da77u, 0xdc3e756au, 0xc5bd25c1u, 0x53edc42cu, 0x63f7719bu, 0xff667a3eu, 0xf965dc85u, 0x05752420u, 0xb6e688ffu, 0xc1a08252u, 0xbf843d89u, 0xa90ba954u,
        0x00b204a3u, 0xa73d21a6u, 0x5f27cccdu, 0xed1307c8u, 0x9e080887u, 0x4b6c2c3au, 0x7c364e51u, 0xd44e337cu, 0x3406f8abu, 0xf090b60eu, 0xe3afc615u, 0x2d556070u, 0xf921790fu, 0x0bd51322u, 0x9a327819u, 0xe74a02a4u,
        0xba426db3u, 0xdffed776u, 0x30bee85du, 0x77cace18u, 0x4030fa97u, 0x7b82d70au, 0xa3bbdae1u, 0xc627b6ccu, 0xf93483bbu, 0xadd925deu, 0x483a53a5u, 0x4fd5f0c0u, 0x0af8ad1fu, 0xc81117f2u, 0x8b7996a9u, 0x7a23eff4u,
    };
    uint32_t acc = 0xb0827af4u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 48) & 255]);
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
    case 0: acc = heavy_round(acc, 0x1739f89bu); break;
    case 1: acc = heavy_round(acc, 0xca91553eu); break;
    case 2: acc = heavy_round(acc, 0xc0d4fb85u); break;
    case 3: acc = heavy_round(acc, 0x7373b720u); break;
    case 4: acc = heavy_round(acc, 0x1665ffffu); break;
    case 5: acc = heavy_round(acc, 0x03838d52u); break;
    case 6: acc = heavy_round(acc, 0xa16dcc89u); break;
    case 7: acc = heavy_round(acc, 0x27e1ec54u); break;
    case 8: acc = heavy_round(acc, 0x5b456ba3u); break;
    case 9: acc = heavy_round(acc, 0x0ac35ca6u); break;
    case 10: acc = heavy_round(acc, 0xab7acbcdu); break;
    case 11: acc = heavy_round(acc, 0xc5e3fac8u); break;
    case 12: acc = heavy_round(acc, 0x9c765f87u); break;
    case 13: acc = heavy_round(acc, 0xacb0973au); break;
    case 14: acc = heavy_round(acc, 0x2251bd51u); break;
    case 15: acc = heavy_round(acc, 0x08ecd67cu); break;
    case 16: acc = heavy_round(acc, 0x00073fabu); break;
    case 17: acc = heavy_round(acc, 0x57de510eu); break;
    case 18: acc = heavy_round(acc, 0x3162a515u); break;
    case 19: acc = heavy_round(acc, 0x2b44b370u); break;
    case 20: acc = heavy_round(acc, 0x545ab00fu); break;
    case 21: acc = heavy_round(acc, 0xd8a6de22u); break;
    case 22: acc = heavy_round(acc, 0x6abbc719u); break;
    case 23: acc = heavy_round(acc, 0xeabd05a4u); break;
    case 24: acc = heavy_round(acc, 0x054b94b3u); break;
    case 25: acc = heavy_round(acc, 0x23ffd276u); break;
    case 26: acc = heavy_round(acc, 0x8bcda75du); break;
    case 27: acc = heavy_round(acc, 0x9ea48118u); break;
    case 28: acc = heavy_round(acc, 0x71911197u); break;
    case 29: acc = heavy_round(acc, 0x858e020au); break;
    case 30: acc = heavy_round(acc, 0xcc6f09e1u); break;
    case 31: acc = heavy_round(acc, 0xd2fb19ccu); break;
    case 32: acc = heavy_round(acc, 0x84628abbu); break;
    case 33: acc = heavy_round(acc, 0xc4f980deu); break;
    case 34: acc = heavy_round(acc, 0x3c20f2a5u); break;
    case 35: acc = heavy_round(acc, 0x1ce603c0u); break;
    case 36: acc = heavy_round(acc, 0xb75ba41fu); break;
    case 37: acc = heavy_round(acc, 0x1681a2f2u); break;
    case 38: acc = heavy_round(acc, 0xf192a5a9u); break;
    case 39: acc = heavy_round(acc, 0x1c63b2f4u); break;
    case 40: acc = heavy_round(acc, 0xe0a041c3u); break;
    case 41: acc = heavy_round(acc, 0xead0fc46u); break;
    case 42: acc = heavy_round(acc, 0x1065a6edu); break;
    case 43: acc = heavy_round(acc, 0xdf3fdb68u); break;
    case 44: acc = heavy_round(acc, 0x714087a7u); break;
    case 45: acc = heavy_round(acc, 0xf21160dau); break;
    case 46: acc = heavy_round(acc, 0xe931ba71u); break;
    case 47: acc = heavy_round(acc, 0x1947711cu); break;
    case 48: acc = heavy_round(acc, 0x07dcd9cbu); break;
    case 49: acc = heavy_round(acc, 0xe63fe4aeu); break;
    case 50: acc = heavy_round(acc, 0xb7c8e435u); break;
    case 51: acc = heavy_round(acc, 0xe5bca810u); break;
    case 52: acc = heavy_round(acc, 0x7b89dc2fu); break;
    case 53: acc = heavy_round(acc, 0xf0c0dbc2u); break;
    case 54: acc = heavy_round(acc, 0xc3bb6839u); break;
    case 55: acc = heavy_round(acc, 0x060af444u); break;
    case 56: acc = heavy_round(acc, 0xc2f472d3u); break;
    case 57: acc = heavy_round(acc, 0xbf33da16u); break;
    case 58: acc = heavy_round(acc, 0xe71bca7du); break;
    case 59: acc = heavy_round(acc, 0xd1bb09b8u); break;
    case 60: acc = heavy_round(acc, 0x5bc5c1b7u); break;
    case 61: acc = heavy_round(acc, 0x9b87b3aau); break;
    case 62: acc = heavy_round(acc, 0xbf82cf01u); break;
    case 63: acc = heavy_round(acc, 0x4ba6dc6cu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

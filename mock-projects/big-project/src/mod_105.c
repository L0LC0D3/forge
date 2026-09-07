#include "heavy.h"
#include "mods.h"

int mod_105(int x)
{
    static const uint32_t local[256] = {
        0x5a2b989cu, 0x16afdb4bu, 0xdf0ff82eu, 0x299ee1b5u, 0xb21b8790u, 0x7ce835afu, 0x57b46742u, 0xa72e7db9u, 0x86f40bc4u, 0x79a7a453u, 0x41865d96u, 0x3d3177fdu, 0xc575d938u, 0x6e6f4b37u, 0x886caf2au, 0x92d89481u,
        0x7d32e3ecu, 0x20e08e5bu, 0x47716ffeu, 0xff9ed745u, 0x87025fe0u, 0x66a111bfu, 0x5b55f412u, 0xf4cd8449u, 0x78b4c114u, 0x3d7eb963u, 0xf466cf66u, 0xdd401f8du, 0x1a07bb88u, 0xf3d3a947u, 0x7b8fd5fau, 0xb7686d11u,
        0xceda433cu, 0x452a456bu, 0x5eb01bceu, 0xed9270d5u, 0xaaa08c30u, 0x8f2131cfu, 0x982df4e2u, 0x30686ed9u, 0x21180a64u, 0x828f5273u, 0x05caf536u, 0x57b6eb1du, 0x883b71d8u, 0xf4e7cb57u, 0xe2b7f0cau, 0x8d70a9a1u,
        0xdf76b68cu, 0xb5de007bu, 0xf8e8fb9eu, 0x46f2ae65u, 0x901b0c80u, 0x8d4995dfu, 0x5da969b2u, 0xd0883d69u, 0x1b12e7b4u, 0xc54a6f83u, 0xcd6fcf06u, 0x6f2edaadu, 0xe7d5fc28u, 0xe4acb167u, 0xfaf1ff9au, 0x5c9a4a31u,
        0xa89d3ddcu, 0x7d8cbf8bu, 0x65790f6eu, 0x21788ff5u, 0x07d6e0d0u, 0x343b3defu, 0x8a755282u, 0x11f5eff9u, 0x92da5904u, 0x62611093u, 0x86525cd6u, 0xf080ee3du, 0x15dc5a78u, 0xfa635b77u, 0x788b026au, 0xface4ec1u,
        0xdd22d92cu, 0x8f07829bu, 0x3efd573eu, 0xe51d1585u, 0x8f790920u, 0xa35729ffu, 0x5c7eaf52u, 0x87ba8689u, 0x95e35e54u, 0xa6c435a3u, 0x1eaf9ea6u, 0x42c625cdu, 0x44938cc8u, 0x418cc987u, 0x570ff93au, 0x5c35b751u,
        0x391c887cu, 0xd55f49abu, 0x3b52d30eu, 0xdc193f15u, 0xa1e68570u, 0x563e5a0fu, 0x40f28022u, 0xab1f0119u, 0x62e2f7a4u, 0xdfa4deb3u, 0x08049476u, 0xf757815du, 0x4b809318u, 0xa9e9fb97u, 0xa94de40au, 0x233983e1u,
        0xd1df4bccu, 0x43e514bbu, 0xfb9682deu, 0xc2e60ca5u, 0x074455c0u, 0x34d1ce1fu, 0xa43dc4f2u, 0x6bac5fa9u, 0xb9ce24f4u, 0x6a740bc3u, 0x070e3e46u, 0x59ce00edu, 0xf7686d68u, 0x177bf1a7u, 0x6951c2dau, 0x3082b471u,
        0x6600231cu, 0xe629e3cbu, 0xdc2566aeu, 0x583c7e35u, 0x24f77a10u, 0xa332862fu, 0xc20d7dc2u, 0xbf2ba239u, 0x2bd9e644u, 0xc4e2bcd3u, 0x03c99c16u, 0x0002a47du, 0x5a501bb8u, 0x7283abb7u, 0x486895aau, 0x32fa4901u,
        0xad540e6cu, 0xeffeb6dbu, 0xc49c7e7eu, 0xed1593c5u, 0x4da4f260u, 0x91c1823fu, 0x754eaa92u, 0x31a5c8c9u, 0x6b7b3b94u, 0x9ce1f1e3u, 0xd973ade6u, 0x5a0e6c0du, 0x1b7c9e08u, 0xb78229c7u, 0x7f1f5c7au, 0x37c94191u,
        0xa8f00dbcu, 0xcd748debu, 0xf7d8ca4eu, 0xf4aa4d55u, 0x1131beb0u, 0x8d1fc24fu, 0x082e4b62u, 0x7563d359u, 0x9c6724e4u, 0xe0a2aaf3u, 0x268973b6u, 0x424a579du, 0xc772f458u, 0x07386bd7u, 0x9d43174au, 0x3a589e21u,
        0xf329210cu, 0x32dc68fbu, 0xe3f74a1eu, 0x9473aae5u, 0x8cc2df00u, 0xce2e465fu, 0x04196032u, 0xf2eec1e9u, 0xa392a234u, 0xce95e803u, 0x1cc7ed86u, 0x8d4f672du, 0x1ff81ea8u, 0xb6a771e7u, 0x59e0c61au, 0xb4515eb1u,
        0x0f94485cu, 0x2cc7480bu, 0xf254fdeeu, 0x342aac75u, 0xbabd5350u, 0x4a0e0e6fu, 0x01bce902u, 0x590f9479u, 0x7732b384u, 0x056ca913u, 0x512c1b56u, 0x99f69abdu, 0x6c111cf8u, 0x5f103bf7u, 0x634568eau, 0x2d9c8341u,
        0xbb0683acu, 0x30062b1bu, 0x578ee5beu, 0x0dc85205u, 0xc2c61ba0u, 0xc2201a7fu, 0x7905e5d2u, 0x2ccf4b09u, 0x6ebc58d4u, 0x9417ee23u, 0x8bf2fd26u, 0xe158f24du, 0xc802ef48u, 0xedf3ca07u, 0x2efdffbau, 0xcc630bd1u,
        0x3b94d2fcu, 0x29aa122bu, 0xe382018eu, 0xbd859b95u, 0x49c237f0u, 0xd4056a8fu, 0x912156a2u, 0x5976e599u, 0x92e49224u, 0x09c8b733u, 0x989992f6u, 0x86cf6dddu, 0x75529598u, 0xb5131c17u, 0xc9d78a8au, 0xe50df861u,
        0xb094364cu, 0x8f03fd3bu, 0xd14b515eu, 0xd1db8925u, 0xc1d6a840u, 0x099efe9fu, 0xf07c3b72u, 0xc08f6429u, 0xeda05f74u, 0x85f00443u, 0x15dcdcc6u, 0xe7f30d6du, 0x2ac50fe8u, 0x7a6f3227u, 0xa7df095au, 0x8a4648f1u,
    };
    uint32_t acc = 0xd6581ff1u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 105) & 255]);
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
    case 0: acc = heavy_round(acc, 0xed01f396u); break;
    case 1: acc = heavy_round(acc, 0xd63c15fdu); break;
    case 2: acc = heavy_round(acc, 0x33f3df38u); break;
    case 3: acc = heavy_round(acc, 0xd7399937u); break;
    case 4: acc = heavy_round(acc, 0x13c6a52au); break;
    case 5: acc = heavy_round(acc, 0x846e1281u); break;
    case 6: acc = heavy_round(acc, 0x9ffe49ecu); break;
    case 7: acc = heavy_round(acc, 0xe5d8bc5bu); break;
    case 8: acc = heavy_round(acc, 0xa85fc5feu); break;
    case 9: acc = heavy_round(acc, 0x47fd3545u); break;
    case 10: acc = heavy_round(acc, 0xfb4125e0u); break;
    case 11: acc = heavy_round(acc, 0xa6b51fbfu); break;
    case 12: acc = heavy_round(acc, 0xf7eeaa12u); break;
    case 13: acc = heavy_round(acc, 0x8712c249u); break;
    case 14: acc = heavy_round(acc, 0x8aece714u); break;
    case 15: acc = heavy_round(acc, 0x3f7ca763u); break;
    case 16: acc = heavy_round(acc, 0x791fe566u); break;
    case 17: acc = heavy_round(acc, 0x7f6a3d8du); break;
    case 18: acc = heavy_round(acc, 0x0c1f4188u); break;
    case 19: acc = heavy_round(acc, 0xb4697747u); break;
    case 20: acc = heavy_round(acc, 0x113f4bfau); break;
    case 21: acc = heavy_round(acc, 0xc0556b11u); break;
    case 22: acc = heavy_round(acc, 0x7e17293cu); break;
    case 23: acc = heavy_round(acc, 0xe4e5f36bu); break;
    case 24: acc = heavy_round(acc, 0x408bf1ceu); break;
    case 25: acc = heavy_round(acc, 0xe3004ed5u); break;
    case 26: acc = heavy_round(acc, 0x95a8d230u); break;
    case 27: acc = heavy_round(acc, 0xa070bfcfu); break;
    case 28: acc = heavy_round(acc, 0x09cc2ae2u); break;
    case 29: acc = heavy_round(acc, 0x44f52cd9u); break;
    case 30: acc = heavy_round(acc, 0xcdf1b064u); break;
    case 31: acc = heavy_round(acc, 0x37c0c073u); break;
    case 32: acc = heavy_round(acc, 0xa9218b36u); break;
    case 33: acc = heavy_round(acc, 0xc8e0891du); break;
    case 34: acc = heavy_round(acc, 0x4a4c77d8u); break;
    case 35: acc = heavy_round(acc, 0x2e291957u); break;
    case 36: acc = heavy_round(acc, 0x6e1ce6cau); break;
    case 37: acc = heavy_round(acc, 0xe19527a1u); break;
    case 38: acc = heavy_round(acc, 0xfd851c8cu); break;
    case 39: acc = heavy_round(acc, 0xef3d2e7bu); break;
    case 40: acc = heavy_round(acc, 0x4d12519eu); break;
    case 41: acc = heavy_round(acc, 0x6b500c65u); break;
    case 42: acc = heavy_round(acc, 0xca4cd280u); break;
    case 43: acc = heavy_round(acc, 0xacb4a3dfu); break;
    case 44: acc = heavy_round(acc, 0xfbad1fb2u); break;
    case 45: acc = heavy_round(acc, 0x173c7b69u); break;
    case 46: acc = heavy_round(acc, 0x90ee0db4u); break;
    case 47: acc = heavy_round(acc, 0xc88f5d83u); break;
    case 48: acc = heavy_round(acc, 0xacc3e506u); break;
    case 49: acc = heavy_round(acc, 0x6d37f8adu); break;
    case 50: acc = heavy_round(acc, 0x5e408228u); break;
    case 51: acc = heavy_round(acc, 0x6f797f67u); break;
    case 52: acc = heavy_round(acc, 0xbf6c759au); break;
    case 53: acc = heavy_round(acc, 0xa7d64831u); break;
    case 54: acc = heavy_round(acc, 0x2fdd23dcu); break;
    case 55: acc = heavy_round(acc, 0x476f6d8bu); break;
    case 56: acc = heavy_round(acc, 0xf54fe56eu); break;
    case 57: acc = heavy_round(acc, 0xeea56df5u); break;
    case 58: acc = heavy_round(acc, 0x019226d0u); break;
    case 59: acc = heavy_round(acc, 0x56a1cbefu); break;
    case 60: acc = heavy_round(acc, 0x043e8882u); break;
    case 61: acc = heavy_round(acc, 0xb2b1adf9u); break;
    case 62: acc = heavy_round(acc, 0x1816ff04u); break;
    case 63: acc = heavy_round(acc, 0x86997e93u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

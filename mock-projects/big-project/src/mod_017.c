#include "heavy.h"
#include "mods.h"

int mod_017(int x)
{
    static const uint32_t local[256] = {
        0xd2d71424u, 0x9ae55133u, 0x666964f6u, 0x4a0917ddu, 0xf2fc3798u, 0x7f3c5617u, 0x250b7c8au, 0xdb1d4261u, 0x80d6f84cu, 0xadb3d73bu, 0xbb15635eu, 0xf64a7325u, 0xa6b48a40u, 0x22ef789fu, 0x342e6d72u, 0x1287ee29u,
        0x983b6174u, 0x249b1e43u, 0xdae92ec6u, 0xd43f376du, 0x9d5f31e8u, 0x07ceec27u, 0x23d77b5au, 0xf55012f1u, 0x7294ef9cu, 0xcbb3464bu, 0xdfde672eu, 0x4b5484b5u, 0xb246ce90u, 0xac64d0afu, 0x89ca4642u, 0xb024d0b9u,
        0x3b8842c4u, 0x12186f53u, 0xc322ac96u, 0xd09b7afdu, 0xca0a0038u, 0x807f4637u, 0x543e6e2au, 0x25994781u, 0x334dfaecu, 0x6a6ab95bu, 0x43979efeu, 0x9b493a45u, 0xfd1b66e0u, 0x0db06cbfu, 0xd85f9312u, 0xaaa49749u,
        0x4132b814u, 0xbb4e4463u, 0x9c52de66u, 0xe936e28du, 0x1241a288u, 0x2fce6447u, 0xb0cd54fau, 0x5321e011u, 0xd6171a3cu, 0xdfeb306bu, 0x0b1e0aceu, 0xd36193d5u, 0x49175330u, 0x5d734ccfu, 0x6c1b53e2u, 0xce5041d9u,
        0x1eefc164u, 0x386d9d73u, 0x26f6c436u, 0xb26a6e1du, 0x748b18d8u, 0x007d4657u, 0x0b512fcau, 0xd352dca1u, 0x87454d8cu, 0x4a85ab7bu, 0x068eaa9eu, 0x13169165u, 0x655f9380u, 0xde8e70dfu, 0x506a88b2u, 0x1db0d069u,
        0x8bb45eb4u, 0x71e77a83u, 0x36cb5e06u, 0x3acf1dadu, 0xa4ab6328u, 0x918cec67u, 0xdcd6fe9au, 0xf9d53d31u, 0xdc6d94dcu, 0xa0cb2a8bu, 0x81467e6eu, 0x3c2132f5u, 0x7e5927d0u, 0x1022d8efu, 0x1ffa3182u, 0x618f42f9u,
        0xcfb59004u, 0x306cdb93u, 0x82cdabd6u, 0x9b3df13du, 0x5ba78178u, 0x463e5677u, 0x15abc16au, 0xa89201c1u, 0x2464f02cu, 0xc18cad9bu, 0x11e2863eu, 0x827a7885u, 0x6da91020u, 0xbd9184ffu, 0xd4b74e52u, 0xb8f49989u,
        0x14685554u, 0x2ceec0a3u, 0x753aada6u, 0x86cfe8cdu, 0xa7c473c8u, 0x56128487u, 0xed5c783au, 0xdfb22a51u, 0xb7405f7cu, 0x83db34abu, 0x6a3fc20eu, 0xfc5b6215u, 0x0a344c70u, 0x0e7b750fu, 0x97cedf22u, 0x2929d419u,
        0xb481aea4u, 0x209e29b3u, 0xfb8f6376u, 0xdade045du, 0x3c873a18u, 0xdcca7697u, 0xb2b6230au, 0x4d9eb6e1u, 0x4654e2ccu, 0xc707bfbbu, 0x277b31deu, 0x323cefa5u, 0x781fdcc0u, 0x96c1a91fu, 0x91ade3f2u, 0x2db7f2a9u,
        0x8bf69bf4u, 0xd4ec16c3u, 0x5688cd46u, 0x2f0143edu, 0xc2b4d468u, 0xea672ca7u, 0x9bc5c1dau, 0xdf00a771u, 0x2c377a1cu, 0x82a34ecbu, 0xa1f1d5aeu, 0xaed82135u, 0x78d0c110u, 0x6685212fu, 0xba015cc2u, 0x4867f539u,
        0x47fc1d44u, 0x338987d3u, 0xea23eb16u, 0x6512a77du, 0x285242b8u, 0x9329a6b7u, 0x95d854aau, 0x4ec0fc01u, 0xbcbd256cu, 0xd67ee1dbu, 0xbd40ad7eu, 0x8f25f6c5u, 0xbaebf960u, 0x1a26dd3fu, 0xa7b64992u, 0x9142dbc9u,
        0xb7073294u, 0x56677ce3u, 0x0d9dbce6u, 0x392b2f0du, 0xf0a48508u, 0xff92e4c7u, 0x157adb7au, 0xb608b491u, 0x94fae4bcu, 0x1aab78ebu, 0xb844b94eu, 0x125f7055u, 0x2a5685b0u, 0xea47dd4fu, 0x60f9aa62u, 0x4691a659u,
        0x18ccdbe4u, 0x97b6f5f3u, 0xdb7342b6u, 0xd1a3da9du, 0x84309b58u, 0x7c63e6d7u, 0xe67a564au, 0x1c40d121u, 0xeb45b80cu, 0xef7a13fbu, 0xfd1af91eu, 0x29fd8de5u, 0x40356600u, 0xbbc9215fu, 0x2b387f32u, 0x5cdd54e9u,
        0x6e421934u, 0xa1e8f303u, 0x01617c86u, 0x4f15aa2du, 0x80bb85a8u, 0x8a9dace7u, 0xfbe3c51au, 0x071251b1u, 0xdf329f5cu, 0x4d7bb30bu, 0xf1206ceeu, 0x09b94f75u, 0x52ed9a50u, 0x2fcba96fu, 0x5b1fc802u, 0x0eeee779u,
        0xc99bea84u, 0x7fae7413u, 0x90656a56u, 0x5c599dbdu, 0x094a43f8u, 0xef8136f7u, 0x400427eau, 0x0a663641u, 0xc9969aacu, 0x9581561bu, 0xc4f214beu, 0xb78bb505u, 0xe62422a0u, 0xb3b0757fu, 0x249c84d2u, 0x6dcf5e09u,
        0x9e4f4fd4u, 0xabf87923u, 0xccbc0c26u, 0xbe88b54du, 0x1621d648u, 0xc48f8507u, 0x64687ebau, 0x58657ed1u, 0x8c86a9fcu, 0xa09bfd2bu, 0x446cf08eu, 0x9badbe95u, 0xfabdfef0u, 0x9118858fu, 0x6adbb5a2u, 0xf0c7b899u,
    };
    uint32_t acc = 0xabc4ef99u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 17) & 255]);
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
    case 0: acc = heavy_round(acc, 0x379b53beu); break;
    case 1: acc = heavy_round(acc, 0x203de805u); break;
    case 2: acc = heavy_round(acc, 0x3282b9a0u); break;
    case 3: acc = heavy_round(acc, 0x03a8207fu); break;
    case 4: acc = heavy_round(acc, 0x955233d2u); break;
    case 5: acc = heavy_round(acc, 0xa1c34109u); break;
    case 6: acc = heavy_round(acc, 0x9923d6d4u); break;
    case 7: acc = heavy_round(acc, 0x458d5423u); break;
    case 8: acc = heavy_round(acc, 0x4b8d2b26u); break;
    case 9: acc = heavy_round(acc, 0x8881484du); break;
    case 10: acc = heavy_round(acc, 0xbd534d48u); break;
    case 11: acc = heavy_round(acc, 0x967c9007u); break;
    case 12: acc = heavy_round(acc, 0x92d40dbau); break;
    case 13: acc = heavy_round(acc, 0x85d5c1d1u); break;
    case 14: acc = heavy_round(acc, 0x20ec10fcu); break;
    case 15: acc = heavy_round(acc, 0x9fcc382bu); break;
    case 16: acc = heavy_round(acc, 0x3461ef8eu); break;
    case 17: acc = heavy_round(acc, 0x4fb8b195u); break;
    case 18: acc = heavy_round(acc, 0x371e55f0u); break;
    case 19: acc = heavy_round(acc, 0x83a6f08fu); break;
    case 20: acc = heavy_round(acc, 0xedb924a2u); break;
    case 21: acc = heavy_round(acc, 0xa7405b99u); break;
    case 22: acc = heavy_round(acc, 0x51239024u); break;
    case 23: acc = heavy_round(acc, 0x9a2f9d33u); break;
    case 24: acc = heavy_round(acc, 0x637740f6u); break;
    case 25: acc = heavy_round(acc, 0x256543ddu); break;
    case 26: acc = heavy_round(acc, 0x1c327398u); break;
    case 27: acc = heavy_round(acc, 0x0ee56217u); break;
    case 28: acc = heavy_round(acc, 0xf769188au); break;
    case 29: acc = heavy_round(acc, 0x12062e61u); break;
    case 30: acc = heavy_round(acc, 0x24b2f44cu); break;
    case 31: acc = heavy_round(acc, 0x4247a33bu); break;
    case 32: acc = heavy_round(acc, 0x15debf5eu); break;
    case 33: acc = heavy_round(acc, 0xc92c1f25u); break;
    case 34: acc = heavy_round(acc, 0x12b24640u); break;
    case 35: acc = heavy_round(acc, 0x13ba049fu); break;
    case 36: acc = heavy_round(acc, 0xce3f8972u); break;
    case 37: acc = heavy_round(acc, 0x728e5a29u); break;
    case 38: acc = heavy_round(acc, 0x9396dd74u); break;
    case 39: acc = heavy_round(acc, 0x77a86a43u); break;
    case 40: acc = heavy_round(acc, 0xcade0ac6u); break;
    case 41: acc = heavy_round(acc, 0x0f56636du); break;
    case 42: acc = heavy_round(acc, 0x25146de8u); break;
    case 43: acc = heavy_round(acc, 0xfdeaf827u); break;
    case 44: acc = heavy_round(acc, 0xfc0c175au); break;
    case 45: acc = heavy_round(acc, 0x2223fef1u); break;
    case 46: acc = heavy_round(acc, 0x355feb9cu); break;
    case 47: acc = heavy_round(acc, 0x2c6a124bu); break;
    case 48: acc = heavy_round(acc, 0x8a6ec32eu); break;
    case 49: acc = heavy_round(acc, 0x755130b5u); break;
    case 50: acc = heavy_round(acc, 0x4ca38a90u); break;
    case 51: acc = heavy_round(acc, 0xd2025cafu); break;
    case 52: acc = heavy_round(acc, 0xe4926242u); break;
    case 53: acc = heavy_round(acc, 0xc3763cb9u); break;
    case 54: acc = heavy_round(acc, 0x33b2bec4u); break;
    case 55: acc = heavy_round(acc, 0xb5a8bb53u); break;
    case 56: acc = heavy_round(acc, 0xfbbe8896u); break;
    case 57: acc = heavy_round(acc, 0x462da6fdu); break;
    case 58: acc = heavy_round(acc, 0x4bfe3c38u); break;
    case 59: acc = heavy_round(acc, 0x45ce5237u); break;
    case 60: acc = heavy_round(acc, 0x040a0a2au); break;
    case 61: acc = heavy_round(acc, 0x6f183381u); break;
    case 62: acc = heavy_round(acc, 0x8cc7f6ecu); break;
    case 63: acc = heavy_round(acc, 0x2c04855bu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

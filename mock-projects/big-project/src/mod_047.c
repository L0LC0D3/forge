#include "heavy.h"
#include "mods.h"

int mod_047(int x)
{
    static const uint32_t local[256] = {
        0xf4f41baeu, 0xa3d9af35u, 0x6678f710u, 0xc393df2fu, 0xe17502c2u, 0x936b6339u, 0x32fcb344u, 0x045525d3u, 0x136ef116u, 0xf845f57du, 0xb10138b8u, 0x401024b7u, 0x81c0baaau, 0xd8322a01u, 0x4dd07b6cu, 0x4ebe3fdbu,
        0x45ec737eu, 0x46c304c5u, 0xff79af60u, 0xd1dd1b3fu, 0xa6ab6f92u, 0xe6d9c9c9u, 0x70854894u, 0x24929ae3u, 0xa1c242e6u, 0x6269fd0du, 0x2ce8fb08u, 0xdc10e2c7u, 0x4914c17au, 0x1c7d6291u, 0x443bbabcu, 0xbc3a56ebu,
        0x86f9ff4eu, 0xa177fe55u, 0x1529bbb0u, 0x44859b4fu, 0x1dd05062u, 0x999c1459u, 0x362871e4u, 0x392193f3u, 0xf6d148b6u, 0x41ce289du, 0xaf6a9158u, 0xcc5964d7u, 0x1425bc4au, 0xae98ff21u, 0xfa140e0cu, 0x4c3871fbu,
        0xba39bf1eu, 0x5d719be5u, 0x78ae1c00u, 0x786e5f5fu, 0xa450a532u, 0xd83b42e9u, 0x5cdb2f34u, 0xe4731103u, 0x58590286u, 0x6f0b782du, 0x2e4afba8u, 0x09eaaae7u, 0xee00ab1au, 0x4c2dffb1u, 0x66ee755cu, 0xef49910bu,
        0xdd08b2eeu, 0x6668dd75u, 0xd86bd050u, 0x86b8676fu, 0xa6d96e02u, 0x15805579u, 0xced28084u, 0x29381213u, 0x6f567056u, 0x4cfaebbdu, 0x248f39f8u, 0xd205b4f7u, 0xd8f28deau, 0xc1256441u, 0xbb9ff0acu, 0xfe3eb41bu,
        0xb803dabeu, 0x7a56c305u, 0x1007d8a0u, 0x54c4b37fu, 0x7157aad2u, 0x9a744c09u, 0xd78365d4u, 0x7a619723u, 0x18069226u, 0x58b5834du, 0xe27c4c48u, 0xb62b8307u, 0x9e8864bau, 0x77a82cd1u, 0xb23d7ffcu, 0x4a28db2bu,
        0xaf08368eu, 0xb9744c95u, 0x786734f0u, 0xa434438fu, 0xfef85ba2u, 0x16602699u, 0x73a2df24u, 0xcb20a033u, 0x31e667f6u, 0xb9943eddu, 0xdd973298u, 0xac1d1517u, 0x9f8f2f8au, 0x081f5961u, 0xde1c234cu, 0x2c59063bu,
        0x9132c65eu, 0x363a7a25u, 0x37aee540u, 0x22e8179fu, 0xca288072u, 0x2ecce529u, 0xa125ec74u, 0x9ee62d43u, 0x6fb2f1c6u, 0xd1301e6du, 0x00a4ece8u, 0x1ddb6b27u, 0xa413ee5au, 0xc933e9f1u, 0xfbd0da9cu, 0x9660354bu,
        0x68e08a2eu, 0x85624bb5u, 0x9143e990u, 0x7b012fafu, 0x9c951942u, 0x0f8387b9u, 0xaf418dc4u, 0x19633e53u, 0x27692f96u, 0xcb6221fdu, 0xfbaa7b38u, 0xf9a78537u, 0xab63a12au, 0x5fcede81u, 0x4130a5ecu, 0x220f685bu,
        0x4bae81feu, 0x4de4c145u, 0x35cb41e0u, 0x62e08bbfu, 0x5f2b2612u, 0xfa8d0e49u, 0x8e6ac314u, 0x0e88d363u, 0x22462166u, 0x2e43498du, 0x93ecdd88u, 0xc2026347u, 0xbc0b47fau, 0x4f193711u, 0xad50853cu, 0x21779f6bu,
        0x2a79adceu, 0xd8fadad5u, 0x9329ee30u, 0xad272bcfu, 0xea17a6e2u, 0xd83278d9u, 0x20568c64u, 0x1287ec73u, 0x6cc6c736u, 0x6a2c951du, 0xf3f113d8u, 0x9dad0557u, 0xb3d7e2cau, 0x887bf3a1u, 0x5885788cu, 0xaee9da7bu,
        0xa15f0d9eu, 0xa21d9865u, 0x2484ee80u, 0x58b60fdfu, 0xd4c79bb2u, 0xc6fcc769u, 0x87f9e9b4u, 0x89d18983u, 0x26a82106u, 0x69b704adu, 0xfb7c1e28u, 0x67a86b67u, 0x17d6719au, 0xfba01431u, 0xc4647fdcu, 0xbcf7198bu,
        0xc7bba16eu, 0xe705f9f5u, 0xc24142d0u, 0xa0ae37efu, 0x45e80482u, 0xabb4f9f9u, 0x7989db04u, 0xb916aa93u, 0x52e72ed6u, 0x21bb983du, 0x8f92fc78u, 0xbf359577u, 0xe453f46au, 0x266e98c1u, 0x2bc29b2cu, 0x26705c9bu,
        0x002c693eu, 0x37acff85u, 0xf203eb20u, 0x0c70a3ffu, 0xc365e152u, 0xc1641089u, 0x8a7b6054u, 0xd5484fa3u, 0xa7c0f0a6u, 0x21534fcdu, 0xea7aaec8u, 0x17d58387u, 0x5cdd6b3au, 0xa5108151u, 0xd2b4ca7cu, 0xbe66a3abu,
        0xc88e650eu, 0x064ba915u, 0x36b1e770u, 0x7f9e540fu, 0x026e3222u, 0x29530b19u, 0x818379a4u, 0x139778b3u, 0x5eb26676u, 0x21d72b5du, 0xebb83518u, 0xc9493597u, 0xdc3fd60au, 0xc1eecde1u, 0x56900dccu, 0x602aeebbu,
        0x89fe94deu, 0x375af6a5u, 0x607037c0u, 0x4a18481fu, 0xb76df6f2u, 0x7b0ae9a9u, 0xa69726f4u, 0xb97525c3u, 0x04789046u, 0x96e02aedu, 0x68108f68u, 0x1f91aba7u, 0xa48834dau, 0x05b27e71u, 0xfde9651cu, 0xff4e3dcbu,
    };
    uint32_t acc = 0x6b732ccbu ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 47) & 255]);
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
    case 0: acc = heavy_round(acc, 0x5cb2eae0u); break;
    case 1: acc = heavy_round(acc, 0x2afa20bfu); break;
    case 2: acc = heavy_round(acc, 0x46d5b712u); break;
    case 3: acc = heavy_round(acc, 0xdcfc6b49u); break;
    case 4: acc = heavy_round(acc, 0x82207c14u); break;
    case 5: acc = heavy_round(acc, 0xe7793863u); break;
    case 6: acc = heavy_round(acc, 0xcbb94266u); break;
    case 7: acc = heavy_round(acc, 0xe141f68du); break;
    case 8: acc = heavy_round(acc, 0x08c9a688u); break;
    case 9: acc = heavy_round(acc, 0x4a4e9847u); break;
    case 10: acc = heavy_round(acc, 0x3207f8fau); break;
    case 11: acc = heavy_round(acc, 0x44743411u); break;
    case 12: acc = heavy_round(acc, 0x18bd5e3cu); break;
    case 13: acc = heavy_round(acc, 0x2574a46bu); break;
    case 14: acc = heavy_round(acc, 0xab50eeceu); break;
    case 15: acc = heavy_round(acc, 0x80cf27d5u); break;
    case 16: acc = heavy_round(acc, 0x349fd730u); break;
    case 17: acc = heavy_round(acc, 0x9bfa00cfu); break;
    case 18: acc = heavy_round(acc, 0xd8aa77e2u); break;
    case 19: acc = heavy_round(acc, 0xdded15d9u); break;
    case 20: acc = heavy_round(acc, 0x1a5e8564u); break;
    case 21: acc = heavy_round(acc, 0x43259173u); break;
    case 22: acc = heavy_round(acc, 0xd1862836u); break;
    case 23: acc = heavy_round(acc, 0x418a821du); break;
    case 24: acc = heavy_round(acc, 0x75241cd8u); break;
    case 25: acc = heavy_round(acc, 0x63da7a57u); break;
    case 26: acc = heavy_round(acc, 0x4dc4d3cau); break;
    case 27: acc = heavy_round(acc, 0x4a8a30a1u); break;
    case 28: acc = heavy_round(acc, 0xd48c918cu); break;
    case 29: acc = heavy_round(acc, 0x403c1f7bu); break;
    case 30: acc = heavy_round(acc, 0x870a8e9eu); break;
    case 31: acc = heavy_round(acc, 0x3a392565u); break;
    case 32: acc = heavy_round(acc, 0x9d191780u); break;
    case 33: acc = heavy_round(acc, 0x819224dfu); break;
    case 34: acc = heavy_round(acc, 0xa552acb2u); break;
    case 35: acc = heavy_round(acc, 0x6fd2a469u); break;
    case 36: acc = heavy_round(acc, 0xe5e422b4u); break;
    case 37: acc = heavy_round(acc, 0x326c6e83u); break;
    case 38: acc = heavy_round(acc, 0xcac3c206u); break;
    case 39: acc = heavy_round(acc, 0x7a4431adu); break;
    case 40: acc = heavy_round(acc, 0x77956728u); break;
    case 41: acc = heavy_round(acc, 0xe9072067u); break;
    case 42: acc = heavy_round(acc, 0x12c3a29au); break;
    case 43: acc = heavy_round(acc, 0x04319131u); break;
    case 44: acc = heavy_round(acc, 0x6095d8dcu); break;
    case 45: acc = heavy_round(acc, 0x05ee9e8bu); break;
    case 46: acc = heavy_round(acc, 0x184b626eu); break;
    case 47: acc = heavy_round(acc, 0x1e38c6f5u); break;
    case 48: acc = heavy_round(acc, 0xd283abd0u); break;
    case 49: acc = heavy_round(acc, 0x2ae38cefu); break;
    case 50: acc = heavy_round(acc, 0xd77b5582u); break;
    case 51: acc = heavy_round(acc, 0xab7616f9u); break;
    case 52: acc = heavy_round(acc, 0x3ce65404u); break;
    case 53: acc = heavy_round(acc, 0x4dfecf93u); break;
    case 54: acc = heavy_round(acc, 0xfe6f0fd6u); break;
    case 55: acc = heavy_round(acc, 0xf448053du); break;
    case 56: acc = heavy_round(acc, 0xd9228578u); break;
    case 57: acc = heavy_round(acc, 0x0d158a77u); break;
    case 58: acc = heavy_round(acc, 0x0151656au); break;
    case 59: acc = heavy_round(acc, 0xa35355c1u); break;
    case 60: acc = heavy_round(acc, 0x1bae342cu); break;
    case 61: acc = heavy_round(acc, 0x255d219bu); break;
    case 62: acc = heavy_round(acc, 0x85b06a3eu); break;
    case 63: acc = heavy_round(acc, 0xb0c70c85u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

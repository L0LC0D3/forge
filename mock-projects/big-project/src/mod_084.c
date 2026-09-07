#include "heavy.h"
#include "mods.h"

int mod_084(int x)
{
    static const uint32_t local[256] = {
        0x7d78c41fu, 0xe0bc42f2u, 0x324cc5a9u, 0xae9752f4u, 0x7eff61c3u, 0xfc659c46u, 0xccb1c6edu, 0xe3dd7b68u, 0x1b01a7a7u, 0xa3a000dau, 0x612fda71u, 0x91ef111cu, 0x921ff9cbu, 0xca6884aeu, 0x1d990435u, 0x1e0e4810u,
        0x7d6efc2fu, 0x74237bc2u, 0x5b7d8839u, 0x33a69444u, 0xb59b92d3u, 0xc8707a16u, 0x26efea7du, 0xb440a9b8u, 0xba4ee1b7u, 0x2b3e53aau, 0x6f88ef01u, 0xccb67c6cu, 0x7dd24cdbu, 0xec1f1c7eu, 0x67ab99c5u, 0xe3a74060u,
        0xb8f3783fu, 0x60dc2892u, 0xd6092ec9u, 0x552b6994u, 0x2b2847e3u, 0x7f4a0be6u, 0x5d65320du, 0x2fc8ac08u, 0x6af2dfc7u, 0x4a5c9a7au, 0xfe996791u, 0x66a5fbbcu, 0x2a85a3ebu, 0xa67ae84eu, 0x58d9d355u, 0x2cff8cb0u,
        0x14a7384fu, 0x69134962u, 0x6c38b959u, 0x6edad2e4u, 0xa5d680f3u, 0xb76f51b6u, 0xe26a9d9du, 0x9afa8258u, 0xa5aea1d7u, 0x08c7d54au, 0x21ca4421u, 0x32128f0cu, 0x248afefbu, 0x5f98e81eu, 0xae9cb0e5u, 0xcf3c2d00u,
        0x216b3c5fu, 0x8e35de32u, 0x9e9527e9u, 0x9da9d034u, 0x3c173e03u, 0x9a9d4b86u, 0x22992d2du, 0x6f9b2ca8u, 0x178327e7u, 0x958d041au, 0x6ac484b1u, 0xea91365cu, 0x50735e0bu, 0x78d61beeu, 0x68ad3275u, 0x7cc22150u,
        0x2c60846fu, 0xe0f0e702u, 0x33e77a79u, 0x0fcd6184u, 0x649b7f13u, 0xb5d0f956u, 0x14c9e0bdu, 0xacafaaf8u, 0xb1b171f7u, 0x16f926eau, 0x79712941u, 0x84f6f1acu, 0xfb0fc11bu, 0x1ecf83beu, 0x59045805u, 0x153669a0u,
        0x4ee8107fu, 0x513163d2u, 0xc938b109u, 0x54ba86d4u, 0x06544423u, 0xc9475b26u, 0xca15b84du, 0x267cfd48u, 0xb9ba8007u, 0x7a993dbau, 0x8bf931d1u, 0x7f58c0fcu, 0xe971282bu, 0x19621f8eu, 0xb3db2195u, 0xf57e05f0u,
        0x7ea2e08fu, 0x7e2454a2u, 0x61d1cb99u, 0xad264024u, 0x88728d33u, 0x987d70f6u, 0xfdd5b3ddu, 0xd6882398u, 0xd95f5217u, 0x453a488au, 0x0ec59e61u, 0x310ba44cu, 0x68e8933bu, 0x9baaef5eu, 0x9faa8f25u, 0x47bdf640u,
        0x9d71f49fu, 0x8636b972u, 0xf73bca29u, 0x5b058d74u, 0xe2675a43u, 0xba303ac6u, 0xa5a2d36du, 0x2b961de8u, 0x2ea0e827u, 0x62e9475au, 0x2c7f6ef1u, 0x1aa49b9cu, 0x5f07024bu, 0x1406f32eu, 0xc52ba0b5u, 0x535b3a90u,
        0x89764cafu, 0xd7159242u, 0x093facb9u, 0xf18d6ec4u, 0xabe3ab53u, 0x685cb896u, 0x815616fdu, 0x59abec38u, 0x5bc04237u, 0xf6f33a2au, 0x5e0fa381u, 0x35f8a6ecu, 0x599d755bu, 0xfc132afeu, 0xdf575645u, 0xccfad2e0u,
        0x2d10e8bfu, 0xfdaddf12u, 0x2de67349u, 0xa532e414u, 0x2cd88063u, 0x503fea66u, 0xab087e8du, 0xaa0e8e88u, 0x973e6047u, 0x2be520fau, 0xfa9f3c11u, 0x461cc63cu, 0x9ebcec6bu, 0xa8ac96ceu, 0x4b66afd5u, 0x2681bf30u,
        0x8ee2c8cfu, 0x762c9fe2u, 0xa1791dd9u, 0x9baaed64u, 0x6d76d973u, 0x6256d036u, 0x27130a1du, 0xcb4304d8u, 0xbbdc4257u, 0x038bfbcau, 0xc79738a1u, 0x2765f98cu, 0x3cb6677bu, 0x19f0369eu, 0x98d2ad65u, 0xdf14ff80u,
        0xe1ccecdfu, 0x7bfed4b2u, 0xd680ac69u, 0x3bea8ab4u, 0x462fb683u, 0xa25e6a06u, 0x740eb9adu, 0x210e4f28u, 0x589ae867u, 0x26f4ca9au, 0x88a09931u, 0x1f6940dcu, 0x1a1ae68bu, 0xcb3b0a6eu, 0x19544ef5u, 0xd31993d0u,
        0x94f054efu, 0xd9d17d82u, 0x05c61ef9u, 0x7e26bc04u, 0x6fb41793u, 0xf753b7d6u, 0x1ad48d3du, 0x14756d78u, 0xc0bb5277u, 0xb66c8d6au, 0x8fa45dc1u, 0x2cfb9c2cu, 0x05bb699bu, 0x832a123eu, 0x70e49485u, 0x8c347c20u,
        0x63ae00ffu, 0xb9919a52u, 0xbe527589u, 0x3bd48154u, 0x92f4fca3u, 0xfb73b9a6u, 0x3e7d84cdu, 0x63bd5fc8u, 0x1bbe8087u, 0x1980443au, 0x4ccb8651u, 0x58320b7cu, 0xc6a8f0abu, 0x239a4e0eu, 0x25bc7e15u, 0x914ab870u,
        0x65a6f10fu, 0x746c2b22u, 0x756eb019u, 0x7fa8daa4u, 0x592365b3u, 0xcc3b6f76u, 0x2c62a05du, 0x726b2618u, 0x75657297u, 0xcefcef0au, 0xde7f12e1u, 0x02618eccu, 0x2c347bbbu, 0x79a8bddeu, 0x30550ba5u, 0xb68148c0u,
    };
    uint32_t acc = 0x944fa3c0u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 84) & 255]);
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
    case 0: acc = heavy_round(acc, 0xb5fa6befu); break;
    case 1: acc = heavy_round(acc, 0xcb7ea882u); break;
    case 2: acc = heavy_round(acc, 0x7db34df9u); break;
    case 3: acc = heavy_round(acc, 0xacec1f04u); break;
    case 4: acc = heavy_round(acc, 0x202c1e93u); break;
    case 5: acc = heavy_round(acc, 0x6f3612d6u); break;
    case 6: acc = heavy_round(acc, 0x44952c3du); break;
    case 7: acc = heavy_round(acc, 0x79978078u); break;
    case 8: acc = heavy_round(acc, 0x52084977u); break;
    case 9: acc = heavy_round(acc, 0xe0bf186au); break;
    case 10: acc = heavy_round(acc, 0x2c376cc1u); break;
    case 11: acc = heavy_round(acc, 0x2f6d5f2cu); break;
    case 12: acc = heavy_round(acc, 0x8434509bu); break;
    case 13: acc = heavy_round(acc, 0xaa57cd3eu); break;
    case 14: acc = heavy_round(acc, 0xe9b91385u); break;
    case 15: acc = heavy_round(acc, 0xc098ef20u); break;
    case 16: acc = heavy_round(acc, 0x4d99d7ffu); break;
    case 17: acc = heavy_round(acc, 0x91358552u); break;
    case 18: acc = heavy_round(acc, 0xf4476489u); break;
    case 19: acc = heavy_round(acc, 0xe77ea454u); break;
    case 20: acc = heavy_round(acc, 0x7f8ac3a3u); break;
    case 21: acc = heavy_round(acc, 0x1b58d4a6u); break;
    case 22: acc = heavy_round(acc, 0xc8e1e3cdu); break;
    case 23: acc = heavy_round(acc, 0xafb032c8u); break;
    case 24: acc = heavy_round(acc, 0x52253787u); break;
    case 25: acc = heavy_round(acc, 0xa8a18f3au); break;
    case 26: acc = heavy_round(acc, 0x285e5551u); break;
    case 27: acc = heavy_round(acc, 0x34208e7cu); break;
    case 28: acc = heavy_round(acc, 0xc4f797abu); break;
    case 29: acc = heavy_round(acc, 0xb322c90eu); break;
    case 30: acc = heavy_round(acc, 0xd3acbd15u); break;
    case 31: acc = heavy_round(acc, 0x4697eb70u); break;
    case 32: acc = heavy_round(acc, 0x57e4880fu); break;
    case 33: acc = heavy_round(acc, 0x0ab6d622u); break;
    case 34: acc = heavy_round(acc, 0x8a5b5f19u); break;
    case 35: acc = heavy_round(acc, 0xf467bda4u); break;
    case 36: acc = heavy_round(acc, 0x8046ecb3u); break;
    case 37: acc = heavy_round(acc, 0x1fd34a76u); break;
    case 38: acc = heavy_round(acc, 0x4f5abf5du); break;
    case 39: acc = heavy_round(acc, 0x1c5eb918u); break;
    case 40: acc = heavy_round(acc, 0x7e55e997u); break;
    case 41: acc = heavy_round(acc, 0xb19cfa0au); break;
    case 42: acc = heavy_round(acc, 0x3801a1e1u); break;
    case 43: acc = heavy_round(acc, 0x89fcd1ccu); break;
    case 44: acc = heavy_round(acc, 0x76c8e2bbu); break;
    case 45: acc = heavy_round(acc, 0x733bf8deu); break;
    case 46: acc = heavy_round(acc, 0x49510aa5u); break;
    case 47: acc = heavy_round(acc, 0x49e73bc0u); break;
    case 48: acc = heavy_round(acc, 0xf4bb7c1fu); break;
    case 49: acc = heavy_round(acc, 0x7c6f9af2u); break;
    case 50: acc = heavy_round(acc, 0x27783da9u); break;
    case 51: acc = heavy_round(acc, 0x2b9c6af4u); break;
    case 52: acc = heavy_round(acc, 0x37d199c3u); break;
    case 53: acc = heavy_round(acc, 0x99627446u); break;
    case 54: acc = heavy_round(acc, 0x9b98beedu); break;
    case 55: acc = heavy_round(acc, 0xa4681368u); break;
    case 56: acc = heavy_round(acc, 0xf29b5fa7u); break;
    case 57: acc = heavy_round(acc, 0xcdbe58dau); break;
    case 58: acc = heavy_round(acc, 0x33ca5271u); break;
    case 59: acc = heavy_round(acc, 0x8797291cu); break;
    case 60: acc = heavy_round(acc, 0x5d3931cbu); break;
    case 61: acc = heavy_round(acc, 0x9f005caeu); break;
    case 62: acc = heavy_round(acc, 0x815efc35u); break;
    case 63: acc = heavy_round(acc, 0x47ebe010u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

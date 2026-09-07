#include "heavy.h"
#include "mods.h"

int mod_023(int x)
{
    static const uint32_t local[256] = {
        0x3035f6f6u, 0x4d9881ddu, 0x9f809998u, 0x93015017u, 0x0ba82e8au, 0x61fe4c61u, 0xfe407a4cu, 0xc7db713bu, 0xe074355eu, 0x25c71d25u, 0x55c52c40u, 0x7953b29fu, 0x30615f72u, 0xcf8a3829u, 0x54d52374u, 0xedb5f843u,
        0x0e2240c6u, 0xed51216du, 0xe08413e8u, 0x34ba6627u, 0x2868ad5au, 0xec9b9cf1u, 0x9466f19cu, 0x6229604bu, 0x1c39b92eu, 0xc0a3aeb5u, 0x4c07f090u, 0xc0bf8aafu, 0xe281b842u, 0x6ae19ab9u, 0xa99a84c4u, 0x6151c953u,
        0x6ce83e96u, 0x69cfe4fdu, 0xcdef6238u, 0xaa314037u, 0xc5e4202au, 0x51ef5181u, 0xb5a87cecu, 0xcacf535bu, 0x480f70feu, 0x150ae445u, 0xefad08e0u, 0x37a1a6bfu, 0xc0bb8512u, 0xbbbbe149u, 0xa0dd7a14u, 0x92461e63u,
        0x91c4f066u, 0x952dcc8du, 0x09078488u, 0xa1e6de47u, 0x26a786fau, 0x21226a11u, 0xfd1a1c3cu, 0x3fde4a6bu, 0x50d25cceu, 0x3835bdd5u, 0x0a997530u, 0x5c9b06cfu, 0x5f3bc5e2u, 0x36620bd9u, 0x38530364u, 0x80c3f773u,
        0x05355636u, 0x2bc3d81du, 0x98517ad8u, 0x6e9c4057u, 0x647fe1cau, 0x579de6a1u, 0x1f10cf8cu, 0xc7a7457bu, 0xce9f7c9eu, 0x719d3b65u, 0x73f23580u, 0xda8caadfu, 0x116f7ab2u, 0x855d1a69u, 0xaef020b4u, 0xfd3c5483u,
        0x62f67006u, 0x642b07adu, 0x37924528u, 0x17526667u, 0x407a309au, 0xf10ac731u, 0x392196dcu, 0x40bb448bu, 0xd4d3d06eu, 0xcafa5cf5u, 0x601c49d0u, 0x989792efu, 0xba03a382u, 0x19760cf9u, 0xd4e9d204u, 0xb8603593u,
        0x2a053dd6u, 0x7f3c5b3du, 0xa7cee378u, 0x674a5077u, 0xf2e3736au, 0x77520bc1u, 0x2221722cu, 0x71eb479bu, 0xc20c583eu, 0xa0462285u, 0xb0bcb220u, 0xca1cbeffu, 0x9ae54052u, 0xb9b5e389u, 0x5bb51754u, 0x53209aa3u,
        0x8c9ebfa6u, 0x5810d2cdu, 0xff4c55c8u, 0xfe04fe87u, 0xfb48aa3au, 0x929cb451u, 0xba25617cu, 0x1a484eabu, 0x1026140eu, 0x2fb98c15u, 0x44b86e70u, 0xfebd2f0fu, 0x25415122u, 0x13659e19u, 0x2606f0a4u, 0x6eae83b3u,
        0x403ff576u, 0xf4016e5du, 0xf98f9c18u, 0x5f437097u, 0xf076d50au, 0x9953c0e1u, 0x3a8264ccu, 0x012359bbu, 0x243e03deu, 0x29cd99a5u, 0x48347ec0u, 0x3259e31fu, 0xc984d5f2u, 0x4a0e3ca9u, 0x97d45df4u, 0xbc7af0c3u,
        0x4da5df46u, 0x12a72dedu, 0x475db668u, 0x0306a6a7u, 0x507af3dau, 0x20203171u, 0x85cd7c1cu, 0x060d68cbu, 0x1eb127aeu, 0x413b4b35u, 0x8495e310u, 0xdd13db2fu, 0xc75ccec2u, 0x8778bf39u, 0xe6525f44u, 0x0e36e1d3u,
        0xe0cd7d16u, 0xbddb117du, 0xdebba4b8u, 0x658fa0b7u, 0x50a206aau, 0x89eb0601u, 0x77dba76cu, 0x30d77bdbu, 0xab1c7f7eu, 0xbafba0c5u, 0xb0819b60u, 0x034c173fu, 0xfdb63b92u, 0x8bae25c9u, 0x67f5f494u, 0x65d356e3u,
        0x18f3cee6u, 0xd9b6190du, 0x4aee6708u, 0x175f5ec7u, 0xad790d7au, 0x97dd3e91u, 0x35c1e6bcu, 0xc19292ebu, 0xd05d0b4eu, 0xfe479a55u, 0xbfdca7b0u, 0x45a3974fu, 0xbabe1c62u, 0x3cf77059u, 0xe4741de4u, 0x05814ff3u,
        0xd895d4b6u, 0xb491449du, 0xfc7afd58u, 0xcd36e0d7u, 0x7acd084au, 0xf95fdb21u, 0x7dd53a0cu, 0x408fadfbu, 0xc08fcb1eu, 0x249837e5u, 0x33cc0800u, 0xf0fb5b5fu, 0x8be17132u, 0x37dd9ee9u, 0xe4c1db34u, 0x7fb1cd03u,
        0x95708e86u, 0x9705942du, 0x992667a8u, 0x701726e7u, 0xf3aaf71au, 0xdc1bdbb1u, 0xf7aaa15cu, 0x8e5fcd0bu, 0xa911beeeu, 0x89a67975u, 0x6ab4bc50u, 0x0e74636fu, 0x0dcd3a02u, 0x5f29b179u, 0x03142c84u, 0xc715ce13u,
        0x2880fc56u, 0x53ec07bdu, 0x4bf5a5f8u, 0x2d4130f7u, 0x4a5fd9eau, 0x7bfa4041u, 0x84171cacu, 0xf3d3f01bu, 0x827fe6beu, 0x5b6b5f05u, 0xf03bc4a0u, 0x736faf7fu, 0xbc6e76d2u, 0x6be4a809u, 0x3ae011d4u, 0x3e9e5323u,
        0x9e041e26u, 0xd85d9f4du, 0x152db848u, 0x8635ff07u, 0x7878b0bau, 0xb32408d1u, 0x8d2fabfcu, 0x31fd172bu, 0xe0b7428eu, 0x2a1fe895u, 0xcd4620f0u, 0xd18e3f8fu, 0xc2f227a2u, 0x7d578299u, 0x38da8b24u, 0xc97c5c33u,
    };
    uint32_t acc = 0xf781ab33u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 23) & 255]);
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
    case 0: acc = heavy_round(acc, 0x5f1ca228u); break;
    case 1: acc = heavy_round(acc, 0x4f671f67u); break;
    case 2: acc = heavy_round(acc, 0x6c3d959au); break;
    case 3: acc = heavy_round(acc, 0xe134e831u); break;
    case 4: acc = heavy_round(acc, 0x6d6b43dcu); break;
    case 5: acc = heavy_round(acc, 0x28670d8bu); break;
    case 6: acc = heavy_round(acc, 0xaba3056eu); break;
    case 7: acc = heavy_round(acc, 0x6f9e0df5u); break;
    case 8: acc = heavy_round(acc, 0x3df246d0u); break;
    case 9: acc = heavy_round(acc, 0xd4436befu); break;
    case 10: acc = heavy_round(acc, 0x6b33a882u); break;
    case 11: acc = heavy_round(acc, 0xb7e44df9u); break;
    case 12: acc = heavy_round(acc, 0x27691f04u); break;
    case 13: acc = heavy_round(acc, 0x26851e93u); break;
    case 14: acc = heavy_round(acc, 0x37bb12d6u); break;
    case 15: acc = heavy_round(acc, 0x71562c3du); break;
    case 16: acc = heavy_round(acc, 0xa5648078u); break;
    case 17: acc = heavy_round(acc, 0x39714977u); break;
    case 18: acc = heavy_round(acc, 0x7714186au); break;
    case 19: acc = heavy_round(acc, 0xac886cc1u); break;
    case 20: acc = heavy_round(acc, 0xf98a5f2cu); break;
    case 21: acc = heavy_round(acc, 0x55ad509bu); break;
    case 22: acc = heavy_round(acc, 0x837ccd3eu); break;
    case 23: acc = heavy_round(acc, 0xae9a1385u); break;
    case 24: acc = heavy_round(acc, 0x6605ef20u); break;
    case 25: acc = heavy_round(acc, 0x2222d7ffu); break;
    case 26: acc = heavy_round(acc, 0xf22a8552u); break;
    case 27: acc = heavy_round(acc, 0x7eb86489u); break;
    case 28: acc = heavy_round(acc, 0xf53ba454u); break;
    case 29: acc = heavy_round(acc, 0x8023c3a3u); break;
    case 30: acc = heavy_round(acc, 0x191dd4a6u); break;
    case 31: acc = heavy_round(acc, 0x29e2e3cdu); break;
    case 32: acc = heavy_round(acc, 0x02bd32c8u); break;
    case 33: acc = heavy_round(acc, 0xb7ce3787u); break;
    case 34: acc = heavy_round(acc, 0x28368f3au); break;
    case 35: acc = heavy_round(acc, 0x00ef5551u); break;
    case 36: acc = heavy_round(acc, 0xf97d8e7cu); break;
    case 37: acc = heavy_round(acc, 0xd8b097abu); break;
    case 38: acc = heavy_round(acc, 0x6987c90eu); break;
    case 39: acc = heavy_round(acc, 0x54cdbd15u); break;
    case 40: acc = heavy_round(acc, 0xfb44eb70u); break;
    case 41: acc = heavy_round(acc, 0x72ad880fu); break;
    case 42: acc = heavy_round(acc, 0x7cebd622u); break;
    case 43: acc = heavy_round(acc, 0x750c5f19u); break;
    case 44: acc = heavy_round(acc, 0x6564bda4u); break;
    case 45: acc = heavy_round(acc, 0x0b1fecb3u); break;
    case 46: acc = heavy_round(acc, 0xa2d84a76u); break;
    case 47: acc = heavy_round(acc, 0xf49bbf5du); break;
    case 48: acc = heavy_round(acc, 0x66abb918u); break;
    case 49: acc = heavy_round(acc, 0xf23ee997u); break;
    case 50: acc = heavy_round(acc, 0x6a71fa0au); break;
    case 51: acc = heavy_round(acc, 0x78d2a1e1u); break;
    case 52: acc = heavy_round(acc, 0x1a99d1ccu); break;
    case 53: acc = heavy_round(acc, 0x5cc1e2bbu); break;
    case 54: acc = heavy_round(acc, 0x56e0f8deu); break;
    case 55: acc = heavy_round(acc, 0x96b20aa5u); break;
    case 56: acc = heavy_round(acc, 0xddd43bc0u); break;
    case 57: acc = heavy_round(acc, 0xe5c47c1fu); break;
    case 58: acc = heavy_round(acc, 0x4fe49af2u); break;
    case 59: acc = heavy_round(acc, 0x82693da9u); break;
    case 60: acc = heavy_round(acc, 0xcfd96af4u); break;
    case 61: acc = heavy_round(acc, 0xdcea99c3u); break;
    case 62: acc = heavy_round(acc, 0xf1a77446u); break;
    case 63: acc = heavy_round(acc, 0x9519beedu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

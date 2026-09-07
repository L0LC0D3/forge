#include "heavy.h"
#include "mods.h"

int mod_108(int x)
{
    static const uint32_t local[256] = {
        0x738178d7u, 0x7d26c04au, 0xcf3e3321u, 0x892fb20cu, 0x97f7c5fbu, 0x0269031eu, 0x80f00fe5u, 0xfc520000u, 0xb898f35fu, 0x51722932u, 0xe186f6e9u, 0x936b5334u, 0x9c1ce503u, 0x0a70c686u, 0x16586c2du, 0x2a6b5fa8u,
        0x8367bee7u, 0xe352af1au, 0xd2f033b1u, 0xb383195cu, 0x102de50bu, 0xb618f6eeu, 0x8b545175u, 0xdc98b450u, 0xe3d7fb6fu, 0x6a6bf202u, 0x48890979u, 0x71fba484u, 0x5aa6e613u, 0xce6f3456u, 0x2354dfbdu, 0xb2589df8u,
        0x0717c8f7u, 0xb2d591eau, 0xa9449841u, 0x07ed94acu, 0xd188081bu, 0xde351ebeu, 0xafef3705u, 0xdafdbca0u, 0xe019477fu, 0xab9b2ed2u, 0x5a7a0009u, 0x718589d4u, 0xaad56b23u, 0x68605626u, 0x555c774du, 0x102eb048u,
        0xe0129707u, 0xc53c68bau, 0x8c6460d1u, 0xd08423fcu, 0xfd172f2bu, 0xee9a7a8eu, 0xdef9c095u, 0xe06618f0u, 0xbefdd78fu, 0x202cdfa2u, 0x96a2da99u, 0x1ebe0324u, 0xcfd97433u, 0xc7c12bf6u, 0xa3c832ddu, 0x49729698u,
        0x54192917u, 0x8b54338au, 0xe4b88d61u, 0x309bc74cu, 0x3c2c5a3bu, 0xc6660a5eu, 0xfaecee25u, 0xa2f6c940u, 0x7e66ab9fu, 0x528e0472u, 0x728c9929u, 0x079a1074u, 0x9d240143u, 0xaf4eb5c6u, 0x4031126du, 0xd8e950e8u,
        0x1d2c7f27u, 0xdd29f25au, 0xd8ea1df1u, 0x74c97e9cu, 0xd058894bu, 0x7ff4ce2eu, 0x6881bfb5u, 0xf614cd90u, 0x1874c3afu, 0x1c6b9d42u, 0xea003bb9u, 0x0b4eb1c4u, 0x86661253u, 0x8505f396u, 0x267015fdu, 0xfe97df38u,
        0x798d9937u, 0xca0aa52au, 0xdde21281u, 0x62e249ecu, 0xa36cbc5bu, 0x40e3c5feu, 0x9eb13545u, 0x1a6525e0u, 0x93891fbfu, 0x76b2aa12u, 0x0f06c249u, 0xaa50e714u, 0xaf90a763u, 0x2223e566u, 0xac9e3d8du, 0x0fc34188u,
        0x3bbd7747u, 0x68834bfau, 0x46c96b11u, 0x89fb293cu, 0x5779f36bu, 0x0a0ff1ceu, 0xb6b44ed5u, 0x0dccd230u, 0x1244bfcfu, 0x49902ae2u, 0x99e92cd9u, 0x5655b064u, 0xfcd4c073u, 0xa3258b36u, 0x1314891du, 0xc6f077d8u,
        0xda7d1957u, 0xa660e6cau, 0xd50927a1u, 0x92691c8cu, 0x56d12e7bu, 0x8796519eu, 0xfc040c65u, 0xdb70d280u, 0xe388a3dfu, 0x3c711fb2u, 0x79307b69u, 0xc2520db4u, 0x22a35d83u, 0x37c7e506u, 0x146bf8adu, 0x93e48228u,
        0x80cd7f67u, 0x18b0759au, 0x484a4831u, 0x8dc123dcu, 0xe4036d8bu, 0xe0d3e56eu, 0x7c596df5u, 0xebb626d0u, 0x9275cbefu, 0x86028882u, 0x61a5adf9u, 0x327aff04u, 0xb5ad7e93u, 0xf307f2d6u, 0x757d8c3du, 0xeba46078u,
        0x1defa977u, 0xcbbef86au, 0xee75ccc1u, 0x46d83f2cu, 0x29e1b09bu, 0x8865ad3eu, 0x97ad7385u, 0x5441cf20u, 0xf66d37ffu, 0xbc316552u, 0x5e51c489u, 0xcc458454u, 0x3ae423a3u, 0x9b22b4a6u, 0x956243cdu, 0x987512c8u,
        0x75649787u, 0x13196f3au, 0x33b4b551u, 0x91c36e7cu, 0x4b7cf7abu, 0x0c28a90eu, 0x90391d15u, 0x27f8cb70u, 0x430fe80fu, 0xa42ab622u, 0x607dbf19u, 0xe6669da4u, 0x37784cb3u, 0x79952a76u, 0xfd731f5du, 0x09db9918u,
        0x2eed4997u, 0x598cda0au, 0x327001e1u, 0x9bd7b1ccu, 0x742642bbu, 0xe539d8deu, 0x1a756aa5u, 0xc7001bc0u, 0x183edc1fu, 0x025b7af2u, 0xcfb29da9u, 0x58d34af4u, 0x40daf9c3u, 0x2b1c5446u, 0xf1491eedu, 0xa49cf368u,
        0xe68abfa7u, 0xf12638dau, 0x4350b271u, 0x3baa091cu, 0xe76e91cbu, 0x47f63caeu, 0xed1b5c35u, 0x2ebcc010u, 0x921b142fu, 0x6a70b3c2u, 0x19b96039u, 0xccc08c44u, 0x0cbd2ad3u, 0x6fb53216u, 0xfebd427du, 0x12be21b8u,
        0x3c7df9b7u, 0xe3328baau, 0x8d3fc701u, 0x410f746cu, 0x1126e4dbu, 0xf3fad47eu, 0x5123f1c5u, 0x49d3b860u, 0x5905903fu, 0x0f576092u, 0x429b06c9u, 0x0ca36194u, 0x810fdfe3u, 0xfa9cc3e6u, 0x8de88a0du, 0x93842408u,
        0xe547f7c7u, 0xc03ed27au, 0x95663f91u, 0xc51cf3bcu, 0x95603bebu, 0x0424a04eu, 0xb1c82b55u, 0x402a04b0u, 0xb19f504fu, 0x933c8162u, 0x74a09159u, 0x5430cae4u, 0xc40418f3u, 0x425009b6u, 0x7123f59du, 0x4b73fa58u,
    };
    uint32_t acc = 0x9821f558u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 108) & 255]);
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
    case 0: acc = heavy_round(acc, 0xd24ab027u); break;
    case 1: acc = heavy_round(acc, 0xe0386f5au); break;
    case 2: acc = heavy_round(acc, 0xfb7476f1u); break;
    case 3: acc = heavy_round(acc, 0x0646039cu); break;
    case 4: acc = heavy_round(acc, 0xcda94a4bu); break;
    case 5: acc = heavy_round(acc, 0x62f49b2eu); break;
    case 6: acc = heavy_round(acc, 0xe02d28b5u); break;
    case 7: acc = heavy_round(acc, 0x969f2290u); break;
    case 8: acc = heavy_round(acc, 0xaa5914afu); break;
    case 9: acc = heavy_round(acc, 0x6649ba42u); break;
    case 10: acc = heavy_round(acc, 0xfed5b4b9u); break;
    case 11: acc = heavy_round(acc, 0xf95bd6c4u); break;
    case 12: acc = heavy_round(acc, 0x76cef353u); break;
    case 13: acc = heavy_round(acc, 0x7cff6096u); break;
    case 14: acc = heavy_round(acc, 0xc4889efdu); break;
    case 15: acc = heavy_round(acc, 0x2d6cd438u); break;
    case 16: acc = heavy_round(acc, 0xa0fc0a37u); break;
    case 17: acc = heavy_round(acc, 0xd4ac622au); break;
    case 18: acc = heavy_round(acc, 0x4e66ab81u); break;
    case 19: acc = heavy_round(acc, 0xdf940eecu); break;
    case 20: acc = heavy_round(acc, 0x09f1bd5bu); break;
    case 21: acc = heavy_round(acc, 0x8d0ad2feu); break;
    case 22: acc = heavy_round(acc, 0x50dade45u); break;
    case 23: acc = heavy_round(acc, 0x40d8bae0u); break;
    case 24: acc = heavy_round(acc, 0x21c5b0bfu); break;
    case 25: acc = heavy_round(acc, 0xfa8c0712u); break;
    case 26: acc = heavy_round(acc, 0x711e7b49u); break;
    case 27: acc = heavy_round(acc, 0x2a3b4c14u); break;
    case 28: acc = heavy_round(acc, 0x6fb5c863u); break;
    case 29: acc = heavy_round(acc, 0xe82c9266u); break;
    case 30: acc = heavy_round(acc, 0x14fd068du); break;
    case 31: acc = heavy_round(acc, 0xc1a97688u); break;
    case 32: acc = heavy_round(acc, 0x2a8c2847u); break;
    case 33: acc = heavy_round(acc, 0x2c8848fau); break;
    case 34: acc = heavy_round(acc, 0xecd84411u); break;
    case 35: acc = heavy_round(acc, 0x14322e3cu); break;
    case 36: acc = heavy_round(acc, 0xc543346bu); break;
    case 37: acc = heavy_round(acc, 0x262e3eceu); break;
    case 38: acc = heavy_round(acc, 0xbbec37d5u); break;
    case 39: acc = heavy_round(acc, 0x5979a730u); break;
    case 40: acc = heavy_round(acc, 0x93e990cfu); break;
    case 41: acc = heavy_round(acc, 0xf334c7e2u); break;
    case 42: acc = heavy_round(acc, 0x22d325d9u); break;
    case 43: acc = heavy_round(acc, 0xd46d5564u); break;
    case 44: acc = heavy_round(acc, 0xecc62173u); break;
    case 45: acc = heavy_round(acc, 0x780d7836u); break;
    case 46: acc = heavy_round(acc, 0x7049921du); break;
    case 47: acc = heavy_round(acc, 0x8537ecd8u); break;
    case 48: acc = heavy_round(acc, 0x69bc0a57u); break;
    case 49: acc = heavy_round(acc, 0x899923cau); break;
    case 50: acc = heavy_round(acc, 0xbc3240a1u); break;
    case 51: acc = heavy_round(acc, 0x2075618cu); break;
    case 52: acc = heavy_round(acc, 0x2deeaf7bu); break;
    case 53: acc = heavy_round(acc, 0xce7bde9eu); break;
    case 54: acc = heavy_round(acc, 0xd0da3565u); break;
    case 55: acc = heavy_round(acc, 0xffa6e780u); break;
    case 56: acc = heavy_round(acc, 0x53a5b4dfu); break;
    case 57: acc = heavy_round(acc, 0x2bb0fcb2u); break;
    case 58: acc = heavy_round(acc, 0xa67cb469u); break;
    case 59: acc = heavy_round(acc, 0xfee6f2b4u); break;
    case 60: acc = heavy_round(acc, 0xe670fe83u); break;
    case 61: acc = heavy_round(acc, 0xd05f1206u); break;
    case 62: acc = heavy_round(acc, 0x750741adu); break;
    case 63: acc = heavy_round(acc, 0x7bdd3728u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

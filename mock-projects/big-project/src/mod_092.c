#include "heavy.h"
#include "mods.h"

int mod_092(int x)
{
    static const uint32_t local[256] = {
        0x6d3cbb87u, 0x4b6b433au, 0x5e547951u, 0x87f8627cu, 0xb9655babu, 0xfccdbd0eu, 0x82932115u, 0xb822ff70u, 0x79ec8c0fu, 0x5ab70a22u, 0xc3160319u, 0x373a11a4u, 0xe66d30b3u, 0x32dcbe76u, 0x5f0da35du, 0x734c4d18u,
        0x055e6d97u, 0xd5a3ae0au, 0x4c10c5e1u, 0x1b19a5ccu, 0x05b7a6bbu, 0xfb73ecdeu, 0x53606ea5u, 0xb2874fc0u, 0x00d4801fu, 0x754ccef2u, 0x016be1a9u, 0x5453bef4u, 0x8898ddc3u, 0xbc98e846u, 0x6b94a2edu, 0xd50aa768u,
        0xa5d4e3a7u, 0xb6420cdau, 0x10327671u, 0xbb38fd1cu, 0x2ae8f5cbu, 0x3d0550aeu, 0x54d76035u, 0xc0e0f410u, 0x7ea9b82fu, 0x470707c2u, 0x66d3a439u, 0xd22e0044u, 0x43840ed3u, 0xbaa6c616u, 0x81f9c67du, 0xbd68d5b8u,
        0x7ee11db7u, 0x46935faau, 0xe1a28b01u, 0x082b686cu, 0x24ca48dbu, 0xd11ee87eu, 0xdff0f5c5u, 0x9dd4ec60u, 0x2bcd343fu, 0x52d2b492u, 0x07564ac9u, 0x4b3dd594u, 0x8d1fc3e3u, 0x304357e6u, 0x1a560e0du, 0x3babd808u,
        0xd5041bc7u, 0x6724a67au, 0x558a0391u, 0xeb05e7bcu, 0x276c9febu, 0x229db44eu, 0x6fe62f55u, 0x414838b0u, 0xdcdff44fu, 0x8adcd562u, 0x1d3cd559u, 0xcb383ee4u, 0x1b9cfcf3u, 0xe3eb9db6u, 0x1702799du, 0x4458ae58u,
        0x10feddd7u, 0x4fc2e14au, 0xef51e021u, 0xe61d7b0cu, 0xaf20fafbu, 0xc79eb41eu, 0x32300ce5u, 0x305fd900u, 0x12c2f85fu, 0x20926a32u, 0x991043e9u, 0x1f123c34u, 0xf56cba03u, 0x2f5c9786u, 0x5498092du, 0x013458a8u,
        0xcfd263e7u, 0x5f7b101au, 0xb0a320b1u, 0x6507225cu, 0x90785a0bu, 0x517ee7eeu, 0x96878e75u, 0xcd80cd50u, 0x0a97406fu, 0x54a07302u, 0xb1999679u, 0x2500cd84u, 0x813ffb13u, 0xcf934556u, 0x39efbcbdu, 0x2143d6f8u,
        0xf2bfadf7u, 0xec9a32eau, 0xa966c541u, 0x0c97ddacu, 0x0843bd1bu, 0x1cdb4fbeu, 0xdee5b405u, 0xa85015a0u, 0xcdbdcc7fu, 0x46f3efd2u, 0x73e1cd09u, 0x1c78f2d4u, 0x9607c023u, 0xb4cca726u, 0x4822944du, 0x28cc2948u,
        0xaf47bc07u, 0x14ad49bau, 0x87c5cdd1u, 0x0ae4acfcu, 0xcb94242bu, 0x2190eb8eu, 0xaf837d95u, 0xcdb2b1f0u, 0x41d79c8fu, 0xc6b9e0a2u, 0x5331e799u, 0xf62fac24u, 0x8af50933u, 0xd285bcf6u, 0xaa898fddu, 0xc1524f98u,
        0x9f2b8e17u, 0x8c81548au, 0x28293a61u, 0x6742904cu, 0x17ba8f3bu, 0xc2bcbb5eu, 0x9ed9eb25u, 0x17cda240u, 0x38c5b09fu, 0x225f4572u, 0xb912e629u, 0xa419f974u, 0x4778d643u, 0xef7b86c6u, 0xc6bdaf6du, 0x099b49e8u,
        0xd06c2427u, 0x7023535au, 0x253a0af1u, 0x5246879cu, 0xc247fe4bu, 0x9ebbbf2eu, 0xc5a1fcb5u, 0x7e05e690u, 0x80a908afu, 0xf7911e42u, 0x954dc8b9u, 0x696cdac4u, 0x53442753u, 0x75ab0496u, 0xcc97f2fdu, 0xe5ac1838u,
        0xd54a7e37u, 0x12e0462au, 0x67e13f81u, 0x75c592ecu, 0x490d715bu, 0x5f2af6feu, 0x4ed4b245u, 0x65007ee0u, 0xf3e2a4bfu, 0x033c6b12u, 0xedeb8f49u, 0x2a9d5014u, 0xe647fc63u, 0x42513666u, 0x46315a8du, 0x4ec9ba88u,
        0xd4479c47u, 0xcf452cfau, 0xb747d811u, 0x44d4b23cu, 0xe21be86bu, 0x88e762ceu, 0x07ab0bd5u, 0xeea26b30u, 0x891384cfu, 0xf18e2be2u, 0x6f3539d9u, 0xbd605964u, 0xf8b55573u, 0x75eb1c36u, 0xa7e2e61du, 0xa37930d8u,
        0x98247e57u, 0xd71f07cau, 0x48d6d4a1u, 0x4bc8e58cu, 0x8bc4637bu, 0x4c0e029eu, 0xef9e0965u, 0x4a10ab80u, 0x631ca8dfu, 0x2df360b2u, 0xfbb3c869u, 0x38aaf6b4u, 0x52fd3283u, 0x4435b606u, 0xe04595adu, 0xf77f7b28u,
        0x9fe22467u, 0x037ad69au, 0x50373531u, 0x80372cdcu, 0x1c97e28bu, 0x53fbd66eu, 0xc866aaf5u, 0x03b03fd0u, 0xe11f10efu, 0xb3190982u, 0x3c303af9u, 0x44b22804u, 0x9dd09393u, 0xc42e03d6u, 0xe832693du, 0x63e19978u,
        0x2ec18e77u, 0xa4a5996au, 0x8f51f9c1u, 0x90f4882cu, 0x5367659bu, 0x974dde3eu, 0xa5fdf085u, 0x55262820u, 0xae7bbcffu, 0xdaec2652u, 0x2fb39189u, 0x6aeaed54u, 0x722078a3u, 0xc01105a6u, 0x52c260cdu, 0x56e48bc8u,
    };
    uint32_t acc = 0x1e28c6c8u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 92) & 255]);
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
    case 0: acc = heavy_round(acc, 0x19526437u); break;
    case 1: acc = heavy_round(acc, 0x22eaf42au); break;
    case 2: acc = heavy_round(acc, 0x77c01581u); break;
    case 3: acc = heavy_round(acc, 0xf35a70ecu); break;
    case 4: acc = heavy_round(acc, 0xa810b75bu); break;
    case 5: acc = heavy_round(acc, 0x563984feu); break;
    case 6: acc = heavy_round(acc, 0x8525e845u); break;
    case 7: acc = heavy_round(acc, 0xc8a43ce0u); break;
    case 8: acc = heavy_round(acc, 0xcee74abfu); break;
    case 9: acc = heavy_round(acc, 0x329cd912u); break;
    case 10: acc = heavy_round(acc, 0x7fa52549u); break;
    case 11: acc = heavy_round(acc, 0x28cdee14u); break;
    case 12: acc = heavy_round(acc, 0x9bb40263u); break;
    case 13: acc = heavy_round(acc, 0x19318466u); break;
    case 14: acc = heavy_round(acc, 0x2ca9508du); break;
    case 15: acc = heavy_round(acc, 0xd4e53888u); break;
    case 16: acc = heavy_round(acc, 0xe5e10247u); break;
    case 17: acc = heavy_round(acc, 0xc8b35afau); break;
    case 18: acc = heavy_round(acc, 0xc6342e11u); break;
    case 19: acc = heavy_round(acc, 0x9719103cu); break;
    case 20: acc = heavy_round(acc, 0x7b08ae6bu); break;
    case 21: acc = heavy_round(acc, 0xf9d170ceu); break;
    case 22: acc = heavy_round(acc, 0x6321c1d5u); break;
    case 23: acc = heavy_round(acc, 0xa62da930u); break;
    case 24: acc = heavy_round(acc, 0x63d9aacfu); break;
    case 25: acc = heavy_round(acc, 0xb6c219e2u); break;
    case 26: acc = heavy_round(acc, 0x61ac4fd9u); break;
    case 27: acc = heavy_round(acc, 0xa6307764u); break;
    case 28: acc = heavy_round(acc, 0xa53adb73u); break;
    case 29: acc = heavy_round(acc, 0x8216ea36u); break;
    case 30: acc = heavy_round(acc, 0xd8305c1du); break;
    case 31: acc = heavy_round(acc, 0x7a6c2ed8u); break;
    case 32: acc = heavy_round(acc, 0x21af6457u); break;
    case 33: acc = heavy_round(acc, 0xa0d0b5cau); break;
    case 34: acc = heavy_round(acc, 0x5030aaa1u); break;
    case 35: acc = heavy_round(acc, 0x5c9cc38cu); break;
    case 36: acc = heavy_round(acc, 0x7efaa97bu); break;
    case 37: acc = heavy_round(acc, 0x1bb3909eu); break;
    case 38: acc = heavy_round(acc, 0x4f9a3f65u); break;
    case 39: acc = heavy_round(acc, 0xed636980u); break;
    case 40: acc = heavy_round(acc, 0x34044edfu); break;
    case 41: acc = heavy_round(acc, 0x4bdaceb2u); break;
    case 42: acc = heavy_round(acc, 0x74485e69u); break;
    case 43: acc = heavy_round(acc, 0x31fa94b4u); break;
    case 44: acc = heavy_round(acc, 0x22fc3883u); break;
    case 45: acc = heavy_round(acc, 0x068d0406u); break;
    case 46: acc = heavy_round(acc, 0x25c88badu); break;
    case 47: acc = heavy_round(acc, 0xb329f928u); break;
    case 48: acc = heavy_round(acc, 0x63be8a67u); break;
    case 49: acc = heavy_round(acc, 0xbc50049au); break;
    case 50: acc = heavy_round(acc, 0x215e8b31u); break;
    case 51: acc = heavy_round(acc, 0x317a8adcu); break;
    case 52: acc = heavy_round(acc, 0x2277a88bu); break;
    case 53: acc = heavy_round(acc, 0x1f3ce46eu); break;
    case 54: acc = heavy_round(acc, 0x644860f5u); break;
    case 55: acc = heavy_round(acc, 0xa2aa7dd0u); break;
    case 56: acc = heavy_round(acc, 0xb68836efu); break;
    case 57: acc = heavy_round(acc, 0x2493f782u); break;
    case 58: acc = heavy_round(acc, 0x384250f9u); break;
    case 59: acc = heavy_round(acc, 0x6c614604u); break;
    case 60: acc = heavy_round(acc, 0x55a91993u); break;
    case 61: acc = heavy_round(acc, 0x7590d1d6u); break;
    case 62: acc = heavy_round(acc, 0x664adf3du); break;
    case 63: acc = heavy_round(acc, 0x10239778u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

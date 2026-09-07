#include "heavy.h"
#include "mods.h"

int mod_028(int x)
{
    static const uint32_t local[256] = {
        0xcbc547c7u, 0x327be27au, 0x46e00f91u, 0xa12c83bcu, 0x058a8bebu, 0x622ab04eu, 0x7276fb55u, 0xffea94b0u, 0x37c6a04fu, 0xdd1b9162u, 0xa5546159u, 0xc2325ae4u, 0x097868f3u, 0xf11819b6u, 0x97acc59du, 0x13468a58u,
        0xd4bb09d7u, 0x85d91d4au, 0x665aec21u, 0xb85b170cu, 0x2469e6fbu, 0xd65ab01eu, 0x7423d8e5u, 0x99093500u, 0xda04a45fu, 0x35702632u, 0x5d3acfe9u, 0xb5035834u, 0x5fd32603u, 0xf1981386u, 0x0105552du, 0xbb0934a8u,
        0x8b498fe7u, 0xac104c1au, 0xe61f2cb1u, 0xb51bbe5cu, 0x13ac460bu, 0xb729e3eeu, 0x7c9e5a75u, 0x7df12950u, 0xc0f3ec6fu, 0x4fdd2f02u, 0x02972279u, 0xf3a8e984u, 0xb6f16713u, 0xc69dc156u, 0x0ee008bdu, 0x1bbfb2f8u,
        0x80b1d9f7u, 0xeb6e6eeau, 0x0615d141u, 0xac4379acu, 0xc022a91bu, 0x51354bbeu, 0xfddf8005u, 0xae4771a0u, 0xa5f5787fu, 0x3c4fabd2u, 0xd2725909u, 0x2d980ed4u, 0x95c42c23u, 0x50662326u, 0x7255e04du, 0x29af0548u,
        0x9a74e807u, 0x518085bau, 0xa467d9d1u, 0x3be748fcu, 0x8ede102bu, 0x8c59e78eu, 0xcc204995u, 0xa6f10df0u, 0x1eaa488fu, 0xb9f49ca2u, 0x70157399u, 0xc385c824u, 0x037c7533u, 0x726e38f6u, 0x86bfdbddu, 0xfe5c2b98u,
        0x2253ba17u, 0x8313908au, 0xcd7e4661u, 0xdb5c2c4cu, 0x6d2f7b3bu, 0xbbb4b75eu, 0xadd9b725u, 0xb212fe40u, 0xacf35c9fu, 0x07390172u, 0x75097229u, 0x17671574u, 0x978b4243u, 0xe37302c6u, 0xe1b6fb6du, 0x288c25e8u,
        0xd64f5027u, 0x8c348f5au, 0x4c0216f1u, 0x2b37239cu, 0xe0a7ea4bu, 0x6da2bb2eu, 0xebc4c8b5u, 0x37124290u, 0xcef1b4afu, 0xb1c9da42u, 0x011754b9u, 0xdc70f6c4u, 0x89a19353u, 0xfd718096u, 0xe3143efdu, 0xfc43f438u,
        0xf8a8aa37u, 0xb030822au, 0x38dc4b81u, 0x454d2eecu, 0x17185d5bu, 0x3bc0f2feu, 0xe0da7e45u, 0x0a93dae0u, 0x0f0650bfu, 0x66942712u, 0x4a481b49u, 0x67186c14u, 0xc1b06863u, 0x8da6b266u, 0x44f0a68du, 0xe2c89688u,
        0x5fe0c847u, 0x399468fau, 0x8b35e411u, 0x0cb34e3cu, 0xf691d46bu, 0x9aec5eceu, 0x8a53d7d5u, 0xbe7cc730u, 0x13d230cfu, 0xc1c4e7e2u, 0x2ce4c5d9u, 0xfd127564u, 0xe7e8c173u, 0xa48f9836u, 0xaba5321du, 0xaa9f0cd8u,
        0x86b8aa57u, 0x4a2d43cau, 0xa877e0a1u, 0x7dbe818cu, 0x2d654f7bu, 0xab41fe9eu, 0x17a9d565u, 0xf1f20780u, 0xb03654dfu, 0x1ec91cb2u, 0xbb765469u, 0x255412b4u, 0x74bb9e83u, 0x65e93206u, 0x35cae1adu, 0xd78c5728u,
        0x9c315067u, 0xab08129au, 0xf44b4131u, 0xfe03c8dcu, 0x4223ce8bu, 0x081ed26eu, 0x7a9576f5u, 0xa1589bd0u, 0xf353bcefu, 0x684dc582u, 0xcec5c6f9u, 0xf8124404u, 0xc0d9ff93u, 0xd8b07fd6u, 0x0c3ab53du, 0xf2957578u,
        0x938bba77u, 0x9c71d56au, 0x609905c1u, 0xac58242cu, 0xa39e519bu, 0x981fda3eu, 0xf70fbc85u, 0x76558420u, 0x388b68ffu, 0xe83fe252u, 0x95dc1d89u, 0x6ec20954u, 0x1534e4a3u, 0xb72281a6u, 0xf20daccdu, 0xd9ff67c8u,
        0x3448e887u, 0xa5f78c3au, 0xfd8a2e51u, 0xb0d0937cu, 0xb8e5d8abu, 0x5d22160eu, 0xb351a615u, 0x17cdc070u, 0x377e590fu, 0x17cc7322u, 0x26025819u, 0xb41862a4u, 0xbafd4db3u, 0x3ebc3776u, 0xd49cc85du, 0x114f2e18u,
        0x2a29da97u, 0x6666370au, 0x8987bae1u, 0x8cc216ccu, 0xf14b63bbu, 0x444285deu, 0x47d433a5u, 0x79e650c0u, 0x140d8d1fu, 0x6f6077f2u, 0x0ac176a9u, 0x740a4ff4u, 0x0ba43ac3u, 0x003aa146u, 0x5b8107edu, 0x1149c868u,
        0x152f90a7u, 0x63cad5dau, 0x013aab71u, 0x6ac1ae1cu, 0xd45ff2cbu, 0xf5de29aeu, 0x4f506535u, 0x2e043510u, 0x6e5a052fu, 0x36a8f0c2u, 0xd5e27939u, 0x2bccd144u, 0x80daabd3u, 0xaf9abf16u, 0x78936b7du, 0x97f436b8u,
        0x999b0ab7u, 0xdb7268aau, 0x2f8c0001u, 0x6ea4596cu, 0x11f485dbu, 0xa592017eu, 0xf6bf3ac5u, 0xb2cc6d60u, 0x72c4c13fu, 0x5492dd92u, 0xaf6e5fc9u, 0x79d4e694u, 0xc491a0e3u, 0xf41990e6u, 0xf7ecf30du, 0xf8937908u,
    };
    uint32_t acc = 0x0572b408u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 28) & 255]);
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
    case 0: acc = heavy_round(acc, 0x66e76777u); break;
    case 1: acc = heavy_round(acc, 0xc4079e6au); break;
    case 2: acc = heavy_round(acc, 0xb24a3ac1u); break;
    case 3: acc = heavy_round(acc, 0x9a75d52cu); break;
    case 4: acc = heavy_round(acc, 0xd8a64e9bu); break;
    case 5: acc = heavy_round(acc, 0x2d55b33eu); break;
    case 6: acc = heavy_round(acc, 0x3041c185u); break;
    case 7: acc = heavy_round(acc, 0xc8ddc520u); break;
    case 8: acc = heavy_round(acc, 0x0c5cb5ffu); break;
    case 9: acc = heavy_round(acc, 0x938ecb52u); break;
    case 10: acc = heavy_round(acc, 0x7ab3f289u); break;
    case 11: acc = heavy_round(acc, 0xd995da54u); break;
    case 12: acc = heavy_round(acc, 0x503c81a3u); break;
    case 13: acc = heavy_round(acc, 0x14137aa6u); break;
    case 14: acc = heavy_round(acc, 0xfe8051cdu); break;
    case 15: acc = heavy_round(acc, 0x468fc8c8u); break;
    case 16: acc = heavy_round(acc, 0xb743d587u); break;
    case 17: acc = heavy_round(acc, 0x6c23953au); break;
    case 18: acc = heavy_round(acc, 0x7a5ca351u); break;
    case 19: acc = heavy_round(acc, 0x4f1e847cu); break;
    case 20: acc = heavy_round(acc, 0x59e115abu); break;
    case 21: acc = heavy_round(acc, 0x99322f0eu); break;
    case 22: acc = heavy_round(acc, 0x9b18eb15u); break;
    case 23: acc = heavy_round(acc, 0xff6a4170u); break;
    case 24: acc = heavy_round(acc, 0xeed6e60fu); break;
    case 25: acc = heavy_round(acc, 0x74799c22u); break;
    case 26: acc = heavy_round(acc, 0xda236d19u); break;
    case 27: acc = heavy_round(acc, 0x152473a4u); break;
    case 28: acc = heavy_round(acc, 0x20602ab3u); break;
    case 29: acc = heavy_round(acc, 0x5dcf7076u); break;
    case 30: acc = heavy_round(acc, 0xa24cad5du); break;
    case 31: acc = heavy_round(acc, 0xf57bcf18u); break;
    case 32: acc = heavy_round(acc, 0x41940797u); break;
    case 33: acc = heavy_round(acc, 0x49b8800au); break;
    case 34: acc = heavy_round(acc, 0xfecb6fe1u); break;
    case 35: acc = heavy_round(acc, 0x285047ccu); break;
    case 36: acc = heavy_round(acc, 0x4809e0bbu); break;
    case 37: acc = heavy_round(acc, 0xc6bcdedeu); break;
    case 38: acc = heavy_round(acc, 0x5880b8a5u); break;
    case 39: acc = heavy_round(acc, 0x0ca711c0u); break;
    case 40: acc = heavy_round(acc, 0x2dbd5a1fu); break;
    case 41: acc = heavy_round(acc, 0xcdfbe0f2u); break;
    case 42: acc = heavy_round(acc, 0x057bcba9u); break;
    case 43: acc = heavy_round(acc, 0xba5ea0f4u); break;
    case 44: acc = heavy_round(acc, 0x1f3257c3u); break;
    case 45: acc = heavy_round(acc, 0x73001a46u); break;
    case 46: acc = heavy_round(acc, 0xaebe2cedu); break;
    case 47: acc = heavy_round(acc, 0x4522a968u); break;
    case 48: acc = heavy_round(acc, 0x19d8fda7u); break;
    case 49: acc = heavy_round(acc, 0xc6d35edau); break;
    case 50: acc = heavy_round(acc, 0xd03fa071u); break;
    case 51: acc = heavy_round(acc, 0xd4a01f1cu); break;
    case 52: acc = heavy_round(acc, 0xdeb1afcbu); break;
    case 53: acc = heavy_round(acc, 0x8252c2aeu); break;
    case 54: acc = heavy_round(acc, 0xd7322a35u); break;
    case 55: acc = heavy_round(acc, 0x45f93610u); break;
    case 56: acc = heavy_round(acc, 0x5d31122fu); break;
    case 57: acc = heavy_round(acc, 0x4bc299c2u); break;
    case 58: acc = heavy_round(acc, 0xa2860e39u); break;
    case 59: acc = heavy_round(acc, 0x4a796244u); break;
    case 60: acc = heavy_round(acc, 0xfa6408d3u); break;
    case 61: acc = heavy_round(acc, 0xaba27816u); break;
    case 62: acc = heavy_round(acc, 0x69add07du); break;
    case 63: acc = heavy_round(acc, 0x378957b8u); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

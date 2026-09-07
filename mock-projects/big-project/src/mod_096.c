#include "heavy.h"
#include "mods.h"

int mod_096(int x)
{
    static const uint32_t local[256] = {
        0xf7374333u, 0x5efeaef6u, 0x9f19d9ddu, 0xe4221198u, 0x1d046817u, 0xa160668au, 0xdaa92461u, 0x48fd724cu, 0x1644093bu, 0x6053ed5eu, 0xbf737525u, 0x6695a440u, 0x1bb9ca9fu, 0x75209772u, 0xf5901029u, 0xaf311b74u,
        0x61319043u, 0x01f8f8c6u, 0xd488796du, 0x43638be8u, 0xfbe37e27u, 0xfd0ee55au, 0x6b5c74f1u, 0xf241e99cu, 0x9d17f84bu, 0x02e7712eu, 0xa6c606b5u, 0x42d66890u, 0x450ba2afu, 0x43eef042u, 0x59bd72b9u, 0x7ad47cc4u,
        0x52136153u, 0xa14cf696u, 0x2c3d3cfdu, 0xd68cda38u, 0x90005837u, 0x4cf8582au, 0xb4462981u, 0x662174ecu, 0x2bc3eb5bu, 0x810b28feu, 0x3d233c45u, 0x43f980e0u, 0xaf53bebfu, 0x2256bd12u, 0x00edb949u, 0x18757214u,
        0x69cdb663u, 0x6237a866u, 0xd851248du, 0x1ee2fc88u, 0xe7dbf647u, 0xb3a9befau, 0xa48f4211u, 0x1fb1143cu, 0x6058e26bu, 0xa79c14ceu, 0xf7c415d5u, 0x13e3ed30u, 0x39331ecfu, 0x8484fde2u, 0xbf69e3d9u, 0x65c8fb64u,
        0x08918f73u, 0xad360e36u, 0xf51d301du, 0x02eaf2d8u, 0xb6375857u, 0x2af019cau, 0x99a0bea1u, 0xb345c78cu, 0xa127dd7bu, 0xeeb7349eu, 0x7e219365u, 0x69baad80u, 0xed8ac2dfu, 0x9de6b2b2u, 0x9fbaf269u, 0x81c418b4u,
        0x5ecfec83u, 0xfe052806u, 0x193a5fadu, 0x1e69bd28u, 0x62137e67u, 0x53d8689au, 0xef239f31u, 0x1e748edcu, 0x2cc1dc8bu, 0x49b9886eu, 0x39f4b4f5u, 0x59e2c1d0u, 0x137baaefu, 0x3128db82u, 0x72a9e4f9u, 0x1c9bca04u,
        0x7d39cd93u, 0xb3a1f5d6u, 0xe581b33du, 0x12645b78u, 0x16b16877u, 0x46afab6au, 0x8f00e3c1u, 0x18126a2cu, 0x29f7df9bu, 0xf740103eu, 0xe7367a85u, 0xa6012a20u, 0x3e66d6ffu, 0x60387852u, 0x5f3fbb89u, 0xc7c50f54u,
        0x64c032a3u, 0xe04977a6u, 0x950c2acdu, 0xd51fcdc8u, 0xd3921687u, 0x6302e23au, 0x81618c51u, 0x6034597cu, 0xb7dae6abu, 0x5127cc0eu, 0x241fe415u, 0x0cfae670u, 0x5ded470fu, 0x7c428922u, 0x72c57619u, 0x45f4e8a4u,
        0x16941bb3u, 0x1978ad76u, 0x8d32c65du, 0x02211418u, 0x7c768897u, 0x1f9f0d0au, 0x7cae98e1u, 0x102f5cccu, 0xfdbbf1bbu, 0x9c8dbbdeu, 0x0129f1a5u, 0x9af4f6c0u, 0xcdeffb1fu, 0xd5b40df2u, 0x30c414a9u, 0xdb2055f4u,
        0xa42688c3u, 0x47ec9746u, 0xed8e85edu, 0x2a2d2e68u, 0xe95fbea7u, 0xda912bdau, 0x75910971u, 0xea98741cu, 0x3b2c00cbu, 0xd9cedfaeu, 0x910da335u, 0xf9545b10u, 0x668ff32fu, 0x8c3a06c2u, 0x23049739u, 0x9c7c5744u,
        0x3f2879d3u, 0x77a23516u, 0x1ff8697du, 0x23491cb8u, 0xf68eb8b7u, 0xa9263eaau, 0x2ef1de01u, 0xab449f6cu, 0xd7fc13dbu, 0x9488377eu, 0x78c3f8c5u, 0xbebe1360u, 0x8c2e2f3fu, 0x5ec17392u, 0x698ffdc9u, 0xc07dec94u,
        0x498aeee3u, 0xa7d686e6u, 0x6889710du, 0x58b9df08u, 0x948476c7u, 0x27eb457au, 0xc9fa1691u, 0x5748debcu, 0x743d2aebu, 0xb396c34eu, 0x7f85f255u, 0xbf171fb0u, 0x3f6baf4fu, 0x7b775462u, 0x4aaf4859u, 0xeeda15e4u,
        0x657ee7f3u, 0x9b068cb6u, 0x759a9c9du, 0x1b047558u, 0xd801f8d7u, 0x4aad404au, 0x5612b321u, 0x8cfa320cu, 0xf84045fbu, 0x4917831eu, 0x1ecc8fe5u, 0x5b848000u, 0x2d29735fu, 0x4fc8a932u, 0xc2eb76e9u, 0x9085d334u,
        0x85756503u, 0xa6ef4686u, 0xefc4ec2du, 0xefeddfa8u, 0x0a083ee7u, 0x2c792f1au, 0x60e4b3b1u, 0xd3ed995cu, 0xa496650bu, 0x626776eeu, 0x1250d175u, 0xd26b3450u, 0xbe887b6fu, 0x58627202u, 0x150d8979u, 0x1fb62484u,
        0xfc1f6613u, 0x848db456u, 0x09e15fbdu, 0xe27b1df8u, 0xb7d848f7u, 0xdf9c11eau, 0x86591841u, 0xecf814acu, 0x2210881bu, 0xd8239ebeu, 0xe80bb705u, 0x8f703ca0u, 0x28e9c77fu, 0xf131aed2u, 0x5a1e8009u, 0x77e009d4u,
        0x8c6deb23u, 0x201ed626u, 0x1108f74du, 0xd2f13048u, 0xc2f31707u, 0x3da2e8bau, 0x0098e0d1u, 0x222ea3fcu, 0x91bfaf2bu, 0x1e28fa8eu, 0x90364095u, 0x7b7898f0u, 0x7dee578fu, 0x25635fa2u, 0x11675a99u, 0x25b88324u,
    };
    uint32_t acc = 0xc9164e24u ^ (uint32_t)x;
    uint32_t buf[96];
    int i, r, k;

    for (i = 0; i < 96; i++) {
        acc = heavy_mix(acc, local[i * 2 & 255]);
        acc = heavy_mix(acc, heavy_table[(acc >> 11) & 255]);
        HEAVY_EXPAND64(acc, local[(i + 96) & 255]);
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
    case 0: acc = heavy_round(acc, 0xc266306bu); break;
    case 1: acc = heavy_round(acc, 0x8d5d0aceu); break;
    case 2: acc = heavy_round(acc, 0x8a9493d5u); break;
    case 3: acc = heavy_round(acc, 0xe8ae5330u); break;
    case 4: acc = heavy_round(acc, 0xa21e4ccfu); break;
    case 5: acc = heavy_round(acc, 0x0aca53e2u); break;
    case 6: acc = heavy_round(acc, 0x973341d9u); break;
    case 7: acc = heavy_round(acc, 0xc476c164u); break;
    case 8: acc = heavy_round(acc, 0x6a489d73u); break;
    case 9: acc = heavy_round(acc, 0xf115c436u); break;
    case 10: acc = heavy_round(acc, 0x4ffd6e1du); break;
    case 11: acc = heavy_round(acc, 0x070218d8u); break;
    case 12: acc = heavy_round(acc, 0xda884657u); break;
    case 13: acc = heavy_round(acc, 0x7fe02fcau); break;
    case 14: acc = heavy_round(acc, 0xb895dca1u); break;
    case 15: acc = heavy_round(acc, 0xddac4d8cu); break;
    case 16: acc = heavy_round(acc, 0xb7c0ab7bu); break;
    case 17: acc = heavy_round(acc, 0x148daa9eu); break;
    case 18: acc = heavy_round(acc, 0x63099165u); break;
    case 19: acc = heavy_round(acc, 0x46b69380u); break;
    case 20: acc = heavy_round(acc, 0xf9f970dfu); break;
    case 21: acc = heavy_round(acc, 0x56d988b2u); break;
    case 22: acc = heavy_round(acc, 0xab53d069u); break;
    case 23: acc = heavy_round(acc, 0xaefb5eb4u); break;
    case 24: acc = heavy_round(acc, 0x86827a83u); break;
    case 25: acc = heavy_round(acc, 0x04aa5e06u); break;
    case 26: acc = heavy_round(acc, 0x89221dadu); break;
    case 27: acc = heavy_round(acc, 0xb0e26328u); break;
    case 28: acc = heavy_round(acc, 0x1a57ec67u); break;
    case 29: acc = heavy_round(acc, 0xb125fe9au); break;
    case 30: acc = heavy_round(acc, 0x3bd83d31u); break;
    case 31: acc = heavy_round(acc, 0x689494dcu); break;
    case 32: acc = heavy_round(acc, 0x48c62a8bu); break;
    case 33: acc = heavy_round(acc, 0x0b057e6eu); break;
    case 34: acc = heavy_round(acc, 0x54d432f5u); break;
    case 35: acc = heavy_round(acc, 0x117027d0u); break;
    case 36: acc = heavy_round(acc, 0xb24dd8efu); break;
    case 37: acc = heavy_round(acc, 0x7e293182u); break;
    case 38: acc = heavy_round(acc, 0xe3f242f9u); break;
    case 39: acc = heavy_round(acc, 0xe0bc9004u); break;
    case 40: acc = heavy_round(acc, 0xd7c7db93u); break;
    case 41: acc = heavy_round(acc, 0x446cabd6u); break;
    case 42: acc = heavy_round(acc, 0xca50f13du); break;
    case 43: acc = heavy_round(acc, 0x519e8178u); break;
    case 44: acc = heavy_round(acc, 0x2dc95677u); break;
    case 45: acc = heavy_round(acc, 0x39bac16au); break;
    case 46: acc = heavy_round(acc, 0x775501c1u); break;
    case 47: acc = heavy_round(acc, 0x564bf02cu); break;
    case 48: acc = heavy_round(acc, 0x5447ad9bu); break;
    case 49: acc = heavy_round(acc, 0x0761863eu); break;
    case 50: acc = heavy_round(acc, 0x93ed7885u); break;
    case 51: acc = heavy_round(acc, 0x22801020u); break;
    case 52: acc = heavy_round(acc, 0x967c84ffu); break;
    case 53: acc = heavy_round(acc, 0x7aa64e52u); break;
    case 54: acc = heavy_round(acc, 0x60179989u); break;
    case 55: acc = heavy_round(acc, 0x832f5554u); break;
    case 56: acc = heavy_round(acc, 0x1709c0a3u); break;
    case 57: acc = heavy_round(acc, 0x1a99ada6u); break;
    case 58: acc = heavy_round(acc, 0xc6a2e8cdu); break;
    case 59: acc = heavy_round(acc, 0xf77b73c8u); break;
    case 60: acc = heavy_round(acc, 0x4c5d8487u); break;
    case 61: acc = heavy_round(acc, 0x512b783au); break;
    case 62: acc = heavy_round(acc, 0x6b352a51u); break;
    case 63: acc = heavy_round(acc, 0xfee75f7cu); break;
    default: acc = heavy_mix(acc, 0xA5A5A5A5u); break;
    }

    for (i = 0; i < 96; i++)
        acc ^= buf[i] + local[(acc + (uint32_t)i) & 255];

    return (int)(acc ^ (acc >> 16));
}

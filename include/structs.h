#ifndef STRUCTS_H
#define STRUCTS_H

#include "global.h"

enum ItemType {
    Weapon,
    BodyArmor,
    Headgear,
    Armgear,
    Food,
    StatusHeal,
    Damage,
    SpecialEff,
    Key,
    UnusedKey,
};

enum EquipFlags {
    _1,
    Flint,
    Lucas,
    Duster,
    Kumatora,
    Boney,
    Salsa,
    _80,
};

struct ItemData {
    u32 id;
    ItemType type;
    u16 key_item_flags;
    u16 sell_price;
    EquipFlags equip_flags;
    s32 hp_increase;
    s32 pp_increase;
    s8 off_increase;
    s8 def_increase;
    s8 iq_increase;
    s8 spd_increase;
    s8 knd_increase;
    u8 status_protect[22];
    u8 elem_protect[5];
    u8 attack_type[5];
    u8 gen_info[40];
    u32 battle_info;
};

struct Sprite {
    u8 filler[0x34];
    u32 speed;
    u8 _38[0x4d];
    u8 character;
    u8 _86[0x44];
    u8 _ca;
};

struct CharData {
    u8 charNo;
    u8 spriteNo;
    u8 name[16];
    u8 level;
    u32 xp;
    u32 curHP;
    s16 curPP;
    u32 maxHP;
    s16 maxPP;
    u8 offense;
    u8 defense;
    u8 iq;
    u8 speed;
    u32 _2c;
    u8 ailments;
    u8 weapon;
    u8 body;
    u8 head;
    u8 other[4];
    u32 inventory_lyt;
    u8 inventory[16];
    u16 item_timers[16];
};

struct struct_02016028 {
    u8 filler[0x2ca2];
    u16 _2ca2;
    u8 _2ca3[0x4ad0 - 0x2ca4];
    u32 _4ad0[0xd];
    u16 _4b04;
    u16 _4b06;
    u16 _4b08;
    u16 _4b0a;
    u16 _4b0c;
    u16 _4b0e;
    u16 _4b10;
    u16 _4b12;
    u16 _4b14;
    u16 _4b16;
    u8 _4b18;
    u8 _4b19 : 2;
    u8 _4b1a[0x5778 - 0x4b1a];
    u8 _5778[0x121bb - 0x5778];
    u8 _121bb_1 : 3;
    u8 _121bb_8 : 1;
    u8 _121bb_10 : 1;
    u8 _121bc[0x121C8 - 0x121BC];
    union {
        u64 _121c8;
        struct {
            u8 b0;
            u8 b1;
            u8 b2;
            u8 b3;
            u8 b4;
            u8 b5;
            u8 b6;
            u8 b7;
        } _121c8_b;
    };
};
extern struct_02016028 gUnknown_02016028;

struct struct_02004860 {
    u8 _0[0x8];
    u32 dp_pocket;
    u32 dp_bank;
    u8 _10[0x210];
    u16 _220;
    u8 _222[0x480 - 0x222];
    u8 _480;
    u8 _481[0x6f8 - 0x481];
    u16 _6f8;
    u16 _6fa;
    u16 _6fc;
    u16 _6fe;
    u16 _700;
    u16 _702;
    u16 _704;
    u16 _706;
    u16 _708;
    u8 _70c[0x3a];
    u32 _744;
    u8 _748[0x78a - 0x748];
    u8 _78a;
    u8 _78b;
    u8 _78c;
    u8 _78d;
    u8 _78e[0x80];
    u8 _80e[0x10];
    u8 _81e;
};
extern struct_02004860 gSave;

#endif  // STRUCTS_H

#define NUM_TAPS 61
#define SAMPLE_SIZE 1000

short one_k_sample[SAMPLE_SIZE] = {0x0,0xE74,0x1CAD,0x2A73,0x378C,0x43C5,0x4EEC,0x58D4,0x6154,0x684B,0x6D9B,0x7130,0x72FC,0x72F6,0x711F,0x6D7F,0x6823,0x6122,0x5899,0x4EA9,0x437A,0x373B,0x2A1D,0x1C54,0xE18,0xFFA3,0xF130,0xE2F9,0xD537,0xC822,0xBBF0,0xB0D0,0xA6F1,0x9E7A,0x978E,0x9248,0x8EBE,0x8CFF,0x8D10,0x8EF3,0x929E,0x9805,0x9F10,0xA7A3,0xB19B,0xBCD1,0xC916,0xD63A,0xE406,0xF244,0xB9,0xF2C,0x1D61,0x2B1F,0x382F,0x445B,0x4F73,0x5949,0x61B7,0x6899,0x6DD4,0x7152,0x7307,0x72E9,0x70FB,0x6D44,0x67D3,0x60BE,0x5822,0x4E21,0x42E4,0x3698,0x2970,0x1BA0,0xD60,0xFEEA,0xF079,0xE246,0xD48B,0xC781,0xBB5B,0xB04A,0xA67C,0x9E18,0x9741,0x9210,0x8E9D,0x8CF5,0x8D1D,0x8F17,0x92D9,0x9855,0x9F74,0xA81A,0xB223,0xBD68,0xC9B9,0xD6E7,0xE4BA,0xF2FC,0x173,0xFE3,0x1E14,0x2BCA,0x38D0,0x44F0,0x4FF9,0x59BE,0x6218,0x68E6,0x6E0B,0x7173,0x7310,0x72DC,0x70D7,0x6D09,0x6783,0x6059,0x57AA,0x4D98,0x424D,0x35F5,0x28C3,0x1AEC,0xCA8,0xFE31,0xEFC1,0xE193,0xD3E0,0xC6DF,0xBAC6,0xAFC5,0xA608,0x9DB7,0x96F4,0x91DA,0x8E7D,0x8CEB,0x8D2C,0x8F3C,0x9315,0x98A6,0x9FDA,0xA892,0xB2AC,0xBDFF,0xCA5D,0xD794,0xE56E,0xF3B4,0x22C,0x109B,0x1EC6,0x2C76,0x3971,0x4584,0x507E,0x5A32,0x6279,0x6932,0x6E41,0x7193,0x7319,0x72CD,0x70B1,0x6CCD,0x6731,0x5FF3,0x5731,0x4D0F,0x41B5,0x3551,0x2815,0x1A37,0xBF0,0xFD78,0xEF0A,0xE0E0,0xD335,0xC63F,0xBA32,0xAF40,0xA595,0x9D57,0x96A8,0x91A4,0x8E5E,0x8CE4,0x8D3B,0x8F63,0x9352,0x98F9,0xA040,0xA90B,0xB336,0xBE97,0xCB01,0xD842,0xE623,0xF46D,0x2E5,0x1152,0x1F79,0x2D20,0x3A11,0x4617,0x5102,0x5AA5,0x62D9,0x697D,0x6E76,0x71B1,0x7320,0x72BD,0x708A,0x6C8F,0x66DE,0x5F8C,0x56B8,0x4C85,0x411C,0x34AC,0x2767,0x1983,0xB37,0xFCBE,0xEE52,0xE02E,0xD28B,0xC59F,0xB99F,0xAEBC,0xA522,0x9CF8,0x965E,0x916F,0x8E40,0x8CDD,0x8D4C,0x8F8A,0x9390,0x994C,0xA0A8,0xA985,0xB3C0,0xBF30,0xCBA6,0xD8F0,0xE6D7,0xF525,0x39E,0x1209,0x202B,0x2DCB,0x3AB1,0x46AA,0x5185,0x5B17,0x6337,0x69C7,0x6EAB,0x71CE,0x7326,0x72AC,0x7062,0x6C51,0x668A,0x5F24,0x563E,0x4BFA,0x4083,0x3407,0x26B9,0x18CE,0xA7F,0xFC05,0xED9B,0xDF7C,0xD1E0,0xC4FF,0xB90D,0xAE39,0xA4B1,0x9C9A,0x9615,0x913C,0x8E23,0x8CD7,0x8D5D,0x8FB3,0x93CF,0x99A0,0xA110,0xAA00,0xB44C,0xBFCA,0xCC4B,0xD99E,0xE78C,0xF5DD,0x458,0x12C0,0x20DD,0x2E74,0x3B50,0x473C,0x5208,0x5B87,0x6395,0x6A10,0x6EDD,0x71EB,0x732B,0x7299,0x7038,0x6C11,0x6635,0x5EBB,0x55C2,0x4B6E,0x3FE9,0x3362,0x260A,0x1819,0x9C6,0xFB4C,0xECE5,0xDECB,0xD137,0xC461,0xB87B,0xADB7,0xA440,0x9C3C,0x95CC,0x910A,0x8E08,0x8CD3,0x8D70,0x8FDD,0x940F,0x99F6,0xA17A,0xAA7C,0xB4D8,0xC064,0xCCF1,0xDA4D,0xE842,0xF696,0x511,0x1377,0x218E,0x2F1E,0x3BEF,0x47CD,0x5289,0x5BF8,0x63F2,0x6A58,0x6F0F,0x7206,0x732F,0x7286,0x700E,0x6BD0,0x65DF,0x5E51,0x5546,0x4AE2,0x3F4F,0x32BC,0x255B,0x1764,0x90E,0xFA93,0xEC2E,0xDE19,0xD08E,0xC3C2,0xB7EA,0xAD36,0xA3D1,0x9BE0,0x9585,0x90D8,0x8DED,0x8CD0,0x8D84,0x9008,0x9450,0x9A4C,0xA1E4,0xAAF8,0xB565,0xC0FF,0xCD98,0xDAFC,0xE8F7,0xF74F,0x5CA,0x142D,0x223F,0x2FC7,0x3C8D,0x485E,0x530A,0x5C67,0x644D,0x6A9E,0x6F40,0x721F,0x7331,0x7271,0x6FE2,0x6B8F,0x6588,0x5DE6,0x54C9,0x4A55,0x3EB4,0x3215,0x24AC,0x16AE,0x855,0xF9DA,0xEB78,0xDD68,0xCFE5,0xC325,0xB75A,0xACB6,0xA362,0x9B85,0x953F,0x90A8,0x8DD4,0x8CCE,0x8D99,0x9034,0x9493,0x9AA4,0xA24F,0xAB76,0xB5F2,0xC19A,0xCE3E,0xDBAC,0xE9AD,0xF808,0x683,0x14E4,0x22F0,0x306F,0x3D2A,0x48EE,0x538A,0x5CD5,0x64A8,0x6AE4,0x6F6F,0x7238,0x7333,0x725C,0x6FB6,0x6B4C,0x6530,0x5D7B,0x544B,0x49C7,0x3E18,0x316E,0x23FC,0x15F8,0x79C,0xF921,0xEAC1,0xDCB8,0xCF3D,0xC288,0xB6CB,0xAC36,0xA2F4,0x9B2B,0x94FA,0x9079,0x8DBC,0x8CCD,0x8DB0,0x9061,0x94D6,0x9AFD,0xA2BC,0xABF4,0xB680,0xC236,0xCEE6,0xDC5C,0xEA63,0xF8C1,0x73C,0x159A,0x23A0,0x3117,0x3DC7,0x497D,0x5409,0x5D42,0x6502,0x6B28,0x6F9E,0x7250,0x7333,0x7245,0x6F88,0x6B08,0x64D7,0x5D0E,0x53CC,0x4938,0x3D7C,0x30C6,0x234C,0x1542,0x6E3,0xF868,0xEA0B,0xDC08,0xCE95,0xC1EB,0xB63C,0xABB7,0xA288,0x9AD2,0x94B6,0x904B,0x8DA5,0x8CCD,0x8DC7,0x9090,0x951B,0x9B56,0xA329,0xAC73,0xB710,0xC2D3,0xCF8E,0xDD0D,0xEB19,0xF97A,0x7F5,0x1650,0x2450,0x31BE,0x3E63,0x4A0B,0x5488,0x5DAE,0x655A,0x6B6C,0x6FCB,0x7266,0x7332,0x722C,0x6F59,0x6AC3,0x647D,0x5CA0,0x534D,0x48A9,0x3CDF,0x301E,0x229B,0x148C,0x62A,0xF7AF,0xE955,0xDB58,0xCDEE,0xC14F,0xB5AE,0xAB39,0xA21C,0x9A7A,0x9473,0x901F,0x8D8F,0x8CCF,0x8DE0,0x90BF,0x9560,0x9BB1,0xA397,0xACF3,0xB79F,0xC370,0xD036,0xDDBD,0xEBCF,0xFA33,0x8AD,0x1705,0x2500,0x3265,0x3EFE,0x4A99,0x5505,0x5E1A,0x65B2,0x6BAE,0x6FF7,0x727B,0x7330,0x7213,0x6F29,0x6A7C,0x6421,0x5C31,0x52CC,0x4819,0x3C41,0x2F76,0x21EA,0x13D6,0x571,0xF6F6,0xE8A0,0xDAA8,0xCD48,0xC0B4,0xB521,0xAABC,0xA1B1,0x9A23,0x9431,0x8FF3,0x8D7A,0x8CD1,0x8DFA,0x90F0,0x95A7,0x9C0C,0xA406,0xAD74,0xB830,0xC40E,0xD0DF,0xDE6E,0xEC86,0xFAEC,0x966,0x17BB,0x25AF,0x330B,0x3F99,0x4B25,0x5582,0x5E84,0x6608,0x6BF0,0x7022,0x728F,0x732D,0x71F9,0x6EF7,0x6A35,0x63C5,0x5BC2,0x524B,0x4788,0x3BA3,0x2ECC,0x2139,0x131F,0x4B8,0xF63D,0xE7EB,0xD9F9,0xCCA2,0xC01A,0xB494,0xAA40,0xA147,0x99CD,0x93F0,0x8FC9,0x8D67,0x8CD5,0x8E15,0x9122,0x95EF,0x9C69,0xA476,0xADF6,0xB8C1,0xC4AD,0xD188,0xDF20,0xED3C,0xFBA5,0xA1F,0x1870,0x265E,0x33B1,0x4033,0x4BB1,0x55FE,0x5EEE,0x665E,0x6C30,0x704C,0x72A2,0x7329,0x71DD,0x6EC5,0x69ED,0x6368,0x5B51,0x51C9,0x46F6,0x3B04,0x2E23,0x2087,0x1268,0x3FF,0xF585,0xE736,0xD94A,0xCBFC,0xBF80,0xB409,0xA9C5,0xA0DE,0x9978,0x93B0,0x8F9F,0x8D55,0x8CDA,0x8E31,0x9154,0x9638,0x9CC7,0xA4E7,0xAE78,0xB953,0xC54C,0xD232,0xDFD2,0xEDF3,0xFC5E,0xAD7,0x1925,0x270D,0x3457,0x40CD,0x4C3D,0x5678,0x5F56,0x66B2,0x6C6F,0x7075,0x72B4,0x7323,0x71C1,0x6E92,0x69A4,0x630A,0x5AE0,0x5146,0x4664,0x3A64,0x2D79,0x1FD5,0x11B1,0x345,0xF4CC,0xE681,0xD89C,0xCB57,0xBEE7,0xB37E,0xA94B,0xA076,0x9924,0x9372,0x8F77,0x8D43,0x8CE0,0x8E4E,0x9188,0x9682,0x9D25,0xA559,0xAEFC,0xB9E6,0xC5EC,0xD2DC,0xE084,0xEEAA,0xFD17,0xB90,0x19DA,0x27BB,0x34FB,0x4166,0x4CC7,0x56F2,0x5FBE,0x6706,0x6CAD,0x709D,0x72C5,0x731D,0x71A3,0x6E5D,0x6959,0x62AB,0x5A6E,0x50C2,0x45D1,0x39C4,0x2CCE,0x1F23,0x10FA,0x28C,0xF414,0xE5CC,0xD7EE,0xCAB2,0xBE4E,0xB2F4,0xA8D1,0xA00F,0x98D1,0x9334,0x8F50,0x8D33,0x8CE7,0x8E6D,0x91BE,0x96CD,0x9D85,0xA5CC,0xAF80,0xBA79,0xC68C,0xD387,0xE136,0xEF62,0xFDD0,0xC48,0x1A8E,0x2869,0x35A0,0x41FE,0x4D51,0x576B,0x6024,0x6758,0x6CEA,0x70C3,0x72D4,0x7315,0x7184,0x6E27,0x690E,0x624B,0x59FA,0x503E,0x453D,0x3924,0x2C23,0x1E71,0x1043,0x1D3,0xF35C,0xE518,0xD741,0xCA0E,0xBDB6,0xB26A,0xA858,0x9FA9,0x987F,0x92F8,0x8F2A,0x8D25,0x8CF0,0x8E8C,0x91F4,0x9719,0x9DE6,0xA640,0xB005,0xBB0D,0xC72D,0xD432,0xE1E9,0xF019,0xFE8A,0xD00,0x1B42,0x2916,0x3643,0x4295,0x4DDA,0x57E4,0x608A,0x67A9,0x6D26,0x70E8,0x72E2,0x730C,0x7164,0x6DF1,0x68C1,0x61EA,0x5986,0x4FB9,0x44A8,0x3883,0x2B78,0x1DBE,0xF8B,0x11A,0xF2A4,0xE464,0xD694,0xC96B,0xBD1F,0xB1E2,0xA7E0,0x9F44,0x982E,0x92BD,0x8F05,0x8D17,0x8CF9,0x8EAD,0x922B,0x9766,0x9E47,0xA6B4,0xB08A,0xBBA2,0xC7CE,0xD4DE,0xE29C,0xF0D1,0xFF43,0xDB8,0x1BF6,0x29C3,0x36E7,0x432C,0x4E62,0x585B,0x60EE,0x67FA,0x6D60,0x710D,0x72F0,0x7302,0x7142,0x6DB9,0x6873,0x6188,0x5911,0x4F32,0x4413,0x37E1,0x2ACC,0x1D0B,0xED3,0x60,0xF1EC,0xE3B0,0xD5E7,0xC8C8,0xBC89,0xB15A,0xA76A,0x9EE0,0x97DE,0x9283,0x8EE2,0x8D0A,0x8D04,0x8ECF,0x9264,0x97B4,0x9EAA,0xA72A,0xB111,0xBC38,0xC870,0xD58A,0xE34F,0xF188,0xFFFC,0xE70};

short nine_k_sample[SAMPLE_SIZE] = {0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0,0x683C,0x58C3,0xE35A,0x8ED7,0xBC4A,0x377F,0x72F9,0x2A68,0xB124,0x9270,0xF190,0x6144,0x6144,0xF190,0x9270,0xB124,0x2A68,0x72F9,0x377F,0xBC4A,0x8ED7,0xE35A,0x58C3,0x683C,0x0,0x97C4,0xA73D,0x1CA6,0x7129,0x43B6,0xC881,0x8D07,0xD598,0x4EDC,0x6D90,0xE70,0x9EBC,0x9EBC,0xE70,0x6D90,0x4EDC,0xD598,0x8D07,0xC881,0x43B6,0x7129,0x1CA6,0xA73D,0x97C4,0x0};

short filter_coeff[NUM_TAPS] = {0xFFE3,0xFFE6,0xFFEA,0xFFFD,0x1F,0x45,0x5E,0x58,0x29,0xFFD4,0xFF70,0xFF25,0xFF1A,0xFF6D,0x19,0xF6,0x1B8,0x207,0x19D,0x6A,0xFEA4,0xFCCF,0xFB9F,0xFBC7,0xFDC4,0x1AB,0x710,0xD15,0x1295,0x1670,0x17D2,0x1670,0x1295,0xD15,0x710,0x1AB,0xFDC4,0xFBC7,0xFB9F,0xFCCF,0xFEA4,0x6A,0x19D,0x207,0x1B8,0xF6,0x19,0xFF6D,0xFF1A,0xFF25,0xFF70,0xFFD4,0x29,0x58,0x5E,0x45,0x1F,0xFFFD,0xFFEA,0xFFE6,0xFFE3};
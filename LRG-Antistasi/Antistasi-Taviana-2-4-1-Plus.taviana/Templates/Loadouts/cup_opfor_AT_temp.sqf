[//Loadout
	[//Primary Weapon
		"CUP_arifle_AK105",								//Weapon
		"",													//Muzzle
		"CUP_acc_ANPEQ_15_Black",									//Rail
		"CUP_optic_ekp_8_02",						    			//Sight
		["CUP_30Rnd_545x39_AK74M_M",30],						//Primary Magazine
		[],													//Secondary Magazine
		""													//Bipod
	],

	[//Launcher
		"CUP_launch_RPG7V",													//Weapon
		"",													//Muzzle
		"",													//Rail
		"",													//Sight
		["CUP_PG7V_M",1],													//Primary Magazine
		[],													//Secondary Magazine
		""													//Bipod
	],

	[//Secondary Weapon
		"CUP_hgun_PB6P9",									//Weapon
		"CUP_muzzle_PB6P9",									//Muzzle
		"",													//Rail
		"",													//Sight
		["CUP_8Rnd_9x18_Makarov_M", 8],								//Primary Magazine
		[],													//Secondary Magazine
		""													//Bipod
	],

	[//Uniform

		"CUP_U_O_RUS_Summer_VDV",
		[] + _basicMedicalSupplies + _basicMiscItems
	],

	[//Vest
		"CUP_Vest_RUS_6B45_Sh117_Summer",										//Vest
		[//Inventory
			["NVGoggles",1],
			["SmokeShell",2,1],
			["CUP_HandGrenade_RGD5",1,1],
			["CUP_8Rnd_9x18_Makarov_M",2,8],
			["CUP_30Rnd_545x39_AK74M_M",4,30]
		]
		+ _aceFlashlight
		+ _aceM84
	],

    [//Backpack
		"CUP_O_RUS_Patrol_bag_Summer_Shovel",								//Backpack
		[//Inventory
			["CUP_PG7V_M",2,1]
		]
	],

		selectRandom										//Headgear
		["CUP_H_RUS_6B27_cover_Summer", "CUP_H_RUS_6B27_cover_Summer_goggles", "CUP_H_RUS_6B27_cover_Summer_headset_goggles", "CUP_H_RUS_6B27_cover_Summer_headset"],
		"",													//Facewear

	[//Binocular
		"Binocular",										//Binocular
		"",
		"",
		"",
		[],
		[],
		""
	],

	[//Item
        "ItemMap",											//Map
        "ItemGPS",											//Terminal
		["tf_fadak"] call _fnc_tfarRadio,				//Radio
        "ItemCompass",										//Compass
        "ItemWatch",										//Watch
        ""													//Goggles
	]
];

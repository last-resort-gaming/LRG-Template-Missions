playMusic "MainTheme_F_Tank";

sleep 30;

[parseText "<t font='PuristaBold' size='2'>Aphaeresis I: Genesis</t><br />by Mokka", true, nil, 10, 1, 0] spawn BIS_fnc_textTiles;

sleep 15;

["Beketov District", ""] call LR_Aph_fnc_sitrep;
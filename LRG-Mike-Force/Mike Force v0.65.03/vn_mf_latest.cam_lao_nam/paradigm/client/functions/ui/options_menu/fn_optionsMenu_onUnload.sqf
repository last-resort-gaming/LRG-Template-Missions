/*
	File: fn_optionsMenu_onUnload.sqf
	Author: Heyoxe
	Date: 2020-12-05
	Last Update: 2020-12-05
	Public: No
	
	Description:
		Handles the display unload.
	
	Parameter(s):
		_display - Display [DISPLAY]
		_exitCode - Display's exit code. 1 => OK, 2 => Cancel, 3 => Reset All [NUMBER]
	
	Returns: nothing
	
	Example(s): none
*/

params ["_display", "_exitCode"];

private _changes = _display getVariable ["#changes", []];

switch (_exitCode) do {
	case 1: {
		{
			_x params ["_varname", "_newValue"];
			profileNamespace setVariable [_varname, _newValue];
		} forEach _changes;
	};
	case 3: {
		private _config = missionConfigFile >> "para_CfgOptions";
		private _configs = "true" configClasses _config;
		{
			private _varname = getText (_x >> "variable");
			private _default = getNumber (_x >> "default");
			profileNamespace setVariable [_varname, _default];
		} forEach _configs;
	};
	default {};
};

saveProfileNamespace;

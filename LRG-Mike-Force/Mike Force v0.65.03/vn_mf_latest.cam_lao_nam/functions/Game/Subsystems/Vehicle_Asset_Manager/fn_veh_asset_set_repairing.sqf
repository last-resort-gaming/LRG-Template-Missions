/*
	File: fn_veh_asset_set_repairing.sqf
	Author: Spoffy
	Date: 2020-05-23
	Last Update: 2020-07-03
	Public: No

	Description:
		Marks a vehicle as being repaired.

	Parameter(s):
		_id - Id of vehicle asset [Number]
		_repairTime - Time to repair the vehicle [Number, defaults to 0]

	Returns: nothing

	Example(s): none
*/

params ["_id", "_repairTime"];

private _vehicleInfo = [_id] call vn_mf_fnc_veh_asset_get_by_id;

if (isNil "_repairTime") then {
	_repairTime = _vehicleInfo select struct_veh_asset_info_m_respawn_type select 1;
};

_vehicleInfo set [struct_veh_asset_info_m_state_data, ["REPAIRING", serverTime + _repairTime]];

[_id] call vn_mf_fnc_veh_asset_marker_delete;

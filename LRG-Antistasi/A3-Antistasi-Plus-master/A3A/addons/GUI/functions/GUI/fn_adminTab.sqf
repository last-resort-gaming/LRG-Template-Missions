/*
Maintainer: DoomMetal
    Handles updating and controls on the Admin tab of the Main dialog.

Arguments:
    <STRING> Mode
    <ARRAY<ANY>> Array of params for the mode when applicable. Params for specific modes are documented in the modes.

Return Value:
    Nothing

Scope: Clients, Local Arguments, Local Effect
Environment: Scheduled for control changes / Unscheduled for update
Public: No
Dependencies:
    None

Example:
    ["update"] call A3A_fnc_adminTab;
*/

#include "..\..\dialogues\ids.inc"
#include "..\..\dialogues\defines.hpp"
#include "..\..\dialogues\textures.inc"
#include "..\..\script_component.hpp"
FIX_LINE_NUMBERS()

params[["_mode","onLoad"], ["_params",[]]];

// TODO UI-update: move these to some more sensible place:
private _civLimitMin = 0;
private _civLimitMax = 150;
private _spawnDistanceMin = 600;
private _spawnDistanceMax = 2000;

switch (_mode) do
{
    case ("update"):
    {
        Trace("Updating admin tab");
        private _display = findDisplay A3A_IDD_MAINDIALOG;

        _spawnDistanceSlider = _display displayCtrl A3A_IDC_SPAWNDISTANCESLIDER;
        _spawnDistanceSlider sliderSetRange [_spawnDistanceMin, _spawnDistanceMax];
        _spawnDistanceSlider sliderSetSpeed [100, 100];
        _spawnDistance = missionNamespace getVariable ["distanceSPWN",0];
        _spawnDistanceSlider sliderSetPosition _spawnDistance;
        ctrlSetText [A3A_IDC_SPAWNDISTANCEEDITBOX, str _spawnDistance];

        // Get Debug info
        // TODO UI-update: change this to get server values instead when merging
        private _debugText = _display displayCtrl A3A_IDC_DEBUGINFO;
        private _missionTime = [time] call A3A_fnc_formatTime;
        private _serverFps = (round (diag_fps * 10)) / 10; // TODO UI-update: Get actual server FPS, not just client
        private _connectedHCs = 0; // TODO UI-update: get actual number of connected headless clients
        private _players = 0; // TODO UI-update: get actual number of players connected

        // TODO UI-update: get actual unit counts
        private _allUnits = count allUnits;
        private _deadUnits = 1349;
        private _countGroups = count allGroups;
        private _countRebels = 16;
        private _countInvaders = 5;
        private _countOccupants = 37;
        private _countCiv = 4096;
        private _destroyedVehicles = 2;

        // TODO UI-update: localize later, not final yet
        private _formattedString = format [
        "<t font='EtelkaMonospacePro' size='0.8'>
        <t>Mission time:</t><t align='right'>%1</t><br />
        <t>Server FPS:</t><t align='right'>%2</t><br />
        <t>Connected HCs:</t><t align='right'>%3</t><br />
        <t>Players:</t><t align='right'>%4</t><br />
        <t>Groups</t><t align='right'>%5</t><br />
        <t>Units:</t><t align='right'>%6</t><br />
        <t>Dead units:</t><t align='right'>%7</t><br />
        <t>Rebels:</t><t align='right'>%8</t><br />
        <t>Invaders:</t><t align='right'>%9</t><br />
        <t>Occupants:</t><t align='right'>%10</t><br />
        <t>Civs:</t><t align='right'>%11</t><br />
        <t>Wrecks:</t><t align='right'>%12</t>
        </t>",
        _missionTime,
        _serverFps,
        _connectedHCs,
        _players,
        _countGroups,
        _allUnits,
        _deadUnits,
        _countRebels,
        _countInvaders,
        _countOccupants,
        _countCiv,
        _destroyedVehicles
        ];

        _debugText ctrlSetStructuredText parseText _formattedString;

    };

    case ("spawnDistanceSliderChanged"):
    {
        private _display = findDisplay A3A_IDD_MAINDIALOG;
        private _spawnDistanceSlider = _display displayCtrl A3A_IDC_SPAWNDISTANCESLIDER;
        private _spawnDistanceEditBox = _display displayCtrl A3A_IDC_SPAWNDISTANCEEDITBOX;
        private _sliderValue = sliderPosition _spawnDistanceSlider;
        _spawnDistanceEditBox ctrlSetText str floor _sliderValue;
    };

    case ("spawnDistanceEditBoxChanged"):
    {
        private _display = findDisplay A3A_IDD_MAINDIALOG;
        private _spawnDistanceEditBox = _display displayCtrl A3A_IDC_SPAWNDISTANCEEDITBOX;
        private _spawnDistanceSlider = _display displayCtrl A3A_IDC_SPAWNDISTANCESLIDER;
        private _spawnDistanceEditBoxValue = floor parseNumber ctrlText _spawnDistanceEditBox;
        _spawnDistanceEditBox ctrlSetText str _spawnDistanceEditBoxValue; // Strips non-numeric characters
        _spawnDistanceSlider sliderSetPosition _spawnDistanceEditBoxValue;
        if (_spawnDistanceEditBoxValue < _spawnDistanceMin) then {_spawnDistanceEditBox ctrlSetText str _spawnDistanceMin};
        if (_spawnDistanceEditBoxValue > _spawnDistanceMax) then {_spawnDistanceEditBox ctrlSetText str _spawnDistanceMax};
    };

    case ("confirmAILimit"):
    {
        Trace("Showing AI Settings confirm button");
        private _display = findDisplay A3A_IDD_MAINDIALOG;
        private _commitAiButton = _display displayCtrl A3A_IDC_COMMITAIBUTTON;
        _commitAiButton ctrlRemoveAllEventHandlers "ButtonClick";
        _commitAiButton ctrlSetText localize "STR_antistasi_dialogs_main_admin_ai_confirm_button";
        _commitAiButton ctrlAddEventHandler ["ButtonClick", {
            Trace("Confirmed AI Settings");
            hint "Oh no you broke the server :(";

            private _display = findDisplay A3A_IDD_MAINDIALOG;
            private _spawnDistanceEditBox = _display displayCtrl A3A_IDC_SPAWNDISTANCEEDITBOX;
            private _distanceSPWN = floor parseNumber ctrlText _spawnDistanceEditBox;
            // TODO UI-update: Placeholder routine, don't merge! Has no security checks whatsoever
            // missionNamespace setVariable ["distanceSPWN", _distanceSPWN];


            closeDialog 2;
        }];
    };

    default
    {
        // Log error if attempting to call a mode that doesn't exist
        Error_1("Admin tab mode does not exist: %1", _mode);
    };
};

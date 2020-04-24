#Get params from Mission Params and Master Info
param ($steamcmd_username, $steamcmd_Password, $Arma3_AdminPass, $Arma3_CommandPass, $Server, $Clear_Logs, $verifySignatures, $EnableVON, $EnableBattleye, $Headless_Clients, $Enable3rdPerson, $Password, $MissionFolder, $ClientMods, $ServerMods)

#Variables
$steamcmd_Dir = 'C:\steamcmd'
$Repo_Dir = 'C:\LRG-Mission-Files'
$Mod_Dir = 'C:\Mods'

#Master files used to create Server files
$Master_Server_Config = 'C:\LRG-Mission-Files\Server_Files\MASTER SERVER CONFIG.cfg'
$Master_Server_Network = 'C:\LRG-Mission-Files\Server_Files\Arma3.cfg'
$Master_Server_Key='C:\Program Files (x86)\Steam\steamapps\common\Arma 3\Keys\a3.bikey'

$Master_BEServer_x64 = 'C:\LRG-Mission-Files\Server_Files\Master BEServer_x64.cfg'
$Master_Battleye_Config = 'C:\LRG-Mission-Files\Server_Files\Master Battleye Config.cfg'
$Master_Server_Profile= 'C:\LRG-Mission-Files\Server_Files\LRGServer.Arma3Profile'

#Set Server Specific Locations
If ($Server -eq 1) {
    $Server_Dir='C:\Servers\Arma 3\EU1'
	$Server_port='2302'
	$Server_Hostname='[LRG] Last Resort Gaming || EU 1 || Public Server'
	$RCON_Port = 2307
}
If ($Server -eq 2) {
	$Server_Dir='C:\Servers\Arma 3\EU2'
	$Server_port='2402'
	$Server_Hostname='[LRG] Last Resort Gaming || EU 2 || Public Server'
	$RCON_Port = 2407
}
If ($Server -eq 3) {
	$Server_Dir='C:\Servers\Arma 3\EU3'
	$Server_port='2502'
	$Server_Hostname='[LRG] Last Resort Gaming || EU 3 || Operations Server'
	$RCON_Port = 2507
}
If ($Server -eq 4) {
	$Server_Dir='C:\Servers\Arma 3\EU4'
	$Server_port='2602'
	$Server_Hostname='[LRG] Last Resort Gaming || EU 4 || Training Server'
	$RCON_Port = 2607
}
If ($Server -eq 5) {
	$Server_Dir='C:\Servers\Arma 3\EU5'
	$Server_port='2702'
	$Server_Hostname='[LRG] Last Resort Gaming || EU 5 || Public Event'
	$RCON_Port = 2707
}

$Server_mpmissions=Join-Path -Path $Server_Dir -ChildPath "\mpmissions"
$Server_Profiles=Join-Path -Path $Server_Dir -ChildPath "\Profiles"
$Server_Keys=Join-Path -Path $Server_Dir -ChildPath "\Keys"
$Server_Config=Join-Path -Path $Server_Dir -ChildPath '\Config.cfg'
$Server_Network_Config=Join-Path -Path $Server_Dir -ChildPath '\Profiles\Users\Administrator'

$Battleye_Profile_Path=Join-Path -Path $Server_Profiles -ChildPath "\Battleye"
$Battleye_BEServer_x64=Join-Path -Path $Battleye_Profile_Path -ChildPath "\BEServer_x64.cfg"
$Battleye_Config=Join-Path -Path $Battleye_Profile_Path -ChildPath "\Config\Config.cfg"

$Server_Profile=Join-Path -Path $Server_Profiles -ChildPath "\Users\LRGServer"


##########################################################################################################
########################################### Now the fun begins ###########################################
##########################################################################################################

# Check for Updates
Write-Host "Checking for A3 Update" -ForegroundColor red -BackgroundColor white
Start-Process -NoNewWindow -Wait -Filepath "$steamcmd_Dir\steamcmd.exe" -ArgumentList "+login `"$steamcmd_username`" `"$steamcmd_Password`" +force_install_dir `"$Server_Dir`" +app_update 233780 -beta +quit"

#Copy the Keys
Write-Host "Handling Keys" -ForegroundColor red -BackgroundColor white
Remove-Item $Server_Keys\*.bikey*
Copy-Item $Master_Server_Key $Server_Keys

if ($verifySignatures -eq 1){
    Get-ChildItem -path $Mod_Dir -Filter "*.bikey" -File -Recurse | Foreach {
         if ([System.IO.File]::Exists([System.IO.Path]::Combine($Server_Keys, $_.Name))) {
            $_.FullName + " already exists in destination folder." }
         else {
          Copy-Item $_.FullName $Server_Keys
         }
    }
	$verifySignatures = 2
	} else {
	$verifySignatures = 0
}

#Clear the Logs
Write-Host "Clearing Logs" -ForegroundColor red -BackgroundColor white
if ($Clear_Logs -eq 1) {
	Remove-Item $Server_Profiles\*.log*
	Remove-Item $Server_Profiles\*.mdmp*
	Remove-Item $Server_Profiles\*.bidmp*
	Remove-Item $Server_Profiles\*.RPT*
}

#Server Config Setup	
if ($EnableVON -eq 1) {
	$disableVON = 0
	} else {
	$disableVON = 1
}
Write-Host "Creating Config" -ForegroundColor red -BackgroundColor white
(get-content $Master_Server_Config).replace('PowershellPass', $Password) | Set-Content $Server_Config
(get-content $Server_Config).replace('PowershellMission', $MissionFolder) | Set-Content $Server_Config
(get-content $Server_Config).replace('PowershellHostname', $Server_Hostname) | Set-Content $Server_Config
(get-content $Server_Config).replace('PowershellAdmin', $Arma3_AdminPass) | Set-Content $Server_Config
(get-content $Server_Config).replace('PowershellCommand', $Arma3_CommandPass) | Set-Content $Server_Config
(get-content $Server_Config).replace('PSverifySignatures', $verifySignatures) | Set-Content $Server_Config
(get-content $Server_Config).replace('PSdisableVoN', $disableVON) | Set-Content $Server_Config
(get-content $Server_Config).replace('PSBattlEye', $EnableBattleye) | Set-Content $Server_Config


#Battleye Setup
Write-Host "Configuring Battleye" -ForegroundColor red -BackgroundColor white
(get-content $Master_BEServer_x64).replace('PSRCONPort', $RCON_Port) | Set-Content $Battleye_BEServer_x64
(get-content $Battleye_BEServer_x64).replace('PSCommandPass', $Arma3_CommandPass) | Set-Content $Battleye_BEServer_x64

(get-content $Master_Battleye_Config).replace('PSRCONPort', $RCON_Port) | Set-Content $Battleye_Config
(get-content $Battleye_Config).replace('PSBePath', $Battleye_Profile_Path) | Set-Content $Battleye_Config

#Server.Arma3Profile Setup
Write-Host "Configuring Server Profile" -ForegroundColor red -BackgroundColor white
Remove-Item $Server_Profile\*.Arma3Profile*
(get-content $Master_Server_Profile).replace('PSthirdPersonView', $Enable3rdPerson) | Set-Content $Server_Profile\LRGServer.Arma3Profile

#Move Network Config across, just in case removed during A3 Update
Write-Host "Copying Network Info" -ForegroundColor red -BackgroundColor white
Copy-Item $Master_Server_Network $Server_Network_Config

#Deal with clearing old mission, pack new, and move.
Write-Host "Packing Mission into Pbo and moving to selected server." -ForegroundColor red -BackgroundColor white
Remove-Item $Server_mpmissions\*.pbo*
$MissionDir=Get-ChildItem $Repo_Dir -attributes D -Recurse -include $MissionFolder
set-location "C:\Program Files (x86)\Mikero\DePboTools\bin" 
.\MakePbo.exe -P -X thumbs.db,*.cpp,*.bak,*.png,*.dep,*.log -B -G $MissionDir $Server_mpmissions

#Boot the Server
Write-Host "Booting the Server." -ForegroundColor red -BackgroundColor white
Start-Process -FilePath "$Server_Dir\arma3server_x64.exe" -ArgumentList "-profiles=`"$Server_Profiles`" -port=$Server_port -name=LRGServer `"-config=$Server_Config`" -autoinit `"-ServerMod=$ServerMods`" `"-Mod=$ClientMods`""

#Boot Headless Client/s
for ($i=1; $i -le $Headless_Clients; $i++)
{
	Write-Host "Booting HC in 30 seconds." -ForegroundColor red -BackgroundColor white
	sleep -seconds 30
    Start-Process -FilePath "$Server_Dir\arma3server_x64.exe" -ArgumentList "-profiles=`"$Server_Profiles`" -client -connect=127.0.0.1 -port=$Server_port -password=$Password `"-Mod=$ClientMods`""
}
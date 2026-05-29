# Three Goblin Wobblin' Archipelago
This mod integrates Three Goblin' Wobblin into the [Archipelago Multiworld Randomizer](https://archipelago.gg). It is currently
playable, but unstable with a few known crashes and issues. It uses the [latest experimental branch of RE-UE4SS Mod Loader](https://github.com/UE4SS-RE/RE-UE4SS/releases/tag/experimental-latest)
due to the game being made in Unreal Engine 5.3 and the latest full release having issues with loading blueprint mods
for this version. Also uses the [lua-apclientpp library](https://github.com/black-sliver/lua-apclientpp) to connect to Archipelago.

Please be sure to check [Known Issues](https://github.com/melenehh/Three-Goblin-Archipelago#Known-Issues) before playing and please report any bugs or feedback to the
[Discord thread](https://discord.com/channels/731205301247803413/1487653426128228362) and feel free to ping or DM me with issues (@meleneh) Please be ready to provide the [UE4SS Log](https://github.com/melenehh/Three-Goblin-Archipelago/blob/main/README.md#ue4ss-log)

## IMPORTANT NOTES
There is currently no visual feedback when you receive keys/hats aside from the feed. If you want to see what you have in game, you currently must pause to update the 
visual indicators from the vanilla game.

## Installation:
**THIS GAME EXPECTS YOU TO HAVE A SAVE FILE WITH ACCESS TO ALL LEVELS. TO DOWNLOAD AND INSTALL A FULL SAVE FILE, CONTINUE TO [Save File Install](https://github.com/melenehh/Three-Goblin-Archipelago/blob/main/README.md#save-file-install)**
1. In Steam, right click the game and choose Manage > Browse Local Files
2. Download WobblinGame.zip from [releases](https://github.com/melenehh/Three-Goblin-Archipelago/releases/latest)
3. Place Unzipped WobblinGame folder in same directory as existing WobblinGame folder (may not look like anything happens, but it places files where they need to go)
4. Wobble away

## Save File Install
1. Go to %appdata% in your File Explorer
2. Go back one folder to AppData then into AppData > Local > WobblinGame > Saved > SaveGames
3. If you would like to back up your existing save, rename ProgressionV1.sav 
4. Download the full save file pinned in the [discord thread](https://discord.com/channels/731205301247803413/1487653426128228362/1496219355720192150) and place it in the folder
5. Wobble away

## Port Change
If your port changes during a randomizer, this will effect the tracking of levels beaten as well as cleared checks. To fix this, follow the following instructions:
1. Go to %appdata% in your File Explorer
2. Go back one folder to AppData then into AppData > Local > WobblinGame > Saved > SaveGames
3. Locate the file named [OldPortNumber]_[SlotName]
4. Rename the file replacing the old port number with the new one
5. Wobble away

## UE4SS Log
If you encounter a bug or glitch, please provide the log file over Discord alongside your bug report. In order to find the log, follow the following instructions:
1. In Steam, right click the game and choose Manage > Browse Local Files
2. Go to the directory WobblinGame/Binaries/Win64/UE4SS and locate the UE4SS.log file
3. Wobble into Discord and upload the file

## What's Randomized?
### Locations:
- Keys
- Hats
- Pretzels
### Items:
- Keys
- Hats
- Pretzels (Currently Junk, may be used to unlock levels in the future)
### Options:
- Hard Mode: Make hats optional/required in logic
- Progressive Keys: Receive keys in vanilla or any order
### Goal:
- Beat all 6 levels

## Upcoming/Missing Features
- ~~Make connection panel update when connected~~
- ~~Prevent previously spawned locations from spawning~~
- Color coded feed messages
- Add custom shortcut teleporters to improve QoL
- Add options to choose which levels are included
- Add traps
- Add cosmetic options
- Make pretzels useful
- Add whimsy

# Known Issues
- Occasional crashes for unknown reasons
- Some longer load times
- Cannot handle port changes, see [Port Change Instructions](https://github.com/melenehh/Three-Goblin-Archipelago/blob/main/README.md#port-change)

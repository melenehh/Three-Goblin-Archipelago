# Three Goblin Wobblin' Archipelago
This mod integrates Three Goblin' Wobblin into the [Archipelago Multiworld Randomizer](archipelago.gg). It is currently
playable, but unstable with a few known crashes and issues. It uses the [latest experimental branch of RE-UE4SS Mod Loader](https://github.com/UE4SS-RE/RE-UE4SS/releases/tag/experimental-latest)
due to the game being made in Unreal Engine 5.3 and the latest full release having issues with loading blueprint mods
for this version. Also uses the [lua-apclientpp library](https://github.com/black-sliver/lua-apclientpp) to connect to Archipelago.

Please be sure to check [Known Issues](##Known-Issues) before playing and please report any bugs or feedback to the
[Discord thread](https://discord.com/channels/731205301247803413/1487653426128228362) and feel free to ping or DM me with issues (@meleneh)

## Installation:
1. In Steam, right click the game and choose Manage > Browse Local Files
2. Download WobblinGame.zip from [releases](https://github.com/melenehh/Three-Goblin-Archipelago/releases)
3. Place Unzipped WobblinGame folder in same directory as existing WobblinGame folder (may not look like anything happens, but it places files where they need to go)
4. Wobble away


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
- Make it so levers and doors don't reset when loading levels (currently there is a great chance to have to replay long sections)
- Make connection panel update when connected
- Prevent previously spawned locations from spawning
- Implement sprint key or extra teleporters to offer shortcuts after certain locations have been checked
- on screen feedback when receiving an item (currently can only tell by pausing to update the vanilla indicators)
- Add options to choose which levels are included
- Add traps
- Add cosmetic options
- Make pretzels useful
- Add whimsy

## Known Issues
- Crash caused by the client mod disconnecting during a level and then collecting an item, even if reconnecting
- Rare case of the level ending actor not spawning, making the game not clear even once all levels have been beaten

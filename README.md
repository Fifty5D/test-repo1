# Disable Stamina Mod

This Arma Reforger mod disables stamina for all players by turning off the stamina component whenever a player spawns.

## Project structure
- `DisableStamina.gproj` is the Workbench project file for the addon.
- `Scripts/Game/GameMode/Modded/SCR_BaseGameMode.c` applies the stamina change on player spawn.

## Usage
- Open the project in Arma Reforger Workbench and build the addon.
- Load the mod in your scenario or server mod list.
- Stamina will be disabled automatically on player spawn.

## Workshop media
This repository intentionally avoids binary assets. Add your own `previewImage.jpg` and `thumbnail.png` in the project root before uploading to the Workshop.

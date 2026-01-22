# Disable Stamina Mod

This Arma Reforger mod disables stamina for all players by turning off the stamina component whenever it initializes.

## Project structure
- `DisableStamina.gproj` is the Workbench project file for the addon.
- `Scripts/Game/Character/Components/Modded/SCR_CharacterStaminaComponent.c` disables stamina in the base stamina component.

## Step-by-step (explain it like you are 5)
1. Open **Arma Reforger Tools (Workbench)**.
2. Click **Project** → **Open...**.
3. Find this folder on your computer and open **`DisableStamina.gproj`**.
4. Wait for the project to finish loading.
5. Click **Project** → **Build Addon** (this makes the mod).
6. When the build is done, click **Project** → **Open in Game**.
7. The game will start. Go to **Workshop** and make sure the mod is enabled.
8. Start any scenario. Run around and sprint. You should never get tired (stamina stays off).

## Workshop media
This repository intentionally avoids binary assets. Add your own `previewImage.jpg` and `thumbnail.png` in the project root before uploading to the Workshop.

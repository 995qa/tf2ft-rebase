# Team Fortress 2: Field Tested
This mod uses BF2's codebase, which adds many new features to TF2.

> [!WARNING]
> - This mod uses BF2's codebase, which adds many new features to TF2.
> - Check out their [discord]()
> - Features some community fixes which i DO NOT CLAIM as mine, but credited.
> - Feel free to use my code for your own mods! i just wanted to improve TF2 a little, and add custom stuff.
> - More coders may be needed (i am not a full expert coder, but i try my best).

# FEATURES:
- External scenes loader  (Mapbase | .VCD, Faceposer stuff)
- Pyrovision Support keyvalue/netprop for tf_gamerules 
- ```nav_generate``` now reloads navigation instead of the map 
- ```sv_infinite_ammo```
## Player
- GiveItem (I/O and Command)
- Penetration kill sound toggle cvar | ```tf_snd_penetrationkill```
- Voice spam and delay restore | ```tf_voicespam | (1 normal, 2 no text)``` ```tf_max_voice_speak_delay 1.5```
- Custom Responses | Sniper!
## NPC's
### Horseless Headless Horsemann
- Now features an hammer keyvalue (from halloween 2014) | ```mallet```
## Items
- "Addon" items_game loader (BetaM)
- Reserve Shooter 🔧 | Engineer and Heavy can use it
- The Winger, Prettyboy Pocket Pistol | Engineer can use it
### Attributes | 🔧 Edited original one
- [330]🔧| Added Robot Footsteps | 10
- [4000] | override voice sound set | 0 off, 1 robot, 2 giant robot
- [4001] | sniperrifle has laser pointer | MVM bot lasers as an attribute
- [4002] | drops reviver machine | Player drops the reviver from MVM
- [4003] | medigun heals buildings | Restored leaked MVM attribute
### Custom Items - W weapon , C cosmetic
- [W] 32000 The Holy Marlin (Altranade)
- [W] 32001 The Underpressurer
- [W] 31999 Super Maul (TEST ITEM)
# Gamemode Changes/Improvements
- Flags can now have custom Pickup,Defend,Captured Text in the killfeed | ```text_captured, text_pickup, text_defend```
## Robot Destruction
- Edit Blu/Red score via Input
- Removed the 0 cap limit on flags to allow scoring negative points
- Implemented **RUDE** Cvar to silence the robots from the Leak
### The Robots
- Customizable sounds (Death,Hurt,Collide,Idle)
- Spawn with Dispenser Y/N
- OnPanicStart, OnPanicEnd Outputs
# TF2FT Weapons
- Added The Crowbar
- Added The Kalashnikov

# Credits

I'm not an animator or modeler, so I have used the following mod's assets for this:

[TF2 All-Class Crowbar (SFM Beta version)](https://gamebanana.com/mods/198771)

SilentFox3 did texture/model edits to the crowbar found in the SFM Beta leak and also re-rigged it.

[AK47](https://gamebanana.com/mods/197796)

I used the model and textures to make the AK.

## Other credits are in-game, which ill add soon.

## License
The SDK is licensed to users on a non-commercial basis under the [SOURCE 1 SDK LICENSE](LICENSE), which is contained in the [LICENSE](LICENSE) file in the root of the repository.
For more information, see [Distributing your Mod](#markdown-header-distributing-your-mod).

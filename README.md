------------------------------------------------------------------------------------
**PLANNED**

v0.1.8.9--Mar24 Changelog: "NPCS

------------------------------------------------------------------------------------

v0.1.8.8--Mar24 Changelog: "HOTKEYS & ITEMS"

------------------------------------------------------------------------------------
**CURRENT**

v0.1.8.7--Feb24 Changelog: "ENEMIES & DOORS"
* SORTED - #138 Idle & Walk Reload Pistol animations needed reconnecting in the ABP
* SORTED - #140 Finish Door Transition v1 process
* SORTED - #141 Rework doors to use Name/String instead of World Variable (Unreal Bug)
* SORTED - #166 Create Door Transition v2 (Feed Door Sprite in as dynamic door variable)
* SORTED - #186 Code OOP Heal system for Health, Stamina, Stress, & Infection
* SORTED - #179 Tweaking Infection Kit sprites
* SORTED - #180 Created Medkit (Small) item
* SORTED - #181 Created Medkit (Medium) item
* SORTED - #182 Created Medkit (Large) item
* SORTED - #183 Created Infection (Small) item
* SORTED - #184 Created Infection (Medium) item
* SORTED - #185 Created Infection (Large) item
* SORTED - #187 Create thumbnails & item in-game sprites for Medkit variants
* SORTED - #189 Create thumbnails & item in-game sprites for Infkit variants
* SORTED - #192 Create thumbnails & item in-game sprites for Wire
* SORTED - #193 Create thumbnails & item in-game sprites for Metal Sheet
* SORTED - #194 Create thumbnails & item in-game sprites for Frag Grenade
* SORTED - #195 Create thumbnails & item in-game sprites for Gunpowder
* SORTED - #196 Create thumbnails & item in-game sprites for Tape
* SORTED - #197 v2 to v3 PDW visuals
* SORTED - #198 v2 to v3 Service Pistol visuals
* SORTED - #130 Create Idle Sprites for all Enemies (v3 quality / 140x140 pixels)
* SORTED - #165 Idle animation for Zombie Split Head
* SORTED - #171 Idle animation for Zombie Scientific
* SORTED - #202 Fixed NPC speed going rogue
* SORTED - #201 Upgrade flipbooks to v3 for Zombie Medical
* SORTED - #203 Upgrade flipbooks to v3 for Zombie Split Head
* SORTED - #206 Better OOP for variable inheritance between Master_Enemy_BP & Children
* SORTED - #164 Idle animation for Zombie Skull Face
* SORTED - #209 Reworked entire thumbnail process from Set Brush from Texture > Atlas Interface
* SORTED - #210 Firemode isn't passed-through on level movement
* SORTED - #211 Add-in Right-Click aim functionality
------------------------------------------------------------------------------------
v0.1.8.6--Feb24 Changelog: "SELL & TRADE"
* SORTED - #109 PDW holster walking not v3
* SORTED - #110 Issue with not being able to click on the Throw & Sell Widgets
* SORTED - #128 Bug with not being able to pull information for Offered Items Widget
* SORTED - #111 Issue with the Sell Widget not working right with the Trade Widget
* SORTED - #136 Issue with not showing sell value on creation of sell widget
------------------------------------------------------------------------------------
v0.1.8.5--Jan24 Changelog: "STORAGE & ART"
* SORTED - #82 Fix Stamina Item usage bug
* SORTED - #83 Fix Storage item movement bug
* SORTED - #89 Added Mouse Sway / Shake on shooting
* SORTED - #90 Added Aiming Crosshair Cursor
* SORTED - #73 Persist Ammo Widget between levels
* <strike> SORTED - #96 Create 'Resume' open on Main Menu for Autosave save slot*** </strike>
* SORTED - #97 Clicking Main Menu in Save Slot does not trigger Main Menu
* SORTED - #100 Migrate Widgets to single location
* SORTED - #101 Migrate Blueprints to single location
* SORTED - #102 Migrate Assets to single location
* SORTED - #87 Belt lowers on PDW aiming (makes torso too long)
* SORTED - #108 Holster while aiming bug
* SORTED - #109 Stuck on shooting animation if moving instantly afterwards
* SORTED - #104 Pressing Play needs restart blank-slate
* SORTED - #113 Tidied up Redirectors, Remade some assets, changed some asset locations
* SORTED - #115 Turned the Protagonist Container into a Parent, and created a child
* SORTED - #118 Create Level Log system (Track Level & Frequency of entering)
* SORTED - #116 Need to persist Auto-Generated Storage items (Do Once & Remember)
* SORTED - #119 Right-Click (Storage > Inventory) doesn't use correctly indexed item
* SORTED - #98 Need to persist manually added Storage items
* SORTED - #106 Create Walk + Holster animations (Sprites, Flipbooks, ABPs)
* SORTED - #124 Jump Holstered - Pistol variants do not go up & down with movement
* SORTED - #126 Jump holstered PDW jumps with the PDW in his hands
* SORTED - #127 Jump with pistol out jumps with no weapon
* SORTED - #93 Still issue with pdw barrel changes sprite-wise
* SORTED - #94 Update v2 > v3 run & other current Protagonist animations
------------------------------------------------------------------------------------
v0.1.8.4--Jan24 Changelog: "SIMPLIFY"
* SORTED - #80 Updated the Save & Autosave Location logic (no need for manual input on Door BP)
* SORTED - #79 Items Equipped & collected in game are persistent wrongly after death
* SORTED - #76 Items now match the load / save slot as expected
* SORTED - #78 Crafting Menu lacking recipes fixed
* SORTED - #67 Make equipped weapon & ammo persist between levels
* SORTED - #72 Make sure Equipment Widget is persistent between Save/Load
* SORTED - #84 Projectiles need to follow the line trace again
* SORTED - #61 Fix bug with Line Trace post new branch iteration
------------------------------------------------------------------------------------
v0.1.8.3--Jan24 Changelog: "WEAPONS & AMMO"
* SORTED - #10 Upgrade Weapon & Ammo system to v2 (Weapon, Ammo, Firemode, Change Ammo, Reload)
* SORTED - #60 Between Weapon + Ammo Swaps, ammo can occasionally pour into wrong pool
* SORTED - #63 Ammo going into the wrong Ammo Pool occasionally
* SORTED - #56 Upgrade reload & shooting animations from v2 > v3
* TEMP WORKAROUND - #61 Fix bug with Line Trace post new branch iteration
* SORTED - #67 Make weapon & ammo persist between levels
* SORTED - #71 - Save & Load Inventory
* SORTED - #69 - Holster v3
* SORTED - #68 - Inventory between levels persistent
* SORTED - #47 - Migrate to current Save & Autosave to include Inventory Data
* SORTED - #59 - Unequip weapon needs to reset Holster Event to initial state
------------------------------------------------------------------------------------
v0.1.8.2--Jan24 Changelog: "AIM & SAVE"
* SORTED - #40 Work on Service Pistol Just Holstered & Just Unholstered transition animations
* SORTED - #11 Get Line Trace working
* SORTED - #46 Credits persistent
* SORTED - #45 Auto Save Ability
* SORTED - #44 Upgrade Death Logic
* SORTED - #43 Fixed In-Game "Open level via door" persistence not matching Save/Load slot persistence
------------------------------------------------------------------------------------
v0.1.8.1--Jan24 Changelog: "QUESTS"
* SORTED - #41 Need quests to populate on save/load
* SORTED - #5 Need to make the slide-out behaviour appropriate
* SORTED - #37 Need to hide Save button on start (it's disabled & grayed-out in the end)
* SORTED - #39 Need to stop duplicate Main Menu widget on Load > Main
------------------------------------------------------------------------------------

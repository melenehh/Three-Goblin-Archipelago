-- local locationList = {}

-- RegisterHook("/Game/Mods/RandomizerMod/ModActor.ModActor_C:RemoveChecked", function(Context, CheckedLocationID)
--         local currentLocation = -1
--         print("Items received:")
--         for location in ipairs(ap.locations) do

--         end
-- end)



-- RegisterHook("/Script/WobblinGame.LD49GameModeBase:OnManualReset", function(Context)
--     local gm = Context:get()
--     local rules = gm.ManualResetRules

--     -- Modify the struct fields directly
--     rules.ResetMechanisms = false
--     rules.RelockDoors = false
--     rules.CloseDoors = false
--     rules.ResetKeyPickups = false
--     rules.ResetPretzelPickups = false
--     rules.ResetHatPickups = false

--     -- Write the struct back into the UObject
--     gm:Set("ManualResetRules", rules)

--     print("Manual reset rules overridden!")
-- end)



-- RegisterHook("/Game/Blueprints/Mechanisms/BP_DoorA.BP_DoorA_C:ResetLock", function()
--     print("attempting reset")
--     while true == true do
--         break
--     end
-- end)

-- RegisterHook("/Game/Blueprints/Mechanisms/BP_DoorB.BP_DoorB_C:ResetLock", function()
--     print("attempting reset")
--     while true == true do
--         break
--     end
-- end)

-- RegisterHook("/Script/WobblinGame.LD49GameModeBase:OnLevelStart", function(Context)
--     local gm = Context:Get()
--     local rules = gm.ManualResetRules

--     rules.ResetMechanisms:Set(false)
--     rules.RelockDoors:Set(false)
--     rules.CloseDoors:Set(false) 

--     print("Level start rules overridden")
-- end)

-- RegisterHook("/Game/Blueprints/Mechanisms/BP_DoorA.BP_DoorA_C:ResetLock", function()
--     print("attempting reset")
--     while true == true do
--         break
--     end
-- end)

-- enum class ELockType {
--     NONE = 0,
--     BRONZE = 1,
--     SILVER = 2,
--     GOLD = 3,
--     MAGIC = 4,
--     ELockType_MAX = 5,
-- };

-- enum class EProfessionType {
--     None = 0,
--     Peasant = 1,
--     Mage = 2,
--     Barbarian = 3,
--     Guard = 4,
--     Monarch = 5,
--     Count = 6,
--     EProfessionType_MAX = 7,
-- };

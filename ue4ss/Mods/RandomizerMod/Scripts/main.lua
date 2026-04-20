local AP = require "lua-apclientpp"

-- global to this mod
local game_name = "Three Goblin Wobblin"
local items_handling = 7  -- full remote
local client_version = {0, 5, 1}  -- optional, defaults to lib version
local message_format = AP.RenderFormat.TEXT
---@type APClient
local ap = nil

-- TODO: user input
local host = "localhost"
local slot = "Player1"
local password = ""

local baseID = 715212914

local itemsList = {}
local locationList = {}

local isConnected = false

function connect(server, slot, password)
    function on_socket_connected()
        print("Socket connected")
    end

    function on_socket_error(msg)
        print("Socket error: " .. msg)
    end

    function on_socket_disconnected()
        print("Socket disconnected")
    end

    function on_room_info()
        print("Room info")
        ap:ConnectSlot(slot, password, items_handling, {"Lua-APClientPP"}, client_version)
    end

    function on_slot_connected(slot_data)
        print(ap:get_game())
        assert(not pcall(function() ap:get_item_name((baseID + 1)) end)) -- not valid anymore, need 2nd arg
        assert(ap:get_item_name((baseID + 1), nil) == ap:get_item_name((baseID + 1), ap:get_game()))
        assert(not pcall(function() ap:get_location_name((baseID + 1)) end)) -- not valid anymore, need 2nd arg
        assert(ap:get_location_name((baseID + 1), nil) == ap:get_location_name((baseID + 1), ap:get_game()))

        if ap:get_game() == "Three Goblin Wobblin" then
            assert(ap:get_item_name((baseID + 1), nil) == "Pretzel")
            assert(ap:get_item_name((baseID + 1), "Timespinner") ~= "Pretzel")
            assert(ap:get_location_name((baseID + 1), "Three Goblin Wobblin") == "Forest Village: Mystical Munch")
            assert(ap:get_location_name((baseID + 1), "Timespinner") ~= "Forest Village: Mystical Munch")
        end

        print("Slot connected")
        isConnected = true
        print(slot_data)
        print(ap.checked_locations)
        ap:Bounce({name="test"}, {game_name})
        local extra = {nonce = 123}  -- optional extra data will be in the server reply
        ap:Get({"counter"}, extra)
        ap:Set("counter", 0, true, {{"add", 1}}, extra)
        ap:Set("empty_array", nil, true, {{"replace", AP.EMPTY_ARRAY}})
        print("Players:")
        local players = ap:get_players()
        for _, player in ipairs(players) do
            print("  " .. tostring(player.slot) .. ": " .. player.name ..
                  " playing " .. ap:get_player_game(player.slot))
        end

        local currentLocation = -1
        print("Items received:")
        if ap.locations == nil then do
        end
        else do
            for _, location in ipairs(ap.locations) do
                print(tonumber(location.locations))
                print("Base ID:")
                print(tonumber(baseID))
                currentLocation = tonumber(location.locations) - tonumber(baseID)
                print("Current Location ID:")
                print(currentLocation)
                table.insert(locationList, currentLocation)
            end
        end
        end
    end


    function on_slot_refused(reasons)
        print("Slot refused: " .. table.concat(reasons, ", "))
    end

    function on_items_received(items)
        local currentItem = -1
        local modActor = FindFirstOf("ModActor_C")
        print("Items received:")
        for _, item in ipairs(items) do
            print(tonumber(item.item))
            print("Base ID:")
            print(tonumber(baseID))
            currentItem = tonumber(item.item) - tonumber(baseID)
            print("Current Item ID:")
            print(currentItem)
            modActor:GiveItems(tonumber(currentItem))
            table.insert(itemsList, currentItem)
        end
    end

    function on_location_info(items)
        print("Locations scouted:")
        for _, item in ipairs(items) do
            print(item.item)
        end
    end

    function on_location_checked(locations)
        print("Locations checked:" .. table.concat(locations, ", "))
        print("Checked locations: " .. table.concat(ap.checked_locations, ", "))
    end

    function on_data_package_changed(data_package)
        print("Data package changed:")
        print(data_package)
    end

    function on_print(msg)
        print(msg)
    end

    function on_print_json(msg, extra)
        print(ap:render_json(msg, message_format))
        for key, value in pairs(extra) do
            -- print("  " .. key .. ": " .. tostring(value))
        end
    end

    function on_bounced(bounce)
        print("Bounced:")
        print(bounce)
    end

    function on_retrieved(map, keys, extra)
        print("Retrieved:")
        -- since lua tables won't contain nil values, we can use keys array
        for _, key in ipairs(keys) do
            print("  " .. key .. ": " .. tostring(map[key]))
        end
        -- extra will include extra fields from Get
        print("Extra:")
        for key, value in pairs(extra) do
            print("  " .. key .. ": " .. tostring(value))
        end
        -- both keys and extra are optional
    end

    function on_set_reply(message)
        print("Set Reply:")
        for key, value in pairs(message) do
            print("  " .. key .. ": " .. tostring(value))
            if key == "value" and type(value) == "table" then
                for subkey, subvalue in pairs(value) do
                    print("    " .. subkey .. ": " .. tostring(subvalue))
                end
            end
        end
    end


    local uuid = ""
    ap = AP(uuid, game_name, server);

    ap:set_socket_connected_handler(on_socket_connected)
    ap:set_socket_error_handler(on_socket_error)
    ap:set_socket_disconnected_handler(on_socket_disconnected)
    ap:set_room_info_handler(on_room_info)
    ap:set_slot_connected_handler(on_slot_connected)
    ap:set_slot_refused_handler(on_slot_refused)
    ap:set_items_received_handler(on_items_received)
    ap:set_location_info_handler(on_location_info)
    ap:set_location_checked_handler(on_location_checked)
    ap:set_data_package_changed_handler(on_data_package_changed)
    ap:set_print_handler(on_print)
    ap:set_print_json_handler(on_print_json)
    ap:set_bounced_handler(on_bounced)
    ap:set_retrieved_handler(on_retrieved)
    ap:set_set_reply_handler(on_set_reply)
end

local t0 = os.clock()
while os.clock() - t0 < 1 do
end

function connectToAp(host, slot, password)
    ExecuteAsync(function ()
    connect(host, slot, "")
    -- local modActor = FindFirstOf("ModActor_C") | Attempt to prevent levers from resetting
    -- print(modActor)
    -- modActor:DontReset()
    while ap do
        ap:poll()
    end
    end)
end

RegisterHook ("/Game/Mods/RandomizerMod/ModActor.ModActor_C:SetModActor", function()
        print("running this")
        if isConnected == true then
            local modActor = FindFirstOf("ModActor_C")
            print("giving items")
            for key, item in ipairs(itemsList) do
                print(item)
                print(modActor)
                modActor:GiveItems(item)
            end
        end
end)

RegisterHook("/Game/Mods/RandomizerMod/ModActor.ModActor_C:CallRemoveFunction", function()
        print("running this")
        local modActor = FindFirstOf("ModActor_C")
        if isConnected == true then
            print("removing locations")
            for key, location in ipairs(locationList) do
                print(location)
                modActor:DeleteLocation(location)
            end
        end
    end)

RegisterHook ("/Game/Mods/RandomizerMod/AP_Input.AP_Input_C:RetrieveConnectionData", function(Context, Address, SlotName, Password)
    
    host = Address:Get():ToString()

    slot = SlotName:Get():ToString()

    password = Password:Get():ToString()
    -- connect(host, slot, password)
    print(host)
    print(slot)
    print(password)
    print(host, ", ", slot, ", ", password)
    connectToAp(host, slot, password)
end)

RegisterHook ("/Game/Mods/RandomizerMod/ModActor.ModActor_C:SendVictory", function()
    ap:StatusUpdate(30)
end)

ExecuteAsync(function()
    RegisterHook ("/Game/Mods/RandomizerMod/AP_Input.AP_Input_C:DisconnectAP", function(self)
        print("shutting down...")
        ap = nil
        collectgarbage("collect")
    end)
end)

RegisterHook ("/Game/Mods/RandomizerMod/ModActor.ModActor_C:SendItem", function(Context, LocationID, LocationOutput)
    if ap == nil then
        print("AP client not connected, cannot send location")
        return
    end

    print(tonumber(LocationOutput:Get()))
    print(tonumber(LocationOutput:Get()))
    ap:LocationChecks({tonumber(LocationOutput:Get())})
end)

RegisterHook ("/Game/Mods/RandomizerMod/ModActor.ModActor_C:GetSlotInfo", function(Context, Port, SlotName, PortOutput, SlotOutput)
    port = string.sub(host, -5)
    print(port)
    print(slot)
    PortOutput:Set(port)
    SlotOutput:Set(slot)
end)
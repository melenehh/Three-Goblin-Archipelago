from __future__ import annotations

from typing import TYPE_CHECKING

from BaseClasses import ItemClassification, Location

from . import items

from .BaseID import goblin_base_id

if TYPE_CHECKING:
    from .world import ThreeGoblinWorld

LOCATION_NAME_TO_ID = {
# Pretzel Locations:
    # Forest Pretzels
    "Forest Village: Mystical Munch": goblin_base_id + 1,
    "Forest Village: Lookout's Lunch": goblin_base_id + 2,
    "Forest Village: Terrace Treat": goblin_base_id + 3,
    # Market Pretzels
    "Market Town: Trap Teaser": goblin_base_id + 4,
    "Market Town: Sentry Snack": goblin_base_id + 5,
    "Market Town: Table Treat": goblin_base_id + 6,
    "Market Town: Doorstep Delight": goblin_base_id + 7,
    "Market Town: Bedside Bounty": goblin_base_id + 8,
    # Downtown Pretzels
    "Downtown: Panoramic Pastry": goblin_base_id + 9,
    "Downtown: Pretzel Pilferer": goblin_base_id + 10,
    "Downtown: Alleyway Appetizer": goblin_base_id + 11,
    "Downtown: Armory Appetite": goblin_base_id + 12,
    "Downtown: Gutter Gourmet": goblin_base_id + 13,
    "Downtown: Rampart Ration": goblin_base_id + 14,
    # Castle Pretzels
    "Royal Castle: Rogue's Reward": goblin_base_id + 15,
    "Royal Castle: Barracks Buffet": goblin_base_id + 16,
    "Royal Castle: Portcullis Picnic": goblin_base_id + 17,
    "Royal Castle: Tower Tidbit": goblin_base_id + 18,
    "Royal Castle: Balcony Bites": goblin_base_id + 19,
    "Royal Castle: Courtyard Crunch": goblin_base_id + 20,
    "Royal Castle: Wishing Well Wonder": goblin_base_id + 21,
    "Royal Castle: Roasted Relic": goblin_base_id + 22,
    "Royal Castle: Castle Crumbs": goblin_base_id + 23,
    "Royal Castle: Bastion Banquet": goblin_base_id + 24,
    # Tower Pretzels
    "Clamber Tower: Tower Picnic": goblin_base_id + 25,
    "Clamber Tower: Elevator Entree": goblin_base_id + 26,
    "Clamber Tower: Cellar Cravings": goblin_base_id + 27,
    "Clamber Tower: Perched Pretzel": goblin_base_id + 28,
    "Clamber Tower: Backroom Bite": goblin_base_id + 29,
    "Clamber Tower: Turret Hideaway": goblin_base_id + 30,
    "Clamber Tower: Middle Morsel": goblin_base_id + 31,
    "Clamber Tower: Banner Brunch": goblin_base_id + 32,
    "Clamber Tower: Skyward Snack": goblin_base_id + 33,
    "Clamber Tower: Teetering Treat": goblin_base_id + 34,
    
#Keys, Hats, and Level Clears:

    "Tutorial: Key": goblin_base_id + 35,
    "Tutorial: Hat": goblin_base_id + 36,

    "Forest Village: Bronze Key": goblin_base_id + 37,
    "Forest Village: Silver Key": goblin_base_id + 38,
    "Forest Village: Gold Key": goblin_base_id + 39,
    "Forest Village: Purple Key": goblin_base_id + 40,
    "Forest Village: Wizard Hat 1": goblin_base_id + 41,
    "Forest Village: Wizard Hat 2": goblin_base_id + 42,
    "Forest Village: Viking Hat 1": goblin_base_id + 43,
    "Forest Village: Viking Hat 2": goblin_base_id + 44,

    "Market Town: Bronze Key": goblin_base_id + 45,
    "Market Town: Silver Key": goblin_base_id + 46,
    "Market Town: Gold Key": goblin_base_id + 47,
    "Market Town: Purple Key": goblin_base_id + 48,
    "Market Town: Wizard Hat 1": goblin_base_id + 49,
    "Market Town: Wizard Hat 2": goblin_base_id + 50,
    "Market Town: Viking Hat 1": goblin_base_id + 51,
    "Market Town: Viking Hat 2": goblin_base_id + 52,

    "Downtown: Bronze Key": goblin_base_id + 53,
    "Downtown: Silver Key": goblin_base_id + 54,
    "Downtown: Gold Key": goblin_base_id + 55,
    "Downtown: Purple Key": goblin_base_id + 56,
    "Downtown: Wizard Hat 1": goblin_base_id + 57,
    "Downtown: Wizard Hat 2": goblin_base_id + 58,
    "Downtown: Viking Hat 1": goblin_base_id + 59,
    "Downtown: Viking Hat 2": goblin_base_id + 60,

    "Royal Castle: Bronze Key": goblin_base_id + 61,
    "Royal Castle: Silver Key": goblin_base_id + 62,
    "Royal Castle: Gold Key": goblin_base_id + 63,
    "Royal Castle: Purple Key": goblin_base_id + 64,
    "Royal Castle: Wizard Hat 1": goblin_base_id + 65,
    "Royal Castle: Wizard Hat 2": goblin_base_id + 66,
    "Royal Castle: Viking Hat 1": goblin_base_id + 67,
    "Royal Castle: Viking Hat 2": goblin_base_id + 68,
    "Royal Castle: Crown": goblin_base_id + 69,

    "Clamber Tower: Bronze Key": goblin_base_id +70,
    "Clamber Tower: Silver Key": goblin_base_id +71,
    "Clamber Tower: Gold Key": goblin_base_id + 72,
    "Clamber Tower: Purple Key": goblin_base_id + 73,
    "Clamber Tower: Wizard Hat": goblin_base_id + 74,
    "Clamber Tower: Viking Hat": goblin_base_id + 75,
}



class ThreeGoblinLocation(Location):
    game = "Three Goblin Wobblin"

def get_location_names_with_ids(location_names: list[str]) -> dict[str, int | None]:
    return {location_name: LOCATION_NAME_TO_ID[location_name] for location_name in location_names}

def create_all_locations(world: ThreeGoblinWorld) -> None:
    create_regular_locations(world)
    create_events(world)

def create_regular_locations(world: ThreeGoblinWorld) -> None:

    # menu = world.get_region("Menu")

    tutorial_start = world.get_region("Tutorial Start")
    tutorial_key = world.get_region("Tutorial Key")

    forest_start = world.get_region("Forest Village Start")
    forest_bronze = world.get_region("Forest Village Bronze")
    forest_silver = world.get_region("Forest Village Silver")
    forest_gold = world.get_region("Forest Village Gold")

    market_start = world.get_region("Market Town Start")
    market_hat = world.get_region("Market Town Hat")
    market_bronze = world.get_region("Market Town Bronze")
    market_silver = world.get_region("Market Town Silver")
    market_gold = world.get_region("Market Town Gold")
    # market_purple = world.get_region("Market Town Purple")
    # market_purple_silver = world.get_region("Market Town Purple & Silver")
    # market_purple_silver_gold = world.get_region("Market Town Purple, Silver, & Gold")

    downtown_start = world.get_region("Downtown Start")
    downtown_bronze = world.get_region("Downtown Bronze")
    downtown_silver = world.get_region("Downtown Silver")
    downtown_gold = world.get_region("Downtown Gold")
    # downtown_purple = world.get_region("Downtown Purple")
    # downtown_purple_gold = world.get_region("Downtown Purple & Gold")

    castle_start = world.get_region("Royal Castle Start")
    castle_bronze_only = Region("Royal Castle Bronze Only", world.player, world.multiworld)
    castle_bronze = world.get_region("Royal Castle Bronze")
    castle_silver = world.get_region("Royal Castle Silver")
    castle_gold = world.get_region("Royal Castle Gold")
    # castle_purple = world.get_region("Royal Castle Purple")
    # castle_purple_gold = world.get_region("Royal Castle Purple & Gold")

    tower_start = world.get_region("Clamber Tower Start")
    tower_bronze = world.get_region("Clamber Tower Bronze")
    tower_silver = world.get_region("Clamber Tower Silver")
    tower_gold = world.get_region("Clamber Tower Gold")
    tower_purple = world.get_region("Clamber Tower Purple")


#Tutorial:
    tutorial_start_locations = get_location_names_with_ids(
        ["Tutorial: Key"]
    )
    tutorial_start.add_locations(tutorial_start_locations, ThreeGoblinLocation)

    tutorial_key_locations = get_location_names_with_ids(
        ["Tutorial: Hat", "Tutorial: Level Clear"]
    )
    tutorial_key.add_locations(tutorial_key_locations, ThreeGoblinLocation)

# Forest Village:
    forest_start_locations = get_location_names_with_ids(
        ["Forest Village: Bronze Key", "Forest Village: Wizard Hat 1", "Forest Village: Viking Hat 1"]
    )
    forest_start.add_locations(forest_start_locations, ThreeGoblinLocation)

    forest_bronze_locations = get_location_names_with_ids(
        ["Forest Village: Purple Key", "Forest Village: Silver Key",
         "Forest Village: Wizard Hat 2", "Forest Village: Viking Hat 2",
         "Forest Village: Mystical Munch", "Forest Village: Lookout's Lunch"]
    )
    forest_bronze.add_locations(forest_bronze_locations, ThreeGoblinLocation)

    forest_silver_locations = get_location_names_with_ids(
        ["Forest Village: Gold Key"]
    )
    forest_silver.add_locations(forest_silver_locations, ThreeGoblinLocation)

    forest_gold_locations = get_location_names_with_ids(
        ["Forest Village: Level Clear", "Forest Village: Terrace Treat"]
    )
    forest_gold.add_locations(forest_gold_locations, ThreeGoblinLocation)

# Market Town:
    market_start_locations = get_location_names_with_ids(
        ["Market Town: Trap Teaser", "Market Town: Wizard Hat 1", "Market Town: Bronze Key"]
    )
    market_start.add_locations(market_start_locations, ThreeGoblinLocation)

    market_hat_locations = get_location_names_with_ids(
        ["Market Town: Viking Hat 1"]
    )
    market_hat.add_locations(market_hat_locations, ThreeGoblinLocation)

    market_bronze_locations = get_location_names_with_ids(
        ["Market Town: Purple Key", "Market Town: Silver Key",
         "Market Town: Wizard Hat 2", "Market Town: Viking Hat 2",
         "Market Town: Sentry Snack", "Market Town: Table Treat", "Market Town: Doorstep Delight"]
    )
    market_bronze.add_locations(market_bronze_locations, ThreeGoblinLocation)

    market_silver_locations = get_location_names_with_ids(
        ["Market Town: Gold Key"]
    )
    market_silver.add_locations(market_silver_locations, ThreeGoblinLocation)

    market_gold_locations = get_location_names_with_ids(
        ["Market Town: Bedside Bounty", "Market Town: Level Clear"]
    )
    market_gold.add_locations(market_gold_locations, ThreeGoblinLocation)

# Downtown:
    downtown_start_locations = get_location_names_with_ids(
        ["Downtown: Bronze Key", "Downtown: Viking Hat 1", "Downtown: Panoramic Pastry", "Downtown: Pretzel Pilferer"]
    )
    downtown_start.add_locations(downtown_start_locations, ThreeGoblinLocation)

    downtown_bronze_locations = get_location_names_with_ids(
        ["Downtown: Silver Key", "Downtown: Viking Hat 2"]
    )
    downtown_bronze.add_locations(downtown_bronze_locations, ThreeGoblinLocation)

    downtown_silver_locations = get_location_names_with_ids(
        ["Downtown: Purple Key", "Downtown: Gold Key", "Downtown: Wizard Hat 1",
         "Downtown: Alleyway Appetizer", "Downtown: Armory Appetite"]
    )
    downtown_silver.add_locations(downtown_silver_locations, ThreeGoblinLocation)

    downtown_gold_locations = get_location_names_with_ids(
        ["Downtown: Wizard Hat 2", "Downtown: Gutter Gourmet", "Downtown: Rampart Ration", "Downtown: Level Clear"]
    )
    downtown_gold.add_locations(downtown_gold_locations, ThreeGoblinLocation)

# Royal Castle:
    castle_start_locations = get_location_names_with_ids(
        ["Royal Castle: Bronze Key"]
    )
    castle_start.add_locations(castle_start_locations, ThreeGoblinLocation)

    castle_bronze_only_locations = get_location_names_with_ids(
        ["Royal Castle: Viking Hat 1", "Royal Castle: Rogue's Reward"]
    )
    castle_bronze_only.add_locations(castle_bronze_only_locations, ThreeGoblinLocation)

    castle_bronze_locations = get_location_names_with_ids(
        ["Royal Castle: Silver Key", "Royal Castle: Wizard Hat 1", "Royal Castle: Barracks Buffet"]
    )
    castle_bronze.add_locations(castle_bronze_locations, ThreeGoblinLocation)

    castle_silver_locations = get_location_names_with_ids(
        ["Royal Castle: Purple Key", "Royal Castle: Gold Key",
         "Royal Castle: Viking Hat 2", "Royal Castle: Wizard Hat 2",
         "Royal Castle: Portcullis Picnic", "Royal Castle: Tower Tidbit", "Royal Castle: Balcony Bites",
         "Royal Castle: Courtyard Crunch", "Royal Castle: Wishing Well Wonder", "Royal Castle: Roasted Relic"]
    )
    castle_silver.add_locations(castle_silver_locations, ThreeGoblinLocation)

    castle_gold_locations = get_location_names_with_ids(
        ["Royal Castle: Crown", "Royal Castle: Castle Crumbs",
         "Royal Castle: Bastion Banquet", "Royal Castle: Level Clear"]
    )
    castle_gold.add_locations(castle_gold_locations, ThreeGoblinLocation)

# Clamber Tower:
    tower_start_locations = get_location_names_with_ids(
        ["Clamber Tower: Bronze Key", "Clamber Tower: Viking Hat", "Clamber Tower: Wizard Hat",
         "Clamber Tower: Tower Picnic", "Clamber Tower: Elevator Entree", "Clamber Tower: Cellar Cravings"]
    )
    tower_start.add_locations(tower_start_locations, ThreeGoblinLocation)

    tower_bronze_locations = get_location_names_with_ids(
        ["Clamber Tower: Silver Key"]
    )
    tower_bronze.add_locations(tower_bronze_locations, ThreeGoblinLocation)

    tower_silver_locations = get_location_names_with_ids(
        ["Clamber Tower: Gold Key",
         "Clamber Tower: Perched Pretzel", "Clamber Tower: Backroom Bite", "Clamber Tower: Turret Hideaway",
         "Clamber Tower: Middle Morsel", "Clamber Tower: Banner Brunch", "Clamber Tower: Skyward Snack"]
    )
    tower_silver.add_locations(tower_silver_locations, ThreeGoblinLocation)

    tower_gold_locations = get_location_names_with_ids(
        ["Clamber Tower: Purple Key"]
    )
    tower_gold.add_locations(tower_gold_locations, ThreeGoblinLocation)

    tower_purple_locations = get_location_names_with_ids(
        ["Clamber Tower: Teetering Treat", "Clamber Tower: Level Clear"]
    )
    tower_purple.add_locations(tower_purple_locations, ThreeGoblinLocation)




def create_events(world: ThreeGoblinWorld) -> None:

    tutorial_key = world.get_region("Tutorial Key")
    forest_gold = world.get_region("Forest Village Gold")
    market_gold = world.get_region("Market Town Gold")
    downtown_gold = world.get_region("Downtown Gold")
    castle_gold = world.get_region("Royal Castle Gold")
    tower_purple = world.get_region("Clamber Tower Purple")

    tutorial_key.add_event(
        "Tutorial: Level Clear", "Level Complete",
        location_type=ThreeGoblinLocation, item_type=items.ThreeGoblinItem
    )
    forest_gold.add_event(
        "Forest Village: Level Clear", "Level Complete",
        location_type=ThreeGoblinLocation, item_type=items.ThreeGoblinItem
    )
    market_gold.add_event(
        "Market Town: Level Clear", "Level Complete",
        location_type=ThreeGoblinLocation, item_type=items.ThreeGoblinItem
    )
    downtown_gold.add_event(
        "Downtown: Level Clear", "Level Complete",
        location_type=ThreeGoblinLocation, item_type=items.ThreeGoblinItem
    )
    castle_gold.add_event(
        "Royal Castle: Level Clear", "Level Complete",
        location_type=ThreeGoblinLocation, item_type=items.ThreeGoblinItem
    )
    tower_purple.add_event(
        "Clamber Tower: Level Clear", "Level Complete",
        location_type=ThreeGoblinLocation, item_type=items.ThreeGoblinItem
    )

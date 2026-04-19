from __future__ import annotations

from typing import TYPE_CHECKING

from BaseClasses import Entrance, Region

if TYPE_CHECKING:
    from .world import ThreeGoblinWorld

# A region is a container for locations ("checks"), which connects to other regions via "Entrance" objects.
# Many games will model their Regions after physical in-game places, but you can also have more abstract regions.
# For a location to be in logic, its containing region must be reachable.
# The Entrances connecting regions can have rules - more on that in rules.py.
# This makes regions especially useful for traversal logic ("Can the player reach this part of the map?")

# Every location must be inside a region, and you must have at least one region.
# This is why we create regions first, and then later we create the locations (in locations.py).


def create_and_connect_regions(world: ThreeGoblinWorld) -> None:
    create_all_regions(world)
    connect_regions(world)


def create_all_regions(world: ThreeGoblinWorld) -> None:

    menu = Region("Menu", world.player, world.multiworld)

    tutorial_start = Region("Tutorial Start", world.player, world.multiworld)
    tutorial_key =  Region("Tutorial Key", world.player, world.multiworld)

    forest_start = Region("Forest Village Start", world.player, world.multiworld)
    forest_bronze = Region("Forest Village Bronze", world.player, world.multiworld)
    forest_silver = Region("Forest Village Silver", world.player, world.multiworld)
    forest_gold = Region("Forest Village Gold", world.player, world.multiworld)

    market_start = Region("Market Town Start", world.player, world.multiworld)
    market_hat = Region("Market Hat House", world.player, world.multiworld)
    market_bronze = Region("Market Town Bronze", world.player, world.multiworld)
    market_silver = Region("Market Town Silver", world.player, world.multiworld)
    market_gold = Region("Market Town Gold", world.player, world.multiworld)

    market_purple = Region("Market Town Purple", world.player, world.multiworld)
    market_purple_silver = Region("Market Town Purple & Silver", world.player, world.multiworld)
    market_purple_silver_gold = Region("Market Town Purple, Silver, & Gold", world.player, world.multiworld)



    downtown_start = Region("Downtown Start", world.player, world.multiworld)
    downtown_bronze = Region("Downtown Bronze", world.player, world.multiworld)
    downtown_silver = Region("Downtown Silver", world.player, world.multiworld)
    downtown_gold = Region("Downtown Gold", world.player, world.multiworld)

    downtown_purple = Region("Downtown Purple", world.player, world.multiworld)
    downtown_purple_gold = Region("Downtown Purple & Gold", world.player, world.multiworld)

    castle_start = Region("Royal Castle Start", world.player, world.multiworld)
    castle_bronze_only = Region("Royal Castle Bronze Only", world.player, world.multiworld)
    castle_bronze = Region("Royal Castle Bronze", world.player, world.multiworld)
    castle_silver = Region("Royal Castle Silver", world.player, world.multiworld)
    castle_gold = Region("Royal Castle Gold", world.player, world.multiworld)

    castle_purple = Region("Royal Castle Purple", world.player, world.multiworld)
    castle_purple_gold = Region("Royal Castle Purple & Gold", world.player, world.multiworld)

    tower_start = Region("Clamber Tower Start", world.player, world.multiworld)
    tower_bronze = Region("Clamber Tower Bronze", world.player, world.multiworld)
    tower_silver = Region("Clamber Tower Silver", world.player, world.multiworld)
    tower_gold = Region("Clamber Tower Gold", world.player, world.multiworld)
    tower_purple = Region("Clamber Tower Purple", world.player, world.multiworld)

    # Let's put all these regions in a list.
    regions = [menu, tutorial_start, tutorial_key,
               forest_start, forest_bronze, forest_silver, forest_gold,
               market_start, market_hat, market_bronze, market_silver, market_gold,
               market_purple, market_purple_silver, market_purple_silver_gold,
               downtown_start, downtown_bronze, downtown_silver, downtown_gold,
               downtown_purple, downtown_purple_gold,
               castle_start, castle_bronze_only, castle_bronze, castle_silver, castle_gold,
               castle_purple, castle_purple_gold,
               tower_start, tower_bronze, tower_silver, tower_gold, tower_purple
               ]

    world.multiworld.regions += regions


def connect_regions(world: ThreeGoblinWorld) -> None:

    menu = world.get_region("Menu")

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
    market_purple = world.get_region("Market Town Purple")
    market_purple_silver = world.get_region("Market Town Purple & Silver")
    market_purple_silver_gold = world.get_region("Market Town Purple, Silver, & Gold")

    downtown_start = world.get_region("Downtown Start")
    downtown_bronze = world.get_region("Downtown Bronze")
    downtown_silver = world.get_region("Downtown Silver")
    downtown_gold = world.get_region("Downtown Gold")
    downtown_purple = world.get_region("Downtown Purple")
    downtown_purple_gold = world.get_region("Downtown Purple & Gold")

    castle_start = world.get_region("Royal Castle Start")
    castle_bronze_only = Region("Royal Castle Bronze Only", world.player, world.multiworld)
    castle_bronze = world.get_region("Royal Castle Bronze")
    castle_silver = world.get_region("Royal Castle Silver")
    castle_gold = world.get_region("Royal Castle Gold")
    castle_purple = world.get_region("Royal Castle Purple")
    castle_purple_gold = world.get_region("Royal Castle Purple & Gold")

    tower_start = world.get_region("Clamber Tower Start")
    tower_bronze = world.get_region("Clamber Tower Bronze")
    tower_silver = world.get_region("Clamber Tower Silver")
    tower_gold = world.get_region("Clamber Tower Gold")
    tower_purple = world.get_region("Clamber Tower Purple")

# Connections:

    menu.connect(tutorial_start, "Tutorial Start")
    menu.connect(forest_start, "Forest Village Start")
    menu.connect(market_start, "Market Town Start")
    menu.connect(downtown_start, "Downtown Start")
    menu.connect(castle_start, "Royal Castle Start")
    menu.connect(tower_start, "Clamber Tower Start")

    tutorial_start.connect(tutorial_key, "Tutorial Start to Key")

    forest_start.connect(forest_bronze, "Forest Village Start to Bronze")
    forest_bronze.connect(forest_silver, "Forest Village Bronze to Silver")
    forest_silver.connect(forest_gold, "Forest Village Silver to Gold")

    market_start.connect(market_hat, "Market Town Start to Hat House")
    market_hat.connect(market_bronze, "Market Hat House to Bronze")
    market_bronze.connect(market_silver, "Market Town Bronze to Silver")
    market_silver.connect(market_gold, "Market Town Silver to Gold")

    market_start.connect(market_purple, "Market Town Start to Purple")
    market_purple.connect(market_bronze, "Market Town Purple to Bronze")
    market_start.connect(market_purple_silver, "Market Town Start to Purple & Silver")
    market_purple_silver.connect(market_silver, "Market Town Purple & Silver to Silver")
    market_start.connect(market_purple_silver_gold, "Market Town Start to Purple & Silver & Gold")
    market_purple_silver_gold.connect(market_gold, "Market Town Purple & Silver & Gold to Gold")

    downtown_start.connect(downtown_bronze, "Downtown Start to Bronze")
    downtown_bronze.connect(downtown_silver, "Downtown Bronze to Silver")
    downtown_silver.connect(downtown_gold, "Downtown Silver to Gold")

    downtown_start.connect(downtown_purple, "Downtown Start to Purple")
    downtown_purple.connect(downtown_bronze, "Downtown Purple to Bronze")
    downtown_purple.connect(downtown_silver, "Downtown Purple to Silver")
    downtown_start.connect(downtown_purple_gold, "Downtown Start to Purple & Gold")
    downtown_purple_gold.connect(downtown_gold, "Downtown Purple & Gold to Gold")

    castle_start.connect(castle_bronze_only, "Royal Castle Start to Bronze Only")
    castle_bronze_only.connect(castle_bronze, "Royal Castle Bronze Only to Bronze")
    castle_bronze.connect(castle_silver, "Royal Castle Bronze to Silver")
    castle_silver.connect(castle_gold, "Royal Castle Silver to Gold")

    castle_start.connect(castle_purple, "Royal Castle Start to Purple")
    castle_purple.connect(castle_bronze, "Royal Castle Purple to Bronze")
    castle_purple.connect(castle_silver, "Royal Castle Purple to Silver")
    castle_start.connect(castle_purple_gold, "Royal Castle Start to Purple & Gold")
    castle_purple_gold.connect(castle_gold, "Royal Castle Purple & Gold to Gold")

    tower_start.connect(tower_bronze, "Clamber Tower Start to Bronze")
    tower_bronze.connect(tower_silver, "Clamber Tower Bronze to Silver")
    tower_silver.connect(tower_gold, "Clamber Tower Silver to Gold")
    tower_gold.connect(tower_purple, "Clamber Tower Gold to Purple")
    tower_start.connect(tower_purple, "Clamber Tower Start to Purple")
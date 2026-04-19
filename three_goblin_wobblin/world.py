from collections.abc import Mapping
from typing import Any

# Imports of base Archipelago modules must be absolute.
from worlds.AutoWorld import World

# Imports of your world's files must be relative.
from . import items, locations, regions, rules, web_world
from . import options as threegoblin_options  # rename due to a name conflict with World.options

class ThreeGoblinWorld(World):
    """
    Three Goblin Wobblin is about three goblins... wobbling.
    """

    game = "Three Goblin Wobblin"

    web = web_world.ThreeGoblinWebWorld()

    options_dataclass = threegoblin_options.ThreeGoblinOptions
    options: threegoblin_options.ThreeGoblinOptions

    location_name_to_id = locations.LOCATION_NAME_TO_ID
    item_name_to_id = items.ITEM_NAME_TO_ID

    origin_region_name = "Menu"

    def create_regions(self) -> None:
        regions.create_and_connect_regions(self)
        locations.create_all_locations(self)

    def set_rules(self) -> None:
        rules.set_all_rules(self)

    def create_items(self) -> None:
        items.create_all_items(self)

    def create_item(self, name: str) -> items.ThreeGoblinItem:
        return items.create_item_with_correct_classification(self, name)

    def get_filler_item_name(self) -> str:
        return items.get_random_filler_item_name(self)

    def fill_slot_data(self) -> Mapping[str, Any]:
        return self.options.as_dict(
            "hard_mode", "progressive_keys"
        )

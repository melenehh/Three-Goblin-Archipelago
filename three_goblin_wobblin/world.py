from collections.abc import Mapping
from typing import Any

# Imports of base Archipelago modules must be absolute.
from worlds.AutoWorld import World

from Utils import visualize_regions

# Imports of your world's files must be relative.
from . import items, locations, regions, rules, web_world
from . import options as goblin_options  # rename due to a name conflict with World.options


class GoblinWorld(World):
    """
    Three Goblin Wobblin' is about three goblins... wobbling.
    """

    game = "Three Goblin Wobblin"

    web = web_world.GoblinWebWorld()

    options_dataclass = goblin_options.GoblinOptions
    options: goblin_options.GoblinOptions  # Common mistake: This has to be a colon (:), not an equals sign (=).

    location_name_to_id = locations.LOCATION_NAME_TO_ID
    item_name_to_id = items.ITEM_NAME_TO_ID

    origin_region_name = "Menu"

    def create_regions(self) -> None:
        regions.create_and_connect_regions(self)
        locations.create_all_locations(self)

    def set_rules(self) -> None:
        rules.set_all_rules(self)
        visualize_regions(self.multiworld.get_region("Menu", self.player), "my_world.puml")

    def create_items(self) -> None:
        items.create_all_items(self)

    def create_item(self, name: str) -> items.GoblinItem:
        return items.create_item_with_correct_classification(self, name)

    def get_filler_item_name(self) -> str:
        return items.get_random_filler_item_name(self)

    def fill_slot_data(self) -> Mapping[str, Any]:
        return self.options.as_dict(
            "hard_mode", "progressive_keys"
        )


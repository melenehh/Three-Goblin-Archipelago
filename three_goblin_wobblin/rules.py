from __future__ import annotations

from typing import TYPE_CHECKING

from BaseClasses import CollectionState
from worlds.generic.Rules import add_rule, set_rule
from rule_builder.rules import Has, HasAll, Rule
from rule_builder.options import OptionFilter
from .options import HardMode, ProgressiveKeys
from .maps import progressive_map, hat_map, key_map

from . import options as goblin_options

if TYPE_CHECKING:
    from .world import GoblinWorld

def set_all_rules(world: GoblinWorld) -> None:
    set_all_entrance_rules(world)
    set_all_location_rules(world)
    set_completion_condition(world)


def set_all_entrance_rules(world: GoblinWorld) -> None:

    tutorial_start_to_key = world.get_entrance("Tutorial Start to Key")

    forest_start_to_bronze = world.get_entrance("Forest Village Start to Bronze")
    forest_bronze_to_silver = world.get_entrance("Forest Village Bronze to Silver")
    forest_silver_to_gold = world.get_entrance("Forest Village Silver to Gold")

    market_start_to_hat = world.get_entrance("Market Town Start to Hat House")
    market_hat_to_bronze = world.get_entrance("Market Hat House to Bronze")
    market_bronze_to_silver = world.get_entrance("Market Town Bronze to Silver")
    market_silver_to_gold = world.get_entrance("Market Town Silver to Gold")

    market_purple_to_bronze = world.get_entrance("Market Town Purple to Bronze")
    market_purple_to_silver = world.get_entrance("Market Town Purple to Silver")
    market_purple_to_gold = world.get_entrance("Market Town Purple to Gold")

    downtown_start_to_bronze = world.get_entrance("Downtown Start to Bronze")
    downtown_bronze_to_silver = world.get_entrance("Downtown Bronze to Silver")
    downtown_silver_to_gold = world.get_entrance("Downtown Silver to Gold")

    downtown_purple_to_bronze = world.get_entrance("Downtown Purple to Bronze")
    downtown_purple_to_silver = world.get_entrance("Downtown Purple to Silver")
    downtown_purple_to_gold = world.get_entrance("Downtown Purple to Gold")

    castle_start_to_bronze_only = world.get_entrance("Royal Castle Start to Bronze Only")
    castle_bronze_only_to_bronze = world.get_entrance("Royal Castle Bronze Only to Bronze")
    castle_bronze_to_silver = world.get_entrance("Royal Castle Bronze to Silver")
    castle_silver_to_gold = world.get_entrance("Royal Castle Silver to Gold")

    castle_purple_to_bronze = world.get_entrance("Royal Castle Purple to Bronze")
    castle_purple_to_silver = world.get_entrance("Royal Castle Purple to Silver")
    castle_purple_to_gold = world.get_entrance("Royal Castle Purple to Gold")

    tower_start_to_bronze = world.get_entrance("Clamber Tower Start to Bronze")
    tower_bronze_to_silver = world.get_entrance("Clamber Tower Bronze to Silver")
    tower_silver_to_gold = world.get_entrance("Clamber Tower Silver to Gold")
    tower_gold_to_purple = world.get_entrance("Clamber Tower Gold to Purple")
    tower_start_to_purple = world.get_entrance("Clamber Tower Start to Purple")

    def rule_check(map_name, key_type):
        if world.options.progressive_keys:
            key_count = progressive_map[map_name][key_type]
            key = Has(f"{map_name} Progressive Key", count=key_count)
        else:
            key = key_map[map_name][key_type]


        if world.options.hard_mode:

            return key
        else:
            hat_count = hat_map[map_name][key_type]
            hat = Has(f"{map_name} Hat", count=hat_count)
            rule = key & hat
            return rule


# Tutorial
    world.set_rule(tutorial_start_to_key, lambda state: state.has("Tutorial Key", world.player))

# Forest Village
    world.set_rule(forest_start_to_bronze, rule_check("Forest Village", "Bronze"))
    world.set_rule(forest_bronze_to_silver, rule_check("Forest Village", "Silver"))
    world.set_rule(forest_silver_to_gold, rule_check("Forest Village", "Gold"))

# Market Town
    world.set_rule(market_start_to_hat, rule_check("Market Town", "Hat"))
    world.set_rule(market_hat_to_bronze, rule_check("Market Town", "Bronze"))
    world.set_rule(market_bronze_to_silver, rule_check("Market Town", "Silver"))
    world.set_rule(market_silver_to_gold, rule_check("Market Town", "Gold"))

    world.set_rule(market_purple_to_bronze, rule_check("Market Town", "Purple Bronze"))
    world.set_rule(market_purple_to_silver, rule_check("Market Town", "Purple Silver"))
    world.set_rule(market_purple_to_gold, rule_check("Market Town", "Purple Gold"))

# Downtown
    world.set_rule(downtown_start_to_bronze, rule_check("Downtown", "Bronze"))
    world.set_rule(downtown_bronze_to_silver, rule_check("Downtown", "Silver"))
    world.set_rule(downtown_silver_to_gold, rule_check("Downtown", "Gold"))

    world.set_rule(downtown_purple_to_bronze, rule_check("Downtown", "Purple Bronze"))
    world.set_rule(downtown_purple_to_silver, rule_check("Downtown", "Purple Silver"))
    world.set_rule(downtown_purple_to_gold, rule_check("Downtown", "Purple Gold"))

# Royal Castle
    world.set_rule(castle_start_to_bronze_only, rule_check("Royal Castle", "Bronze Only"))
    world.set_rule(castle_bronze_only_to_bronze, rule_check("Royal Castle", "Bronze"))
    world.set_rule(castle_bronze_to_silver, rule_check("Royal Castle", "Silver"))
    world.set_rule(castle_silver_to_gold, rule_check("Royal Castle", "Gold"))

    world.set_rule(castle_purple_to_bronze, rule_check("Royal Castle", "Purple Bronze"))
    world.set_rule(castle_purple_to_silver, rule_check("Royal Castle", "Purple Silver"))
    world.set_rule(castle_purple_to_gold, rule_check("Royal Castle", "Purple Gold"))

# Clamber Tower
    world.set_rule(tower_start_to_bronze, rule_check("Clamber Tower", "Bronze"))
    world.set_rule(tower_bronze_to_silver, rule_check("Clamber Tower", "Silver"))
    world.set_rule(tower_silver_to_gold, rule_check("Clamber Tower", "Gold"))
    world.set_rule(tower_gold_to_purple, rule_check("Clamber Tower", "Purple"))
    world.set_rule(tower_start_to_purple, rule_check("Clamber Tower", "Purple Start"))


def set_all_location_rules(world: GoblinWorld) -> None:
    x = 1


def set_completion_condition(world: GoblinWorld) -> None:
    world.multiworld.completion_condition[world.player] = lambda state: state.has("Level Complete", world.player, 6)

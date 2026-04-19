from __future__ import annotations

from typing import TYPE_CHECKING

from BaseClasses import CollectionState
from worlds.generic.Rules import add_rule, set_rule

if TYPE_CHECKING:
    from .world import ThreeGoblinWorld


def set_all_rules(world: ThreeGoblinWorld) -> None:

    set_all_entrance_rules(world)
    set_all_location_rules(world)
    set_completion_condition(world)


def set_all_entrance_rules(world: ThreeGoblinWorld) -> None:
    # First, we need to actually grab our entrances. Luckily, there is a helper method for this.
    
    menu_to_tutorial = world.get_entrance("Tutorial Start")
    menu_to_forest = world.get_entrance("Forest Village Start")
    menu_to_market = world.get_entrance("Market Town Start")
    menu_to_downtown = world.get_entrance("Downtown Start")
    menu_to_castle = world.get_entrance("Royal Castle Start")
    menu_to_tower = world.get_entrance("Clamber Tower Start")

    tutorial_start_to_key = world.get_entrance("Tutorial Start to Key")

    forest_start_to_bronze = world.get_entrance("Forest Village Start to Bronze")
    forest_bronze_to_silver = world.get_entrance("Forest Village Bronze to Silver")
    forest_silver_to_gold = world.get_entrance("Forest Village Silver to Gold")

    market_start_to_hat = world.get_entrance("Market Town Start to Hat House")
    market_hat_to_bronze = world.get_entrance("Market Hat House to Bronze")
    market_bronze_to_silver = world.get_entrance("Market Town Bronze to Silver")
    market_silver_to_gold = world.get_entrance("Market Town Silver to Gold")

    market_start_to_purple = world.get_entrance("Market Town Start to Purple")
    market_purple_to_bronze = world.get_entrance("Market Town Purple to Bronze")
    market_start_to_purple_silver = world.get_entrance("Market Town Start to Purple & Silver")
    market_purple_silver_to_silver = world.get_entrance("Market Town Purple & Silver to Silver")
    market_start_to_purple_silver_gold = world.get_entrance("Market Town Start to Purple & Silver & Gold")
    market_purple_silver_gold_to_gold = world.get_entrance("Market Town Purple & Silver & Gold to Gold")

    downtown_start_to_bronze = world.get_entrance("Downtown Start to Bronze")
    downtown_bronze_to_silver = world.get_entrance("Downtown Bronze to Silver")
    downtown_silver_to_gold = world.get_entrance("Downtown Silver to Gold")

    downtown_start_to_purple = world.get_entrance("Downtown Start to Purple")
    downtown_purple_to_bronze = world.get_entrance("Downtown Purple to Bronze")
    downtown_purple_to_silver = world.get_entrance("Downtown Purple to Silver")
    downtown_start_to_purple_gold = world.get_entrance("Downtown Start to Purple & Gold")
    downtown_purple_gold_to_gold = world.get_entrance("Downtown Purple & Gold to Gold")

    castle_start_to_bronze_only = world.get_entrance("Royal Castle Start to Bronze Only")
    castle_bronze_only_to_bronze = world.get_entrance("Royal Castle Bronze Only to Bronze")
    castle_bronze_to_silver = world.get_entrance("Royal Castle Bronze to Silver")
    castle_silver_to_gold = world.get_entrance("Royal Castle Silver to Gold")

    castle_start_to_purple = world.get_entrance("Royal Castle Start to Purple")
    castle_purple_to_bronze = world.get_entrance("Royal Castle Purple to Bronze")
    castle_purple_to_silver = world.get_entrance("Royal Castle Purple to Silver")
    castle_start_to_purple_gold = world.get_entrance("Royal Castle Start to Purple & Gold")
    castle_purple_gold_to_gold = world.get_entrance("Royal Castle Purple & Gold to Gold")

    tower_start_to_bronze = world.get_entrance("Clamber Tower Start to Bronze")
    tower_bronze_to_silver = world.get_entrance("Clamber Tower Bronze to Silver")
    tower_silver_to_gold = world.get_entrance("Clamber Tower Silver to Gold")
    tower_gold_to_purple = world.get_entrance("Clamber Tower Gold to Purple")
    tower_start_to_purple = world.get_entrance("Clamber Tower Start to Purple")


    set_rule(tutorial_start_to_key, lambda state: state.has("Tutorial Key", world.player))

    set_rule(forest_start_to_bronze, lambda state: ((state.has("Forest Village Bronze Key", world.player)
                                                   or
                                                   state.has("Forest Village Progressive Key", world.player, 1))
                                                   and
                                                   state.has("Forest Village Hat", world.player, 1)))
    set_rule(forest_bronze_to_silver, lambda state: ((state.has("Forest Village Silver Key", world.player)
                                                    or
                                                    state.has("Forest Village Progressive Key", world.player, 3))
                                                   and
                                                   state.has("Forest Village Hat", world.player, 2)))
    set_rule(forest_silver_to_gold, lambda state: ((state.has("Forest Village Gold Key", world.player)
                                                   or
                                                   state.has("Forest Village Progressive Key", world.player, 4))
                                                   and
                                                   state.has("Forest Village Hat", world.player, 4)))


    set_rule(market_start_to_hat, lambda state: (state.has("Market Town Bronze Key", world.player)
                                                 or
                                                 state.has("Market Town Progressive Key", world.player, 1)))

    set_rule(market_hat_to_bronze, lambda state: ((state.has("Market Town Bronze Key", world.player)
                                                  or
                                                  state.has("Market Town Progressive Key", world.player, 1))
                                                  and
                                                  state.has("Market Town Hat", world.player, 1)))

    set_rule(market_bronze_to_silver, lambda state: ((state.has("Market Town Silver Key", world.player)
                                                      or
                                                      state.has("Market Town Progressive Key", world.player, 3))
                                                      and
                                                      state.has("Market Town Hat", world.player, 2)))

    set_rule(market_silver_to_gold, lambda state: ((state.has("Market Town Gold Key", world.player)
                                                   or
                                                   state.has("Market Town Progressive Key", world.player, 4))
                                                   and
                                                   state.has("Market Town Hat", world.player, 4)))


    set_rule(market_purple_to_bronze, lambda state: (state.has("Market Town Purple Key", world.player)))
    set_rule(market_purple_silver_to_silver, lambda state: ((state.has("Market Town Silver Key", world.player)
                                                             and
                                                             state.has("Market Town Purple Key", world.player)))
                                                             and
                                                             state.has("Market Town Hat", world.player, 2))

    set_rule(market_purple_silver_gold_to_gold, lambda state: ((state.has("Market Town Silver Key", world.player)
                                                               and
                                                               state.has("Market Town Purple Key", world.player)
                                                               and
                                                               state.has("Market Town Gold Key", world.player))
                                                               and
                                                               state.has("Market Town Hat", world.player, 4)))


    set_rule(downtown_start_to_bronze, lambda state: ((state.has("Downtown Bronze Key", world.player)
                                                      or
                                                      state.has("Downtown Progressive Key", world.player, 1))
                                                      and
                                                      state.has("Downtown Hat", world.player, 1)))
    set_rule(downtown_bronze_to_silver, lambda state: ((state.has("Downtown Silver Key", world.player)
                                                        or
                                                        state.has("Downtown Progressive Key", world.player, 2))
                                                        and
                                                        state.has("Downtown Hat", world.player, 2)))
    set_rule(downtown_silver_to_gold, lambda state: ((state.has("Downtown Gold Key", world.player)
                                                      and
                                                      state.has("Downtown Purple Key", world.player)
                                                      or
                                                      state.has("Downtown Progressive Key", world.player, 4))
                                                      and
                                                      state.has("Downtown Hat", world.player, 4)))

    set_rule(downtown_purple_to_bronze, lambda state: ((state.has("Downtown Purple Key", world.player))
                                                      and
                                                      state.has("Downtown Hat", world.player, 1)))

    set_rule(downtown_purple_to_silver, lambda state: ((state.has("Downtown Purple Key", world.player))
                                                      and
                                                      state.has("Downtown Hat", world.player, 2)))

    set_rule(downtown_purple_gold_to_gold, lambda state: ((state.has("Downtown Purple Key", world.player)
                                                           and
                                                           state.has("Downtown Gold Key", world.player))
                                                           and
                                                           state.has("Downtown Hat", world.player, 4)))

    set_rule(castle_start_to_bronze_only, lambda state: (state.has("Royal Castle Bronze Key", world.player))
                                                         or
                                                         state.has("Royal Castle Progressive Key", world.player, 1))
    set_rule(castle_bronze_only_to_bronze, lambda state: ((state.has("Royal Castle Bronze Key", world.player)
                                                           or
                                                           state.has("Royal Castle Progressive Key", world.player, 1))
                                                           and
                                                           state.has("Royal Castle Hat", world.player, 1)))

    set_rule(castle_bronze_to_silver, lambda state: (((state.has("Royal Castle Silver Key", world.player)
                                                      and
                                                      state.has("Royal Castle Purple Key", world.player))
                                                      or
                                                      state.has("Royal Castle Progressive Key", world.player, 3))
                                                      and
                                                      state.has("Royal Castle Hat", world.player, 2)))

    set_rule(castle_silver_to_gold, lambda state: (((state.has("Royal Castle Gold Key", world.player)
                                                    and
                                                    state.has("Royal Castle Purple Key", world.player))
                                                    or
                                                    state.has("Royal Castle Progressive Key", world.player, 4))
                                                    and
                                                    state.has("Royal Castle Hat", world.player, 4)))

    set_rule(castle_purple_to_bronze, lambda state: (state.has("Royal Castle Purple Key", world.player)
                                                    and
                                                    state.has("Royal Castle Hat", world.player, 2)))

    set_rule(castle_purple_to_silver, lambda state: (state.has("Royal Castle Purple Key", world.player)
                                                        and
                                                        state.has("Royal Castle Hat", world.player, 4)))
    set_rule(castle_purple_gold_to_gold, lambda state: ((state.has("Royal Castle Purple Key", world.player)
                                                        and
                                                        state.has("Royal Castle Gold Key", world.player))
                                                        and
                                                        state.has("Royal Castle Hat", world.player, 5)))

    set_rule(tower_start_to_bronze, lambda state: ((state.has("Clamber Tower Bronze Key", world.player)
                                                    or
                                                    state.has("Clamber Tower Progressive Key", world.player, 1))
                                                    and
                                                    state.has("Clamber Tower Hat", world.player, 2)))

    set_rule(tower_bronze_to_silver, lambda state: (state.has("Clamber Tower Silver Key", world.player))
                                                    or
                                                    state.has("Clamber Tower Progressive Key", world.player, 1))
    set_rule(tower_silver_to_gold, lambda state: (state.has("Clamber Tower Gold Key", world.player))
                                                    or
                                                    state.has("Clamber Tower Progressive Key", world.player, 1))
    set_rule(tower_gold_to_purple, lambda state: (state.has("Clamber Tower Purple Key", world.player))
                                                    or
                                                    state.has("Clamber Tower Progressive Key", world.player, 1))
    set_rule(tower_start_to_purple, lambda state: state.has("Clamber Tower Purple Key", world.player))

def set_completion_condition(world: ThreeGoblinWorld) -> None:

    world.multiworld.completion_condition[world.player] = lambda state: state.has("Level Complete", world.player, 6)